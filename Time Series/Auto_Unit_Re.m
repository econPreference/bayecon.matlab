function Output = Auto_Unit_Re(data,a0,d0,phi0,PHI0,n0,n1,c0,C0)

coder.extrinsic('format')
coder.extrinsic('clc')
coder.extrinsic('mvnpdf')
coder.extrinsic('makedist')

format shortG

T = rows(data);
Y = data(:,1);
Xt = 1:T;
Xt = Xt';
s = rows(c0) - 1;
X1 = zeros(T,s+1);
X1(:,1) = ones(T,1);
if s > 0
    for i = 1:s
        X1(:,i+1) = Xt.^i;
    end
end
X = data(:,2);
k = 1;

p = rows(phi0);
precphi0 = invpd(PHI0);
precC0 = invpd(C0);
n = n0 + n1;

cm = zeros(n,s+1);
sig2m = zeros(n,1);   
phim = zeros(n,p);    
Sigmam = zeros(n,p*p);
logpostm = zeros(n,1);

if a0*d0 > 0
    sig2 = 0.5*d0/(0.5*a0 - 1);
else
    sig2 = stdc(Y)^2;
end
sig2_inv = 1/sig2;

if p == 1
    G = phi0;
else
    G = [phi0';eye(p-1) zeros(p-1,1)];
end

phi = phi0;
c = c0;
b = 1;
e1 = zeros(p,1);
e1(1) = 1;
X_p = X(1:p,:);
X1_p = X1(1:p,:);
Y_p = Y(1:p,1);
X_hat = zeros(T-p,k);
X1_hat = zeros(T-p,s+1);
Y_hat = zeros(T-p,1);
kron_G = kron(G,G);
q = rows(kron_G);

vec_Sigma = inv(eye(q) - kron_G)*vec(e1*e1');  %#ok<*MINV>
Sigma = reshape(vec_Sigma,p,p);
inv_Sigma = inv(Sigma);
logpost = 0;

% Calculating Normalization constant of phi

disp(' ')
disp('Calculating Normalization constant...')
disp(' ')
box.phi0 = phi0;
box.PHI0 = PHI0;
Z_phi = normC(@phi_f,box,@phi_g,box,@phi_gs,box,30000);

for iter = 1:n
 
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        disp('Under H0 : It is I(1) process        ')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[beta: ]')
        disp(b')
        disp('[c: ]')
        disp(c')
        disp('[phi: ]')
        disp(phi')
        disp('[sigma2: ]')
        disp(sig2)
        disp('[log posterior: ]')
        disp(logpost)
    end
    for i = p+1 : T
        X_hat(i - p,:) = X(i,:) - phi'*X(i-1:-1:i-p,:);
        X1_hat(i - p,:) = X1(i,:) - phi'*X1(i-1:-1:i-p,:);
        Y_hat(i - p,1) = Y(i,1) - phi'*Y(i-1:-1:i-p,1);
    end
    
    b = 1;
        
    c = Gen_c(X1_p,Y_p - X_p*b,X1_hat,Y_hat - X_hat*b,inv_Sigma,c0,precC0,sig2_inv,p,T);
    cm(iter,:) = c';
    
    sig2 = Gen_sig2(Y_p,[X_p X1_p],[X_hat X1_hat],Y_hat,inv_Sigma,[b;c],a0,d0);
    sig2_inv = 1/sig2(1,1);
    sig2m(iter,1) = sig2(1,1); 
    
    G = Gen_G(Y,[X X1],Y_p,[X_p X1_p],Sigma,inv_Sigma,[b;c],sig2_inv,G,phi0,precphi0,PHI0);
    phi = G(1,:)';
    phim(iter,:) = phi';    
    
    kron_G = kron(G,G);
    q = rows(kron_G);
    
    vec_Sigma = inv(eye(q) - kron_G)*vec(e1*e1');  %#ok<*MINV>
    Sigma = reshape(vec_Sigma,p,p);
    Sigma = .5*(Sigma+ Sigma');
    inv_Sigma = inv(Sigma);
    vec_Sigma = vec(Sigma)';
    Sigmam(iter,:) = vec_Sigma(1,:);

    % likelihood
    lik_1 = 0; %#ok<NASGU>
    lik_1 = lnpdfmvn4(Y_p,[X_p X1_p]*[b;c],chol(sig2*Sigma));
    lik_2 = 0; %#ok<NASGU>
    lik_2 = lnpdfmvn4(Y_hat,[X_hat X1_hat]*[b;c],chol(sig2*eye(T-p)));
    loglik = lik_1 + lik_2;
    
    % prior
    logprior_sig2 = 0; %#ok<NASGU>
    logprior_sig2 = lnpdfig(sig2, a0/2, d0/2);
    logprior_phi = 0; %#ok<NASGU>
    logprior_phi = lnpdfmvn4(phi,phi0,chol(PHI0)) - log(Z_phi);
    logprior_c = 0; %#ok<NASGU>
    logprior_c = lnpdfmvn4(c,c0,chol(C0));
    logprior = logprior_sig2 + logprior_phi + logprior_c;
    
    logpost = loglik + logprior;
    logpostm(iter,1) = logpost;

end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')

cm = cm(n0+1:n,:);
sig2m = sig2m(n0+1:n);
phim = phim(n0+1:n,:);
% Sigmam = Sigmam(n0+1:n,:);
logpostm = logpostm(n0+1:n,:);

Output.cm = cm;
Output.phim = phim;
Output.sigma2m = sig2m;
Output.logpostm = logpostm;    

end

function G = Gen_G(Y,X,Y_p,X_p,Sigma0,inv_Sigma0,beta,sig2_inv,G0,phi0,precphi0,PHI0)

p = rows(phi0);
T = rows(X);

e1 = zeros(p,1);
e1(1) = 1;

y_star = Y - X*beta;
Y_starY_star = zeros(p,p);
Y_stary_star = zeros(p,1);
for t = (p+1) : T
    Y_starY_star = Y_starY_star + y_star(t-1:-1:t-p,1)*y_star(t-1:-1:t-p,1)';
    Y_stary_star = Y_stary_star + y_star(t-1:-1:t-p,1)*y_star(t,1);
end
vec_ = vec(Y_starY_star);
vec_ = vec_(:,1);
center_hat = zeros(p^2,1);
for i = 1:p^2
    center_hat(i,1) = sig2_inv(1,1)*vec_(i,1);
end
inv_PHI_hat = reshape(center_hat,p,p) + precphi0;
PHI_hat = inv(inv_PHI_hat);
center_hat = zeros(p,1);
for i = 1:p
    center_hat(i,1) = sig2_inv(1,1)*Y_stary_star(i,1);
end
A = center_hat + precphi0*phi0;

iter = 0;
while 1
    proposal = PHI_hat*A + chol(PHI_hat)'*randn(p,1);
    G = [proposal';eye(p-1) zeros(p-1,1)];
    eigen = eig(G);
    imagine = imag(eigen).^2;
    absolute = abs(eigen).^2;
    test = sqrt(absolute + imagine)<1;
    if min(test) == 1
        break,end
    iter = iter + 1;
    if iter > 1000
        G = G0;
        break
    end
end

kron_G = kron(G,G);
q = rows(kron_G);
vec_Sigma = inv(eye(q) - kron_G)*vec(e1*e1');  %#ok<*MINV>
Sigma = reshape(vec_Sigma,p,p);
inv_Sigma = inv(Sigma);

rss = 0;
for t = (p+1) : T
    rss = rss + (y_star(t,1) - y_star(t-1:-1:t-p,1)'*G(1,:)')'*(y_star(t,1) - y_star(t-1:-1:t-p,1)'*G(1,:)');
end
numer1 = -.5*log(det(Sigma)) -.5*sig2_inv*(Y_p - X_p*beta)'*inv_Sigma*(Y_p - X_p*beta) ...
    -.5*sig2_inv*rss + lnpdfmvn(G(1,:)',phi0,PHI0);

rss = 0;
for t = (p+1) : T
    rss = rss + (y_star(t,1) - y_star(t-1:-1:t-p,1)'*G0(1,:)')'*(y_star(t,1) - y_star(t-1:-1:t-p,1)'*G0(1,:)');
end
deno1 = -.5*log(det(Sigma0)) -.5*sig2_inv*(Y_p - X_p*beta)'*inv_Sigma0*(Y_p - X_p*beta) ...
    -.5*sig2_inv*rss + lnpdfmvn(G0(1,:)',phi0,PHI0);
PHI_hat = 0.5*(PHI_hat + PHI_hat');
numer2 = lnpdfmvn(G0(1,:)',PHI_hat*A,PHI_hat);
deno2 = lnpdfmvn(G(1,:)',PHI_hat*A,PHI_hat);

MH_rate = min(numer1 + numer2 - deno1 - deno2,0);
accept = log(rand(1,1)) < MH_rate;

if accept(1,1) == 0
    G = G0;
end

end

function sig2 = Gen_sig2(Y_p,X_p,X_hat,Y_hat,inv_Sigma,beta,a0,d0)

p = rows(inv_Sigma);
T = rows(X_p) + rows(X_hat);
v1 = a0 + T;

ehat = 0;
for i = 1:T - p
    ehat = ehat + (Y_hat(i,1) - X_hat(i,:)*beta)'*(Y_hat(i,1) - X_hat(i,:)*beta);
end
d1 = d0 + (Y_p - X_p*beta)'*inv_Sigma*(Y_p - X_p*beta) + ehat;

sig2 = randig(v1/2,d1/2,1,1); 

end

function beta = Gen_c(X_p,Y_p,X_hat,Y_hat,inv_Sigma,b0,precb0,sig2_inv,p,T)

k = cols(X_hat);
X_hatX_hat = zeros(k,k);
X_hatY_hat = zeros(k,1);

for i = p+1 : T
    X_hatX_hat = X_hatX_hat + X_hat(i - p, :)'*X_hat(i - p, :);
    X_hatY_hat = X_hatY_hat + X_hat(i - p, :)'*Y_hat(i - p, 1);
end

B1_inv = sig2_inv(1,1).*(X_p'*inv_Sigma*X_p + X_hatX_hat) + precb0 ;

lastwarn('')
B1 = inv(B1_inv);
[warnMsg, MSGID] = lastwarn;
if isempty(warnMsg) ~= 1
    warning('off', MSGID)
    B1 = inv(sym(B1_inv));
end

A = sig2_inv(1,1).*(X_p'*inv_Sigma*Y_p + X_hatY_hat) + precb0*b0;
beta = double(B1*A + chol(B1)'*randn(cols(X_p),1)); % beta sampling го╠Б

end

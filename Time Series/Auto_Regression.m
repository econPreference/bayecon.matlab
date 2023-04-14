function Output = Auto_Regression(data,xind,yind,b0,B0,a0,d0,phi0,PHI0,n0,n1,forecast,x_f,ML)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

model = cols(data);
T = rows(data);

if model == 1
    Y = data;
    X = ones(T,1);
    k = 1;
else
    Y = data(:,yind);
    X = data(:,xind);
    k = cols(X);
end

p = rows(phi0);
precb0 = invpd(B0);
precphi0 = invpd(PHI0);
n = n0 + n1;

if forecast == 'Y'
    Is_forecasting = 1; 
else
    Is_forecasting = 0;  
end


yfm = zeros(n,1);
bm = zeros(n,k);      
sig2m = zeros(n,1);   
phim = zeros(n,p);    
Sigmam = zeros(n,p*p);


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
b = b0;
e1 = zeros(p,1);
e1(1) = 1;
X_p = X(1:p,:);
Y_p = Y(1:p,1);

kron_G = kron(G,G);
q = rows(kron_G);

vec_Sigma = inv(eye(q) - kron_G)*vec(e1*e1');  %#ok<*MINV>
Sigma = reshape(vec_Sigma,p,p);
inv_Sigma = inv(Sigma);

lnpost_hat = -exp(20);
b_hat = b0;
phi_hat = phi0;
sig2_hat = 0.5*d0/(0.5*a0 - 1);
if ML == 'Y'
    iter_number = 5;
else
    iter_number = 100;
end
    
for iter = 1:n
 
    [~, resid] = minresid(iter,iter_number);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[beta: ]')
        disp(b')
        disp('[phi: ]')
        disp(phi')
        disp('[sigma2: ]')
        disp(sig2)
    end
    
    X_hat = zeros(T - p, k);
    Y_hat = zeros(T - p, 1);
    X_hatX_hat = zeros(k,k);
    X_hatY_hat = zeros(k,1);
    
    for i = p+1 : T
        X_hat(i - p,:) = X(i,:) - phi'*X(i-1:-1:i-p,:);
        Y_hat(i - p,1) = Y(i,1) - phi'*Y(i-1:-1:i-p,1);
        X_hatX_hat = X_hatX_hat + X_hat(i - p, :)'*X_hat(i - p, :);
        X_hatY_hat = X_hatY_hat + X_hat(i - p, :)'*Y_hat(i - p, 1);
    end
    b = Gen_beta(X_p,Y_p,X_hatX_hat,X_hatY_hat,inv_Sigma,b0,precb0,sig2_inv);
    bm(iter,:) = b';

    sig2 = Gen_sig2(Y_p,X_p,X_hat,Y_hat,inv_Sigma,b,a0,d0);
    sig2_inv = 1/sig2(1,1);
    sig2m(iter,1) = sig2(1,1); 
    
    G = Gen_G(Y,X,Y_p,X_p,Sigma,inv_Sigma,b,sig2_inv,G,phi0,precphi0,PHI0);
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
    
    if Is_forecasting == 1
        xT_hat = x_f' - phi'*X(end:-1:end-p+1,:);
        yT_hat = xT_hat*b + sqrt(sig2)*randn(1,1);
        yf = yT_hat + phi'*Y(end:-1:end-p+1,1);
        yfm(iter, 1) = yf(1,1);
    end
    
    if ML == 'Y' && iter > n0
        sum_A = sumc(lnpdfmvn(Y_p, X_p*b, sig2.*Sigma));
        sum_B = sumc(lnpdfmvn(Y_hat, X_hat*b, sig2(1,1).*eye(T-p)));
        lnlik1 = sum_A(1,1) + sum_B(1,1);
        beta_prior = lnpdfmvn(b,b0,B0);
        phi_prior = lnpdfmvn(phi,phi0,PHI0);
        sig2_prior = lnpdfig(sig2,a0/2,d0/2);
        lnprior1 = beta_prior+phi_prior+sig2_prior;
        lnpost1 = lnlik1 + lnprior1;
        
        if lnpost1(1,1) > lnpost_hat
            b_hat = b;
            phi_hat = phi;
            sig2_hat = sig2;
            lnpost_hat = lnpost1(1,1);
        end
    end
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')

sig2m = sig2m(n0+1:n);
phim = phim(n0+1:n,:);
% Sigmam = Sigmam(n0+1:n,:);
bm = bm(n0+1:n,:);

if Is_forecasting == 1
    yfm = yfm(n0+1:n,:);
end
lnML = 0;
if ML == 'Y'

    MHm = [bm phim sig2m];
                      
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');

    ln_joint_post = lnpdfmvn([b_hat;phi_hat;sig2_hat],postmean,postvarcov);

    lnML = lnpost_hat - ln_joint_post;
end
Output.yfm = yfm;
Output.betam = bm;
Output.phim = phim;
Output.sigma2m = sig2m;
Output.lnML = lnML;
    
end

function beta = Gen_beta(X_p,Y_p,X_hatX_hat,X_hatY_hat,inv_Sigma,b0,precb0,sig2_inv)

B1_inv = sig2_inv(1,1).*(X_p'*inv_Sigma*X_p + X_hatX_hat) + precb0 ;
B1 = inv(B1_inv);
A = sig2_inv(1,1).*(X_p'*inv_Sigma*Y_p + X_hatY_hat) + precb0*b0;
beta = B1*A + chol(B1)'*randn(cols(X_p),1); % beta sampling го╠Б

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
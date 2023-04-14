function Output = VS_dirac(y,X,aw,bw,cons_option,n0,n1)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

%% Description
% It follow notations of Malsiner-Walli, Wagner(2011) under g-prior.
% X: Do not include constant term.
% cons_option: 1 if want to include constant term.

%% Setting

n = n0 + n1;
d = cols(X);

% Initial value
delta = ones(d,1);
sig2 = std(y);
N = rows(y);
g = max(N,d^2);
mu = 0;
omega = 1;

% Saving room
omegam = zeros(n,1);
alpham = zeros(n,d);
deltam = zeros(n,d);
sig2m = zeros(n,1);
mum = zeros(n,1);

for iter = 1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('delta: ')
        disp(delta')
%         disp('alpha: ')
%         disp(alpha')
        disp('[mu sig2 omega]')
        disp([mu sig2 omega])
    end

    %% Step 1. Sampling omega
    
    omega = randDir([aw + sum(delta);bw + d - sum(delta)]);
    omega = omega(1,1);
    omegam(iter,1) = omega;
    
    %% Step 2. Sampling alpha
    
    alpha = Sampling_alpha(y,X,delta,sig2,g);
    alpham(iter,:) = alpha';
    
    %% Step 3. Sampling delta, sig2, mu
    
    [delta, sig2, mu] = Sampling_delta_sig2_mu(y,X,delta,omega,g,cons_option);
    deltam(iter,:) = delta';
    sig2m(iter,1) = sig2;
    mum(iter,1) = mu;
    
end

% burn-in
omegam = omegam(n0+1:n,:);
alpham = alpham(n0+1:n,:);
deltam = deltam(n0+1:n,:);
sig2m = sig2m(n0+1:n,:);
mum = mum(n0+1:n,:);

% Saving Output
Output.omegam = omegam;
Output.alpham = alpham;
Output.gammam = deltam;
Output.sig2m = sig2m;
Output.mum = mum;

end

function [delta1, sig2, mu] = Sampling_delta_sig2_mu(y,X,delta,omega,g,cons_option)

yc = demeanc(y);
d = cols(X);
T = rows(X);
delta1 = logical(delta);
sN = (T - 1)/2;

% Sampling delta

for idx = 1:d
    
    delta_aux0 = delta1;
    delta_aux1 = delta1;
    delta_aux0(idx,1) = 0;
    delta_aux1(idx,1) = 1;
    
    X0 = X(:,delta_aux0);
    d0 = cols(X0);
    
    X1 = X(:,delta_aux1);
    d1 = cols(X1);
    
    detAN_detA00 = (1+g)^(-d0);
    detAN_detA01 = (1+g)^(-d1);
    
%     NCons = sym(sqrt(T)*(2*pi)^((T-1)/2));
    SN0 = 0.5*(yc'*yc - (g/(g+1)).*yc'*X0/(X0'*X0)*X0'*yc);
    SN1 = 0.5*(yc'*yc - (g/(g+1)).*yc'*X1/(X1'*X1)*X1'*yc);
    
    R = (sqrt(detAN_detA00)*((SN1/SN0)^sN))/...
        (sqrt(detAN_detA01));
    aux = ((1 - omega)*R)/omega;
    p = 1/(1 + aux);
    delta1(idx,1) = (rand<p);

end

% Sampling sig2

X0 = X(:,delta1);
SN0 = 0.5*(yc'*yc - (g/(g+1)).*yc'*X0/(X0'*X0)*X0'*yc);
sig2 = randig(sN,SN0,1,1);

% Sampling mu
if cons_option == 1
    mu = mean(y) + sqrt(sig2/T)*randn;
else
    mu = 0;
end

delta1 = double(delta1);

end

function alpha1 = Sampling_alpha(y,X,delta,sig2,g)

alpha1 = zeros(cols(X),1);
yc = demeanc(y);

idx0 = find(delta == 0);
alpha1(idx0,1) = 0; %#ok<FNDSB>
idx1 = find(delta == 1);
Xd = X(:,idx1);
Ad = (g/(g+1)).*inv(Xd'*Xd);
ad = Ad*Xd'*yc;

alpha1(idx1,1) = ad + chol(Ad.*sig2)'*randn(sum(delta),1);

end
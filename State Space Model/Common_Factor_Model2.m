function Output = Common_Factor_Model(y,h0,H0,g0,G0,a0,d0,av,dv,scale,n0,n1)

coder.extrinsic('format')
coder.extrinsic('clc')

n = n0 + n1;
T = rows(y);
N = cols(y);

%% Storage Room for sample

Hm = zeros(n, N);
betam = zeros(n, T);
sig2m = zeros(n, N);
Gm = zeros(n,1);
mum = zeros(n,1);
sig2vm = zeros(n,1);
decomm = zeros(n,N);

%% Initial values

PC  = PCA(y);
PC = PC.Principal_Component;
PC = PC(:,1);

% Normalizing H(1,1) to one
X = [ones(rows(PC),1) PC];
H = (X'*X)\(X'*y);
PC = PC*H(2,1);

% Deriving initial values
X = [ones(rows(PC),1) PC];
Pm = (X/(X'*X))*X';
H = (X'*X)\(X'*y);
H = H(2,:)';
sig2 = diag((y'*(eye(length(Pm)) - Pm)*y))/(T - 2);

X = [ones(rows(PC) - 1,1) PC(1:end-1,1)];
Y = PC(2:end,1);
phi = (X'*X)\(X'*Y);
mu = phi(1,1);
G = phi(2,1);
Pm = (X/(X'*X))*X';
sig2v = (Y'*(eye(length(Pm)) - Pm)*Y)/(rows(Y) - 2);

H = real(H);
sig2 = real(sig2);
mu = real(mu);
G = real(G);
phi = real(phi);
sig2v = real(sig2v);

%% Gibbs-Sampling
for iter = 1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('H: ')
        disp(H')
        disp('sig2: ')
        disp(sig2')
        disp('[mu G sig2v]: ')
        disp([phi(1,1) phi(2,1) sig2v])
    end
    
    % Step 1 : Sampling Factor Using Kalman filter
    beta = CFM_Gen_beta(y,H,sig2,mu,G,sig2v);
    betam(iter,:) = beta';
    
    % Step 2 : Sampling Parameters of the Transition equation
    
    phi = Gen_phi(beta(2:end,1), [ones(T-1,1) beta(1:end-1,1)], sig2v, g0, G0, phi);
    mum(iter,1) = phi(1,1);
    Gm(iter,1) = phi(2,1);
    
    sig2v = Gen_Sigma(beta(2:end,1), [ones(T-1,1) beta(1:end-1,1)], phi, av, dv, scale);
    sig2vm(iter,1) = sig2v;
    
    % Step 3 : Sampling Parameters of the Measurement equations
    
    H(1,1) = 1;
    sig2(1,1) = Gen_Sigma(y(:,1), beta, H(1,1), a0(1,1), d0(1,1), scale);
    
    for i = 2:N
        H(i,1) = Gen_coef(y(:,i), beta, sig2(i,1), h0(i,1), H0(i,1));
        sig2(i,1) = Gen_Sigma(y(:,i), beta, H(i,1), a0(i,1), d0(i,1), scale);
    end
    Hm(iter,:) = H';
    sig2m(iter,:) = sig2';
    
    % Variance decomposition
    V_beta = sig2v/(1 - (phi(2,1)^2));
    Exp_part = diag(H*V_beta*H');
    Error_part = sig2;
    decom = Exp_part./(Exp_part + Error_part);
    decomm(iter,:) = decom';
    
end

% Burn-In

Hm = Hm(n0+1:n, :);
betam = betam(n0+1:n, :);
sig2m = sig2m(n0+1:n, :);
Gm = Gm(n0+1:n,:);
mum = mum(n0+1:n,:);
sig2vm = sig2vm(n0+1:n,:);
decomm = decomm(n0+1:n,:);

% Saving Output

Output.Hm = Hm;
Output.betam = betam;
Output.sig2m = sig2m;
Output.Gm = Gm;
Output.mum = mum;
Output.sig2vm = sig2vm;
Output.decomm = decomm;

end

function coef = Gen_coef(Y, X, sig2, coef0, B0)
% res: Test "res"th parameter is positive or not. (res is column vector)
% If res is zeros, then test will not be counducted.

B0inv = invpd(B0);
B0inv = 0.5*(B0inv + B0inv');

sig2inv = 1/sig2;
B1inv = sig2inv*(X'*X) + B0inv;
B1inv = 0.5*(B1inv+B1inv');
B1 = invpd(B1inv);
A = sig2inv*X'*Y + B0inv*coef0;

coef = B1*A + cholmod(B1)'*randn;

coef = coef(1,1);

end

function phi = Gen_phi(Y, X, sig2F, phi0, PHI0, phi_before)

% res: Test "res"th parameter is positive or not. (res is column vector)
% If res is zeros, then test will not be counducted.

PHI0inv = invpd(PHI0);
PHI0inv = 0.5*(PHI0inv + PHI0inv');
sig2inv = 1/sig2F;

B1inv = PHI0inv + sig2inv*(X'*X);
A = PHI0inv*phi0 + sig2inv*(X'*Y);
B1inv = 0.5*(B1inv+B1inv');
B1 = invpd(B1inv);

phi = B1*A + cholmod(B1)'*randn(2, 1);

iter_ = 0;

while min(abs(phi(2,1)) <= 1) == 0
    iter_ = iter_ + 1;
    if iter_ == 100
        phi = phi_before;
        break,
    end
    phi = B1*A + cholmod(B1)'*randn(2, 1);
end

phi = phi(1:2,1);

end

function sig2 = Gen_Sigma(Y, X, coef, a0, d0, scale)

T = rows(Y);

ehat = Y - X*coef;
d1 = d0 + scale*(ehat'*ehat);
a1 = a0 + T;
sig2 = randig(a1/2,d1/2,1,1)/scale;

end

function beta = CFM_Gen_beta(y,H,sig2,mu,G,sig2v)

T = rows(y);

%% Kalman filtering step

f_ttm = zeros(T,1);
P_ttm = zeros(T,1);
f_ll = zeros(1,1);
P_ll = sig2v/(1 - (G^2));
Sigma = diag(sig2);
Omega = sig2v;

for t = 1:T
    
    f_tl = mu + G*f_ll;
    P_tl = G*P_ll*G' + Omega;
    var_tl = H*P_tl*H' + Sigma;
    var_tl = 0.5*(var_tl + var_tl');
    
    e_tl = y(t,:)' - H*f_tl;
    Kalgain = (P_tl*H')/(var_tl);
    f_tt = f_tl + Kalgain*e_tl;
    P_tt = 1 - Kalgain*H;
    P_tt = P_tt*P_tl;
    
    f_ttm(t,1) = f_tt;
    P_ttm(t,1) = P_tt;
    
    f_ll = f_tt;
    P_ll = P_tt;
    
end

%% Backward recursion
Betam = zeros(T,1);  % T by k

% beta(T|T) sampling
P_tt = P_ttm(T,1);  % k by k
f_tt = f_ttm(T,1); % k by 1

if P_tt < 0
    P_tt = exp(-740);
end

ft = f_tt + sqrt(P_tt)*randn;  % k by 1
Betam(T,1) = ft; % 1 by k
t = T - 1; % time index

while t >= 1
    
    f_tt = f_ttm(t,1);  % km3 by 1
    P_tt = P_ttm(t,1);  % km3 by km3
    
    GPG_Q = G*P_tt*G' + Omega; % P(t+1|t), k by k
    
    e_tl = Betam(t+1,1) - mu - G*f_tt; % k by 1
    
    PGG = P_tt*G'/(GPG_Q);  % km3 by k
    f_tt1 = f_tt + PGG*e_tl;  % km3 by 1
    
    PGP = PGG*G*P_tt;  % km3 by km3
    P_tt1 = P_tt - PGP;
    if P_tt1 < 0
        P_tt1 = exp(-740);
    end
    
    % beta(t|t+1) sampling
    ft = f_tt1 + sqrt(P_tt1)*randn;
    Betam(t,1) = ft; % 1 by k
    
    t = t - 1;
end

beta = Betam;

end

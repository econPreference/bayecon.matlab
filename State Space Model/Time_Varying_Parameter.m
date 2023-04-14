function Output = Time_Varying_Parameter(Y,Z,H,b_,var_,nu,R0,a0,d0,n0,n1,forecast,x0_f,x1_f,ML,restriction,res_x,d)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG


k_H = cols(H);
k_Z = cols(Z);
T = rows(Y); 
n = n0 + n1;
Prec_var_ = inv(var_);

if k_Z == 0
   Z  = zeros(T,1);
end

if forecast == 'Y'
    isForecast = 1; 
else
    isForecast = 0; 
end

beta = b_;
Sigma = d0/a0;
Omega = inv(nu*R0);

betam = zeros(n,k_Z);
beta1m = zeros(n,T,k_H);
Omegam = zeros(n,k_H^2);
Sigmam = zeros(n,1);
Yfm = zeros(n,1);

lnpost_hat = -exp(20);
beta_hat = beta;
Omega_hat = Omega;
Sigma_hat = Sigma;

for iter = 1:n
 
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[beta: ]')
        disp(beta')
        disp('[Sigma: ]')
        disp(Sigma)
        disp('[Omega: ]')
        disp(Omega)
    end

    [beta1,loglikelihood] = Gen_beta1(Y, Z, H, beta, Omega, Sigma);
    beta1m(iter,:,:) = beta1; 
    
    if k_Z == 0
        beta = 0;
    else
        beta = Gen_beta(Y, Z, H,beta,beta1, b_,Prec_var_,Sigma,restriction,res_x);
        betam(iter,:) = beta';
    end
    
    Omega = Gen_Omega(beta1,nu,R0,d);
    vec_Omega = vec(Omega)';
    Omegam(iter,:) = vec_Omega(1,:);
    
    Sigma = Gen_Sigma(Y, Z, H, beta1, beta, a0, d0, d);
    Sigmam(iter,1) = Sigma;
    
    if isForecast == 1
        y_pred = Gen_Forecast(x0_f,x1_f,beta1(end,:)', beta, Sigma,Omega);
        Yfm(iter,1) = y_pred(1,1);
    end
    
    if ML == 'Y' && iter > n0
        
        lnlik1 = loglikelihood;
        b_prior = lnpdfmvn(beta,b_,var_);
        Omega_prior = lnpdfwishart(inv(Omega),R0,nu);
        Sigma_prior = lnpdfig(Sigma,a0/2,d0/2);
        lnprior1 = b_prior+Omega_prior+Sigma_prior;
        lnpost1 = lnlik1 + lnprior1;
        
        if lnpost1 > lnpost_hat
            beta_hat = beta;
            Omega_hat = Omega;
            Sigma_hat = Sigma;
            lnpost_hat = lnpost1;
        end
    end
    
end

disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')

betam = betam(n0+1:n,:);
Omegam = Omegam(n0+1:n,:);
Sigmam = Sigmam(n0+1:n,:);
beta1m = beta1m(n0+1:n,:,:);

if isForecast ==1
    Yfm = Yfm(n0+1:n, :);
end

lnML = 0;
if ML == 'Y'        
    MHm = [betam Omegam Sigmam];
    
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    ln_joint_post = lnpdfmvn([beta_hat;vec(Omega_hat);Sigma_hat],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;
end

Output.Yfm = Yfm;
Output.betam = betam;
Output.Omegam = Omegam;
Output.Sigmam = Sigmam;
Output.lnML = lnML;
Output.beta1m = beta1m;

end

function Omega = Gen_Omega(beta1,nu,R0,d)

T = rows(beta1) - 1;
ehat = diff(beta1);
Omega1_inv = d*(ehat'*ehat) + invpd(R0);
Omega1 = invpd(Omega1_inv);
Omega_inv = randwishart(Omega1,(nu + T));
Omega = invpd(Omega_inv)./d;


end

function Sigma = Gen_Sigma(Y, Z, H, beta1, beta, a0, d0, d)

ehat = Y - Z*beta - sum(H.*beta1,2);
d1 = d0 + d*(ehat'*ehat);
v1 = a0 + rows(Y);
Sigma = randig(v1/2,d1/2,1,1)/d;

end

function beta = Gen_beta(Y, Z, H,beta0,Betam, b_,precb_,sig2,restriction,res_x)

sig2inv = 1/sig2;

Y_star = Y - sum(H.*Betam,2);
X = Z;

XX = X'*X; 
XY = X'*Y_star;

B1inv = precb_ + sig2inv*XX; 
B1inv = 0.5*(B1inv + B1inv');
B1 = invpd(B1inv);
B1 = 0.5*(B1 + B1');
beta = B1*(precb_*b_ + sig2inv*XY) + chol(B1)'*randn(rows(b_),1); 

if restriction == 'Y'
    valid = paramconst(beta,res_x); 
    if valid == 0 
        beta = beta0;
    end
end
end

function [beta1,loglikelihood] = Gen_beta1(Y, Z, H, beta, Omega, Sigma)

T = rows(Y);
k_H = cols(H);

Y_star = Y - Z*beta;

mu = zeros(k_H,1);
G = eye(k_H);

f_ttm = zeros(k_H,1,T);
P_ttm = zeros(k_H,k_H,T);
f_ll = zeros(k_H,1); 
P_ll = 100*eye(k_H); 
Q = Omega;
likelihood = zeros(T,1);

for t = 1:T
    
    Ht = H(t, :)'; 
    f_tl = mu + G*f_ll;
    P_tl = G*P_ll*G' + Q;
    var_tl = Ht'*P_tl*Ht + Sigma;
    var_tl = 0.5*(var_tl + var_tl');
    var_tlinv = invpd(var_tl);

    mean_tl = Ht'*f_tl;
    lnmvn = lnpdfmvn(Y(t,1),mean_tl,var_tl);
    likelihood(t,1) = lnmvn(1,1);

    e_tl = Y_star(t,:)' - mean_tl;
    Kalgain = P_tl*Ht*var_tlinv;
    f_tt = f_tl + Kalgain*e_tl;
    P_tt = eye(k_H) - Kalgain*Ht';
    P_tt = P_tt*P_tl;
    
    f_ttm(:,:,t) = f_tt;
    P_ttm(:,:,t) = P_tt;
    
    f_ll = f_tt(:,1);
    P_ll = P_tt;
    
end

loglikelihood = sum(likelihood);

beta1 = zeros(T,k_H); 

P_tt = P_ttm(:,:,T);  
P_tt = (P_tt + P_tt')/2;
cP_tt = cholmod(P_tt);

f_tt = f_ttm(:,:,T); 
ft = f_tt + cP_tt'*randn(k_H,1);  
beta1(T,:) = ft'; 
t = T - 1; 

while t >= 1
    
    f_tt = f_ttm(:,:,t);  
    P_tt = P_ttm(:,:,t);  
    
    GPG_Q = G*P_tt*G' + Q; 
    GPG_Q = (GPG_Q + GPG_Q')/2;
    GPG_Qinv = invpd(GPG_Q); 
    
    e_tl = beta1(t+1,:)' - mu - G*f_tt; 
    
    PGG = P_tt*G'*GPG_Qinv;  
    f_tt1 = f_tt + PGG*e_tl;  
    
    PGP = PGG*G*P_tt; 
    P_tt1 = P_tt - PGP;
    
    P_tt1 = (P_tt1 + P_tt1')/2;
    cP_tt1 = cholmod(P_tt1);
    
    ft = f_tt1 + cP_tt1'*randn(k_H,1);
    beta1(t,:) = ft'; 
    
    t = t - 1;
end

end

function [valid] = paramconst(beta, res_x)

if minc(isfinite(beta)) == 0
    validm_30 = 0;
else
    validm_30 = 1;
end

if maxc(isnan(beta)) == 1
    validm_29 = 0;
else
    validm_29 = 1;
end

phi = beta(res_x);
p = rows(phi);
F = [phi'; eye(p-1) zeros(p-1,1)];
test = eig(F);
imagine = imag(test).^2;
absolute = abs(test).^2;
validm_1 = sqrt(absolute + imagine)<1;

valid = minc([validm_30;validm_29;validm_1]); 

end

function y_pred = Gen_Forecast(x0_f,x1_f,beta1, beta, Sigma,Omega)

beta1_ = beta1 + chol(Omega)'*randn(rows(beta1),1);
y_pred = x0_f'*beta + x1_f'*beta1_ + sqrt(Sigma)*randn(1,1); 

% lnpredlik = lnpdfn(y_pred, x_f'*beta, volf^2);

end

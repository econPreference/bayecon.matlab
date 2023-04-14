function Output = ARMA_X(data,xind,yind,b0,B0,a0,d0,phi0,PHI0,theta0,THETA0,n0,n1,forecast,x_f,ML,d)
coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

model = cols(data);
T = rows(data);

if model == 1
    mean_Y = mean(data);
    Y = demeanc(data);
    X = zeros(T,1);
    k = 1;
else
    Y = data(:,yind);
    X = data(:,xind);
    k = cols(X);
    mean_Y = 0;
end

n = n0 + n1;
if forecast == 'Y'
    isForecast = 1; %  예측하기
else
    isForecast = 0;  % 예측 안하기
end

[T, k] = size(X);

% 초기값 설정하기
coef = [phi0; theta0];
sig2 = d0/a0;
precB0 = invpd(B0);
b = b0;
loglikelihood = 0 ; %#ok<NASGU>
p = rows(phi0);
q = rows(theta0);
error = Y - X*b;
coef0 = [phi0; theta0];
COEF0 = [PHI0 zeros(p,q); zeros(q,p) THETA0];
precCOEF0 = invpd(COEF0);

% MCMC output을 저장할 방
bm= zeros(n,k);
Vm =  zeros(n,T);
sig2m = zeros(n,1);
coefm = zeros(n,rows(coef));
Yfm = zeros(n,1);
vm = zeros(T,1);
ds = max(p, q + 1);
Fm = zeros(T,ds);

lnpost_hat = -exp(20);% 임의로 값을 주고 시작함
b_hat = b0;
coef_hat = coef0;
sig2_hat = d0/a0;

for iter = 1:n
    
    % report intermediate results
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[beta: ]')
        disp(b')
        disp('[phi and theta: ]')
        disp(coef')
        disp('[sig2: ]')
        disp(sig2)
    end
    
    %  Step 1 : Sampling Hidden v_t
    [vm, loglikelihood, Fm] = Gen_Fm(error,coef,sig2,p,q,vm,Fm);
    Vm(iter,:) = vm(:, 1)';
        
    %  Step 2 : coef sammpling
    coef = Gen_coef(error,vm,coef0,precCOEF0,p,q,sig2,coefm);
    coefm(iter,:) = coef'; % mu와 phi 저장하기
    sig2m(iter,1) = sig2;
    
    %  Step 3 : beta, sig2 sampling
    [b, sig2] = Gen_beta(X, Y, b0, precB0, coef, a0, d0, p, q, vm, sig2, b, model,d);
    bm(iter,:) = b';
    
    error = Y - X*b;
    
    if isForecast == 1
        %  예측
        y_pred = Gen_Forecast(error,vm,coef,b,sig2,p,q,x_f);
        Yfm(iter) = y_pred;
        %         PredLikm(iter) = exp(lnpredlik);
    end
    
    if ML == 'Y' && iter > n0
        
        lnlik1 = loglikelihood;
        if model == 1
            b_prior = 0;
        else
            b_prior = lnpdfmvn(b,b0,B0);
        end
        coef_prior = lnpdfmvn(coef,coef0,COEF0);
        sig2_prior = lnpdfig(sig2,a0/2,d0/2);
        lnprior1 = b_prior+coef_prior+sig2_prior;
        lnpost1 = lnlik1 + lnprior1;
        
        if lnpost1 > lnpost_hat
            b_hat = b;
            coef_hat = coef;
            sig2_hat = sig2;
            lnpost_hat = lnpost1; % 최빈값 후보의 사후 커널값
        end
    end
    
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')

%% Summary of Output

coefm = coefm(n0+1:n,:);
sig2m = sig2m(n0+1:n,:);
bm = bm(n0+1:n,:);
Yfm = Yfm(n0+1:n,:);
phi_consm = zeros(n1,1);

if model == 1
    one_phisum = (1 - coefm(:,1:p)*ones(p,1));
    for i = 1:n1
        phi_consm(i,1) = mean_Y(1,1).*one_phisum(i,1);
    end
end

% if isForecast ==1
%     Yfm = Yfm(n0+1:n, :);
%     PredLikm = PredLikm(n0+1:n, :);   % 번인 버리기
%     predlik = meanc(PredLikm);
% end
Vm = Vm(n0+1:n,:);
lnML = 0;

if ML == 'Y'    
            
    if model == 1
        MHm = [coefm sig2m];
    else
        MHm = [bm coefm sig2m];
    end
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    if model == 1
        ln_joint_post = lnpdfmvn([coef_hat;sig2_hat],postmean,postvarcov);
    else
        ln_joint_post = lnpdfmvn([b_hat;coef_hat;sig2_hat],postmean,postvarcov);
    end
    lnML = lnpost_hat - ln_joint_post;
end

Output.Yfm = Yfm;
Output.Vm = Vm;
Output.betam = bm;
Output.phim= coefm(:,1:p);
Output.thetam = coefm(:,p+1 : p+q);
Output.sig2m = sig2m;
Output.lnML = lnML;
Output.phi_0 = phi_consm;

end

function coef = Gen_coef(error,vm,coef0,precCOEF0,p,q,sig2,coefm)

ds = max(p,q);
coef = coef0;
T = rows(error);
EV = zeros(T - ds, p + q);
E = error(ds + 1:T,1);
iter = rows(coefm);

for t = ds + 1:T
    EV(t - ds,:) =  [error(t-1:-1:t-p)' vm(t-1:-1:t-q)'];
end
sig2_inv = 1/sig2;
varb1_inv = precCOEF0 + sig2_inv*(EV'*EV);
varb1_inv = 0.5*(varb1_inv + varb1_inv');
varb1 = invpd(varb1_inv);  % full conditional variance
b1 = varb1*(precCOEF0*coef0 + sig2_inv*(EV'*E)); % full conditional mean
varb1 = 0.5*(varb1 + varb1');

test = false;
test_number = 0;
while test == false
    coef = b1 + cholmod(varb1)'*randn(p + q,1); % beta sampling 하기
    phi = coef(1:p,1);
    theta = coef(p+1:p+q,1);
    
    F = [phi'; eye(p-1) zeros(p-1,1)];
    if min([isnan(eig(F)) == 0;isfinite(eig(F)) == 1]) == 1
        eig_ = eig(F);
        imagine = imag(eig_).^2;
        absolute = abs(eig_).^2;
        test_stationary = sqrt(absolute + imagine)<1;
    else
        test_stationary = false;
    end
    
    F = [theta'; eye(q-1) zeros(q-1,1)];
    if min([isnan(eig(F)) == 0;isfinite(eig(F)) == 1]) == 1
        eig_ = eig(F);
        imagine = imag(eig_).^2;
        absolute = abs(eig_).^2;
        test_invertible = sqrt(absolute + imagine)<1;
    else
        test_invertible = false;
    end
    
    test = min([test_stationary;test_invertible]);
    test_number = test_number + 1;
    
    if test_number > 10 && iter > 1
        coef = coefm(iter-1,:)'; break,
    elseif test_number > 10 && iter == 1
        coef = coef0; break,
    end
end

end


%% 예측분포 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function y_pred = Gen_Forecast(error,vm,coef,b,sig2,p,q,x_f)

T = rows(error);
phi = coef(1 : p, 1);
theta = coef(p + 1: p + q, 1);
error_X = error(T:-1:T-p+1)'*phi;
v_X = vm(T:-1:T-q+1)'*theta;

y_pred = x_f'*b + error_X + v_X + sqrt(sig2)*randn(1,1); % 다음기에 예상되는 y-value

% lnpredlik = lnpdfn(y_pred, xf'*beta, volf^2);

end


%% Fm 샘플랭 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [vm, loglikelihood, Fm] = Gen_Fm(error,coef,sig2,p,q,vm0,Fm0)

ds = max(p, q + 1);
T = rows(error);
TX = zeros(1,ds);
TX(1,1) = 1;
for i = 1:q
    TX(1, 1 + i) = coef(p+i,1);
end
upper_F = zeros(1,ds);
for i = 1:p
    upper_F(1,i) = coef(i,1);
end
F = [upper_F; eye(ds-1) zeros(ds-1,1)];
Sigma = [sig2 zeros(1,ds-1) ; zeros(ds-1,1) zeros(ds-1,ds-1)];

%%%%% Kalman filtering step
f_ttm = zeros(T,ds); % 은닉인자를 저장
P_ttm = zeros(T,ds^2); % 은닉인자의 분산을 저장
likelihood = zeros(T,1);
f_ll = zeros(ds,1); % 초기값은 무조건부 평균
P_ll = reshape(inv(eye(ds^2)-kron(F,F))*vec(Sigma),ds,ds); %#ok<*MINV>
h_var = P_ll(1,1);

for t = 1:T
    
    f_tl = F*f_ll;
    P_tl = F*P_ll*F' + Sigma;
    
    var_tl = TX*P_tl*TX';
    var_tl = .5*(var_tl+var_tl');
    var_tlinv = invpd(var_tl);
    mean_tl = TX*f_tl;
    lnmvn = lnpdfmvn(error(t,1),mean_tl,var_tl);
    likelihood(t,1) = lnmvn(1,1);
    
    e_tl = error(t,1) - mean_tl;
    Kalgain = P_tl*TX'*var_tlinv; % 변환된 종속변수에 대해 Gamma는 단위행렬
    f_tt = f_tl + Kalgain*e_tl;
    P_tt = P_tl - Kalgain*TX*P_tl;
    
    f_ttm(t,:) = f_tt';
    vec_P_tt = vec(P_tt)';
    P_ttm(t,:) = vec_P_tt(1,:);
    
    f_ll = f_tt(:,1);
    P_ll = P_tt;
    
end

loglikelihood = sum(likelihood);

%%% Backward recursion
Fm = zeros(T,ds);  % T by km 샘플링된 값들을 저장하는 공간

P_tt = reshape(P_ttm(T,:)',ds,ds);  % km by km 초기값으로 마지막 관측치
P_tt = (P_tt + P_tt')/2;
cP_tt = cholmod(P_tt); % km by km

f_tt = f_ttm(T,:)'; % km by 1
ft = f_tt + cP_tt'*randn(ds,1);  % km by 1
Fm(T,:) = ft'; % 1 by by km 마지막 기의 은닉인자를 sampling
t = T - 1; %  time index

idx = zeros(1,ds);
idx(1,1) = 1;

while t >= 1
    
    f_tt = f_ttm(t,:)';  % km3 by 1
    P_tt = reshape(P_ttm(t,:)',ds,ds);  % km3 by km3
    
    GPG_Q = F*P_tt*F' + Sigma; % km by km
    GPG_Q = 0.5*(GPG_Q + GPG_Q');
    
    GPG_Qinv = invpd(GPG_Q); % km by km
    
    e_tl = Fm(t+1,:)' - F*f_tt; % km by 1
    
    PGG = P_tt*F'*GPG_Qinv;  % km3 by km
    f_tt1 = f_tt + PGG*e_tl;  % km3 by 1
    
    PGP = PGG*F*P_tt;  % km3 by km3
    P_tt1 = P_tt - PGP;
    
    P_tt1 = (P_tt1 + P_tt1')/2;
    cP_tt1 = cholmod(P_tt1);
    
    ft = f_tt1 + cP_tt1'*randn(ds,1);

    v = idx*(Fm(t+1,:)' - F*ft);
    upper = v <= 3*sig2;
    lower = v >= -3*sig2;
    ok = upper + lower;
    
    if ok == 2
        Fm(t,:) = ft';
    else
        Fm(t+1,:) = Fm0(t+1,:);
        Fm(t,:) = Fm0(t,:);
    end
    % num_ok = sum(ok);
%     ok_LHS = find(ok);
    % ok_RHS = find(ok - 1);
%     vm(ok_LHS,1) = vm0(ok_LHS,1);
    % vm(ok_LHS,1) = std(vm(ok_RHS,1)).*randn(num_ok,1); %#ok<FNDSB>

    t = t - 1;
end

FmT = Fm';
vm = (idx*(FmT(:,2:end) - F*FmT(:,1:end-1)))';

H1 = Fm(1,:)';
h_star = H1(1,1) - upper_F(1,1:end-1)*H1(2:end,1);
phi_ds = upper_F(1,end);
B1_0 = 1/((1/sig2)*(phi_ds^2) + (1/h_var));
A_0 = (1/sig2)*phi_ds*h_star;
h_1_ds = B1_0*A_0 + sqrt(B1_0)*randn(1,1);
v1 = H1(1,1) - upper_F*[H1(2:end,1);h_1_ds];

upper = v1 <= 3*sig2;
lower = v1 >= -3*sig2;
ok = upper + lower;

if ok == 2
    vm = [v1;vm];
else
    v1 = vm0(1,1);
    vm = [v1;vm];
end

% upper = vm >= 3*sig2;
% lower = vm <= -3*sig2;
% ok = upper + lower;
% num_ok = sum(ok);
% ok_LHS = find(ok);
% ok_RHS = find(ok - 1);
% vm(ok_LHS,1) = vm0(ok_LHS,1);
% vm(ok_LHS,1) = std(vm(ok_RHS,1)).*randn(num_ok,1); %#ok<FNDSB>

end

%% Beta sampling

function [beta,sig2] = Gen_beta(X, Y, beta0, precB0, coef,a0, d0, p, q, vm, sig2_before, beta_before, model, d)

ds = max(p,q);
phi = coef(1:p,1);
theta = coef(p+1:p+q,1);
[T, k] = size(X);
Y_ = zeros(T - ds, 1);
X_ = zeros(T - ds, k);
for i = ds+1:T
    Y_(i - ds,1) = Y(i,1) - phi'*Y(i-1:-1:i-p,1) - theta'*vm(i-1:-1:i-q,1);
    X_(i - ds,:) = X(i,:) - phi'*X(i-1:-1:i-p,:);
end

if model == 1
    beta = 0;
else
    B1 = inv((1/sig2_before)*(X_'*X_) + precB0);
    A = (1/sig2_before)*(X_'*Y_) + precB0*beta0;
    
    varB1 = B1;
    mean = B1*A;
    
    beta = mean + chol(varB1)'*randn(k,1);
end

ehat = Y_ - X_*beta; % 잔차항
a1 = a0 + (T - ds);
d1 = d0 + d*(ehat'*ehat);

sig2 = randig(a1/2,d1/2,1,1);
sig2 = sig2(1,1)/d;

% var_Y = var(Y);
% if sig2 >= 2*var_Y
%     sig2 = sig2_before;
%     beta = beta_before;
% end

end
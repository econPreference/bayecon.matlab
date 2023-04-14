function Output = Unobserved_Component_Model(data,phi0,PHI0,w01,w02,e01,e02,z01,z02,n0,n1,d)
coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

T = rows(data);
n = n0 + n1;
p = rows(phi0);
Prec_PHI0 = inv(PHI0);

% 초기값 설정하기

phi = phi0;
sig2_w = w02/w01;
sig2_e = e02/e01;
sig2_z = z02/z01;

% MCMC output을 저장할 방
phim = zeros(n,p);
sig2_wm = zeros(n,1);
sig2_em = zeros(n,1);
sig2_zm = zeros(n,1);
Fp = zeros(n,T);
Fc = zeros(n,T);
Fx = zeros(n,T);

for iter = 1:n
    
    % report intermediate results
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[phi: ]')
        disp(phi')
        disp('[sig2_w sig2_e sig_z: ]')
        disp([sig2_w sig2_e sig2_z])
    end
    
    %  Step 1 : Sampling Hidden state
    [F1,F2,F3] = Gen_Fm(data,phi,sig2_w,sig2_e,sig2_z);
    Fp(iter,:) = F1';
    Fc(iter,:) = F2';
    Fx(iter,:) = F3';
    
    %  Step 2 : phi and sig2_e sammpling
    [phi,sig2_e] = Gen_yc(F2,phi0,Prec_PHI0,e01,e02,sig2_e,phim,d,iter);
    phim(iter,:) = phi'; % mu와 phi 저장하기
    sig2_em(iter,1) = sig2_e;
    
    %  Step 3 : sig2_w sampling
    sig2_w = Gen_yp(F1,F3,w01, w02, d);
    sig2_wm(iter,1) = sig2_w;
    
    %  Step 4 : sig2_z sampling
    sig2_z = Gen_z(F3, z01, z02, d);
    sig2_zm(iter,1) = sig2_z;
    
end

disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')

%% Summary of Output

phim = phim(n0+1:n,:);
sig2_wm = sig2_wm(n0+1:n,:);
sig2_em = sig2_em(n0+1:n,:);
sig2_zm = sig2_zm(n0+1:n,:);
Fp = Fp(n0+1:n,:);
Fc = Fc(n0+1:n,:);
Fx = Fx(n0+1:n,:);

Output.phim = phim;
Output.sig2_wm = sig2_wm;
Output.sig2_em = sig2_em;
Output.sig2_zm = sig2_zm;
Output.yp = Fp;
Output.yc = Fc;
Output.x = Fx;

end

function [phi,sig2] = Gen_yc(F2,phi0,Prec_PHI0,e01,e02,sig2_e,phim,d,iter)

T = rows(F2);
p = rows(phi0);

Y = F2(p+1:T,:); % 종속변수
X = zeros(T-p,p);
for i = 1:p
    X(:,i) = F2(p+1 - i:T-i,:);
end

sig2_inv = 1/sig2_e;
varb1_inv = Prec_PHI0 + sig2_inv*(X'*X);
varb1_inv = 0.5*(varb1_inv' + varb1_inv);
varb1 = invpd(varb1_inv);  % full conditional variance
b1 = varb1*(Prec_PHI0*phi0 + sig2_inv*(X'*Y)); % full conditional mean

test = zeros(p,1);
test_number = 0;
phi = zeros(p,1);
while min(test) == 0 
    phi = b1 + chol(varb1)'*randn(p,1); % beta sampling 하기
    Fm = [phi'; eye(p-1), zeros(p-1,1)];
    eigF = eig(Fm);
    imagine = imag(eigF).^2;
    absolute = abs(eigF).^2;
    ind = sqrt(absolute + imagine);
    for i = 1:p
        if ind(i) < 1
            test(i) = 1;
        else 
            test(i) = 0;
        end
    end
    
    if min(test) == 0 && test_number > 10 && iter > 1
        phi = phim(iter-1,:)'; break,
    elseif min(test) == 0 && test_number > 10 && iter == 1
        phi = phi0; break,
    end
    
    test_number = test_number + 1;
    
end

ehat = Y - X*phi; % 잔차항
e11 = e01 + (T - p);
e12 = e02 + d*(ehat'*ehat);

sig2 = randig(e11/2,e12/2,1,1);
sig2 = sig2(1,1)/d;

end

%% Fm 샘플랭 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function [Fp,Fc,Fx] = Gen_Fm(data,phi,sig2_w,sig2_e,sig2_z)

T = rows(data);
p = rows(phi);

%%%%% Kalman filtering step
f_ttm = zeros(T,p+2); % 은닉인자를 저장
P_ttm = zeros(T,(p+2)^2); % 은닉인자의 분산을 저장
f_ll = [mean(data);zeros(p,1);mean(diff(data))]; % 초기값은 무조건부 평균
P_ll = [var(data)*eye(p+1) zeros(p+1,1);zeros(1,p+1) var(diff(data))]; 
F = [1 zeros(1,p) 1 ;0 phi' 0; zeros(p-1,1) eye(p-1) zeros(p-1,2); zeros(1,p+1) 1];
Sigma = diag([sig2_w;sig2_e;zeros(p-1,1);sig2_z]);
TX = [1 1 zeros(1,p)];

for t = 1:T
    
    f_tl = F*f_ll;
    P_tl = F*P_ll*F' + Sigma;
    
    var_tl = TX*P_tl*TX';
    var_tlinv = 1/var_tl;
    mean_tl = TX*f_tl;
    
    e_tl = data(t,1) - mean_tl;
    Kalgain = P_tl*TX'*var_tlinv; % 변환된 종속변수에 대해 Gamma는 단위행렬
    f_tt = f_tl + Kalgain*e_tl;
    P_tt = P_tl - Kalgain*TX*P_tl;
    
    f_ttm(t,:) = f_tt';
    vec_P_tt = vec(P_tt)';
    P_ttm(t,:) = vec_P_tt(1,:);
    
    f_ll = f_tt;
    P_ll = P_tt;
    
end

%%% Backward recursion
Fm = zeros(T,p+2);  % T by km 샘플링된 값들을 저장하는 공간

P_tt = reshape(P_ttm(T,:)',p+2,p+2);  % km by km 초기값으로 마지막 관측치
P_tt = (P_tt + P_tt')/2;
cP_tt = cholmod(P_tt); % km by km

f_tt = f_ttm(T,:)'; % km by 1
ft = f_tt + cP_tt'*randn(p+2,1);  % km by 1
Fm(T,:) = ft'; % 1 by by km 마지막 기의 은닉인자를 sampling
t = T - 1; %  time index

while t >= 1
    
    f_tt = f_ttm(t,:)';  % km3 by 1
    P_tt = reshape(P_ttm(t,:)',p+2,p+2);  % km3 by km3
    
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
    
    ft = f_tt1 + cP_tt1'*randn(p+2,1);

    Fm(t,:) = ft'; % 1 by by km

    t = t - 1;
end

Fp = Fm(:,1);
Fc = Fm(:,2);
Fx = Fm(:,end);
end

function sig2_w = Gen_yp(F1,F3,w01, w02, d)

T = rows(F1);
diff_y = diff(F1);

ehat = diff_y - F3(1:end-1); % 잔차항
w11 = w01 + (T - 1);
w12 = w02 + d*(ehat'*ehat);

sig2 = randig(w11/2,w12/2,1,1);
sig2_w = sig2(1,1)/d;

end

function sig2_z = Gen_z(F3, z01, z02, d)

T = rows(F3);
diff_y = diff(F3);

z11 = z01 + (T - 1);
z12 = z02 + d*(diff_y'*diff_y);

sig2 = randig(z11/2,z12/2,1,1);
sig2_z = sig2(1,1)/d;

end
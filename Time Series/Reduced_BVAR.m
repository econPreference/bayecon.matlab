function Output = Reduced_BVAR(Y,p,n0,n1,nu,R0,b_,var_,ML)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

k = cols(Y); % 변수의 개수
pkk = p*k*k;
n = n0 + n1;

% 초기값
% yf = zeros(k,1);
Omega0 = inv(R0*nu);
Omega_inv = R0*nu;
Omega = Omega0;
% beta = b_;
Phi = reshape(b_,p*k + 1,k);
% 축약형 방정식의 오차항의 precision matrix(공분산행렬의 역행렬)의 사전평균을 초기값으로 둔 것

% 축약형 모형계수를 저장할 방

consm = zeros(n1,k);
betam = zeros(n1,pkk);
Omegam = zeros(n1,k^2);
y_pred = zeros(n1,k);

%% 사후분포 추출하기
[Y0,YLm,~] = makeYX(Y,p); % 종속변수(Y0)와 설명변수(YLm) 만들기

beta_hat = b_;
Omega_hat = Omega0;
lnpost_hat = -exp(20); % 임의로 값을 주고 시작함
lnlik1 = 0;

for iter = 1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[Cons phi(1) phi(2) ... phi(p)] = ')
        disp(Phi')
        disp('Omega: ')
        disp(Omega)
    end
    
    % Phi sampling 하기
    [Phi,beta] = Gen_Phi(Y0,YLm,p,b_,var_,Omega_inv);
    
    % Omega sampling 하기
    [Omega,Omega_inv] = Gen_Omega(Y0,YLm,beta,nu,R0);
    
    % sampling된 1기 뒤의 예측값
    yf = Gen_Forecast(Y,Phi,Omega,p,k);
    
    if iter > n0 % burn - in을 고려한 과정
        consm(iter-n0,:) = Phi(1,:);
        aux = Phi(2:end,:);
        aux1 = vec(aux')';
        betam(iter-n0,:) = aux1(1,:);
        vec_Omega = vec(Omega)';
        Omegam(iter-n0,:) = vec_Omega(1,:);
        y_pred(iter-n0,:) = yf';
    end

    if ML == 'Y' && iter > n0
        for i = 1:rows(Y0) %#ok<*FXUP>
            lnlik1 = lnlik1 + lnpdfmvn(Y0(i,:)',YLm(:,:,i)*beta, Omega);
        end
        beta_prior = lnpdfmvn(beta,b_,var_);
        Omega_prior = lnpdfwishart(inv(Omega),R0,nu);
        lnprior1 = beta_prior+Omega_prior; % 결합 사전밀도함수값
        lnpost1 = lnlik1 + lnprior1; % 해당 파라미터의 사후 커널값
        if lnpost1 > lnpost_hat
            beta_hat = beta;
            Omega_hat = Omega;
            lnpost_hat = lnpost1; % 최빈값 후보의 사전밀도함수값
        end        
    end
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')

lnML = 0;
if ML == 'Y'    
    MHm = [betam Omegam];
    
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    ln_joint_post = lnpdfmvn([beta_hat;vec(Omega_hat)],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;
end

Output.consm = consm;
Output.betam = betam;
Output.Omegam = Omegam;
Output.yfm = y_pred;
Output.lnML = lnML;
end

%% 종속, 설명변수 만들기 %%%%%%%%%%%%%%%%%%%%%%%%%%

function [Y0,YLm,YL,Y0_mean,YL_mean] = makeYX(Y,p)

k = cols(Y); % 변수의 수
T = rows(Y); % 시계열의 크기

Y0 = Y(p+1:T,:); % 종속변수
Y0_mean = meanc(Y0);
% Y0 = demeanc(Y0);
% 설명변수(=Y의 과거값) 만들기
YL = zeros(T-p,p*k);
for i = 1:p
    YL(:,k*(i-1)+1:k*i) = Y(p+1 - i:T-i,:);
    % p 시차에 해당하는 전체 설명변수 데이터 블록을 YL의 (p-1) 시차 블록의 우측에 저장
end
YL_mean = meanc(YL);
% YL = demeanc(YL);
ki = p*k; % 각 식에 있는 설명변수의 수
kki = k*ki; % 축약형 VAR의 회귀계수의 수

YLm = zeros(k,kki + k,T-p); % 설명변수를 3차원으로 새롭게 저장할 방
for t = 1:(T-p)
    xt = kron(eye(k), [1 YL(t,:)]); % x(t)' for regressor of SUR
    YLm(:,:,t) = xt; % p by k, x(t)'를 한층 한층 쌓는 것
end
end

%% Phi 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Phi,beta] = Gen_Phi(Y0,YLm,p,b_,var_,Omega_inv)

X = YLm; % 설명변수, 3차원
k = cols(Y0);
XX = zeros(p*k*k + k,p*k*k + k);
XY = zeros(p*k*k + k,1);
T0 = rows(Y0); % = T-p


for t = 1:T0
    Xt = X(:,:,t); % x(t)' for SUR regressor k by pkk
    XX = XX + Xt'*Omega_inv*Xt; % B1에서의 summation 부분
    XY = XY + Xt'*Omega_inv*Y0(t,:)'; % A에서의 summation 부분
end

precb_ = invpd(var_);
B1_inv = precb_ + XX;
B1_inv = 0.5*(B1_inv + B1_inv');
B1 = invpd(B1_inv);
B1 = 0.5*(B1 + B1');
A = XY + precb_*b_; % b_ = b0
BA = B1*A; % full conditional mean

Chol_B1 = cholmod(B1)';
beta = BA + Chol_B1*randn(p*k*k + k,1); % beta sampling 하기

Phi = reshape(beta,p*k + 1,k);
% p*k by k; Phi의 전치는 각 시차별 기울기 계수행렬을 오른쪽으로 나열한 것이다.
end

%% Omega 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Omega,Omega_inv] = Gen_Omega(Y,X,beta,nu,R0)

T = rows(Y);
k = cols(Y);

ehat2 = zeros(k,k); % 잔차항의 제곱의 합

for t = 1:T
    Xt = X(:,:,t);
    ehat = Y(t,:)' - Xt*beta; % 잔차항
    ehat2 = ehat2 + ehat*ehat'; % k by k
end

% Wishart와 역Wishart의 관계를 이용
Omega1_inv = ehat2 + invpd(R0);
% R0는 Wishart의 hyper-parameter이므로 invpd(R0)를 통해
% Inverse-Wishart의 hyperparameter로 전환
Omega1 = invpd(Omega1_inv);% Wishart의 hyper-parameter로 전환
Omega_inv = randwishart(Omega1,(T+nu));
% nu(W,prior)-> nu+p+1(IW,prior)
% -> nu+p+1+T(IW,poster) -> nu+T(W,posterior)
Omega = invpd(Omega_inv);

end

%%
function yf = Gen_Forecast(Y,Phi,Omega,p,k)
% 1기 뒤의 예측값에 대한 사후예측분포를 sampling 해보는 것

T = rows(Y); % Sample size

yf_X = Y(T - p +1:end, :); % 예측에 쓰이는 시차설명변수
yf_X = flip(yf_X);
PhiX = zeros(k, p);
Phi = Phi';
Cons = Phi(:,1);
Phi = Phi(:,2:end);

for idx = 1:p
    PhiX(:,idx) = Phi(:,(idx - 1)*k + 1:idx*k)*yf_X(idx,:)'; % k by k * k by 1
end %각 (p시차의 Phi)*(p 시차 설명변수) 값을 PhiX의 p열에 저장

yf = Cons + sum(PhiX,2) + chol(Omega)'*randn(k,1); % sum(~,2)를 하면 sum을 행벡터에 대해 행함
% sampling된 phi로 yf의 평균을 계산하고 오차충격을 더해 yf를 sampling
end
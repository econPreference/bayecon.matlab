function Output = Structure_BVAR(Y,p,n0,n1,mlag,nu,R0,b_,var_,ML,restriction,resindex,ind_chol)

coder.extrinsic('format')
coder.extrinsic('clc')
% coder.extrinsic('eval')

format shortG

k = cols(Y); % 변수의 개수
pkk = p*k*k; % 모든 시차에 대한 축약형 방정식의 기울기 회귀계수의 총 개수
n = n0 + n1;

% sig2 = zeros(k,1);
% B = zeros(k,k);
Gamma = zeros(k,p*k);
% normalize = zeros(k,(p+2)*k+1);
Omega0 = inv(R0*nu);  % Note that E(inv(Omega)=precision matrix) = nu*R0
Omega = Omega0;
Phi = reshape(b_, p*k, k); % F행렬의 1행 Block의 전치
% F = [Phi' ; eye((p-1)*k), zeros(k*(p-1),k)];
% beta = b_;
Omega_inv = invpd(Omega0); % 축약형 방정식의 오차 분산행렬의 초기값의 역행렬
BinvT = zeros(k,k);
chol_Omega0 = chol(Omega0);
for i = 1:k
    BinvT(i,:) = chol_Omega0(i,:)*ind_chol(i,1);
end
Binv = BinvT';

% 축약형 방정식의 오차항의 precision matrix(공분산행렬의 역행렬)의 사전평균을 초기값으로 둔 것

% 충격반응함수를 저장할 방
ImpulseRespm = zeros(n1,mlag+1,k^2); % (iter,j,1)은 변수 1이 변수1에 j기 이후 미치는 영향
decomm = zeros(n1,mlag+1,k^2);

% 축약형 모형계수를 저장할 방
Bm = zeros(n1,k^2);
Gammam = zeros(n1,pkk);
% sig2m = zeros(n1,k);
betam = zeros(n1,pkk);
Omegam = zeros(n1,k^2);

%% 사후분포 추출하기
[Y0,YLm] = makeYX(Y,p); % 종속변수(Y0)와 설명변수(YLm) 만들기
T = rows(Y0);

beta_hat = b_;
Omega_hat = Omega0;
lnpost_hat = -exp(20); % 임의로 값을 주고 시작함
lnlik1 = 0;

for iter = 1:n
    if restriction == 3
        iterlength = 1;
    else
        iterlength = 100;
    end
    [~, resid] = minresid(iter,iterlength);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[phi(1) phi(2) ... phi(p)] = ')
        disp(Phi')
        disp('Omega: ')
        disp(Omega)
        disp('B inverse: ')
        disp(Binv)
    end
    
    % Phi sampling 하기
    [Phi,Fm,beta] = Gen_Phi(Y0,YLm,Phi,p,b_,var_,Omega_inv);
    
    % Omega sampling 하기
    [Omega,Omega_inv] = Gen_Omega(Y0,YLm,beta,nu,R0);
    
    % 충격반응함수 계산해서 저장하기
    
    if iter > n0 % burn - in을 고려한 과정
        [ImpulseRespm,Binv,decomm] = Gen_ImRes(Omega,Fm,mlag,n0,ImpulseRespm,iter,decomm,restriction,Binv,resindex,T,ind_chol);
        % 기울기 계수행렬 sampling하기
        Phi_sp = Phi'; % 축약형 기울기 계수행렬이 1시차부터 p시차까지 오른쪽으로 나열됨
        B = inv(Binv);
        for idx = 1:p
            Gamma(:,(idx - 1)*k + 1:idx*k) = B*Phi_sp(:,(idx - 1)*k + 1:idx*k); %#ok<MINV>
            % 구조형 기울기 계수행렬이 1시차부터 p시차까지 오른쪽으로 나열됨
        end
        vec_B = vec(B)';
        Bm(iter-n0,:) = vec_B(1,:);
        vec_Gamma = vec(Gamma)';
        Gammam(iter-n0,:) = vec_Gamma(1,:);
        betam(iter-n0,:) = beta';
        vec_Omega = vec(Omega)';
        Omegam(iter-n0,:) = vec_Omega(1,:);
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

Output.Bm = Bm;
Output.Gammam = Gammam;
Output.ImpulseRespm = ImpulseRespm;
Output.decomm = decomm;
Output.lnML = lnML;

end

%% 종속, 설명변수 만들기 %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Y0,YLm,YL,Y0_mean,YL_mean] = makeYX(Y,p)

k = cols(Y); % 변수의 수
T = rows(Y); % 시계열의 크기

Y0 = Y(p+1:T,:); % 종속변수
Y0_mean = meanc(Y0);
Y0 = demeanc(Y0);
% 설명변수(=Y의 과거값) 만들기
YL = zeros(T-p,p*k);
for i = 1:p
    YL(:,k*(i-1)+1:k*i) = Y(p+1 - i:T-i,:);
    % p 시차에 해당하는 전체 설명변수 데이터 블록을 YL의 (p-1) 시차 블록의 우측에 저장
end
YL_mean = meanc(YL);
YL = demeanc(YL);
ki = p*k; % 각 식에 있는 설명변수의 수
kki = k*ki; % 축약형 VAR의 회귀계수의 수

YLm = zeros(k,kki,T-p); % 설명변수를 3차원으로 새롭게 저장할 방
for t = 1:(T-p)
    xt = kron(eye(k), YL(t,:)); % x(t)' for regressor of SUR
    YLm(:,:,t) = xt; % p by k, x(t)'를 한층 한층 쌓는 것
end
end

%% Phi 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%
function [Phi,Fm,beta] = Gen_Phi(Y0,YLm,Phi0,p,b_,var_,Omega_inv)
k = cols(Y0);
X = YLm; % 설명변수, 3차원
XX = zeros(p*k*k,p*k*k);
XY = zeros(p*k*k,1);
T0 = rows(Y0); % = T-p


for t = 1:T0
    Xt = X(:,:,t); % x(t)' for SUR regressor
    XX = XX + Xt'*Omega_inv*Xt; % B1에서의 summation 부분
    XY = XY + Xt'*Omega_inv*Y0(t,:)'; % A에서의 summation 부분
end

precb_ = invpd(var_);
B1_inv = precb_ + XX;
B1_inv = 0.5*(B1_inv + B1_inv');
B1 = invpd(B1_inv);
B1 = 0.5*(B1 + B1');
A = XY + precb_*b_; % b_ = B0
BA = B1*A; % full conditional mean

Chol_B1 = cholmod(B1)';
beta = BA + Chol_B1*randn(p*k*k,1); % beta sampling 하기

% F 행렬만들기
Phi = reshape(beta,p*k,k);  % p*k by k, F 행렬의 1행 Block의 전치
Fm = [Phi'; eye((p-1)*k), zeros(k*(p-1),k)]; % p*k by p*k

eigF = eig(Fm);
imagine = imag(eigF).^2;
absolute = real(eigF).^2;
test = sqrt(absolute + imagine)<1;
if min(test) == 0
    Phi = Phi0; % 안정성 조건을 만족하지 못하면 지난 iteration 값을 저장
    Fm = [Phi'; eye((p-1)*k), zeros(k*(p-1),k)];
end

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

%% 충격반응함수, 분산분해 계산하기 %%%%%%%%%%%%%%%%%%%%%%%%%%
function [ImpulseRespm,Binv,decomm] = Gen_ImRes(Omega,F,mlag,n0,ImpulseRespm,iter,decomm,restriction,Binv0,resindex,T,ind_chol)
coder.extrinsic('optimization')
k = rows(Omega);
BinvT = zeros(k,k);
Binv = zeros(k,k);
if restriction == 1
    % B의 역행렬 계산하기
    chol_Omega = chol(Omega);
    for i = 1:k
        BinvT(i,:) = chol_Omega(i,:)*ind_chol(i,1);
    end
    Binv = BinvT'; 
    % Matlab은 상방삼각행렬을 제공하므로 Lower triangular matrix로 만들어 주는 것
elseif restriction == 2
    Psi = inv(eye(rows(F)) - F);
    Psi = Psi(1:k,1:k);
    
    THETAT = zeros(k,k);
    chol_THETA = chol(Psi*Omega*Psi');
    for i = 1:k
        THETAT(i,:) = chol_THETA(i,:)*ind_chol(i,1);
    end
    THETA = THETAT';
    
    Binv = inv(Psi)*THETA; %#ok<MINV>
elseif restriction == 3
    Binv = optimization(Omega,T,k,Binv0,resindex);
    Binv = reshape(Binv,k,k);
end


% 각 j에 대해서 충격반응함수 계산해서 저장하기

FF = eye(rows(F)); % F^0 = eye
decom_numer = zeros(k,k);
decom_deno = zeros(k,1);
decom = zeros(k,k);
for j = 1:(mlag+1)
    
    psi_j = FF(1:k,1:k); % k by k
    theta = psi_j*Binv;  % k by k
    decom_numer_net = theta.^2;
    decom_deno_net = sum(theta.^2,2);
    decom_numer = decom_numer + decom_numer_net;
    decom_deno = decom_deno + decom_deno_net;
    for i = 1:rows(decom_deno)
        decom(i,:) = decom_numer(i,:)/decom_deno(i,1);
    end
    
    theta = vec(theta);  % k^2 by 1 로 길쭉하게 reshape
    decomvec = vec(decom);
    
    % 저장하기
    for i = 1:k^2
        ImpulseRespm(iter-n0, j, i) = theta(i,1);
        decomm(iter-n0, j, i) = decomvec(i,1);
        % iter-n0 : sampling된 값들이 차곡차곡 쌓임
        % j번째 시차에 대한 iter-n0번째 샘플링 값이 theta인데 그 값이 (iter-n0, j) 좌표에
        % 길쭉하게 저장됨
    end
    
    FF = FF*F;
    
end

end
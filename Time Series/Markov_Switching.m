function Output = Markov_Switching(X,Y,s,n0,n1,beta0,B0,alpha0,delta0,a0,a1,switchingind,idenind,betaiden,lowerbound,forecast,x_f,ML)
%
% Markov-Switching Model
%
% s: number of state
% n0, n1: burn in size, effective sampling size
% Spec: It need Prior for
%       beta;Normal(beta0, B0_), sig_2;IG(alpha/2, delta/2) P;Dirichlet(a0,a1)
%       a1은 P의 대각원소와 관련된 하이퍼 파라미터이고 a0는 P의 비대각원소와 관련된 하이퍼 파라미터이다.
%       Pss의 사전 평균 = a1/(a0*(s - 1) + a1)
% switchingind : 1이면 beta만 구조변화, 2이면 sig2만 구조변화, 3 이면 둘다 구조변화
% idenind: 1이면 beta에 식별제약, 2이면 sig2에 식별제약, 3이면 P에 식별제약

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

n = n0 + n1;

if forecast == 'Y'
    isForecast = 1; %  예측하기
else
    isForecast = 0;  % 예측 안하기
end


%% 저장할 방

Yfm = zeros(n,1);
[T,k] = size(X); % 데이터의 수
Sm = zeros(n, T); % 샘플링된 S 들을 저장
betam = zeros(n, k, s); % i 번째 층에 i번째 상태에 대한 beta가 저장
sig2m = zeros(n, s);
Pm = zeros(n, s*s); % P 행렬 전체가 sampling 되어 벡터로 Pm에 저장됨
Changepointm = zeros(T, 1);
% logLik = zeros(n,1);
Filtpm = zeros(T, s);
% logLikel = zeros(T,1);
candidate_S = zeros(T,1);
P = zeros(s,s);
P_para = P;
%% 초기값
disp(' ')
disp('Setting initial Value...Please wait...')
disp(' ')
if switchingind == 2
    b = kron(ones(1,s),beta0);
else
    b = beta0;
end
S = zeros(T,1);
% Initial value for S
if idenind == 1
    
    S = ones(T,1);
    
    if s == 2
        quan = median(Y);
    else
        quan = quantile(Y,s-1)';
    end
    
    for i = 1 : s-1
        S_plus = Y > quan(i);
        S = S + S_plus;
    end
    
elseif idenind == 2
    
    absY = (Y).^2;
    S = ones(T,1);
    
    if s == 2
        quan = median(absY);
    else
        quan = quantile(absY,s-1)';
    end
    
    for i = 1 : s-1
        S_plus = absY > quan(i);
        S = S + S_plus;
    end
elseif idenind == 3
    T_s = round(T/s);
    for i = 1 : s-1
        S(T_s*(i-1) + 1 : T_s*i, 1) = i;
    end
    S(T_s*(s-1) + 1 : T, 1) = s;
end
S_ini = S;

% Initial value for sig2
if switchingind == 1
    sig2 = kron(ones(s,1),(delta0./alpha0));
else
    sig2 = (delta0./alpha0);
end
% Initial value for P
if idenind == 1 || idenind == 2
    P = a0*ones(s,s);
    for i = 1:s
        P(i,i) = a1;
    end
    P_para = P;
    P = P./(a0*(s - 1) + a1);
elseif idenind == 3
    P = a1.*eye(s);
    for i = 1:s-1
        P(i,i+1) = a0;
    end
    P_para = P;
    P(1:s-1,:) = P(1:s-1,:)./(a0+a1);
    P(s,:) = P(s,:)/a1;
end

%% MCMC 시작

b_hat = zeros(k,s);
P_hat = zeros(s,s);
sig2_hat = zeros(s,1);
lnpost_hat = -exp(20);% 임의로 값을 주고 시작함

for iter = 1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        if idenind == 1
            disp('[LC*beta: ]')
            disp(betaiden*b)
            disp(' ')
            for i = 1:s
                fprintf('The share of state %G : %G\n',i,sum(S==i)/T);
            end
        elseif idenind == 2
            disp('[sig2: ]')
            disp(sig2')
            disp(' ')
            for i = 1:s
                fprintf('The share of state %G : %G\n',i,sum(S==i)/T);
            end
        elseif idenind == 3
            disp('[Transition Martix P: ]' )
            disp(P)
            disp(' ')
            for i = 1:s
                fprintf('The share of state %G : %G\n',i,sum(S==i)/T);
            end
        end
    end
    
    %  Step 1 : beta 샘플링
    b = Gen_beta(Y, X, S, sig2, beta0, B0, b, switchingind, idenind, betaiden, s);
    betam(iter, :, :) = b;
    
    %  Step 2 : sig2 샘플링
    sig2 = Gen_Sigma(Y, X, S, b, sig2, alpha0, delta0, switchingind, idenind, s);
    sig2m(iter, :) = sig2';
    
    %  Step 3 : S 샘플링
    [Filtpm, logLikel] = Filter(Y, X, b, sig2, P, idenind, s);
%     logLik(iter, :) = logLikel(1,1);
    candidate_S = sgen(Filtpm, P);
    
    ratioS = zeros(s,1);
    for i = 1:s
        ratioS(i,1) = sum(candidate_S==i)/T;
    end
    testS = min(ratioS >= lowerbound);
    
    if testS == 1
        S = candidate_S;
    elseif testS == 0
        if iter<10
            S = S_ini;
        else
            S_rand = discret1(ones(iter-1,1)/iter-1,1);
            S = Sm(S_rand,:)';
        end
    end
    Sm(iter, :) = S';
    
    if idenind == 3
        if iter > n0
            dS = S(2:end) - S(1:end-1); % 상태가 1에서 2로 변한 시점 찾기
            chp = find(dS == 1) + 1; % 구조변화시점
            Changepointm(chp) = Changepointm(chp) + 1; % 구조변화시점 행에 횟수를 하나 추가
        end
    end
        
    %  Step 4 : P 샘플링
    P = Gen_P(s, S, a0, a1,idenind);
    vec_P = vec(P)';
    Pm(iter, :) = vec_P(1,:);
    
    if isForecast == 1
        S_forecast = discret1(P(S(T,1),:)',1);
        beta_forecast = b(:,S_forecast);
        sig2_forecast = sig2(S_forecast,1);
        y_pred = x_f'*beta_forecast + sqrt(sig2_forecast)*randn(1,1);
        Yfm(iter, :) = y_pred;
        %         PredLikm(iter, :) = lnpdfmvn(y_pred, x_f'*beta_forecast, sig2_forecast);
    end
    
    if ML == 'Y' && iter > n0
        lnlik1 = logLikel;
        
        b_prior = lnpdfmvn(b(:,1),beta0(:,1),B0);
        if cols(beta0) > 1
            for i = 2:cols(beta0)
                b_prior = b_prior + lnpdfmvn(b(:, i),beta0(:,i),B0);
            end
        end
        sig2_prior = lnpdfig(sig2(1,1),alpha0(1,1)/2,delta0(1,1)/2);
        if rows(alpha0) > 1
            for i = 2:rows(alpha0)
                sig2_prior = sig2_prior + lnpdfig(sig2(i,1),alpha0(i,1)/2,delta0(i,1)/2);
            end
        end
        
        if idenind == 3
            P_prior = logDirichlet([P(1,1) P(1,2)]',[P_para(1,1) P_para(1,2)]');
            for i = 2 : s-1
                P_prior = P_prior + logDirichlet([P(i,i) P(i,i+1)]',[P_para(i,i) P_para(i,i+1)]');
            end
        else
            P_prior = sum(diag(logDirichlet(P', P_para')));
        end
        
        lnprior1 = b_prior+sig2_prior+P_prior;
        lnpost1 = lnlik1 + lnprior1;
        
        if lnpost1 > lnpost_hat
            b_hat = b;
            P_hat = P;
            sig2_hat = sig2;
            lnpost_hat = lnpost1; % 최빈값 후보의 사후 커널값
        end
        
    end
end

disp('Sampling Complete')
disp('Reading Result...Please wait...')

betam_ = betam(:,:,1);
for i = 2:s
    betam_ = [betam_ betam(:,:,i)];  %#ok<AGROW>
end

% logLik = logLik(n0+1:n,:);
betam_ = betam_(n0+1:n, :);
sig2m = sig2m(n0+1:n, :);
Pm = Pm(n0+1:n, :);
Sm = Sm(n0+1:n,:);
% MHm = [betam_ sig2m Pm];
if isForecast ==1
    Yfm = Yfm(n0+1:n, :);
end

Output.betam = betam_;
Output.sig2m = sig2m;
Output.Pm = Pm;
Output.Sm = Sm;
Output.Yfm = Yfm;
Output.Changepointm = Changepointm;

lnML = 0;
if ML == 'Y'

    if cols(beta0) == 1
        betam_ = betam_(:,1:k);
        b_hat = b_hat(1:k,1);
    end
    
    if rows(alpha0) == 1
        sig2m = sig2m(:,1);
        sig2_hat = sig2_hat(1,1);
    end
    
    if idenind == 3
        Pm_ML = Pm(:,Pm(1,:)~=0&Pm(1,:)~=1);
        MHm_ML = [betam_ sig2m Pm_ML];
        vec_P = vec(P_hat);
        vec_P = vec_P(vec_P~=0&vec_P~=1,1);
    else
        MHm_ML = [betam_ sig2m Pm];
        vec_P = vec(P_hat);
    end
    postmean = meanc(MHm_ML);
    postvarcov = .5*(cov(MHm_ML) + cov(MHm_ML)');
    ln_joint_post = lnpdfmvn([vec(b_hat);sig2_hat;vec_P],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;
end
Output.lnML=lnML;

end

function countm = CountTransitions(sm)

% Counting the # of Regime switches
nreg = maxc(sm); % 레짐의 수
countm = zeros(nreg,nreg); % count를 저장할 방
n = rows(sm);

for t = 2:n
    SL = sm(t-1);
    St = sm(t);
    countm(SL,St) = countm(SL,St) + 1;
end

end

function [Filtpm,logLikel] = Filter(Y, X, beta, sig2, P, idenind, s)

% 무조건부 분포의 도출

if idenind == 3
    prb_ll = zeros(s,1);
    prb_ll(1,1) = 1;
else
    A = [eye(s) - P'; ones(1,s)];
    prb_ll = inv(A'*A)*A'*[zeros(s,1);1];
end

T = rows(Y);
Filtpm = zeros(T, s);
lnpdfm = zeros(s, 1); % y의 조건부 밀도
logLikel = zeros(T,1);

for t = 1:T
    
    for i = 1:s
        
        yt = Y(t);
        xt = X(t,:)';
        
        lnpdfm(i,1) = lnpdfn(yt, xt'*beta(:,i), sig2(i,1));
        
    end
    
    pdfm = exp(lnpdfm);  % s by 1
    
    % 예상 확률
    prb_tl = P'*prb_ll;
    
    y_tlm = prb_tl.*pdfm; % s by 1
    
    y_tl = sum(y_tlm); % 1 by 1
    prb_tt = y_tlm./y_tl; % 필터드 확률
    Filtpm(t,:) = prb_tt';
    
    prb_ll = prb_tt;
    log_y_tl = log(y_tl);
    logLikel(t,1) = log_y_tl(1,1);
end
logLikel = sum(logLikel);
end

function beta = Gen_beta(Y, X, S, sig2, beta0, B0, beforebeta, switchingind, idenind, betaiden, s)

B0inv = inv(B0);
k = cols(X);

beta = beforebeta;

if switchingind == 1 || switchingind == 3
    
    for i = s:-1:1
        Y_ = Y(S == i);
        X_ = X(S == i, :);
        sig2inv = 1/sig2(i,1);
        B1inv = sig2inv*(X_'*X_) + B0inv;
        B1 = inv(B1inv);
        A = sig2inv*X_'*Y_ + B0inv*beta0(:,i);
        beta_ = B1*A + chol(B1)'*randn(k, 1);
        
        if idenind ==1
            test_beta = beta;
            test_beta(:,i) = beta_;
            isOK = min(diff((betaiden*test_beta)') >= 0); % 1 이면 제약 만족, 0 이면 제약 불만족
            beta = isOK*test_beta + (1-isOK)*beta; % 식별제약 만족여부 확인
        else
            beta(:,i) = beta_;
        end
    end
    
elseif switchingind == 2
        Y_ = Y(S == 1);
        X_ = X(S == 1, :);
        sig2inv = 1/sig2(1,1);
        XX = sig2inv*(X_'*X_);
        XY = sig2inv*X_'*Y_;
    for i = 2:s
        Y_ = Y(S == i);
        X_ = X(S == i, :);
        sig2inv = 1/sig2(i,1);
        XX = XX + sig2inv*(X_'*X_);
        XY = XY + sig2inv*X_'*Y_;
    end
    B1 = inv(XX + B0inv);
    A = XY + B0inv*beta0; %#ok<*MINV>
    beta_ = B1*A + chol(B1)'*randn(k, 1);
    beta = kron(ones(1,s),beta_);
end


end

function P = Gen_P(s, S, a0, a1,idenind)

countm_ = CountTransitions(S); % countm(i,j) = 상태 i에서 상태 j로 간 횟수
regime = rows(countm_);
countm = zeros(s, s);
countm(1:regime, 1:regime) = countm_;

if idenind == 3
    P = eye(s);
    P(1,1:2) = randDir([countm(1,1) + a1; countm(1,2) + a0])';
    if s > 2
        for i = 2:s-1
            p = randDir([countm(i,i) + a1; countm(i,i+1) + a0]);
            P(i,i) = p(1,1);
            P(i,i+1) = p(2,1);
        end
    end
else
    P = zeros(s,s);
    for i = 1:s
        N_ = a0*ones(s,1);
        N_(i,1) = a1;
        N = countm(i,:)' + N_; % n(i,j) + hyperparameter = 사후분포의 hyperparameter
        P(i,:) = randDir(N)';  % P의 사후분포에서의 sampling
    end
end

end

function sig2 = Gen_Sigma(Y, X, S, beta, sig20, alpha0, delta0, switchingind, idenind, s)

T = rows(Y);
sig2 = sig20;

if switchingind == 2 ||switchingind == 3
    for i = s:-1:1
        Y_ = Y(S == i);
        X_ = X(S == i, :);
        beta_ = beta(:,i);
        ehat = Y_ - X_*beta_;
        d1 = delta0(i,1) + ehat'*ehat;
        a1 = alpha0(i,1) + rows(X_);
        sig2_ = randig(a1/2,d1/2,1,1);
        
        if idenind == 2
            test_sig2 = sig2;
            test_sig2(i,1) = sig2_;
            isOK = min(diff(test_sig2) >= 0); % 1 이면 제약 만족, 0 이면 제약 불만족
            sig2 = isOK*test_sig2 + (1-isOK)*sig2; % 식별제약 만족여부 확인
        else
            sig2(i,1) = sig2_;
        end
    end
elseif switchingind == 1
    ehat = zeros(s,1);
    for i = 1:s
        Y_ = Y(S == i);
        X_ = X(S == i, :);
        beta_ = beta(:,i);
        ehat(i,1) = (Y_ - X_*beta_)'*(Y_ - X_*beta_);
    end
    ehat = sum(ehat);
    d1 = delta0 + ehat;
    a1 = alpha0 + T;
    sig2_ = randig(a1/2,d1/2,1,1);
    sig2 = sig2_.*ones(s,1);
end
end

function [sm, stm] = sgen(F,Pcap)
ns = cols(F);  %  # of regimes
n = rows(F);
sm = zeros(n,1);   %  regime index
stm = zeros(n,ns); % regime dummy
psm = zeros(n,ns); %  storage for the probabilities

pstyn = F(n,:);
sm(n) = discret1(pstyn',1);
stm(n,sm(n)) = 1;
psm(n,:) = pstyn;

t = n - 1;
while t >= 1
    st1 = sm(t+1); % value of the state at t+1
    pstyn = F(t,:) .* Pcap(:,st1)'; % 1 * m+1 row vector
    pstyn = pstyn/sum(pstyn,2); % Pr(st|Yn)
    sm(t) = discret1(pstyn',1);
    stm(t,sm(t)) = 1;
    psm(t,:) = pstyn;
    t = t - 1;
end
end
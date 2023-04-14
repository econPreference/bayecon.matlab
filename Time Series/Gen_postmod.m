function [theta_hat, lnpost_hat,lnlik_hat,lnpostm] = Gen_postmod(Data, MHm, b_0,B_0,a_0,d_0 )
% 사후 최빈값 찾기
% theta_hat = 사후모드
% lnpost_hat = 사후 밀도 극대값


n = rows(MHm); % MCMC size
lnpostm = zeros(n,1); % 로그사후밀도함수값 저장할 방
lnpost_hat = -exp(20); % 임의로 값을 주고 시작함
for iter = 1:n
    
    theta = MHm(iter,:)'; % iter 번째에 sampling된 파라미터
    
    lnlik1 = lnlik(theta,Data); % 관측치의 로그우도를 계산
    lnprior1 = lnprior(theta,b_0,B_0,a_0,d_0); % 결합 사전밀도함수값
    lnpost1 = lnlik1 + lnprior1; % 해당 파라미터의 사후 커널값
    lnpostm(iter) = lnpost1;
    if lnpost1 > lnpost_hat
        theta_hat = theta; % 최빈값 후보
        lnpost_hat = lnpost1; % 최빈값 후보의 사후 커널값
        lnlik_hat = lnlik1; % 최빈값 후보의 사전밀도함수값
    end
    
    
end


end


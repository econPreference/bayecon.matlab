function Output = ols(X,Y,output,graph) 

%% Ordinary Least Square
% Copyright owned by Lee sunHo(Korea. Univ)
% E-mail: derkone6602@korea.ac.kr

%% Input
% X: 설명변수
% Y: 종속변수
% output: 0이 입력되면 결과가 산출되지 않고 1이 입력되면 결과가 산출됨
% graph: '입력된 숫자' 번째에 해당되는 설명변수를 X축에 놓고
%         data value, fitted value, residual 값을 그려줍니다.
%         예를 들어 graph=3이면 X의 3열에 해당하는 변수를 X축에 놓고
%         그래프를 그려줍니다.

%% Output
% b: 회귀계수 추정치
% est_var_b : 추정된 회귀계수 추정량의 분산-공분산 행렬
% res : 잔차
% RSS : 잔차제곱합
% est_sig2 : 추정된 오차분산
% t : 회귀계수=0이라는 개별검정에 대한 t-value
% p : t-검정에 대한 p-value

%% Algorithm

format shortG

[n,k] = size(X); % n: 표본 개수, k: 설명변수 개수
b = inv((X'*X))*(X'*Y); %#ok<*MINV> %OLS 회귀계수 추정치
res = Y - X*b; %residual
fitted = X*b; %fitted value
est_sig2 = res'*res/(n-k); % 추정된 오차분산
est_var_b = est_sig2*inv(X'*X); % 회귀계수 추정량의 추정된 분산-공분산 행렬
est_se = sqrt(diag(est_var_b)); % 회귀계수 추정량의 표준오차
t = b./est_se; % 개별 회귀계수 유의성에 대한 개별검정 t-value
p = 2*min(tcdf(t,n-k),1-tcdf(t,n-k)); % t-검정에 대한 p-value
CI_upper = b + tinv(0.975,n-k).*est_se; % 회귀계수 95% 신뢰구간 상한
CI_lower = b - tinv(0.975,n-k).*est_se; % 회귀계수 95% 신뢰구간 하한
M=(eye(n) - ones(n,1)*inv(ones(n,1)'*ones(n,1))*ones(n,1)');
TSS = Y'*M*Y; % 총제곱합
RSS = res'*res; % 잔차제곱합
ESS = TSS - RSS; % 회귀제곱합
R2 = 1 - RSS/TSS; % 결정계수
adj_R2 = 1 - (res'*res/(n-k))/((Y'*M*Y)/(n-1)); % 조정된 결정계수
SC = log(res'*res/n) + k/n*log(n); % 슈바르츠 정보기준
AIC = log(res'*res/n) + 2*k/n; %아카이케 정보기준
F = (R2/(k-1))/((1-R2)/(n-k)); % 절편을 제외한 모든 회귀계수가 0이라는 결합 귀무가설 검정
Fp= (1 - fcdf(F,k-1,n-k)); % 위의 검정에 대한 p-값

Output.beta = b;
Output.var_beta = est_var_b;
Output.residual = res;
Output.RSS = RSS;
Output.sig2 = est_sig2;
Output.t_value = t;
Output.p_value = p;
Output.R2 = R2;

if nargin == 4
    Z1=[X(:,graph) Y fitted res];
    [~, sortOrder] = sort(Z1(:,1));
    Z2= Z1(sortOrder,:);
    plot(Z2(:,1),[Z2(:,2),Z2(:,3),Z2(:,4),zeros(n,1)]);
    legend('actual value', 'fitted line','residual');
end

if nargin == 2 || output == 1
    disp('==================================================================================');
    disp('Model: Ordinary Least Squares')
    disp('----------------------------------------------------------------------------------');
    disp(['       TSS= ' num2str(TSS) '  ESS= ' num2str(ESS) '  RSS= ' num2str(RSS)]);
    disp('----------------------------------------------------------------------------------');
    disp(['       d.f. = ' num2str(n-k) '    s.e. of error = ' num2str(sqrt(est_sig2))]) 
    %s.e. of error: 오차항의 표준오차
    disp(['       Model test= ' num2str(F) ' (P-value= ' num2str(Fp) ')']);
    % Model test: 절편항을 제외한 모든 회귀계수가 0 이라는 결합귀무가설 검정
    disp('----------------------------------------------------------------------------------')
    disp('        R2         adj_R2      SchwarzIC    AkaikeIC');
    disp( [R2 adj_R2 SC AIC] );
    disp('==================================================================================');
    disp('        beta       est_se(b)     t-value      p-value    Confidence Interval(95%)  ');
    disp('==================================================================================');
    disp([b est_se t p CI_lower CI_upper]);
    disp('==================================================================================')
    
elseif output == 0
    
    return
    
end




end
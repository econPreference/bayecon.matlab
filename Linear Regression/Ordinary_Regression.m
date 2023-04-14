function Output = Ordinary_Regression(Y,X,b_0,B_0,a_0,d_0,n0,n1,forecast,x_f,ML)

coder.extrinsic('format')
coder.extrinsic('clc')

precB_0 = invpd(B_0);
n = n0 + n1;

if forecast == 'Y'
    Is_forecasting = 1; %  예측하기
else
    Is_forecasting = 0;  % 예측 안하기
end

[~,k] = size(X);
bm = zeros(n,k);
sig2m = zeros(n,1);
R2 = zeros(n,1);
yfm = zeros(n,1);

if a_0*d_0 > 0
    sig2 = 0.5*d_0/(0.5*a_0 - 1);
else
    sig2 = stdc(Y)^2;
end
b_1 = b_0;
lnpost_hat = -exp(20);% 임의로 값을 주고 시작함
b_hat = b_0;
sig2_hat = 0.5*d_0/(0.5*a_0 - 1);

for iter=1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[beta: ]')
        disp(b_1')
        disp('[sigma2: ]')
        disp(sig2)
    end
    
    %======================================================================
    % Origianl version
    %----------------------------------------------------------------------
    b_1 = Gen_beta(Y,X,b_0,precB_0,sig2);
    bm(iter,:) = b_1';
    %----------------------------------------------------------------------
    % Modified version for restriction
    %----------------------------------------------------------------------
%     if iter == n
%         warning('There are some restrictions on betas in current algorithm')
%     end
%     
%     b_1_ = Gen_beta(Y,X,b_0,precB_0,sig2);
%     if b_1_(2) <= 1
%         b_1 = b_1_;
%     end
%     bm(iter,:) = b_1';
    %======================================================================
    
    sig2 = Gen_sig2(Y,X,b_1,a_0,d_0);
    sig2m(iter) = sig2;
    
    % Bayesian R-sqaured
    fitted = X*b_1;
    numer = var(fitted);
    deno = numer + sig2;
    R2(iter,1) = numer/deno;
    
    if Is_forecasting == 1
        yf = x_f'*b_1 + sqrt(sig2)*randn(1, 1);
        yfm(iter, 1) = yf;
    end
    
    if ML == 'Y' && iter > n0
        lnlik1 = sum(lnpdfn(Y, X*b_1, sig2));
        b_prior = lnpdfmvn(b_1,b_0,B_0);
        sig2_prior = lnpdfig(sig2,a_0/2,d_0/2);
        lnprior1 = b_prior+sig2_prior;
        lnpost1 = lnlik1 + lnprior1;
        
        if lnpost1 > lnpost_hat
            b_hat = b_1;
            sig2_hat = sig2;
            lnpost_hat = lnpost1; % 최빈값 후보의 사후 커널값
        end
    end
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')
bm = bm(n0+1:n,:);
sig2m = sig2m(n0+1:n,1);
R2 = R2(n0+1:n,1);
if Is_forecasting == 1
    yfm = yfm(n0+1:n,:);
end

lnML = 0;
if ML == 'Y'
    
    MHm = [bm sig2m];
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    ln_joint_post = lnpdfmvn([b_hat;sig2_hat],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;
    
end

Output.yfm = yfm;
Output.bm = bm;
Output.sig2m = sig2m;
Output.lnML = lnML;
Output.R2 = R2;

end

function [ beta ] = Gen_beta(Y, X, b_0, precB_0, sig2)

k = cols(X);
XX = X'*X;
XY = X'*Y;

B_1 = inv((1/sig2)*XX + precB_0);
A = (1/sig2)*XY + precB_0*b_0;
M = B_1*A;

beta = M + chol(B_1)'*randn(k,1);

end

function [ sig2 ] = Gen_sig2( Y, X, beta, a_0, d_0 )

T = rows(X);
a_1 = T + a_0;
e = Y - X*beta;
d_1 = d_0 + e'*e;

sig2 = randig(a_1/2,d_1/2,1,1);


end
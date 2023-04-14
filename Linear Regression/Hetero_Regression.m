function Output = Hetero_Regression(Y,X,b0,B0,a0,d0,v,n0,n1,forecast,x_f,ML)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

precb0 = invpd(B0);
n = n0 + n1;

if forecast == 'Y'
    Is_forecasting = 1; %  예측하기
else
    Is_forecasting = 0;  % 예측 안하기
end

k = cols(X);
T = rows(X);

bm = zeros(n,k);
Sig2m = zeros(n,1);
Lambdam = zeros(n,T);
Lam = ones(T,1);
yfm = zeros(n,1);

if a0*d0 > 0
    sig2 = 0.5*d0/(0.5*a0 - 1);
else
    sig2 = stdc(Y)^2;
end

sig2_inv = 1/sig2;
b_1 = b0;

b_hat=b0;
sig2_hat = sig2;
Lambda_hat = zeros(T,1);
lnpost_hat = -exp(20);% 임의로 값을 주고 시작함
                
for iter = 1:n
    
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
    
    b_1 = Gen_beta(X,Y,Lam,b0,precb0,sig2_inv);
    bm(iter,:) = b_1';
    
    sig2 = Gen_sig2(Y,X,Lam,b_1,a0,d0);
    sig2_inv = 1/sig2;
    Sig2m(iter) = sig2;
    
    Lam = Gen_Lam(Y,X,b_1,sig2_inv,v);
    Lambdam(iter,:) = Lam';
    
    if Is_forecasting == 1
        yf = randmvt(v,x_f'*b_1,sig2);
        yfm(iter, 1) = yf;
    end

    if ML == 'Y' && iter > n0
        
        lnlik1 = lnpdfmvn(Y, X*b_1, diag(sig2.*(1./Lam)));
        b_prior = lnpdfmvn(b_1,b0,B0);
        sig2_prior = lnpdfig(sig2,a0/2,d0/2);
        Lambda_prior = sum(lnpdfig(1./Lam,v/2,v/2));
        lnprior1 = b_prior+sig2_prior+Lambda_prior;
        lnpost1 = lnlik1 + lnprior1;
        if lnpost1 > lnpost_hat
            b_hat = b_1;
            sig2_hat = sig2;
            Lambda_hat = Lam;
            lnpost_hat = lnpost1; % 최빈값 후보의 사후 커널값
        end
    end
    
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')
bm = bm(n0+1:n,:);
Sig2m = Sig2m(n0+1:n);
Lambdam = Lambdam(n0+1:n,:);

if Is_forecasting == 1
    yfm = yfm(n0+1:n,:);
end

lnML = 0;

if ML == 'Y'
            
    MHm = [bm Sig2m Lambdam];
    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    ln_joint_post = lnpdfmvn([b_hat;sig2_hat;Lambda_hat],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;

end

Output.yfm = yfm;
Output.bm = bm;
Output.Sig2m = Sig2m;
Output.lambdam = Lambdam;
Output.lnML = lnML;


end

function beta = Gen_beta(X,Y,Lam,b0,precb0,sig2_inv)

Lam = diag(Lam);
B1inv = sig2_inv*X'*Lam*X + precb0;
B1inv = 0.5*(B1inv + B1inv');
B1 = invpd(B1inv);
A = sig2_inv*X'*Lam*Y + precb0*b0;

beta = B1*A + chol(B1)'*randn(cols(X),1);

end

function Lam= Gen_Lam(Y,X,beta,sig2_inv,nu_)

T = rows(Y);
Lam = zeros(T,1);
ehat = Y - X*beta;
ehat2 = ehat.*ehat;
nu1 = nu_ + 1;

for i = 1:T
    nu2 = nu_ + sig2_inv*ehat2(i);
    Lam(i) = randgam(nu1/2,nu2/2,1,1);
end

end

function sig2 = Gen_sig2(Y,X,Lam,beta,a0,d0)
T = rows(X);
v1 = a0 + T;
ehat = Y - X*beta;
ehat1 = sqrt(Lam).*ehat;
d1 = d0 + ehat'*ehat1;

sig2 = randig(v1/2,d1/2,1,1);

end

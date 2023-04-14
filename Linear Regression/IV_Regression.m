function  Output = IV_Regression(data,b0,B0,v0,R0,gamma0,G0,n0,n1,yind,exoind,endoind,zind,forecast,x_f,ML)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

T = rows(data);
precB0 = invpd(B0); % Precision matrix of B_0(역행렬)
precG0 = invpd(G0);
R0_inv = inv(R0);
n = n0 + n1; % total number of iteration(n0: 번인 되는 개수)

if forecast == 'Y'
    Is_forecasting = 1; %  예측하기
else
    Is_forecasting = 0;  % 예측 안하기
end


k1 = cols(exoind);
k2 = cols(endoind);
k3 = cols(zind);

yfm = zeros(n,1);
bm = zeros(n,k1+k2); % b 저장 공간
gammam = zeros(n,k2*(k1 + k3));
Sigmam = zeros(n,(k2 + 1)^2);

% 초기값 설정
b = b0;
gam = gamma0;
Sigma = inv(v0*R0);

Y = data(:,yind);
X = data(:,[exoind endoind]); % X = (x' xs')
Xs = data(:, endoind); % xs'

XZ = zeros(k2, k1*k2 + k2*k3, T); % Xs = [(kron(I,x') kron(I,z')]
for i = 1 : T
    XZ(:,:,i) = [kron(eye(k2),data(i,exoind)) kron(eye(k2),data(i,zind))];
end

lnpost_hat = -exp(20);% 임의로 값을 주고 시작함
b_hat = b0;
Sigma_hat = 0;

for iter=1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        disp(' ')
        disp('[beta: ]')
        disp(b')
        disp('[gamma: ]')
        disp(gam')
        disp('[sigma2: ]')
        disp(Sigma)
    end
    
    % Step 1: Sampling Sigma
    Sigma = Gen_Sigma(Y,X, Xs,XZ, b, gam, v0, R0_inv );
    vec_Sigma = vec(Sigma)';
    Sigmam(iter, :) = vec_Sigma(1,:) ;
    
    % Step 2: Sampling beta
    b = Gen_beta(Y, X, Xs, XZ, b0, precB0, gam, Sigma);
    bm(iter,:) = b';
    
    % Step 3: Sampling gamma
    gam = Gen_gamma(Y, X, Xs, XZ, b, precG0, gamma0, Sigma);
    gammam(iter,:) = gam';
    
    if Is_forecasting == 1
        xf_exo = x_f(exoind,1)';
        xf_endo = x_f(endoind,1)';
%         zf = x_f(zind,1)';
        X_f = [xf_exo xf_endo];
%         XZ_f = [kron(eye(k2),xf_exo) kron(eye(k2),zf)];
        yXs_f = X_f*b + sqrt(Sigma(1,1))*randn(1,1);
        yfm(iter, 1) = yXs_f(1,1);
    end
   
    if ML == 'Y' && iter > n0 
        lnlik1 = sum(lnpdfn(Y, X*b, Sigma(1,1)));
        b_prior = lnpdfmvn(b,b0,B0);
        Sigma_prior = lnpdfig(Sigma(1,1),(v0+2)/2,R0_inv(1,1)/2);
        lnprior1 = b_prior+Sigma_prior;
        lnpost1 = lnlik1 + lnprior1;
        
        if lnpost1 > lnpost_hat
            b_hat = b;
            Sigma_hat = Sigma(1,1);
            lnpost_hat = lnpost1; % 최빈값 후보의 사후 커널값
        end
    end
end
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')
bm = bm(n0+1:n,:);
Sigmam = Sigmam(n0+1:n,:);
gammam = gammam(n0+1:n,:);
if Is_forecasting == 1
    yfm = yfm(n0+1:n,:);
end

lnML = 0;

if ML == 'Y'
            
    MHm = [bm Sigmam(:,1)];

    postmean = meanc(MHm);
    postvarcov = .5*(cov(MHm) + cov(MHm)');
    ln_joint_post = lnpdfmvn([b_hat;Sigma_hat],postmean,postvarcov);
    
    lnML = lnpost_hat - ln_joint_post;

end

Output.yfm = yfm;
Output.bm = bm;
Output.gammam = gammam;
Output.Sigmam = Sigmam;
Output.lnML = lnML;

end

function b = Gen_beta(Y, X, Xs, XZ, b0, precB0, gamma, Sigma)

T = rows(Y);

Sigma11 = Sigma(1,1);
Sigma12 = Sigma(1,2:end);
Sigma21 = Sigma(2:end,1);
Sigma22 = Sigma(2:end,2:end);


B1_inv = precB0 + inv(Sigma11 - Sigma12*inv(Sigma22)*Sigma21)*(X'*X); %#ok<*MINV>
B1 = inv(B1_inv);
XT = X';

sum = zeros(rows(XT),1);
inv_Sigma22 = inv(Sigma22);
for i = 1:T
    sum = sum + XT(:,i)*(Y(i,1) - Sigma12*inv_Sigma22*(Xs(i,:)' - XZ(:,:,i)*gamma));
end
A = precB0*b0 + inv(Sigma11 - Sigma12*inv(Sigma22)*Sigma21)*sum;

b = B1*A + chol(B1)'*randn(rows(b0),1); % sampling beta

end

function Sigma = Gen_Sigma(Y,X, Xs,XZ, b, gamma, v0, R0_inv )

T = rows(Y);
v1 = v0 + T;

sum = zeros(rows(R0_inv),cols(R0_inv));
for i = 1:T
    sum = sum + [Y(i,1) - X(i,:)*b; Xs(i,:)' - XZ(:,:,i)*gamma]*[Y(i) - X(i,:)*b; Xs(i,:)' - XZ(:,:,i)*gamma]';
end

R1_inv = R0_inv + sum;
R1 = inv(R1_inv);
R1 = 0.5*(R1 + R1');
Sigma_inv = randwishart(R1,v1);
Sigma = invpd(Sigma_inv);

end

function gamma = Gen_gamma(Y, X, Xs, XZ, beta, precG0, gamma0, Sigma)

T = rows(Y);

Sigma11 = Sigma(1,1);
Sigma12 = Sigma(1,2:end);
Sigma21 = Sigma(2:end,1);
Sigma22 = Sigma(2:end,2:end);

inv_comSig = inv(Sigma22 - Sigma21*inv(Sigma11)*Sigma12);

sum = zeros(rows(precG0),cols(precG0));
for i = 1:T
    sum = sum + XZ(:,:,i)'*inv_comSig*XZ(:,:,i);
end
G1 = inv(precG0 + sum);

sum = zeros(rows(precG0),1);
for i = 1:T
    sum = sum + XZ(:,:,i)'*inv_comSig*(Xs(i,:)' - Sigma21*inv(Sigma11)*(Y(i,1) - X(i,:)*beta));
end

GAMMA = precG0*gamma0 + sum;

gamma = G1*GAMMA + chol(G1)'*randn(rows(gamma0),1); % sampling beta

end
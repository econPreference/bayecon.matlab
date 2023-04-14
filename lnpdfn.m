% log pdf of normal(정규분포의 확률밀도함수의 로그값)
% x = normal variates
% mu = vector of means
% sig2vec = vector of variances
% (관측치간 자기상관이 없다고 가정하므로 개별 관측치마다 우도함수값을 계산하는 것)
function [retf] = lnpdfn(x, mu, sig2vec)

sig2vec = real(sig2vec);
if minc(sig2vec) < 0
    error('sigma should be positive');
end
c = -0.5*log(2*sig2vec*pi);
e = x - mu;
e2 = e.*e;

retf = c - 0.5*e2./sig2vec;
end

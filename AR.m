function Y = AR(X,t,p)
% Y = AR(X,t,p)
% X: 변수, t: 시차, p: 총시차

T = rows(X);
Y = X(p+1-t:T-t,:);

end
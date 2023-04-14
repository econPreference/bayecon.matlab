% Note that
% Suppose that x = randgam(alpha,beta,1,1)
% E(x) = alpha/beta
% Var(x) = alpha/(beta^2)
% Notice that in matlab alpha = a and beta = 1/b

function [gam] = randgam(alpha,beta,m,n)

a = alpha;
b = 1/beta;
a = a*ones(m,n);
b = b*ones(m,n);
gam = gamrnd(a,b,m,n);   

end
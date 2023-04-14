%  random number generators 
%  mvt generator 
function [t_val, err] = randmvt(nu,mu,Omega)

k = rows(mu);

[L,err] = cholmod(Omega);

if err == 1
    fprintf('cholesky failed in proposal step. retaining current block');
    z = 0;
else
    x = L'*randn(k,1);
    y = chi2rnd(nu,1,1)/nu;
    z = mu + x / sqrt(y);
end
t_val = z;

end

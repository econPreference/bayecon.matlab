% sampling Wishart dist
% E(V) = Omega*nu
function [V] = randwishart(Omega,nu)

k = rows(Omega);
Chol_omg = cholmod(Omega)';
V = Chol_omg*randn(k,nu); % k by nu
V = V*V'; % k by k

end

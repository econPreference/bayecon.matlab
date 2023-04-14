function Omega = Gen_Omega(Y, beta)

T = rows(Y);

Y_ = Y - kron(ones(T, 1), beta');
ehat2 = Y_'*Y_;

 Omega1_inv = ehat2;
 Omega1 = inv(Omega1_inv);
 Omega1 = 0.5*(Omega1 + Omega1');
 Omega_inv = randwishart(Omega1,T);
 Omega = inv(Omega_inv);

end
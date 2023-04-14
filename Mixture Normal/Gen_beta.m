function beta = Gen_beta(Y, Omega, b_, var_)
Omega_inv = inv(Omega);
precb_ = inv(diag(var_)); 
k = cols(Y);
 Xt = eye(k);
    XX = zeros(rows(precb_),cols(precb_));
    XY = zeros(rows(precb_),1);
    T0 = rows(Y); 
  
    for t = 1:T0
        XX = XX + Xt'*Omega_inv*Xt;
        XY = XY + Xt'*Omega_inv*Y(t, :)';        
    end


    B1_inv = precb_ + XX;
    B1_inv = 0.5*(B1_inv + B1_inv');
    B1 = inv(B1_inv);
    B1 = 0.5*(B1 + B1');
    A = XY + precb_*b_; % b_ = B0
    BA = B1*A; % full conditional mean  

    Chol_B1 = chol(B1)';
    beta = BA + Chol_B1*randn(k, 1); % beta sampling го╠Б
end
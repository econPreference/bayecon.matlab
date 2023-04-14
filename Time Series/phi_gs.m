function v = phi_gs(n,box)

phi0 = box.phi0;
PHI0 = box.PHI0;

v = zeros(n,rows(phi0));

for i = 1:n
    v_ = phi0 + chol(PHI0)'*randn(rows(phi0),1);
    v(i,:) = v_';
end

end
function v = phi_f(phi,box)

phi0 = box.phi0;
PHI0 = box.PHI0;
p = rows(phi);

G = [phi';eye(p-1) zeros(p-1,1)];
eigen = eig(G);
imagine = imag(eigen).^2;
absolute = abs(eigen).^2;
test = sqrt(absolute + imagine)<1;
if min(test) == 1
    v = exp(lnpdfmvn4(phi,phi0,chol(PHI0)));
else
    v = 0;
end
    

end
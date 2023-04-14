function v = phi_g(phi,box)

phi0 = box.phi0;
PHI0 = box.PHI0;

v = exp(lnpdfmvn4(phi,phi0,chol(PHI0)));

end
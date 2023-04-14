function val = lnpdfwishart(X,R,v)

% Compute log of Wishart dist pdf
p = rows(X);
R_inv = inv(R);
log_numer = log(det(X)^((v - p -1)/2));
log_deno = (v*p/2)*log(2) + (v/2)*log(det(R)) +  logMvGamma(v/2,p);
lnex = -.5*trace(R_inv*X); %#ok<MINV>

val = log_numer - log_deno + lnex;

end
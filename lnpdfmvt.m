% log of multivariate t density 
function [retf] = lnpdfmvt(y,mu,Sigma,nu)

P = invpd(Sigma);
C_rows = rows(P);
C_cols = cols(P);
C = zeros(C_rows,C_cols);
e = zeros(C_rows,1);
n = rows(y);
a = (n+nu)/2;
lnc = gammaln(a) - gammaln(nu/2) - (n/2)*log(pi*nu);

if P == 1         %/* Pinv is the identity matrix */
        e = (y-mu);          %  /* standard normals: k times m matrix */
        ePe = sum(e .* e);   %  /*  m*1 vector  */
        z = lnc - a*log( 1 + ePe/nu );   %/* m*1 vector */
else             %/* Pinv is a full covariance matrix */
        C = chol(P);       %   the matrix that makes the y uncorrelated */
        e = C*(y-mu);         %   standard normals: k times m matrix */
        ePe = sum(e .* e);    %   m*1 vector  */
        z = lnc + .5*lndet1(C) - a*log( 1 + ePe/nu );   %/* m*1 vector */
end
retf = z;

end
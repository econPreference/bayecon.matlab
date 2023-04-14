% /* This proc computes inefficiency factor */
% /* maxac: maximum lag of autocorrelations to compute */
% /* MHmat: storage of MH outputs  */
% /* ine: inefficiency factor */
function [ine, Acfm] = ineff(MHmat,maxac)

np = cols(MHmat);          %/* # of parameters */
acfm = zeros(maxac,np);    %/* to save sample autocorrelation  */

for i=1:np  %/* index of parameter */
    %/* sample autocorrelation for each parameter */
    acfm(:,i) = acf(MHmat(:,i),maxac);
end

Acfm = acfm;
nh = rows(acfm); %/* length of horizon */
ine = zeros(np,1); % /* to save inefficiency factor */

for i=1:np  %/* index of parameters */
    sum_rho = 0; %/* to save sum of weigthed autocorrelation */
    
    for j=1:nh  % index of horizon
        sum_rho = sum_rho + ParzenK(j/nh)*acfm(j,i);
        Acfm(j, i ) = ParzenK(j/nh)*acfm(j,i);
    end
    
    A = 2*nh/(nh - 1);
    ine(i) = 1 + A*sum_rho;
end

end
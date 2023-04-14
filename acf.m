% computing autocorrelation function 
% /* maxac: maximum lag of autocorrelations to compute */
function [retf] = acf(x,maxac)

retf = autocorr(x,maxac);
retf = retf(2:maxac+1);
% 자기자신과의 상관관계계수는 제외하고 값을 뽑아내는 것

end
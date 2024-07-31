%  This proc summarizes posterior distribution
%  It gives posterior mean, SD, alpha, 0.5 and (1-alpha) quantiles,
%    and inefficiency factor
function [postmom] = MHout0(Mhm, alpha, maxac, is_postplot)

if nargin < 4
    is_postplot = 0;
end

n = rows(Mhm);

if nargin < 3
    maxac = min(100, round(0.2*n));
    is_postplot = 0;
end

maxac = min(maxac, round(0.2*n));
ql = [alpha;0.5;(1-alpha)]; %  level
credb = quantile(Mhm,ql)';  %  alpha, 0.5 and (1-alpha) credibility interval
inef = ineff(Mhm,maxac);    %  inefficiency factor
postm = meanc(Mhm);         %  posterior mean
sd = stdc(Mhm);             %  standard deviation
index = 1:cols(Mhm);

n1 = round(0.4*n);
n2 = floor(0.4*n);
M1 = Mhm(1:n1,:);
M2 = Mhm(n-n2+1:n,:);
theta_ = meanc(M1) - meanc(M2);
var_ = ((var(M1)/n1) + (var(M2)/n2))';
z = theta_./sqrt(var_);
p_val = 2*(1-cdfn(abs(z))); % k by 1, p value
postmom = [index',postm,sd,credb,inef,p_val];

if is_postplot == 1
    post_plot(Mhm, maxac);
end

end

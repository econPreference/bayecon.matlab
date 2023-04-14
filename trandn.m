%  sampling truncated normal
%  mu : mean, k by 1
%    sd : standard deviation, k by 1
%    a : lower bound, k by 1
%    b : upper bound, k by 1
%  a < y < b 
function [retf] = trandn(mu,sd,a,b)

k = rows(mu);
lb = (a-mu)./sd;
ub = (b-mu)./sd;

u = rand(k,1);
x = cdfn(lb).*(1-u) + u.*cdfn(ub);
retf = mu + sd.*cdfni(x);

isfeasible = a - mu < 2.7*sd;  % 1 if true
retf = (ones(k,1) - isfeasible).*a + isfeasible.*retf;

isfeasible = mu - b < 2.7*sd;  % 1 if true
retf = (ones(k,1) - isfeasible).*b + isfeasible.*retf;

% if not finite, then gives the closer one between a and b to mu 
tmp = abs(a - mu) > abs(b - mu);  % 1 if true
tmp = (ones(k,1) - tmp).*a + tmp.*b;

isfin = isfinite(retf);  % 1 if true
retf = (ones(k,1) - isfin).*tmp + isfin.*retf;

isfNaN = isnan(retf);  % 1 if true
for i = 1:rows(retf)
    if isfNaN(i) == 1
        retf(i) = tmp(i);
    end    
end

%    disp('=========================');
%         disp(retf');
%         disp(tmp');
%         disp(mu');
%         disp(sd');
%         disp(isfin');
% disp(retf');

% if minc(isfinite(retf)) ==  0
%     while minc(isfinite(retf)) ==  0
%         u = rand(k,1);
%         x = cdfn(lb).*(1-u) + u.*cdfn(ub);
%         disp(mu');
%         disp(sd');
%         retf = mu + sd.*cdfni(x);
%     end
% end

end
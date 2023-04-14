function p = lnpdfmvn(x, m, C)
% GAUSSIAN_PROB Evaluate a multivariate Gaussian density.
% x =  d by 1 vector

d = length(x);


denom = (2*pi)^(d/2)*sqrt(abs(det(C)));
mahal = sum(((x-m)'*invpd(C)).*(x-m)',2);   % Chris Bregler's trick
%     if any(mahal<0)
%         %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015
%     end

p = -0.5*mahal - log(denom);


end

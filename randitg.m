% n by 1 vector of discrete uniform distribution on [1,2,3,..,m] */
function [retf] =  randitg(m,n)
  retf = ceil(rand(n,1)*m);
end
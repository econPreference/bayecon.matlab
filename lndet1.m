function [a] = lndet1(C)
a = 2*sumc(log(diag(C)));
end 

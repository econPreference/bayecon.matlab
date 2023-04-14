% gauss function
function retf = sumc(x)

if rows(x) > 1
retf = sum(x);
retf = retf';

else
 retf = x';
end
end
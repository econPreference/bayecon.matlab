function v = b_f(theta,box)

v = box.v;
k = box.k;
mode = box.mode;
theta0 = 1;
aa = box.aa;
bb = box.bb;

if aa < theta && theta < bb
    
    numer = (mode-theta0)^2;
    deno = (2*k/(v+1))^(1/2*k);
    tau = numer/deno;
    
    part1 = log(k) + (v/2)*log(tau) - log(gamma(v/(2*k)));
    part2 = -(v+1)*log(abs(theta-theta0));
    part3 = -(((theta-theta0)^2)/tau)^(-k);
    
    logprior = part1 + part2 + part3;
    v = exp(logprior);
    
else
    
    v = 0;
    
end

end
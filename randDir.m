% random number generator : Dirichlet Dis 
function d = randDir(N)

d = gamrnd(N,1);
d = d./sum(d);

end
function v = b_gs(n,box)

mode = box.mode;
aa = box.aa;
bb = box.bb;

pd = makedist('Normal','mu',mode,'sigma',sqrt(1));
t = truncate(pd,aa,bb);
v = random(t,[n,1]);

end
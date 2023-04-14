function v = b_g(theta,box)

mode = box.mode;
aa = box.aa;
bb = box.bb;

pd = makedist('Normal','mu',mode,'sigma',sqrt(1));
t = truncate(pd,aa,bb);
v = pdf(t,theta);

end
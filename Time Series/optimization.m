function Binv = optimization(Omega,T,k,Binv0,resindex)

data = [Omega, [T; zeros(k-1,1)]];
Binv = SA_Newton(@obj_mex,@res,vec(Binv0),data,0,resindex);

end
function H = FHESSnew1(f,x,index,Sm)
% FHESS Computes numerical Hessian of a function
% USAGE:
%   H=FHESS(f,x[,additional parameters])
% INPUTS
%   f :  a string name of a function
%   x :  a vector at which to evaluate the Hessian of the function


 k = size(index,1);
 fx = f(x,Sm);
 xarg = x(index);
 
 h = eps.^(1/3)*max(abs(xarg),1e-2);
 xargh = x(index) + h;
 h = xargh - x(index);
 ee = sparse(1:k,1:k,h,k,k);

 g = zeros(k,1);
 for i=1:k
   xee = x;
   xee(index) = xarg + ee(:,i);  
   g(i) = f(xee,Sm);
 end

 H=h*h';

 for i=1:k
   for j=i:k
       xeeij  = x;
       xargeeij = xarg + ee(:,i) + ee(:,j);
       xeeij(index) = xargeeij;
     H(i,j) = (f(xeeij,Sm)-g(i)-g(j)+fx) ...
                  / H(i,j);
     H(j,i)=H(i,j);
   end
   
   H = 0.5*(H + H');
 end
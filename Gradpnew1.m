% Usage: g = Gradp(fun, x0)
%     fun: name of the multidimensional scalar function 
%          (string). This function takes a vector argument of
%          length n and returns a scalar.
%     x0: point of interest (vector of length n)
%     g: column vector containing the gradient of fun at x0. The
%        size(g) = size(x)
function [grdd] = Gradpnew1(f,arg,index,Sn)

% check for complex input */
    x0 = arg(index);    % extract the relevant components of arg */
    x0 = real(x0);

    f0 = f(arg,Sn);
    n = length(f0);
    k = length(x0);
    grdd = zeros(n,k);

% Computation of stepsize (dh) for gradient */
    ax0 = abs(x0);
    dax0 = x0./ax0;
    dax0(isnan(dax0)) = ones(sum(isnan(dax0)), 1);
      
    ma = [ax0';(1e-2)*ones(1,k)];
    dh = (1e-8)*max(ma)'.*dax0;
%     dh
%     xdh = x0 + dh;
%     dh = xdh - x0;    % This increases precision slightly 

    for i =  1:k
        argnew = arg;
        argnew(index(i)) = argnew(index(i)) + dh(i);
        grdd(:,i) = f(argnew,Sn);
    end
    
    dh = kron(ones(n,1),dh');
    f0 = kron(ones(1,k),f0);
   
  
    grdd = (grdd - f0)./dh;
    
    end 

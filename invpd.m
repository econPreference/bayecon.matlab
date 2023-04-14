%'invpd' Inverse of a symmetric positive definite matrix using Cholesky factorization 
%Ainv = invpd(A) computes the inverse of a symmetric positive 
%definite matrix A using its Cholesky factor H.
%inv(A) = inv(H)inv(H)'. 
%input  : Matrix A
%output : Ainv, err (=1 if error, and 0 if no error)
%대칭, 양정부호 행렬의 역행렬을 LU분해보다 빠르고 정확하게 계산해 줍니다.
function [Ainv,err] = invpd(A)
	[m,n] = size(A);
    err = 0;
    if m~=n
        	disp('matrix A  is not square');
            err = 1;
            Ainv = [];
        	return
    end
    
	[H,err] = cholmod(A);
    if err == 1  % = 1 if error
          %  disp('matrix A  is not positive definite');
            Ainv = [];
    else 
	        Hinv = invuptr(H);
	        Ainv = Hinv*Hinv';
    end
    Ainv = (Ainv+Ainv')/2;
end

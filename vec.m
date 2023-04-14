%Macro to compute unconditional variance of the factors
%Çà·Ä X¸¦ º¤ÅÍ·Î ¸¸µé¾îÁÜ

function vecX = vec(X)

[r,c] = size(X);
rc = r*c;
if rc > 1
vecX = reshape(X,rc,1);
else
    vecX = X;
end
end
function Output = PCA(rawY)

T = rows(rawY);
k = cols(rawY);
std_Y = std(rawY);

st_Y = zeros(T,k);
for i = 1:T
    st_Y(i,:) = rawY(i,:)./std_Y;
end
Y = demeanc(st_Y);
Sigma = cov(Y);

[C,V] = eig(Sigma);

[~,Order] = sort(diag(V));
Order = flip(Order)';

C = C(:,Order);

Order= Order';
diag_V = diag(V);
V = diag(diag_V(Order,1));

P = Y*C;

Output.Principal_Component = P;
Output.Eigenvalues = V;
Output.Eigenvectors = C;

end
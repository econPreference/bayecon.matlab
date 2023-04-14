function Shat=longvar(vhat,c)

% Estimate 2*pi*h(0) of v
% If v include a term associated with an intercept, c=1, if not, c=0
% If c=1, also make sure that the intercept associated term be in the 
% first column of v

vhat = demeanc(vhat);
[T,n]=size(vhat);

Gamma=zeros(T*n,n);
for j=0:T-1
    gamma=(1/T)*vhat(j+1:T,:)'*vhat(1:T-j,:);
    Gamma(n*j+1:n*(j+1),1:n)=gamma;
end

% Quardratic Spectral Window, with selection of bandwidth - D.W.K
% Andrews(1991) using AR(1) approximation

rho=zeros(n-c,1);
sig=zeros(n-c,1);
for i=1+c:n
    v=vhat(:,i);
    vh=v(2:T,1);
    vl=v(1:T-1,1);
    r=(vl'*vh)/(vl'*vl);
    rho(i-c,1)=r;
    e=vh-vl*r;
    sig(i-c,1)=(e'*e)/T;
end

numerator=0;
denominator=0;
for idx=1:n-c
    numerator=numerator ...
        +4*(rho(idx,1)^2)*(sig(idx,1)^2)/((1-rho(idx,1))^8);
    denominator=denominator...
        +(sig(idx,1)^2)/((1-rho(idx,1))^4);
end

alpha=numerator/denominator;
m=1.3221*(alpha*T)^(1/5);

%% Applying QS window

S=Gamma(1:n,:);
for ind=1:T-1
    d=6*pi*(ind/m)/5;
    w=3*(sin(d)/d-cos(d))/(d^2);
    S=S+w*Gamma(ind*n+1:ind*n+n,:);
end
for ind=1:T-1
    d=6*pi*(-ind/m)/5;
    w=3*(sin(d)/d-cos(d))/(d^2);
    S=S+w*Gamma(ind*n+1:ind*n+n,:)';
end

Shat=S*(T/(T-n));

end
function [retf] = discret1(p,n)

psum = cumsumc(p); % p에 대한 누적합
psuml = [0;psum(1:rows(p)-1)];
store = zeros(n,1);

i = 1;
while i <= n
    u = rand(1)*ones(cols(p),1);
    ind = gt(u,psuml); 
    ind1 = le(u,psum);
    iseql = ind == ind1;
    % psum=[.1 ; .2; .6; .8; 1] 이고 u=0.68이면
    % .6 ~ .8 사이에 위치하므로 4번째 원소자리에 1의 값을 부여하고 나머지는 0
    [~,maxind] = max(iseql); % 그 1의 값의 위치    
    store(i) = maxind; 
    i = i + 1;
end

retf = round(store);
end

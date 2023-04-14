function var_decom(decomm,postmom_B)

[~, mlag1, k2] = size(decomm);
% k2 = 길쭉하게 쌓았으니 k^2, mlag1 = mlag + 1 (0 시차도 포함)

k = sqrt(k2);
ql = [0.025;0.5;0.975]; % 95% 신뢰구간
xa = 0:(mlag1-1);

a = 1:k2;
a = reshape(a, k, k);

figure('Name','Variance Decomposition([2.5%, 50%, 97.5%])');
halfline = 0.5*ones(mlag1,1);

for i = 1:k2
    
    decomm_ij = decomm(:,:,i); % n1 by (mlag+1) i번째 모수에 대한 값을 빼옴
    decomm_ij = quantile(decomm_ij,ql)'; % (mlag+1) by 3
    
    [r,c] = find(a==i);
    % i 번째 모수: c번째 변수의 구조충격에 대한 r번째 변수의 반응
    B = reshape(postmom_B(:,2),k,k);
    Binv = inv(B);
    
    subplot(k,k,i);
    plot(xa, decomm_ij(:, 1), 'k--', xa, decomm_ij(:, 2), 'b-',xa, decomm_ij(:, 3), 'k--', xa, halfline, 'k:','linewidth', 2);
    xlim([0  mlag1]);
    ylim([0 1]);
    title(['Explained variation of ',num2str(r) , ' by error ', num2str(c)])
    xlabel(['Size of shock : ' num2str(Binv(r,c))])
    
end

end
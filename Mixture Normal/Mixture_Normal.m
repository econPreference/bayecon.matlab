function Output = Mixture_Normal(Y,M,bm_,varm_,Omegam,n0,n1)

coder.extrinsic('format')
coder.extrinsic('clc')

format shortG

T = rows(Y);
k = cols(Y);
n = n0 + n1;

betam = bm_;
beta = betam(:, 1) ;
Post_betam = zeros(n, M*k);
Post_Omegam = zeros(n, k^2,M);
Sm = zeros(n, T);

for iter = 1:n
    
    [~, resid] = minresid(iter,100);
    if resid == 0
        clc
        disp('=====================================')
        fprintf('Current iteration: %G\n',iter);
        disp('=====================================')
        for i = 1 : M
            fprintf('[Gruop %G] \n',i);
            disp(' ')
            disp('[mean: ]')
            disp(betam(:,i)')
            disp('[variance: ]')
            disp(Omegam(:, :, i))
            disp(' ')
        end
    end
    
    %% s »ùÇÃ¸µ
    S = Gen_S(Y, betam, Omegam);
    Sm(iter, :) = S';
    
    for m = 1:M
        Ym = Y(S==m, :);
        %% m »ùÇÃ¸µ
        beta = Gen_beta(Ym, Omegam(:,:,m), bm_(:, m), varm_(:, m));
        betam(:, m) = beta;
        
        %% Omega »ùÇÃ¸µ
        Omega = Gen_Omega(Ym, betam(:, m));
        Omegam(:, :, m) = Omega;
        vec_Omega = vec(Omega)';
        Post_Omegam(iter, :, m) = vec_Omega(1,:);
    end
    vec_betam = vec(betam)';
    Post_betam(iter, :) = vec_betam(1,:);
    
end

Post_betam = Post_betam(n0+1:n, :);
Sm = Sm(n0+1:n,:);
Post_Omegam = Post_Omegam(n0+1:n,:, :);

Output.mum = Post_betam;
Output.Sm = Sm;
Output.Sigmam = Post_Omegam;


end
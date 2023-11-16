function Output = SSM_main(data)
clc
format shortG
disp(' ')
disp('/////////////////////////////////////////////')
disp('////////Bayesian Econometrics ToolBox////////')
disp('/////////////////////////////////////////////')
disp(' ')
disp('Model: State Space Model')
disp('====================Model====================')
disp('1. Unobserved Component Model')
disp('2. Dynamic Common Factor Model')
disp('3. Time-varying Parameter')
disp('4. ARMA-X(Kalman filter)')
disp('5. Stochastic Volatility')
disp('=============================================')
disp(' ')
disp('Which model would you like to choose?')
disp(' ')
Model = input(' ');

if Model == 1
    
    clc
    exist = dir('UCM.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"UCM.mat" is founded"')
        disp('Do you want to use the model in "UCM.mat" ?')
        disp(' ')
        load_hyper = input('type Y or N : ','s');
        if load_hyper == 'Y'
            load_hyper = 1;
        elseif load_hyper == 'N'
            load_hyper = 0;
        end
    elseif test == 1
        load_hyper = 0;
    end
    
    if load_hyper == 0
        disp('===============================================')
        disp('Model: Unobserved Component Model')
        disp('===============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_(t) = yp_(t) + yc_(t)')
        disp('yp_(t) = x(t-1) + yp_(t-1) + w_(t), w_(t)~Normal(0,sig2_w)')
        disp('x_(t) = x(t-1) + z(t), z_(t)~Normal(0,sig2_z)')
        disp('yc_(t) = phi(1)*yc_(t-1) +...+ phi(p)*yc_(t-p) + e_(t), e_(t)~Normal(0,sig2_e)')
        disp(' ')
        disp('phi ~ Normal(phi0, PHI0)')
        disp('(phi0: p by 1, PHI0: p by p)')
        disp(' ')
        disp('d*sig2_w ~ InverseGamma(w01 / 2, w02 / 2)')
        disp('(w01: 1 by 1, w02: 1 by 1)')
        disp(' ')
        disp('d*sig2_z ~ InverseGamma(z01 / 2, z02 / 2)')
        disp('(w01: 1 by 1, w02: 1 by 1)')
        disp(' ')
        disp('d*sig2_e ~ InverseGamma(e01 / 2, e02 / 2)')
        disp('(e01: 1 by 1, e02: 1 by 1)')
        disp(' ')
        disp('What is d?')
        d = input('scalar: ');
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        phi0 = input('phi0: p by 1 = ');
        PHI0 = input('PHI0: p by p = ');
        disp(' ')
        w01 = input('w01: scalar = ');
        w02 = input('w02: scalar = ');
        disp(' ')
        e01 = input('e01: scalar = ');
        e02 = input('e02: scalar = ');
        disp(' ')
        z01 = input('z01: scalar = ');
        z02 = input('z02: scalar = ');
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        disp('Do you want to save your model into "UCM.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('UCM.mat','d','phi0','PHI0','w01','w02','e01','e02','n','z01','z02')
            disp(' ')
            disp('Model is stored in file named  "UCM.mat"')
        end
    elseif load_hyper == 1
        Prior = load('UCM.mat');
        d = Prior.d;
        e01 = Prior.e01;
        e02 = Prior.e02;
        w01 = Prior.w01;
        w02 = Prior.w02;
        phi0 = Prior.phi0;
        PHI0 = Prior.PHI0;
        n = Prior.n;
        z01 = Prior.z01;
        z02 = Prior.z02;
        save_mat = 'N';
    end

    Output = Unobserved_Component_Model_mex(data,phi0,PHI0,w01,w02,e01,e02,z01,z02,n(1,1),n(1,2),d);
            
    phim = Output.phim;
    sig2_wm = Output.sig2_wm;
    sig2_em = Output.sig2_em;
    sig2_zm = Output.sig2_zm;
    yp = Output.yp;
    yc = Output.yc;

    alpha = 0.025;
    maxac = 200;
    postmom_phi = MHout0(phim,alpha,maxac);
    postmom_sig2w = MHout0(sig2_wm,alpha,maxac);
    postmom_sig2e = MHout0(sig2_em,alpha,maxac);
    postmom_sig2z = MHout0(sig2_zm,alpha,maxac);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Unobserved Component Model')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter: ')
    disp(' ')
    disp('[phi0, PHI0]= ')
    disp([phi0 PHI0]);
    disp('[w01, w02]= ')
    disp([w01 w02]);
    disp('[z01, z02]= ')
    disp([z01 z02]);
    disp('[e01 e02 d]= ')
    disp([e01 e02 d]);
    disp('-----------------------------------------------------------------------------------------------------------');
    max_ineff = max([postmom_phi(:,7);postmom_sig2w(:,7);postmom_sig2e(:,7)]);
    min_p = min([postmom_phi(:,8);postmom_sig2w(:,8);postmom_sig2e(:,8)]);
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff    Geweke-p 값');
    disp('===========================================================================================================');
    p = rows(phi0);
    for i = 1:p
        disp(['       phi(' num2str(i) ')     ' num2str([postmom_phi(i,2) postmom_phi(i,3) postmom_phi(i,4) postmom_phi(i,5) postmom_phi(i,6) postmom_phi(i,7) postmom_phi(i,8)])]);
    end
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['       sig2_e     ' num2str([postmom_sig2e(1,2) postmom_sig2e(1,3) postmom_sig2e(1,4) postmom_sig2e(1,5) postmom_sig2e(1,6) postmom_sig2e(1,7) postmom_sig2e(1,8)])]);
    disp(['       sig2_w     ' num2str([postmom_sig2w(1,2) postmom_sig2w(1,3) postmom_sig2w(1,4) postmom_sig2w(1,5) postmom_sig2w(1,6) postmom_sig2w(1,7) postmom_sig2w(1,8)])]);
    disp(['       sig2_z     ' num2str([postmom_sig2z(1,2) postmom_sig2z(1,3) postmom_sig2z(1,4) postmom_sig2z(1,5) postmom_sig2z(1,6) postmom_sig2z(1,7) postmom_sig2z(1,8)])]);
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "UCM.mat"')
    end
    MHm = [phim sig2_em sig2_wm sig2_zm];
    npara = cols(MHm); % 파라메터의 수
    m1 = round(sqrt(npara));
    m2 = ceil(sqrt(npara));
    
    for i = 1:npara
        subplot(m1, m2, i);
        para = MHm(:, i);
        minp = minc(para); % 최소
        maxp = maxc(para); % 최대
        intvl = (maxp - minp)/50;
        interval = minp:intvl:maxp;
        [density,xi]=ksdensity(para);
        hold on
        histogram(para, interval,'Normalization','pdf');
        plot(xi,density);
        hold off
        if i <= p
            xlabel(['phi ' num2str(i)])
        elseif i == p+1
            xlabel('\sigma^2_e')
        elseif i == p+2
            xlabel('\sigma^2_w')
        elseif i == p+3
            xlabel('\sigma^2_z')
        end
    end
    T = rows(data);
    xa = 1:T;
    ql = [0.025;0.5;0.975];
    
    figure
    
    subplot(3, 1, 1)
    plot(data)
    title('Data')
    xlim([0 T+1])
    xlabel('Time')
    
    subplot(3, 1, 2)
    confi_Vfm = quantile(yp,ql)';
    plot(xa, confi_Vfm(:, 1), 'k--', xa, confi_Vfm(:, 2), 'b-',xa, confi_Vfm(:, 3), 'k--');
    title('y_p(95% Confidence Interval)')
    xlim([0 T+1])
    xlabel('Time')
    
    subplot(3, 1, 3)
    confi_Vfm = quantile(yc,ql)';
    plot(xa, confi_Vfm(:, 1), 'k--', xa, confi_Vfm(:, 2), 'b-',xa, confi_Vfm(:, 3), 'k--');
    title('y_c(95% Confidence Interval)')
    xlim([0 T+1])
    xlabel('Time')
    

end

if Model == 2
    
    clc
    exist = dir('CFM.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"CFM.mat" is founded"')
        disp('Do you want to use the model in "CFM.mat" ?')
        disp(' ')
        load_hyper = input('type Y or N : ','s');
        if load_hyper == 'Y'
            load_hyper = 1;
        elseif load_hyper == 'N'
            load_hyper = 0;
        end
    elseif test == 1
        load_hyper = 0;
    end
    
    if load_hyper == 0
        disp('===============================================')
        disp('Model: Dynamic Common Factor Model')
        disp('===============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_(t) = H*beta(t) + e(t); N by 1 vector')
        disp('e(t) ~ Normal(0,diag(sig2_1, ..., sig2_i, ..., sig2_N))')
        disp('beta(t)|beta(t-1),theta ~ Normal(mu + G*beta(t-1),sig2_v)')
        disp(' ')
        disp('H(1) = 1')
        disp('H(2:end) ~ Normal(h0, diag(H0))')
        disp('(h0: N-1 by 1, H0: N-1 by 1)')
        disp(' ')
        disp('[mu;G] ~ Normal(g0,G0)')
        disp('(g0: 2 by 1, G0: 2 by 2)')
        disp(' ')
        disp('scale*sig2_i ~ InverseGamma(a0(i) / 2, d0(i) / 2)')
        disp('(a0: 1 by 1, d0: 1 by 1)')
        disp(' ')
        disp('scale*sig2_v ~ InverseGamma(av / 2, dv / 2)')
        disp('(av: 1 by 1, dv: 1 by 1)')
        disp(' ')
        disp('What is the scale?')
        scale = input('scalar: ');
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        N = cols(data);
        h0 = input(['h0: ' num2str(N) ' by 1 = ']);
%         h0 = [0; h0];
        H0 = input(['H0: ' num2str(N) ' by 1 = ']);
%         H0 = [0; H0];
        disp(' ')
        g0 = input('g0: 2 by 1 = ');
        G0 = input('G0: 2 by 2 = ');
        disp(' ')
        a0 = input(['a0: ' num2str(N) ' by 1 = ']);
        d0 = input(['d0: ' num2str(N) ' by 1 = ']);
%         disp(' ')
%         av = input('av: scalar = ');
%         dv = input('dv: scalar = ');
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        disp('Do you want to save your model into "CFM.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('CFM.mat','scale','h0','H0','g0','G0','a0','d0','n')%,'av','dv')
            disp(' ')
            disp('Model is stored in file named  "CFM.mat"')
        end
    elseif load_hyper == 1
        Prior = load('CFM.mat');
        scale = Prior.scale;
        h0 = Prior.h0;
        H0 = Prior.H0;
        g0 = Prior.g0;
        G0 = Prior.G0;
        a0 = Prior.a0;
        d0 = Prior.d0;
        n = Prior.n;
%         av = Prior.av;
%         dv = Prior.dv;
        save_mat = 'N';
    end

    Output = Common_Factor_Model_mex(data,h0,H0,g0,G0,a0,d0,scale,n(1,1),n(1,2));
            
    Hm = Output.Hm;
    betam = Output.betam;
    sig2m = Output.sig2m;
    Gm = Output.Gm;
    mum = Output.mum;
    sig2vm = Output.sig2vm;

    alpha = 0.025;
    maxac = 200;
    postmom_H = MHout0(Hm,alpha,maxac);
    postmom_sig2 = MHout0(sig2m,alpha,maxac);
    postmom_G = MHout0(Gm,alpha,maxac);
    postmom_mu = MHout0(mum,alpha,maxac);
    postmom_sig2v = MHout0(sig2vm,alpha,maxac);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Dynamic Common Factor Model')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter: ')
    disp(' ')
    disp('[h0; H0]= ')
    disp([h0'; H0'])
    disp('[a0; d0]= ')
    disp([a0'; d0']);
    disp('[g0, G0]= ')
    disp([g0 G0]);
    disp(['[scale]= ' num2str(scale)])
%     disp('[av, dv, scale]= ')
%     disp([av dv scale]);
    disp('-----------------------------------------------------------------------------------------------------------');
    max_ineff = max([postmom_H(:,7);postmom_sig2(:,7);postmom_G(:,7);postmom_mu(:,7);postmom_sig2v(:,7)]);
    min_p = min([postmom_H(:,8);postmom_sig2(:,8);postmom_G(:,8);postmom_mu(:,8);postmom_sig2v(:,8)]);
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column    Estimates     S.E.        2.5%         50%        97.5%      Ineff    Geweke-p');
    disp('===========================================================================================================');
    disp('[Factor Loading]')
    N = cols(data);
    for i = 1:N
        disp(['        H(' num2str(i) ')     ' num2str([postmom_H(i,2) postmom_H(i,3) postmom_H(i,4) postmom_H(i,5) postmom_H(i,6) postmom_H(i,7) postmom_H(i,8)])]);
    end
    disp('[sig2 in the measurement equations]')
    for i = 1:N
        disp(['     sig2(' num2str(i) ')     ' num2str([postmom_sig2(i,2) postmom_sig2(i,3) postmom_sig2(i,4) postmom_sig2(i,5) postmom_sig2(i,6) postmom_sig2(i,7) postmom_sig2(i,8)])]);
    end
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('[Transition equation]')
    disp(['          mu      ' num2str([postmom_mu(1,2) postmom_mu(1,3) postmom_mu(1,4) postmom_mu(1,5) postmom_mu(1,6) postmom_mu(1,7) postmom_mu(1,8)])]);
    disp(['           G      ' num2str([postmom_G(1,2) postmom_G(1,3) postmom_G(1,4) postmom_G(1,5) postmom_G(1,6) postmom_G(1,7) postmom_G(1,8)])]);
    disp(['       sig2v      ' num2str([postmom_sig2v(1,2) postmom_sig2v(1,3) postmom_sig2v(1,4) postmom_sig2v(1,5) postmom_sig2v(1,6) postmom_sig2v(1,7) postmom_sig2v(1,8)])]);
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "CFM.mat"')
    end
    MHm = [mum Gm sig2vm];
    npara = cols(MHm(:,1:2)); % 파라메터의 수
    
    for i = 1:npara
        subplot(1, npara, i);
        para = MHm(:, i);
        minp = minc(para); % 최소
        maxp = maxc(para); % 최대
        intvl = (maxp - minp)/50;
        interval = minp:intvl:maxp;
        [density,xi]=ksdensity(para);
        hold on
        histogram(para, interval,'Normalization','pdf');
        plot(xi,density);
        hold off
        if i == 1
            xlabel('\mu')
        elseif i == 2
            xlabel('G')
        elseif i == 3
            xlabel('\sigma^2_v')
        end
    end
    
    T = rows(data);
    xa = 1:T;
    ql = [0.025;0.5;0.975];
    
    figure
    
    subplot(2, 1, 1)
    plot(data)
    title('Data')
    xlim([0 T+1])
    xlabel('Time')
    
    subplot(2, 1, 2)
    confi_Vfm = quantile(betam,ql)';
    plot(xa, confi_Vfm(:, 1), 'k--', xa, confi_Vfm(:, 2), 'b-',xa, confi_Vfm(:, 3), 'k--');
    title('Common Factor(95% Confidence Interval)')
    xlim([0 T+1])
    xlabel('Time')

end

if Model == 3
    clc
    exist = dir('TVP.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"TVP.mat" is founded"')
        disp('Do you want to use the model in "TVP.mat" ?')
        disp(' ')
        load_hyper = input('type Y or N : ','s');
        if load_hyper == 'Y'
            load_hyper = 1;
        elseif load_hyper == 'N'
            load_hyper = 0;
        end
    elseif test == 1
        load_hyper = 0;
    end
    
    if load_hyper == 0
        
        disp('=============================================')
        disp('Model: Time-varying Parameter')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_t = x_t*beta + x1_t*beta_t + e_t')
        disp('(e_t ~ N(O,Sigma))')
        disp(' ')
        disp('beta_(t) = beta_(t-1) + u_t')
        disp('(u_t ~ N(0,Omega))')
        disp(' ')
        disp('beta ~ Normal(b0, B0)')
        disp('(b0: k by 1, B0: k by k)')
        disp(' ')
        disp('d*Sigma ~ InverseGamma(a0, d0)')
        disp('(a0: scalar, d0: scalar)')
        disp('inv(d*Omega) ~ Wishart(v0, R0)')
        disp('(v0: scalar, R0: k1 by k1)')
        disp(' ')
        disp('k: The number of regressors that have non-time-varying coefficients')
        disp('k1: The number of regressors that have time-varying coefficients')
        disp(' ')
        disp('What column in the data matrix is the dependent variable?')
        disp(' ')
        yind = input(' ');
        disp(' ')
        disp('What column in the data matrix has time-varying coef?')
        x1ind = input('column vector: ');
        k_data = cols(data);
        tool1 = ones(k_data,1);
        tool1([yind;x1ind]) = 0;
        xind = find(tool1);
        Y = data(:,yind'); %#ok<*FNDSB>
        X = data(:,xind');
        X1 = data(:,x1ind');
        k_x = cols(X);
        k_x1 = cols(X1);
        disp(' ')
        disp('Do you want to restrict some non-varying coef into stationary region?')
        restriction = input('type Y or N : ','s');
        disp(' ')
        if restriction == 'Y'
            disp('What column in the data matrix has that restiction?')
            disp(' ')
            res_x = input('column vector : ');
        else
            res_x = 1;
        end
        
        disp(' ')
        disp('What is d?')
        disp(' ')
        d = input('scalar: ');
        disp(' ')
        
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        
        b0 = input(['b0: ' num2str(k_x) ' by 1 = ']);
        B0 = input(['B0: ' num2str(k_x) ' by ' num2str(k_x) ' = ']);
        disp(' ')
        a0 = input('a0: scalar = ');
        d0 = input('d0: scalar = ');
        disp(' ')
        v0 = input('v0: scalar = ');
        R0 = input(['R0: ' num2str(k_x1) ' by ' num2str(k_x1) ' = ']);
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        disp('Do you want to forecast?')
        disp(' ')
        forecast = input('type Y or N : ','s');
        disp(' ')
        if forecast == 'Y'
            disp('What are the regressor values to be used in the forecast?')
            disp('Enter regressor values in the same column as the data.')
            disp('You can enter any value for the dependent variable position.')
            disp(' ')
            x_f = input(['row vector : 1 by ' num2str(k_data) ' = ']);
        else
            x_f = [ ];
        end
                        
        disp(' ')
        disp('Would you like to calculate Marginal Likelihood(Laplace Method)')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "TVP.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('TVP.mat','x_f','d','yind','x1ind','n','forecast','res_x','restriction','b0','B0','a0','d0','v0','R0','ML')
            disp(' ')
            disp('Model is stored in file named  "TVP.mat"')
        end
        
    elseif load_hyper == 1
        Prior = load('TVP.mat');
        yind = Prior.yind;
        x1ind = Prior.x1ind;
        res_x = Prior.res_x;
        restriction = Prior.restriction;
        x_f = Prior.x_f;
        d = Prior.d;
        k_data = cols(data);
        tool1 = ones(k_data,1);
        tool1([yind;x1ind]) = 0;
        xind = find(tool1);
        Y = data(:,yind'); %#ok<*FNDSB>
        X = data(:,xind');
        X1 = data(:,x1ind');
%         k_x = cols(X);
        k_x1 = cols(X1);
        
        b0 = Prior.b0;
        B0 = Prior.B0;
        v0 = Prior.v0;
        R0 = Prior.R0;
        a0 = Prior.a0;
        d0 = Prior.d0;
        n = Prior.n;
        forecast = Prior.forecast;
        ML = Prior.ML;
        save_mat = 'N';
    end
    
    if forecast == 'Y'
        x_f = x_f';
        x0_f = x_f(xind);
        x1_f = x_f(x1ind);
    else
        x0_f = 0;
        x1_f = 0;
    end

    if restriction == 'Y'
        for i = 1:rows(res_x)
            input_res(i,1) = find(xind==res_x(i,1)); %#ok<AGROW>
        end
    else
        input_res = 1;
    end

    if forecast == 'Y'
        Output = Time_Varying_Parameter_mex(Y,X,X1,b0,B0,v0,R0,a0,d0,n(1,1),n(1,2),forecast,x0_f,x1_f,ML,restriction,input_res,d);
    elseif forecast == 'N'
        Output = Time_Varying_Parameter_mex(Y,X,X1,b0,B0,v0,R0,a0,d0,n(1,1),n(1,2),forecast,1,1,ML,restriction,input_res,d);
    end
    
    Yfm = Output.Yfm;
    betam = Output.betam;
    Omegam = Output.Omegam;
    Sigmam = Output.Sigmam;
    lnML = Output.lnML;
    beta1m = Output.beta1m;
    
    alpha = 0.025;
    maxac = 200;
    
    postmom_beta = MHout0(betam,alpha,maxac);
    postmom_Sigma = MHout0(Sigmam,alpha,maxac);
    postmom_Omega = MHout0(Omegam,alpha,maxac);
    postmom = MHout0([betam Sigmam Omegam], alpha, maxac);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Time_Varying_Parameter')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['The dependent variable is the ' num2str(yind) 'th column of data.'])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter:')
    disp(' ')
    disp('[b0, B0]= ')
    disp([b0 B0]);
    disp('[a0, d0, v0, d]= ')
    disp([a0, d0, v0 d]);
    disp('[R0]= ')
    disp(R0);
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
        % if isForecast == 1
        %     disp(['Log Posterior predictive density is  ', num2str(log(predlik))]);
        % end
    end
    max_ineff = max(postmom(:,7));
    min_p = min(postmom(:,8));
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff    Geweke-p 값');
    disp('===========================================================================================================');
    for i = 1:rows(xind)
        disp(['       beta ' num2str([xind(i,1) postmom_beta(i,2) postmom_beta(i,3) postmom_beta(i,4) postmom_beta(i,5) postmom_beta(i,6) postmom_beta(i,7) postmom_beta(i,8)])]);
    end
    disp(['       Sigma       ' num2str([postmom_Sigma(1,2) postmom_Sigma(1,3) postmom_Sigma(1,4) postmom_Sigma(1,5) postmom_Sigma(1,6) postmom_Sigma(1,7) postmom_Sigma(1,8)])]);
    disp('-----------------------------------------------------------------------------------------------------------');
    ind_Omega = 1:(k_x1^2);
    ind_Omega = ind_Omega';
    [r, c] = minresid(ind_Omega,k_x1);
    r = [0; r(1:end - 1)] + 1;
    c(c == 0) = k_x1;
    ind_Omega =[c r];
    disp('The element of Omega : ')
    for i = 1:(k_x1^2)
        disp(['   Omega ' num2str(ind_Omega(i,:)) '      ' num2str([postmom_Omega(i,2) postmom_Omega(i,3) postmom_Omega(i,4) postmom_Omega(i,5) postmom_Omega(i,6) postmom_Omega(i,7) postmom_Omega(i,8)])]);
    end
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "TVP.mat"')
    end
    MHm_plot = [betam Sigmam];
    npara = cols(MHm_plot);
    m1 = round(sqrt(npara));
    m2 = ceil(sqrt(npara));
    for i = 1:npara
        subplot(m1, m2, i);
        para = MHm_plot(:, i);
        minp = minc(para);
        maxp = maxc(para);
        intvl = (maxp - minp)/50;
        interval = minp:intvl:maxp;
        [density,xi]=ksdensity(para);
        hold on
        histogram(para, interval, 'Normalization','pdf');
        plot(xi,density);
        hold off
        if i < npara
            xlabel([num2str(xind(i,1)) 'th column coef'])
        elseif i == npara
            xlabel('Sigma')
        end
    end
    
    if forecast == 'Y'
        min_yfm = min(Yfm);
        max_yfm = max(Yfm);
        interval = (max_yfm - min_yfm)/50;
        x_axis = min_yfm:interval:max_yfm;
        figure
        [density,xi]=ksdensity(Yfm);
        hold on
        histogram(Yfm,x_axis,'Normalization','pdf');
        plot(xi,density);
        hold off
        xlabel('One-step Forecast')
    end
    
    T = rows(Y);
    xa = 1:T;
    ql = [0.025;0.5;0.975];
    
    for i = 1:rows(x1ind)
        confi_coef = quantile(beta1m(:,:,i),ql)';
        figure
        plot(xa, confi_coef(:, 1), 'k--', xa, confi_coef(:, 2), 'b-',xa, confi_coef(:, 3), 'k--');
        title([num2str(x1ind(i,1)) 'th time-varying coef'])
        xlim([0 T+1])
        xlabel('Time')
    end
    
end   

if Model == 4
    clc
    exist = dir('AXK.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"AXK.mat" is founded"')
        disp('Do you want to use the model in "AXK.mat" ?')
        disp(' ')
        load_hyper = input('type Y or N : ','s');
        if load_hyper == 'Y'
            load_hyper = 1;
        elseif load_hyper == 'N'
            load_hyper = 0;
        end
    elseif test == 1
        load_hyper = 0;
    end
    
    if load_hyper == 0
        disp('===============================================')
        disp('Model: ARMA-X(Kalman filter)')
        disp('===============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_t = x_t*beta + e_t')
        disp('e_t ~ ARMA(p,q), v_t | sigma2 ~ Normal(0,sigma2)')
        disp('AR coef = phi(i), MA coef = theta(i)')
        disp('When data_t = y_t, y_t ~ ARMA(p,q)')
        disp(' ')
        disp('beta ~ Normal(b0, B0)')
        disp('(b0: k by 1, B0: k by k)')
        disp(' ')
        disp('phi ~ Normal(phi0, PHI0)')
        disp('(phi0: p by 1, PHI0: p by p)')
        disp(' ')
        disp('theta ~ Normal(theta0, THETA0)')
        disp('(theta0: q by 1, THETA0: q by q)')
        disp(' ')
        disp('d*sigma2 ~ InverseGamma(a0 / 2, d0 / 2)')
        disp('(a0: 1 by 1, d0: 1 by 1)')
        disp(' ')
        disp('k: Number of Regressor')
        k = cols(data);
        if k == 1
%             x = 1;
            yind = 1;
            xind = 2;
            k_reg = 3;
        else
            disp(' ')
            disp('What column in the data matrix is the dependent variable?')
            disp(' ')
            x = input(' ');
            disp(' ')
            y = 1:k;
            z = y==x;
            yind = find(z);
            xind = find(z==0);
            k_reg = cols(xind);
        end
        disp(' ')
        disp('What is d?')
        d = input('scalar: ');
        disp(' ')
%         model = cols(data);
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
%         T = rows(data);
        if k == 1
            b0 = 0;
            B0 = eye(1);
        else 
            b0 = input(['b0: ' num2str(k_reg) ' by 1 = ']);
            B0 = input(['B0: ' num2str(k_reg) ' by ' num2str(k_reg) ' = ']);
        end    
        disp(' ')
        disp('p: The lag length of AR.')
        disp('q: The lag length of MA.')
        disp(' ')
        phi0 = input('phi0: p by 1 = ');
        PHI0 = input('PHI0: p by p = ');
        disp(' ')
        theta0 = input('theta0: q by 1 = ');
        THETA0 = input('THETA0: q by q = ');
        disp(' ')
        a0 = input('a0: scalar = ');
        d0 = input('d0: scalar = ');
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        disp('Do you want to forecast?')
        disp(' ')
        forecast = input('type Y or N : ','s');
        disp(' ')
        if forecast == 'Y'
            if k == 1
                x_f = 0;
            else
                disp('What are the regressor values to be used in the forecast?')
                disp(' ')
                x_f = input(['column vector : ' num2str(k_reg) ' by 1 = ']);
            end
        else
            x_f = [ ];
        end
        disp(' ')
        disp('Would you like to calculate Marginal Likelihood(Laplace Method)')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "AXK.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('AXK.mat','d','xind','yind','b0','B0','phi0','PHI0','theta0','THETA0','a0','d0','n','forecast','x_f','ML')
            disp(' ')
            disp('Model is stored in file named  "AXK.mat"')
        end
    elseif load_hyper == 1
        Prior = load('AXK.mat');
        xind = Prior.xind;
        yind = Prior.yind;
        b0 = Prior.b0;
        B0 = Prior.B0;
        a0 = Prior.a0;
        d0 = Prior.d0;
        phi0 = Prior.phi0;
        PHI0 = Prior.PHI0;
        theta0 = Prior.theta0;
        THETA0 = Prior.THETA0;
        n = Prior.n;
        d = Prior.d;
        forecast = Prior.forecast;
        x_f = Prior.x_f;
        ML = Prior.ML;
        save_mat = 'N';
    end
    if forecast == 'Y'
        Output = ARMA_X_mex(data,xind,yind,b0,B0,a0,d0,phi0,PHI0,theta0,THETA0,n(1,1),n(1,2),forecast,x_f,ML,d);
    elseif forecast == 'N'
        Output = ARMA_X_mex(data,xind,yind,b0,B0,a0,d0,phi0,PHI0,theta0,THETA0,n(1,1),n(1,2),forecast,1,ML,d);
    end
    
    T = rows(data);
    p = rows(phi0);
    q = rows(theta0);
        
    Yfm = Output.Yfm;
    Vm = Output.Vm;
    bm = Output.betam;
    phim = Output.phim;
    thetam = Output.thetam;
    sig2m = Output.sig2m;
    lnML = Output.lnML;
    phi_consm = Output.phi_0;
    
    alpha = 0.025;
    maxac = 200;
    postmom_b = MHout0(bm,alpha,maxac);
    postmom_phi_cons = MHout0(phi_consm,alpha,maxac);
    postmom_phi = MHout0(phim,alpha,maxac);
    postmom_theta = MHout0(thetam,alpha,maxac);
    postmom_sig2 = MHout0(sig2m,alpha,maxac);
%     k = cols(xind);

    
    clc
    disp('===========================================================================================================');
    disp('Model: ARMA-X(Kalman filter)')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['The dependent variable is the ' num2str(yind) 'th column of data.'])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter: ')
    disp(' ')
    disp('[b0, B0]= ')
    disp([b0 B0]);
    disp('[phi0, PHI0]= ')
    disp([phi0 PHI0]);
    disp('[theta0, THETA0]= ')
    disp([theta0 THETA0]);
    disp('[a0, d0, d]= ')
    disp([a0 d0 d]);
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
    end
    max_ineff = max([postmom_b(:,7);postmom_phi_cons(:,7);postmom_phi(:,7);postmom_theta(:,7);postmom_sig2(:,7)]);
    min_p = min([postmom_b(:,8);postmom_phi_cons(:,8);postmom_phi(:,8);postmom_theta(:,8);postmom_sig2(:,8)]);
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff    Geweke-p 값');
    disp('===========================================================================================================');
    model = cols(data);
    if model > 1
        disp('Estimates of beta: ')
        for i = 1:cols(xind)
            disp(['            ' num2str([xind(1,i) postmom_b(i,2) postmom_b(i,3) postmom_b(i,4) postmom_b(i,5) postmom_b(i,6) postmom_b(i,7) postmom_b(i,8)])]);
        end
    end
    disp('Estimates of phi: ')
    if model == 1
        disp(['            0     ' num2str([postmom_phi_cons(1,2) postmom_phi_cons(1,3) postmom_phi_cons(1,4) postmom_phi_cons(1,5) postmom_phi_cons(1,6) postmom_phi_cons(1,7) postmom_phi_cons(1,8)])]);
    end
    for i = 1:p
        disp(['            ' num2str([i postmom_phi(i,2) postmom_phi(i,3) postmom_phi(i,4) postmom_phi(i,5) postmom_phi(i,6) postmom_phi(i,7) postmom_phi(i,8)])]);
    end
    disp('Estimates of theta: ')
    for i = 1:q
        disp(['            ' num2str([i postmom_theta(i,2) postmom_theta(i,3) postmom_theta(i,4) postmom_theta(i,5) postmom_theta(i,6) postmom_theta(i,7) postmom_theta(i,8)])]);
    end
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['       sigma2      ' num2str([postmom_sig2(1,2) postmom_sig2(1,3) postmom_sig2(1,4) postmom_sig2(1,5) postmom_sig2(1,6) postmom_sig2(1,7) postmom_sig2(1,8)])]);
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "AXK.mat"')
    end
    if model == 1
        MHm = [phi_consm phim thetam sig2m]; 
    else
        MHm = [bm phim thetam sig2m];
    end
    npara = cols(MHm); % 파라메터의 수
    m1 = round(sqrt(npara));
    m2 = ceil(sqrt(npara));
    
    for i = 1:npara
        subplot(m1, m2, i);
        para = MHm(:, i);
        minp = minc(para); % 최소
        maxp = maxc(para); % 최대
        intvl = (maxp - minp)/50;
        interval = minp:intvl:maxp;
        [density,xi]=ksdensity(para);
        hold on
        histogram(para, interval,'Normalization','pdf');
        plot(xi,density);
        hold off
        if model == 1
            if i == 1
                xlabel('constant AR coef')
            elseif i <= p + 1
                xlabel([num2str(i - 1) 'th AR coef'])
            elseif i <= p + q + 1
                xlabel([num2str(i - 1 - p) 'th MA coef'])
            elseif i == npara
                xlabel('\sigma^2')
            end
        else
            k = cols(xind);
            if i <= k
                xlabel([num2str(xind(i)) 'th column coef'])
            elseif i <= k+p
                xlabel([num2str(i - k) 'th AR coef'])
            elseif i <= k+p+q
                xlabel([num2str(i - k - p) 'th MA coef'])
            elseif i == npara
                xlabel('\sigma^2')
            end    
        end
    end
    
    xa = 1:T;
    ql = [0.025;0.5;0.975];
    
%     cols_Vm = cols(Vm);
%     ylim_Vm = Vm(:,0.25*cols_Vm:end);
%     vec_ylim_Vm = vec(ylim_Vm);
%     confi_ylim = 2*quantile(vec_ylim_Vm,[0.025;0.975]);
    
    confi_Vfm = quantile(Vm,ql)';
    figure
    plot(xa, confi_Vfm(:, 1), 'k--', xa, confi_Vfm(:, 2), 'b-',xa, confi_Vfm(:, 3), 'k--');
    title('Hidden white noise(95% Confidence Interval)')
    xlim([0 T+1])
%     ylim(confi_ylim')
    xlabel('Time')
    
    if forecast == 'Y'
        min_Yfm = min(Yfm);
        max_Yfm = max(Yfm);
        interval = (max_Yfm - min_Yfm)/50;
        x_axis = min_Yfm:interval:max_Yfm;
        figure
        [density,xi]=ksdensity(Yfm);
        hold on
        histogram(Yfm,x_axis,'Normalization','pdf');
        plot(xi,density);
        hold off
        xlabel('One-step Forecast')
    end
end

if Model == 5
    clc
    exist = dir('SV.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"SV.mat" is founded"')
        disp('Do you want to use the model in "SV.mat" ?')
        disp(' ')
        load_hyper = input('type Y or N : ','s');
        if load_hyper == 'Y'
            load_hyper = 1;
        elseif load_hyper == 'N'
            load_hyper = 0;
        end
    elseif test == 1
        load_hyper = 0;
    end
    
    if load_hyper == 0
        
        disp('=============================================')
        disp('Model: Stochastic Volatility')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_t = x_t*beta + exp(h_(t)/2)*e_t')
        disp('(e_t ~ N(O,1))')
        disp(' ')
        disp('h_(t) = mu + phi(1)*h_(t-1) + ... + phi(p)*h_(t-p) + u_t')
        disp('(u_t ~ N(0,sig2))')
        disp(' ')
        disp('beta ~ Normal(b0, B0)')
        disp('(b0: k by 1, B0: k by k)')
        disp(' ')
        disp('gamma ~ Normal(gamma0, Gamma0)')
        disp('gamma = [mu; phi(1); ... ; phi(p)]')
        disp(' ')
        disp('d*sig2 ~ InverseGamma(v0, d0)')
        disp('(v0: scalar, d0: scalar)')
        disp(' ')
        disp('k: Number of regressor')
        disp(' ')
        disp('What column in the data matrix is the dependent variable?')
        disp(' ')
        x = input(' ');
        
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind); %#ok<*FNDSB>
        X = data(:,xind);
        k_reg = cols(X);
        disp(' ')
        disp('What is d?')
        disp(' ')
        d = input('scalar: ');
        disp(' ')
        
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        
        b0 = input(['b0: ' num2str(k_reg) ' by 1 = ']);
        B0 = input(['B0: ' num2str(k_reg) ' by ' num2str(k_reg) ' = ']);
        disp(' ')
        disp('p: The maximum lag length of h_(t) that the researcher thinks.')
        disp(' ')
        gamma0 = input('gamma0: p+1 by 1 = ');
        Gamma0 = input('Gamma0: p+1 by p+1 = ');
        disp(' ')
        v0 = input('v0: scalar = ');
        d0 = input('d0: scalar = ');
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        disp('Do you want to forecast?')
        disp(' ')
        forecast = input('type Y or N : ','s');
        disp(' ')
        if forecast == 'Y'
            disp('What are the regressor values to be used in the forecast?')
            disp(' ')
            x_f = input(['column vector : ' num2str(k_reg) ' by 1 = ']);
        else
            x_f = [ ];
        end
        
        disp(' ')
        disp('Would you like to calculate Marginal Likelihood(Laplace Method)')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "SV.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('SV.mat','d','x_f','x','n','forecast','b0','B0','v0','d0','gamma0','Gamma0','ML')
            disp(' ')
            disp('Model is stored in file named  "SV.mat"')
        end
    elseif load_hyper == 1
        Prior = load('SV.mat');
        x_f = Prior.x_f;
        x = Prior.x;
        d = Prior.d;
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind); %#ok<*FNDSB>
        X = data(:,xind);
        
        b0 = Prior.b0;
        B0 = Prior.B0;
        v0 = Prior.v0;
        d0 = Prior.d0;
        n = Prior.n;
        forecast = Prior.forecast;
        gamma0 = Prior.gamma0;
        Gamma0 = Prior.Gamma0;
        ML = Prior.ML;
        save_mat = 'N';
    end
    if forecast == 'Y'
        Output = Stochastic_Volatility_mex(Y, X, n(1,1), n(1,2), b0, B0, gamma0, Gamma0, v0, d0,forecast,x_f,ML,d);
    elseif forecast == 'N'
        Output = Stochastic_Volatility_mex(Y, X, n(1,1), n(1,2), b0, B0, gamma0, Gamma0, v0, d0,forecast,1,ML,d);
    end
    
    Yfm = Output.Yfm;
    Hm = Output.Hm; %#ok<NASGU>
    betam = Output.betam;
    mu_phim = Output.gammam;
    Sig2m = Output.Sig2m;
    lnML = Output.lnML;
    Volm = Output.Volm;
    
    alpha = 0.025;
    maxac = 200;
    MHm = [betam mu_phim Sig2m];
    postmom = MHout0(MHm,alpha,maxac);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Stochastic_Volatility')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['The dependent variable is the ' num2str(yind) 'th column of data.'])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter:')
    disp(' ')
    disp('[b0, B0]= ')
    disp([b0 B0]);
    disp('[gamma0, Gamma0]= ')
    disp([gamma0, Gamma0]);
    disp('[v0, d0, d]= ')
    disp([v0 d0 d]);
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
        % if isForecast == 1
        %     disp(['Log Posterior predictive density is  ', num2str(log(predlik))]);
        % end
    end
    max_ineff = max(postmom(:,7));
    min_p = min(postmom(:,8));
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff    Geweke-p 값');
    disp('===========================================================================================================');
    for i = 1:cols(xind)
        disp(['       beta ' num2str([xind(1,i) postmom(i,2) postmom(i,3) postmom(i,4) postmom(i,5) postmom(i,6) postmom(i,7) postmom(i,8)])]);
    end
    disp(' ')
    disp(['           mu       ' num2str([postmom(cols(xind)+1,2) postmom(cols(xind)+1,3) postmom(cols(xind)+1,4) postmom(cols(xind)+1,5) postmom(cols(xind)+1,6) postmom(cols(xind)+1,7) postmom(cols(xind)+1,8)])]);
    for i = cols(xind)+2 : rows(postmom)-1
        disp(['       phi  ' num2str([(i-cols(xind)-1) postmom(i,2) postmom(i,3) postmom(i,4) postmom(i,5) postmom(i,6) postmom(i,7) postmom(i,8)])]);
    end
    disp(' ')
    disp(['       sigma2      ' num2str([postmom(end,2) postmom(end,3) postmom(end,4) postmom(end,5) postmom(end,6) postmom(end,7) postmom(end,8)])]);
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "SV.mat"')
    end
    
    T = rows(Y);
    xa = 1:T;
    ql = [0.025;0.5;0.975];
    confi_Vfm = quantile(Volm,ql)';
    if forecast == 'Y'
        subplot(3,1,1)
        plot(xa, confi_Vfm(:, 1), 'k--', xa, confi_Vfm(:, 2), 'b-',xa, confi_Vfm(:, 3), 'k--');
        title('(a) Volatility (95% Credibility Intervals)')
        xlim([0 T+1])
        xlabel('Time')
        
        subplot(3,1,2)
        plot(xa, abs(Y), 'k-');
        title('(b) |y|')
        xlim([0 T+1])
        xlabel('Time')
        
        subplot(3,1,3)
        true_miny = minc(Yfm);
        true_maxy = maxc(Yfm);
        ind = (quantile(Yfm,0.05)< Yfm).*(Yfm < quantile(Yfm,0.95));
        Yfm_pseudo = Yfm(ind==1);
        miny = quantile(Yfm,0.05);
        maxy = quantile(Yfm,0.95);
        int = (maxy - miny)/50;
        interval = miny:int:maxy;
        [density,xi]=ksdensity(Yfm_pseudo);
        hold on
        histogram(Yfm, interval,'Normalization','pdf')
        plot(xi,density);
        hold off
        title('(c) Predictive Dist.')
        xlabel(['min: ' num2str(true_miny) ', max: ' num2str(true_maxy)])
    else
        subplot(2,1,1)
        plot(xa, confi_Vfm(:, 1), 'k--', xa, confi_Vfm(:, 2), 'b-',xa, confi_Vfm(:, 3), 'k--');
        title('(a) Volatility (95% Credibility Intervals)')
        xlim([0 T+1])
        xlabel('Time')
        
        subplot(2,1,2)
        plot(xa, abs(Y), 'k-');
        title('(b) |y|')
        xlim([0 T+1])
        xlabel('Time')
    end

end


end
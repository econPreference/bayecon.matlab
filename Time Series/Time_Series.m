function Output = Time_Series(data)
clc
format shortG
disp(' ')
disp('/////////////////////////////////////////////')
disp('////////Bayesian Econometrics ToolBox////////')
disp('/////////////////////////////////////////////')
disp(' ')
disp('Model: Time Series')
disp('====================Model====================')
disp('1. Bayesian Unit-Root Test')
disp('2. Principal Component Analysis')
disp('3. Linear Regression(Autocorrelation,MCMC)')
disp('4. Unrestricted BVAR Model')
disp('5. Impulse-Response Analysis')
disp('6. Markov Switching Model')
% disp('7. Markov Switching Unrestricted BVAR Model')
% disp('8. Markov Switching Impulse-Response Analysis')
disp('=============================================')
disp('NOTE: In the case of 4 or 5, we automatically assume')
disp('constant or non-constant, repectively.')
disp('So, DONT PUT CONSTANT TERM IN YOUR INPUT in the case of 4 or 5')
disp(' ')
disp('Which model would you like to choose?')
disp(' ')
Model = input(' ');

if Model == 1
    
    clc
    exist = dir('UR.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"UR.mat" is founded"')
        disp('Do you want to use the model in "UR.mat" ?')
        disp(' ')
        load_hyper = input('type Y or N : ','s');
        if load_hyper == 'Y'
            load_hyper = 1;
        elseif load_hyper == 'N'
            disp(' ')
            disp('Do you want to use default setting?')
            disp(' ')
            UR_setting = input('type Y or N : ','s');
            disp(' ')
            if UR_setting == 'N'
                load_hyper = 0;
            else
                load_hyper = 2;
                disp('=================================')
                disp('Choose the case')
                disp('---------------------------------')
                disp('Case 1. without constant')
                disp('Case 2. with constant')
                disp('Case 4. with constant and drift')
                disp('=================================')
                disp(' ')
                setting_case = input('type the case number : ');
            end
        end
    elseif test == 1
        disp('Do you want to use default setting?')
        disp(' ')
        UR_setting = input('type Y or N : ','s');
        disp(' ')
        if UR_setting == 'N'
            load_hyper = 0;
        else
            load_hyper = 2;
            disp('=================================')
            disp('Choose the case')
            disp('---------------------------------')
            disp('Case 1. without constant')
            disp('Case 2. with constant')
            disp('Case 4. with constant and drift')
            disp('=================================')
            disp(' ')
            setting_case = input('type the case number : ');
        end
    end
    
    if load_hyper == 0
        clc
        disp('===============================================')
        disp('Model: Unit root test')
        disp('===============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_t = c0*t^0 +...+ cs*t^s + y_t-1*beta + error_t')
        disp(' ')
        disp('error_t = phi_1*error_t-1 + ... + phi_p*error_t-p + white noise')
        disp('white noise | sigma2 ~ Normal(0,sigma2)')
        disp(' ')
        disp('beta ~ Inverse moment prior(Johnson and Rossell, 2010)')
        disp('(hyperparameter k,v>0 and all scalar)')
        disp(' ')
        disp('c ~ Normal(c0, C0)')
        disp('(c0: s+1 by 1, C0: s+1 by s+1)')
        disp(' ')
        disp('phi ~ Normal(phi0, PHI0)')
        disp('(phi0: p by 1, PHI0: p by p)')
        disp(' ')
        disp('sigma2 ~ InverseGamma(a0/2, d0/2)')
        disp('(a0: 1 by 1, d0: 1 by 1)')
        disp(' ')
        
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        disp('* Default values: v = 1 and k = 1 or 2 or higher integer ')
        disp(' ')
        kk = input('k: scalar = ');
        vv = input('v: scalar = ');
        disp(' ')
        disp('Under H1: beta ~= 1, what is the mode of beta prior ?')
        disp(' ')
        mode = input('mode of beta prior: scalar = ');
        disp(' ')
        disp('Proposal of beta is Truncated N[a,b](mode,1). What is a,b ?')
        disp(' ')
        ab = input('[a b] = ');
        a = ab(1,1);
        b = ab(1,2);
        disp(' ')
        disp('I will calculate marginal likelihood based on Sims, Waggoner and Zha(2008)')
        disp('What is the q? (1-q) quantile of draws with low posterior will be discarded.')
        disp(' ')
        q = input('q: scalar = ');
        disp(' ')
        disp('Set the deterministic trend by select length of c0')
        disp(' ')
        c0 = input('c0: s+1 by 1 = ');
        C0 = input('C0: s+1 by s+1 = ');
        disp(' ')
        a0 = input('a0: scalar = ');
        d0 = input('d0: scalar = ');
        disp(' ')
        disp('p: The maximum lag length of the error term that the researcher thinks.')
        disp(' ')
        disp('Under H0')
        phi0_H0 = input('phi0: p by 1 = ');
        PHI0_H0 = input('PHI0: p by p = ');
        disp(' ')
        disp('Under H1')
        phi0_H1 = input('phi0: p by 1 = ');
        PHI0_H1 = input('PHI0: p by p = ');
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        disp('Do you want to save your model into "UR.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('UR.mat','kk','vv','phi0_H0','PHI0_H0','a0','d0','n',...
                'c0','C0','q','a','b','phi0_H1','PHI0_H1','mode')
            disp(' ')
            disp('Model is stored in file named  "UR.mat"')
        end
        
    elseif load_hyper == 1
        Prior = load('UR.mat');
        kk = Prior.kk;
        vv = Prior.vv;
        a0 = Prior.a0;
        d0 = Prior.d0;
        phi0_H0 = Prior.phi0_H0;
        PHI0_H0 = Prior.PHI0_H0;
        phi0_H1 = Prior.phi0_H1;
        PHI0_H1 = Prior.PHI0_H1;
        n = Prior.n;
        mode = Prior.mode;
        q = Prior.q;
        a = Prior.a;
        b = Prior.b;
        c0 = Prior.c0;
        C0 = Prior.C0;
        save_mat = 'N';
    else
        switch setting_case
            case 1
                Prior = load('UR_Case1.mat');
                kk = Prior.kk;
                vv = Prior.vv;
                a0 = Prior.a0;
                d0 = Prior.d0;
                phi0_H0 = Prior.phi0_H0;
                PHI0_H0 = Prior.PHI0_H0;
                phi0_H1 = Prior.phi0_H1;
                PHI0_H1 = Prior.PHI0_H1;
                n = Prior.n;
                %                 mode = Prior.mode;
                q = Prior.q;
                a = Prior.a;
                b = Prior.b;
                c0 = Prior.c0;
                C0 = Prior.C0;
                save_mat = 'N';
                
                [~,dataT] = Tfilter(data,1);
                YT = X_lag(dataT,0,1);
                XT = X_lag(dataT,1,1);
                mode = (XT'*XT)\(XT'*YT);
                mode = min(mode,0.95);
                
            case 2
                Prior = load('UR_Case2.mat');
                kk = Prior.kk;
                vv = Prior.vv;
                a0 = Prior.a0;
                d0 = Prior.d0;
                phi0_H0 = Prior.phi0_H0;
                PHI0_H0 = Prior.PHI0_H0;
                phi0_H1 = Prior.phi0_H1;
                PHI0_H1 = Prior.PHI0_H1;
                n = Prior.n;
                %                 mode = Prior.mode;
                q = Prior.q;
                a = Prior.a;
                b = Prior.b;
                c0 = Prior.c0;
                C0 = Prior.C0;
                save_mat = 'N';
                
                [~,dataT] = Tfilter(data,1);
                YT = X_lag(dataT,0,1);
                XT = X_lag(dataT,1,1);
                mode = (XT'*XT)\(XT'*YT);
                mode = min(mode,0.95);
                
            case 4
                Prior = load('UR_Case4.mat');
                kk = Prior.kk;
                vv = Prior.vv;
                a0 = Prior.a0;
                d0 = Prior.d0;
                phi0_H0 = Prior.phi0_H0;
                PHI0_H0 = Prior.PHI0_H0;
                phi0_H1 = Prior.phi0_H1;
                PHI0_H1 = Prior.PHI0_H1;
                n = Prior.n;
                %                 mode = Prior.mode;
                q = Prior.q;
                a = Prior.a;
                b = Prior.b;
                c0 = Prior.c0;
                C0 = Prior.C0;
                save_mat = 'N';
                
                [~,dataT] = Tfilter(data,1);
                YT = X_lag(dataT,0,1);
                XT = X_lag(dataT,1,1);
                mode = (XT'*XT)\(XT'*YT);
                mode = min(mode,0.95);
                
        end
    end
    
    [Output,ML_Un,ML_Re] = Unit_Root(data,kk,vv,a0,d0,phi0_H0,PHI0_H0,phi0_H1,PHI0_H1,n(1,1),n(1,2),mode,q,a,b,c0,C0);
    
    bm = Output.betam;
    phim = Output.phim;
    sig2m = Output.sigma2m;
    cm = Output.cm;
    
    MHm_out = [bm phim sig2m];
    
    alpha = 0.025;
    maxac = 200;
    postmom = MHout0(MHm_out,alpha,maxac);
    postmom_c = MHout0(cm,alpha,maxac);
    p = rows(phi0_H1);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Unit-Root test')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter: ')
    disp(' ')
    disp('[k, v, mode, q]= ')
    disp([kk vv mode q]);
    disp('[c0, C0]= ')
    disp([c0 C0]);
    disp('[phi0(H0), PHI0(H0)]= ')
    disp([phi0_H0 PHI0_H0]);
    disp('[phi0(H1), PHI0(H1)]= ')
    disp([phi0_H1 PHI0_H1]);
    disp('[a0, d0]= ')
    disp([a0 d0]);
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('[Log of Marginal Likelihood(Sims, Waggoner and Zha, 2008): ]')
    disp([' 1. H0: beta == 1: ' num2str(double(log(ML_Re)))])
    disp([' 2. H1: beta ~= 1: ' num2str(double(log(ML_Un)))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('[Posterior Probability of Model: ]')
    disp([' 1. y(t) ~ I(1): ' num2str(double(ML_Re/(ML_Re + ML_Un))) ' %'])
    disp([' 2. y(t) ~ I(0): ' num2str(double(ML_Un/(ML_Re + ML_Un))) ' %'])
    max_ineff = max(postmom(:,7));
    min_p = min(postmom(:,7));
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff    Geweke-p 값');
    disp('===========================================================================================================');
    disp('Main equation: ')
    disp(['         beta     ' num2str([postmom(1,2) postmom(1,3) postmom(1,4) postmom(1,5) postmom(1,6) postmom(1,7) postmom(1,8)])]);
    for i = 1:rows(c0)
        disp(['         c(' num2str(i-1) ')     ' num2str([postmom_c(i,2) postmom_c(i,3) postmom_c(i,4) postmom_c(i,5) postmom_c(i,6) postmom_c(i,7) postmom_c(i,8)])]);
    end
    disp('Error transition: ')
    k_reg = 1;
    for i = 1:p
        disp(['       phi(' num2str(i) ')     ' num2str([postmom(k_reg+i,2) postmom(k_reg+i,3) postmom(k_reg+i,4) postmom(k_reg+i,5) postmom(k_reg+i,6) postmom(k_reg+i,7) postmom(k_reg+i,8)])]);
    end
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['       sigma2     ' num2str([postmom(end,2) postmom(end,3) postmom(end,4) postmom(end,5) postmom(end,6) postmom(end,7) postmom(end,8)])]);
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "UR.mat"')
    end
    MHm = [bm cm phim sig2m];
    
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
        if i == 1
            xlabel('beta')
        elseif i <= rows(c0) + 1
            xlabel([num2str(i - 1) 'th trend'])
        elseif i <= p + rows(c0) + 1
            xlabel([num2str(i - 1 - rows(c0)) 'th AR coef'])
        elseif i == npara
            xlabel('\sigma^2')
        end
    end
    
end

if Model == 2
    Output = main_PCA(data);
end

if Model == 3
    clc
    exist = dir('LRA.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"LRA.mat" is founded"')
        disp('Do you want to use the model in "LRA.mat" ?')
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
        disp('Model: Linear Regression(Autocorrelation,MCMC)')
        disp('===============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_t = x_t*beta + error_t')
        disp('error_t = phi_1*error_t-1 + ... + phi_p*error_t-p + white noise')
        disp('white noise | sigma2 ~ Normal(0,sigma2)')
        disp('When data_t = y_t, y_t ~ AR(p)')
        disp(' ')
        disp('beta ~ Normal(b0, B0)')
        disp('(b0: k by 1, B0: k by k)')
        disp(' ')
        disp('phi ~ Normal(phi0, PHI0)')
        disp('(phi0: p by 1, PHI0: p by p)')
        disp(' ')
        disp('sigma2 ~ InverseGamma(a0 / 2, d0 / 2)')
        disp('(a0: 1 by 1, d0: 1 by 1)')
        disp(' ')
        disp('k: Number of Regressor')
        disp(' ')
        k = cols(data);
        if k == 1
            xind = 1;
            yind = 1;
        else
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
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        if k == 1
            disp('Constant term prior ~ N(b0,B0)')
            b0 = input('b0: scalar = ');
            B0 = input('B0: scalar = ');
        else
            b0 = input(['b0: ' num2str(k_reg) ' by 1 = ']);
            B0 = input(['B0: ' num2str(k_reg) ' by ' num2str(k_reg) ' = ']);
        end
        
        disp(' ')
        disp('p: The maximum lag length of the error term that the researcher thinks.')
        disp(' ')
        phi0 = input('phi0: p by 1 = ');
        PHI0 = input('PHI0: p by p = ');
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
        disp('Note: Speed of computation is very slow.')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "LRA.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('LRA.mat','xind','yind','b0','B0','phi0','PHI0','a0','d0','n','forecast','x_f','ML')
            disp(' ')
            disp('Model is stored in file named  "LRA.mat"')
        end
        
    elseif load_hyper == 1
        Prior = load('LRA.mat');
        xind = Prior.xind;
        yind = Prior.yind;
        b0 = Prior.b0;
        B0 = Prior.B0;
        a0 = Prior.a0;
        d0 = Prior.d0;
        phi0 = Prior.phi0;
        PHI0 = Prior.PHI0;
        n = Prior.n;
        forecast = Prior.forecast;
        x_f = Prior.x_f;
        ML = Prior.ML;
        save_mat = 'N';
    end
    if forecast == 'Y'
        Output = Auto_Regression_mex(data,xind,yind,b0,B0,a0,d0,phi0,PHI0,n(1,1),n(1,2),forecast,x_f,ML);
    elseif forecast == 'N'
        Output = Auto_Regression_mex(data,xind,yind,b0,B0,a0,d0,phi0,PHI0,n(1,1),n(1,2),forecast,1,ML);
    end
    if ML == 'Y'
        lnML = Output.lnML;
    end
    yfm = Output.yfm;
    bm = Output.betam;
    phim = Output.phim;
    sig2m = Output.sigma2m;
    
    MHm_out = [bm phim sig2m];
    
    alpha = 0.025;
    maxac = 200;
    postmom = MHout0(MHm_out,alpha,maxac);
    p = rows(phi0);
    %     T = rows(data);
    model = cols(data);
    
    
    clc
    disp('===========================================================================================================');
    disp('Model: Linear Regression(Autocorrelation,MCMC)')
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
    disp('[a0, d0]= ')
    disp([a0 d0]);
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
    end
    max_ineff = max(postmom(:,7));
    min_p = min(postmom(:,7));
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff    Geweke-p 값');
    disp('===========================================================================================================');
    disp('Estimates of beta: ')
    if model == 1
        disp(['         Cons    ' num2str([postmom(1,2) postmom(1,3) postmom(1,4) postmom(1,5) postmom(1,6) postmom(1,7) postmom(1,8)])]);
    else
        for i = 1:cols(xind)
            disp(['            ' num2str([i postmom(i,2) postmom(i,3) postmom(i,4) postmom(i,5) postmom(i,6) postmom(i,7) postmom(i,8)])]);
        end
    end
    disp('Estimates of phi: ')
    k_reg = cols(xind);
    for i = 1:p
        disp(['            ' num2str([i postmom(k_reg+i,2) postmom(k_reg+i,3) postmom(k_reg+i,4) postmom(k_reg+i,5) postmom(k_reg+i,6) postmom(k_reg+i,7) postmom(k_reg+i,8)])]);
    end
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['       sigma2     ' num2str([postmom(end,2) postmom(end,3) postmom(end,4) postmom(end,5) postmom(end,6) postmom(end,7) postmom(end,8)])]);
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "LRA.mat"')
    end
    
    MHm = [bm phim sig2m];
    
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
        k = cols(xind);
        if model == 1
            if i == 1
                xlabel('Cons')
            elseif i <= p + 1
                xlabel([num2str(i - 1) 'th AR coef'])
            elseif i == npara
                xlabel('\sigma^2')
            end
        else
            if i <= k
                xlabel([num2str(xind(i)) 'th column coef'])
            elseif i <= k+p
                xlabel([num2str(i - k) 'th AR coef'])
            elseif i == npara
                xlabel('\sigma^2')
            end
        end
    end
    
    if forecast == 'Y'
        min_yfm = min(yfm);
        max_yfm = max(yfm);
        interval = (max_yfm - min_yfm)/50;
        x_axis = min_yfm:interval:max_yfm;
        figure
        [density,xi]=ksdensity(yfm);
        hold on
        histogram(yfm,x_axis,'Normalization','pdf');
        plot(xi,density);
        hold off
        xlabel('One-step Forecast')
    end
end

if Model == 4
    clc
    exist = dir('UBVAR.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"UBVAR.mat" is founded"')
        disp('Do you want to use the model in "UBVAR.mat" ?')
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
        disp('Model: Unrestricted BVAR Model')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('Y_(t) = Cons + Phi(1)*Y_(t-1) + ... + Phi(p)*Y_(t-p) + error')
        disp('(error ~ N(O,Omega)), Cons:Constant term')
        disp(' ')
        disp('beta ~ Normal(b0, B0)')
        disp('(beta = vec(Transpose of [Cons Phi(1) ... Phi(p)]))')
        disp('([Phi(1) ... Phi(p)] = Transpose of reshape(beta,p*k,k)')
        disp(' ')
        disp('inv(Omega) ~ Wishart(v0, R0)')
        disp('(v0: scalar, R0: k by k)')
        disp(' ')
        disp('k: Number of dependent')
        disp(' ')
        disp('p: The maximum lag length of dependent var that the researcher thinks.')
        disp(' ')
        k = cols(data);
        p = input('What is value of p : scalar = ');
        disp(' ')
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        phi = zeros(k,k,p);
        B_diag = zeros(k,k,p);
        disp('Prior mean of Cons')
        Cons_mean = input(['E[Cons] : ' num2str(k) ' by 1 = ']);
        disp('Prior variance of each Cons element')
        Cons_var = input(['V[Cons]) : ' num2str(k) ' by 1 = ']);
        disp(' ')
        for i = 1:p
            disp(['[Lag : ' num2str(i) ']'])
            disp(['Prior mean for phi(' num2str(i) ')'])
            phi(:,:,i) = input(['phi(' num2str(i) ') : ' num2str(k) ' by ' num2str(k) ' = ']);
            disp(['Prior variance of each phi(' num2str(i) ') matrix element = '])
            B_diag(:,:,i) = input(['var(' num2str(i) ') : ' num2str(k) ' by ' num2str(k) ' = ']);
            disp(' ')
        end
        PHI = Cons_mean;
        PHI_B = Cons_var;
        for i = 1:p
            PHI = [PHI phi(:,:,i)];  %#ok<*AGROW>
            PHI_B = [PHI_B B_diag(:,:,i)];
        end
        b0 = vec(PHI');
        B0 = diag(vec(PHI_B'));
        
        v0 = input('v0: scalar = ');
        R0 = input(['R0: ' num2str(k) ' by ' num2str(k) ' = ']);
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        if k > 2
            disp('In forecasting, Which two variables would you want to draw the bivariate probability density?')
            disp('Enter the column number of the vars in the data')
            disp(' ')
            forecast = input(' 1 by 2 row vector = ');
            disp(' ')
        elseif k==2
            forecast = [1 2];
        end
        disp(' ')
        disp('Would you like to calculate Marginal Likelihood(Laplace Method)')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "UBVAR.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('UBVAR.mat','n','forecast','p','b0','B0','v0','R0','ML')
            disp(' ')
            disp('Model is stored in file named  "UBVAR.mat"')
        end
    elseif load_hyper == 1
        Prior = load('UBVAR.mat');
        p = Prior.p;
        b0 = Prior.b0;
        B0 = Prior.B0;
        v0 = Prior.v0;
        R0 = Prior.R0;
        n = Prior.n;
        forecast = Prior.forecast;
        ML = Prior.ML;
        save_mat = 'N';
    end
    Output = Reduced_BVAR_mex(data,p,n(1,1),n(1,2),v0,R0,b0,B0,ML);
    
    consm = Output.consm;
    betam = Output.betam;
    Omegam = Output.Omegam;
    y_pred = Output.yfm;
    lnML = Output.lnML;
    
    postmom_cons = MHout0(consm,0.025,200);
    postmom_beta = MHout0(betam,0.025,200);
    postmom_Omega = MHout0(Omegam,0.025,200);
    
    figure('Name',['Joint predictive dist. between x:' num2str(forecast(1,1)) ' and y:' num2str(forecast(1,2))])
    gkde2(y_pred(:,forecast));
    
    figure('Name','Posterior predictive distribution')
    npara = cols(y_pred);
    m1 = round(sqrt(npara));
    m2 = ceil(sqrt(npara));
    for i = 1:npara
        subplot(m1, m2, i);
        para = y_pred(:, i);
        minp = minc(para);
        maxp = maxc(para);
        intvl = (maxp - minp)/50;
        interval = minp:intvl:maxp;
        [density,xi]=ksdensity(para);
        hold on
        histogram(para, interval, 'Normalization','pdf');
        plot(xi,density);
        hold off
        xlabel([num2str(i) 'th column variable'])
    end
    k = cols(data);
    clc
    disp('===========================================================================================================');
    disp('Model: Unrestricted BVAR Model')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['Maximum lag length : ' num2str(p)])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');disp('Hyper Parameter:')
    disp('Hyper Parameter:')
    disp(' ')
    disp('[Cons phi(1) phi(2) ... phi(p)] = ')
    disp(reshape(b0,p*k+1,k)');
    disp('Each Prior variance of the [Cons phi(1) ... phi(p)] matrix element = ')
    disp(reshape(diag(B0),p*k+1,k)');
    disp('v0 = ');
    disp(v0)
    disp('R0 = ')
    disp(R0)
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
    end
    %     ind = reshape(1:(k^2),k,k)';
    %     if p > 1
    %         for i = 2:p
    %             ind = [ind reshape((k^2)*(i-1)+1:i*(k^2),k,k)']; %#ok<*AGROW>
    %         end
    %         ind = vec(ind');
    %         postmom_beta = postmom_beta(ind,:);
    %     end
    max_ineff = max([postmom_cons(:,7);postmom_beta(:,7);postmom_Omega(:,7)]);
    min_p = min([postmom_cons(:,8);postmom_beta(:,8);postmom_Omega(:,8)]);
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff     Geweke-p 값');
    disp('===========================================================================================================');
    disp('Constant term : ')
    for i = 1:k
        disp(['    cons of ' num2str([i postmom_cons(i,2) postmom_cons(i,3) postmom_cons(i,4) postmom_cons(i,5) postmom_cons(i,6) postmom_cons(i,7) postmom_cons(i,8)])]);
    end
    disp(' ')
    indind = 1:k^2;
    indind = indind';
    [r, c] = minresid(indind,k);
    r = [0; r(1:end - 1)] + 1;
    c(c == 0) = k;
    indind = [c r];
    for i = 1:p
        postmom_beta_p = postmom_beta((k^2)*(i-1) + 1: (k^2)*i,:);
        disp(['The element of phi(lag = ' num2str(i) ') :'])
        for j = 1:(k^2)
            disp(['     phi ' num2str(indind(j,:)) '     ' num2str([postmom_beta_p(j,2) postmom_beta_p(j,3) postmom_beta_p(j,4) postmom_beta_p(j,5) postmom_beta_p(j,6) postmom_beta_p(j,7) postmom_beta_p(j,8)])]);
        end
        disp(' ')
    end
    ind_Omega = 1:(k^2);
    ind_Omega = ind_Omega';
    [r, c] = minresid(ind_Omega,k);
    r = [0; r(1:end - 1)] + 1;
    c(c == 0) = k;
    ind_Omega =[c r];
    disp('The element of Omega : ')
    for i = 1:(k^2)
        disp(['   Omega ' num2str(ind_Omega(i,:)) '      ' num2str([postmom_Omega(i,2) postmom_Omega(i,3) postmom_Omega(i,4) postmom_Omega(i,5) postmom_Omega(i,6) postmom_Omega(i,7) postmom_Omega(i,8)])]);
    end
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "UBVAR.mat"')
    end
end

if Model == 5
    clc
    exist = dir('IRA.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"IRA.mat" is founded"')
        disp('Do you want to use the model in "IRA.mat" ?')
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
        
        disp('=================================================')
        disp('Model: Impulse-Response Analysis')
        disp('=================================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('Structure form: ')
        disp('B*Y_(t) = Cons + Gamma(1)*Y_(t-1) + ... + Gamma(p)*Y_(t-p) + error')
        disp('error ~ N(0,eye(k)), Cons : Constant term')
        disp(' ')
        disp('Reduced form: ')
        disp('Y_(t) = Cons_ + Phi(1)*Y_(t-1) + ... + Phi(p)*Y_(t-p) + error')
        disp('(error ~ N(O, Omega=inv(B)*inv(B)))')
        disp(' ')
        disp('beta ~ Normal(b0, B0)')
        disp('(beta = vec(Transpose of [Phi(1) ... Phi(p)]))')
        disp('([Phi(1) ... Phi(p)] = Transpose of reshape(beta,p*k,k)')
        disp(' ')
        disp('inv(Omega) ~ Wishart(v0, R0)')
        disp('(v0: scalar, R0: k by k)')
        disp(' ')
        disp('k: Number of dependent')
        disp(' ')
        disp('p: The maximum lag length of dependent var that the researcher thinks.')
        disp(' ')
        k = cols(data);
        p = input('What is value of p : scalar = ');
        disp(' ')
        disp('[Restriction for Identification]')
        disp('1. Recursive Restrictions')
        disp('2. Long-run Restrictions(Blanchard and Quah, 1989)')
        disp('3. Other Short-run Restrictions')
        disp(' ')
        restriction = input('Type 1, 2 or 3 : ');
        help_restriction = ('1: Recursive, 2: Long, 3: Short');
        if restriction == 3
            disp(' ')
            disp('[What is restriction on B inverse ?]')
            disp('(Example.)')
            disp('restriction X = [ 11 12 0; 0 22 23; 31 0 33]')
            disp('vec(X) = [11 0 31 12 22 0 0 23 33]')
            disp('Then, res_index = [1;3;4;5;8;9]')
            disp(' ')
            resindex = input(['chol_index : ' num2str(k*(k+1)/2) ' by 1 = ']);
            ind_chol = ones(k,1);
        else
            disp(' ')
            disp('[Define form of Cholesky Decomposition]')
            disp('chol(X).*ind_chol is the result of decomposition that is Upper Triangular Matrix')
            disp('The element of ind_chol can be only 1 or -1.')
            disp(' ')
            ind_chol = input(['ind_chol : ' num2str(k) ' by 1 = ']);
            resindex = 1;
        end
        disp(' ')
        disp('What is length of Impulse-Response-Analysis')
        mlag = input('scalar = ');
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        phi = zeros(k,k,p);
        B_diag = zeros(k,k,p);
        for i = 1:p
            disp(['[Lag : ' num2str(i) ']'])
            disp(['Prior mean for Phi(' num2str(i) ')'])
            phi(:,:,i) = input(['phi(' num2str(i) ') : ' num2str(k) ' by ' num2str(k) ' = ']);
            disp(['Prior variance of each Phi(' num2str(i) ') matrix element = '])
            B_diag(:,:,i) = input(['var(' num2str(i) ') : ' num2str(k) ' by ' num2str(k) ' = ']);
            disp(' ')
        end
        PHI = phi(:,:,1);
        PHI_B = B_diag(:,:,1);
        if p > 1
            for i = 2:p
                PHI = [PHI phi(:,:,i)];  %#ok<*AGROW>
                PHI_B = [PHI_B B_diag(:,:,i)];
            end
        end
        b0 = vec(PHI');
        B0 = diag(vec(PHI_B'));
        
        v0 = input('v0: scalar = ');
        R0 = input(['R0: ' num2str(k) ' by ' num2str(k) ' = ']);
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        disp('Would you like to calculate Marginal Likelihood(Laplace Method)')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "IRA.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('IRA.mat','n','p','b0','B0','v0','R0','mlag','ML','help_restriction','restriction','resindex','ind_chol')
            disp(' ')
            disp('Model is stored in file named  "IRA.mat"')
        end
    elseif load_hyper == 1
        Prior = load('IRA.mat');
        b0 = Prior.b0;
        B0 = Prior.B0;
        v0 = Prior.v0;
        R0 = Prior.R0;
        n = Prior.n;
        mlag = Prior.mlag;
        p = Prior.p;
        ML = Prior.ML;
        restriction = Prior.restriction;
        resindex = Prior.resindex;
        ind_chol = Prior.ind_chol;
        save_mat = 'N';
    end
    
    Output = Structure_BVAR_mex(data,p,n(1,1),n(1,2),mlag,v0,R0,b0,B0,ML,restriction,resindex,ind_chol);
    
    Bm = Output.Bm;
    Gammam = Output.Gammam;
    ImpulseRespm = Output.ImpulseRespm;
    lnML = Output.lnML;
    decomm = Output.decomm;
    
    postmom_B = MHout0(Bm,0.025,200);
    postmom_Gamma = MHout0(Gammam,0.025,200);
    k = cols(data);
    clc
    disp('===========================================================================================================');
    disp('Model: Impulse-Response Analysis')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['Maximum lag length : ' num2str(p)])
    disp(['Length of Impulse-Response-Analysis : ' num2str(mlag)])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    if restriction == 1
        disp('Restriction for Identification: Recursive Restrictions')
    end
    if restriction == 2
        disp('Restriction for Identification: Long-run Restrictions')
    end
    if restriction == 3
        disp(['Restriction for Identification: res_index  = [' num2str(resindex') ']'])
    end
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter:')
    disp(' ')
    disp('[Phi(1) Phi(2) ... Phi(p)] = ')
    disp(reshape(b0,p*k,k)');
    disp('Each Prior variance of the [Phi(1) ... Phi(p)] matrix element = ')
    disp(reshape(diag(B0),p*k,k)');
    disp('v0 = ');
    disp(v0)
    disp('R0 = ')
    disp(R0)
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
    end
    max_ineff = max([postmom_B(:,7);postmom_Gamma(:,7)]);
    min_p = min([postmom_B(:,8);postmom_Gamma(:,8)]);
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('     nth column      Estimates     S.E.        2.5%        50%        97.5%       Ineff     Geweke-p 값');
    disp('===========================================================================================================');
    ind_Gamma = 1:(k^2);
    ind_Gamma = ind_Gamma';
    [r, c] = minresid(ind_Gamma,k);
    r = [0; r(1:end - 1)] + 1;
    c(c == 0) = k;
    ind_Gamma =[c r];
    disp('The element of B :')
    for i = 1:(k^2)
        disp(['         B ' num2str(ind_Gamma(i,:)) '      ' num2str([postmom_B(i,2) postmom_B(i,3) postmom_B(i,4) postmom_B(i,5) postmom_B(i,6) postmom_B(i,7) postmom_B(i,8)])]);
    end
    disp(' ')
    ind_Gamma = 1:(k^2);
    ind_Gamma = ind_Gamma';
    [r, c] = minresid(ind_Gamma,k);
    r = [0; r(1:end - 1)] + 1;
    c(c == 0) = k;
    ind_Gamma =[c r];
    for i = 1:p
        postmom_Gamma_p = postmom_Gamma((k^2)*(i-1) + 1: (k^2)*i,:);
        disp(['The element of Gamma(lag = ' num2str(i) ') :'])
        for j = 1:(k^2)
            disp(['     Gamma ' num2str(ind_Gamma(j,:)) '     ' num2str([postmom_Gamma_p(j,2) postmom_Gamma_p(j,3) postmom_Gamma_p(j,4) postmom_Gamma_p(j,5) postmom_Gamma_p(j,6) postmom_Gamma_p(j,7) postmom_Gamma_p(j,8)])]);
        end
        disp(' ')
    end
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "IRA.mat"')
    end
    Plot_IRF(ImpulseRespm,postmom_B);
    Plot_accumul_IRF(ImpulseRespm,postmom_B);
    var_decom(decomm,postmom_B);
end

if Model == 6
    clc
    exist = dir('MSM.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"MSM.mat" is founded"')
        disp('Do you want to use the model in "MSM.mat" ?')
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
        disp('Model: Markov Switching Model')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_t | beta(s_t), sig2(s_t), s_t ~ Normal(x_t*beta(s_t), sig2(s_t))')
        disp('s_t ~ Markov(s_0, P)')
        disp(' ')
        disp('beta(s_t) ~ Normal(beta0(s_t), B0)')
        disp('(b0: k by 1, B0: k by k)')
        disp(' ')
        disp('sig2(s_t) ~ InverseGamma(alpha0(s_t), delta0(s_t))')
        disp('(alpha0: scalar, delta0: scalar)')
        disp(' ')
        disp('P(s_t,:) ~ Dirichlet(parameter)')
        disp('(parameter = a0*ones(1,s).')
        disp('(After that, parameter(1,s_t) = a1)')
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
        disp('=============================================')
        disp('Choose specific Model: ')
        disp(' ')
        disp('1. Only beta is switching')
        disp('2. Only sig2 is switching')
        disp('3. Both beta and sig2 are switching')
        disp('=============================================')
        disp(' ')
        switchingind = input('Type number: ');
        disp(' ')
        if switchingind == 1
            disp('Do you want to analyze data with Change-point model?')
            change_model = input('type Y or N : ','s');
            disp(' ')
            if change_model == 'Y'
                idenind = 3;
            elseif change_model == 'N'
                idenind = 1;
            end
        elseif switchingind == 2
            disp('Do you want to analyze data with Change-point model?')
            change_model = input('type Y or N : ','s');
            disp(' ')
            if change_model == 'Y'
                idenind = 3;
            elseif change_model == 'N'
                idenind = 2;
            end
        elseif switchingind == 3
            disp('Do you want to analyze data with Change-point model?')
            change_model = input('type Y or N : ','s');
            disp(' ')
            if change_model == 'Y'
                idenind = 3;
            elseif change_model == 'N'
                disp('Which variables would you lke based on to identify the state?')
                disp('1. beta, 2. sig2')
                idenind = input('type 1 or 2 : ');
            end
        end
        
        if idenind == 1
            disp(' ')
            disp('[Identification constraints]')
            disp('As the state number increases, the LC*beta value also increases.')
            disp(' ')
            disp('What is LC?')
            LC = input(['LC : 1 by ' num2str(k_reg) ' = ']);
        else
            LC = zeros(1,k_reg);
        end
        disp(' ')
        disp('What is the lower bound of the share of each state?')
        lowerbound = input('0 <= lower bound <= 1 : ');
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        disp('s_n : Number of states the researcher thinks')
        disp(' ')
        s = input('What is s_n : ');
        if switchingind == 1 || switchingind == 3
            
            disp('beta0_Matrix = [beta0(s_1) beta0(s_2) ... beta0(s_n)]')
            beta0 = input(['beta0_Matrix: ' num2str(k_reg) ' by ' num2str(s) ' = ']);
            B0 = input(['B0: ' num2str(k_reg) ' by ' num2str(k_reg) ' = ']);
            disp(' ')
        elseif switchingind == 2
            beta0 = input(['beta0 : ' num2str(k_reg) ' by 1 = ']);
            B0 = input(['B0: ' num2str(k_reg) ' by ' num2str(k_reg) ' = ']);
            disp(' ')
        end
        if switchingind == 2 || switchingind == 3
            disp('alpha0_vector = [alpha0(s_1); alpha0(s_2); ... ;alpha0(s_n)')
            disp('delta0_vector = [delta0(s_1); delta0(s_2); ... ;delta0(s_n)')
            alpha0 = input(['alpha0_vector: ' num2str(s) ' by 1 = ']);
            delta0 = input(['delta0_vector: ' num2str(s) ' by 1 = ']);
            disp(' ')
        elseif switchingind == 1
            alpha0 = input('alpha0 : scalar = ');
            delta0 = input('delta0 : scalar = ');
            disp(' ')
        end
        a0 = input('a0: scalar = ');
        a1 = input('a1: scalar = ');
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
        disp('Do you want to save your model into "MSM.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            help_switchingind = '1:switch beta, 2:switch sig2, 3:switch beta&sig2 both';
            help_idenind = 'Idenfy state by 1:beta, 2:sig2, 3:Change-point model';
            save('MSM.mat','s','x','switchingind', 'idenind' ,'LC','lowerbound','n','forecast','x_f', ...
                'beta0','B0','alpha0','delta0','a0','a1','help_switchingind','help_idenind','ML');
            disp(' ')
            disp('Model is stored in file named  "MSM.mat"')
        end
    elseif load_hyper == 1
        Prior = load('MSM.mat');
        s = Prior.s;
        switchingind = Prior.switchingind;
        idenind = Prior.idenind;
        LC = Prior.LC;
        lowerbound = Prior.lowerbound;
        n = Prior.n;
        forecast = Prior.forecast;
        x_f = Prior.x_f;
        x = Prior.x;
        beta0 = Prior.beta0;
        B0 = Prior.B0;
        alpha0 = Prior.alpha0;
        delta0 = Prior.delta0;
        a0 = Prior.a0;
        a1 = Prior.a1;
        ML = Prior.ML;
        save_mat = 'N';
        
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind); %#ok<*FNDSB>
        X = data(:,xind);
        
    end
    if forecast == 'Y'
        Output = Markov_Switching_mex(X,Y,s,n(1,1),n(1,2),beta0,B0,alpha0,delta0,a0,a1,switchingind,idenind,LC,lowerbound,forecast,x_f,ML);
    elseif forecast == 'N'
        Output = Markov_Switching_mex(X,Y,s,n(1,1),n(1,2),beta0,B0,alpha0,delta0,a0,a1,switchingind,idenind,LC,lowerbound,forecast,1,ML);
    end
    betam_ = Output.betam;
    sig2m = Output.sig2m;
    Pm = Output.Pm;
    Sm = Output.Sm;
    Yfm = Output.Yfm;
    lnML = Output.lnML;
    Changepointm = Output.Changepointm;
    
    MHm = [betam_ sig2m Pm];
    alpha = 0.025;
    maxac = 200;
    postmom = MHout0(MHm,alpha,maxac);
    
    result = [postmom(:,2) postmom(:,3) postmom(:,4) postmom(:,5) postmom(:,6) postmom(:,7) postmom(:,8) ];
    k = cols(xind);
    T = rows(data);
    clc
    disp('===========================================================================================================');
    disp('Model: Markov-Switching Model')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('[Specific Model]')
    if switchingind == 1
        disp('The beta depends on the regime.')
    elseif switchingind == 2
        disp('The sig2 depends on the regime.')
    elseif switchingind == 3
        disp('The beta and sig2 depends on the regime.')
    end
    disp(' ')
    disp('[Identification constraints]')
    if idenind == 1
        disp(['As the state number increases, the [' num2str(LC) ']*beta value also increases.'])
    elseif idenind == 2
        disp('As the state number increases, the sig2 also increases.')
    elseif idenind == 3
        disp('Change-point Model')
    end
    disp(' ')
    disp(['The dependent variable is the ' num2str(yind) 'th column of data.'])
    disp(['The share of each state is restricted to greater than ' num2str(lowerbound*100) '%.'])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter:')
    disp(' ')
    disp('[b0 B0] = ')
    disp([beta0 B0]);
    disp('[alpha0 delta0] = ')
    disp([alpha0 delta0]);
    disp('[a0 a1] = ')
    disp([a0 a1]);
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
    end
    max_ineff = max(postmom(:,7));
    min_p = min(postmom(:,8));
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff     Geweke-p 값');
    disp('===========================================================================================================');
    for i = 1:s
        disp(['[State ' num2str(i) ']'])
        for j = 1:k
            disp(['       beta ' num2str([xind(1,j) result(k*(i-1)+j,:)])])
        end
        disp(['         sig2      ' num2str(result(k*s+i,:))])
        disp(' ')
    end
    disp('-------------------------------------------Transition Prob.------------------------------------------------');
    ind_P = 1:(s^2);
    ind_P = ind_P';
    [r, c] = minresid(ind_P,s);
    r = [0; r(1:end - 1)] + 1;
    c(c == 0) = s;
    for i = 1:s^2
        disp(['       P(' num2str(c(i,1)) ',' num2str(r(i,1)) ')      ' num2str(result(s*k + s + i, :))]);
    end
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "MSM.mat"')
    end
    
    if idenind == 3
        figure
        
        subplot(2,1,1)
        plot(meanc(Sm), 'Linewidth',2.5);
        xlim([0, T])
        ylim([0.95, s+0.05])
        xlabel('Time');
        ylabel('State number');
        title('(a) Mean of sampled state');
        
        subplot(2,1,2)
        plot(Changepointm./n(1,2), 'Linewidth',2.5);
        xlim([0, T])
        ylim([-0.05, 1.05])
        xlabel('Time');
        ylabel('probability');
        title('(b) Posterior Prob. of Changepoint');
    else
        figure
        sampled_S = meanc(Sm);
        plot(sampled_S);
        T = rows(data);
        xlim([0, T])
        ylim([0.95, s+0.05])
        xlabel('Time');
        ylabel('State number');
        title('Mean of sampled state');
    end
    
    for i = 1:s
        figure('Name',['Posterior dist. of State ' num2str(i) ' Variable']);
        MHm = [betam_(:,k*(i-1)+1:k*i) sig2m(:,i)];
        npara = cols(MHm);
        m1 = round(sqrt(npara));
        m2 = ceil(sqrt(npara));
        for j = 1:npara
            subplot(m1, m2, j);
            para = MHm(:, j);
            minp = minc(para);
            maxp = maxc(para);
            intvl = (maxp - minp)/50;
            interval = minp:intvl:maxp;
            [density,xi]=ksdensity(para);
            hold on
            histogram(para, interval, 'Normalization','pdf');
            plot(xi,density);
            hold off
            if j < npara
                xlabel([num2str(xind(j)) 'th column coef'])
            elseif j == npara
                xlabel('\sigma^2')
            end
        end
    end
    
    figure('Name','Transition Probability');
    MHm = Pm;
    npara = cols(MHm);
    m1 = round(sqrt(npara));
    m2 = ceil(sqrt(npara));
    for j = 1:npara
        subplot(m1, m2, j);
        para = MHm(:, j);
        interval = 100;
        [density,xi]=ksdensity(para);
        hold on
        histogram(para, interval, 'Normalization','pdf');
        plot(xi,density);
        hold off
        xlabel(['P(' num2str(c(j,1)) ',' num2str(r(j,1)) ')'])
    end
    
    if forecast == 'Y'
        figure
        miny = minc(Yfm);
        maxy = maxc(Yfm);
        int = (maxy - miny)/50;
        interval = miny:int:maxy;
        [density,xi]=ksdensity(Yfm);
        hold on
        histogram(Yfm, interval,'Normalization','pdf');
        plot(xi,density);
        hold off
        title('Predictive Dist.')
    end
end


end
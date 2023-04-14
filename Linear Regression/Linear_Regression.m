function Output = Linear_Regression(data)

clc
format shortG

disp(' ')
disp('/////////////////////////////////////////////')
disp('////////Bayesian Econometrics ToolBox////////')
disp('/////////////////////////////////////////////')
disp(' ')
disp('Model: Linear Regression')
disp('====================Model====================')
disp('1. Ordinary Least Squares')
disp('2. Bayesian Linear Regression')
disp('3. Linear Regression(Heterogeneity)')
disp('4. Bayesian IV Linear Regression')
disp('=============================================')
disp(' ')
disp('Which model would you like to choose?')
disp(' ')
Model = input(' ');

if Model == 1
    disp(' ')
    disp('What column in the data matrix is the dependent variable?')
    disp(' ')
    x = input(' ');
    disp(' ')
    
    k = cols(data);
    y = 1:k;
    z = y==x;
    yind = find(z);
    xind = find(z==0);
    Y = data(:,yind);
    X = data(:,xind);
    
    disp(' ')
    disp('Do you want to graph OLS results?')
    disp(' ')
    graph_ok = input('type Y or N : ','s');
    disp(' ')
    if graph_ok == 'Y'
        disp('In graph, Which column data should be placed on the X axis?')
        disp(' ')
        graph_what = input('scalar: ');
        graph = find(xind == graph_what);
        clc;
        Output = ols(X,Y,1,graph);
    else
        clc;
        Output = ols(X,Y);
    end    
end


if Model == 2
    clc
    exist = dir('BLR.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"BLR.mat" is founded"')
        disp('Do you want to use the model in "BLR.mat" ?')
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
        disp('Model: Bayesian Linear Regression')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('Y | X,b,sig2 ~ Normal(X*b, sig2 * I(T,T))')
        disp(' ')
        disp('b ~ Normal(b0, B0)')
        disp('(b0: k by 1, B0: k by k)')
        disp(' ')
        disp('sig2 ~ InverseGamma(a0 / 2, d0 / 2)')
        disp('(a0: 1 by 1, d0: 1 by 1)')
        disp(' ')
        disp('T: Number of observations, k: Number of Regressor')
        disp(' ')
        disp('What column in the data matrix is the dependent variable?')
        disp(' ')
        x = input(' ');
        disp(' ')
        
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind);
        X = data(:,xind);
        k_reg = cols(X);
        
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        b0 = input(['b0: ' num2str(k_reg) ' by 1 = ']);
        B0 = input(['B0: ' num2str(k_reg) ' by ' num2str(k_reg) ' = ']);
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
            disp('What are the regressor values to be used in the forecast?')
            disp(' ')
            x_f = input(['column vector : ' num2str(k_reg) ' by 1 = ']);
        else
            x_f = [ ];
        end
        disp('Would you like to calculate Marginal Likelihood(Laplace Method)')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "BLR.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('BLR.mat','x','b0','B0','a0','d0','n','forecast','x_f','ML')
            disp(' ')
            disp('Model is stored in file named "BLR.mat"')
            disp(' ')
        end
    elseif load_hyper == 1
        Prior = load('BLR.mat');
        x = Prior.x;
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind);
        X = data(:,xind);
        b0 = Prior.b0;
        B0 = Prior.B0;
        a0 = Prior.a0;
        d0 = Prior.d0;
        n = Prior.n;
        forecast = Prior.forecast;
        x_f = Prior.x_f;
        ML = Prior.ML;
        save_mat = 'N';
    end
    if forecast == 'Y'
        Output = Ordinary_Regression(Y,X,b0,B0,a0,d0,n(1,1),n(1,2),forecast,x_f,ML);
    elseif forecast == 'N'
        Output = Ordinary_Regression(Y,X,b0,B0,a0,d0,n(1,1),n(1,2),forecast,1,ML);
    end
    yfm = Output.yfm;
    bm = Output.bm;
    sig2m = Output.sig2m;
    R2 = Output.R2;
    if ML == 'Y'
        lnML = Output.lnML;
    end
    MHm = [bm sig2m];
    alpha = 0.025;
    maxac = 200;
    postmom = MHout0(MHm,alpha,maxac);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Bayesian Linear Regression')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['The dependent variable is the ' num2str(yind) 'th column of data.'])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter:')
    disp(' ')
    disp('[b0, B0]= ')
    disp([b0 B0]);
    disp('[a0, d0]= ')
    disp([a0 d0]);
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
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff    Geweke-p 값');
    disp('===========================================================================================================');    
    for i = 1:cols(xind)
        disp(['          b ' num2str([xind(1,i) postmom(i,2) postmom(i,3) postmom(i,4) postmom(i,5) postmom(i,6) postmom(i,7) postmom(i,8)])]);
    end
    disp(['         sig2      ' num2str([postmom(end,2) postmom(end,3) postmom(end,4) postmom(end,5) postmom(end,6) postmom(end,7) postmom(end,8)])]);
    postmom = MHout0(R2,alpha,maxac);
    disp(['  Bayesian R2      ' num2str([postmom(end,2) postmom(end,3) postmom(end,4) postmom(end,5) postmom(end,6) postmom(end,7) postmom(end,8)])]);
    disp('===========================================================================================================');    disp(' ')
    if save_mat == 'Y'
        disp('Model is stored in file named "BLR.mat"')
    end
    npara = cols(MHm);
    m1 = round(sqrt(npara));
    m2 = ceil(sqrt(npara));
    for i = 1:npara
        subplot(m1, m2, i);
        para = MHm(:, i);
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
            xlabel([num2str(xind(i)) 'th column coef'])
        elseif i == npara
            xlabel('\sigma^2')
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


if Model == 3
    clc
    exist = dir('LRH.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"LRH.mat" is founded"')
        disp('Do you want to use the model in "LRH.mat" ?')
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
        disp('Linear Regression(Heterogeneity)')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_t | x_t,b,sig2,lambda_t ~ Normal(x_t*b, inv(lambda_t)*sig2)')
        disp(' ')
        disp('b ~ Normal(b0, B0)')
        disp('(b0: k by 1, B0: k by k)')
        disp(' ')
        disp('sig2 ~ InverseGamma(a0 / 2, d0 / 2)')
        disp('(a0: 1 by 1, d0: 1 by 1)')
        disp(' ')
        disp('lambda_t ~ Gamma(v / 2, v / 2)')
        disp('(v: 1 by 1)')
        disp(' ')
        disp('T: Number of observations, k: Number of Regressor')
        disp(' ')
        disp('What column in the data matrix is the dependent variable?')
        disp(' ')
        x = input(' ');
        disp(' ')
        
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind);
        X = data(:,xind);
        k_reg = cols(X);
        
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        b0 = input(['b0: ' num2str(k_reg) ' by 1 = ']);
        B0 = input(['B0: ' num2str(k_reg) ' by ' num2str(k_reg) ' = ']);
        a0 = input('a0: scalar = ');
        d0 = input('d0: scalar = ');
        v = input('v: scalar = ');
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
        disp('Do you want to save your model into "LRH.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('LRH.mat','x','b0','B0','a0','d0','v','n','forecast','x_f','ML')
            disp(' ')
            disp('Model is stored in file named "LRH.mat"')
            disp(' ')
        end
    elseif load_hyper == 1
        Prior = load('LRH.mat');
        x = Prior.x;
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind);
        X = data(:,xind);
        b0 = Prior.b0;
        B0 = Prior.B0;
        a0 = Prior.a0;
        d0 = Prior.d0;
        v = Prior.v;
        n = Prior.n;
        forecast = Prior.forecast;
        x_f = Prior.x_f;
        ML = Prior.ML;
        save_mat = 'N';
    end
    
    if forecast == 'Y'
        Output = Hetero_Regression_mex(Y,X,b0,B0,a0,d0,v,n(1,1),n(1,2),forecast,x_f,ML);
    elseif forecast == 'N'
        Output = Hetero_Regression_mex(Y,X,b0,B0,a0,d0,v,n(1,1),n(1,2),forecast,1,ML);
    end
    
    bm = Output.bm;
    Sig2m = Output.Sig2m;
%     lambdam = Output.lambdam;
    if ML == 'Y'
        lnML = Output.lnML;
    end
    yfm = Output.yfm;
    
    MHm_out = [bm Sig2m];
    alpha = 0.025;
    maxac = 200;
    postmom = MHout0(MHm_out,alpha,maxac);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Linear Regression(Heterogeneity)')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['The dependent variable is the ' num2str(yind) 'th column of data.'])
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter: ')
    disp(' ')
    disp('[b0, B0]= ')
    disp([b0 B0]);
    disp('[a0, d0]= ')
    disp([a0 d0]);
    disp('[v]= ')
    disp(v');
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
    for i = 1:cols(xind)
        disp(['          b ' num2str([xind(1,i) postmom(i,2) postmom(i,3) postmom(i,4) postmom(i,5) postmom(i,6) postmom(i,7) postmom(i,8)])]);
    end
    disp(['         sig2      ' num2str([postmom(end,2) postmom(end,3) postmom(end,4) postmom(end,5) postmom(end,6) postmom(end,7) postmom(end,8)])]);
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named "LRH.mat"')
    end
    MHm_plot = [bm Sig2m];
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
            xlabel([num2str(xind(i)) 'th column coef'])
        elseif i == npara
            xlabel('\sigma^2')
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
    exist = dir('BILR.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"BILR.mat" is founded"')
        disp('Do you want to use the model in "BILR.mat" ?')
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
        disp('Model: Bayesian IV Linear Regression')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('y_i = x_i*b_1 + xs_i*b_s + u_i')
        disp('(x_i: exogeneous vector var vector, xs_i: endogeneous var vector)')
        disp(' ')
        disp('xs_i = kron(eye(k2), x_i)*gamma_1 + kron(eye(k2), z_i)*gamma_2 + e_i')
        disp('(z_i : instrument var vector)')
        disp(' ')
        disp('[u_i; e_i] ~ Normal(O, Sigma)')
        disp(' ')
        disp('b = [b_1; b_s] ~ Normal(b0, B0)')
        disp('(b0: (k1+k2) by 1, B0: (k1+k2) by (k1+k2))')
        disp(' ')
        disp('gamma = [gamma_1; gamma_2] ~ Normal(gamma0, G0)')
        disp('(gamma0: (k1+k3)*k2 by 1, G0: (k1+k3)*k2 by (k1+k3)*k2)')
        disp(' ')
        disp('inv(Sigma) ~ Wishart(v0, R0)')
        disp('(v0: 1 by 1, R0: k2+1 by k2+1)')
        disp(' ')
        disp('k1: The number of exogeneous regressor')
        disp('k2: The number of endogeneous regressor, k3: The number of IV')
        disp(' ')
        disp('Which column of the data is the variable in?')
        disp('Write column number by row vector')
        disp(' ')
        yind = input('Dependent Variable = ');
        exoind = input('Exogeneous Variable = ');
        k1 = cols(exoind);
        endoind = input('Endogeneous Variable = ');
        k2 = cols(endoind);
        zind = input('Instrument Variable= ');
        k3 = cols(zind);
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        b0 = input(['b0: ' num2str(k1+k2) ' by 1 = ']);
        B0 = input(['B0: ' num2str(k1+k2) ' by ' num2str(k1+k2) ' = ']);
        gamma0 = input(['gamma0: ' num2str((k1+k3)*k2) ' by 1 = ']);
        G0 = input(['G0: ' num2str((k1+k3)*k2) ' by ' num2str((k1+k3)*k2) ' = ']);
        v0 = input('v0: 1 by 1 = ');
        R0 = input(['R0: ' num2str(k2+1) ' by ' num2str(k2+1) ' = ']);
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
            disp('What are the regressor and IV values to be used in the forecast?')
            disp('Enter regressor and IV values in the same column as the data.')
            disp('You can enter any value for the dependent variable position.')
            disp(' ')
            x_f = input(['row vector : 1 by ' num2str(cols(data)) ' = ']);
        elseif forecast == 'N'
            x_f = [ ];
        end
        disp(' ')
        disp('Would you like to calculate Marginal Likelihood(Laplace Method)')
        disp(' ')
        ML = input('type Y or N : ','s');
        disp(' ')
        disp('Do you want to save your model into "BILR.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('BILR.mat','yind','endoind','zind','exoind',...
                'b0','B0','gamma0','G0','v0','R0','n','forecast','x_f','ML')
            disp(' ')
            disp('Model is stored in file named  "BILR.mat"')
        end
    elseif load_hyper == 1
        Prior = load('BILR.mat');
        yind = Prior.yind;
        endoind = Prior.endoind;
        zind= Prior.zind;
        exoind = Prior.exoind;
        b0 = Prior.b0;
        B0 = Prior.B0;
        gamma0 = Prior.gamma0;
        G0 = Prior.G0;
        v0 = Prior.v0;
        R0 = Prior.R0;
        n = Prior.n;
        forecast = Prior.forecast;
        x_f = Prior.x_f;
        ML = Prior.ML;
        save_mat = 'N';
    end
    x_f = x_f';
    if forecast == 'Y'
        Output = IV_Regression_mex(data,b0,B0,v0,R0,gamma0,G0,n(1,1),n(1,2),yind,exoind,endoind,zind,forecast,x_f,ML);
    elseif forecast == 'N'
        Output = IV_Regression_mex(data,b0,B0,v0,R0,gamma0,G0,n(1,1),n(1,2),yind,exoind,endoind,zind,forecast,1,ML);
    end
    
    yfm = Output.yfm;
    bm = Output.bm;
    gammam = Output.gammam;
    Sigmam = Output.Sigmam;
    if ML == 'Y'
        lnML = Output.lnML;
    end
    alpha = 0.025; % 유의수준
    maxac = 200; % pacf, acf to 200 orders
    
    postmom_beta = MHout0(bm,alpha,maxac);
    postmom_gamma = MHout0(gammam,alpha,maxac);
    postmom_Sigma = MHout0(Sigmam,alpha,maxac);
    
    k1 = cols(exoind);
    k2 = cols(endoind);
    k3 = cols(zind);
    
    clc
    disp('===========================================================================================================');
    disp('Model: Bayesian IV Linear Regression')
    disp('-----------------------------------------------------------------------------------------------------------');
    disp(['The dependent variable is the ' num2str(yind) 'th column of data.'])
    disp(['Endogenous regressor is the ' num2str(endoind) 'th column of data.'])
    disp(['IV is the ' num2str(zind) 'th column of data.'])
    disp(' ')
    disp(['Simulation size: n0= ' num2str(n(1,1)) ', n1= ' num2str(n(1,2))])
    disp('-----------------------------------------------------------------------------------------------------------');
    disp('Hyper Parameter: ')
    disp(' ')
    disp('[b0, B0]= ')
    disp([b0 B0]);
    disp('[gamma0, G0]= ')
    disp([gamma0 G0]);
    disp('v0 = ');
    disp(v0)
    disp('R0 = ')
    disp(R0)
    disp('-----------------------------------------------------------------------------------------------------------');
    if ML == 'Y'
        disp(['Log Marginal Likelihood: ' num2str(lnML) '(Laplace Method)'])
    end
    max_ineff = max([postmom_beta(:,7);postmom_gamma(:,7);postmom_Sigma(:,7)]);
    min_p = min([postmom_beta(:,8);postmom_gamma(:,8);postmom_Sigma(:,8)]);
    disp(['Maximum Inefficiency Factor: ' num2str(max_ineff)])
    disp(['Effective Simulation Size: ' num2str(n(1,2)/max_ineff)])
    disp(['Minimum Geweke p -value: ' num2str(min_p)])
    disp('===========================================================================================================');
    disp('   nth column     Estimates     S.E.        2.5%        50%        97.5%       Ineff     Geweke-p 값');
    disp('===========================================================================================================');
    disp('Regress Y on EXOgeneous regressor: ')
    for i = 1:k1
        disp(['         b  ' num2str([exoind(1,i) postmom_beta(i,2) postmom_beta(i,3) postmom_beta(i,4) postmom_beta(i,5) postmom_beta(i,6) postmom_beta(i,7) postmom_beta(i,8)])]);
    end
    disp('Regress Y on ENDOgeneous regressor: ')
    for i = 1: k2
        disp(['         b  ' num2str([endoind(1,i) postmom_beta(k1 + i,2) postmom_beta(k1 + i,3) postmom_beta(k1 + i,4) postmom_beta(k1 + i,5) postmom_beta(k1 + i,6) postmom_beta(k1 + i,7) postmom_beta(k1 + i,8)])]);
    end
    for i = 1:k2
    disp('-----------------------------------------------------------------------------------------------------------');
        disp(['Regress ' num2str(endoind(1,i)) 'th ENDogeneous on EXO & IV variable: '])
        for j = 1:k1
            disp(['      gamma ' num2str([exoind(1,j) postmom_gamma((k1+k3)*(i-1) + j,2) postmom_gamma((k1+k3)*(i-1) + j,3) postmom_gamma((k1+k3)*(i-1) + j,4) postmom_gamma((k1+k3)*(i-1) + j,5) postmom_gamma((k1+k3)*(i-1) + j,6) postmom_gamma((k1+k3)*(i-1) + j,7) postmom_gamma((k1+k3)*(i-1) + j,8)])]);
        end
        for j = 1:k3
            disp(['      gamma ' num2str([zind(1,j) postmom_gamma((k1+k3)*(i-1) + k1 + j,2) postmom_gamma((k1+k3)*(i-1)+ k1 + j,3) postmom_gamma((k1+k3)*(i-1)+ k1 + j,4) postmom_gamma((k1+k3)*(i-1)+ k1 + j,5) postmom_gamma((k1+k3)*(i-1)+ k1 + j,6) postmom_gamma((k1+k3)*(i-1)+ k1 + j,7) postmom_gamma((k1+k3)*(i-1)+ k1 + j,8)])]);
        end
    end
    disp('-----------------------------------------------------------------------------------------------------------');
    ind_Sigma = 1:(k2 + 1)^2;
    ind_Sigma = ind_Sigma';
    [r, c] = minresid(ind_Sigma,k2+1);
    r = [0; r(1:end - 1)] + 1;
    c(c == 0) = k2+1;
    ind_Sigma =[c r];
    disp('The element of Sigma: ')
    for i = 1:(k2+1)^2
        disp(['   Sigma ' num2str(ind_Sigma(i,:)) '     ' num2str([postmom_Sigma(i,2) postmom_Sigma(i,3) postmom_Sigma(i,4) postmom_Sigma(i,5) postmom_Sigma(i,6) postmom_Sigma(i,7) postmom_Sigma(i,8)])]);
    end
    disp('===========================================================================================================');
    if save_mat == 'Y'
        disp('Model is stored in file named  "BILR.mat"')
    end
    MHm_plot = [bm Sigmam(:,1)];
    npara = cols(MHm_plot); % 파라메터의 수
    m1 = round(sqrt(npara));
    m2 = ceil(sqrt(npara));
    for i = 1:npara
        subplot(m1, m2, i);
        para = MHm_plot(:, i);
        minp = minc(para); % 각 추출된 파라미터의 최소
        maxp = maxc(para); % 최대
        intvl = (maxp - minp)/50;
        interval = minp:intvl:maxp;
        [density,xi]=ksdensity(para);
        hold on
        histogram(para, interval, 'Normalization','pdf');
        plot(xi,density);
        hold off
        if i <= k1
            xlabel([num2str(exoind(1,i)) 'th exo coef'])
        elseif i <= k1+k2
            xlabel([num2str(endoind(1,i - k1)) 'th endo coef'])
        else
            xlabel('\Sigma_1_1')
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
end
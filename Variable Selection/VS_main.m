function Output = VS_main(data)

clc
format shortG
disp(' ')
disp('/////////////////////////////////////////////')
disp('////////Bayesian Econometrics ToolBox////////')
disp('/////////////////////////////////////////////')
disp(' ')
disp('Model: Variable Selection')
disp('====================Model====================')
disp('1. Absolutely Continuous Spikes')
disp('2. Dirac Spike - g prior')
disp('=============================================')
disp('Important Note for model 2: ')
disp('!!Do not include constant term in your regressor!!')
disp(' ')
disp('Note: For setting "g" in g prior')
disp('      I follow recommandations from Fernandez, Ley, and Steel(2001)')

disp(' ')
disp('Which model would you like to choose?')
disp(' ')
Model = input(' ');

if Model == 1
    clc
    exist = dir('VS_AC.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"VS_AC.mat" is founded"')
        disp('Do you want to use the model in "VS_AC.mat" ?')
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
        disp('Model: Absolutely Continuous Spikes in VS    ')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('Y | X,theta ~ Normal(X_1*b_1 + ... + X_k*b_k, sigma2 * I(T,T))')
        disp(' ')
        disp('sigma2 ~ InverseGamma(alpha0 / 2, delta0 / 2)')
        disp('(alpha0: 1 by 1, delta0: 1 by 1)')
        disp(' ')
        disp('Prob(gamma_i = 0) == Prob(gamma_i = 1) == 0.5')
        disp(' ')
        disp('sig2_0 ~ InverseGamma(v0 / 2, d0 / 2)')
        disp('sig2_1 ~ InverseGamma(v1 / 2, d1 / 2)')
        disp(' ')
        disp('b_i | gamma_i,sig2_0,sig2_1')
        disp(' ~ 1(gamma_i = 0)*Normal(0, sig2_0) + 1(gamma_i = 1)*Normal(0, sig2_1)')
        disp(' ')
        disp('T: Number of observations, k: Number of Regressor')
        disp(' ')
        disp('What column in the data matrix is the dependent variable?')
        disp(' ')
        x = input(' ');
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        alpha0 = input('alpha0: scalar = ');
        delta0 = input('delta0: scalar = ');
        disp(' ')
        disp('E(sig2_0) = d0/v0, So set d0/v0 sufficiently small')
        v0 = input('v0: scalar = ');
        d0 = input('d0: scalar = ');
        disp(' ')
        disp('E(sig2_1) = d1/v1, So set d1/v1 sufficiently large')
        v1 = input('v1: scalar = ');
        d1 = input('d1: scalar = ');
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind); %#ok<*FNDSB>
        X = data(:,xind);
        k_reg = cols(X);
        
        disp('Do you want to forecast?')
        disp(' ')
        forecast = input('type Y or N : ','s');
        disp(' ')
        if forecast == 'Y'
            disp('What are the regressor values to be used in the forecast?')
            disp(' ')
            x_f = input(['column vector : ' num2str(k_reg) ' by 1 = ']);
        elseif forecast == 'N'
            x_f = [ ];
        end
        disp(' ')
        disp('Do you want to save your model into "VS_AC.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('VS_AC.mat','x','alpha0','delta0','v0','d0','v1','d1','n','forecast','x_f')
            disp(' ')
            disp('Model is stored in file named "VS_AC.mat"')
        end
    elseif load_hyper == 1
        Prior = load('VS_AC.mat');
        x = Prior.x;
        n = Prior.n;
        forecast = Prior.forecast;
        x_f = Prior.x_f;
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind); %#ok<*FNDSB>
        X = data(:,xind);
        alpha0 = Prior.alpha0;
        delta0 = Prior.delta0;
        v0 = Prior.v0;
        d0 = Prior.d0;
        v1 = Prior.v1;
        d1 = Prior.d1;
        save_mat = 'N';
    end
    
    if forecast == 'Y'
        Output = Vari_Selection_mex(Y, X, n(1,1), n(1,2), alpha0, delta0, [v0; d0], [v1; d1],forecast,x_f);
    elseif forecast == 'N'
        Output = Vari_Selection_mex(Y, X, n(1,1), n(1,2), alpha0, delta0, [v0; d0], [v1; d1],forecast,1);
    end
    yfm = Output.yfm ;
    gammam = Output.gammam;
    alpha = 0.05;
    maxac = 200;
    postmom_Gam = MHout0(gammam,alpha,maxac, 0);
    Gam_hat = postmom_Gam(:, 2);
    y = Gam_hat;
    figure
    x = 1:length(Gam_hat);
    ylim([-0.1 1.1])
    xlim([0 length(x)+1])
    a = 40;
    scatter(x, y, a, 'MarkerEdgeColor',[0 .2 .2],...
        'MarkerFaceColor',[0 .8 .8],...
        'LineWidth',1.5)
    xlabel('variable')
    ylabel('Prob. of inclusion')
    
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
        xlabel('One-step Forecast');
    end
    disp(' ')
    if save_mat == 'Y'
        disp('Model is stored in file named "VS_AC.mat"')
    end
    
elseif Model == 2
    
    clc
    exist = dir('VS_D.mat');
    test = isempty(exist);
    if test == 0
        disp(' ')
        disp('"VS_D.mat" is founded"')
        disp('Do you want to use the model in "VS_D.mat" ?')
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
        disp('Model: Dirac Spike in VS                     ')
        disp('=============================================')
        disp(' ')
        disp('[Data generating Process]')
        disp(' ')
        disp('Y | X,theta ~ Normal(mu + X_1*a_1 + ... + X_d*a_d, sigma2 * I(N,N))')
        disp(' ')
        disp('mu, sigma2 ~ Jeffrey(1/sigma2)')
        disp(' ')
        disp('omega ~ Beta(aw,bw)')
        disp('where, omega = Prob(Significant regressor|omega)')
        disp(' ')
        disp('{a_i}| theta ')
        disp(' ~ (g prior together for significant)*(dirac separately for insignificant)')
        disp(' ')
        disp('N: Number of observations, d: Number of Regressor except constant')
        disp(' ')
        disp('What column in the data matrix is the dependent variable?')
        disp(' ')
        x = input(' ');
        disp(' ')
        disp('Do you want to include constant term as regressor?')
        disp(' ')
        aux = input('type Y or N : ','s');
        if aux == 'Y'
            cons_option = 1;
        else
            cons_option = 0;
        end
        disp(' ')
        disp('Enter the Hyper-parameter according to the following form.')
        disp(' ')
        aw = input('aw: scalar = ');
        bw = input('bw: scalar = ');
        disp(' ')
        disp('Enter the simulation size according to the following form.')
        disp('Note: Simulation size = burn-in size + sampling size')
        disp(' ')
        n = input('[burn-in size, sampling size]= ');
        disp(' ')
        
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind); %#ok<*FNDSB>
        X = data(:,xind);
        
        disp(' ')
        disp('Do you want to save your model into "VS_D.mat" ?')
        disp(' ')
        save_mat = input('type Y or N : ','s');
        if save_mat == 'Y'
            save('VS_D.mat','x','cons_option','aw','bw','n')
            disp(' ')
            disp('Model is stored in file named "VS_D.mat"')
        end
    elseif load_hyper == 1
        Prior = load('VS_D.mat');
        x = Prior.x;
        n = Prior.n;
        cons_option = Prior.cons_option;
        aw = Prior.aw;
        bw = Prior.bw;
        k = cols(data);
        y = 1:k;
        z = y==x;
        yind = find(z);
        xind = find(z==0);
        Y = data(:,yind); %#ok<*FNDSB>
        X = data(:,xind);
        save_mat = 'N';
    end
    
    Output = VS_dirac_mex(Y,X,aw,bw,cons_option,n(1,1), n(1,2));

%     omegam = Output.omegam;
%     alpham = Output.alpham;
    gammam = Output.gammam;
%     sig2m = Output.sig2m;
%     mum = Output.mum;

    alpha = 0.05;
    maxac = 200;
    postmom_Gam = MHout0(gammam,alpha,maxac);
    Gam_hat = postmom_Gam(:, 2);
    y = Gam_hat;
    figure
    x = 1:length(Gam_hat);
    ylim([-0.1 1.1])
    xlim([0 length(x)+1])
    a = 40;
    scatter(x, y, a, 'MarkerEdgeColor',[0 .2 .2],...
        'MarkerFaceColor',[0 .8 .8],...
        'LineWidth',1.5)
    xlabel('variable')
    ylabel('Prob. of inclusion')
    
    disp(' ')
    if save_mat == 'Y'
        disp('Model is stored in file named "VS_D.mat"')
    end
    
end

end
function Output = main_MN(data)
clc
exist = dir('MN.mat');
test = isempty(exist);
if test == 0
    disp(' ')
    disp('"MN.mat" is founded"')
    disp('Do you want to use the model in "MN.mat" ?')
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
    disp('Model: Mixture Normal')
    disp('=============================================')
    disp(' ')
    disp('[Data generating Process]')
    disp(' ')
    disp('y_i | s_i,theta ~ Normal(mu(s = s_i), Sigma(s = s_i))')
    disp('y_i : D by 1, mu : D by 1 , Sigma : D by D')
    disp(' ')
    disp('mu(s) ~ Normal(beta_s, diag(sig2vector_s)')
    disp('beta_s : D by 1, sig2vector_s : D by 1')
    disp(' ')
    disp('D: Number of Dependent variables')
    disp(' ')
    disp('How many groups would you like to classify?')
    disp(' ')
    M = input('scalar : ');
    disp(' ')
    
    D = cols(data);
    disp('Enter the following hyper-parameter for each group.')
    disp(' ')
    beta_ = zeros(D, M);
    sig2vector_ = zeros(D, M);
    Sigma_ = zeros(D, D, M);
    for i = 1:M
        disp(['[Gruop ' num2str(i) ']'])
        beta_(:, i) = input(['beta_' num2str(i) ' : ' num2str(D) ' by 1 = ']);
        sig2vector_(:, i) = input(['sig2vector_' num2str(i) ' : ' num2str(D) ' by 1 = ']);
        disp(['Initial value of Sigma(' num2str(i) ') : ' num2str(D) ' by ' num2str(D)' ' = '])
        Sigma_(:, :, i) = input(' ');
        disp(' ')
    end
    disp(' ')
    disp('Enter the simulation size according to the following form.')
    disp('Note: Simulation size = burn-in size + sampling size')
    disp(' ')
    n = input('[burn-in size, sampling size]= ');
    disp(' ')
    k = cols(data);
    if k > 2
        disp('Which two variables will you plot based on?')
        disp('Enter the column number where the two variable is stored')
        disp(' ')
        plot = input('column vector: 2 by 1 = ');
        disp(' ')
    else
        plot = [1;2];
    end
    disp(' ')
    disp('Do you want to save your model into "MN.mat" ?')
    disp(' ')
    save_mat = input('type Y or N : ','s');
    if save_mat == 'Y'
        save('MN.mat','M','beta_','sig2vector_','Sigma_','n','plot')
        disp(' ')
        disp('Model is stored in file named  "MN.mat"')
    end
elseif load_hyper == 1
    Prior = load('MN.mat');
    M = Prior.M;
    beta_ = Prior.beta_;
    sig2vector_ = Prior.sig2vector_;
    Sigma_ = Prior.Sigma_;
    n = Prior.n;
    plot = Prior.plot;
    save_mat = 'N';
end

Output = Mixture_Normal_mex(data,M,beta_,sig2vector_,Sigma_,n(1,1),n(1,2));

mum = Output.mum;
% Sm = Output.Sm;
Sigmam = Output.Sigmam;
Post_beta = MHout0(mum, 0.05, 20);
k = cols(data);
Omega_hat = zeros(k^2, M);
for m = 1:M
    Omega_hat(:, m) = meanc(Sigmam(:, :, m));
end
disp('Organizing the results. Please wait...')
clc
disp(' ')
disp('Organizing the results. Please wait...')
disp(' ')
disp('=======================================')
fprintf('Current iteration: %G Percent Done\n',1*100/M);
disp('=======================================')
mu = Post_beta(1:k,2)'; %// data
mu = mu(1,plot');
sigma = reshape(Omega_hat(:, 1), k, k); %// data
sigma = sigma(plot,plot)';

x = minc(data(:,plot(1,1))):0.001:maxc(data(:,plot(1,1))); %// x axis
y = minc(data(:,plot(2,1))):0.001:maxc(data(:,plot(2,1))); %// y axis

[Xa, Ya] = meshgrid(x,y); %// all combinations of x, y
Z = mvnpdf([Xa(:) Ya(:)],mu,sigma); %// compute Gaussian pdf
Z = reshape(Z,size(Xa)); %// put into same size as X, Y


figure
contour(Xa,Ya,Z);  %// contour plot; set same scale for x and y...
xlabel([num2str(plot(1,1)) 'th variable'])
ylabel([num2str(plot(2,1)) 'th variable'])
k = cols(data);
for i = 2:M
    clc
    disp(' ')
    disp('Organizing the results. Please wait...')
    disp(' ')
    disp('=======================================')
    fprintf('Current iteration: %G Percent Done\n',i*100/M);
    disp('=======================================')
    hold on
    mu = Post_beta(k*(i-1)+1:k*i, 2)'; %// data
    mu = mu(1,plot');
    sigma = reshape(Omega_hat(:, i), k, k); %// data
    sigma = sigma(plot,plot);
    [Xa, Ya] = meshgrid(x,y); %// all combinations of x, y
    Z = mvnpdf([Xa(:) Ya(:)],mu,sigma); %// compute Gaussian pdf
    Z = reshape(Z,size(Xa)); %// put into same size as X, Y
    contour(Xa,Ya,Z);  %// contour plot; set same scale for x and y...
end
hold on
scatter(data(:,plot(1,1)), data(:,plot(2,1)),20,'k','filled','d');
disp(' ')
if save_mat == 'Y'
    disp('Model is stored in file named  "MN.mat"')
end
end
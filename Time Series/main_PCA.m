function Output = main_PCA(Data)
clc
format shortG

Output = PCA(Data);

P = Output.Principal_Component;
C = Output.Eigenvectors;
V = Output.Eigenvalues;
k = cols(Data);
T = rows(Data);

disp('===========================================================================================================');
disp('Model: Principal Component Analysis')
disp('-----------------------------------------------------------------------------------------------------------');
disp(['Mean of Data: ' num2str(mean(Data))])
disp('Covariance Matrix of Data: ')
disp(cov(Data))
disp('===========================================================================================================');
disp('[Principal Component]')
disp('index      Variance       Explaination-ratio(Accumulate-ratio)')
index = 1:k;
index = index';
diag_V = diag(V);
diag_Vk = diag(V)/k;
C_ = C';

blank1 = '    ';
if k > 1
   for i = 2:k
       blank1 = [blank1; '    ']; %#ok<AGROW>
   end
end

blank2 = '    ';
if k > 1
   for i = 2:k
       blank2 = [blank2; '    ']; %#ok<AGROW>
   end
end

blank3 = '            ';
if k > 1
   for i = 2:k
       blank3 = [blank3; '            ']; %#ok<AGROW>
   end
end

blank4 = '            ';
if k > 1
   for i = 2:k
       blank4 = [blank4; '            ']; %#ok<AGROW>
   end
end

blank5 = '     ';
if k > 1
   for i = 2:k
       blank5 = [blank5; '     ']; %#ok<AGROW>
   end
end

disp([blank1 num2str(index) blank2 num2str(diag_V) blank3 num2str(diag_Vk*100) blank4 num2str(cumsum(diag_Vk*100))])
disp('-----------------------------------------------------------------------------------------------------------');
disp('index     Coef of Linear Combination')
disp([blank1 num2str(index) blank5 num2str(C_) ])
disp('===========================================================================================================');
 
result_plot = Data;
npara = cols(result_plot);
m1 = round(sqrt(npara));
m2 = ceil(sqrt(npara));
figure('name','Data')
for i = 1:npara
    subplot(m1, m2, i);
    para = result_plot(:, i);
    plot(para);
    xlabel(['Data' num2str(i)])
    xlim([0 T+1])
end

result_plot = P;
npara = cols(result_plot);
m1 = round(sqrt(npara));
m2 = ceil(sqrt(npara));
diag_V = diag(V);
figure('name','Principal Component')
for i = 1:npara
    subplot(m1, m2, i);
    para = result_plot(:, i);
    plot(para);
    xlabel(['Variance: ' num2str(diag_V(i,1))])
    xlim([0 T+1])
end


end
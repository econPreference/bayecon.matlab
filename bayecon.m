function Output = bayecon(data)

clc
format shortG

oldpath = path;
folder = fileparts(which('bayecon'));
addpath(genpath(folder),'-begin');

disp(' ')
disp('/////////////////////////////////////////////')
disp('////////Bayesian Econometrics ToolBox////////')
disp('/////////////////////////////////////////////')
disp('Email : econ.preference@gmail.com ')
disp(' ')
disp('====================Model====================')
disp('1. Linear Regression')
disp('2. Time Series')
disp('3. State Space Model')
disp('4. Variable Selection')
disp('5. Mixture Normal')
disp('=============================================')
disp(' ')
disp('Which model would you like to choose?')
disp(' ')

Model = input(' ');

if Model == 1
    Output = Linear_Regression(data);
end

if Model == 2
    Output = Time_Series(data);
end

if Model == 3
    Output = SSM_main(data);
end

if Model == 4
    Output = VS_main(data);
end

if Model == 5
    Output = main_MN(data);
end

path(oldpath)

end
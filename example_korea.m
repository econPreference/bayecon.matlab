% 자료순서 = Data=[실업률 소비자물가등락률 M1(평잔)증감률 콜금리 CD유통수익률(91일)] 
% GDP증가율(실질,계절조정)   총저축률(명목, 계절조정)
% 1999M06:2018M06

clear;
clc;

Data = xlsread('kor_macro.xls','B2:F230');

un = Data(:,1);
inf = Data(:,2);
m1 = Data(:,3);
call = Data(:,4);
CD = Data(:,5);

grow = xlsread('kor_macro.xls','K2:K79');
sav = xlsread('kor_macro.xls','L2:L79');
% growth_int = interpol(growth,2);
% growth_int = growth_int(4:end,1);

% Data = [Data growth_int];

% clearvars Data_1
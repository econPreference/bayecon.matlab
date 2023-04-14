% 자료순서 = 실질 경제성장률, 실업률 1948:Q2 ~ 1987:Q4

clear;
clc;

Data = xlsread('quah.xlsx');

growth = Data(:,1);
un = Data(:,2);
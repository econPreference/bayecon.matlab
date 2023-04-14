function output = interpol(input,divide)
% input : 선형보간할 데이터
% divide : 각 구간마다 보간될 데이터의 수
% 예를 들어, 분기별 데이터를 통해 월별 데이터를 만들고자 하는 경우
% 각 분기 사이에 2개의 데이터가 만들어져야 하므로 (3과 6사이에 4,5 2개의 숫자가 존재)
% divide는 2이다.

T = rows(input);
t = 1:T;
data = input;
interval = 1:1/(1+divide):T;

output = spline(t,data,interval);
output = output';


end
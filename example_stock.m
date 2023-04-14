
% First column is return.
% Second column is stdev

Data = xlsread('data_daily_stock_return', 'Sheet1','A2:D1402');
n = Data(:,1);
r = Data(:,3);
sd = Data(:,4);
% demeaning vectors(데이터의 평균을 0으로 조정)
function [y] = demeanc(x)

rowsX = rows(x);
colsX = cols(x);
meanX = mean(x);
tmp = ones(rowsX,1);
y = x - tmp*meanX;

end
 


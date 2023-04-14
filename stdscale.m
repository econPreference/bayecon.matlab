function [Y] = stdscale(rawY,option)

% option
% 0: 평균, 분산 둘 다 정규화
% 1: 평균만 정규화
% 2: 분산만 정규화

if nargin == 1
   option = 0; 
end

T = rows(rawY);
k = cols(rawY);
std_Y = std(rawY);
st_Y = zeros(T,k);

if option == 0 || option == 2
    for i = 1:T
        st_Y(i,:) = rawY(i,:)./std_Y;
    end
end

if option == 0 || option == 1
    Y = demeanc(st_Y);
end

end
 



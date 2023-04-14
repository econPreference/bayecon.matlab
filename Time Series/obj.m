function fx = obj(vec_Binv,data)
k2 = rows(vec_Binv);
Binv = reshape(vec_Binv,sqrt(k2),sqrt(k2));
T = data(1,end);
Omega = data(1:sqrt(k2),1:sqrt(k2));
fx = -T*real(log(complex(det(Binv)))) - 0.5*T*trace((Binv*Binv')\(T*Omega));
end
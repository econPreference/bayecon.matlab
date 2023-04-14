function S = Gen_S(Y, betam, Omegam)

T = rows(Y);
S = zeros(T, 1);
M = cols(betam);
    for i = 1:T
        pdfym = zeros(M, 1);
        for m = 1:M
            pdfym_var = 0.5*(Omegam(:,:,m) + Omegam(:,:,m)');
            pdfym(m,1) = lnpdfmvn(Y(i, :)', betam(:, m), pdfym_var);
        end
        pdfym = exp(pdfym);
        pdf_s = pdfym/sumc(pdfym);
        S(i) = discret1(pdf_s, 1);
    end
    
end
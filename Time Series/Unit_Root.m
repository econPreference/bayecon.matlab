function [Output,ML_Un,ML_Re] = Unit_Root(Data,kk,vv,a0,d0,phi0_H0,PHI0_H0,phi0_H1,PHI0_H1,n0,n1,mode,q,a,b,c0,C0)

coder.extrinsic('format')
coder.extrinsic('clc')
coder.extrinsic('SWZ')

%% Estimating y(t) = phi*y(t-1) + error, error~I(0)

Y = X_lag(Data,0,1);
X = X_lag(Data,1,1);

subOutput = Auto_Unit_Re([Y X],a0,d0,phi0_H0,PHI0_H0,n0,n1,c0,C0);
phim = subOutput.phim;
sig2m = subOutput.sigma2m;
logpostm = subOutput.logpostm;
cm = subOutput.cm;
MHm = [cm phim sig2m];
ML_Re = SWZ(MHm,logpostm,q);
            
Output = Auto_Unit([Y X],kk,vv,a0,d0,phi0_H1,PHI0_H1,n0,n1,mode,a,b,c0,C0);
betam = Output.betam;
phim = Output.phim;
sig2m = Output.sigma2m;
logpostm = Output.logpostm;
cm = Output.cm;
MHm = [cm betam phim sig2m];
ML_Un = SWZ(MHm,logpostm,q);

end
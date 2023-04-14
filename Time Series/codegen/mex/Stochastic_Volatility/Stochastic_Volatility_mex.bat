@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Stochastic_Volatility_mex
set MEX_NAME=Stochastic_Volatility_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Stochastic_Volatility > Stochastic_Volatility_mex.mki
echo COMPILER=%COMPILER%>> Stochastic_Volatility_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Stochastic_Volatility_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Stochastic_Volatility_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Stochastic_Volatility_mex.mki
echo LINKER=%LINKER%>> Stochastic_Volatility_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Stochastic_Volatility_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Stochastic_Volatility_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Stochastic_Volatility_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Stochastic_Volatility_mex.mki
echo OMPFLAGS= >> Stochastic_Volatility_mex.mki
echo OMPLINKFLAGS= >> Stochastic_Volatility_mex.mki
echo EMC_COMPILER=lcc64>> Stochastic_Volatility_mex.mki
echo EMC_CONFIG=optim>> Stochastic_Volatility_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f Stochastic_Volatility_mex.mk

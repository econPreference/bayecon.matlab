@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=ARMA_X_mex
set MEX_NAME=ARMA_X_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for ARMA_X > ARMA_X_mex.mki
echo COMPILER=%COMPILER%>> ARMA_X_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> ARMA_X_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> ARMA_X_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> ARMA_X_mex.mki
echo LINKER=%LINKER%>> ARMA_X_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> ARMA_X_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> ARMA_X_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> ARMA_X_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> ARMA_X_mex.mki
echo OMPFLAGS= >> ARMA_X_mex.mki
echo OMPLINKFLAGS= >> ARMA_X_mex.mki
echo EMC_COMPILER=lcc64>> ARMA_X_mex.mki
echo EMC_CONFIG=optim>> ARMA_X_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f ARMA_X_mex.mk

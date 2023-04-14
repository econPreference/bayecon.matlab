@echo off
set MATLAB=D:\MATLAB\R2015b
set MATLAB_ARCH=win32
set MATLAB_BIN="D:\MATLAB\R2015b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=IV_Regression_mex
set MEX_NAME=IV_Regression_mex
set MEX_EXT=.mexw32
call setEnv.bat
echo # Make settings for IV_Regression > IV_Regression_mex.mki
echo COMPILER=%COMPILER%>> IV_Regression_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> IV_Regression_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> IV_Regression_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> IV_Regression_mex.mki
echo LINKER=%LINKER%>> IV_Regression_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> IV_Regression_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> IV_Regression_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> IV_Regression_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> IV_Regression_mex.mki
echo BORLAND=%BORLAND%>> IV_Regression_mex.mki
echo OMPFLAGS= >> IV_Regression_mex.mki
echo OMPLINKFLAGS= >> IV_Regression_mex.mki
echo EMC_COMPILER=lcc>> IV_Regression_mex.mki
echo EMC_CONFIG=optim>> IV_Regression_mex.mki
"D:\MATLAB\R2015b\bin\win32\gmake" -B -f IV_Regression_mex.mk

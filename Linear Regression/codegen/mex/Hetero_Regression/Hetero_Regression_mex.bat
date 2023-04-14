@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Hetero_Regression_mex
set MEX_NAME=Hetero_Regression_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Hetero_Regression > Hetero_Regression_mex.mki
echo COMPILER=%COMPILER%>> Hetero_Regression_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Hetero_Regression_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Hetero_Regression_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Hetero_Regression_mex.mki
echo LINKER=%LINKER%>> Hetero_Regression_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Hetero_Regression_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Hetero_Regression_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Hetero_Regression_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Hetero_Regression_mex.mki
echo OMPFLAGS= >> Hetero_Regression_mex.mki
echo OMPLINKFLAGS= >> Hetero_Regression_mex.mki
echo EMC_COMPILER=lcc64>> Hetero_Regression_mex.mki
echo EMC_CONFIG=optim>> Hetero_Regression_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f Hetero_Regression_mex.mk

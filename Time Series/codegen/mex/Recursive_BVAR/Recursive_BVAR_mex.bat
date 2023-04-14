@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Recursive_BVAR_mex
set MEX_NAME=Recursive_BVAR_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Recursive_BVAR > Recursive_BVAR_mex.mki
echo COMPILER=%COMPILER%>> Recursive_BVAR_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Recursive_BVAR_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Recursive_BVAR_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Recursive_BVAR_mex.mki
echo LINKER=%LINKER%>> Recursive_BVAR_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Recursive_BVAR_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Recursive_BVAR_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Recursive_BVAR_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Recursive_BVAR_mex.mki
echo OMPFLAGS= >> Recursive_BVAR_mex.mki
echo OMPLINKFLAGS= >> Recursive_BVAR_mex.mki
echo EMC_COMPILER=lcc64>> Recursive_BVAR_mex.mki
echo EMC_CONFIG=optim>> Recursive_BVAR_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f Recursive_BVAR_mex.mk

@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Mixture_Normal_mex
set MEX_NAME=Mixture_Normal_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Mixture_Normal > Mixture_Normal_mex.mki
echo COMPILER=%COMPILER%>> Mixture_Normal_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Mixture_Normal_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Mixture_Normal_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Mixture_Normal_mex.mki
echo LINKER=%LINKER%>> Mixture_Normal_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Mixture_Normal_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Mixture_Normal_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Mixture_Normal_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Mixture_Normal_mex.mki
echo OMPFLAGS= >> Mixture_Normal_mex.mki
echo OMPLINKFLAGS= >> Mixture_Normal_mex.mki
echo EMC_COMPILER=lcc64>> Mixture_Normal_mex.mki
echo EMC_CONFIG=optim>> Mixture_Normal_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f Mixture_Normal_mex.mk

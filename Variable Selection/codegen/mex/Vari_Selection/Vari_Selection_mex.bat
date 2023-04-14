@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Vari_Selection_mex
set MEX_NAME=Vari_Selection_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Vari_Selection > Vari_Selection_mex.mki
echo COMPILER=%COMPILER%>> Vari_Selection_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Vari_Selection_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Vari_Selection_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Vari_Selection_mex.mki
echo LINKER=%LINKER%>> Vari_Selection_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Vari_Selection_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Vari_Selection_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Vari_Selection_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Vari_Selection_mex.mki
echo OMPFLAGS= >> Vari_Selection_mex.mki
echo OMPLINKFLAGS= >> Vari_Selection_mex.mki
echo EMC_COMPILER=lcc64>> Vari_Selection_mex.mki
echo EMC_CONFIG=optim>> Vari_Selection_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f Vari_Selection_mex.mk

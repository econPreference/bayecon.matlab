@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Markov_Switching_mex
set MEX_NAME=Markov_Switching_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Markov_Switching > Markov_Switching_mex.mki
echo COMPILER=%COMPILER%>> Markov_Switching_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Markov_Switching_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Markov_Switching_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Markov_Switching_mex.mki
echo LINKER=%LINKER%>> Markov_Switching_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Markov_Switching_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Markov_Switching_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Markov_Switching_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Markov_Switching_mex.mki
echo OMPFLAGS= >> Markov_Switching_mex.mki
echo OMPLINKFLAGS= >> Markov_Switching_mex.mki
echo EMC_COMPILER=lcc64>> Markov_Switching_mex.mki
echo EMC_CONFIG=optim>> Markov_Switching_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f Markov_Switching_mex.mk

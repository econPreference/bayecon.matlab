START_DIR = D:\Matlab_code\Bayecon\Linear Regression

MATLAB_ROOT = D:\MATLAB\R2015b
MAKEFILE = IV_Regression_mex.mk

include IV_Regression_mex.mki


SRC_FILES =  \
	IV_Regression_mexutil.c \
	IV_Regression_data.c \
	IV_Regression_initialize.c \
	IV_Regression_terminate.c \
	IV_Regression.c \
	invpd.c \
	cholmod.c \
	abs.c \
	eml_int_forloop_overflow_check.c \
	sum.c \
	isequal.c \
	combine_vector_elements.c \
	error.c \
	diag.c \
	rdivide.c \
	sqrt.c \
	error1.c \
	eye.c \
	assertValidSizeArg.c \
	mpower.c \
	invuptr.c \
	inv.c \
	xgetrf.c \
	norm.c \
	warning.c \
	kron.c \
	minresid.c \
	fprintf.c \
	randwishart.c \
	randn.c \
	vec.c \
	xpotrf.c \
	lnpdfmvn.c \
	lnpdfig.c \
	gammaln.c \
	cov.c \
	_coder_IV_Regression_info.c \
	_coder_IV_Regression_api.c \
	_coder_IV_Regression_mex.c \
	IV_Regression_emxutil.c

MEX_FILE_NAME_WO_EXT = IV_Regression_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw32
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = libmwlapack.lib 


#
#====================================================================
# gmake makefile fragment for building MEX functions using LCC
# Copyright 2007-2012 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLIST += $(SRC_FILES:.c=.$(OBJEXT))
MEXSTUB = $(MEX_FILE_NAME_WO_EXT)2.$(OBJEXT)
LCCSTUB = $(MEX_FILE_NAME_WO_EXT)_lccstub.$(OBJEXT)

target: $(TARGET)

ML_INCLUDES = -I"$(MATLAB_ROOT)\simulink\include"
ML_INCLUDES+= -I"$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I"$(START_DIR)"
SYS_INCLUDE += -I"$(START_DIR)\codegen\mex\IV_Regression"
SYS_INCLUDE += -I".\interface"
SYS_INCLUDE += -I"D:\Matlab_code\Bayecon\Linear"
SYS_INCLUDE += -I"$(START_DIR)\Regression"
SYS_INCLUDE += -I"$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += -I"."

EML_LIBS = libemlrt.lib libcovrt.lib libut.lib libmwblas.lib libmwmathutil.lib
SYS_LIBS += $(EML_LIBS)

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.def

COMP_FLAGS = $(COMPFLAGS) -DMX_COMPAT_32
LINK_FLAGS0= $(subst $(MEXSTUB),$(LCCSTUB),$(LINKFLAGS))
LINK_FLAGS = $(filter-out "%mexFunction.def", $(LINK_FLAGS0))

ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -libpath "$(MATLAB_ROOT)\extern\lib\win32\lcc"

CFLAGS =  -DHAVE_LAPACK_CONFIG_H -DLAPACK_COMPLEX_STRUCTURE -DMW_HAVE_LAPACK_DECLS $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\IV_Regression/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"



$(LCCSTUB) : $(MATLAB_ROOT)\sys\lcc\mex\lccstub.c
	$(CC) -Fo$(LCCSTUB) $(CFLAGS) "$<"

$(TARGET): $(OBJLIST) $(LCCSTUB) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(OBJLIST) $(LINK_FLAGS) $(LINKFLAGSPOST) $(SYS_LIBS) $(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================


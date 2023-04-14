START_DIR = D:\Matlab_code\Bayecon\State Space Model

MATLAB_ROOT = D:\MATLAB\R2015b
MAKEFILE = ARMA_X_mex.mk

include ARMA_X_mex.mki


SRC_FILES =  \
	ARMA_X_mexutil.c \
	ARMA_X_data.c \
	ARMA_X_initialize.c \
	ARMA_X_terminate.c \
	ARMA_X.c \
	mean.c \
	isequal.c \
	combine_vector_elements.c \
	eml_int_forloop_overflow_check.c \
	demeanc.c \
	invpd.c \
	cholmod.c \
	abs.c \
	sum.c \
	error.c \
	diag.c \
	scalexpAlloc.c \
	isnan.c \
	sqrt.c \
	error1.c \
	eye.c \
	assertValidSizeArg.c \
	isfinite.c \
	mpower.c \
	power.c \
	invuptr.c \
	minresid.c \
	fprintf.c \
	kron.c \
	inv.c \
	xgetrf.c \
	norm.c \
	warning.c \
	vec.c \
	lnpdfmvn.c \
	randn.c \
	indexShapeCheck.c \
	eig.c \
	xpotrf.c \
	lnpdfig.c \
	gammaln.c \
	cov.c \
	_coder_ARMA_X_info.c \
	_coder_ARMA_X_api.c \
	_coder_ARMA_X_mex.c \
	ARMA_X_emxutil.c

MEX_FILE_NAME_WO_EXT = ARMA_X_mex
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
SYS_INCLUDE += -I"$(START_DIR)\codegen\mex\ARMA_X"
SYS_INCLUDE += -I".\interface"
SYS_INCLUDE += -I"D:\Matlab_code\Bayecon\State"
SYS_INCLUDE += -I"$(START_DIR)\Model"
SYS_INCLUDE += -I"$(START_DIR)\Space"
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

%.$(OBJEXT) : $(START_DIR)\codegen\mex\ARMA_X/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"



$(LCCSTUB) : $(MATLAB_ROOT)\sys\lcc\mex\lccstub.c
	$(CC) -Fo$(LCCSTUB) $(CFLAGS) "$<"

$(TARGET): $(OBJLIST) $(LCCSTUB) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(OBJLIST) $(LINK_FLAGS) $(LINKFLAGSPOST) $(SYS_LIBS) $(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================


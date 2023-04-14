START_DIR = C:\Users\smith\DOCUME~1\MATLAB\Bayecon\LINEAR~1

MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2018a
MAKEFILE = Hetero_Regression_mex.mk

include Hetero_Regression_mex.mki


SRC_FILES =  \
	Hetero_Regression_mexutil.c \
	Hetero_Regression_data.c \
	Hetero_Regression_initialize.c \
	Hetero_Regression_terminate.c \
	Hetero_Regression.c \
	invpd.c \
	cholmod.c \
	abs.c \
	eml_int_forloop_overflow_check.c \
	sum.c \
	isequal.c \
	combineVectorElements.c \
	error.c \
	diag.c \
	rdivide.c \
	sqrt.c \
	error1.c \
	eye.c \
	mpower.c \
	invuptr.c \
	stdc.c \
	xpotrf.c \
	randgam.c \
	randg.c \
	log.c \
	warning.c \
	randmvt.c \
	indexShapeCheck.c \
	lnpdfmvn.c \
	xgetrf.c \
	lnpdfig.c \
	gammaln.c \
	cov.c \
	_coder_Hetero_Regression_info.c \
	_coder_Hetero_Regression_api.c \
	_coder_Hetero_Regression_mex.c \
	Hetero_Regression_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = Hetero_Regression_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = libmwblas.lib libmwlapack.lib 


#
#====================================================================
# gmake makefile fragment for building MEX functions using LCC
# Copyright 2007-2016 The MathWorks, Inc.
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

LCC_ROOT = $(MATLAB_ROOT)\sys\lcc64\lcc64

# Additional includes

SYS_INCLUDE += -I"$(START_DIR)\codegen\mex\Hetero_Regression"
SYS_INCLUDE += -I"$(START_DIR)"
SYS_INCLUDE += -I".\interface"
SYS_INCLUDE += -I"$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += -I"."

EML_LIBS = libemlrt.lib libcovrt.lib libut.lib libmwmathutil.lib
SYS_LIBS += $(EML_LIBS)

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.def

COMP_FLAGS = $(COMPFLAGS)
LINK_FLAGS0= $(subst $(MEXSTUB),$(LCCSTUB),$(LINKFLAGS))
LINK_FLAGS = $(filter-out "mexFunction.def", $(LINK_FLAGS0))


ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -L"$(MATLAB_ROOT)\extern\lib\win64\microsoft"

CFLAGS = $(COMP_FLAGS)  -DHAVE_LAPACK_CONFIG_H -DLAPACK_COMPLEX_STRUCTURE -DMW_HAVE_LAPACK_DECLS  $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\Hetero_Regression/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"



$(LCCSTUB) : $(LCC_ROOT)\mex\lccstub.c
	$(CC) -Fo$(LCCSTUB) $(CFLAGS) "$<"

$(TARGET): $(OBJLIST) $(LCCSTUB) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(OBJLIST) $(LINK_FLAGS) $(LINKFLAGSPOST) $(SYS_LIBS) $(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================


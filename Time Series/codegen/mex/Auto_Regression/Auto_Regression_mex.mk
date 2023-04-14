START_DIR = C:\Users\smith\DOCUME~1\MATLAB\BAYECO~1\TIMESE~1

MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2018a
MAKEFILE = Auto_Regression_mex.mk

include Auto_Regression_mex.mki


SRC_FILES =  \
	Auto_Regression_mexutil.c \
	Auto_Regression_data.c \
	Auto_Regression_initialize.c \
	Auto_Regression_terminate.c \
	Auto_Regression.c \
	invpd.c \
	cholmod.c \
	abs.c \
	eml_int_forloop_overflow_check.c \
	sum.c \
	isequal.c \
	combineVectorElements.c \
	error.c \
	diag.c \
	sqrt.c \
	error1.c \
	eye.c \
	assertValidSizeArg.c \
	mpower.c \
	power.c \
	stdc.c \
	kron.c \
	inv.c \
	xgetrf.c \
	norm.c \
	warning.c \
	vec.c \
	xpotrf.c \
	randn.c \
	scalexpAlloc.c \
	log.c \
	eig.c \
	anyNonFinite.c \
	schur.c \
	xgehrd.c \
	xdlanv2.c \
	det.c \
	lnpdfmvn.c \
	indexShapeCheck.c \
	lnpdfig.c \
	gammaln.c \
	meanc.c \
	cov.c \
	_coder_Auto_Regression_info.c \
	_coder_Auto_Regression_api.c \
	_coder_Auto_Regression_mex.c \
	Auto_Regression_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = Auto_Regression_mex
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

SYS_INCLUDE += -I"$(START_DIR)\codegen\mex\Auto_Regression"
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

%.$(OBJEXT) : $(START_DIR)\codegen\mex\Auto_Regression/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"



$(LCCSTUB) : $(LCC_ROOT)\mex\lccstub.c
	$(CC) -Fo$(LCCSTUB) $(CFLAGS) "$<"

$(TARGET): $(OBJLIST) $(LCCSTUB) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(OBJLIST) $(LINK_FLAGS) $(LINKFLAGSPOST) $(SYS_LIBS) $(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================


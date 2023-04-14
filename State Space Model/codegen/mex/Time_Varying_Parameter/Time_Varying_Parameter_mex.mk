START_DIR = D:\Matlab_code\Bayecon\State Space Model

MATLAB_ROOT = D:\MATLAB\R2015b
MAKEFILE = Time_Varying_Parameter_mex.mk

include Time_Varying_Parameter_mex.mki


SRC_FILES =  \
	Time_Varying_Parameter_mexutil.c \
	Time_Varying_Parameter_data.c \
	Time_Varying_Parameter_initialize.c \
	Time_Varying_Parameter_terminate.c \
	Time_Varying_Parameter.c \
	inv.c \
	xgetrf.c \
	eml_int_forloop_overflow_check.c \
	scalexpAlloc.c \
	assertValidSizeArg.c \
	error.c \
	abs.c \
	rdivide.c \
	norm.c \
	warning.c \
	isequal.c \
	mpower.c \
	power.c \
	minresid.c \
	fprintf.c \
	eye.c \
	invpd.c \
	cholmod.c \
	sum.c \
	combine_vector_elements.c \
	error1.c \
	diag.c \
	sqrt.c \
	invuptr.c \
	lnpdfmvn.c \
	det.c \
	randn.c \
	xpotrf.c \
	randwishart.c \
	vec.c \
	lnpdfwishart.c \
	logMvGamma.c \
	gammaln.c \
	cov.c \
	_coder_Time_Varying_Parameter_info.c \
	_coder_Time_Varying_Parameter_api.c \
	_coder_Time_Varying_Parameter_mex.c \
	Time_Varying_Parameter_emxutil.c

MEX_FILE_NAME_WO_EXT = Time_Varying_Parameter_mex
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
SYS_INCLUDE += -I"$(START_DIR)\codegen\mex\Time_Varying_Parameter"
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

%.$(OBJEXT) : $(START_DIR)\codegen\mex\Time_Varying_Parameter/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"



$(LCCSTUB) : $(MATLAB_ROOT)\sys\lcc\mex\lccstub.c
	$(CC) -Fo$(LCCSTUB) $(CFLAGS) "$<"

$(TARGET): $(OBJLIST) $(LCCSTUB) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(OBJLIST) $(LINK_FLAGS) $(LINKFLAGSPOST) $(SYS_LIBS) $(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================


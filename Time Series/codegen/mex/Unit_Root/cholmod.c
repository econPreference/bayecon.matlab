/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cholmod.c
 *
 * Code generation for function 'cholmod'
 *
 */

/* Include files */
#include "cholmod.h"
#include "Auto_Unit.h"
#include "Auto_Unit_Re.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "abs.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "eye.h"
#include "mtimes.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sum.h"

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = { 32, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 34, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 40, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 41, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 42, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 43, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 44, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 53, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 62, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 64, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 65, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 66, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 69, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 72, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 80, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 14, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 145,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 1019,/* lineNo */
  "maxRealVectorOmitNaN",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 932,/* lineNo */
  "minOrMaxRealVector",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 924,/* lineNo */
  "minOrMaxRealVector",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 975,/* lineNo */
  "findFirst",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 992,/* lineNo */
  "minOrMaxRealVectorKernel",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 326,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 394,/* lineNo */
  "minOrMax2D",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 476,/* lineNo */
  "minOrMax2DColumnMajorDim1",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 474,/* lineNo */
  "minOrMax2DColumnMajorDim1",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtMCInfo w_emlrtMCI = { 27,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  23,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  11,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  29,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 65,  /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  18,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  45,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  35,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  33,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  26,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  32,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { 2,   /* nDims */
  42,                                  /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  25,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  41,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  20,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  65,                                  /* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  65,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  13,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  70,                                  /* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  10,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  18,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  9,                                   /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  80,                                  /* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 26,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 32,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 32,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 42,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 394,/* lineNo */
  14,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 145,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 49,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 60,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 82,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 62,/* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 62,/* lineNo */
  39,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 80,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 62,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 62,/* lineNo */
  23,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 62,/* lineNo */
  27,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 64,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 65,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 65,/* lineNo */
  41,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 65,/* lineNo */
  35,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 65,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 65,/* lineNo */
  25,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 65,/* lineNo */
  29,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 65,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 70,/* lineNo */
  11,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 51,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 65,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 41,/* lineNo */
  13,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 42,/* lineNo */
  10,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 42,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRSInfo wo_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* Function Declarations */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void cholmod(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *R,
             real_T *err)
{
  emxArray_real_T *L;
  int32_T i;
  int32_T idx;
  int32_T loop_ub;
  int32_T m;
  emxArray_real_T *maxval;
  emxArray_real_T *varargin_1;
  const mxArray *y;
  int32_T n;
  const mxArray *b_m;
  static const int32_T iv[2] = { 1, 18 };

  static const char_T b_varargin_1[18] = { 'A', ' ', 'i', 's', ' ', 'n', 'o',
    't', ' ', 's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c' };

  emxArray_real_T *diagA;
  emxArray_real_T *c_varargin_1;
  int32_T b_n;
  real_T b_gamma;
  boolean_T exitg1;
  real_T d;
  int32_T j;
  real_T theta;
  real_T xi;
  real_T delta;
  real_T d_varargin_1[3];
  emxArray_real_T *b_d;
  emxArray_int32_T *K;
  emxArray_real_T *b_I;
  emxArray_real_T *Ccol;
  emxArray_int32_T *b_K;
  int32_T b_L[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &L, 2, &of_emlrtRTEI, true);

  /*  function [R, indef, E, err] = cholmod(A) */
  /*  CHOLMOD Modified Cholesky factorization */
  /*   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL) */
  /*   if A is (sufficiently) positive definite, and otherwise returns a  */
  /*   modified factor R with diagonal enries >= sqrt(delta) and */
  /*   offdiagonal entries <= beta in absolute value, */
  /*   where delta and beta are defined in terms of size of diagonal and */
  /*   offdiagonal entries of A and the machine precision; see below. */
  /*   The idea is to ensure that E = A - R'*R is reasonably small if A is  */
  /*   not too far from being indefinite.  If A is sparse, so is R. */
  /*   The output parameter indef is set to 0 if A is sufficiently positive */
  /*   definite and to 1 if the factorization is modified. */
  /*  */
  /*   The point of modified Cholesky is to avoid computing eigenvalues,  */
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in  */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  i = L->size[0] * L->size[1];
  L->size[0] = A->size[1];
  L->size[1] = A->size[0];
  emxEnsureCapacity_real_T(sp, L, i, &pe_emlrtRTEI);
  idx = A->size[0];
  for (i = 0; i < idx; i++) {
    loop_ub = A->size[1];
    for (m = 0; m < loop_ub; m++) {
      L->data[m + L->size[0] * i] = A->data[i + A->size[0] * m];
    }
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A->size, *(int32_T (*)[2])L->size,
    &n_emlrtECI, sp);
  i = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i, &qe_emlrtRTEI);
  idx = A->size[1];
  for (i = 0; i < idx; i++) {
    loop_ub = A->size[0];
    for (m = 0; m < loop_ub; m++) {
      L->data[m + L->size[0] * i] = A->data[m + A->size[0] * i] - A->data[i +
        A->size[0] * m];
    }
  }

  emxInit_real_T(sp, &maxval, 2, &rf_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &sf_emlrtRTEI, true);
  st.site = &wb_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &wb_emlrtRSI;
  sum(&st, varargin_1, maxval);
  st.site = &wb_emlrtRSI;
  if (b_sum(&st, maxval) > 0.0) {
    st.site = &xb_emlrtRSI;
    y = NULL;
    b_m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 18, b_m, &b_varargin_1[0]);
    emlrtAssign(&y, b_m);
    b_st.site = &wo_emlrtRSI;
    error(&b_st, y, &w_emlrtMCI);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }

  emxInit_real_T(sp, &diagA, 1, &nf_emlrtRTEI, true);
  emxInit_real_T(sp, &c_varargin_1, 1, &qf_emlrtRTEI, true);
  st.site = &yb_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &ac_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  c_abs(&b_st, diagA, c_varargin_1);
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (c_varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &wc_emlrtRSI;
  f_st.site = &xc_emlrtRSI;
  b_n = c_varargin_1->size[0];
  if (c_varargin_1->size[0] <= 2) {
    if (c_varargin_1->size[0] == 1) {
      b_gamma = c_varargin_1->data[0];
    } else if ((c_varargin_1->data[0] < c_varargin_1->data[1]) ||
               (muDoubleScalarIsNaN(c_varargin_1->data[0]) &&
                (!muDoubleScalarIsNaN(c_varargin_1->data[1])))) {
      b_gamma = c_varargin_1->data[1];
    } else {
      b_gamma = c_varargin_1->data[0];
    }
  } else {
    g_st.site = &ad_emlrtRSI;
    if (!muDoubleScalarIsNaN(c_varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &bd_emlrtRSI;
      if (c_varargin_1->size[0] > 2147483646) {
        i_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      m = 2;
      exitg1 = false;
      while ((!exitg1) && (m <= c_varargin_1->size[0])) {
        if (!muDoubleScalarIsNaN(c_varargin_1->data[m - 1])) {
          idx = m;
          exitg1 = true;
        } else {
          m++;
        }
      }
    }

    if (idx == 0) {
      b_gamma = c_varargin_1->data[0];
    } else {
      g_st.site = &yc_emlrtRSI;
      b_gamma = c_varargin_1->data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &cd_emlrtRSI;
      if ((idx + 1 <= c_varargin_1->size[0]) && (c_varargin_1->size[0] >
           2147483646)) {
        i_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (m = loop_ub; m <= b_n; m++) {
        d = c_varargin_1->data[m - 1];
        if (b_gamma < d) {
          b_gamma = d;
        }
      }
    }
  }

  /*  max diagonal entry */
  st.site = &bc_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A->size, *(int32_T (*)[2])
    varargin_1->size, &o_emlrtECI, sp);
  st.site = &bc_emlrtRSI;
  i = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&st, L, i, &re_emlrtRTEI);
  idx = A->size[0] * A->size[1];
  for (i = 0; i < idx; i++) {
    L->data[i] = A->data[i] - varargin_1->data[i];
  }

  b_st.site = &bc_emlrtRSI;
  b_abs(&b_st, L, varargin_1);
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (((varargin_1->size[0] != 1) || (varargin_1->size[1] != 1)) &&
      (varargin_1->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &l_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ed_emlrtRSI;
  f_st.site = &fd_emlrtRSI;
  g_st.site = &gd_emlrtRSI;
  m = varargin_1->size[0];
  b_n = varargin_1->size[1];
  i = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&g_st, maxval, i, &se_emlrtRTEI);
  if (varargin_1->size[1] >= 1) {
    h_st.site = &id_emlrtRSI;
    if (varargin_1->size[1] > 2147483646) {
      i_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (j = 0; j < b_n; j++) {
      maxval->data[j] = varargin_1->data[varargin_1->size[0] * j];
      h_st.site = &hd_emlrtRSI;
      if ((2 <= m) && (m > 2147483646)) {
        i_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (idx = 2; idx <= m; idx++) {
        theta = maxval->data[j];
        xi = varargin_1->data[(idx + varargin_1->size[0] * j) - 1];
        if ((!muDoubleScalarIsNaN(xi)) && (muDoubleScalarIsNaN(theta) || (theta <
              xi))) {
          maxval->data[j] = xi;
        }
      }
    }
  }

  st.site = &bc_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (maxval->size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &wc_emlrtRSI;
  f_st.site = &xc_emlrtRSI;
  b_n = maxval->size[1];
  if (maxval->size[1] <= 2) {
    if (maxval->size[1] == 1) {
      xi = maxval->data[0];
    } else if ((maxval->data[0] < maxval->data[1]) || (muDoubleScalarIsNaN
                (maxval->data[0]) && (!muDoubleScalarIsNaN(maxval->data[1])))) {
      xi = maxval->data[1];
    } else {
      xi = maxval->data[0];
    }
  } else {
    g_st.site = &ad_emlrtRSI;
    if (!muDoubleScalarIsNaN(maxval->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &bd_emlrtRSI;
      if (maxval->size[1] > 2147483646) {
        i_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      m = 2;
      exitg1 = false;
      while ((!exitg1) && (m <= maxval->size[1])) {
        if (!muDoubleScalarIsNaN(maxval->data[m - 1])) {
          idx = m;
          exitg1 = true;
        } else {
          m++;
        }
      }
    }

    if (idx == 0) {
      xi = maxval->data[0];
    } else {
      g_st.site = &yc_emlrtRSI;
      xi = maxval->data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &cd_emlrtRSI;
      if ((idx + 1 <= maxval->size[1]) && (maxval->size[1] > 2147483646)) {
        i_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (m = loop_ub; m <= b_n; m++) {
        d = maxval->data[m - 1];
        if (xi < d) {
          xi = d;
        }
      }
    }
  }

  /*  max off-diagonal entry */
  st.site = &cc_emlrtRSI;
  theta = b_gamma + xi;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  e_st.site = &wc_emlrtRSI;
  f_st.site = &xc_emlrtRSI;
  if ((theta < 1.0) || muDoubleScalarIsNaN(theta)) {
    theta = 1.0;
  }

  delta = 2.2204460492503131E-16 * theta;
  st.site = &dc_emlrtRSI;
  d_varargin_1[0] = b_gamma;
  theta = xi / (real_T)n;
  d_varargin_1[1] = theta;
  d_varargin_1[2] = 2.2204460492503131E-16;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  e_st.site = &wc_emlrtRSI;
  i = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = 3;
  emxEnsureCapacity_real_T(&e_st, maxval, i, &te_emlrtRTEI);
  maxval->data[0] = b_gamma;
  maxval->data[1] = theta;
  maxval->data[2] = 2.2204460492503131E-16;
  f_st.site = &xc_emlrtRSI;
  g_st.site = &ad_emlrtRSI;
  if (!muDoubleScalarIsNaN(maxval->data[0])) {
    idx = 1;
  } else {
    idx = 0;
    h_st.site = &bd_emlrtRSI;
    m = 2;
    exitg1 = false;
    while ((!exitg1) && (m <= 3)) {
      if (!muDoubleScalarIsNaN(maxval->data[m - 1])) {
        idx = m;
        exitg1 = true;
      } else {
        m++;
      }
    }
  }

  if (idx != 0) {
    g_st.site = &yc_emlrtRSI;
    b_gamma = d_varargin_1[idx - 1];
    loop_ub = idx + 1;
    h_st.site = &cd_emlrtRSI;
    for (m = loop_ub; m < 4; m++) {
      d = d_varargin_1[m - 1];
      if (b_gamma < d) {
        b_gamma = d;
      }
    }
  }

  emxInit_real_T(&f_st, &b_d, 1, &ue_emlrtRTEI, true);
  st.site = &dc_emlrtRSI;
  if (b_gamma < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  b_gamma = muDoubleScalarSqrt(b_gamma);

  /*  initialize d and L */
  i = b_d->size[0];
  b_d->size[0] = n;
  emxEnsureCapacity_real_T(sp, b_d, i, &ue_emlrtRTEI);
  for (i = 0; i < n; i++) {
    b_d->data[i] = 0.0;
  }

  st.site = &ec_emlrtRSI;
  eye(&st, n, L);

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  emxInit_int32_T(sp, &K, 2, &ve_emlrtRTEI, true);
  emxInit_real_T(sp, &b_I, 2, &ef_emlrtRTEI, true);
  emxInit_real_T(sp, &Ccol, 1, &pf_emlrtRTEI, true);
  emxInit_int32_T(sp, &b_K, 1, &bf_emlrtRTEI, true);
  for (j = 0; j < n; j++) {
    if (j < 1) {
      K->size[0] = 1;
      K->size[1] = 0;
    } else {
      i = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_int32_T(sp, K, i, &ve_emlrtRTEI);
      for (i = 0; i < j; i++) {
        K->data[i] = i + 1;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    idx = K->size[1];
    i = c_varargin_1->size[0];
    c_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, c_varargin_1, i, &xe_emlrtRTEI);
    for (i = 0; i < idx; i++) {
      if ((K->data[i] < 1) || (K->data[i] > b_d->size[0])) {
        emlrtDynamicBoundsCheckR2012b(K->data[i], 1, b_d->size[0], &ic_emlrtBCI,
          sp);
      }

      c_varargin_1->data[i] = b_d->data[K->data[i] - 1];
    }

    i = j + 1;
    if ((i < 1) || (i > L->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, L->size[0], &lc_emlrtBCI, sp);
    }

    idx = K->size[1];
    i = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, diagA, i, &ye_emlrtRTEI);
    for (i = 0; i < idx; i++) {
      if ((K->data[i] < 1) || (K->data[i] > L->size[1])) {
        emlrtDynamicBoundsCheckR2012b(K->data[i], 1, L->size[1], &hc_emlrtBCI,
          sp);
      }

      diagA->data[i] = L->data[j + L->size[0] * (K->data[i] - 1)];
    }

    idx = K->size[1];
    i = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(sp, b_K, i, &bf_emlrtRTEI);
    for (i = 0; i < idx; i++) {
      b_K->data[i] = K->data[i];
    }

    if (b_K->size[0] != diagA->size[0]) {
      emlrtSizeEqCheck1DR2012b(b_K->size[0], diagA->size[0], &p_emlrtECI, sp);
    }

    st.site = &fc_emlrtRSI;
    i = j + 1;
    if ((i < 1) || (i > L->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, L->size[0], &kc_emlrtBCI, &st);
    }

    i = maxval->size[0] * maxval->size[1];
    maxval->size[0] = 1;
    idx = K->size[1];
    maxval->size[1] = K->size[1];
    emxEnsureCapacity_real_T(&st, maxval, i, &cf_emlrtRTEI);
    for (i = 0; i < idx; i++) {
      if ((K->data[i] < 1) || (K->data[i] > L->size[1])) {
        emlrtDynamicBoundsCheckR2012b(K->data[i], 1, L->size[1], &gc_emlrtBCI,
          &st);
      }

      maxval->data[i] = L->data[j + L->size[0] * (K->data[i] - 1)];
    }

    idx = c_varargin_1->size[0];
    for (i = 0; i < idx; i++) {
      c_varargin_1->data[i] *= diagA->data[i];
    }

    idx = K->size[1];
    i = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(&st, b_K, i, &df_emlrtRTEI);
    for (i = 0; i < idx; i++) {
      b_K->data[i] = K->data[i];
    }

    b_st.site = &nd_emlrtRSI;
    dynamic_size_checks(&b_st, maxval, c_varargin_1, b_K->size[0],
                        c_varargin_1->size[0]);
    idx = K->size[1];
    i = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(&st, b_K, i, &df_emlrtRTEI);
    for (i = 0; i < idx; i++) {
      b_K->data[i] = K->data[i];
    }

    if ((b_K->size[0] == 1) || (c_varargin_1->size[0] == 1)) {
      theta = 0.0;
      idx = maxval->size[1];
      for (i = 0; i < idx; i++) {
        theta += maxval->data[i] * c_varargin_1->data[i];
      }
    } else {
      b_st.site = &md_emlrtRSI;
      theta = mtimes(maxval, c_varargin_1);
    }

    i = j + 1;
    if ((i < 1) || (i > A->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, A->size[1], &fc_emlrtBCI, sp);
    }

    m = j + 1;
    if ((m < 1) || (m > A->size[0])) {
      emlrtDynamicBoundsCheckR2012b(m, 1, A->size[0], &fc_emlrtBCI, sp);
    }

    xi = A->data[(m + A->size[0] * (i - 1)) - 1] - theta;

    /*  C(j,j) in book */
    if (j + 1 < n) {
      st.site = &gc_emlrtRSI;
      b_st.site = &rd_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        b_I->size[0] = 1;
        b_I->size[1] = 0;
      } else {
        i = b_I->size[0] * b_I->size[1];
        b_I->size[0] = 1;
        m = n - j;
        b_I->size[1] = m - 1;
        emxEnsureCapacity_real_T(&b_st, b_I, i, &ef_emlrtRTEI);
        idx = m - 2;
        for (i = 0; i <= idx; i++) {
          b_I->data[i] = ((uint32_T)j + i) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      idx = K->size[1];
      i = c_varargin_1->size[0];
      c_varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, c_varargin_1, i, &ff_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        if ((K->data[i] < 1) || (K->data[i] > b_d->size[0])) {
          emlrtDynamicBoundsCheckR2012b(K->data[i], 1, b_d->size[0],
            &ec_emlrtBCI, sp);
        }

        c_varargin_1->data[i] = b_d->data[K->data[i] - 1];
      }

      i = j + 1;
      if ((i < 1) || (i > L->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, L->size[0], &nc_emlrtBCI, sp);
      }

      idx = K->size[1];
      i = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, diagA, i, &gf_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        if ((K->data[i] < 1) || (K->data[i] > L->size[1])) {
          emlrtDynamicBoundsCheckR2012b(K->data[i], 1, L->size[1], &cc_emlrtBCI,
            sp);
        }

        diagA->data[i] = L->data[j + L->size[0] * (K->data[i] - 1)];
      }

      idx = K->size[1];
      i = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(sp, b_K, i, &hf_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        b_K->data[i] = K->data[i];
      }

      if (b_K->size[0] != diagA->size[0]) {
        emlrtSizeEqCheck1DR2012b(b_K->size[0], diagA->size[0], &q_emlrtECI, sp);
      }

      i = j + 1;
      if ((i < 1) || (i > A->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, A->size[1], &mc_emlrtBCI, sp);
      }

      idx = b_I->size[1];
      i = Ccol->size[0];
      Ccol->size[0] = b_I->size[1];
      emxEnsureCapacity_real_T(sp, Ccol, i, &if_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        if (b_I->data[i] != (int32_T)muDoubleScalarFloor(b_I->data[i])) {
          emlrtIntegerCheckR2012b(b_I->data[i], &t_emlrtDCI, sp);
        }

        m = (int32_T)b_I->data[i];
        if ((m < 1) || (m > A->size[0])) {
          emlrtDynamicBoundsCheckR2012b(m, 1, A->size[0], &bc_emlrtBCI, sp);
        }

        Ccol->data[i] = A->data[(m + A->size[0] * j) - 1];
      }

      st.site = &hc_emlrtRSI;
      i = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = b_I->size[1];
      idx = K->size[1];
      varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T(&st, varargin_1, i, &jf_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        loop_ub = b_I->size[1];
        for (m = 0; m < loop_ub; m++) {
          if ((K->data[i] < 1) || (K->data[i] > L->size[1])) {
            emlrtDynamicBoundsCheckR2012b(K->data[i], 1, L->size[1],
              &yb_emlrtBCI, &st);
          }

          b_n = (int32_T)b_I->data[m];
          if ((b_n < 1) || (b_n > L->size[0])) {
            emlrtDynamicBoundsCheckR2012b(b_n, 1, L->size[0], &ac_emlrtBCI, &st);
          }

          varargin_1->data[m + varargin_1->size[0] * i] = L->data[(b_n + L->
            size[0] * (K->data[i] - 1)) - 1];
        }
      }

      idx = c_varargin_1->size[0];
      for (i = 0; i < idx; i++) {
        c_varargin_1->data[i] *= diagA->data[i];
      }

      idx = K->size[1];
      i = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&st, b_K, i, &kf_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        b_K->data[i] = K->data[i];
      }

      b_st.site = &nd_emlrtRSI;
      b_dynamic_size_checks(&b_st, varargin_1, c_varargin_1, b_K->size[0],
                            c_varargin_1->size[0]);
      idx = K->size[1];
      i = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&st, b_K, i, &kf_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        b_K->data[i] = K->data[i];
      }

      if ((b_K->size[0] == 1) || (c_varargin_1->size[0] == 1)) {
        idx = varargin_1->size[0];
        i = diagA->size[0];
        diagA->size[0] = varargin_1->size[0];
        emxEnsureCapacity_real_T(&st, diagA, i, &jf_emlrtRTEI);
        for (i = 0; i < idx; i++) {
          diagA->data[i] = 0.0;
          loop_ub = varargin_1->size[1];
          for (m = 0; m < loop_ub; m++) {
            diagA->data[i] += varargin_1->data[i + varargin_1->size[0] * m] *
              c_varargin_1->data[m];
          }
        }
      } else {
        b_st.site = &md_emlrtRSI;
        b_mtimes(&b_st, varargin_1, c_varargin_1, diagA);
      }

      idx = b_I->size[1];
      i = c_varargin_1->size[0];
      c_varargin_1->size[0] = b_I->size[1];
      emxEnsureCapacity_real_T(sp, c_varargin_1, i, &lf_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        c_varargin_1->data[i] = b_I->data[i];
      }

      if (c_varargin_1->size[0] != diagA->size[0]) {
        emlrtSizeEqCheck1DR2012b(c_varargin_1->size[0], diagA->size[0],
          &r_emlrtECI, sp);
      }

      idx = Ccol->size[0];
      for (i = 0; i < idx; i++) {
        Ccol->data[i] -= diagA->data[i];
      }

      /*  C(I,j) in book */
      st.site = &ic_emlrtRSI;
      b_st.site = &ic_emlrtRSI;
      c_abs(&b_st, Ccol, c_varargin_1);
      b_st.site = &tc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      if (c_varargin_1->size[0] < 1) {
        emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      e_st.site = &wc_emlrtRSI;
      f_st.site = &xc_emlrtRSI;
      b_n = c_varargin_1->size[0];
      if (c_varargin_1->size[0] <= 2) {
        if (c_varargin_1->size[0] == 1) {
          theta = c_varargin_1->data[0];
        } else if ((c_varargin_1->data[0] < c_varargin_1->data[1]) ||
                   (muDoubleScalarIsNaN(c_varargin_1->data[0]) &&
                    (!muDoubleScalarIsNaN(c_varargin_1->data[1])))) {
          theta = c_varargin_1->data[1];
        } else {
          theta = c_varargin_1->data[0];
        }
      } else {
        g_st.site = &ad_emlrtRSI;
        if (!muDoubleScalarIsNaN(c_varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &bd_emlrtRSI;
          if (c_varargin_1->size[0] > 2147483646) {
            i_st.site = &pb_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          m = 2;
          exitg1 = false;
          while ((!exitg1) && (m <= c_varargin_1->size[0])) {
            if (!muDoubleScalarIsNaN(c_varargin_1->data[m - 1])) {
              idx = m;
              exitg1 = true;
            } else {
              m++;
            }
          }
        }

        if (idx == 0) {
          theta = c_varargin_1->data[0];
        } else {
          g_st.site = &yc_emlrtRSI;
          theta = c_varargin_1->data[idx - 1];
          loop_ub = idx + 1;
          h_st.site = &cd_emlrtRSI;
          if ((idx + 1 <= c_varargin_1->size[0]) && (c_varargin_1->size[0] >
               2147483646)) {
            i_st.site = &pb_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (m = loop_ub; m <= b_n; m++) {
            d = c_varargin_1->data[m - 1];
            if (theta < d) {
              theta = d;
            }
          }
        }
      }

      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      st.site = &jc_emlrtRSI;
      b_st.site = &ud_emlrtRSI;
      c_st.site = &kb_emlrtRSI;
      st.site = &jc_emlrtRSI;
      d_varargin_1[0] = muDoubleScalarAbs(xi);
      theta = muDoubleScalarPower(theta / b_gamma, 2.0);
      d_varargin_1[1] = theta;
      d_varargin_1[2] = delta;
      b_st.site = &tc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      e_st.site = &wc_emlrtRSI;
      i = maxval->size[0] * maxval->size[1];
      maxval->size[0] = 1;
      maxval->size[1] = 3;
      emxEnsureCapacity_real_T(&e_st, maxval, i, &te_emlrtRTEI);
      maxval->data[0] = muDoubleScalarAbs(xi);
      maxval->data[1] = theta;
      maxval->data[2] = delta;
      f_st.site = &xc_emlrtRSI;
      g_st.site = &ad_emlrtRSI;
      if (!muDoubleScalarIsNaN(maxval->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        h_st.site = &bd_emlrtRSI;
        m = 2;
        exitg1 = false;
        while ((!exitg1) && (m <= 3)) {
          if (!muDoubleScalarIsNaN(maxval->data[m - 1])) {
            idx = m;
            exitg1 = true;
          } else {
            m++;
          }
        }
      }

      if (idx == 0) {
        i = j + 1;
        if ((i < 1) || (i > b_d->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, b_d->size[0], &xb_emlrtBCI, &f_st);
        }

        b_d->data[i - 1] = muDoubleScalarAbs(xi);
      } else {
        g_st.site = &yc_emlrtRSI;
        theta = d_varargin_1[idx - 1];
        loop_ub = idx + 1;
        h_st.site = &cd_emlrtRSI;
        for (m = loop_ub; m < 4; m++) {
          d = d_varargin_1[m - 1];
          if (theta < d) {
            theta = d;
          }
        }

        i = j + 1;
        if ((i < 1) || (i > b_d->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, b_d->size[0], &xb_emlrtBCI, &f_st);
        }

        b_d->data[i - 1] = theta;
      }

      idx = b_I->size[1];
      i = b_K->size[0];
      b_K->size[0] = b_I->size[1];
      emxEnsureCapacity_int32_T(sp, b_K, i, &mf_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        m = (int32_T)b_I->data[i];
        if ((m < 1) || (m > L->size[0])) {
          emlrtDynamicBoundsCheckR2012b(m, 1, L->size[0], &wb_emlrtBCI, sp);
        }

        b_K->data[i] = m - 1;
      }

      i = j + 1;
      if ((i < 1) || (i > L->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, L->size[1], &oc_emlrtBCI, sp);
      }

      i = j + 1;
      if ((i < 1) || (i > b_d->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, b_d->size[0], &vb_emlrtBCI, sp);
      }

      idx = Ccol->size[0];
      for (i = 0; i < idx; i++) {
        Ccol->data[i] /= b_d->data[j];
      }

      b_L[0] = b_K->size[0];
      emlrtSubAssignSizeCheckR2012b(&b_L[0], 1, &Ccol->size[0], 1, &s_emlrtECI,
        sp);
      idx = Ccol->size[0];
      for (i = 0; i < idx; i++) {
        L->data[b_K->data[i] + L->size[0] * j] = Ccol->data[i];
      }
    } else {
      st.site = &kc_emlrtRSI;
      d = muDoubleScalarAbs(xi);
      b_st.site = &tc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      e_st.site = &wc_emlrtRSI;
      f_st.site = &xc_emlrtRSI;
      if ((d < delta) || (muDoubleScalarIsNaN(d) && (!muDoubleScalarIsNaN(delta))))
      {
        i = j + 1;
        if ((i < 1) || (i > b_d->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, b_d->size[0], &dc_emlrtBCI, &f_st);
        }

        b_d->data[i - 1] = delta;
      } else {
        i = j + 1;
        if ((i < 1) || (i > b_d->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, b_d->size[0], &dc_emlrtBCI, &f_st);
        }

        b_d->data[i - 1] = d;
      }
    }

    i = j + 1;
    if ((i < 1) || (i > b_d->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, b_d->size[0], &pc_emlrtBCI, sp);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&b_K);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&maxval);
  emxFree_real_T(&c_varargin_1);
  emxFree_real_T(&Ccol);
  emxFree_real_T(&b_I);
  emxFree_int32_T(&K);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  for (j = 0; j < n; j++) {
    i = j + 1;
    if ((i < 1) || (i > L->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, L->size[1], &rc_emlrtBCI, sp);
    }

    i = j + 1;
    if ((i < 1) || (i > L->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, L->size[1], &qc_emlrtBCI, sp);
    }

    i = j + 1;
    if ((i < 1) || (i > b_d->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, b_d->size[0], &jc_emlrtBCI, sp);
    }

    xi = b_d->data[i - 1];
    st.site = &lc_emlrtRSI;
    if (xi < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    xi = muDoubleScalarSqrt(xi);
    idx = L->size[0];
    i = diagA->size[0];
    diagA->size[0] = L->size[0];
    emxEnsureCapacity_real_T(sp, diagA, i, &af_emlrtRTEI);
    for (i = 0; i < idx; i++) {
      diagA->data[i] = L->data[i + L->size[0] * j] * xi;
    }

    b_L[0] = L->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_L[0], 1, &diagA->size[0], 1, &t_emlrtECI,
      sp);
    idx = diagA->size[0];
    for (i = 0; i < idx; i++) {
      L->data[i + L->size[0] * j] = diagA->data[i];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_d);
  emxFree_real_T(&diagA);
  i = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(sp, R, i, &we_emlrtRTEI);
  idx = L->size[0];
  for (i = 0; i < idx; i++) {
    loop_ub = L->size[1];
    for (m = 0; m < loop_ub; m++) {
      R->data[m + R->size[0] * i] = L->data[i + L->size[0] * m];
    }
  }

  emxFree_real_T(&L);
  *err = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cholmod.c) */

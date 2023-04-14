/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ARMA_X_data.c
 *
 * Code generation for function 'ARMA_X_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "ARMA_X",                            /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2433290357U, 2237796540U, 4066813863U, 833189415U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo y_emlrtRSI = { 134,        /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 31,        /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

emlrtRSInfo mb_emlrtRSI = { 41,        /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 77,        /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 9,         /* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

emlrtRSInfo xb_emlrtRSI = { 64,        /* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

emlrtRSInfo yb_emlrtRSI = { 110,       /* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 19,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 40,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo jc_emlrtRSI = { 128,       /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 12,        /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 94,        /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 19,        /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 52,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo tc_emlrtRSI = { 21,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 88,        /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo vc_emlrtRSI = { 32,        /* lineNo */
  "xdotu",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdotu.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 49,        /* lineNo */
  "xdot",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdot.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 25,        /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 114,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo bd_emlrtRSI = { 40,        /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo cd_emlrtRSI = { 49,        /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo hf_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\int.m"/* pathName */
};

emlrtRSInfo qf_emlrtRSI = { 22,        /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

emlrtRSInfo rf_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\majority.m"/* pathName */
};

emlrtRSInfo sf_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo tf_emlrtRSI = { 45,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo uf_emlrtRSI = { 48,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo fg_emlrtRSI = { 114,       /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo gg_emlrtRSI = { 54,        /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo hg_emlrtRSI = { 33,        /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo mg_emlrtRSI = { 40,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo ng_emlrtRSI = { 118,       /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo og_emlrtRSI = { 177,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo pg_emlrtRSI = { 13,        /* lineNo */
  "log",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pathName */
};

emlrtRSInfo ch_emlrtRSI = { 35,        /* lineNo */
  "xnrm2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

emlrtRSInfo tl_emlrtRSI = { 87,        /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"/* pathName */
};

emlrtRSInfo ul_emlrtRSI = { 86,        /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"/* pathName */
};

emlrtMCInfo v_emlrtMCI = { 27,         /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

emlrtRTEInfo j_emlrtRTEI = { 118,      /* lineNo */
  13,                                  /* colNo */
  "mtimes",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

emlrtRTEInfo id_emlrtRTEI = { 44,      /* lineNo */
  9,                                   /* colNo */
  "div",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pName */
};

emlrtRTEInfo ao_emlrtRTEI = { 88,      /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo bo_emlrtRTEI = { 83,      /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo jo_emlrtRTEI = { 77,      /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

emlrtRTEInfo ko_emlrtRTEI = { 22,      /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

emlrtRTEInfo ro_emlrtRTEI = { 61,      /* lineNo */
  15,                                  /* colNo */
  "reshape",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pName */
};

const char_T cv1[18] = { 'A', ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'y',
  'm', 'm', 'e', 't', 'r', 'i', 'c' };

emlrtRSInfo um_emlrtRSI = { 27,        /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* End of code generation (ARMA_X_data.c) */

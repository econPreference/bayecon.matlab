/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Stochastic_Volatility_data.c
 *
 * Code generation for function 'Stochastic_Volatility_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "Stochastic_Volatility",             /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2433290357U, 2237796540U, 4066813863U, 833189415U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo eb_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\int.m"/* pathName */
};

emlrtRSInfo nb_emlrtRSI = { 22,        /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\majority.m"/* pathName */
};

emlrtRSInfo pb_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo qb_emlrtRSI = { 45,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 48,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo sb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 25,        /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 52,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 21,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo fc_emlrtRSI = { 114,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo gc_emlrtRSI = { 118,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo hc_emlrtRSI = { 13,        /* lineNo */
  "log",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pathName */
};

emlrtRSInfo jc_emlrtRSI = { 31,        /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 49,        /* lineNo */
  "xdot",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdot.m"/* pathName */
};

emlrtRSInfo td_emlrtRSI = { 23,        /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pathName */
};

emlrtRSInfo ud_emlrtRSI = { 18,        /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pathName */
};

emlrtRSInfo wd_emlrtRSI = { 31,        /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

emlrtRSInfo be_emlrtRSI = { 41,        /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

emlrtRSInfo ie_emlrtRSI = { 77,        /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

emlrtRSInfo je_emlrtRSI = { 16,        /* lineNo */
  "abs",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pathName */
};

emlrtRSInfo ke_emlrtRSI = { 74,        /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

emlrtRSInfo le_emlrtRSI = { 9,         /* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

emlrtRSInfo me_emlrtRSI = { 64,        /* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

emlrtRSInfo ne_emlrtRSI = { 134,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo pe_emlrtRSI = { 193,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo qe_emlrtRSI = { 110,       /* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

emlrtRSInfo se_emlrtRSI = { 19,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo te_emlrtRSI = { 40,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo bf_emlrtRSI = { 128,       /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo gf_emlrtRSI = { 12,        /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

emlrtRSInfo if_emlrtRSI = { 94,        /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

emlrtRSInfo jf_emlrtRSI = { 19,        /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

emlrtRSInfo kf_emlrtRSI = { 88,        /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo lf_emlrtRSI = { 32,        /* lineNo */
  "xdotu",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdotu.m"/* pathName */
};

emlrtRSInfo mf_emlrtRSI = { 40,        /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo nf_emlrtRSI = { 49,        /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo rh_emlrtRSI = { 58,        /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo ki_emlrtRSI = { 9,         /* lineNo */
  "discret1",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\discret1.m"/* pathName */
};

emlrtRSInfo sj_emlrtRSI = { 114,       /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo tj_emlrtRSI = { 54,        /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo uj_emlrtRSI = { 33,        /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo ak_emlrtRSI = { 40,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo bk_emlrtRSI = { 118,       /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo ck_emlrtRSI = { 177,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo xk_emlrtRSI = { 87,        /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"/* pathName */
};

emlrtRSInfo yk_emlrtRSI = { 86,        /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"/* pathName */
};

emlrtMCInfo ab_emlrtMCI = { 27,        /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

emlrtMCInfo cb_emlrtMCI = { 17,        /* lineNo */
  13,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pName */
};

emlrtRTEInfo e_emlrtRTEI = { 118,      /* lineNo */
  13,                                  /* colNo */
  "mtimes",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

emlrtRTEInfo hc_emlrtRTEI = { 44,      /* lineNo */
  9,                                   /* colNo */
  "div",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pName */
};

emlrtRTEInfo je_emlrtRTEI = { 16,      /* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pName */
};

emlrtRTEInfo nl_emlrtRTEI = { 88,      /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo ol_emlrtRTEI = { 83,      /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo am_emlrtRTEI = { 22,      /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

emlrtRTEInfo bm_emlrtRTEI = { 77,      /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

emlrtRTEInfo nm_emlrtRTEI = { 61,      /* lineNo */
  15,                                  /* colNo */
  "reshape",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pName */
};

const char_T cv0[20] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ', 'i', 's',
  ' ', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r' };

const char_T cv1[18] = { 'A', ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'y',
  'm', 'm', 'e', 't', 'r', 'i', 'c' };

emlrtRSInfo cl_emlrtRSI = { 17,        /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pathName */
};

emlrtRSInfo yl_emlrtRSI = { 27,        /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* End of code generation (Stochastic_Volatility_data.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unit_Root_data.c
 *
 * Code generation for function 'Unit_Root_data'
 *
 */

/* Include files */
#include "Unit_Root_data.h"
#include "Unit_Root.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131483U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "Unit_Root",                         /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2433290357U, 2237796540U, 4066813863U, 833189415U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo h_emlrtRSI = { 102,        /* lineNo */
  "cat_impl",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

emlrtRSInfo kb_emlrtRSI = { 55,        /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo pb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 44,        /* lineNo */
  "vAllOrAny",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\vAllOrAny.m"/* pathName */
};

emlrtRSInfo sb_emlrtRSI = { 103,       /* lineNo */
  "flatVectorAllOrAny",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\vAllOrAny.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 20,        /* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 96,        /* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 124,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 184,       /* lineNo */
  "colMajorFlatIter",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 20,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo vc_emlrtRSI = { 45,        /* lineNo */
  "unaryOrBinaryDispatch",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo ed_emlrtRSI = { 167,       /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo kd_emlrtRSI = { 96,        /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

emlrtRSInfo ld_emlrtRSI = { 21,        /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

emlrtRSInfo md_emlrtRSI = { 102,       /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo nd_emlrtRSI = { 56,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo od_emlrtRSI = { 183,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo pd_emlrtRSI = { 32,        /* lineNo */
  "xdotu",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdotu.m"/* pathName */
};

emlrtRSInfo qd_emlrtRSI = { 49,        /* lineNo */
  "xdot",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdot.m"/* pathName */
};

emlrtRSInfo rd_emlrtRSI = { 28,        /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo sd_emlrtRSI = { 232,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo ud_emlrtRSI = { 45,        /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo he_emlrtRSI = { 27,        /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

emlrtRSInfo ue_emlrtRSI = { 9,         /* lineNo */
  "int",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\int.m"/* pathName */
};

emlrtRSInfo ve_emlrtRSI = { 27,        /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

emlrtRSInfo we_emlrtRSI = { 90,        /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

emlrtRSInfo xe_emlrtRSI = { 82,        /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

emlrtRSInfo ye_emlrtRSI = { 78,        /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

emlrtRSInfo af_emlrtRSI = { 58,        /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

emlrtRSInfo bf_emlrtRSI = { 57,        /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

emlrtRSInfo cf_emlrtRSI = { 50,        /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

emlrtRSInfo df_emlrtRSI = { 28,        /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

emlrtRSInfo ef_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\majority.m"/* pathName */
};

emlrtRSInfo ff_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo kf_emlrtRSI = { 77,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo lf_emlrtRSI = { 76,        /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

emlrtRSInfo pf_emlrtRSI = { 109,       /* lineNo */
  "computeDimsData",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

emlrtRSInfo qf_emlrtRSI = { 29,        /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

emlrtRSInfo rf_emlrtRSI = { 38,        /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

emlrtRSInfo sf_emlrtRSI = { 174,       /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

emlrtRSInfo xf_emlrtRSI = { 34,        /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

emlrtRSInfo dg_emlrtRSI = { 73,        /* lineNo */
  "ceval_xpotrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

emlrtRSInfo eg_emlrtRSI = { 70,        /* lineNo */
  "ceval_xpotrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

emlrtRSInfo fg_emlrtRSI = { 37,        /* lineNo */
  "ceval_xpotrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

emlrtRSInfo gg_emlrtRSI = { 36,        /* lineNo */
  "ceval_xpotrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

emlrtRSInfo ii_emlrtRSI = { 45,        /* lineNo */
  "ceval_xgehrd",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

emlrtRSInfo ji_emlrtRSI = { 46,        /* lineNo */
  "ceval_xgehrd",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

emlrtRSInfo ki_emlrtRSI = { 65,        /* lineNo */
  "ceval_xgehrd",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

emlrtRSInfo li_emlrtRSI = { 78,        /* lineNo */
  "ceval_xgehrd",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

emlrtRSInfo oi_emlrtRSI = { 69,        /* lineNo */
  "ceval_xhseqr",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

emlrtRSInfo pi_emlrtRSI = { 70,        /* lineNo */
  "ceval_xhseqr",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

emlrtRSInfo qi_emlrtRSI = { 90,        /* lineNo */
  "ceval_xhseqr",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

emlrtRSInfo ri_emlrtRSI = { 112,       /* lineNo */
  "ceval_xhseqr",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

emlrtRSInfo wi_emlrtRSI = { 91,        /* lineNo */
  "ceval_xgeev",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

emlrtRSInfo xi_emlrtRSI = { 84,        /* lineNo */
  "ceval_xgeev",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

emlrtRSInfo yi_emlrtRSI = { 50,        /* lineNo */
  "ceval_xgeev",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

emlrtRSInfo aj_emlrtRSI = { 43,        /* lineNo */
  "ceval_xgeev",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

emlrtRSInfo cj_emlrtRSI = { 33,        /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

emlrtRSInfo xk_emlrtRSI = { 93,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo yk_emlrtRSI = { 80,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo al_emlrtRSI = { 79,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo bl_emlrtRSI = { 59,        /* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

emlrtRSInfo gl_emlrtRSI = { 121,       /* lineNo */
  "scalar_gammaln",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\gammaln.m"/* pathName */
};

emlrtRSInfo hl_emlrtRSI = { 129,       /* lineNo */
  "scalar_gammaln",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\gammaln.m"/* pathName */
};

emlrtRSInfo il_emlrtRSI = { 138,       /* lineNo */
  "scalar_gammaln",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\gammaln.m"/* pathName */
};

emlrtRSInfo jl_emlrtRSI = { 179,       /* lineNo */
  "scalar_gammaln",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\gammaln.m"/* pathName */
};

emlrtRSInfo om_emlrtRSI = { 309,       /* lineNo */
  "tausetter",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

emlrtRSInfo an_emlrtRSI = { 300,       /* lineNo */
  "logprior_kernel",                   /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

emlrtMCInfo cb_emlrtMCI = { 53,        /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

emlrtMCInfo db_emlrtMCI = { 60,        /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

emlrtRTEInfo emlrtRTEI = { 283,        /* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

emlrtRTEInfo b_emlrtRTEI = { 59,       /* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

emlrtRTEInfo c_emlrtRTEI = { 52,       /* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

emlrtRTEInfo f_emlrtRTEI = { 67,       /* lineNo */
  5,                                   /* colNo */
  "fltpower",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

emlrtRTEInfo j_emlrtRTEI = { 158,      /* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo k_emlrtRTEI = { 153,      /* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo m_emlrtRTEI = { 95,       /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

emlrtRTEInfo s_emlrtRTEI = { 47,       /* lineNo */
  27,                                  /* colNo */
  "varstd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pName */
};

emlrtRTEInfo w_emlrtRTEI = { 14,       /* lineNo */
  9,                                   /* colNo */
  "log",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pName */
};

emlrtRTEInfo cb_emlrtRTEI = { 48,      /* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

emlrtRTEInfo db_emlrtRTEI = { 45,      /* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

emlrtRTEInfo lb_emlrtRTEI = { 13,      /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

emlrtRTEInfo pb_emlrtRTEI = { 305,     /* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

emlrtRTEInfo jc_emlrtRTEI = { 27,      /* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

emlrtRTEInfo qc_emlrtRTEI = { 114,     /* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

emlrtRTEInfo vd_emlrtRTEI = { 99,      /* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo wd_emlrtRTEI = { 34,      /* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

emlrtRTEInfo fe_emlrtRTEI = { 105,     /* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

emlrtRTEInfo le_emlrtRTEI = { 232,     /* lineNo */
  13,                                  /* colNo */
  "mtimes",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

emlrtRTEInfo pg_emlrtRTEI = { 97,      /* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo jh_emlrtRTEI = { 102,     /* lineNo */
  5,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo on_emlrtRTEI = { 27,      /* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

emlrtRTEInfo pn_emlrtRTEI = { 57,      /* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

const char_T cv[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i', 't', 'e',
  'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

const char_T cv1[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n', 'g', ' ',
  't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ', 'P', 'l', 'e',
  'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

const char_T cv2[10] = { '[', 's', 'i', 'g', 'm', 'a', '2', ':', ' ', ']' };

const char_T cv3[17] = { '[', 'l', 'o', 'g', ' ', 'p', 'o', 's', 't', 'e', 'r',
  'i', 'o', 'r', ':', ' ', ']' };

const real_T dv[7] = { -0.001910444077728, 0.00084171387781295,
  -0.00059523799130430121, 0.0007936507935003503, -0.0027777777777776816,
  0.083333333333333329, 0.0057083835261 };

const char_T cv4[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g', 'e',
  't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

emlrtRSInfo cn_emlrtRSI = { 62,        /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

emlrtRSInfo en_emlrtRSI = { 60,        /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

emlrtRSInfo yo_emlrtRSI = { 53,        /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* End of code generation (Unit_Root_data.c) */

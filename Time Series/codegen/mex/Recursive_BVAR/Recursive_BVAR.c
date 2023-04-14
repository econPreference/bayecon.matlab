/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Recursive_BVAR.c
 *
 * Code generation for function 'Recursive_BVAR'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "Recursive_BVAR_emxutil.h"
#include "vec.h"
#include "power.h"
#include "diag.h"
#include "eye.h"
#include "inv.h"
#include "eml_int_forloop_overflow_check.h"
#include "xpotrf.h"
#include "invpd.h"
#include "randwishart.h"
#include "error.h"
#include "abs.h"
#include "eig.h"
#include "assertValidSizeArg.h"
#include "randn.h"
#include "cholmod.h"
#include "lnpdfmvn.h"
#include "lnpdfwishart.h"
#include "cov.h"
#include "meanc.h"
#include "demeanc.h"
#include "Recursive_BVAR_mexutil.h"
#include "Recursive_BVAR_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 19,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 20,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 22,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 27,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 31,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 35,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 38,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 46,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 56,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 61,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 65,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 70,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 73,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 75,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 78,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 79,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 80,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 87,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 89,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 91,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 96,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 120, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 124, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 127, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 129,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 130,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 139,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 141,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 142,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 143,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 25, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 164,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 165,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 172,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 173,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 179,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 32, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 33, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 34, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 195,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 196,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 199,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 202,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 204,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 205,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 207,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 208,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 211,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 212,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 214,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 215,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 216,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 217,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 218,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 220,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 15, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 31, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 13, /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 253,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 293,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 235,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 240,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 243,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 244,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 247,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 255,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 262,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 267,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 268,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 271,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 278,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 74, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 91, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 92, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 6,     /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 101, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 102, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 103, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 44,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 45,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 47,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 48,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 49,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 50,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 51,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 52,  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 115, /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 116, /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 117, /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 118, /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 119, /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 121, /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 60, /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 15,  /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 112,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 20,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 20,/* lineNo */
  6,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 56,/* lineNo */
  6,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 106,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 148,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 59,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 149,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 150,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 123,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 72,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 151,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 124,/* lineNo */
  25,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 61,/* lineNo */
  23,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 152,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 61,/* lineNo */
  50,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 50,/* lineNo */
  14,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 78,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 75,/* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 139,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 75,/* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 75,/* lineNo */
  48,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 127,/* lineNo */
  49,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 61,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 142,/* lineNo */
  33,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 134,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 135,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 75,/* lineNo */
  46,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 127,/* lineNo */
  40,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 301,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 79,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 82,/* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 86,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 82,/* lineNo */
  26,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 87,/* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 89,/* lineNo */
  17,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 89,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 90,/* lineNo */
  20,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 90,/* lineNo */
  25,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 91,/* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 91,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 92,/* lineNo */
  24,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 92,/* lineNo */
  29,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 93,/* lineNo */
  23,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 94,/* lineNo */
  23,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 95,/* lineNo */
  23,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 96,/* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 96,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 97,/* lineNo */
  24,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 97,/* lineNo */
  29,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 141,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 38,/* lineNo */
  2,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 130,/* lineNo */
  36,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 163,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 165,/* lineNo */
  14,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 167,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 173,/* lineNo */
  14,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 169,/* lineNo */
  8,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 177,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 169,/* lineNo */
  10,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 179,/* lineNo */
  10,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 180,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 180,/* lineNo */
  11,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 179,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 158,/* lineNo */
  40,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 188,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 189,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 194,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 200,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 195,/* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 201,/* lineNo */
  24,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 203,/* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 195,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 203,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 196,/* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 204,/* lineNo */
  10,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 204,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 196,/* lineNo */
  29,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 205,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 207,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 196,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 208,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 208,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 211,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 212,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 212,/* lineNo */
  7,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 212,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 215,/* lineNo */
  11,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 217,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 217,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 219,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 220,/* lineNo */
  17,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 220,/* lineNo */
  11,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 220,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 199,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 202,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 214,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 216,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 231,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 234,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 235,/* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 240,/* lineNo */
  14,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 235,/* lineNo */
  22,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 235,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 236,/* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 236,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 243,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 226,/* lineNo */
  30,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 255,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 255,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 266,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 267,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 278,/* lineNo */
  10,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 278,/* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 262,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 20,    /* lineNo */
  33,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 20,  /* lineNo */
  33,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo yj_emlrtRTEI = { 40,/* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 60,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  34,                                  /* colNo */
  "phi_cons",                          /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  45,                                  /* colNo */
  "phi_cons",                          /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  58,                                  /* colNo */
  "YL_mean",                           /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  69,                                  /* colNo */
  "YL_mean",                           /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  61,                                  /* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 74,/* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  57,                                  /* colNo */
  "Phi_sp",                            /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  73,                                  /* colNo */
  "Phi_sp",                            /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  21,                                  /* colNo */
  "Gamma",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  37,                                  /* colNo */
  "Gamma",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  75,                                  /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  33,                                  /* colNo */
  "Gather",                            /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  45,                                  /* colNo */
  "diag_B",                            /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  19,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  82,                                  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  84,                                  /* lineNo */
  25,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  84,                                  /* lineNo */
  27,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  30,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  29,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  33,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  33,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  41,                                  /* colNo */
  "normalize",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  31,                                  /* colNo */
  "vec_B",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  39,                                  /* colNo */
  "vec_Gamma",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  97,                                  /* lineNo */
  39,                                  /* colNo */
  "vec_Omega",                         /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ck_emlrtRTEI = { 112,/* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 95,  /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  15,                                  /* colNo */
  "betam",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  95,                                  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  22,                                  /* colNo */
  "betam",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 97,  /* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  97,                                  /* lineNo */
  16,                                  /* colNo */
  "Omegam",                            /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  97,                                  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  32,                                  /* colNo */
  "Omegam",                            /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  43,                                  /* colNo */
  "Y0",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  57,                                  /* colNo */
  "YLm",                               /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  142,                                 /* lineNo */
  22,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 90,  /* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  12,                                  /* colNo */
  "Bm",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  90,                                  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo f_emlrtDCI = { 93,  /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  15,                                  /* colNo */
  "consm",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  93,                                  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 92,  /* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  16,                                  /* colNo */
  "Gammam",                            /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  92,                                  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo h_emlrtDCI = { 94,  /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  15,                                  /* colNo */
  "sig2m",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  94,                                  /* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtDCInfo i_emlrtDCI = { 15,  /* lineNo */
  17,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 15,  /* lineNo */
  17,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 16,  /* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 16,  /* lineNo */
  21,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 27,  /* lineNo */
  22,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 27,  /* lineNo */
  22,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 27,  /* lineNo */
  25,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 27,  /* lineNo */
  25,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 27,  /* lineNo */
  32,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 30,  /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 31,  /* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 31,  /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 32,  /* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 32,  /* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 32,  /* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 33,  /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 34,  /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 34, /* lineNo */
  18,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 35, /* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 35, /* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 15, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 15, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 16, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 16, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 27, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 27, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 30, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 31, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 32, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 32, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 33, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 34, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 35, /* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 163,/* lineNo */
  8,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  163,                                 /* lineNo */
  8,                                   /* colNo */
  "Y",                                 /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  163,                                 /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo uk_emlrtRTEI = { 168,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo tb_emlrtDCI = { 169,/* lineNo */
  29,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  29,                                  /* colNo */
  "Y",                                 /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  37,                                  /* colNo */
  "Y",                                 /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  10,                                  /* colNo */
  "YL",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  20,                                  /* colNo */
  "YL",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  169,                                 /* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = { 178,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  179,                                 /* lineNo */
  26,                                  /* colNo */
  "YL",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  180,                                 /* lineNo */
  13,                                  /* colNo */
  "YLm",                               /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  180,                                 /* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo ub_emlrtDCI = { 167,/* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 167,/* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 167,/* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 167,/* lineNo */
  16,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 177,/* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 177,/* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 177,/* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 177,/* lineNo */
  19,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 167,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 167,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 177,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 177,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 220,/* lineNo */
  37,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 220,/* lineNo */
  37,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  217,                                 /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtDCInfo jc_emlrtDCI = { 212,/* lineNo */
  33,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 212,/* lineNo */
  33,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  208,                                 /* lineNo */
  8,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  204,                                 /* lineNo */
  5,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { 2,   /* nDims */
  203,                                 /* lineNo */
  11,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  201,                                 /* lineNo */
  15,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 2,  /* nDims */
  200,                                 /* lineNo */
  10,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { -1, /* nDims */
  196,                                 /* lineNo */
  10,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  196,                                 /* lineNo */
  32,                                  /* colNo */
  "Y0",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo db_emlrtECI = { 2,  /* nDims */
  195,                                 /* lineNo */
  10,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  194,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 188,/* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 188,/* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = { 188,/* lineNo */
  18,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 188,/* lineNo */
  18,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = { 188,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = { 188,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo rc_emlrtDCI = { 189,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sc_emlrtDCI = { 189,/* lineNo */
  1,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { 2,  /* nDims */
  240,                                 /* lineNo */
  14,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  236,                                 /* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  235,                                 /* lineNo */
  12,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  14,                                  /* colNo */
  "Y",                                 /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo gl_emlrtRTEI = { 80,/* lineNo */
  23,                                  /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtRTEInfo hl_emlrtRTEI = { 54,/* lineNo */
  15,                                  /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtRTEInfo il_emlrtRTEI = { 271,/* lineNo */
  13,                                  /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  22,                                  /* colNo */
  "FF",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  20,                                  /* colNo */
  "FF",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  18,                                  /* colNo */
  "FF",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  16,                                  /* colNo */
  "FF",                                /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo jl_emlrtRTEI = { 264,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pName */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  39,                                  /* colNo */
  "theta",                             /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  9,                                   /* colNo */
  "ImpulseRespm",                      /* aName */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo uc_emlrtDCI = { 272,/* lineNo */
  9,                                   /* colNo */
  "Recursive_BVAR",                    /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRSInfo lk_emlrtRSI = { 6,  /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 52, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 51, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 50, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 49, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 48, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 47, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 45, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 121,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 119,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 118,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 117,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 116,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 103,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 102,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 101,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 44, /* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 115,/* lineNo */
  "Recursive_BVAR",                    /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\Time Series\\Recursive_BVAR.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 60, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static void Gen_ImRes(const emlrtStack *sp, const emxArray_real_T *Omega, const
                      emxArray_real_T *F, real_T mlag, real_T n0,
                      emxArray_real_T *ImpulseRespm, real_T iter,
                      emxArray_real_T *Binv);
static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *X, const emxArray_real_T *beta, real_T nu,
                      const emxArray_real_T *R0, emxArray_real_T *Omega,
                      emxArray_real_T *Omega_inv);
static void Gen_Phi(const emlrtStack *sp, const emxArray_real_T *Y0, const
                    emxArray_real_T *YLm, const emxArray_real_T *Phi0, real_T p,
                    const emxArray_real_T *b_, const emxArray_real_T *var_,
                    const emxArray_real_T *Omega_inv, emxArray_real_T *Phi,
                    emxArray_real_T *Fm, emxArray_real_T *beta);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static void format(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static void makeYX(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                   emxArray_real_T *Y0, emxArray_real_T *YLm, emxArray_real_T
                   *YL, emxArray_real_T *Y0_mean, emxArray_real_T *YL_mean);

/* Function Definitions */
static void Gen_ImRes(const emlrtStack *sp, const emxArray_real_T *Omega, const
                      emxArray_real_T *F, real_T mlag, real_T n0,
                      emxArray_real_T *ImpulseRespm, real_T iter,
                      emxArray_real_T *Binv)
{
  emxArray_real_T *psi_j;
  int32_T i46;
  int32_T loop_ub;
  boolean_T b4;
  int32_T jmax;
  int32_T j;
  emxArray_real_T *FF;
  int32_T i47;
  int32_T nr;
  emxArray_real_T *theta;
  emxArray_real_T *b_FF;
  char_T TRANSA;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T b_loop_ub;
  ptrdiff_t k_t;
  int32_T i48;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &psi_j, 2, &sj_emlrtRTEI, true);

  /*  충격반응함수 계산하기 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  B의 역행렬 계산하기 */
  st.site = &pi_emlrtRSI;
  i46 = psi_j->size[0] * psi_j->size[1];
  psi_j->size[0] = Omega->size[0];
  psi_j->size[1] = Omega->size[1];
  emxEnsureCapacity_real_T(&st, psi_j, i46, &qj_emlrtRTEI);
  loop_ub = Omega->size[0] * Omega->size[1];
  for (i46 = 0; i46 < loop_ub; i46++) {
    psi_j->data[i46] = Omega->data[i46];
  }

  b_st.site = &vi_emlrtRSI;
  b4 = (Omega->size[0] == Omega->size[1]);
  if (!b4) {
    emlrtErrorWithMessageIdR2018a(&b_st, &hl_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if (Omega->size[1] != 0) {
    c_st.site = &wi_emlrtRSI;
    loop_ub = xpotrf(&c_st, Omega->size[1], psi_j, Omega->size[1]);
    if (loop_ub == 0) {
      jmax = Omega->size[1];
    } else {
      jmax = loop_ub - 1;
      emlrtErrorWithMessageIdR2018a(&b_st, &gl_emlrtRTEI, "Coder:MATLAB:posdef",
        "Coder:MATLAB:posdef", 0);
    }

    c_st.site = &xi_emlrtRSI;
    if ((!(1 > jmax)) && (jmax > 2147483646)) {
      d_st.site = &dc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (j = 2; j - 1 <= jmax; j++) {
      c_st.site = &yi_emlrtRSI;
      if ((!(j > jmax)) && (jmax > 2147483646)) {
        d_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (loop_ub = j; loop_ub <= jmax; loop_ub++) {
        psi_j->data[(loop_ub + psi_j->size[0] * (j - 2)) - 1] = 0.0;
      }
    }
  }

  i46 = Binv->size[0] * Binv->size[1];
  Binv->size[0] = psi_j->size[1];
  Binv->size[1] = psi_j->size[0];
  emxEnsureCapacity_real_T(sp, Binv, i46, &rj_emlrtRTEI);
  loop_ub = psi_j->size[0];
  for (i46 = 0; i46 < loop_ub; i46++) {
    jmax = psi_j->size[1];
    for (i47 = 0; i47 < jmax; i47++) {
      Binv->data[i47 + Binv->size[0] * i46] = psi_j->data[i46 + psi_j->size[0] *
        i47];
    }
  }

  emxInit_real_T(sp, &FF, 2, &wj_emlrtRTEI, true);

  /*  Matlab은 상방삼각행렬을 제공하므로 Lower triangular matrix로 만들어 주는 것 */
  nr = Omega->size[0];

  /*  각 j에 대해서 충격반응함수 계산해서 저장하기 */
  st.site = &qi_emlrtRSI;
  eye(&st, F->size[0], FF);

  /*  F^0 = eye */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, mlag + 1.0, mxDOUBLE_CLASS, (int32_T)
    (mlag + 1.0), &jl_emlrtRTEI, sp);
  j = 0;
  emxInit_real_T(sp, &theta, 2, &tj_emlrtRTEI, true);
  emxInit_real_T(sp, &b_FF, 2, &c_emlrtRTEI, true);
  while (j <= (int32_T)(mlag + 1.0) - 1) {
    if (1 > nr) {
      loop_ub = 0;
      jmax = 0;
    } else {
      i46 = FF->size[0];
      if (!(1 <= i46)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i46, &gd_emlrtBCI, sp);
      }

      i46 = FF->size[0];
      if (!(nr <= i46)) {
        emlrtDynamicBoundsCheckR2012b(nr, 1, i46, &fd_emlrtBCI, sp);
      }

      loop_ub = nr;
      i46 = FF->size[1];
      if (!(1 <= i46)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i46, &ed_emlrtBCI, sp);
      }

      i46 = FF->size[1];
      if (!(nr <= i46)) {
        emlrtDynamicBoundsCheckR2012b(nr, 1, i46, &dd_emlrtBCI, sp);
      }

      jmax = nr;
    }

    i46 = psi_j->size[0] * psi_j->size[1];
    psi_j->size[0] = loop_ub;
    psi_j->size[1] = jmax;
    emxEnsureCapacity_real_T(sp, psi_j, i46, &sj_emlrtRTEI);
    for (i46 = 0; i46 < jmax; i46++) {
      for (i47 = 0; i47 < loop_ub; i47++) {
        psi_j->data[i47 + psi_j->size[0] * i46] = FF->data[i47 + FF->size[0] *
          i46];
      }
    }

    /*  k by k */
    st.site = &ri_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    if (!(jmax == Binv->size[0])) {
      if (((loop_ub == 1) && (jmax == 1)) || ((Binv->size[0] == 1) &&
           (Binv->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((jmax == 1) || (Binv->size[0] == 1)) {
      i46 = theta->size[0] * theta->size[1];
      theta->size[0] = psi_j->size[0];
      theta->size[1] = Binv->size[1];
      emxEnsureCapacity_real_T(&st, theta, i46, &tj_emlrtRTEI);
      loop_ub = psi_j->size[0];
      for (i46 = 0; i46 < loop_ub; i46++) {
        jmax = Binv->size[1];
        for (i47 = 0; i47 < jmax; i47++) {
          theta->data[i46 + theta->size[0] * i47] = 0.0;
          b_loop_ub = psi_j->size[1];
          for (i48 = 0; i48 < b_loop_ub; i48++) {
            theta->data[i46 + theta->size[0] * i47] += psi_j->data[i46 +
              psi_j->size[0] * i48] * Binv->data[i48 + Binv->size[0] * i47];
          }
        }
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      if ((loop_ub == 0) || (jmax == 0) || (Binv->size[0] == 0) || (Binv->size[1]
           == 0)) {
        i46 = theta->size[0] * theta->size[1];
        theta->size[0] = loop_ub;
        theta->size[1] = Binv->size[1];
        emxEnsureCapacity_real_T(&b_st, theta, i46, &tj_emlrtRTEI);
        loop_ub *= Binv->size[1];
        for (i46 = 0; i46 < loop_ub; i46++) {
          theta->data[i46] = 0.0;
        }
      } else {
        c_st.site = &pe_emlrtRSI;
        c_st.site = &qe_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)loop_ub;
        n_t = (ptrdiff_t)Binv->size[1];
        k_t = (ptrdiff_t)jmax;
        lda_t = (ptrdiff_t)loop_ub;
        ldb_t = (ptrdiff_t)jmax;
        ldc_t = (ptrdiff_t)loop_ub;
        i46 = theta->size[0] * theta->size[1];
        theta->size[0] = loop_ub;
        theta->size[1] = Binv->size[1];
        emxEnsureCapacity_real_T(&c_st, theta, i46, &mb_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &psi_j->data[0],
              &lda_t, &Binv->data[0], &ldb_t, &beta1, &theta->data[0], &ldc_t);
      }
    }

    /*  k by k */
    st.site = &si_emlrtRSI;
    vec(&st, theta);

    /*  k^2 by 1 로 길쭉하게 reshape */
    /*  저장하기 */
    st.site = &ti_emlrtRSI;
    b_st.site = &re_emlrtRSI;
    c_st.site = &se_emlrtRSI;
    alpha1 = (real_T)nr * (real_T)nr;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, alpha1, mxDOUBLE_CLASS, (int32_T)
      alpha1, &il_emlrtRTEI, sp);
    loop_ub = 1;
    while (loop_ub - 1 <= (int32_T)alpha1 - 1) {
      i46 = theta->size[0] * theta->size[1];
      if (!((loop_ub >= 1) && (loop_ub <= i46))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i46, &hd_emlrtBCI, sp);
      }

      i46 = ImpulseRespm->size[0];
      beta1 = iter - n0;
      if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
        emlrtIntegerCheckR2012b(beta1, &uc_emlrtDCI, sp);
      }

      i47 = (int32_T)beta1;
      if (!((i47 >= 1) && (i47 <= i46))) {
        emlrtDynamicBoundsCheckR2012b(i47, 1, i46, &id_emlrtBCI, sp);
      }

      i46 = ImpulseRespm->size[1];
      if (!((j + 1 >= 1) && (j + 1 <= i46))) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i46, &id_emlrtBCI, sp);
      }

      i46 = ImpulseRespm->size[2];
      if (!((loop_ub >= 1) && (loop_ub <= i46))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i46, &id_emlrtBCI, sp);
      }

      ImpulseRespm->data[((i47 + ImpulseRespm->size[0] * j) + ImpulseRespm->
                          size[0] * ImpulseRespm->size[1] * (loop_ub - 1)) - 1] =
        theta->data[loop_ub - 1];

      /*  iter-n0 : sampling된 값들이 차곡차곡 쌓임 */
      /*  j번째 시차에 대한 iter-n0번째 샘플링 값이 theta인데 그 값이 (iter-n0, j) 좌표에 */
      /*  길쭉하게 저장됨 */
      loop_ub++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    st.site = &ui_emlrtRSI;
    i46 = psi_j->size[0] * psi_j->size[1];
    psi_j->size[0] = FF->size[0];
    psi_j->size[1] = FF->size[1];
    emxEnsureCapacity_real_T(&st, psi_j, i46, &uj_emlrtRTEI);
    loop_ub = FF->size[0] * FF->size[1];
    for (i46 = 0; i46 < loop_ub; i46++) {
      psi_j->data[i46] = FF->data[i46];
    }

    b_st.site = &le_emlrtRSI;
    if (!(FF->size[1] == F->size[0])) {
      if (((FF->size[0] == 1) && (FF->size[1] == 1)) || ((F->size[0] == 1) &&
           (F->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((FF->size[1] == 1) || (F->size[0] == 1)) {
      i46 = b_FF->size[0] * b_FF->size[1];
      b_FF->size[0] = FF->size[0];
      b_FF->size[1] = F->size[1];
      emxEnsureCapacity_real_T(&st, b_FF, i46, &c_emlrtRTEI);
      loop_ub = FF->size[0];
      for (i46 = 0; i46 < loop_ub; i46++) {
        jmax = F->size[1];
        for (i47 = 0; i47 < jmax; i47++) {
          b_FF->data[i46 + b_FF->size[0] * i47] = 0.0;
          b_loop_ub = FF->size[1];
          for (i48 = 0; i48 < b_loop_ub; i48++) {
            b_FF->data[i46 + b_FF->size[0] * i47] += FF->data[i46 + FF->size[0] *
              i48] * F->data[i48 + F->size[0] * i47];
          }
        }
      }

      i46 = FF->size[0] * FF->size[1];
      FF->size[0] = b_FF->size[0];
      FF->size[1] = b_FF->size[1];
      emxEnsureCapacity_real_T(&st, FF, i46, &vj_emlrtRTEI);
      loop_ub = b_FF->size[1];
      for (i46 = 0; i46 < loop_ub; i46++) {
        jmax = b_FF->size[0];
        for (i47 = 0; i47 < jmax; i47++) {
          FF->data[i47 + FF->size[0] * i46] = b_FF->data[i47 + b_FF->size[0] *
            i46];
        }
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      if ((FF->size[0] == 0) || (FF->size[1] == 0) || (F->size[0] == 0) ||
          (F->size[1] == 0)) {
        loop_ub = FF->size[0];
        jmax = F->size[1];
        i46 = FF->size[0] * FF->size[1];
        FF->size[0] = loop_ub;
        FF->size[1] = jmax;
        emxEnsureCapacity_real_T(&b_st, FF, i46, &vj_emlrtRTEI);
        for (i46 = 0; i46 < jmax; i46++) {
          for (i47 = 0; i47 < loop_ub; i47++) {
            FF->data[i47 + FF->size[0] * i46] = 0.0;
          }
        }
      } else {
        c_st.site = &pe_emlrtRSI;
        c_st.site = &qe_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)FF->size[0];
        n_t = (ptrdiff_t)F->size[1];
        k_t = (ptrdiff_t)FF->size[1];
        lda_t = (ptrdiff_t)FF->size[0];
        ldb_t = (ptrdiff_t)FF->size[1];
        ldc_t = (ptrdiff_t)FF->size[0];
        loop_ub = FF->size[0];
        i46 = FF->size[0] * FF->size[1];
        FF->size[0] = loop_ub;
        FF->size[1] = F->size[1];
        emxEnsureCapacity_real_T(&c_st, FF, i46, &mb_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &psi_j->data[0],
              &lda_t, &F->data[0], &ldb_t, &beta1, &FF->data[0], &ldc_t);
      }
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_FF);
  emxFree_real_T(&theta);
  emxFree_real_T(&psi_j);
  emxFree_real_T(&FF);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *X, const emxArray_real_T *beta, real_T nu,
                      const emxArray_real_T *R0, emxArray_real_T *Omega,
                      emxArray_real_T *Omega_inv)
{
  emxArray_real_T *ehat2;
  int32_T i30;
  int32_T loop_ub;
  int32_T t;
  emxArray_real_T *ehat;
  emxArray_real_T *Omega1;
  emxArray_real_T *r8;
  int32_T b_loop_ub;
  emxArray_real_T *b_ehat2;
  int32_T c_ehat2[2];
  int32_T b_Omega1[2];
  int32_T i31;
  boolean_T guard1 = false;
  char_T TRANSA;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &ehat2, 2, &yh_emlrtRTEI, true);

  /*  Omega 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  i30 = ehat2->size[0] * ehat2->size[1];
  ehat2->size[0] = Y->size[1];
  ehat2->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, ehat2, i30, &yh_emlrtRTEI);
  loop_ub = Y->size[1] * Y->size[1];
  for (i30 = 0; i30 < loop_ub; i30++) {
    ehat2->data[i30] = 0.0;
  }

  /*  잔차항의 제곱의 합 */
  t = 1;
  emxInit_real_T1(sp, &ehat, 1, &ei_emlrtRTEI, true);
  emxInit_real_T(sp, &Omega1, 2, &hi_emlrtRTEI, true);
  emxInit_real_T1(sp, &r8, 1, &ii_emlrtRTEI, true);
  while (t - 1 <= Y->size[0] - 1) {
    loop_ub = X->size[0];
    b_loop_ub = X->size[1];
    i30 = X->size[2];
    if (!((t >= 1) && (t <= i30))) {
      emlrtDynamicBoundsCheckR2012b(t, 1, i30, &cd_emlrtBCI, sp);
    }

    i30 = Omega1->size[0] * Omega1->size[1];
    Omega1->size[0] = loop_ub;
    Omega1->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(sp, Omega1, i30, &ai_emlrtRTEI);
    for (i30 = 0; i30 < b_loop_ub; i30++) {
      for (i31 = 0; i31 < loop_ub; i31++) {
        Omega1->data[i31 + Omega1->size[0] * i30] = X->data[(i31 + X->size[0] *
          i30) + X->size[0] * X->size[1] * (t - 1)];
      }
    }

    loop_ub = Y->size[1];
    i30 = Y->size[0];
    if (!((t >= 1) && (t <= i30))) {
      emlrtDynamicBoundsCheckR2012b(t, 1, i30, &bd_emlrtBCI, sp);
    }

    i30 = ehat->size[0];
    ehat->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(sp, ehat, i30, &bi_emlrtRTEI);
    for (i30 = 0; i30 < loop_ub; i30++) {
      ehat->data[i30] = Y->data[(t + Y->size[0] * i30) - 1];
    }

    st.site = &hi_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    i30 = X->size[1];
    if (!(i30 == beta->size[0])) {
      i30 = X->size[0];
      i31 = X->size[1];
      if (((i30 == 1) && (i31 == 1)) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    i30 = X->size[1];
    if ((i30 == 1) || (beta->size[0] == 1)) {
      i30 = r8->size[0];
      r8->size[0] = Omega1->size[0];
      emxEnsureCapacity_real_T2(&st, r8, i30, &di_emlrtRTEI);
      loop_ub = Omega1->size[0];
      for (i30 = 0; i30 < loop_ub; i30++) {
        r8->data[i30] = 0.0;
        b_loop_ub = Omega1->size[1];
        for (i31 = 0; i31 < b_loop_ub; i31++) {
          r8->data[i30] += Omega1->data[i30 + Omega1->size[0] * i31] *
            beta->data[i31];
        }
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      i30 = X->size[0];
      guard1 = false;
      if (i30 == 0) {
        guard1 = true;
      } else {
        i30 = X->size[1];
        if ((i30 == 0) || (beta->size[0] == 0)) {
          guard1 = true;
        } else {
          c_st.site = &qe_emlrtRSI;
          TRANSA = 'N';
          TRANSB = 'N';
          alpha1 = 1.0;
          beta1 = 0.0;
          i30 = X->size[0];
          m_t = (ptrdiff_t)i30;
          n_t = (ptrdiff_t)1;
          i30 = X->size[1];
          k_t = (ptrdiff_t)i30;
          i30 = X->size[0];
          lda_t = (ptrdiff_t)i30;
          i30 = X->size[1];
          ldb_t = (ptrdiff_t)i30;
          i30 = X->size[0];
          ldc_t = (ptrdiff_t)i30;
          i30 = X->size[0];
          i31 = r8->size[0];
          r8->size[0] = i30;
          emxEnsureCapacity_real_T2(&c_st, r8, i31, &mb_emlrtRTEI);
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Omega1->data[0],
                &lda_t, &beta->data[0], &ldb_t, &beta1, &r8->data[0], &ldc_t);
        }
      }

      if (guard1) {
        loop_ub = X->size[0];
        i30 = r8->size[0];
        r8->size[0] = loop_ub;
        emxEnsureCapacity_real_T2(&b_st, r8, i30, &di_emlrtRTEI);
        for (i30 = 0; i30 < loop_ub; i30++) {
          r8->data[i30] = 0.0;
        }
      }
    }

    i30 = ehat->size[0];
    i31 = r8->size[0];
    if (i30 != i31) {
      emlrtSizeEqCheck1DR2012b(i30, i31, &gb_emlrtECI, sp);
    }

    i30 = ehat->size[0];
    emxEnsureCapacity_real_T2(sp, ehat, i30, &ei_emlrtRTEI);
    loop_ub = ehat->size[0];
    for (i30 = 0; i30 < loop_ub; i30++) {
      ehat->data[i30] -= r8->data[i30];
    }

    /*  잔차항 */
    i30 = Omega1->size[0] * Omega1->size[1];
    Omega1->size[0] = ehat->size[0];
    Omega1->size[1] = ehat->size[0];
    emxEnsureCapacity_real_T(sp, Omega1, i30, &fi_emlrtRTEI);
    loop_ub = ehat->size[0];
    for (i30 = 0; i30 < loop_ub; i30++) {
      b_loop_ub = ehat->size[0];
      for (i31 = 0; i31 < b_loop_ub; i31++) {
        Omega1->data[i30 + Omega1->size[0] * i31] = ehat->data[i30] * ehat->
          data[i31];
      }
    }

    for (i30 = 0; i30 < 2; i30++) {
      c_ehat2[i30] = ehat2->size[i30];
      b_Omega1[i30] = Omega1->size[i30];
    }

    if ((c_ehat2[0] != b_Omega1[0]) || (c_ehat2[1] != b_Omega1[1])) {
      emlrtSizeEqCheckNDR2012b(&c_ehat2[0], &b_Omega1[0], &fb_emlrtECI, sp);
    }

    loop_ub = ehat2->size[0] * ehat2->size[1] - 1;
    i30 = ehat2->size[0] * ehat2->size[1];
    emxEnsureCapacity_real_T(sp, ehat2, i30, &gi_emlrtRTEI);
    for (i30 = 0; i30 <= loop_ub; i30++) {
      ehat2->data[i30] += Omega1->data[i30];
    }

    /*  k by k */
    t++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&r8);
  emxFree_real_T(&ehat);

  /*  Wishart와 역Wishart의 관계를 이용 */
  st.site = &ii_emlrtRSI;
  invpd(&st, R0, Omega1);
  for (i30 = 0; i30 < 2; i30++) {
    c_ehat2[i30] = ehat2->size[i30];
    b_Omega1[i30] = Omega1->size[i30];
  }

  emxInit_real_T(sp, &b_ehat2, 2, &ci_emlrtRTEI, true);
  if ((c_ehat2[0] != b_Omega1[0]) || (c_ehat2[1] != b_Omega1[1])) {
    emlrtSizeEqCheckNDR2012b(&c_ehat2[0], &b_Omega1[0], &eb_emlrtECI, sp);
  }

  /*  R0는 Wishart의 hyper-parameter이므로 invpd(R0)를 통해 */
  /*  Inverse-Wishart의 hyperparameter로 전환 */
  i30 = b_ehat2->size[0] * b_ehat2->size[1];
  b_ehat2->size[0] = ehat2->size[0];
  b_ehat2->size[1] = ehat2->size[1];
  emxEnsureCapacity_real_T(sp, b_ehat2, i30, &ci_emlrtRTEI);
  loop_ub = ehat2->size[0] * ehat2->size[1];
  for (i30 = 0; i30 < loop_ub; i30++) {
    b_ehat2->data[i30] = ehat2->data[i30] + Omega1->data[i30];
  }

  emxFree_real_T(&ehat2);
  st.site = &ji_emlrtRSI;
  invpd(&st, b_ehat2, Omega1);

  /*  Wishart의 hyper-parameter로 전환 */
  st.site = &ki_emlrtRSI;
  randwishart(&st, Omega1, (real_T)Y->size[0] + nu, Omega_inv);

  /*  nu(W,prior)-> nu+p+1(IW,prior) */
  /*  -> nu+p+1+T(IW,poster) -> nu+T(W,posterior) */
  st.site = &li_emlrtRSI;
  invpd(&st, Omega_inv, Omega);
  emxFree_real_T(&b_ehat2);
  emxFree_real_T(&Omega1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Gen_Phi(const emlrtStack *sp, const emxArray_real_T *Y0, const
                    emxArray_real_T *YLm, const emxArray_real_T *Phi0, real_T p,
                    const emxArray_real_T *b_, const emxArray_real_T *var_,
                    const emxArray_real_T *Omega_inv, emxArray_real_T *Phi,
                    emxArray_real_T *Fm, emxArray_real_T *beta)
{
  emxArray_real_T *XX;
  int32_T i21;
  real_T beta1;
  real_T alpha1;
  int32_T loop_ub;
  emxArray_real_T *XY;
  int32_T maxdimlen;
  emxArray_real_T *precb_;
  emxArray_real_T *B1;
  emxArray_real_T *absolute;
  emxArray_real_T *a;
  emxArray_real_T *eigF;
  emxArray_real_T *b_XX;
  int32_T b_loop_ub;
  int32_T b_precb_[2];
  int32_T c_XX[2];
  int32_T i22;
  char_T TRANSA;
  char_T TRANSB;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T nx;
  ptrdiff_t k_t;
  int32_T Y0_idx_0;
  ptrdiff_t lda_t;
  boolean_T guard1 = false;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  boolean_T guard2 = false;
  boolean_T empty_non_axis_sizes;
  int32_T result;
  cell_wrap_0 reshapes[2];
  emxArray_creal_T *b_eigF;
  emxArray_boolean_T *test;
  boolean_T minval;
  cell_wrap_0 b_reshapes[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &XX, 2, &tf_emlrtRTEI, true);

  /*  Phi 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  /*  설명변수, 3차원 */
  i21 = XX->size[0] * XX->size[1];
  beta1 = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &mc_emlrtDCI, sp);
  }

  if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
    emlrtIntegerCheckR2012b(beta1, &lc_emlrtDCI, sp);
  }

  XX->size[0] = (int32_T)beta1;
  beta1 = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &oc_emlrtDCI, sp);
  }

  if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
    emlrtIntegerCheckR2012b(beta1, &nc_emlrtDCI, sp);
  }

  XX->size[1] = (int32_T)beta1;
  emxEnsureCapacity_real_T(sp, XX, i21, &tf_emlrtRTEI);
  beta1 = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &qc_emlrtDCI, sp);
  }

  if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
    emlrtIntegerCheckR2012b(beta1, &pc_emlrtDCI, sp);
  }

  alpha1 = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &qc_emlrtDCI, sp);
  }

  if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
    emlrtIntegerCheckR2012b(alpha1, &pc_emlrtDCI, sp);
  }

  loop_ub = (int32_T)beta1 * (int32_T)alpha1;
  for (i21 = 0; i21 < loop_ub; i21++) {
    XX->data[i21] = 0.0;
  }

  emxInit_real_T1(sp, &XY, 1, &uf_emlrtRTEI, true);
  i21 = XY->size[0];
  beta1 = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &sc_emlrtDCI, sp);
  }

  if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
    emlrtIntegerCheckR2012b(beta1, &rc_emlrtDCI, sp);
  }

  XY->size[0] = (int32_T)beta1;
  emxEnsureCapacity_real_T2(sp, XY, i21, &uf_emlrtRTEI);
  beta1 = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &sc_emlrtDCI, sp);
  }

  if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
    emlrtIntegerCheckR2012b(beta1, &rc_emlrtDCI, sp);
  }

  loop_ub = (int32_T)beta1;
  for (i21 = 0; i21 < loop_ub; i21++) {
    XY->data[i21] = 0.0;
  }

  /*  = T-p */
  maxdimlen = 1;
  emxInit_real_T(sp, &precb_, 2, &xg_emlrtRTEI, true);
  emxInit_real_T(sp, &B1, 2, &yg_emlrtRTEI, true);
  emxInit_real_T1(sp, &absolute, 1, &bh_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &xf_emlrtRTEI, true);
  emxInit_real_T1(sp, &eigF, 1, &qg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_XX, 2, &yf_emlrtRTEI, true);
  while (maxdimlen - 1 <= Y0->size[0] - 1) {
    loop_ub = YLm->size[0];
    b_loop_ub = YLm->size[1];
    i21 = YLm->size[2];
    if (!((maxdimlen >= 1) && (maxdimlen <= i21))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i21, &ad_emlrtBCI, sp);
    }

    i21 = B1->size[0] * B1->size[1];
    B1->size[0] = loop_ub;
    B1->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(sp, B1, i21, &vf_emlrtRTEI);
    for (i21 = 0; i21 < b_loop_ub; i21++) {
      for (i22 = 0; i22 < loop_ub; i22++) {
        B1->data[i22 + B1->size[0] * i21] = YLm->data[(i22 + YLm->size[0] * i21)
          + YLm->size[0] * YLm->size[1] * (maxdimlen - 1)];
      }
    }

    /*  x(t)' for SUR regressor */
    st.site = &kf_emlrtRSI;
    i21 = precb_->size[0] * precb_->size[1];
    precb_->size[0] = B1->size[1];
    precb_->size[1] = B1->size[0];
    emxEnsureCapacity_real_T(&st, precb_, i21, &xf_emlrtRTEI);
    loop_ub = B1->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      b_loop_ub = B1->size[1];
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        precb_->data[i22 + precb_->size[0] * i21] = B1->data[i21 + B1->size[0] *
          i22];
      }
    }

    b_st.site = &le_emlrtRSI;
    if (!(precb_->size[1] == Omega_inv->size[0])) {
      if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) ||
          ((Omega_inv->size[0] == 1) && (Omega_inv->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((precb_->size[1] == 1) || (Omega_inv->size[0] == 1)) {
      i21 = a->size[0] * a->size[1];
      a->size[0] = precb_->size[0];
      a->size[1] = Omega_inv->size[1];
      emxEnsureCapacity_real_T(&st, a, i21, &xf_emlrtRTEI);
      loop_ub = precb_->size[0];
      for (i21 = 0; i21 < loop_ub; i21++) {
        b_loop_ub = Omega_inv->size[1];
        for (i22 = 0; i22 < b_loop_ub; i22++) {
          a->data[i21 + a->size[0] * i22] = 0.0;
          nx = precb_->size[1];
          for (Y0_idx_0 = 0; Y0_idx_0 < nx; Y0_idx_0++) {
            a->data[i21 + a->size[0] * i22] += precb_->data[i21 + precb_->size[0]
              * Y0_idx_0] * Omega_inv->data[Y0_idx_0 + Omega_inv->size[0] * i22];
          }
        }
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      if ((precb_->size[0] == 0) || (precb_->size[1] == 0) || (Omega_inv->size[0]
           == 0) || (Omega_inv->size[1] == 0)) {
        i21 = a->size[0] * a->size[1];
        a->size[0] = precb_->size[0];
        a->size[1] = Omega_inv->size[1];
        emxEnsureCapacity_real_T(&b_st, a, i21, &xf_emlrtRTEI);
        loop_ub = precb_->size[0] * Omega_inv->size[1];
        for (i21 = 0; i21 < loop_ub; i21++) {
          a->data[i21] = 0.0;
        }
      } else {
        c_st.site = &pe_emlrtRSI;
        c_st.site = &qe_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)precb_->size[0];
        n_t = (ptrdiff_t)Omega_inv->size[1];
        k_t = (ptrdiff_t)precb_->size[1];
        lda_t = (ptrdiff_t)precb_->size[0];
        ldb_t = (ptrdiff_t)precb_->size[1];
        ldc_t = (ptrdiff_t)precb_->size[0];
        i21 = a->size[0] * a->size[1];
        a->size[0] = precb_->size[0];
        a->size[1] = Omega_inv->size[1];
        emxEnsureCapacity_real_T(&c_st, a, i21, &mb_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &precb_->data[0],
              &lda_t, &Omega_inv->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    st.site = &kf_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    i21 = YLm->size[0];
    if (!(a->size[1] == i21)) {
      guard1 = false;
      if ((a->size[0] == 1) && (a->size[1] == 1)) {
        guard1 = true;
      } else {
        i21 = YLm->size[0];
        i22 = YLm->size[1];
        if ((i21 == 1) && (i22 == 1)) {
          guard1 = true;
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      if (guard1) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      }
    }

    guard1 = false;
    if (a->size[1] == 1) {
      guard1 = true;
    } else {
      i21 = YLm->size[0];
      if (i21 == 1) {
        guard1 = true;
      } else {
        b_st.site = &ke_emlrtRSI;
        guard2 = false;
        if ((a->size[0] == 0) || (a->size[1] == 0)) {
          guard2 = true;
        } else {
          i21 = YLm->size[0];
          if (i21 == 0) {
            guard2 = true;
          } else {
            i21 = YLm->size[1];
            if (i21 == 0) {
              guard2 = true;
            } else {
              c_st.site = &pe_emlrtRSI;
              c_st.site = &qe_emlrtRSI;
              TRANSA = 'N';
              TRANSB = 'N';
              alpha1 = 1.0;
              beta1 = 0.0;
              m_t = (ptrdiff_t)a->size[0];
              i21 = YLm->size[1];
              n_t = (ptrdiff_t)i21;
              k_t = (ptrdiff_t)a->size[1];
              lda_t = (ptrdiff_t)a->size[0];
              ldb_t = (ptrdiff_t)a->size[1];
              ldc_t = (ptrdiff_t)a->size[0];
              i21 = YLm->size[1];
              i22 = b_XX->size[0] * b_XX->size[1];
              b_XX->size[0] = a->size[0];
              b_XX->size[1] = i21;
              emxEnsureCapacity_real_T(&c_st, b_XX, i22, &mb_emlrtRTEI);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0],
                    &lda_t, &B1->data[0], &ldb_t, &beta1, &b_XX->data[0], &ldc_t);
            }
          }
        }

        if (guard2) {
          i21 = YLm->size[1];
          i22 = b_XX->size[0] * b_XX->size[1];
          b_XX->size[0] = a->size[0];
          b_XX->size[1] = i21;
          emxEnsureCapacity_real_T(&b_st, b_XX, i22, &xf_emlrtRTEI);
          loop_ub = a->size[0] * i21;
          for (i21 = 0; i21 < loop_ub; i21++) {
            b_XX->data[i21] = 0.0;
          }
        }
      }
    }

    if (guard1) {
      i21 = b_XX->size[0] * b_XX->size[1];
      b_XX->size[0] = a->size[0];
      b_XX->size[1] = B1->size[1];
      emxEnsureCapacity_real_T(&st, b_XX, i21, &xf_emlrtRTEI);
      loop_ub = a->size[0];
      for (i21 = 0; i21 < loop_ub; i21++) {
        b_loop_ub = B1->size[1];
        for (i22 = 0; i22 < b_loop_ub; i22++) {
          b_XX->data[i21 + b_XX->size[0] * i22] = 0.0;
          nx = a->size[1];
          for (Y0_idx_0 = 0; Y0_idx_0 < nx; Y0_idx_0++) {
            b_XX->data[i21 + b_XX->size[0] * i22] += a->data[i21 + a->size[0] *
              Y0_idx_0] * B1->data[Y0_idx_0 + B1->size[0] * i22];
          }
        }
      }
    }

    for (i21 = 0; i21 < 2; i21++) {
      c_XX[i21] = XX->size[i21];
    }

    for (i21 = 0; i21 < 2; i21++) {
      b_precb_[i21] = b_XX->size[i21];
    }

    if ((c_XX[0] != b_precb_[0]) || (c_XX[1] != b_precb_[1])) {
      emlrtSizeEqCheckNDR2012b(&c_XX[0], &b_precb_[0], &db_emlrtECI, sp);
    }

    loop_ub = XX->size[0] * XX->size[1] - 1;
    i21 = XX->size[0] * XX->size[1];
    emxEnsureCapacity_real_T(sp, XX, i21, &bg_emlrtRTEI);
    for (i21 = 0; i21 <= loop_ub; i21++) {
      XX->data[i21] += b_XX->data[i21];
    }

    /*  B1에서의 summation 부분 */
    st.site = &lf_emlrtRSI;
    i21 = precb_->size[0] * precb_->size[1];
    precb_->size[0] = B1->size[1];
    precb_->size[1] = B1->size[0];
    emxEnsureCapacity_real_T(&st, precb_, i21, &dg_emlrtRTEI);
    loop_ub = B1->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      b_loop_ub = B1->size[1];
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        precb_->data[i22 + precb_->size[0] * i21] = B1->data[i21 + B1->size[0] *
          i22];
      }
    }

    b_st.site = &le_emlrtRSI;
    if (!(precb_->size[1] == Omega_inv->size[0])) {
      if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) ||
          ((Omega_inv->size[0] == 1) && (Omega_inv->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((precb_->size[1] == 1) || (Omega_inv->size[0] == 1)) {
      i21 = a->size[0] * a->size[1];
      a->size[0] = precb_->size[0];
      a->size[1] = Omega_inv->size[1];
      emxEnsureCapacity_real_T(&st, a, i21, &dg_emlrtRTEI);
      loop_ub = precb_->size[0];
      for (i21 = 0; i21 < loop_ub; i21++) {
        b_loop_ub = Omega_inv->size[1];
        for (i22 = 0; i22 < b_loop_ub; i22++) {
          a->data[i21 + a->size[0] * i22] = 0.0;
          nx = precb_->size[1];
          for (Y0_idx_0 = 0; Y0_idx_0 < nx; Y0_idx_0++) {
            a->data[i21 + a->size[0] * i22] += precb_->data[i21 + precb_->size[0]
              * Y0_idx_0] * Omega_inv->data[Y0_idx_0 + Omega_inv->size[0] * i22];
          }
        }
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      if ((precb_->size[0] == 0) || (precb_->size[1] == 0) || (Omega_inv->size[0]
           == 0) || (Omega_inv->size[1] == 0)) {
        i21 = a->size[0] * a->size[1];
        a->size[0] = precb_->size[0];
        a->size[1] = Omega_inv->size[1];
        emxEnsureCapacity_real_T(&b_st, a, i21, &dg_emlrtRTEI);
        loop_ub = precb_->size[0] * Omega_inv->size[1];
        for (i21 = 0; i21 < loop_ub; i21++) {
          a->data[i21] = 0.0;
        }
      } else {
        c_st.site = &pe_emlrtRSI;
        c_st.site = &qe_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)precb_->size[0];
        n_t = (ptrdiff_t)Omega_inv->size[1];
        k_t = (ptrdiff_t)precb_->size[1];
        lda_t = (ptrdiff_t)precb_->size[0];
        ldb_t = (ptrdiff_t)precb_->size[1];
        ldc_t = (ptrdiff_t)precb_->size[0];
        i21 = a->size[0] * a->size[1];
        a->size[0] = precb_->size[0];
        a->size[1] = Omega_inv->size[1];
        emxEnsureCapacity_real_T(&c_st, a, i21, &mb_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &precb_->data[0],
              &lda_t, &Omega_inv->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    loop_ub = Y0->size[1];
    i21 = Y0->size[0];
    if (!((maxdimlen >= 1) && (maxdimlen <= i21))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i21, &yc_emlrtBCI, sp);
    }

    i21 = absolute->size[0];
    absolute->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(sp, absolute, i21, &gg_emlrtRTEI);
    for (i21 = 0; i21 < loop_ub; i21++) {
      absolute->data[i21] = Y0->data[(maxdimlen + Y0->size[0] * i21) - 1];
    }

    st.site = &lf_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    if (!(a->size[1] == absolute->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || (absolute->size[0] == 1))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (absolute->size[0] == 1)) {
      i21 = eigF->size[0];
      eigF->size[0] = a->size[0];
      emxEnsureCapacity_real_T2(&st, eigF, i21, &dg_emlrtRTEI);
      loop_ub = a->size[0];
      for (i21 = 0; i21 < loop_ub; i21++) {
        eigF->data[i21] = 0.0;
        b_loop_ub = a->size[1];
        for (i22 = 0; i22 < b_loop_ub; i22++) {
          eigF->data[i21] += a->data[i21 + a->size[0] * i22] * absolute->
            data[i22];
        }
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (absolute->size[0] == 0)) {
        i21 = eigF->size[0];
        eigF->size[0] = a->size[0];
        emxEnsureCapacity_real_T2(&b_st, eigF, i21, &dg_emlrtRTEI);
        loop_ub = a->size[0];
        for (i21 = 0; i21 < loop_ub; i21++) {
          eigF->data[i21] = 0.0;
        }
      } else {
        c_st.site = &pe_emlrtRSI;
        c_st.site = &qe_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)a->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)a->size[1];
        lda_t = (ptrdiff_t)a->size[0];
        ldb_t = (ptrdiff_t)a->size[1];
        ldc_t = (ptrdiff_t)a->size[0];
        i21 = eigF->size[0];
        eigF->size[0] = a->size[0];
        emxEnsureCapacity_real_T2(&c_st, eigF, i21, &mb_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &absolute->data[0], &ldb_t, &beta1, &eigF->data[0], &ldc_t);
      }
    }

    i21 = XY->size[0];
    i22 = eigF->size[0];
    if (i21 != i22) {
      emlrtSizeEqCheck1DR2012b(i21, i22, &cb_emlrtECI, sp);
    }

    i21 = XY->size[0];
    emxEnsureCapacity_real_T2(sp, XY, i21, &jg_emlrtRTEI);
    loop_ub = XY->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      XY->data[i21] += eigF->data[i21];
    }

    /*  A에서의 summation 부분 */
    maxdimlen++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&a);
  st.site = &mf_emlrtRSI;
  invpd(&st, var_, precb_);
  for (i21 = 0; i21 < 2; i21++) {
    b_precb_[i21] = precb_->size[i21];
    c_XX[i21] = XX->size[i21];
  }

  if ((b_precb_[0] != c_XX[0]) || (b_precb_[1] != c_XX[1])) {
    emlrtSizeEqCheckNDR2012b(&b_precb_[0], &c_XX[0], &bb_emlrtECI, sp);
  }

  loop_ub = precb_->size[0] * precb_->size[1] - 1;
  i21 = XX->size[0] * XX->size[1];
  XX->size[0] = precb_->size[0];
  XX->size[1] = precb_->size[1];
  emxEnsureCapacity_real_T(sp, XX, i21, &wf_emlrtRTEI);
  for (i21 = 0; i21 <= loop_ub; i21++) {
    XX->data[i21] += precb_->data[i21];
  }

  for (i21 = 0; i21 < 2; i21++) {
    c_XX[i21] = XX->size[i21];
  }

  i21 = b_XX->size[0] * b_XX->size[1];
  b_XX->size[0] = XX->size[1];
  b_XX->size[1] = XX->size[0];
  emxEnsureCapacity_real_T(sp, b_XX, i21, &yf_emlrtRTEI);
  loop_ub = XX->size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_loop_ub = XX->size[1];
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      b_XX->data[i22 + b_XX->size[0] * i21] = XX->data[i21 + XX->size[0] * i22];
    }
  }

  for (i21 = 0; i21 < 2; i21++) {
    b_precb_[i21] = b_XX->size[i21];
  }

  if ((c_XX[0] != b_precb_[0]) || (c_XX[1] != b_precb_[1])) {
    emlrtSizeEqCheckNDR2012b(&c_XX[0], &b_precb_[0], &ab_emlrtECI, sp);
  }

  i21 = b_XX->size[0] * b_XX->size[1];
  b_XX->size[0] = XX->size[0];
  b_XX->size[1] = XX->size[1];
  emxEnsureCapacity_real_T(sp, b_XX, i21, &c_emlrtRTEI);
  loop_ub = XX->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_loop_ub = XX->size[0];
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      b_XX->data[i22 + b_XX->size[0] * i21] = 0.5 * (XX->data[i22 + XX->size[0] *
        i21] + XX->data[i21 + XX->size[0] * i22]);
    }
  }

  emxFree_real_T(&XX);
  st.site = &nf_emlrtRSI;
  invpd(&st, b_XX, B1);
  for (i21 = 0; i21 < 2; i21++) {
    b_precb_[i21] = B1->size[i21];
  }

  i21 = b_XX->size[0] * b_XX->size[1];
  b_XX->size[0] = B1->size[1];
  b_XX->size[1] = B1->size[0];
  emxEnsureCapacity_real_T(sp, b_XX, i21, &ag_emlrtRTEI);
  loop_ub = B1->size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_loop_ub = B1->size[1];
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      b_XX->data[i22 + b_XX->size[0] * i21] = B1->data[i21 + B1->size[0] * i22];
    }
  }

  for (i21 = 0; i21 < 2; i21++) {
    c_XX[i21] = b_XX->size[i21];
  }

  if ((b_precb_[0] != c_XX[0]) || (b_precb_[1] != c_XX[1])) {
    emlrtSizeEqCheckNDR2012b(&b_precb_[0], &c_XX[0], &y_emlrtECI, sp);
  }

  i21 = b_XX->size[0] * b_XX->size[1];
  b_XX->size[0] = B1->size[0];
  b_XX->size[1] = B1->size[1];
  emxEnsureCapacity_real_T(sp, b_XX, i21, &c_emlrtRTEI);
  loop_ub = B1->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_loop_ub = B1->size[0];
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      b_XX->data[i22 + b_XX->size[0] * i21] = 0.5 * (B1->data[i22 + B1->size[0] *
        i21] + B1->data[i21 + B1->size[0] * i22]);
    }
  }

  i21 = B1->size[0] * B1->size[1];
  B1->size[0] = b_XX->size[0];
  B1->size[1] = b_XX->size[1];
  emxEnsureCapacity_real_T(sp, B1, i21, &cg_emlrtRTEI);
  loop_ub = b_XX->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_loop_ub = b_XX->size[0];
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      B1->data[i22 + B1->size[0] * i21] = b_XX->data[i22 + b_XX->size[0] * i21];
    }
  }

  st.site = &of_emlrtRSI;
  b_st.site = &le_emlrtRSI;
  if (!(precb_->size[1] == b_->size[0])) {
    if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) || (b_->size[0] == 1))
    {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((precb_->size[1] == 1) || (b_->size[0] == 1)) {
    i21 = eigF->size[0];
    eigF->size[0] = precb_->size[0];
    emxEnsureCapacity_real_T2(&st, eigF, i21, &eg_emlrtRTEI);
    loop_ub = precb_->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      eigF->data[i21] = 0.0;
      b_loop_ub = precb_->size[1];
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        eigF->data[i21] += precb_->data[i21 + precb_->size[0] * i22] * b_->
          data[i22];
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((precb_->size[0] == 0) || (precb_->size[1] == 0) || (b_->size[0] == 0))
    {
      i21 = eigF->size[0];
      eigF->size[0] = precb_->size[0];
      emxEnsureCapacity_real_T2(&b_st, eigF, i21, &eg_emlrtRTEI);
      loop_ub = precb_->size[0];
      for (i21 = 0; i21 < loop_ub; i21++) {
        eigF->data[i21] = 0.0;
      }
    } else {
      c_st.site = &pe_emlrtRSI;
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)precb_->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)precb_->size[1];
      lda_t = (ptrdiff_t)precb_->size[0];
      ldb_t = (ptrdiff_t)precb_->size[1];
      ldc_t = (ptrdiff_t)precb_->size[0];
      i21 = eigF->size[0];
      eigF->size[0] = precb_->size[0];
      emxEnsureCapacity_real_T2(&c_st, eigF, i21, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &precb_->data[0],
            &lda_t, &b_->data[0], &ldb_t, &beta1, &eigF->data[0], &ldc_t);
    }
  }

  i21 = XY->size[0];
  i22 = eigF->size[0];
  if (i21 != i22) {
    emlrtSizeEqCheck1DR2012b(i21, i22, &x_emlrtECI, sp);
  }

  i21 = XY->size[0];
  emxEnsureCapacity_real_T2(sp, XY, i21, &fg_emlrtRTEI);
  loop_ub = XY->size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    XY->data[i21] += eigF->data[i21];
  }

  /*  b_ = B0 */
  st.site = &pf_emlrtRSI;
  b_st.site = &le_emlrtRSI;
  if (!(B1->size[1] == XY->size[0])) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (XY->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((B1->size[1] == 1) || (XY->size[0] == 1)) {
    i21 = beta->size[0];
    beta->size[0] = B1->size[0];
    emxEnsureCapacity_real_T2(&st, beta, i21, &hg_emlrtRTEI);
    loop_ub = B1->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      beta->data[i21] = 0.0;
      b_loop_ub = B1->size[1];
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        beta->data[i21] += B1->data[i21 + B1->size[0] * i22] * XY->data[i22];
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((B1->size[0] == 0) || (B1->size[1] == 0) || (XY->size[0] == 0)) {
      i21 = beta->size[0];
      beta->size[0] = B1->size[0];
      emxEnsureCapacity_real_T2(&b_st, beta, i21, &hg_emlrtRTEI);
      loop_ub = B1->size[0];
      for (i21 = 0; i21 < loop_ub; i21++) {
        beta->data[i21] = 0.0;
      }
    } else {
      c_st.site = &pe_emlrtRSI;
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)B1->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)B1->size[1];
      lda_t = (ptrdiff_t)B1->size[0];
      ldb_t = (ptrdiff_t)B1->size[1];
      ldc_t = (ptrdiff_t)B1->size[0];
      i21 = beta->size[0];
      beta->size[0] = B1->size[0];
      emxEnsureCapacity_real_T2(&c_st, beta, i21, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &B1->data[0], &lda_t,
            &XY->data[0], &ldb_t, &beta1, &beta->data[0], &ldc_t);
    }
  }

  /*  full conditional mean */
  st.site = &qf_emlrtRSI;
  b_cholmod(&st, B1, b_XX);
  i21 = precb_->size[0] * precb_->size[1];
  precb_->size[0] = b_XX->size[1];
  precb_->size[1] = b_XX->size[0];
  emxEnsureCapacity_real_T(sp, precb_, i21, &ig_emlrtRTEI);
  loop_ub = b_XX->size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_loop_ub = b_XX->size[1];
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      precb_->data[i22 + precb_->size[0] * i21] = b_XX->data[i21 + b_XX->size[0]
        * i22];
    }
  }

  emxFree_real_T(&b_XX);
  st.site = &rf_emlrtRSI;
  randn(&st, p * (real_T)Y0->size[1] * (real_T)Y0->size[1], absolute);
  st.site = &rf_emlrtRSI;
  b_st.site = &le_emlrtRSI;
  if (!(precb_->size[1] == absolute->size[0])) {
    if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) || (absolute->size[0]
         == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((precb_->size[1] == 1) || (absolute->size[0] == 1)) {
    i21 = eigF->size[0];
    eigF->size[0] = precb_->size[0];
    emxEnsureCapacity_real_T2(&st, eigF, i21, &kg_emlrtRTEI);
    loop_ub = precb_->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      eigF->data[i21] = 0.0;
      b_loop_ub = precb_->size[1];
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        eigF->data[i21] += precb_->data[i21 + precb_->size[0] * i22] *
          absolute->data[i22];
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((precb_->size[0] == 0) || (precb_->size[1] == 0) || (absolute->size[0] ==
         0)) {
      i21 = eigF->size[0];
      eigF->size[0] = precb_->size[0];
      emxEnsureCapacity_real_T2(&b_st, eigF, i21, &kg_emlrtRTEI);
      loop_ub = precb_->size[0];
      for (i21 = 0; i21 < loop_ub; i21++) {
        eigF->data[i21] = 0.0;
      }
    } else {
      c_st.site = &pe_emlrtRSI;
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)precb_->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)precb_->size[1];
      lda_t = (ptrdiff_t)precb_->size[0];
      ldb_t = (ptrdiff_t)precb_->size[1];
      ldc_t = (ptrdiff_t)precb_->size[0];
      i21 = eigF->size[0];
      eigF->size[0] = precb_->size[0];
      emxEnsureCapacity_real_T2(&c_st, eigF, i21, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &precb_->data[0],
            &lda_t, &absolute->data[0], &ldb_t, &beta1, &eigF->data[0], &ldc_t);
    }
  }

  i21 = beta->size[0];
  i22 = eigF->size[0];
  if (i21 != i22) {
    emlrtSizeEqCheck1DR2012b(i21, i22, &w_emlrtECI, sp);
  }

  i21 = beta->size[0];
  emxEnsureCapacity_real_T2(sp, beta, i21, &lg_emlrtRTEI);
  loop_ub = beta->size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    beta->data[i21] += eigF->data[i21];
  }

  /*  beta sampling 하기 */
  /*  F 행렬만들기 */
  st.site = &sf_emlrtRSI;
  alpha1 = p * (real_T)Y0->size[1];
  nx = beta->size[0];
  b_st.site = &nc_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  assertValidSizeArg(&c_st, alpha1);
  c_st.site = &pc_emlrtRSI;
  assertValidSizeArg(&c_st, Y0->size[1]);
  maxdimlen = beta->size[0];
  if (1 > beta->size[0]) {
    maxdimlen = 1;
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if ((int32_T)alpha1 > maxdimlen) {
    b_st.site = &oc_emlrtRSI;
    c_error(&b_st);
  }

  if (Y0->size[1] > maxdimlen) {
    b_st.site = &oc_emlrtRSI;
    c_error(&b_st);
  }

  if (!((int32_T)alpha1 >= 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &dk_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if ((int32_T)alpha1 * Y0->size[1] != beta->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &ek_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  i21 = Phi->size[0] * Phi->size[1];
  Phi->size[0] = (int32_T)alpha1;
  Phi->size[1] = Y0->size[1];
  emxEnsureCapacity_real_T(&st, Phi, i21, &mg_emlrtRTEI);
  loop_ub = (int32_T)alpha1 * Y0->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    Phi->data[i21] = beta->data[i21];
  }

  /*  p*k by k, F 행렬의 1행 Block의 전치 */
  st.site = &tf_emlrtRSI;
  eye(&st, (p - 1.0) * (real_T)Y0->size[1], precb_);
  beta1 = (real_T)Y0->size[1] * (p - 1.0);
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &kc_emlrtDCI, sp);
  }

  if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
    emlrtIntegerCheckR2012b(beta1, &jc_emlrtDCI, sp);
  }

  st.site = &tf_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (!((precb_->size[0] == 0) || (precb_->size[1] == 0))) {
    Y0_idx_0 = precb_->size[0];
  } else {
    maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
    nx = Y0->size[1];
    if (!((maxdimlen == 0) || (nx == 0))) {
      Y0_idx_0 = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
    } else {
      Y0_idx_0 = muIntScalarMax_sint32(precb_->size[0], 0);
      maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
      if (maxdimlen > Y0_idx_0) {
        Y0_idx_0 = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
      }
    }
  }

  c_st.site = &uc_emlrtRSI;
  if ((precb_->size[0] == Y0_idx_0) || ((precb_->size[0] == 0) || (precb_->size
        [1] == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
  if (maxdimlen == Y0_idx_0) {
  } else {
    maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
    nx = Y0->size[1];
    if ((maxdimlen == 0) || (nx == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (Y0_idx_0 == 0);
  if (empty_non_axis_sizes || (!((precb_->size[0] == 0) || (precb_->size[1] == 0))))
  {
    result = precb_->size[1];
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes) {
    nx = Y0->size[1];
  } else {
    maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
    nx = Y0->size[1];
    if (!((maxdimlen == 0) || (nx == 0))) {
      nx = Y0->size[1];
    } else {
      nx = 0;
    }
  }

  emxInitMatrix_cell_wrap_0(&b_st, reshapes, &wc_emlrtRTEI, true);
  i21 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
  reshapes[1].f1->size[0] = Y0_idx_0;
  reshapes[1].f1->size[1] = nx;
  emxEnsureCapacity_real_T(&b_st, reshapes[1].f1, i21, &f_emlrtRTEI);
  loop_ub = Y0_idx_0 * nx;
  for (i21 = 0; i21 < loop_ub; i21++) {
    reshapes[1].f1->data[i21] = 0.0;
  }

  i21 = B1->size[0] * B1->size[1];
  B1->size[0] = Y0_idx_0;
  B1->size[1] = result + reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T(&b_st, B1, i21, &ng_emlrtRTEI);
  for (i21 = 0; i21 < result; i21++) {
    for (i22 = 0; i22 < Y0_idx_0; i22++) {
      B1->data[i22 + B1->size[0] * i21] = precb_->data[i22 + Y0_idx_0 * i21];
    }
  }

  loop_ub = reshapes[1].f1->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_loop_ub = reshapes[1].f1->size[0];
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      B1->data[i22 + B1->size[0] * (i21 + result)] = reshapes[1].f1->data[i22 +
        reshapes[1].f1->size[0] * i21];
    }
  }

  emxFreeMatrix_cell_wrap_0(reshapes);
  st.site = &tf_emlrtRSI;
  maxdimlen = Y0->size[1];
  i21 = precb_->size[0] * precb_->size[1];
  precb_->size[0] = maxdimlen;
  precb_->size[1] = (int32_T)alpha1;
  emxEnsureCapacity_real_T(&st, precb_, i21, &og_emlrtRTEI);
  loop_ub = (int32_T)alpha1;
  for (i21 = 0; i21 < loop_ub; i21++) {
    for (i22 = 0; i22 < maxdimlen; i22++) {
      precb_->data[i22 + precb_->size[0] * i21] = beta->data[i21 + (int32_T)
        alpha1 * i22];
    }
  }

  b_st.site = &tc_emlrtRSI;
  if (!((precb_->size[0] == 0) || (precb_->size[1] == 0))) {
    result = precb_->size[1];
  } else if (!((B1->size[0] == 0) || (B1->size[1] == 0))) {
    result = B1->size[1];
  } else {
    result = muIntScalarMax_sint32(precb_->size[1], 0);
    if (B1->size[1] > result) {
      result = B1->size[1];
    }
  }

  c_st.site = &uc_emlrtRSI;
  if ((precb_->size[1] == result) || ((precb_->size[0] == 0) || (precb_->size[1]
        == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((B1->size[1] == result) || ((B1->size[0] == 0) || (B1->size[1] == 0))) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (!((precb_->size[0] == 0) || (precb_->size[1] == 0))))
  {
    maxdimlen = precb_->size[0];
  } else {
    maxdimlen = 0;
  }

  if (empty_non_axis_sizes || (!((B1->size[0] == 0) || (B1->size[1] == 0)))) {
    nx = B1->size[0];
  } else {
    nx = 0;
  }

  i21 = Fm->size[0] * Fm->size[1];
  Fm->size[0] = maxdimlen + nx;
  Fm->size[1] = result;
  emxEnsureCapacity_real_T(&b_st, Fm, i21, &pg_emlrtRTEI);
  for (i21 = 0; i21 < result; i21++) {
    for (i22 = 0; i22 < maxdimlen; i22++) {
      Fm->data[i22 + Fm->size[0] * i21] = precb_->data[i22 + maxdimlen * i21];
    }
  }

  for (i21 = 0; i21 < result; i21++) {
    for (i22 = 0; i22 < nx; i22++) {
      Fm->data[(i22 + maxdimlen) + Fm->size[0] * i21] = B1->data[i22 + nx * i21];
    }
  }

  emxInit_creal_T(&b_st, &b_eigF, 1, &ah_emlrtRTEI, true);

  /*  p*k by p*k */
  st.site = &uf_emlrtRSI;
  eig(&st, Fm, b_eigF);
  i21 = eigF->size[0];
  eigF->size[0] = b_eigF->size[0];
  emxEnsureCapacity_real_T2(sp, eigF, i21, &qg_emlrtRTEI);
  loop_ub = b_eigF->size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    eigF->data[i21] = b_eigF->data[i21].im;
  }

  st.site = &vf_emlrtRSI;
  power(&st, eigF, XY);
  st.site = &wf_emlrtRSI;
  d_abs(&st, b_eigF, eigF);
  st.site = &wf_emlrtRSI;
  power(&st, eigF, absolute);
  i21 = absolute->size[0];
  i22 = XY->size[0];
  if (i21 != i22) {
    emlrtSizeEqCheck1DR2012b(i21, i22, &v_emlrtECI, sp);
  }

  st.site = &xf_emlrtRSI;
  i21 = absolute->size[0];
  emxEnsureCapacity_real_T2(&st, absolute, i21, &rg_emlrtRTEI);
  loop_ub = absolute->size[0];
  emxFree_real_T(&eigF);
  emxFree_creal_T(&b_eigF);
  for (i21 = 0; i21 < loop_ub; i21++) {
    absolute->data[i21] += XY->data[i21];
  }

  emxFree_real_T(&XY);
  empty_non_axis_sizes = false;
  for (maxdimlen = 0; maxdimlen < absolute->size[0]; maxdimlen++) {
    if (empty_non_axis_sizes || (absolute->data[maxdimlen] < 0.0)) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (empty_non_axis_sizes) {
    b_st.site = &je_emlrtRSI;
    e_error(&b_st);
  }

  b_st.site = &ci_emlrtRSI;
  nx = absolute->size[0];
  c_st.site = &di_emlrtRSI;
  empty_non_axis_sizes = ((!(1 > absolute->size[0])) && (absolute->size[0] >
    2147483646));
  if (empty_non_axis_sizes) {
    d_st.site = &dc_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    absolute->data[maxdimlen] = muDoubleScalarSqrt(absolute->data[maxdimlen]);
  }

  emxInit_boolean_T(&b_st, &test, 1, &sg_emlrtRTEI, true);
  i21 = test->size[0];
  test->size[0] = absolute->size[0];
  emxEnsureCapacity_boolean_T(sp, test, i21, &sg_emlrtRTEI);
  loop_ub = absolute->size[0];
  for (i21 = 0; i21 < loop_ub; i21++) {
    test->data[i21] = (absolute->data[i21] < 1.0);
  }

  emxFree_real_T(&absolute);
  st.site = &yf_emlrtRSI;
  b_st.site = &ei_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  if ((test->size[0] == 1) || (test->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(test->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ee_emlrtRSI;
  f_st.site = &fi_emlrtRSI;
  minval = test->data[0];
  g_st.site = &gi_emlrtRSI;
  empty_non_axis_sizes = ((!(2 > test->size[0])) && (test->size[0] > 2147483646));
  if (empty_non_axis_sizes) {
    h_st.site = &dc_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }

  for (maxdimlen = 1; maxdimlen < test->size[0]; maxdimlen++) {
    if ((int32_T)minval > (int32_T)test->data[maxdimlen]) {
      minval = test->data[maxdimlen];
    }
  }

  emxFree_boolean_T(&test);
  if (!minval) {
    i21 = Phi->size[0] * Phi->size[1];
    Phi->size[0] = Phi0->size[0];
    Phi->size[1] = Phi0->size[1];
    emxEnsureCapacity_real_T(sp, Phi, i21, &tg_emlrtRTEI);
    loop_ub = Phi0->size[0] * Phi0->size[1];
    for (i21 = 0; i21 < loop_ub; i21++) {
      Phi->data[i21] = Phi0->data[i21];
    }

    /*  안정성 조건을 만족하지 못하면 지난 iteration 값을 저장 */
    st.site = &ag_emlrtRSI;
    eye(&st, (p - 1.0) * (real_T)Y0->size[1], precb_);
    beta1 = (real_T)Y0->size[1] * (p - 1.0);
    if (!(beta1 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(beta1, &ic_emlrtDCI, sp);
    }

    if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
      emlrtIntegerCheckR2012b(beta1, &hc_emlrtDCI, sp);
    }

    st.site = &ag_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!((precb_->size[0] == 0) || (precb_->size[1] == 0))) {
      Y0_idx_0 = precb_->size[0];
    } else {
      maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
      nx = Y0->size[1];
      if (!((maxdimlen == 0) || (nx == 0))) {
        Y0_idx_0 = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
      } else {
        Y0_idx_0 = muIntScalarMax_sint32(precb_->size[0], 0);
        maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
        if (maxdimlen > Y0_idx_0) {
          Y0_idx_0 = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
        }
      }
    }

    c_st.site = &uc_emlrtRSI;
    if ((precb_->size[0] == Y0_idx_0) || ((precb_->size[0] == 0) ||
         (precb_->size[1] == 0))) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
    if (maxdimlen == Y0_idx_0) {
    } else {
      maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
      nx = Y0->size[1];
      if ((maxdimlen == 0) || (nx == 0)) {
      } else {
        empty_non_axis_sizes = false;
      }
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (Y0_idx_0 == 0);
    if (empty_non_axis_sizes || (!((precb_->size[0] == 0) || (precb_->size[1] ==
           0)))) {
      result = precb_->size[1];
    } else {
      result = 0;
    }

    if (empty_non_axis_sizes) {
      nx = Y0->size[1];
    } else {
      maxdimlen = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
      nx = Y0->size[1];
      if (!((maxdimlen == 0) || (nx == 0))) {
        nx = Y0->size[1];
      } else {
        nx = 0;
      }
    }

    emxInitMatrix_cell_wrap_0(&b_st, b_reshapes, &wc_emlrtRTEI, true);
    i21 = b_reshapes[1].f1->size[0] * b_reshapes[1].f1->size[1];
    b_reshapes[1].f1->size[0] = Y0_idx_0;
    b_reshapes[1].f1->size[1] = nx;
    emxEnsureCapacity_real_T(&b_st, b_reshapes[1].f1, i21, &f_emlrtRTEI);
    loop_ub = Y0_idx_0 * nx;
    for (i21 = 0; i21 < loop_ub; i21++) {
      b_reshapes[1].f1->data[i21] = 0.0;
    }

    i21 = B1->size[0] * B1->size[1];
    B1->size[0] = Y0_idx_0;
    B1->size[1] = result + b_reshapes[1].f1->size[1];
    emxEnsureCapacity_real_T(&b_st, B1, i21, &ug_emlrtRTEI);
    for (i21 = 0; i21 < result; i21++) {
      for (i22 = 0; i22 < Y0_idx_0; i22++) {
        B1->data[i22 + B1->size[0] * i21] = precb_->data[i22 + Y0_idx_0 * i21];
      }
    }

    loop_ub = b_reshapes[1].f1->size[1];
    for (i21 = 0; i21 < loop_ub; i21++) {
      b_loop_ub = b_reshapes[1].f1->size[0];
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        B1->data[i22 + B1->size[0] * (i21 + result)] = b_reshapes[1].f1->
          data[i22 + b_reshapes[1].f1->size[0] * i21];
      }
    }

    emxFreeMatrix_cell_wrap_0(b_reshapes);
    st.site = &ag_emlrtRSI;
    i21 = precb_->size[0] * precb_->size[1];
    precb_->size[0] = Phi0->size[1];
    precb_->size[1] = Phi0->size[0];
    emxEnsureCapacity_real_T(&st, precb_, i21, &vg_emlrtRTEI);
    loop_ub = Phi0->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      b_loop_ub = Phi0->size[1];
      for (i22 = 0; i22 < b_loop_ub; i22++) {
        precb_->data[i22 + precb_->size[0] * i21] = Phi0->data[i21 + Phi0->size
          [0] * i22];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!((precb_->size[0] == 0) || (precb_->size[1] == 0))) {
      result = precb_->size[1];
    } else if (!((B1->size[0] == 0) || (B1->size[1] == 0))) {
      result = B1->size[1];
    } else {
      result = muIntScalarMax_sint32(precb_->size[1], 0);
      if (B1->size[1] > result) {
        result = B1->size[1];
      }
    }

    c_st.site = &uc_emlrtRSI;
    if ((precb_->size[1] == result) || ((precb_->size[0] == 0) || (precb_->size
          [1] == 0))) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((B1->size[1] == result) || ((B1->size[0] == 0) || (B1->size[1] == 0))) {
    } else {
      empty_non_axis_sizes = false;
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || (!((precb_->size[0] == 0) || (precb_->size[1] ==
           0)))) {
      maxdimlen = precb_->size[0];
    } else {
      maxdimlen = 0;
    }

    if (empty_non_axis_sizes || (!((B1->size[0] == 0) || (B1->size[1] == 0)))) {
      nx = B1->size[0];
    } else {
      nx = 0;
    }

    i21 = Fm->size[0] * Fm->size[1];
    Fm->size[0] = maxdimlen + nx;
    Fm->size[1] = result;
    emxEnsureCapacity_real_T(&b_st, Fm, i21, &wg_emlrtRTEI);
    for (i21 = 0; i21 < result; i21++) {
      for (i22 = 0; i22 < maxdimlen; i22++) {
        Fm->data[i22 + Fm->size[0] * i21] = precb_->data[i22 + maxdimlen * i21];
      }
    }

    for (i21 = 0; i21 < result; i21++) {
      for (i22 = 0; i22 < nx; i22++) {
        Fm->data[(i22 + maxdimlen) + Fm->size[0] * i21] = B1->data[i22 + nx *
          i21];
      }
    }
  }

  emxFree_real_T(&B1);
  emxFree_real_T(&precb_);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "clc", true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m13;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m13, 4, pArrays, "feval", true, location);
}

static void format(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "format", true, location);
}

static void makeYX(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                   emxArray_real_T *Y0, emxArray_real_T *YLm, emxArray_real_T
                   *YL, emxArray_real_T *Y0_mean, emxArray_real_T *YL_mean)
{
  int32_T nc;
  int32_T i15;
  int32_T kidx;
  int32_T i16;
  int32_T ma;
  emxArray_real_T *b_Y0;
  int32_T loop_ub;
  int32_T j2;
  real_T d0;
  real_T kki;
  int32_T i;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  int32_T iv27[2];
  int32_T iv28[2];
  int32_T t;
  emxArray_real_T *xt;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  종속, 설명변수 만들기 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  nc = Y->size[1];

  /*  변수의 수 */
  /*  시계열의 크기 */
  if (p + 1.0 > Y->size[0]) {
    i15 = 0;
    kidx = 0;
  } else {
    if (p + 1.0 != (int32_T)muDoubleScalarFloor(p + 1.0)) {
      emlrtIntegerCheckR2012b(p + 1.0, &sb_emlrtDCI, sp);
    }

    i15 = Y->size[0];
    i16 = (int32_T)(p + 1.0);
    if (!((i16 >= 1) && (i16 <= i15))) {
      emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &qc_emlrtBCI, sp);
    }

    i15 = i16 - 1;
    i16 = Y->size[0];
    kidx = Y->size[0];
    if (!((kidx >= 1) && (kidx <= i16))) {
      emlrtDynamicBoundsCheckR2012b(kidx, 1, i16, &rc_emlrtBCI, sp);
    }
  }

  ma = Y->size[1];
  i16 = Y0->size[0] * Y0->size[1];
  Y0->size[0] = kidx - i15;
  Y0->size[1] = ma;
  emxEnsureCapacity_real_T(sp, Y0, i16, &bf_emlrtRTEI);
  for (i16 = 0; i16 < ma; i16++) {
    loop_ub = kidx - i15;
    for (j2 = 0; j2 < loop_ub; j2++) {
      Y0->data[j2 + Y0->size[0] * i16] = Y->data[(i15 + j2) + Y->size[0] * i16];
    }
  }

  emxInit_real_T(sp, &b_Y0, 2, &cf_emlrtRTEI, true);

  /*  종속변수 */
  st.site = &xe_emlrtRSI;
  meanc(&st, Y0, Y0_mean);
  i15 = b_Y0->size[0] * b_Y0->size[1];
  b_Y0->size[0] = Y0->size[0];
  b_Y0->size[1] = Y0->size[1];
  emxEnsureCapacity_real_T(sp, b_Y0, i15, &cf_emlrtRTEI);
  ma = Y0->size[0] * Y0->size[1];
  for (i15 = 0; i15 < ma; i15++) {
    b_Y0->data[i15] = Y0->data[i15];
  }

  st.site = &ye_emlrtRSI;
  demeanc(&st, b_Y0, Y0);

  /*  설명변수(=Y의 과거값) 만들기 */
  i15 = YL->size[0] * YL->size[1];
  d0 = (real_T)Y->size[0] - p;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &vb_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &ub_emlrtDCI, sp);
  }

  YL->size[0] = (int32_T)d0;
  d0 = p * (real_T)Y->size[1];
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &xb_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &wb_emlrtDCI, sp);
  }

  YL->size[1] = (int32_T)d0;
  emxEnsureCapacity_real_T(sp, YL, i15, &df_emlrtRTEI);
  d0 = (real_T)Y->size[0] - p;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &ec_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &dc_emlrtDCI, sp);
  }

  kki = p * (real_T)Y->size[1];
  if (!(kki >= 0.0)) {
    emlrtNonNegativeCheckR2012b(kki, &ec_emlrtDCI, sp);
  }

  if (kki != (int32_T)muDoubleScalarFloor(kki)) {
    emlrtIntegerCheckR2012b(kki, &dc_emlrtDCI, sp);
  }

  ma = (int32_T)d0 * (int32_T)kki;
  for (i15 = 0; i15 < ma; i15++) {
    YL->data[i15] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, p, mxDOUBLE_CLASS, (int32_T)p,
    &uk_emlrtRTEI, sp);
  i = 0;
  emxInit_int32_T(sp, &r5, 1, &mf_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &mf_emlrtRTEI, true);
  while (i <= (int32_T)p - 1) {
    d0 = (p + 1.0) - (1.0 + (real_T)i);
    kki = (real_T)Y->size[0] - (1.0 + (real_T)i);
    if (d0 > kki) {
      i15 = 0;
      kidx = 0;
    } else {
      if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
        emlrtIntegerCheckR2012b(d0, &tb_emlrtDCI, sp);
      }

      i15 = Y->size[0];
      i16 = (int32_T)d0;
      if (!((i16 >= 1) && (i16 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &sc_emlrtBCI, sp);
      }

      i15 = i16 - 1;
      i16 = Y->size[0];
      kidx = (int32_T)kki;
      if (!((kidx >= 1) && (kidx <= i16))) {
        emlrtDynamicBoundsCheckR2012b(kidx, 1, i16, &tc_emlrtBCI, sp);
      }
    }

    d0 = (real_T)nc * ((1.0 + (real_T)i) - 1.0) + 1.0;
    kki = (real_T)nc * (1.0 + (real_T)i);
    if (d0 > kki) {
      i16 = 0;
      loop_ub = 0;
    } else {
      i16 = YL->size[1];
      j2 = (int32_T)d0;
      if (!((j2 >= 1) && (j2 <= i16))) {
        emlrtDynamicBoundsCheckR2012b(j2, 1, i16, &uc_emlrtBCI, sp);
      }

      i16 = j2 - 1;
      j2 = YL->size[1];
      loop_ub = (int32_T)kki;
      if (!((loop_ub >= 1) && (loop_ub <= j2))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, j2, &vc_emlrtBCI, sp);
      }
    }

    ma = YL->size[0];
    j2 = r5->size[0];
    r5->size[0] = ma;
    emxEnsureCapacity_int32_T(sp, r5, j2, &ff_emlrtRTEI);
    for (j2 = 0; j2 < ma; j2++) {
      r5->data[j2] = j2;
    }

    j2 = r6->size[0];
    r6->size[0] = loop_ub - i16;
    emxEnsureCapacity_int32_T(sp, r6, j2, &hf_emlrtRTEI);
    ma = loop_ub - i16;
    for (j2 = 0; j2 < ma; j2++) {
      r6->data[j2] = i16 + j2;
    }

    i16 = Y->size[1];
    iv27[0] = r5->size[0];
    iv27[1] = r6->size[0];
    iv28[0] = kidx - i15;
    iv28[1] = i16;
    emlrtSubAssignSizeCheckR2012b(&iv27[0], 2, &iv28[0], 2, &s_emlrtECI, sp);
    ma = Y->size[1] - 1;
    for (i16 = 0; i16 <= ma; i16++) {
      loop_ub = kidx - i15;
      for (j2 = 0; j2 < loop_ub; j2++) {
        YL->data[r5->data[j2] + YL->size[0] * r6->data[i16]] = Y->data[(i15 + j2)
          + Y->size[0] * i16];
      }
    }

    /*  p 시차에 해당하는 전체 설명변수 데이터 블록을 YL의 (p-1) 시차 블록의 우측에 저장 */
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &af_emlrtRSI;
  meanc(&st, YL, YL_mean);
  i15 = b_Y0->size[0] * b_Y0->size[1];
  b_Y0->size[0] = YL->size[0];
  b_Y0->size[1] = YL->size[1];
  emxEnsureCapacity_real_T(sp, b_Y0, i15, &ef_emlrtRTEI);
  ma = YL->size[0] * YL->size[1];
  for (i15 = 0; i15 < ma; i15++) {
    b_Y0->data[i15] = YL->data[i15];
  }

  st.site = &bf_emlrtRSI;
  demeanc(&st, b_Y0, YL);

  /*  각 식에 있는 설명변수의 수 */
  kki = (real_T)Y->size[1] * (p * (real_T)Y->size[1]);

  /*  축약형 VAR의 회귀계수의 수 */
  i15 = YLm->size[0] * YLm->size[1] * YLm->size[2];
  YLm->size[0] = Y->size[1];
  if (!(kki >= 0.0)) {
    emlrtNonNegativeCheckR2012b(kki, &ac_emlrtDCI, sp);
  }

  if (kki != (int32_T)muDoubleScalarFloor(kki)) {
    emlrtIntegerCheckR2012b(kki, &yb_emlrtDCI, sp);
  }

  YLm->size[1] = (int32_T)kki;
  d0 = (real_T)Y->size[0] - p;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &cc_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &bc_emlrtDCI, sp);
  }

  YLm->size[2] = (int32_T)d0;
  emxEnsureCapacity_real_T1(sp, YLm, i15, &gf_emlrtRTEI);
  if (!(kki >= 0.0)) {
    emlrtNonNegativeCheckR2012b(kki, &gc_emlrtDCI, sp);
  }

  if (kki != (int32_T)muDoubleScalarFloor(kki)) {
    emlrtIntegerCheckR2012b(kki, &fc_emlrtDCI, sp);
  }

  d0 = (real_T)Y->size[0] - p;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &gc_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &fc_emlrtDCI, sp);
  }

  ma = Y->size[1] * (int32_T)kki * (int32_T)d0;
  for (i15 = 0; i15 < ma; i15++) {
    YLm->data[i15] = 0.0;
  }

  /*  설명변수를 3차원으로 새롭게 저장할 방 */
  d0 = (real_T)Y->size[0] - p;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d0, mxDOUBLE_CLASS, (int32_T)d0,
    &vk_emlrtRTEI, sp);
  t = 0;
  emxInit_real_T(sp, &xt, 2, &lf_emlrtRTEI, true);
  while (t <= (int32_T)d0 - 1) {
    st.site = &cf_emlrtRSI;
    eye(&st, nc, b_Y0);
    i15 = YL->size[0];
    i16 = t + 1;
    if (!((i16 >= 1) && (i16 <= i15))) {
      emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &wc_emlrtBCI, sp);
    }

    st.site = &cf_emlrtRSI;
    ma = b_Y0->size[0];
    i15 = YL->size[1];
    kidx = b_Y0->size[0];
    loop_ub = b_Y0->size[1] * i15;
    i16 = xt->size[0] * xt->size[1];
    xt->size[0] = kidx;
    xt->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, xt, i16, &if_emlrtRTEI);
    kidx = -1;
    b_st.site = &gf_emlrtRSI;
    overflow = ((!(1 > b_Y0->size[1])) && (b_Y0->size[1] > 2147483646));
    if (overflow) {
      c_st.site = &dc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (loop_ub = 1; loop_ub <= b_Y0->size[1]; loop_ub++) {
      b_st.site = &hf_emlrtRSI;
      if ((!(1 > i15)) && (i15 > 2147483646)) {
        c_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (j2 = 1; j2 <= i15; j2++) {
        b_st.site = &if_emlrtRSI;
        if ((!(1 > ma)) && (ma > 2147483646)) {
          c_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 1; i <= ma; i++) {
          kidx++;
          xt->data[kidx] = b_Y0->data[(i + b_Y0->size[0] * (loop_ub - 1)) - 1] *
            YL->data[t + YL->size[0] * (j2 - 1)];
        }
      }
    }

    /*  x(t)' for regressor of SUR */
    ma = YLm->size[0];
    i15 = r5->size[0];
    r5->size[0] = ma;
    emxEnsureCapacity_int32_T(sp, r5, i15, &jf_emlrtRTEI);
    for (i15 = 0; i15 < ma; i15++) {
      r5->data[i15] = i15;
    }

    ma = YLm->size[1];
    i15 = r6->size[0];
    r6->size[0] = ma;
    emxEnsureCapacity_int32_T(sp, r6, i15, &kf_emlrtRTEI);
    for (i15 = 0; i15 < ma; i15++) {
      r6->data[i15] = i15;
    }

    i15 = YLm->size[2];
    i16 = t + 1;
    if (!((i16 >= 1) && (i16 <= i15))) {
      emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &xc_emlrtBCI, sp);
    }

    iv27[0] = r5->size[0];
    iv27[1] = r6->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv27[0], 2, &(*(int32_T (*)[2])xt->size)[0],
      2, &t_emlrtECI, sp);
    ma = xt->size[1];
    for (i15 = 0; i15 < ma; i15++) {
      loop_ub = xt->size[0];
      for (i16 = 0; i16 < loop_ub; i16++) {
        YLm->data[(r5->data[i16] + YLm->size[0] * r6->data[i15]) + YLm->size[0] *
          YLm->size[1] * t] = xt->data[i16 + xt->size[0] * i15];
      }
    }

    /*  p by k, x(t)'를 한층 한층 쌓는 것 */
    t++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_Y0);
  emxFree_int32_T(&r6);
  emxFree_int32_T(&r5);
  emxFree_real_T(&xt);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void Recursive_BVAR(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                    real_T n0, real_T n1, real_T mlag, real_T nu, const
                    emxArray_real_T *R0, const emxArray_real_T *b_, const
                    emxArray_real_T *var_, char_T ML, struct0_T *Output)
{
  emxArray_real_T *Gamma;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 6 };

  static const char_T u[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  int32_T nc;
  real_T pkk;
  real_T n;
  int32_T i0;
  real_T lnlik1;
  int32_T loop_ub;
  emxArray_real_T *normalize;
  emxArray_real_T *b_R0;
  emxArray_real_T *Omega0;
  emxArray_real_T *Omega;
  real_T lnML;
  int32_T nx;
  int32_T b_n;
  emxArray_real_T *Phi;
  emxArray_real_T *MHm;
  int32_T Y_idx_0;
  boolean_T empty_non_axis_sizes;
  int32_T result;
  cell_wrap_0 reshapes[2];
  emxArray_real_T *Phi_sp;
  int32_T i1;
  int32_T b_loop_ub;
  emxArray_real_T *Omega_inv;
  emxArray_real_T *ImpulseRespm;
  emxArray_real_T *consm;
  emxArray_real_T *Bm;
  emxArray_real_T *Gammam;
  emxArray_real_T *sig2m;
  emxArray_real_T *betam;
  emxArray_real_T *Omegam;
  emxArray_real_T *Y0;
  emxArray_real_T *YLm;
  emxArray_real_T *Y0_mean;
  emxArray_real_T *YL_mean;
  int32_T iter;
  emxArray_real_T *B;
  emxArray_real_T *beta;
  emxArray_real_T *beta_hat;
  emxArray_real_T *postmean;
  emxArray_real_T *b_Phi;
  emxArray_int32_T *r0;
  emxArray_real_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *b_Phi_sp;
  char_T b_u[37];
  static const int32_T iv1[2] = { 1, 37 };

  static const int32_T iv2[2] = { 1, 38 };

  static const char_T c_u[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  static const int32_T iv3[2] = { 1, 7 };

  static const char_T d_u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 23 };

  static const char_T e_u[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  const mxArray *d_y;
  static const int32_T iv5[2] = { 1, 37 };

  static const int32_T iv6[2] = { 1, 29 };

  static const char_T f_u[29] = { '[', 'p', 'h', 'i', '(', '1', ')', ' ', 'p',
    'h', 'i', '(', '2', ')', ' ', '.', '.', '.', ' ', 'p', 'h', 'i', '(', 'p',
    ')', ']', ' ', '=', ' ' };

  int32_T b_result;
  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 7 };

  static const char_T g_u[7] = { 'O', 'm', 'e', 'g', 'a', ':', ' ' };

  char_T h_u[39];
  static const int32_T iv9[2] = { 1, 39 };

  char_T TRANSA;
  char_T TRANSB;
  static const int32_T iv10[2] = { 1, 7 };

  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  static const int32_T iv11[2] = { 1, 36 };

  static const char_T i_u[36] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', ' ', 'P', 'e',
    'r', 'c', 'e', 'n', 't', ' ', 'D', 'o', 'n', 'e', '\\', 'n' };

  int32_T c_Phi[2];
  int32_T b_MHm[2];
  int32_T b_nc[2];
  emxArray_real_T b_postmean;
  static const int32_T iv12[2] = { 1, 39 };

  boolean_T guard1 = false;
  boolean_T guard2 = false;
  int32_T iv13[2];
  int32_T c_nc[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Gamma, 2, &emlrtRTEI, true);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(sp, 6, m0, &u[0]);
  emlrtAssign(&y, m0);
  st.site = &lk_emlrtRSI;
  format(&st, y, &emlrtMCI);

  /*  number of columns */
  nc = Y->size[1];

  /*  변수의 개수 */
  pkk = p * (real_T)Y->size[1] * (real_T)Y->size[1];

  /*  모든 시차에 대한 축약형 방정식의 기울기 회귀계수의 총 개수 */
  n = n0 + n1;
  i0 = Gamma->size[0] * Gamma->size[1];
  Gamma->size[0] = Y->size[1];
  lnlik1 = p * (real_T)Y->size[1];
  if (!(lnlik1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lnlik1, &j_emlrtDCI, sp);
  }

  if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
    emlrtIntegerCheckR2012b(lnlik1, &i_emlrtDCI, sp);
  }

  Gamma->size[1] = (int32_T)lnlik1;
  emxEnsureCapacity_real_T(sp, Gamma, i0, &emlrtRTEI);
  lnlik1 = p * (real_T)Y->size[1];
  if (!(lnlik1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lnlik1, &eb_emlrtDCI, sp);
  }

  if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
    emlrtIntegerCheckR2012b(lnlik1, &db_emlrtDCI, sp);
  }

  loop_ub = Y->size[1] * (int32_T)lnlik1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Gamma->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &normalize, 2, &b_emlrtRTEI, true);
  i0 = normalize->size[0] * normalize->size[1];
  normalize->size[0] = Y->size[1];
  lnlik1 = (p + 2.0) * (real_T)Y->size[1] + 1.0;
  if (!(lnlik1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lnlik1, &l_emlrtDCI, sp);
  }

  if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
    emlrtIntegerCheckR2012b(lnlik1, &k_emlrtDCI, sp);
  }

  normalize->size[1] = (int32_T)lnlik1;
  emxEnsureCapacity_real_T(sp, normalize, i0, &b_emlrtRTEI);
  lnlik1 = (p + 2.0) * (real_T)Y->size[1] + 1.0;
  if (!(lnlik1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lnlik1, &gb_emlrtDCI, sp);
  }

  if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
    emlrtIntegerCheckR2012b(lnlik1, &fb_emlrtDCI, sp);
  }

  loop_ub = Y->size[1] * (int32_T)lnlik1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    normalize->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &b_R0, 2, &c_emlrtRTEI, true);
  i0 = b_R0->size[0] * b_R0->size[1];
  b_R0->size[0] = R0->size[0];
  b_R0->size[1] = R0->size[1];
  emxEnsureCapacity_real_T(sp, b_R0, i0, &c_emlrtRTEI);
  loop_ub = R0->size[0] * R0->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_R0->data[i0] = R0->data[i0] * nu;
  }

  emxInit_real_T(sp, &Omega0, 2, &pc_emlrtRTEI, true);
  emxInit_real_T(sp, &Omega, 2, &d_emlrtRTEI, true);
  st.site = &emlrtRSI;
  inv(&st, b_R0, Omega0);

  /*  Note that E(inv(Omega)=precision matrix) = nu*R0 */
  i0 = Omega->size[0] * Omega->size[1];
  Omega->size[0] = Omega0->size[0];
  Omega->size[1] = Omega0->size[1];
  emxEnsureCapacity_real_T(sp, Omega, i0, &d_emlrtRTEI);
  loop_ub = Omega0->size[0] * Omega0->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Omega->data[i0] = Omega0->data[i0];
  }

  st.site = &b_emlrtRSI;
  lnML = p * (real_T)Y->size[1];
  nx = b_->size[0];
  b_st.site = &nc_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  assertValidSizeArg(&c_st, lnML);
  c_st.site = &pc_emlrtRSI;
  assertValidSizeArg(&c_st, Y->size[1]);
  b_n = b_->size[0];
  if (1 > b_->size[0]) {
    b_n = 1;
  }

  nx = muIntScalarMax_sint32(nx, b_n);
  if ((int32_T)lnML > nx) {
    b_st.site = &oc_emlrtRSI;
    c_error(&b_st);
  }

  if (Y->size[1] > nx) {
    b_st.site = &oc_emlrtRSI;
    c_error(&b_st);
  }

  if (!((int32_T)lnML >= 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &dk_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if ((int32_T)lnML * Y->size[1] != b_->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &ek_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emxInit_real_T(&st, &Phi, 2, &e_emlrtRTEI, true);
  i0 = Phi->size[0] * Phi->size[1];
  Phi->size[0] = (int32_T)lnML;
  Phi->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, Phi, i0, &e_emlrtRTEI);
  loop_ub = (int32_T)lnML * Y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Phi->data[i0] = b_->data[i0];
  }

  emxInit_real_T(&st, &MHm, 2, &hb_emlrtRTEI, true);

  /*  F행렬의 1행 Block의 전치 */
  st.site = &c_emlrtRSI;
  eye(&st, (p - 1.0) * (real_T)Y->size[1], MHm);
  lnlik1 = (real_T)Y->size[1] * (p - 1.0);
  if (!(lnlik1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lnlik1, &emlrtDCI, sp);
  }

  if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
    emlrtIntegerCheckR2012b(lnlik1, &b_emlrtDCI, sp);
  }

  st.site = &c_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (!((MHm->size[0] == 0) || (MHm->size[1] == 0))) {
    Y_idx_0 = MHm->size[0];
  } else {
    nx = (int32_T)((real_T)Y->size[1] * (p - 1.0));
    b_n = Y->size[1];
    if (!((nx == 0) || (b_n == 0))) {
      Y_idx_0 = (int32_T)((real_T)Y->size[1] * (p - 1.0));
    } else {
      Y_idx_0 = muIntScalarMax_sint32(MHm->size[0], 0);
      nx = (int32_T)((real_T)Y->size[1] * (p - 1.0));
      if (nx > Y_idx_0) {
        Y_idx_0 = (int32_T)((real_T)Y->size[1] * (p - 1.0));
      }
    }
  }

  c_st.site = &uc_emlrtRSI;
  if ((MHm->size[0] == Y_idx_0) || ((MHm->size[0] == 0) || (MHm->size[1] == 0)))
  {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  nx = (int32_T)((real_T)Y->size[1] * (p - 1.0));
  if (nx == Y_idx_0) {
  } else {
    nx = (int32_T)((real_T)Y->size[1] * (p - 1.0));
    b_n = Y->size[1];
    if ((nx == 0) || (b_n == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (Y_idx_0 == 0);
  if (empty_non_axis_sizes || (!((MHm->size[0] == 0) || (MHm->size[1] == 0)))) {
    result = MHm->size[1];
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes) {
    b_n = Y->size[1];
  } else {
    nx = (int32_T)((real_T)Y->size[1] * (p - 1.0));
    b_n = Y->size[1];
    if (!((nx == 0) || (b_n == 0))) {
      b_n = Y->size[1];
    } else {
      b_n = 0;
    }
  }

  emxInitMatrix_cell_wrap_0(&b_st, reshapes, &wc_emlrtRTEI, true);
  i0 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
  reshapes[1].f1->size[0] = Y_idx_0;
  reshapes[1].f1->size[1] = b_n;
  emxEnsureCapacity_real_T(&b_st, reshapes[1].f1, i0, &f_emlrtRTEI);
  loop_ub = Y_idx_0 * b_n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    reshapes[1].f1->data[i0] = 0.0;
  }

  emxInit_real_T(&b_st, &Phi_sp, 2, &x_emlrtRTEI, true);
  i0 = Phi_sp->size[0] * Phi_sp->size[1];
  Phi_sp->size[0] = Y_idx_0;
  Phi_sp->size[1] = result + reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T(&b_st, Phi_sp, i0, &g_emlrtRTEI);
  for (i0 = 0; i0 < result; i0++) {
    for (i1 = 0; i1 < Y_idx_0; i1++) {
      Phi_sp->data[i1 + Phi_sp->size[0] * i0] = MHm->data[i1 + Y_idx_0 * i0];
    }
  }

  loop_ub = reshapes[1].f1->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = reshapes[1].f1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Phi_sp->data[i1 + Phi_sp->size[0] * (i0 + result)] = reshapes[1].f1->
        data[i1 + reshapes[1].f1->size[0] * i0];
    }
  }

  emxFreeMatrix_cell_wrap_0(reshapes);
  st.site = &c_emlrtRSI;
  nx = Y->size[1];
  i0 = MHm->size[0] * MHm->size[1];
  MHm->size[0] = nx;
  MHm->size[1] = (int32_T)lnML;
  emxEnsureCapacity_real_T(&st, MHm, i0, &h_emlrtRTEI);
  loop_ub = (int32_T)lnML;
  for (i0 = 0; i0 < loop_ub; i0++) {
    for (i1 = 0; i1 < nx; i1++) {
      MHm->data[i1 + MHm->size[0] * i0] = b_->data[i0 + (int32_T)lnML * i1];
    }
  }

  b_st.site = &tc_emlrtRSI;
  if (!((MHm->size[0] == 0) || (MHm->size[1] == 0))) {
    result = MHm->size[1];
  } else if (!((Phi_sp->size[0] == 0) || (Phi_sp->size[1] == 0))) {
    result = Phi_sp->size[1];
  } else {
    result = muIntScalarMax_sint32(MHm->size[1], 0);
    if (Phi_sp->size[1] > result) {
      result = Phi_sp->size[1];
    }
  }

  c_st.site = &uc_emlrtRSI;
  if ((MHm->size[1] == result) || ((MHm->size[0] == 0) || (MHm->size[1] == 0)))
  {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((Phi_sp->size[1] == result) || ((Phi_sp->size[0] == 0) || (Phi_sp->size[1]
        == 0))) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &Omega_inv, 2, &rc_emlrtRTEI, true);
  emxInit_real_T2(&c_st, &ImpulseRespm, 3, &i_emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  invpd(&st, Omega0, Omega_inv);

  /*  축약형 방정식의 오차 분산행렬의 초기값의 역행렬 */
  /*  축약형 방정식의 오차항의 precision matrix(공분산행렬의 역행렬)의 사전평균을 초기값으로 둔 것 */
  /*  충격반응함수를 저장할 방 */
  st.site = &e_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  lnML = (real_T)Y->size[1] * (real_T)Y->size[1];
  i0 = ImpulseRespm->size[0] * ImpulseRespm->size[1] * ImpulseRespm->size[2];
  if (!(n1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n1, &n_emlrtDCI, sp);
  }

  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &m_emlrtDCI, sp);
  }

  ImpulseRespm->size[0] = (int32_T)n1;
  if (!(mlag + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mlag + 1.0, &p_emlrtDCI, sp);
  }

  lnlik1 = mlag + 1.0;
  if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
    emlrtIntegerCheckR2012b(lnlik1, &o_emlrtDCI, sp);
  }

  ImpulseRespm->size[1] = (int32_T)lnlik1;
  if (lnML != (int32_T)lnML) {
    emlrtIntegerCheckR2012b(lnML, &q_emlrtDCI, sp);
  }

  ImpulseRespm->size[2] = (int32_T)lnML;
  emxEnsureCapacity_real_T1(sp, ImpulseRespm, i0, &i_emlrtRTEI);
  if (!(n1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n1, &ib_emlrtDCI, sp);
  }

  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &hb_emlrtDCI, sp);
  }

  if (!(mlag + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mlag + 1.0, &ib_emlrtDCI, sp);
  }

  lnlik1 = mlag + 1.0;
  if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
    emlrtIntegerCheckR2012b(lnlik1, &hb_emlrtDCI, sp);
  }

  if (lnML != (int32_T)lnML) {
    emlrtIntegerCheckR2012b(lnML, &hb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)lnlik1 * (int32_T)lnML;
  for (i0 = 0; i0 < loop_ub; i0++) {
    ImpulseRespm->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &consm, 2, &j_emlrtRTEI, true);

  /*  (iter,j,1)은 변수 1이 변수1에 j기 이후 미치는 영향 */
  /*  축약형 모형계수를 저장할 방 */
  i0 = consm->size[0] * consm->size[1];
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &r_emlrtDCI, sp);
  }

  consm->size[0] = (int32_T)n1;
  consm->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, consm, i0, &j_emlrtRTEI);
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &jb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1 * Y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    consm->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Bm, 2, &k_emlrtRTEI, true);
  st.site = &f_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  lnML = (real_T)Y->size[1] * (real_T)Y->size[1];
  i0 = Bm->size[0] * Bm->size[1];
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &s_emlrtDCI, sp);
  }

  Bm->size[0] = (int32_T)n1;
  if (lnML != (int32_T)lnML) {
    emlrtIntegerCheckR2012b(lnML, &t_emlrtDCI, sp);
  }

  Bm->size[1] = (int32_T)lnML;
  emxEnsureCapacity_real_T(sp, Bm, i0, &k_emlrtRTEI);
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &kb_emlrtDCI, sp);
  }

  if (lnML != (int32_T)lnML) {
    emlrtIntegerCheckR2012b(lnML, &kb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)lnML;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Bm->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Gammam, 2, &l_emlrtRTEI, true);
  i0 = Gammam->size[0] * Gammam->size[1];
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &u_emlrtDCI, sp);
  }

  Gammam->size[0] = (int32_T)n1;
  if (!(pkk >= 0.0)) {
    emlrtNonNegativeCheckR2012b(pkk, &w_emlrtDCI, sp);
  }

  if (pkk != (int32_T)muDoubleScalarFloor(pkk)) {
    emlrtIntegerCheckR2012b(pkk, &v_emlrtDCI, sp);
  }

  Gammam->size[1] = (int32_T)pkk;
  emxEnsureCapacity_real_T(sp, Gammam, i0, &l_emlrtRTEI);
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &lb_emlrtDCI, sp);
  }

  if (!(pkk >= 0.0)) {
    emlrtNonNegativeCheckR2012b(pkk, &mb_emlrtDCI, sp);
  }

  if (pkk != (int32_T)muDoubleScalarFloor(pkk)) {
    emlrtIntegerCheckR2012b(pkk, &lb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)pkk;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Gammam->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &sig2m, 2, &m_emlrtRTEI, true);
  i0 = sig2m->size[0] * sig2m->size[1];
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &x_emlrtDCI, sp);
  }

  sig2m->size[0] = (int32_T)n1;
  sig2m->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, sig2m, i0, &m_emlrtRTEI);
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &nb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1 * Y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    sig2m->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &betam, 2, &n_emlrtRTEI, true);
  i0 = betam->size[0] * betam->size[1];
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &y_emlrtDCI, sp);
  }

  betam->size[0] = (int32_T)n1;
  if (pkk != (int32_T)muDoubleScalarFloor(pkk)) {
    emlrtIntegerCheckR2012b(pkk, &ab_emlrtDCI, sp);
  }

  betam->size[1] = (int32_T)pkk;
  emxEnsureCapacity_real_T(sp, betam, i0, &n_emlrtRTEI);
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &ob_emlrtDCI, sp);
  }

  if (pkk != (int32_T)muDoubleScalarFloor(pkk)) {
    emlrtIntegerCheckR2012b(pkk, &ob_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)pkk;
  for (i0 = 0; i0 < loop_ub; i0++) {
    betam->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Omegam, 2, &o_emlrtRTEI, true);
  st.site = &g_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  lnML = (real_T)Y->size[1] * (real_T)Y->size[1];
  i0 = Omegam->size[0] * Omegam->size[1];
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &bb_emlrtDCI, sp);
  }

  Omegam->size[0] = (int32_T)n1;
  if (lnML != (int32_T)lnML) {
    emlrtIntegerCheckR2012b(lnML, &cb_emlrtDCI, sp);
  }

  Omegam->size[1] = (int32_T)lnML;
  emxEnsureCapacity_real_T(sp, Omegam, i0, &o_emlrtRTEI);
  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &pb_emlrtDCI, sp);
  }

  if (lnML != (int32_T)lnML) {
    emlrtIntegerCheckR2012b(lnML, &pb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)lnML;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Omegam->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Y0, 2, &tc_emlrtRTEI, true);
  emxInit_real_T2(sp, &YLm, 3, &uc_emlrtRTEI, true);
  emxInit_real_T1(sp, &Y0_mean, 1, &rb_emlrtRTEI, true);
  emxInit_real_T1(sp, &YL_mean, 1, &uc_emlrtRTEI, true);

  /*  사후분포 추출하기 */
  st.site = &h_emlrtRSI;
  makeYX(&st, Y, p, Y0, YLm, Phi_sp, Y0_mean, YL_mean);

  /*  종속변수(Y0)와 설명변수(YLm) 만들기 */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &yj_emlrtRTEI, sp);
  iter = 0;
  emxInit_real_T(sp, &B, 2, &oc_emlrtRTEI, true);
  emxInit_real_T1(sp, &beta, 1, &qc_emlrtRTEI, true);
  emxInit_real_T1(sp, &beta_hat, 1, &q_emlrtRTEI, true);
  emxInit_real_T1(sp, &postmean, 1, &sc_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Phi, 2, &vc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &uc_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &uc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &uc_emlrtRTEI, true);
  emxInit_real_T1(sp, &r3, 1, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Phi_sp, 2, &cc_emlrtRTEI, true);
  while (iter <= (int32_T)n - 1) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*  몫 x와 나머지 resid를 산출 */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((1.0 + (real_T)iter) - muDoubleScalarFloor((1.0 + (real_T)iter) / 100.0)
        * 100.0 == 0.0) {
      st.site = &fl_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i0 = 0; i0 < 37; i0++) {
        b_u[i0] = '=';
      }

      y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 37, m0, &b_u[0]);
      emlrtAssign(&y, m0);
      st.site = &vk_emlrtRSI;
      disp(&st, y, &f_emlrtMCI);
      st.site = &i_emlrtRSI;
      b_st.site = &jf_emlrtRSI;
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(&b_st, 7, m0, &d_u[0]);
      emlrtAssign(&y, m0);
      b_y = NULL;
      m0 = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m0);
      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv4);
      emlrtInitCharArrayR2013a(&b_st, 23, m0, &e_u[0]);
      emlrtAssign(&c_y, m0);
      d_y = NULL;
      m0 = emlrtCreateDoubleScalar(1.0 + (real_T)iter);
      emlrtAssign(&d_y, m0);
      c_st.site = &kl_emlrtRSI;
      c_emlrt_marshallIn(&c_st, d_feval(&c_st, y, b_y, c_y, d_y, &ab_emlrtMCI),
                         "feval");
      for (i0 = 0; i0 < 37; i0++) {
        b_u[i0] = '=';
      }

      y = NULL;
      m0 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(sp, 37, m0, &b_u[0]);
      emlrtAssign(&y, m0);
      st.site = &uk_emlrtRSI;
      disp(&st, y, &g_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateString1(' ');
      emlrtAssign(&y, m0);
      st.site = &tk_emlrtRSI;
      disp(&st, y, &h_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(sp, 29, m0, &f_u[0]);
      emlrtAssign(&y, m0);
      st.site = &sk_emlrtRSI;
      disp(&st, y, &i_emlrtMCI);
      i0 = b_Phi->size[0] * b_Phi->size[1];
      b_Phi->size[0] = Phi->size[1];
      b_Phi->size[1] = Phi->size[0];
      emxEnsureCapacity_real_T(sp, b_Phi, i0, &eb_emlrtRTEI);
      loop_ub = Phi->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = Phi->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          b_Phi->data[i1 + b_Phi->size[0] * i0] = Phi->data[i0 + Phi->size[0] *
            i1];
        }
      }

      st.site = &rk_emlrtRSI;
      disp(&st, emlrt_marshallOut(b_Phi), &j_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(sp, 7, m0, &g_u[0]);
      emlrtAssign(&y, m0);
      st.site = &qk_emlrtRSI;
      disp(&st, y, &k_emlrtMCI);
      st.site = &pk_emlrtRSI;
      disp(&st, emlrt_marshallOut(Omega), &l_emlrtMCI);
    }

    /*  Phi sampling 하기 */
    st.site = &j_emlrtRSI;
    Gen_Phi(&st, Y0, YLm, Phi, p, b_, var_, Omega_inv, b_Phi, B, beta);
    i0 = Phi->size[0] * Phi->size[1];
    Phi->size[0] = b_Phi->size[0];
    Phi->size[1] = b_Phi->size[1];
    emxEnsureCapacity_real_T(sp, Phi, i0, &p_emlrtRTEI);
    loop_ub = b_Phi->size[0] * b_Phi->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Phi->data[i0] = b_Phi->data[i0];
    }

    i0 = MHm->size[0] * MHm->size[1];
    MHm->size[0] = b_Phi->size[1];
    MHm->size[1] = b_Phi->size[0];
    emxEnsureCapacity_real_T(sp, MHm, i0, &r_emlrtRTEI);
    loop_ub = b_Phi->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = b_Phi->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        MHm->data[i1 + MHm->size[0] * i0] = b_Phi->data[i0 + b_Phi->size[0] * i1];
      }
    }

    i0 = beta_hat->size[0];
    beta_hat->size[0] = Y0_mean->size[0];
    emxEnsureCapacity_real_T2(sp, beta_hat, i0, &t_emlrtRTEI);
    loop_ub = Y0_mean->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      beta_hat->data[i0] = Y0_mean->data[i0];
    }

    emlrtForLoopVectorCheckR2012b(1.0, 1.0, p, mxDOUBLE_CLASS, (int32_T)p,
      &ak_emlrtRTEI, sp);
    nx = 0;
    while (nx <= (int32_T)p - 1) {
      lnlik1 = ((1.0 + (real_T)nx) - 1.0) * (real_T)nc + 1.0;
      lnML = (1.0 + (real_T)nx) * (real_T)nc;
      if (lnlik1 > lnML) {
        i1 = 1;
        i0 = 1;
      } else {
        i0 = MHm->size[1];
        i1 = (int32_T)lnlik1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
        }

        i0 = MHm->size[1];
        result = (int32_T)lnML;
        if (!((result >= 1) && (result <= i0))) {
          emlrtDynamicBoundsCheckR2012b(result, 1, i0, &b_emlrtBCI, sp);
        }

        i0 = result + 1;
      }

      lnlik1 = ((1.0 + (real_T)nx) - 1.0) * (real_T)nc + 1.0;
      lnML = (1.0 + (real_T)nx) * (real_T)nc;
      if (lnlik1 > lnML) {
        Y_idx_0 = 1;
        result = 1;
      } else {
        result = YL_mean->size[0];
        Y_idx_0 = (int32_T)lnlik1;
        if (!((Y_idx_0 >= 1) && (Y_idx_0 <= result))) {
          emlrtDynamicBoundsCheckR2012b(Y_idx_0, 1, result, &c_emlrtBCI, sp);
        }

        result = YL_mean->size[0];
        b_result = (int32_T)lnML;
        if (!((b_result >= 1) && (b_result <= result))) {
          emlrtDynamicBoundsCheckR2012b(b_result, 1, result, &d_emlrtBCI, sp);
        }

        result = b_result + 1;
      }

      st.site = &k_emlrtRSI;
      loop_ub = MHm->size[0];
      b_result = Phi_sp->size[0] * Phi_sp->size[1];
      Phi_sp->size[0] = loop_ub;
      Phi_sp->size[1] = i0 - i1;
      emxEnsureCapacity_real_T(&st, Phi_sp, b_result, &bb_emlrtRTEI);
      b_loop_ub = i0 - i1;
      for (b_result = 0; b_result < b_loop_ub; b_result++) {
        for (b_n = 0; b_n < loop_ub; b_n++) {
          Phi_sp->data[b_n + Phi_sp->size[0] * b_result] = MHm->data[b_n +
            MHm->size[0] * ((i1 + b_result) - 1)];
        }
      }

      b_result = postmean->size[0];
      postmean->size[0] = result - Y_idx_0;
      emxEnsureCapacity_real_T2(&st, postmean, b_result, &db_emlrtRTEI);
      loop_ub = result - Y_idx_0;
      for (b_result = 0; b_result < loop_ub; b_result++) {
        postmean->data[b_result] = YL_mean->data[(Y_idx_0 + b_result) - 1];
      }

      b_st.site = &le_emlrtRSI;
      if (!(i0 - i1 == result - Y_idx_0)) {
        b_result = MHm->size[0];
        if (((b_result == 1) && (i0 - i1 == 1)) || (result - Y_idx_0 == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      if ((i0 - i1 == 1) || (result - Y_idx_0 == 1)) {
        i0 = r3->size[0];
        r3->size[0] = Phi_sp->size[0];
        emxEnsureCapacity_real_T2(&st, r3, i0, &bb_emlrtRTEI);
        loop_ub = Phi_sp->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          r3->data[i0] = 0.0;
          b_loop_ub = Phi_sp->size[1];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r3->data[i0] += Phi_sp->data[i0 + Phi_sp->size[0] * i1] *
              postmean->data[i1];
          }
        }
      } else {
        b_st.site = &ke_emlrtRSI;
        b_result = MHm->size[0];
        if ((b_result == 0) || (i0 - i1 == 0) || (result - Y_idx_0 == 0)) {
          loop_ub = MHm->size[0];
          i0 = r3->size[0];
          r3->size[0] = loop_ub;
          emxEnsureCapacity_real_T2(&b_st, r3, i0, &bb_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            r3->data[i0] = 0.0;
          }
        } else {
          c_st.site = &pe_emlrtRSI;
          c_st.site = &qe_emlrtRSI;
          TRANSA = 'N';
          TRANSB = 'N';
          lnML = 1.0;
          pkk = 0.0;
          result = MHm->size[0];
          m_t = (ptrdiff_t)result;
          n_t = (ptrdiff_t)1;
          k_t = (ptrdiff_t)(i0 - i1);
          result = MHm->size[0];
          lda_t = (ptrdiff_t)result;
          ldb_t = (ptrdiff_t)(i0 - i1);
          i0 = MHm->size[0];
          ldc_t = (ptrdiff_t)i0;
          i0 = MHm->size[0];
          i1 = r3->size[0];
          r3->size[0] = i0;
          emxEnsureCapacity_real_T2(&c_st, r3, i1, &mb_emlrtRTEI);
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lnML, &Phi_sp->data[0],
                &lda_t, &postmean->data[0], &ldb_t, &pkk, &r3->data[0], &ldc_t);
        }
      }

      i0 = beta_hat->size[0];
      i1 = r3->size[0];
      if (i0 != i1) {
        emlrtSizeEqCheck1DR2012b(i0, i1, &emlrtECI, sp);
      }

      i0 = beta_hat->size[0];
      emxEnsureCapacity_real_T2(sp, beta_hat, i0, &lb_emlrtRTEI);
      loop_ub = beta_hat->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        beta_hat->data[i0] -= r3->data[i0];
      }

      nx++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*  Omega sampling 하기 */
    st.site = &l_emlrtRSI;
    Gen_Omega(&st, Y0, YLm, beta, nu, R0, Omega, Omega_inv);

    /*  충격반응함수 계산해서 저장하기 */
    if (1.0 + (real_T)iter > n0) {
      /*  burn - in을 고려한 과정 */
      st.site = &m_emlrtRSI;
      Gen_ImRes(&st, Omega, B, mlag, n0, ImpulseRespm, 1.0 + (real_T)iter, MHm);

      /*  기울기 계수행렬 sampling하기 */
      i0 = Phi_sp->size[0] * Phi_sp->size[1];
      Phi_sp->size[0] = b_Phi->size[1];
      Phi_sp->size[1] = b_Phi->size[0];
      emxEnsureCapacity_real_T(sp, Phi_sp, i0, &x_emlrtRTEI);
      loop_ub = b_Phi->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = b_Phi->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Phi_sp->data[i1 + Phi_sp->size[0] * i0] = b_Phi->data[i0 + b_Phi->
            size[0] * i1];
        }
      }

      /*  축약형 기울기 계수행렬이 1시차부터 p시차까지 오른쪽으로 나열됨 */
      st.site = &n_emlrtRSI;
      inv(&st, MHm, B);
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, p, mxDOUBLE_CLASS, (int32_T)p,
        &bk_emlrtRTEI, sp);
      b_n = 0;
      while (b_n <= (int32_T)p - 1) {
        lnlik1 = ((1.0 + (real_T)b_n) - 1.0) * (real_T)nc + 1.0;
        lnML = (1.0 + (real_T)b_n) * (real_T)nc;
        if (lnlik1 > lnML) {
          i1 = 1;
          i0 = 1;
        } else {
          i0 = Phi_sp->size[1];
          i1 = (int32_T)lnlik1;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &e_emlrtBCI, sp);
          }

          i0 = Phi_sp->size[1];
          result = (int32_T)lnML;
          if (!((result >= 1) && (result <= i0))) {
            emlrtDynamicBoundsCheckR2012b(result, 1, i0, &f_emlrtBCI, sp);
          }

          i0 = result + 1;
        }

        lnlik1 = ((1.0 + (real_T)b_n) - 1.0) * (real_T)nc + 1.0;
        lnML = (1.0 + (real_T)b_n) * (real_T)nc;
        if (lnlik1 > lnML) {
          result = 0;
          b_result = 0;
        } else {
          result = Gamma->size[1];
          Y_idx_0 = (int32_T)lnlik1;
          if (!((Y_idx_0 >= 1) && (Y_idx_0 <= result))) {
            emlrtDynamicBoundsCheckR2012b(Y_idx_0, 1, result, &g_emlrtBCI, sp);
          }

          result = Y_idx_0 - 1;
          Y_idx_0 = Gamma->size[1];
          b_result = (int32_T)lnML;
          if (!((b_result >= 1) && (b_result <= Y_idx_0))) {
            emlrtDynamicBoundsCheckR2012b(b_result, 1, Y_idx_0, &h_emlrtBCI, sp);
          }
        }

        loop_ub = Gamma->size[0];
        Y_idx_0 = r2->size[0];
        r2->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r2, Y_idx_0, &gb_emlrtRTEI);
        for (Y_idx_0 = 0; Y_idx_0 < loop_ub; Y_idx_0++) {
          r2->data[Y_idx_0] = Y_idx_0;
        }

        Y_idx_0 = r0->size[0];
        r0->size[0] = b_result - result;
        emxEnsureCapacity_int32_T(sp, r0, Y_idx_0, &ib_emlrtRTEI);
        loop_ub = b_result - result;
        for (Y_idx_0 = 0; Y_idx_0 < loop_ub; Y_idx_0++) {
          r0->data[Y_idx_0] = result + Y_idx_0;
        }

        st.site = &o_emlrtRSI;
        loop_ub = Phi_sp->size[0];
        result = MHm->size[0] * MHm->size[1];
        MHm->size[0] = loop_ub;
        MHm->size[1] = i0 - i1;
        emxEnsureCapacity_real_T(&st, MHm, result, &jb_emlrtRTEI);
        b_loop_ub = i0 - i1;
        for (result = 0; result < b_loop_ub; result++) {
          for (Y_idx_0 = 0; Y_idx_0 < loop_ub; Y_idx_0++) {
            MHm->data[Y_idx_0 + MHm->size[0] * result] = Phi_sp->data[Y_idx_0 +
              Phi_sp->size[0] * ((i1 + result) - 1)];
          }
        }

        b_st.site = &le_emlrtRSI;
        result = Phi_sp->size[0];
        if (!(B->size[1] == result)) {
          guard1 = false;
          if ((B->size[0] == 1) && (B->size[1] == 1)) {
            guard1 = true;
          } else {
            result = Phi_sp->size[0];
            if ((result == 1) && (i0 - i1 == 1)) {
              guard1 = true;
            } else {
              emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
                "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
            }
          }

          if (guard1) {
            emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          }
        }

        guard1 = false;
        if (B->size[1] == 1) {
          guard1 = true;
        } else {
          result = Phi_sp->size[0];
          if (result == 1) {
            guard1 = true;
          } else {
            b_st.site = &ke_emlrtRSI;
            guard2 = false;
            if ((B->size[0] == 0) || (B->size[1] == 0)) {
              guard2 = true;
            } else {
              result = Phi_sp->size[0];
              if ((result == 0) || (i0 - i1 == 0)) {
                guard2 = true;
              } else {
                c_st.site = &pe_emlrtRSI;
                c_st.site = &qe_emlrtRSI;
                TRANSA = 'N';
                TRANSB = 'N';
                lnML = 1.0;
                pkk = 0.0;
                m_t = (ptrdiff_t)B->size[0];
                n_t = (ptrdiff_t)(i0 - i1);
                k_t = (ptrdiff_t)B->size[1];
                lda_t = (ptrdiff_t)B->size[0];
                ldb_t = (ptrdiff_t)B->size[1];
                ldc_t = (ptrdiff_t)B->size[0];
                result = b_Phi->size[0] * b_Phi->size[1];
                b_Phi->size[0] = B->size[0];
                b_Phi->size[1] = i0 - i1;
                emxEnsureCapacity_real_T(&c_st, b_Phi, result, &mb_emlrtRTEI);
                dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lnML, &B->data[0],
                      &lda_t, &MHm->data[0], &ldb_t, &pkk, &b_Phi->data[0],
                      &ldc_t);
              }
            }

            if (guard2) {
              result = b_Phi->size[0] * b_Phi->size[1];
              b_Phi->size[0] = B->size[0];
              b_Phi->size[1] = i0 - i1;
              emxEnsureCapacity_real_T(&b_st, b_Phi, result, &qb_emlrtRTEI);
              loop_ub = B->size[0] * (i0 - i1);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_Phi->data[i0] = 0.0;
              }
            }
          }
        }

        if (guard1) {
          i0 = b_Phi->size[0] * b_Phi->size[1];
          b_Phi->size[0] = B->size[0];
          b_Phi->size[1] = MHm->size[1];
          emxEnsureCapacity_real_T(&st, b_Phi, i0, &qb_emlrtRTEI);
          loop_ub = B->size[0];
          for (i0 = 0; i0 < loop_ub; i0++) {
            b_loop_ub = MHm->size[1];
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              b_Phi->data[i0 + b_Phi->size[0] * i1] = 0.0;
              nx = B->size[1];
              for (result = 0; result < nx; result++) {
                b_Phi->data[i0 + b_Phi->size[0] * i1] += B->data[i0 + B->size[0]
                  * result] * MHm->data[result + MHm->size[0] * i1];
              }
            }
          }
        }

        iv13[0] = r2->size[0];
        iv13[1] = r0->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &(*(int32_T (*)[2])
          b_Phi->size)[0], 2, &b_emlrtECI, sp);
        loop_ub = b_Phi->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          b_loop_ub = b_Phi->size[0];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            Gamma->data[r2->data[i1] + Gamma->size[0] * r0->data[i0]] =
              b_Phi->data[i1 + b_Phi->size[0] * i0];
          }
        }

        /*  구조형 기울기 계수행렬이 1시차부터 p시차까지 오른쪽으로 나열됨 */
        b_n++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &p_emlrtRSI;
      b_st.site = &le_emlrtRSI;
      if (!(B->size[1] == beta_hat->size[0])) {
        if (((B->size[0] == 1) && (B->size[1] == 1)) || (beta_hat->size[0] == 1))
        {
          emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      if ((B->size[1] == 1) || (beta_hat->size[0] == 1)) {
        i0 = postmean->size[0];
        postmean->size[0] = B->size[0];
        emxEnsureCapacity_real_T2(&st, postmean, i0, &fb_emlrtRTEI);
        loop_ub = B->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          postmean->data[i0] = 0.0;
          b_loop_ub = B->size[1];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            postmean->data[i0] += B->data[i0 + B->size[0] * i1] * beta_hat->
              data[i1];
          }
        }
      } else {
        b_st.site = &ke_emlrtRSI;
        if ((B->size[0] == 0) || (B->size[1] == 0) || (beta_hat->size[0] == 0))
        {
          i0 = postmean->size[0];
          postmean->size[0] = B->size[0];
          emxEnsureCapacity_real_T2(&b_st, postmean, i0, &fb_emlrtRTEI);
          loop_ub = B->size[0];
          for (i0 = 0; i0 < loop_ub; i0++) {
            postmean->data[i0] = 0.0;
          }
        } else {
          c_st.site = &pe_emlrtRSI;
          c_st.site = &qe_emlrtRSI;
          TRANSA = 'N';
          TRANSB = 'N';
          lnML = 1.0;
          pkk = 0.0;
          m_t = (ptrdiff_t)B->size[0];
          n_t = (ptrdiff_t)1;
          k_t = (ptrdiff_t)B->size[1];
          lda_t = (ptrdiff_t)B->size[0];
          ldb_t = (ptrdiff_t)B->size[1];
          ldc_t = (ptrdiff_t)B->size[0];
          i0 = postmean->size[0];
          postmean->size[0] = B->size[0];
          emxEnsureCapacity_real_T2(&c_st, postmean, i0, &mb_emlrtRTEI);
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lnML, &B->data[0], &lda_t,
                &beta_hat->data[0], &ldb_t, &pkk, &postmean->data[0], &ldc_t);
        }
      }

      st.site = &q_emlrtRSI;
      eye(&st, nc, MHm);
      st.site = &q_emlrtRSI;
      b_st.site = &tc_emlrtRSI;
      if (!((B->size[0] == 0) || (B->size[1] == 0))) {
        result = B->size[0];
      } else if (!(postmean->size[0] == 0)) {
        result = postmean->size[0];
      } else if (!((Gamma->size[0] == 0) || (Gamma->size[1] == 0))) {
        result = Gamma->size[0];
      } else if (!((MHm->size[0] == 0) || (MHm->size[1] == 0))) {
        result = MHm->size[0];
      } else {
        result = muIntScalarMax_sint32(B->size[0], 0);
        if (Gamma->size[0] > result) {
          result = Gamma->size[0];
        }

        if (MHm->size[0] > result) {
          result = MHm->size[0];
        }
      }

      c_st.site = &uc_emlrtRSI;
      if ((B->size[0] == result) || ((B->size[0] == 0) || (B->size[1] == 0))) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
        emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((postmean->size[0] == result) || (postmean->size[0] == 0)) {
      } else {
        empty_non_axis_sizes = false;
      }

      if (!empty_non_axis_sizes) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Gamma->size[0] == result) || ((Gamma->size[0] == 0) || (Gamma->size[1]
            == 0))) {
      } else {
        empty_non_axis_sizes = false;
      }

      if (!empty_non_axis_sizes) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((MHm->size[0] == result) || ((MHm->size[0] == 0) || (MHm->size[1] == 0)))
      {
      } else {
        empty_non_axis_sizes = false;
      }

      if (!empty_non_axis_sizes) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || (!((B->size[0] == 0) || (B->size[1] == 0)))) {
        nx = B->size[1];
      } else {
        nx = 0;
      }

      if (empty_non_axis_sizes || (!(postmean->size[0] == 0))) {
        b_n = 1;
      } else {
        b_n = 0;
      }

      if (empty_non_axis_sizes || (!((Gamma->size[0] == 0) || (Gamma->size[1] ==
             0)))) {
        Y_idx_0 = Gamma->size[1];
      } else {
        Y_idx_0 = 0;
      }

      if (empty_non_axis_sizes || (!((MHm->size[0] == 0) || (MHm->size[1] == 0))))
      {
        b_result = MHm->size[1];
      } else {
        b_result = 0;
      }

      i0 = Phi_sp->size[0] * Phi_sp->size[1];
      Phi_sp->size[0] = result;
      Phi_sp->size[1] = ((nx + b_n) + Y_idx_0) + b_result;
      emxEnsureCapacity_real_T(&b_st, Phi_sp, i0, &tb_emlrtRTEI);
      for (i0 = 0; i0 < nx; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          Phi_sp->data[i1 + Phi_sp->size[0] * i0] = B->data[i1 + result * i0];
        }
      }

      for (i0 = 0; i0 < b_n; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          Phi_sp->data[i1 + Phi_sp->size[0] * (i0 + nx)] = postmean->data[i1 +
            result * i0];
        }
      }

      for (i0 = 0; i0 < Y_idx_0; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          Phi_sp->data[i1 + Phi_sp->size[0] * ((i0 + nx) + b_n)] = Gamma->
            data[i1 + result * i0];
        }
      }

      for (i0 = 0; i0 < b_result; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          Phi_sp->data[i1 + Phi_sp->size[0] * (((i0 + nx) + b_n) + Y_idx_0)] =
            MHm->data[i1 + result * i0];
        }
      }

      st.site = &r_emlrtRSI;
      diag(&st, B, postmean);
      nx = 0;
      while (nx <= nc - 1) {
        i0 = normalize->size[0];
        i1 = nx + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &k_emlrtBCI, sp);
        }

        loop_ub = normalize->size[1];
        i0 = r2->size[0];
        r2->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, r2, i0, &ub_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          r2->data[i0] = i0;
        }

        i0 = Phi_sp->size[0];
        i1 = nx + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &i_emlrtBCI, sp);
        }

        i0 = postmean->size[0];
        i1 = nx + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &j_emlrtBCI, sp);
        }

        loop_ub = Phi_sp->size[1];
        lnML = postmean->data[nx];
        i0 = r1->size[0] * r1->size[1];
        r1->size[0] = 1;
        r1->size[1] = loop_ub;
        emxEnsureCapacity_real_T(sp, r1, i0, &wb_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          r1->data[r1->size[0] * i0] = Phi_sp->data[nx + Phi_sp->size[0] * i0] /
            lnML;
        }

        iv13[0] = 1;
        iv13[1] = r2->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &(*(int32_T (*)[2])r1->size)
          [0], 2, &c_emlrtECI, sp);
        loop_ub = r1->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          normalize->data[nx + normalize->size[0] * r2->data[i0]] = r1->data
            [r1->size[0] * i0];
        }

        nx++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (1 > nc) {
        loop_ub = 0;
      } else {
        i0 = normalize->size[1];
        if (!(1 <= i0)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i0, &l_emlrtBCI, sp);
        }

        i0 = normalize->size[1];
        if (!(nc <= i0)) {
          emlrtDynamicBoundsCheckR2012b(nc, 1, i0, &m_emlrtBCI, sp);
        }

        loop_ub = nc;
      }

      i0 = normalize->size[1];
      i1 = nc + 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &n_emlrtBCI, sp);
      }

      i0 = normalize->size[1] - nc;
      if ((real_T)nc + 2.0 > i0) {
        i1 = 0;
        i0 = 0;
      } else {
        i1 = normalize->size[1];
        result = (int32_T)(nc + 2U);
        if (!((result >= 1) && (result <= i1))) {
          emlrtDynamicBoundsCheckR2012b(result, 1, i1, &o_emlrtBCI, sp);
        }

        i1 = result - 1;
        result = normalize->size[1];
        if (!((i0 >= 1) && (i0 <= result))) {
          emlrtDynamicBoundsCheckR2012b(i0, 1, result, &p_emlrtBCI, sp);
        }
      }

      b_loop_ub = normalize->size[0];
      result = Gamma->size[0] * Gamma->size[1];
      Gamma->size[0] = b_loop_ub;
      Gamma->size[1] = i0 - i1;
      emxEnsureCapacity_real_T(sp, Gamma, result, &vb_emlrtRTEI);
      nx = i0 - i1;
      for (i0 = 0; i0 < nx; i0++) {
        for (result = 0; result < b_loop_ub; result++) {
          Gamma->data[result + Gamma->size[0] * i0] = normalize->data[result +
            normalize->size[0] * (i1 + i0)];
        }
      }

      lnlik1 = (real_T)(normalize->size[1] - nc) + 1.0;
      if (lnlik1 > normalize->size[1]) {
        i0 = 0;
        result = 0;
      } else {
        i0 = normalize->size[1];
        i1 = (int32_T)lnlik1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &q_emlrtBCI, sp);
        }

        i0 = i1 - 1;
        i1 = normalize->size[1];
        result = normalize->size[1];
        if (!((result >= 1) && (result <= i1))) {
          emlrtDynamicBoundsCheckR2012b(result, 1, i1, &r_emlrtBCI, sp);
        }
      }

      b_loop_ub = normalize->size[0];
      i1 = b_R0->size[0] * b_R0->size[1];
      b_R0->size[0] = b_loop_ub;
      b_R0->size[1] = result - i0;
      emxEnsureCapacity_real_T(sp, b_R0, i1, &xb_emlrtRTEI);
      nx = result - i0;
      for (i1 = 0; i1 < nx; i1++) {
        for (result = 0; result < b_loop_ub; result++) {
          b_R0->data[result + b_R0->size[0] * i1] = normalize->data[result +
            normalize->size[0] * (i0 + i1)];
        }
      }

      st.site = &s_emlrtRSI;
      diag(&st, b_R0, r3);
      st.site = &s_emlrtRSI;
      power(&st, r3, postmean);
      b_loop_ub = normalize->size[0];
      i0 = b_Phi->size[0] * b_Phi->size[1];
      b_Phi->size[0] = b_loop_ub;
      b_Phi->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, b_Phi, i0, &yb_emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          b_Phi->data[i1 + b_Phi->size[0] * i0] = normalize->data[i1 +
            normalize->size[0] * i0];
        }
      }

      st.site = &t_emlrtRSI;
      vec(&st, b_Phi);
      i0 = Phi_sp->size[0] * Phi_sp->size[1];
      Phi_sp->size[0] = b_Phi->size[1];
      Phi_sp->size[1] = b_Phi->size[0];
      emxEnsureCapacity_real_T(sp, Phi_sp, i0, &ac_emlrtRTEI);
      loop_ub = b_Phi->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = b_Phi->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Phi_sp->data[i1 + Phi_sp->size[0] * i0] = b_Phi->data[i0 + b_Phi->
            size[0] * i1];
        }
      }

      lnlik1 = (1.0 + (real_T)iter) - n0;
      if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
        emlrtIntegerCheckR2012b(lnlik1, &e_emlrtDCI, sp);
      }

      i0 = Bm->size[0];
      i1 = (int32_T)lnlik1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &cb_emlrtBCI, sp);
      }

      i0 = i1 - 1;
      loop_ub = Bm->size[1];
      i1 = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r2, i1, &bc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        r2->data[i1] = i1;
      }

      i1 = Phi_sp->size[0];
      if (!(1 <= i1)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &s_emlrtBCI, sp);
      }

      iv13[0] = 1;
      iv13[1] = r2->size[0];
      loop_ub = Phi_sp->size[1];
      i1 = b_Phi_sp->size[0] * b_Phi_sp->size[1];
      b_Phi_sp->size[0] = 1;
      b_Phi_sp->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, b_Phi_sp, i1, &cc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Phi_sp->data[b_Phi_sp->size[0] * i1] = Phi_sp->data[Phi_sp->size[0] *
          i1];
      }

      for (i1 = 0; i1 < 2; i1++) {
        c_Phi[i1] = b_Phi_sp->size[i1];
      }

      emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &c_Phi[0], 2, &g_emlrtECI, sp);
      loop_ub = Phi_sp->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        Bm->data[i0 + Bm->size[0] * r2->data[i1]] = Phi_sp->data[Phi_sp->size[0]
          * i1];
      }

      i0 = b_Phi->size[0] * b_Phi->size[1];
      b_Phi->size[0] = Gamma->size[0];
      b_Phi->size[1] = Gamma->size[1];
      emxEnsureCapacity_real_T(sp, b_Phi, i0, &dc_emlrtRTEI);
      loop_ub = Gamma->size[0] * Gamma->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_Phi->data[i0] = Gamma->data[i0];
      }

      st.site = &u_emlrtRSI;
      vec(&st, b_Phi);
      i0 = MHm->size[0] * MHm->size[1];
      MHm->size[0] = b_Phi->size[1];
      MHm->size[1] = b_Phi->size[0];
      emxEnsureCapacity_real_T(sp, MHm, i0, &ec_emlrtRTEI);
      loop_ub = b_Phi->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = b_Phi->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          MHm->data[i1 + MHm->size[0] * i0] = b_Phi->data[i0 + b_Phi->size[0] *
            i1];
        }
      }

      lnlik1 = (1.0 + (real_T)iter) - n0;
      if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
        emlrtIntegerCheckR2012b(lnlik1, &g_emlrtDCI, sp);
      }

      i0 = Gammam->size[0];
      i1 = (int32_T)lnlik1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &eb_emlrtBCI, sp);
      }

      i0 = i1 - 1;
      loop_ub = Gammam->size[1];
      i1 = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r2, i1, &fc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        r2->data[i1] = i1;
      }

      i1 = MHm->size[0];
      if (!(1 <= i1)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &t_emlrtBCI, sp);
      }

      iv13[0] = 1;
      iv13[1] = r2->size[0];
      loop_ub = MHm->size[1];
      i1 = b_Phi_sp->size[0] * b_Phi_sp->size[1];
      b_Phi_sp->size[0] = 1;
      b_Phi_sp->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, b_Phi_sp, i1, &gc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Phi_sp->data[b_Phi_sp->size[0] * i1] = MHm->data[MHm->size[0] * i1];
      }

      for (i1 = 0; i1 < 2; i1++) {
        b_MHm[i1] = b_Phi_sp->size[i1];
      }

      emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &b_MHm[0], 2, &i_emlrtECI, sp);
      loop_ub = MHm->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        Gammam->data[i0 + Gammam->size[0] * r2->data[i1]] = MHm->data[MHm->size
          [0] * i1];
      }

      lnlik1 = (1.0 + (real_T)iter) - n0;
      if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
        emlrtIntegerCheckR2012b(lnlik1, &f_emlrtDCI, sp);
      }

      i0 = consm->size[0];
      i1 = (int32_T)lnlik1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &db_emlrtBCI, sp);
      }

      i0 = i1 - 1;
      loop_ub = consm->size[1];
      i1 = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r2, i1, &hc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        r2->data[i1] = i1;
      }

      i1 = normalize->size[0];
      iv13[0] = 1;
      iv13[1] = r2->size[0];
      c_Phi[0] = 1;
      c_Phi[1] = i1;
      emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &c_Phi[0], 2, &h_emlrtECI, sp);
      loop_ub = normalize->size[0] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        consm->data[i0 + consm->size[0] * r2->data[i1]] = normalize->data[i1 +
          normalize->size[0] * nc];
      }

      lnlik1 = (1.0 + (real_T)iter) - n0;
      if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
        emlrtIntegerCheckR2012b(lnlik1, &h_emlrtDCI, sp);
      }

      i0 = sig2m->size[0];
      i1 = (int32_T)lnlik1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &fb_emlrtBCI, sp);
      }

      i0 = i1 - 1;
      loop_ub = sig2m->size[1];
      i1 = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r2, i1, &ic_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        r2->data[i1] = i1;
      }

      iv13[0] = 1;
      iv13[1] = r2->size[0];
      c_Phi[0] = 1;
      c_Phi[1] = postmean->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &c_Phi[0], 2, &j_emlrtECI, sp);
      loop_ub = postmean->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        sig2m->data[i0 + sig2m->size[0] * r2->data[i1]] = postmean->data[i1];
      }

      lnlik1 = (1.0 + (real_T)iter) - n0;
      if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
        emlrtIntegerCheckR2012b(lnlik1, &c_emlrtDCI, sp);
      }

      i0 = betam->size[0];
      i1 = (int32_T)lnlik1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &v_emlrtBCI, sp);
      }

      i0 = i1 - 1;
      loop_ub = betam->size[1];
      i1 = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r2, i1, &jc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        r2->data[i1] = i1;
      }

      iv13[0] = 1;
      iv13[1] = r2->size[0];
      c_Phi[0] = 1;
      c_Phi[1] = beta->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &c_Phi[0], 2, &d_emlrtECI, sp);
      loop_ub = beta->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        betam->data[i0 + betam->size[0] * r2->data[i1]] = beta->data[i1];
      }

      i0 = b_Phi->size[0] * b_Phi->size[1];
      b_Phi->size[0] = Omega->size[0];
      b_Phi->size[1] = Omega->size[1];
      emxEnsureCapacity_real_T(sp, b_Phi, i0, &kc_emlrtRTEI);
      loop_ub = Omega->size[0] * Omega->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_Phi->data[i0] = Omega->data[i0];
      }

      st.site = &v_emlrtRSI;
      vec(&st, b_Phi);
      i0 = MHm->size[0] * MHm->size[1];
      MHm->size[0] = b_Phi->size[1];
      MHm->size[1] = b_Phi->size[0];
      emxEnsureCapacity_real_T(sp, MHm, i0, &lc_emlrtRTEI);
      loop_ub = b_Phi->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = b_Phi->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          MHm->data[i1 + MHm->size[0] * i0] = b_Phi->data[i0 + b_Phi->size[0] *
            i1];
        }
      }

      lnlik1 = (1.0 + (real_T)iter) - n0;
      if (lnlik1 != (int32_T)muDoubleScalarFloor(lnlik1)) {
        emlrtIntegerCheckR2012b(lnlik1, &d_emlrtDCI, sp);
      }

      i0 = Omegam->size[0];
      i1 = (int32_T)lnlik1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &x_emlrtBCI, sp);
      }

      i0 = i1 - 1;
      loop_ub = Omegam->size[1];
      i1 = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r2, i1, &mc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        r2->data[i1] = i1;
      }

      i1 = MHm->size[0];
      if (!(1 <= i1)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &u_emlrtBCI, sp);
      }

      iv13[0] = 1;
      iv13[1] = r2->size[0];
      loop_ub = MHm->size[1];
      i1 = b_Phi_sp->size[0] * b_Phi_sp->size[1];
      b_Phi_sp->size[0] = 1;
      b_Phi_sp->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, b_Phi_sp, i1, &nc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Phi_sp->data[b_Phi_sp->size[0] * i1] = MHm->data[MHm->size[0] * i1];
      }

      for (i1 = 0; i1 < 2; i1++) {
        b_MHm[i1] = b_Phi_sp->size[i1];
      }

      emlrtSubAssignSizeCheckR2012b(&iv13[0], 2, &b_MHm[0], 2, &e_emlrtECI, sp);
      loop_ub = MHm->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        Omegam->data[i0 + Omegam->size[0] * r2->data[i1]] = MHm->data[MHm->size
          [0] * i1];
      }
    }

    iter++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_Phi_sp);
  emxFree_int32_T(&r2);
  emxFree_real_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&YL_mean);
  emxFree_real_T(&Omega_inv);
  emxFree_real_T(&Phi);
  emxFree_real_T(&Omega);
  emxFree_real_T(&normalize);
  emxFree_real_T(&Gamma);
  y = NULL;
  m0 = emlrtCreateString1(' ');
  emlrtAssign(&y, m0);
  st.site = &el_emlrtRSI;
  disp(&st, y, &b_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 38, m0, &c_u[0]);
  emlrtAssign(&y, m0);
  st.site = &dl_emlrtRSI;
  disp(&st, y, &c_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateString1(' ');
  emlrtAssign(&y, m0);
  st.site = &cl_emlrtRSI;
  disp(&st, y, &d_emlrtMCI);
  lnML = 0.0;
  i0 = beta_hat->size[0];
  beta_hat->size[0] = b_->size[0];
  emxEnsureCapacity_real_T2(sp, beta_hat, i0, &q_emlrtRTEI);
  loop_ub = b_->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    beta_hat->data[i0] = b_->data[i0];
  }

  if (ML == 'Y') {
    n = -4.8516519540979028E+8;

    /*  임의로 값을 주고 시작함 */
    lnlik1 = 0.0;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, n1, mxDOUBLE_CLASS, (int32_T)n1,
      &ck_emlrtRTEI, sp);
    iter = 0;
    while (iter <= (int32_T)n1 - 1) {
      /*  y = x*b + resid */
      /*  x and b are both integer, and resid is positive */
      /*  몫 x와 나머지 resid를 산출 */
      /*      if resid == 0 */
      /*         resid = b; */
      /*         x = x - 1; */
      /*      end */
      if ((1.0 + (real_T)iter) - muDoubleScalarFloor((1.0 + (real_T)iter) /
           100.0) * 100.0 == 0.0) {
        st.site = &gl_emlrtRSI;
        clc(&st, &m_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateString1(' ');
        emlrtAssign(&y, m0);
        st.site = &bl_emlrtRSI;
        disp(&st, y, &n_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv7);
        emlrtInitCharArrayR2013a(sp, 38, m0, &c_u[0]);
        emlrtAssign(&y, m0);
        st.site = &al_emlrtRSI;
        disp(&st, y, &o_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateString1(' ');
        emlrtAssign(&y, m0);
        st.site = &yk_emlrtRSI;
        disp(&st, y, &p_emlrtMCI);
        for (i0 = 0; i0 < 39; i0++) {
          h_u[i0] = '=';
        }

        y = NULL;
        m0 = emlrtCreateCharArray(2, iv9);
        emlrtInitCharArrayR2013a(sp, 39, m0, &h_u[0]);
        emlrtAssign(&y, m0);
        st.site = &xk_emlrtRSI;
        disp(&st, y, &q_emlrtMCI);
        st.site = &w_emlrtRSI;
        b_st.site = &jf_emlrtRSI;
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv10);
        emlrtInitCharArrayR2013a(&b_st, 7, m0, &d_u[0]);
        emlrtAssign(&y, m0);
        b_y = NULL;
        m0 = emlrtCreateDoubleScalar(1.0);
        emlrtAssign(&b_y, m0);
        c_y = NULL;
        m0 = emlrtCreateCharArray(2, iv11);
        emlrtInitCharArrayR2013a(&b_st, 36, m0, &i_u[0]);
        emlrtAssign(&c_y, m0);
        d_y = NULL;
        m0 = emlrtCreateDoubleScalar((1.0 + (real_T)iter) * 100.0 / n1);
        emlrtAssign(&d_y, m0);
        c_st.site = &kl_emlrtRSI;
        c_emlrt_marshallIn(&c_st, d_feval(&c_st, y, b_y, c_y, d_y, &ab_emlrtMCI),
                           "feval");
        for (i0 = 0; i0 < 39; i0++) {
          h_u[i0] = '=';
        }

        y = NULL;
        m0 = emlrtCreateCharArray(2, iv12);
        emlrtInitCharArrayR2013a(sp, 39, m0, &h_u[0]);
        emlrtAssign(&y, m0);
        st.site = &wk_emlrtRSI;
        disp(&st, y, &r_emlrtMCI);
      }

      loop_ub = betam->size[1];
      i0 = betam->size[0];
      if (!((iter + 1 >= 1) && (iter + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, i0, &w_emlrtBCI, sp);
      }

      nx = iter + 1;
      i0 = beta->size[0];
      beta->size[0] = loop_ub;
      emxEnsureCapacity_real_T2(sp, beta, i0, &w_emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        beta->data[i0] = betam->data[(nx + betam->size[0] * i0) - 1];
      }

      /*  iter 번째에 sampling된 파라미터 */
      st.site = &x_emlrtRSI;
      loop_ub = Omegam->size[1];
      i0 = Omegam->size[0];
      if (!((iter + 1 >= 1) && (iter + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, i0, &y_emlrtBCI, &st);
      }

      nx = iter + 1;
      i0 = postmean->size[0];
      postmean->size[0] = loop_ub;
      emxEnsureCapacity_real_T2(&st, postmean, i0, &ab_emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        postmean->data[i0] = Omegam->data[(nx + Omegam->size[0] * i0) - 1];
      }

      nx = postmean->size[0];
      b_st.site = &nc_emlrtRSI;
      c_st.site = &pc_emlrtRSI;
      assertValidSizeArg(&c_st, nc);
      c_st.site = &pc_emlrtRSI;
      assertValidSizeArg(&c_st, nc);
      b_n = postmean->size[0];
      if (1 > postmean->size[0]) {
        b_n = 1;
      }

      nx = muIntScalarMax_sint32(nx, b_n);
      if (nc > nx) {
        b_st.site = &oc_emlrtRSI;
        c_error(&b_st);
      }

      if (nc * nc != postmean->size[0]) {
        emlrtErrorWithMessageIdR2018a(&st, &ek_emlrtRTEI,
          "Coder:MATLAB:getReshapeDims_notSameNumel",
          "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
      }

      nx = 0;
      while (nx <= Y0->size[0] - 1) {
        i0 = Y0->size[0];
        i1 = nx + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &ab_emlrtBCI, sp);
        }

        st.site = &y_emlrtRSI;
        loop_ub = YLm->size[0];
        b_loop_ub = YLm->size[1];
        i0 = YLm->size[2];
        i1 = 1 + nx;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &bb_emlrtBCI, &st);
        }

        i0 = Phi_sp->size[0] * Phi_sp->size[1];
        Phi_sp->size[0] = loop_ub;
        Phi_sp->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(&st, Phi_sp, i0, &kb_emlrtRTEI);
        for (i0 = 0; i0 < b_loop_ub; i0++) {
          for (result = 0; result < loop_ub; result++) {
            Phi_sp->data[result + Phi_sp->size[0] * i0] = YLm->data[(result +
              YLm->size[0] * i0) + YLm->size[0] * YLm->size[1] * (i1 - 1)];
          }
        }

        b_st.site = &le_emlrtRSI;
        i0 = YLm->size[1];
        if (!(i0 == beta->size[0])) {
          i0 = YLm->size[0];
          i1 = YLm->size[1];
          if (((i0 == 1) && (i1 == 1)) || (beta->size[0] == 1)) {
            emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
              "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
          }
        }

        i0 = YLm->size[1];
        if ((i0 == 1) || (beta->size[0] == 1)) {
          i0 = r3->size[0];
          r3->size[0] = Phi_sp->size[0];
          emxEnsureCapacity_real_T2(&st, r3, i0, &kb_emlrtRTEI);
          loop_ub = Phi_sp->size[0];
          for (i0 = 0; i0 < loop_ub; i0++) {
            r3->data[i0] = 0.0;
            b_loop_ub = Phi_sp->size[1];
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              r3->data[i0] += Phi_sp->data[i0 + Phi_sp->size[0] * i1] *
                beta->data[i1];
            }
          }
        } else {
          b_st.site = &ke_emlrtRSI;
          i0 = YLm->size[0];
          guard1 = false;
          if (i0 == 0) {
            guard1 = true;
          } else {
            i0 = YLm->size[1];
            if ((i0 == 0) || (beta->size[0] == 0)) {
              guard1 = true;
            } else {
              c_st.site = &pe_emlrtRSI;
              c_st.site = &qe_emlrtRSI;
              TRANSA = 'N';
              TRANSB = 'N';
              lnML = 1.0;
              pkk = 0.0;
              i0 = YLm->size[0];
              m_t = (ptrdiff_t)i0;
              n_t = (ptrdiff_t)1;
              i0 = YLm->size[1];
              k_t = (ptrdiff_t)i0;
              i0 = YLm->size[0];
              lda_t = (ptrdiff_t)i0;
              i0 = YLm->size[1];
              ldb_t = (ptrdiff_t)i0;
              i0 = YLm->size[0];
              ldc_t = (ptrdiff_t)i0;
              i0 = YLm->size[0];
              i1 = r3->size[0];
              r3->size[0] = i0;
              emxEnsureCapacity_real_T2(&c_st, r3, i1, &mb_emlrtRTEI);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lnML, &Phi_sp->data[0],
                    &lda_t, &beta->data[0], &ldb_t, &pkk, &r3->data[0], &ldc_t);
            }
          }

          if (guard1) {
            loop_ub = YLm->size[0];
            i0 = r3->size[0];
            r3->size[0] = loop_ub;
            emxEnsureCapacity_real_T2(&b_st, r3, i0, &kb_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              r3->data[i0] = 0.0;
            }
          }
        }

        loop_ub = Y0->size[1];
        i0 = Y0_mean->size[0];
        Y0_mean->size[0] = loop_ub;
        emxEnsureCapacity_real_T2(sp, Y0_mean, i0, &rb_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          Y0_mean->data[i0] = Y0->data[nx + Y0->size[0] * i0];
        }

        c_nc[0] = nc;
        c_nc[1] = nc;
        b_postmean = *postmean;
        b_postmean.size = (int32_T *)&c_nc;
        b_postmean.numDimensions = 1;
        st.site = &y_emlrtRSI;
        lnlik1 += lnpdfmvn(&st, Y0_mean, r3, &b_postmean);
        nx++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      st.site = &ab_emlrtRSI;
      lnML = lnpdfmvn(&st, beta, b_, var_);
      b_nc[0] = nc;
      b_nc[1] = nc;
      b_postmean = *postmean;
      b_postmean.size = (int32_T *)&b_nc;
      b_postmean.numDimensions = 1;
      st.site = &bb_emlrtRSI;
      inv(&st, &b_postmean, b_Phi);
      st.site = &bb_emlrtRSI;
      pkk = lnpdfwishart(&st, b_Phi, R0, nu);

      /*  결합 사전밀도함수값 */
      lnML = lnlik1 + (lnML + pkk);

      /*  해당 파라미터의 사후 커널값 */
      if (lnML > n) {
        i0 = beta_hat->size[0];
        beta_hat->size[0] = beta->size[0];
        emxEnsureCapacity_real_T2(sp, beta_hat, i0, &ob_emlrtRTEI);
        loop_ub = beta->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          beta_hat->data[i0] = beta->data[i0];
        }

        i0 = Omega0->size[0] * Omega0->size[1];
        Omega0->size[0] = nc;
        Omega0->size[1] = nc;
        emxEnsureCapacity_real_T(sp, Omega0, i0, &pb_emlrtRTEI);
        loop_ub = nc * nc;
        for (i0 = 0; i0 < loop_ub; i0++) {
          Omega0->data[i0] = postmean->data[i0];
        }

        n = lnML;

        /*  최빈값 후보의 사전밀도함수값 */
      }

      iter++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    st.site = &cb_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!((betam->size[0] == 0) || (betam->size[1] == 0))) {
      result = betam->size[0];
    } else if (!((Omegam->size[0] == 0) || (Omegam->size[1] == 0))) {
      result = Omegam->size[0];
    } else {
      result = muIntScalarMax_sint32(betam->size[0], 0);
      if (Omegam->size[0] > result) {
        result = Omegam->size[0];
      }
    }

    c_st.site = &uc_emlrtRSI;
    if ((betam->size[0] == result) || ((betam->size[0] == 0) || (betam->size[1] ==
          0))) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Omegam->size[0] == result) || ((Omegam->size[0] == 0) || (Omegam->size
          [1] == 0))) {
    } else {
      empty_non_axis_sizes = false;
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || (!((betam->size[0] == 0) || (betam->size[1] == 0))))
    {
      nx = betam->size[1];
    } else {
      nx = 0;
    }

    if (empty_non_axis_sizes || (!((Omegam->size[0] == 0) || (Omegam->size[1] ==
           0)))) {
      b_n = Omegam->size[1];
    } else {
      b_n = 0;
    }

    i0 = MHm->size[0] * MHm->size[1];
    MHm->size[0] = result;
    MHm->size[1] = nx + b_n;
    emxEnsureCapacity_real_T(&b_st, MHm, i0, &hb_emlrtRTEI);
    for (i0 = 0; i0 < nx; i0++) {
      for (i1 = 0; i1 < result; i1++) {
        MHm->data[i1 + MHm->size[0] * i0] = betam->data[i1 + result * i0];
      }
    }

    for (i0 = 0; i0 < b_n; i0++) {
      for (i1 = 0; i1 < result; i1++) {
        MHm->data[i1 + MHm->size[0] * (i0 + nx)] = Omegam->data[i1 + result * i0];
      }
    }

    st.site = &db_emlrtRSI;
    meanc(&st, MHm, postmean);
    st.site = &eb_emlrtRSI;
    cov(&st, MHm, b_Phi);
    st.site = &eb_emlrtRSI;
    cov(&st, MHm, Phi_sp);
    i0 = MHm->size[0] * MHm->size[1];
    MHm->size[0] = Phi_sp->size[1];
    MHm->size[1] = Phi_sp->size[0];
    emxEnsureCapacity_real_T(sp, MHm, i0, &nb_emlrtRTEI);
    loop_ub = Phi_sp->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = Phi_sp->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        MHm->data[i1 + MHm->size[0] * i0] = Phi_sp->data[i0 + Phi_sp->size[0] *
          i1];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      c_Phi[i0] = b_Phi->size[i0];
      b_MHm[i0] = MHm->size[i0];
    }

    if ((c_Phi[0] != b_MHm[0]) || (c_Phi[1] != b_MHm[1])) {
      emlrtSizeEqCheckNDR2012b(&c_Phi[0], &b_MHm[0], &f_emlrtECI, sp);
    }

    st.site = &fb_emlrtRSI;
    vec(&st, Omega0);
    st.site = &fb_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(beta_hat->size[0] == 0)) {
      result = 1;
    } else if (!((Omega0->size[0] == 0) || (Omega0->size[1] == 0))) {
      result = Omega0->size[1];
    } else {
      result = 1;
    }

    c_st.site = &uc_emlrtRSI;
    if ((1 == result) || (beta_hat->size[0] == 0)) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Omega0->size[1] == result) || ((Omega0->size[0] == 0) || (Omega0->size
          [1] == 0))) {
    } else {
      empty_non_axis_sizes = false;
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&c_st, &fk_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (!(beta_hat->size[0] == 0)) {
      nx = beta_hat->size[0];
    } else {
      nx = 0;
    }

    if (!((Omega0->size[0] == 0) || (Omega0->size[1] == 0))) {
      b_n = Omega0->size[0];
    } else {
      b_n = 0;
    }

    i0 = B->size[0] * B->size[1];
    B->size[0] = nx + b_n;
    B->size[1] = result;
    emxEnsureCapacity_real_T(sp, B, i0, &sb_emlrtRTEI);
    for (i0 = 0; i0 < result; i0++) {
      for (i1 = 0; i1 < nx; i1++) {
        B->data[i1 + B->size[0] * i0] = beta_hat->data[i1 + nx * i0];
      }
    }

    for (i0 = 0; i0 < result; i0++) {
      for (i1 = 0; i1 < b_n; i1++) {
        B->data[(i1 + nx) + B->size[0] * i0] = Omega0->data[i1 + b_n * i0];
      }
    }

    i0 = b_R0->size[0] * b_R0->size[1];
    b_R0->size[0] = b_Phi->size[0];
    b_R0->size[1] = b_Phi->size[1];
    emxEnsureCapacity_real_T(sp, b_R0, i0, &c_emlrtRTEI);
    loop_ub = b_Phi->size[0] * b_Phi->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_R0->data[i0] = 0.5 * (b_Phi->data[i0] + MHm->data[i0]);
    }

    st.site = &fb_emlrtRSI;
    lnML = b_lnpdfmvn(&st, B, postmean, b_R0);
    lnML = n - lnML;
  }

  emxFree_real_T(&b_R0);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_Phi);
  emxFree_real_T(&Y0_mean);
  emxFree_real_T(&YLm);
  emxFree_real_T(&Y0);
  emxFree_real_T(&postmean);
  emxFree_real_T(&MHm);
  emxFree_real_T(&beta_hat);
  emxFree_real_T(&Phi_sp);
  emxFree_real_T(&Omegam);
  emxFree_real_T(&betam);
  emxFree_real_T(&beta);
  emxFree_real_T(&Omega0);
  emxFree_real_T(&B);
  i0 = Output->Bm->size[0] * Output->Bm->size[1];
  Output->Bm->size[0] = Bm->size[0];
  Output->Bm->size[1] = Bm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Bm, i0, &s_emlrtRTEI);
  loop_ub = Bm->size[0] * Bm->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Bm->data[i0] = Bm->data[i0];
  }

  emxFree_real_T(&Bm);
  i0 = Output->consm->size[0] * Output->consm->size[1];
  Output->consm->size[0] = consm->size[0];
  Output->consm->size[1] = consm->size[1];
  emxEnsureCapacity_real_T(sp, Output->consm, i0, &u_emlrtRTEI);
  loop_ub = consm->size[0] * consm->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->consm->data[i0] = consm->data[i0];
  }

  emxFree_real_T(&consm);
  i0 = Output->Gammam->size[0] * Output->Gammam->size[1];
  Output->Gammam->size[0] = Gammam->size[0];
  Output->Gammam->size[1] = Gammam->size[1];
  emxEnsureCapacity_real_T(sp, Output->Gammam, i0, &v_emlrtRTEI);
  loop_ub = Gammam->size[0] * Gammam->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Gammam->data[i0] = Gammam->data[i0];
  }

  emxFree_real_T(&Gammam);
  i0 = Output->sigmam->size[0] * Output->sigmam->size[1];
  Output->sigmam->size[0] = sig2m->size[0];
  Output->sigmam->size[1] = sig2m->size[1];
  emxEnsureCapacity_real_T(sp, Output->sigmam, i0, &y_emlrtRTEI);
  loop_ub = sig2m->size[0] * sig2m->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->sigmam->data[i0] = sig2m->data[i0];
  }

  emxFree_real_T(&sig2m);
  i0 = Output->ImpulseRespm->size[0] * Output->ImpulseRespm->size[1] *
    Output->ImpulseRespm->size[2];
  Output->ImpulseRespm->size[0] = ImpulseRespm->size[0];
  Output->ImpulseRespm->size[1] = ImpulseRespm->size[1];
  Output->ImpulseRespm->size[2] = ImpulseRespm->size[2];
  emxEnsureCapacity_real_T1(sp, Output->ImpulseRespm, i0, &cb_emlrtRTEI);
  loop_ub = ImpulseRespm->size[0] * ImpulseRespm->size[1] * ImpulseRespm->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->ImpulseRespm->data[i0] = ImpulseRespm->data[i0];
  }

  emxFree_real_T(&ImpulseRespm);
  Output->lnML = lnML;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Recursive_BVAR.c) */

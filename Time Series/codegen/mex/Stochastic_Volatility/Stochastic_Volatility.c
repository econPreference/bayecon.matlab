/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Stochastic_Volatility.c
 *
 * Code generation for function 'Stochastic_Volatility'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "Stochastic_Volatility_emxutil.h"
#include "lnpdfn.h"
#include "error.h"
#include "exp.h"
#include "vec.h"
#include "lnpdfmvn.h"
#include "inv.h"
#include "cholmod.h"
#include "assertValidSizeArg.h"
#include "randn.h"
#include "sum.h"
#include "kron.h"
#include "eye.h"
#include "log.h"
#include "warning.h"
#include "mpower.h"
#include "eml_int_forloop_overflow_check.h"
#include "power.h"
#include "eig.h"
#include "xpotrf.h"
#include "invpd.h"
#include "indexShapeCheck.h"
#include "rdivide.h"
#include "lnpdfig.h"
#include "cov.h"
#include "combineVectorElements.h"
#include "isequal.h"
#include "Stochastic_Volatility_mexutil.h"
#include "Stochastic_Volatility_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 20,    /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 21,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 26,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 27,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 82,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 94,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 98,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 102, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 105, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 108, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 111, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 115, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 119, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 160, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 169, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 170, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 171, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 182, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 184, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 185, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 186, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 384,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 390,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 391,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 394,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 396,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 74, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 91, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 92, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 247,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 251,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 255,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 256,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 258,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 259,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 261,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 263,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 264,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 265,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 266,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 267,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 268,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 25, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 15, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 13, /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 253,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 293,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 232,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 234,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 235,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 9,  /* lineNo */
  "randig",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\randig.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 13, /* lineNo */
  "randgam",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\randgam.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 11, /* lineNo */
  "gamrnd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\stats\\eml\\gamrnd.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 1,  /* lineNo */
  "rnd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\rnd.p"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 1,  /* lineNo */
  "gamrnd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\private\\gamrnd.p"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 1,  /* lineNo */
  "randg",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\private\\randg.p"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 213,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 218,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 301,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 302,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 306,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 308,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 309,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 314,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 315,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 317,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 319,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 320,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 321,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 325,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 327,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 330,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 338,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 343,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 345,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 348,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 355,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 357,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 358,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 360,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 362,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 363,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 365,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 369,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 371,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 282,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 285,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 287,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\meanc.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 38, /* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 5,     /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 124, /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 125, /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 126, /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 80,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 81,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 83,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 84,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 85,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 86,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 87,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 88,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 89,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 90,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 155, /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 156, /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 157, /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 158, /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 159, /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 161, /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 60,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 17,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 26,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 26,/* lineNo */
  32,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 26,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 63,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 65,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 66,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 67,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 68,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 69,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 64,/* lineNo */
  7,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 94,/* lineNo */
  18,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 94,/* lineNo */
  21,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 132,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 132,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 95,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 133,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 133,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 98,/* lineNo */
  33,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 98,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 99,/* lineNo */
  18,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 86,/* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 134,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 134,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 88,/* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 135,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 135,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 105,/* lineNo */
  21,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 141,/* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 137,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 141,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 137,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 105,/* lineNo */
  33,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 143,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 144,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 105,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 190,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 191,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 112,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 192,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 164,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 112,/* lineNo */
  18,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 193,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 166,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 194,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 196,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 115,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 176,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 116,/* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 177,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 116,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 182,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 185,/* lineNo */
  33,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 186,/* lineNo */
  30,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 50,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 64,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 38,/* lineNo */
  9,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 384,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 386,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 390,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 386,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 391,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 391,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 391,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 394,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 396,/* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 396,/* lineNo */
  26,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 396,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 390,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 381,/* lineNo */
  17,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 246,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 246,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 247,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 249,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 255,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 255,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 256,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 256,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 258,/* lineNo */
  24,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 251,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 303,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 258,/* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 251,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 259,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 259,/* lineNo */
  25,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 259,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 261,/* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 261,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 112,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 263,/* lineNo */
  24,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 263,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 301,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 265,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 267,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 267,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 269,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 264,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 266,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 266,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 232,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 232,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 234,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 205,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 297,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 299,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 301,/* lineNo */
  26,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 301,/* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 301,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 302,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 302,/* lineNo */
  30,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 302,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 306,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 307,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 308,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 308,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 309,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 309,/* lineNo */
  44,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 50,/* lineNo */
  5,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 309,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 305,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 341,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 314,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 343,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 314,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 315,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 344,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 315,/* lineNo */
  21,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 347,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 348,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 315,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 348,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 317,/* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 349,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 317,/* lineNo */
  21,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 376,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 354,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 355,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 325,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 355,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 357,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 325,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 326,/* lineNo */
  19,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 326,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 327,/* lineNo */
  19,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 357,/* lineNo */
  22,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 327,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 329,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 360,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 360,/* lineNo */
  29,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 330,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 331,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 331,/* lineNo */
  18,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 360,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 362,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 362,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 362,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 363,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 363,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 365,/* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 365,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 365,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 366,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 368,/* lineNo */
  22,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 371,/* lineNo */
  26,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 371,/* lineNo */
  18,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 371,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 372,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 305,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 345,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 293,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = { 324,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 293,/* lineNo */
  32,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 302,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 308,/* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 348,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 281,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 282,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 285,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 287,/* lineNo */
  28,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  26,                                  /* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  26,                                  /* lineNo */
  27,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  26,                                  /* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 64,    /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo ll_emlrtRTEI = { 74,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  105,                                 /* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  105,                                 /* lineNo */
  28,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  105,                                 /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo b_emlrtDCI = { 132, /* lineNo */
  17,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  17,                                  /* colNo */
  "logLik",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  22,                                  /* colNo */
  "logLik",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  13,                                  /* colNo */
  "mu_phim",                           /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  99,                                  /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 133, /* lineNo */
  19,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  19,                                  /* colNo */
  "mu_phim",                           /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  24,                                  /* colNo */
  "mu_phim",                           /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 134, /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  15,                                  /* colNo */
  "Sig2m",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  20,                                  /* colNo */
  "Sig2m",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  11,                                  /* colNo */
  "betam",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  95,                                  /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 135, /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  15,                                  /* colNo */
  "betam",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  20,                                  /* colNo */
  "betam",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 137, /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  15,                                  /* colNo */
  "Yfm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  20,                                  /* colNo */
  "Yfm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  10,                                  /* colNo */
  "Volm",                              /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  116,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 141, /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  13,                                  /* colNo */
  "Volm",                              /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  18,                                  /* colNo */
  "Volm",                              /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ml_emlrtRTEI = { 152,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  164,                                 /* lineNo */
  26,                                  /* colNo */
  "mu_phim",                           /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  165,                                 /* lineNo */
  22,                                  /* colNo */
  "Sig2m",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  166,                                 /* lineNo */
  19,                                  /* colNo */
  "betam",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  25,                                  /* colNo */
  "logLik",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  185,                                 /* lineNo */
  22,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  8,                                   /* colNo */
  "Hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  112,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pl_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo ql_emlrtRTEI = { 17,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo rl_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 30,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtDCInfo h_emlrtDCI = { 63,  /* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 63,  /* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 66,  /* lineNo */
  17,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 67,  /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 63,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 63,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 65,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 66,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 67,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 68,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 69,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  5,                                   /* colNo */
  "Sig2m",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  5,                                   /* colNo */
  "logLik",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  9,                                   /* colNo */
  "Yfm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo wl_emlrtRTEI = { 80,/* lineNo */
  23,                                  /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtRTEInfo xl_emlrtRTEI = { 54,/* lineNo */
  15,                                  /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  396,                                 /* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  391,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  390,                                 /* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  386,                                 /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  386,                                 /* lineNo */
  3,                                   /* colNo */
  "X",                                 /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  386,                                 /* lineNo */
  21,                                  /* colNo */
  "vol",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  386,                                 /* lineNo */
  12,                                  /* colNo */
  "X",                                 /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  8,                                   /* colNo */
  "hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  12,                                  /* colNo */
  "hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  15,                                  /* colNo */
  "hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  23,                                  /* colNo */
  "hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { 2,   /* nDims */
  258,                                 /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  259,                                 /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  261,                                 /* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  15,                                  /* colNo */
  "mu_phi",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 263, /* lineNo */
  39,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  267,                                 /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { -1, /* nDims */
  232,                                 /* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  212,                                 /* lineNo */
  28,                                  /* colNo */
  "hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  218,                                 /* lineNo */
  5,                                   /* colNo */
  "sm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  21,                                  /* colNo */
  "ysm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  300,                                 /* lineNo */
  17,                                  /* colNo */
  "mu_phi",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  301,                                 /* lineNo */
  17,                                  /* colNo */
  "mu_phi",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 301, /* lineNo */
  41,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 302, /* lineNo */
  36,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 302, /* lineNo */
  49,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 302, /* lineNo */
  53,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo db_emlrtECI = { 2,  /* nDims */
  308,                                 /* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  300,                                 /* lineNo */
  3,                                   /* colNo */
  "C",                                 /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { 2,  /* nDims */
  309,                                 /* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  313,                                 /* lineNo */
  13,                                  /* colNo */
  "sm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo fb_emlrtECI = { -1, /* nDims */
  314,                                 /* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { 2,  /* nDims */
  315,                                 /* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  5,                                   /* colNo */
  "G",                                 /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  326,                                 /* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo ib_emlrtECI = { 2,  /* nDims */
  327,                                 /* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  331,                                 /* lineNo */
  27,                                  /* colNo */
  "vec_P_tt",                          /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  331,                                 /* lineNo */
  11,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  331,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  343,                                 /* lineNo */
  22,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  344,                                 /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  329,                                 /* lineNo */
  11,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lb_emlrtECI = { -1, /* nDims */
  329,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  347,                                 /* lineNo */
  14,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { -1, /* nDims */
  348,                                 /* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  354,                                 /* lineNo */
  18,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  355,                                 /* lineNo */
  26,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo nb_emlrtECI = { 2,  /* nDims */
  357,                                 /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  349,                                 /* lineNo */
  4,                                   /* colNo */
  "Fm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { -1, /* nDims */
  349,                                 /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  360,                                 /* lineNo */
  15,                                  /* colNo */
  "Fm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  360,                                 /* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  363,                                 /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo rb_emlrtECI = { 2,  /* nDims */
  366,                                 /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 2,  /* nDims */
  368,                                 /* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  371,                                 /* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  8,                                   /* colNo */
  "Fm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ub_emlrtECI = { -1, /* nDims */
  372,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  376,                                 /* lineNo */
  11,                                  /* colNo */
  "Fm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 297,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 306,/* lineNo */
  17,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 297,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 302,/* lineNo */
  23,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 306,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  317,                                 /* lineNo */
  27,                                  /* colNo */
  "vsm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  321,                                 /* lineNo */
  22,                                  /* colNo */
  "ysm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  322,                                 /* lineNo */
  5,                                   /* colNo */
  "likelihood",                        /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  324,                                 /* lineNo */
  12,                                  /* colNo */
  "ysm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  29,                                  /* colNo */
  "mu_phi",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  13,                                  /* colNo */
  "mu_phi",                            /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  281,                                 /* lineNo */
  14,                                  /* colNo */
  "hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  281,                                 /* lineNo */
  9,                                   /* colNo */
  "hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static const real_T dv0[7] = { 5.79596, 2.61369, 5.1795, 0.16735, 0.64009,
  0.34023, 1.26261 };

static const real_T dv1[7] = { -11.40039, -5.24321, -9.83726, 1.50746, -0.65098,
  0.52478, -2.35859 };

static emlrtRSInfo bl_emlrtRSI = { 5,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 90, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 89, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 88, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 87, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 86, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 85, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 84, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 83, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 81, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 161,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 159,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 158,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 157,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 156,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 126,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 125,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 124,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 80, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 155,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 60, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 281,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\Time Series\\Stochastic_Volatility.m"/* pathName */
};

/* Function Declarations */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *mu_phi, real_T sig2, const emxArray_real_T
                   *sm, const real_T vsm[7], emxArray_real_T *Fm, real_T
                   *loglikelihood);
static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *xf, const
  emxArray_real_T *beta, const emxArray_real_T *mu_phi, real_T sig2, const
  emxArray_real_T *ym, const emxArray_real_T *hm, real_T *y_pred, real_T
  *lnpredlik);
static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *X, const
                      emxArray_real_T *Y, real_T v_, real_T d_, const
                      emxArray_real_T *mu_phi, real_T *sig2_inv, real_T *sig2);
static void Gen_Sm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *hm, emxArray_real_T *sm);
static void Gen_beta(const emlrtStack *sp, emxArray_real_T *X, emxArray_real_T
                     *Y, const emxArray_real_T *beta0, const emxArray_real_T
                     *precB0, const emxArray_real_T *vol, emxArray_real_T *beta);
static void Gen_mu_phi(const emlrtStack *sp, emxArray_real_T *hm, const
  emxArray_real_T *b_, const emxArray_real_T *precb_, real_T sig2_inv, const
  emxArray_real_T *mu_phi0, emxArray_real_T *mu_phi, emxArray_real_T *X,
  emxArray_real_T *Y);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void format(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *mu_phi, real_T sig2, const emxArray_real_T
                   *sm, const real_T vsm[7], emxArray_real_T *Fm, real_T
                   *loglikelihood)
{
  emxArray_real_T *G;
  int32_T nr;
  int32_T p;
  int32_T i28;
  int32_T i29;
  int32_T loop_ub;
  emxArray_real_T *C;
  int32_T maxdimlen;
  int32_T i30;
  emxArray_real_T *cP_tt;
  real_T mean_tl;
  int32_T nx;
  boolean_T empty_non_axis_sizes;
  int32_T result;
  cell_wrap_0 reshapes[2];
  emxArray_real_T *PGG;
  emxArray_real_T *varargin_1;
  emxArray_real_T *Phi;
  int32_T i31;
  cell_wrap_0 b_reshapes[2];
  emxArray_real_T *b_result;
  emxArray_real_T *Sigma;
  emxArray_real_T *P_ttm;
  emxArray_real_T *likelihood;
  emxArray_real_T *b_PGG;
  int32_T c_PGG[2];
  int32_T b_Phi[2];
  emxArray_real_T *a;
  emxArray_real_T *f_tt;
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
  int32_T b_cP_tt[2];
  emxArray_real_T *b_Fm;
  emxArray_real_T *b;
  emxArray_real_T *P_tl;
  emxArray_real_T *f_ttm;
  emxArray_real_T *Kalgain;
  emxArray_real_T *vec_P_tt;
  emxArray_real_T *e_tl;
  emxArray_int32_T *r7;
  emxArray_real_T *b_b;
  emxArray_real_T *b_vec_P_tt;
  real_T var_tlinv;
  real_T lnmvn_data[1];
  int32_T lnmvn_size[1];
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
  emxInit_real_T1(sp, &G, 2, &mh_emlrtRTEI, true);

  /*  Fm 샘플랭 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  nr = mu_phi->size[0] - 1;
  p = mu_phi->size[0] - 1;
  i28 = G->size[0] * G->size[1];
  G->size[0] = 1;
  i29 = mu_phi->size[0] - 1;
  if (!(i29 >= 0)) {
    emlrtNonNegativeCheckR2012b(i29, &ab_emlrtDCI, sp);
  }

  G->size[1] = i29;
  emxEnsureCapacity_real_T1(sp, G, i28, &mh_emlrtRTEI);
  loop_ub = mu_phi->size[0] - 1;
  if (!(loop_ub >= 0)) {
    emlrtNonNegativeCheckR2012b(loop_ub, &cb_emlrtDCI, sp);
  }

  for (i28 = 0; i28 < loop_ub; i28++) {
    G->data[i28] = 0.0;
  }

  emxInit_real_T(sp, &C, 1, &nh_emlrtRTEI, true);
  maxdimlen = mu_phi->size[0] - 1;
  if (!(1 <= maxdimlen)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, maxdimlen, &xc_emlrtBCI, sp);
  }

  G->data[0] = 1.0;
  i28 = C->size[0];
  C->size[0] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(sp, C, i28, &nh_emlrtRTEI);
  loop_ub = mu_phi->size[0];
  for (i28 = 0; i28 <= loop_ub - 2; i28++) {
    C->data[i28] = 0.0;
  }

  i28 = mu_phi->size[0] - 1;
  if (!(1 <= i28)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i28, &vc_emlrtBCI, sp);
  }

  i28 = mu_phi->size[0];
  if (!(1 <= i28)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i28, &tc_emlrtBCI, sp);
  }

  C->data[0] = mu_phi->data[0];
  if (2 > mu_phi->size[0]) {
    i28 = 0;
    i30 = 0;
  } else {
    i28 = 1;
    i29 = mu_phi->size[0];
    i30 = mu_phi->size[0];
    if (!((i30 >= 1) && (i30 <= i29))) {
      emlrtDynamicBoundsCheckR2012b(i30, 1, i29, &uc_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &cP_tt, 2, &ek_emlrtRTEI, true);
  st.site = &li_emlrtRSI;
  eye(&st, ((real_T)mu_phi->size[0] - 1.0) - 1.0, cP_tt);
  mean_tl = ((real_T)mu_phi->size[0] - 1.0) - 1.0;
  if (!(mean_tl >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mean_tl, &v_emlrtDCI, sp);
  }

  st.site = &li_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  if (!((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0))) {
    nx = cP_tt->size[0];
  } else if (!(mu_phi->size[0] - 2 == 0)) {
    nx = mu_phi->size[0] - 2;
  } else {
    nx = muIntScalarMax_sint32(cP_tt->size[0], 0);
    if (mu_phi->size[0] - 2 > nx) {
      nx = mu_phi->size[0] - 2;
    }
  }

  c_st.site = &rd_emlrtRSI;
  if ((cP_tt->size[0] == nx) || ((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0)))
  {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((mu_phi->size[0] - 2 == nx) || (mu_phi->size[0] - 2 == 0)) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (nx == 0);
  if (empty_non_axis_sizes || (!((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0))))
  {
    result = cP_tt->size[1];
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes || (!(mu_phi->size[0] - 2 == 0))) {
    maxdimlen = 1;
  } else {
    maxdimlen = 0;
  }

  emxInitMatrix_cell_wrap_0(&b_st, reshapes, &qe_emlrtRTEI, true);
  i29 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
  reshapes[1].f1->size[0] = nx;
  reshapes[1].f1->size[1] = maxdimlen;
  emxEnsureCapacity_real_T1(&b_st, reshapes[1].f1, i29, &ee_emlrtRTEI);
  loop_ub = nx * maxdimlen;
  for (i29 = 0; i29 < loop_ub; i29++) {
    reshapes[1].f1->data[i29] = 0.0;
  }

  emxInit_real_T1(&b_st, &PGG, 2, &qj_emlrtRTEI, true);
  i29 = PGG->size[0] * PGG->size[1];
  PGG->size[0] = nx;
  PGG->size[1] = result + reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T1(&b_st, PGG, i29, &oh_emlrtRTEI);
  for (i29 = 0; i29 < result; i29++) {
    for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
      PGG->data[maxdimlen + PGG->size[0] * i29] = cP_tt->data[maxdimlen + nx *
        i29];
    }
  }

  loop_ub = reshapes[1].f1->size[1];
  for (i29 = 0; i29 < loop_ub; i29++) {
    nx = reshapes[1].f1->size[0];
    for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
      PGG->data[maxdimlen + PGG->size[0] * (i29 + result)] = reshapes[1]
        .f1->data[maxdimlen + reshapes[1].f1->size[0] * i29];
    }
  }

  emxFreeMatrix_cell_wrap_0(reshapes);
  emxInit_real_T1(&b_st, &varargin_1, 2, &ph_emlrtRTEI, true);
  st.site = &li_emlrtRSI;
  i29 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = i30 - i28;
  emxEnsureCapacity_real_T1(&st, varargin_1, i29, &ph_emlrtRTEI);
  loop_ub = i30 - i28;
  for (i29 = 0; i29 < loop_ub; i29++) {
    varargin_1->data[varargin_1->size[0] * i29] = mu_phi->data[i28 + i29];
  }

  b_st.site = &qd_emlrtRSI;
  if (!(varargin_1->size[1] == 0)) {
    nx = varargin_1->size[1];
  } else if (!((PGG->size[0] == 0) || (PGG->size[1] == 0))) {
    nx = PGG->size[1];
  } else {
    nx = 0;
    if (PGG->size[1] > 0) {
      nx = PGG->size[1];
    }
  }

  c_st.site = &rd_emlrtRSI;
  if ((varargin_1->size[1] == nx) || (varargin_1->size[1] == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((PGG->size[1] == nx) || ((PGG->size[0] == 0) || (PGG->size[1] == 0))) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (nx == 0);
  if (empty_non_axis_sizes || (!(varargin_1->size[1] == 0))) {
    result = 1;
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes || (!((PGG->size[0] == 0) || (PGG->size[1] == 0)))) {
    maxdimlen = PGG->size[0];
  } else {
    maxdimlen = 0;
  }

  emxInit_real_T1(&b_st, &Phi, 2, &qh_emlrtRTEI, true);
  i28 = Phi->size[0] * Phi->size[1];
  Phi->size[0] = result + maxdimlen;
  Phi->size[1] = nx;
  emxEnsureCapacity_real_T1(&b_st, Phi, i28, &qh_emlrtRTEI);
  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < result; i29++) {
      Phi->data[i29 + Phi->size[0] * i28] = varargin_1->data[i29 + result * i28];
    }
  }

  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < maxdimlen; i29++) {
      Phi->data[(i29 + result) + Phi->size[0] * i28] = PGG->data[i29 + maxdimlen
        * i28];
    }
  }

  maxdimlen = mu_phi->size[0] - 2;
  if (!(maxdimlen >= 0)) {
    emlrtNonNegativeCheckR2012b(maxdimlen, &db_emlrtDCI, sp);
  }

  i28 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = 1 + maxdimlen;
  emxEnsureCapacity_real_T1(sp, varargin_1, i28, &rh_emlrtRTEI);
  varargin_1->data[0] = sig2;
  for (i28 = 0; i28 < maxdimlen; i28++) {
    varargin_1->data[varargin_1->size[0] * (i28 + 1)] = 0.0;
  }

  st.site = &mi_emlrtRSI;
  mean_tl = ((real_T)mu_phi->size[0] - 1.0) - 1.0;
  if (!(mean_tl >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mean_tl, &w_emlrtDCI, &st);
  }

  mean_tl = ((real_T)mu_phi->size[0] - 1.0) - 1.0;
  if (!(mean_tl >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mean_tl, &x_emlrtDCI, &st);
  }

  mean_tl = ((real_T)mu_phi->size[0] - 1.0) - 1.0;
  if (!(mean_tl >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mean_tl, &y_emlrtDCI, &st);
  }

  b_st.site = &qd_emlrtRSI;
  if (!(mu_phi->size[0] - 2 == 0)) {
    result = mu_phi->size[0] - 2;
  } else {
    maxdimlen = mu_phi->size[0] - 2;
    nx = mu_phi->size[0] - 2;
    if (!((maxdimlen == 0) || (nx == 0))) {
      result = mu_phi->size[0] - 2;
    } else {
      i31 = mu_phi->size[0] - 2;
      result = muIntScalarMax_sint32(i31, 0);
      maxdimlen = mu_phi->size[0] - 2;
      if (maxdimlen > result) {
        result = mu_phi->size[0] - 2;
      }
    }
  }

  c_st.site = &rd_emlrtRSI;
  if ((mu_phi->size[0] - 2 == result) || (mu_phi->size[0] - 2 == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  maxdimlen = mu_phi->size[0] - 2;
  if (maxdimlen == result) {
  } else {
    maxdimlen = mu_phi->size[0] - 2;
    nx = mu_phi->size[0] - 2;
    if ((maxdimlen == 0) || (nx == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (!(mu_phi->size[0] - 2 == 0))) {
    nx = 1;
  } else {
    nx = 0;
  }

  emxInitMatrix_cell_wrap_0(&b_st, b_reshapes, &qe_emlrtRTEI, true);
  i28 = b_reshapes[0].f1->size[0] * b_reshapes[0].f1->size[1];
  b_reshapes[0].f1->size[0] = result;
  b_reshapes[0].f1->size[1] = nx;
  emxEnsureCapacity_real_T1(&b_st, b_reshapes[0].f1, i28, &ee_emlrtRTEI);
  loop_ub = result * nx;
  for (i28 = 0; i28 < loop_ub; i28++) {
    b_reshapes[0].f1->data[i28] = 0.0;
  }

  if (empty_non_axis_sizes) {
    nx = mu_phi->size[0] - 2;
  } else {
    maxdimlen = mu_phi->size[0] - 2;
    nx = mu_phi->size[0] - 2;
    if (!((maxdimlen == 0) || (nx == 0))) {
      nx = mu_phi->size[0] - 2;
    } else {
      nx = 0;
    }
  }

  i28 = b_reshapes[1].f1->size[0] * b_reshapes[1].f1->size[1];
  b_reshapes[1].f1->size[0] = result;
  b_reshapes[1].f1->size[1] = nx;
  emxEnsureCapacity_real_T1(&b_st, b_reshapes[1].f1, i28, &ee_emlrtRTEI);
  loop_ub = result * nx;
  for (i28 = 0; i28 < loop_ub; i28++) {
    b_reshapes[1].f1->data[i28] = 0.0;
  }

  i28 = PGG->size[0] * PGG->size[1];
  PGG->size[0] = b_reshapes[0].f1->size[0];
  PGG->size[1] = b_reshapes[0].f1->size[1] + b_reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T1(&b_st, PGG, i28, &sh_emlrtRTEI);
  loop_ub = b_reshapes[0].f1->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    nx = b_reshapes[0].f1->size[0];
    for (i29 = 0; i29 < nx; i29++) {
      PGG->data[i29 + PGG->size[0] * i28] = b_reshapes[0].f1->data[i29 +
        b_reshapes[0].f1->size[0] * i28];
    }
  }

  loop_ub = b_reshapes[1].f1->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    nx = b_reshapes[1].f1->size[0];
    for (i29 = 0; i29 < nx; i29++) {
      PGG->data[i29 + PGG->size[0] * (i28 + b_reshapes[0].f1->size[1])] =
        b_reshapes[1].f1->data[i29 + b_reshapes[1].f1->size[0] * i28];
    }
  }

  emxFreeMatrix_cell_wrap_0(b_reshapes);
  emxInit_real_T1(&b_st, &b_result, 2, &ik_emlrtRTEI, true);
  st.site = &mi_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  nx = varargin_1->size[1];
  c_st.site = &rd_emlrtRSI;
  empty_non_axis_sizes = (varargin_1->size[1] == nx);
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((PGG->size[1] == nx) || ((PGG->size[0] == 0) || (PGG->size[1] == 0))) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (!((PGG->size[0] == 0) || (PGG->size[1] == 0))) {
    result = PGG->size[0];
  } else {
    result = 0;
  }

  i28 = b_result->size[0] * b_result->size[1];
  b_result->size[0] = 1 + result;
  b_result->size[1] = nx;
  emxEnsureCapacity_real_T1(&b_st, b_result, i28, &th_emlrtRTEI);
  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < 1; i29++) {
      b_result->data[b_result->size[0] * i28] = varargin_1->data[i28];
    }
  }

  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < result; i29++) {
      b_result->data[(i29 + b_result->size[0] * i28) + 1] = PGG->data[i29 +
        result * i28];
    }
  }

  emxInit_real_T1(&b_st, &Sigma, 2, &uh_emlrtRTEI, true);
  i28 = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = 1 + result;
  Sigma->size[1] = nx;
  emxEnsureCapacity_real_T1(sp, Sigma, i28, &uh_emlrtRTEI);
  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < 1; i29++) {
      Sigma->data[Sigma->size[0] * i28] = varargin_1->data[i28];
    }
  }

  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < result; i29++) {
      Sigma->data[(i29 + Sigma->size[0] * i28) + 1] = PGG->data[i29 + result *
        i28];
    }
  }

  emxInit_real_T1(sp, &P_ttm, 2, &vh_emlrtRTEI, true);

  /* %%%% Kalman filtering step */
  /*  은닉인자를 저장 */
  st.site = &ni_emlrtRSI;
  b_st.site = &mf_emlrtRSI;
  mean_tl = ((real_T)mu_phi->size[0] - 1.0) * ((real_T)mu_phi->size[0] - 1.0);
  i28 = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[0] = ysm->size[0];
  if (mean_tl != (int32_T)mean_tl) {
    emlrtIntegerCheckR2012b(mean_tl, &bb_emlrtDCI, sp);
  }

  P_ttm->size[1] = (int32_T)mean_tl;
  emxEnsureCapacity_real_T1(sp, P_ttm, i28, &vh_emlrtRTEI);
  if (mean_tl != (int32_T)mean_tl) {
    emlrtIntegerCheckR2012b(mean_tl, &eb_emlrtDCI, sp);
  }

  loop_ub = ysm->size[0] * (int32_T)mean_tl;
  for (i28 = 0; i28 < loop_ub; i28++) {
    P_ttm->data[i28] = 0.0;
  }

  emxInit_real_T(sp, &likelihood, 1, &wh_emlrtRTEI, true);

  /*  은닉인자의 분산을 저장 */
  i28 = likelihood->size[0];
  likelihood->size[0] = ysm->size[0];
  emxEnsureCapacity_real_T(sp, likelihood, i28, &wh_emlrtRTEI);
  loop_ub = ysm->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    likelihood->data[i28] = 0.0;
  }

  st.site = &oi_emlrtRSI;
  eye(&st, (real_T)mu_phi->size[0] - 1.0, PGG);
  for (i28 = 0; i28 < 2; i28++) {
    c_PGG[i28] = PGG->size[i28];
    b_Phi[i28] = Phi->size[i28];
  }

  emxInit_real_T1(sp, &b_PGG, 2, &xh_emlrtRTEI, true);
  if ((c_PGG[0] != b_Phi[0]) || (c_PGG[1] != b_Phi[1])) {
    emlrtSizeEqCheckNDR2012b(&c_PGG[0], &b_Phi[0], &db_emlrtECI, sp);
  }

  i28 = b_PGG->size[0] * b_PGG->size[1];
  b_PGG->size[0] = PGG->size[0];
  b_PGG->size[1] = PGG->size[1];
  emxEnsureCapacity_real_T1(sp, b_PGG, i28, &xh_emlrtRTEI);
  loop_ub = PGG->size[0] * PGG->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    b_PGG->data[i28] = PGG->data[i28] - Phi->data[i28];
  }

  emxInit_real_T1(sp, &a, 2, &jk_emlrtRTEI, true);
  st.site = &oi_emlrtRSI;
  inv(&st, b_PGG, a);
  st.site = &oi_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == C->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (C->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &f_tt, 1, &dj_emlrtRTEI, true);
  if ((a->size[1] == 1) || (C->size[0] == 1)) {
    i28 = f_tt->size[0];
    f_tt->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, f_tt, i28, &yh_emlrtRTEI);
    loop_ub = a->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      f_tt->data[i28] = 0.0;
      nx = a->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        f_tt->data[i28] += a->data[i28 + a->size[0] * i29] * C->data[i29];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (C->size[0] == 0)) {
      i28 = f_tt->size[0];
      f_tt->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, f_tt, i28, &yh_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        f_tt->data[i28] = 0.0;
      }
    } else {
      c_st.site = &gc_emlrtRSI;
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
      i28 = f_tt->size[0];
      f_tt->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, f_tt, i28, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &C->data[0], &ldb_t, &beta1, &f_tt->data[0], &ldc_t);
    }
  }

  /*  초기값은 무조건부 평균 */
  st.site = &pi_emlrtRSI;
  b_st.site = &mf_emlrtRSI;
  st.site = &pi_emlrtRSI;
  eye(&st, ((real_T)mu_phi->size[0] - 1.0) * ((real_T)mu_phi->size[0] - 1.0),
      PGG);
  st.site = &pi_emlrtRSI;
  kron(&st, Phi, Phi, cP_tt);
  for (i28 = 0; i28 < 2; i28++) {
    c_PGG[i28] = PGG->size[i28];
    b_cP_tt[i28] = cP_tt->size[i28];
  }

  if ((c_PGG[0] != b_cP_tt[0]) || (c_PGG[1] != b_cP_tt[1])) {
    emlrtSizeEqCheckNDR2012b(&c_PGG[0], &b_cP_tt[0], &eb_emlrtECI, sp);
  }

  i28 = b_PGG->size[0] * b_PGG->size[1];
  b_PGG->size[0] = PGG->size[0];
  b_PGG->size[1] = PGG->size[1];
  emxEnsureCapacity_real_T1(sp, b_PGG, i28, &ai_emlrtRTEI);
  loop_ub = PGG->size[0] * PGG->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    b_PGG->data[i28] = PGG->data[i28] - cP_tt->data[i28];
  }

  emxInit_real_T1(sp, &b_Fm, 2, &fk_emlrtRTEI, true);
  emxInit_real_T1(sp, &b, 2, &bi_emlrtRTEI, true);
  st.site = &pi_emlrtRSI;
  inv(&st, b_PGG, a);
  st.site = &pi_emlrtRSI;
  vec(&st, b_result, b_Fm);
  i28 = b->size[0] * b->size[1];
  b->size[0] = b_Fm->size[0];
  b->size[1] = b_Fm->size[1];
  emxEnsureCapacity_real_T1(sp, b, i28, &bi_emlrtRTEI);
  loop_ub = b_Fm->size[0] * b_Fm->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    b->data[i28] = b_Fm->data[i28];
  }

  emxInit_real_T1(sp, &P_tl, 2, &pi_emlrtRTEI, true);
  st.site = &pi_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i28 = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = a->size[0];
    P_tl->size[1] = b->size[1];
    emxEnsureCapacity_real_T1(&st, P_tl, i28, &ci_emlrtRTEI);
    loop_ub = a->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = b->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        P_tl->data[i28 + P_tl->size[0] * i29] = 0.0;
        maxdimlen = a->size[1];
        for (i30 = 0; i30 < maxdimlen; i30++) {
          P_tl->data[i28 + P_tl->size[0] * i29] += a->data[i28 + a->size[0] *
            i30] * b->data[i30 + b->size[0] * i29];
        }
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (b->size[0] == 0) || (b->size
         [1] == 0)) {
      i28 = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = a->size[0];
      P_tl->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&b_st, P_tl, i28, &di_emlrtRTEI);
      loop_ub = a->size[0] * b->size[1];
      for (i28 = 0; i28 < loop_ub; i28++) {
        P_tl->data[i28] = 0.0;
      }
    } else {
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a->size[0];
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)a->size[0];
      i28 = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = a->size[0];
      P_tl->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&c_st, P_tl, i28, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &P_tl->data[0], &ldc_t);
    }
  }

  st.site = &pi_emlrtRSI;
  nx = P_tl->size[0] * P_tl->size[1];
  b_st.site = &uj_emlrtRSI;
  c_st.site = &sj_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  c_st.site = &sj_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  maxdimlen = P_tl->size[0];
  if (P_tl->size[1] > P_tl->size[0]) {
    maxdimlen = P_tl->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (mu_phi->size[0] - 1 > maxdimlen) {
    b_st.site = &tj_emlrtRSI;
    k_error(&b_st);
  }

  if ((mu_phi->size[0] - 1) * (mu_phi->size[0] - 1) != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &nm_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  maxdimlen = mu_phi->size[0] - 1;
  nx = mu_phi->size[0] - 1;
  i28 = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = maxdimlen;
  P_tl->size[1] = nx;
  emxEnsureCapacity_real_T1(&st, P_tl, i28, &ei_emlrtRTEI);
  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < maxdimlen; i29++) {
      P_tl->data[i29 + P_tl->size[0] * i28] = P_tl->data[i29 + maxdimlen * i28];
    }
  }

  emxInit_real_T1(&st, &f_ttm, 2, &dk_emlrtRTEI, true);
  i28 = f_ttm->size[0] * f_ttm->size[1];
  f_ttm->size[0] = ysm->size[0];
  f_ttm->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T1(sp, f_ttm, i28, &fi_emlrtRTEI);
  result = 0;
  emxInit_real_T(sp, &Kalgain, 1, &bj_emlrtRTEI, true);
  emxInit_real_T1(sp, &vec_P_tt, 2, &kj_emlrtRTEI, true);
  emxInit_real_T(sp, &e_tl, 1, &gk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &hk_emlrtRTEI, true);
  emxInit_real_T(sp, &b_b, 1, &kk_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_vec_P_tt, 2, &mj_emlrtRTEI, true);
  while (result <= ysm->size[0] - 1) {
    i28 = sm->size[0];
    i29 = result + 1;
    if (!((i29 >= 1) && (i29 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &wc_emlrtBCI, sp);
    }

    /*  t기의 상태변수 */
    st.site = &qi_emlrtRSI;
    i28 = a->size[0] * a->size[1];
    a->size[0] = Phi->size[0];
    a->size[1] = Phi->size[1];
    emxEnsureCapacity_real_T1(&st, a, i28, &hi_emlrtRTEI);
    loop_ub = Phi->size[0] * Phi->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      a->data[i28] = Phi->data[i28];
    }

    b_st.site = &ec_emlrtRSI;
    if (!(Phi->size[1] == f_tt->size[0])) {
      if (((Phi->size[0] == 1) && (Phi->size[1] == 1)) || (f_tt->size[0] == 1))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((Phi->size[1] == 1) || (f_tt->size[0] == 1)) {
      i28 = e_tl->size[0];
      e_tl->size[0] = Phi->size[0];
      emxEnsureCapacity_real_T(&st, e_tl, i28, &hi_emlrtRTEI);
      loop_ub = Phi->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        e_tl->data[i28] = 0.0;
        nx = Phi->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          e_tl->data[i28] += Phi->data[i28 + Phi->size[0] * i29] * f_tt->
            data[i29];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((Phi->size[0] == 0) || (Phi->size[1] == 0) || (f_tt->size[0] == 0)) {
        i28 = e_tl->size[0];
        e_tl->size[0] = Phi->size[0];
        emxEnsureCapacity_real_T(&b_st, e_tl, i28, &hi_emlrtRTEI);
        loop_ub = Phi->size[0];
        for (i28 = 0; i28 < loop_ub; i28++) {
          e_tl->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)Phi->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)Phi->size[1];
        lda_t = (ptrdiff_t)Phi->size[0];
        ldb_t = (ptrdiff_t)Phi->size[1];
        ldc_t = (ptrdiff_t)Phi->size[0];
        i28 = e_tl->size[0];
        e_tl->size[0] = Phi->size[0];
        emxEnsureCapacity_real_T(&c_st, e_tl, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &f_tt->data[0], &ldb_t, &beta1, &e_tl->data[0], &ldc_t);
      }
    }

    i28 = C->size[0];
    i29 = e_tl->size[0];
    if (i28 != i29) {
      emlrtSizeEqCheck1DR2012b(i28, i29, &fb_emlrtECI, sp);
    }

    i28 = e_tl->size[0];
    e_tl->size[0] = C->size[0];
    emxEnsureCapacity_real_T(sp, e_tl, i28, &ji_emlrtRTEI);
    loop_ub = C->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      e_tl->data[i28] += C->data[i28];
    }

    st.site = &ri_emlrtRSI;
    i28 = a->size[0] * a->size[1];
    a->size[0] = Phi->size[0];
    a->size[1] = Phi->size[1];
    emxEnsureCapacity_real_T1(&st, a, i28, &ki_emlrtRTEI);
    loop_ub = Phi->size[0] * Phi->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      a->data[i28] = Phi->data[i28];
    }

    b_st.site = &ec_emlrtRSI;
    if (!(Phi->size[1] == P_tl->size[0])) {
      if (((Phi->size[0] == 1) && (Phi->size[1] == 1)) || ((P_tl->size[0] == 1) &&
           (P_tl->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((Phi->size[1] == 1) || (P_tl->size[0] == 1)) {
      i28 = cP_tt->size[0] * cP_tt->size[1];
      cP_tt->size[0] = Phi->size[0];
      cP_tt->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T1(&st, cP_tt, i28, &ki_emlrtRTEI);
      loop_ub = Phi->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        nx = P_tl->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          cP_tt->data[i28 + cP_tt->size[0] * i29] = 0.0;
          maxdimlen = Phi->size[1];
          for (i30 = 0; i30 < maxdimlen; i30++) {
            cP_tt->data[i28 + cP_tt->size[0] * i29] += Phi->data[i28 + Phi->
              size[0] * i30] * P_tl->data[i30 + P_tl->size[0] * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((Phi->size[0] == 0) || (Phi->size[1] == 0) || (P_tl->size[0] == 0) ||
          (P_tl->size[1] == 0)) {
        i28 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = Phi->size[0];
        cP_tt->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T1(&b_st, cP_tt, i28, &ki_emlrtRTEI);
        loop_ub = Phi->size[0] * P_tl->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          cP_tt->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)Phi->size[0];
        n_t = (ptrdiff_t)P_tl->size[1];
        k_t = (ptrdiff_t)Phi->size[1];
        lda_t = (ptrdiff_t)Phi->size[0];
        ldb_t = (ptrdiff_t)Phi->size[1];
        ldc_t = (ptrdiff_t)Phi->size[0];
        i28 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = Phi->size[0];
        cP_tt->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T1(&c_st, cP_tt, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &cP_tt->data[0], &ldc_t);
      }
    }

    st.site = &ri_emlrtRSI;
    i28 = b->size[0] * b->size[1];
    b->size[0] = Phi->size[1];
    b->size[1] = Phi->size[0];
    emxEnsureCapacity_real_T1(&st, b, i28, &mi_emlrtRTEI);
    loop_ub = Phi->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = Phi->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        b->data[i29 + b->size[0] * i28] = Phi->data[i28 + Phi->size[0] * i29];
      }
    }

    b_st.site = &ec_emlrtRSI;
    if (!(cP_tt->size[1] == b->size[0])) {
      if (((cP_tt->size[0] == 1) && (cP_tt->size[1] == 1)) || ((b->size[0] == 1)
           && (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((cP_tt->size[1] == 1) || (b->size[0] == 1)) {
      i28 = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = cP_tt->size[0];
      P_tl->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&st, P_tl, i28, &ci_emlrtRTEI);
      loop_ub = cP_tt->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        nx = b->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          P_tl->data[i28 + P_tl->size[0] * i29] = 0.0;
          maxdimlen = cP_tt->size[1];
          for (i30 = 0; i30 < maxdimlen; i30++) {
            P_tl->data[i28 + P_tl->size[0] * i29] += cP_tt->data[i28 +
              cP_tt->size[0] * i30] * b->data[i30 + b->size[0] * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0) || (b->size[0] == 0) ||
          (b->size[1] == 0)) {
        i28 = P_tl->size[0] * P_tl->size[1];
        P_tl->size[0] = cP_tt->size[0];
        P_tl->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&b_st, P_tl, i28, &di_emlrtRTEI);
        loop_ub = cP_tt->size[0] * b->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          P_tl->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)cP_tt->size[0];
        n_t = (ptrdiff_t)b->size[1];
        k_t = (ptrdiff_t)cP_tt->size[1];
        lda_t = (ptrdiff_t)cP_tt->size[0];
        ldb_t = (ptrdiff_t)cP_tt->size[1];
        ldc_t = (ptrdiff_t)cP_tt->size[0];
        i28 = P_tl->size[0] * P_tl->size[1];
        P_tl->size[0] = cP_tt->size[0];
        P_tl->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&c_st, P_tl, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &cP_tt->data[0],
              &lda_t, &b->data[0], &ldb_t, &beta1, &P_tl->data[0], &ldc_t);
      }
    }

    for (i28 = 0; i28 < 2; i28++) {
      b_cP_tt[i28] = P_tl->size[i28];
      b_Phi[i28] = b_result->size[i28];
    }

    if ((b_cP_tt[0] != b_Phi[0]) || (b_cP_tt[1] != b_Phi[1])) {
      emlrtSizeEqCheckNDR2012b(&b_cP_tt[0], &b_Phi[0], &gb_emlrtECI, sp);
    }

    loop_ub = P_tl->size[0] * P_tl->size[1] - 1;
    i28 = P_tl->size[0] * P_tl->size[1];
    emxEnsureCapacity_real_T1(sp, P_tl, i28, &pi_emlrtRTEI);
    for (i28 = 0; i28 <= loop_ub; i28++) {
      P_tl->data[i28] += b_result->data[i28];
    }

    st.site = &si_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(nr == P_tl->size[0])) {
      if ((nr == 1) || ((P_tl->size[0] == 1) && (P_tl->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((p == 1) || (P_tl->size[0] == 1)) {
      i28 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T1(&st, varargin_1, i28, &ri_emlrtRTEI);
      loop_ub = P_tl->size[1];
      for (i28 = 0; i28 < loop_ub; i28++) {
        varargin_1->data[varargin_1->size[0] * i28] = 0.0;
        nx = G->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          varargin_1->data[varargin_1->size[0] * i28] += G->data[G->size[0] *
            i29] * P_tl->data[i29 + P_tl->size[0] * i28];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((nr == 0) || (P_tl->size[0] == 0)) {
        i28 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T1(&b_st, varargin_1, i28, &ri_emlrtRTEI);
        loop_ub = P_tl->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          varargin_1->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)1;
        n_t = (ptrdiff_t)P_tl->size[1];
        k_t = (ptrdiff_t)nr;
        lda_t = (ptrdiff_t)1;
        ldb_t = (ptrdiff_t)nr;
        ldc_t = (ptrdiff_t)1;
        i28 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T1(&c_st, varargin_1, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &G->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &varargin_1->data[0], &ldc_t);
      }
    }

    st.site = &si_emlrtRSI;
    i28 = b_b->size[0];
    b_b->size[0] = G->size[1];
    emxEnsureCapacity_real_T(&st, b_b, i28, &ti_emlrtRTEI);
    loop_ub = G->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_b->data[i28] = G->data[G->size[0] * i28];
    }

    b_st.site = &ec_emlrtRSI;
    if (!(varargin_1->size[1] == b_b->size[0])) {
      if ((varargin_1->size[1] == 1) || (b_b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((varargin_1->size[1] == 1) || (b_b->size[0] == 1)) {
      mean_tl = 0.0;
      for (i28 = 0; i28 < varargin_1->size[1]; i28++) {
        mean_tl += varargin_1->data[varargin_1->size[0] * i28] * b_b->data[i28];
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      n_t = (ptrdiff_t)varargin_1->size[1];
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      mean_tl = ddot(&n_t, &varargin_1->data[0], &m_t, &b_b->data[0], &k_t);
    }

    i28 = (int32_T)sm->data[result];
    if (!((i28 >= 1) && (i28 <= 7))) {
      emlrtDynamicBoundsCheckR2012b(i28, 1, 7, &kd_emlrtBCI, sp);
    }

    alpha1 = mean_tl + vsm[i28 - 1];
    alpha1 = 0.5 * (alpha1 + alpha1);
    st.site = &ti_emlrtRSI;
    var_tlinv = b_inv(&st, alpha1);
    st.site = &ui_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(nr == e_tl->size[0])) {
      if ((nr == 1) || (e_tl->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((p == 1) || (e_tl->size[0] == 1)) {
      mean_tl = 0.0;
      for (i28 = 0; i28 < G->size[1]; i28++) {
        mean_tl += G->data[G->size[0] * i28] * e_tl->data[i28];
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if (nr < 1) {
        mean_tl = 0.0;
      } else {
        n_t = (ptrdiff_t)nr;
        m_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)1;
        mean_tl = ddot(&n_t, &G->data[0], &m_t, &e_tl->data[0], &k_t);
      }
    }

    mean_tl += dv1[(int32_T)sm->data[result] - 1];
    i28 = ysm->size[0];
    i29 = 1 + result;
    if (!((i29 >= 1) && (i29 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &ld_emlrtBCI, sp);
    }

    st.site = &vi_emlrtRSI;
    lnpdfmvn(&st, ysm->data[i29 - 1], mean_tl, alpha1, lnmvn_data, lnmvn_size);
    i28 = likelihood->size[0];
    i29 = 1 + result;
    if (!((i29 >= 1) && (i29 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &md_emlrtBCI, sp);
    }

    likelihood->data[i29 - 1] = lnmvn_data[0];
    i28 = ysm->size[0];
    i29 = 1 + result;
    if (!((i29 >= 1) && (i29 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &nd_emlrtBCI, sp);
    }

    mean_tl = ysm->data[i29 - 1] - mean_tl;
    st.site = &wi_emlrtRSI;
    i28 = b_b->size[0];
    b_b->size[0] = G->size[1];
    emxEnsureCapacity_real_T(&st, b_b, i28, &xi_emlrtRTEI);
    loop_ub = G->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_b->data[i28] = G->data[G->size[0] * i28];
    }

    b_st.site = &ec_emlrtRSI;
    if (!(P_tl->size[1] == b_b->size[0])) {
      if (((P_tl->size[0] == 1) && (P_tl->size[1] == 1)) || (b_b->size[0] == 1))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((P_tl->size[1] == 1) || (b_b->size[0] == 1)) {
      i28 = Kalgain->size[0];
      Kalgain->size[0] = P_tl->size[0];
      emxEnsureCapacity_real_T(&st, Kalgain, i28, &ci_emlrtRTEI);
      loop_ub = P_tl->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        Kalgain->data[i28] = 0.0;
        nx = P_tl->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          Kalgain->data[i28] += P_tl->data[i28 + P_tl->size[0] * i29] *
            b_b->data[i29];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if (P_tl->size[0] == 0) {
        i28 = Kalgain->size[0];
        Kalgain->size[0] = P_tl->size[0];
        emxEnsureCapacity_real_T(&b_st, Kalgain, i28, &di_emlrtRTEI);
        loop_ub = P_tl->size[0];
        for (i28 = 0; i28 < loop_ub; i28++) {
          Kalgain->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)P_tl->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)P_tl->size[1];
        lda_t = (ptrdiff_t)P_tl->size[0];
        ldb_t = (ptrdiff_t)P_tl->size[1];
        ldc_t = (ptrdiff_t)P_tl->size[0];
        i28 = Kalgain->size[0];
        Kalgain->size[0] = P_tl->size[0];
        emxEnsureCapacity_real_T(&c_st, Kalgain, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &P_tl->data[0],
              &lda_t, &b_b->data[0], &ldb_t, &beta1, &Kalgain->data[0], &ldc_t);
      }
    }

    i28 = Kalgain->size[0];
    emxEnsureCapacity_real_T(sp, Kalgain, i28, &bj_emlrtRTEI);
    loop_ub = Kalgain->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      Kalgain->data[i28] *= var_tlinv;
    }

    /*  변환된 종속변수에 대해 Gamma는 단위행렬 */
    i28 = f_tt->size[0];
    f_tt->size[0] = Kalgain->size[0];
    emxEnsureCapacity_real_T(sp, f_tt, i28, &cj_emlrtRTEI);
    loop_ub = Kalgain->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      f_tt->data[i28] = Kalgain->data[i28] * mean_tl;
    }

    i28 = e_tl->size[0];
    i29 = f_tt->size[0];
    if (i28 != i29) {
      emlrtSizeEqCheck1DR2012b(i28, i29, &hb_emlrtECI, sp);
    }

    i28 = f_tt->size[0];
    f_tt->size[0] = e_tl->size[0];
    emxEnsureCapacity_real_T(sp, f_tt, i28, &dj_emlrtRTEI);
    loop_ub = e_tl->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      f_tt->data[i28] += e_tl->data[i28];
    }

    i28 = a->size[0] * a->size[1];
    a->size[0] = Kalgain->size[0];
    a->size[1] = G->size[1];
    emxEnsureCapacity_real_T1(sp, a, i28, &ej_emlrtRTEI);
    loop_ub = Kalgain->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = G->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        a->data[i28 + a->size[0] * i29] = Kalgain->data[i28] * G->data[G->size[0]
          * i29];
      }
    }

    st.site = &xi_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(a->size[1] == P_tl->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((P_tl->size[0] == 1) &&
           (P_tl->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (P_tl->size[0] == 1)) {
      i28 = PGG->size[0] * PGG->size[1];
      PGG->size[0] = a->size[0];
      PGG->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T1(&st, PGG, i28, &ej_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        nx = P_tl->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          PGG->data[i28 + PGG->size[0] * i29] = 0.0;
          maxdimlen = a->size[1];
          for (i30 = 0; i30 < maxdimlen; i30++) {
            PGG->data[i28 + PGG->size[0] * i29] += a->data[i28 + a->size[0] *
              i30] * P_tl->data[i30 + P_tl->size[0] * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (P_tl->size[0] == 0)) {
        i28 = PGG->size[0] * PGG->size[1];
        PGG->size[0] = a->size[0];
        PGG->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T1(&b_st, PGG, i28, &ej_emlrtRTEI);
        loop_ub = a->size[0] * P_tl->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          PGG->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)a->size[0];
        n_t = (ptrdiff_t)P_tl->size[1];
        k_t = (ptrdiff_t)a->size[1];
        lda_t = (ptrdiff_t)a->size[0];
        ldb_t = (ptrdiff_t)a->size[1];
        ldc_t = (ptrdiff_t)a->size[0];
        i28 = PGG->size[0] * PGG->size[1];
        PGG->size[0] = a->size[0];
        PGG->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T1(&c_st, PGG, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &PGG->data[0], &ldc_t);
      }
    }

    for (i28 = 0; i28 < 2; i28++) {
      b_cP_tt[i28] = P_tl->size[i28];
      c_PGG[i28] = PGG->size[i28];
    }

    if ((b_cP_tt[0] != c_PGG[0]) || (b_cP_tt[1] != c_PGG[1])) {
      emlrtSizeEqCheckNDR2012b(&b_cP_tt[0], &c_PGG[0], &ib_emlrtECI, sp);
    }

    loop_ub = P_tl->size[0] * P_tl->size[1] - 1;
    i28 = P_tl->size[0] * P_tl->size[1];
    emxEnsureCapacity_real_T1(sp, P_tl, i28, &gj_emlrtRTEI);
    for (i28 = 0; i28 <= loop_ub; i28++) {
      P_tl->data[i28] -= PGG->data[i28];
    }

    i28 = f_ttm->size[0];
    i29 = result + 1;
    if (!((i29 >= 1) && (i29 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &cd_emlrtBCI, sp);
    }

    loop_ub = f_ttm->size[1];
    i28 = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r7, i28, &hj_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      r7->data[i28] = i28;
    }

    b_cP_tt[0] = 1;
    b_cP_tt[1] = r7->size[0];
    b_Phi[0] = 1;
    b_Phi[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_cP_tt[0], 2, &b_Phi[0], 2, &lb_emlrtECI, sp);
    loop_ub = f_tt->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      f_ttm->data[result + f_ttm->size[0] * r7->data[i28]] = f_tt->data[i28];
    }

    st.site = &yi_emlrtRSI;
    vec(&st, P_tl, b_Fm);
    i28 = vec_P_tt->size[0] * vec_P_tt->size[1];
    vec_P_tt->size[0] = b_Fm->size[1];
    vec_P_tt->size[1] = b_Fm->size[0];
    emxEnsureCapacity_real_T1(sp, vec_P_tt, i28, &kj_emlrtRTEI);
    loop_ub = b_Fm->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = b_Fm->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        vec_P_tt->data[i29 + vec_P_tt->size[0] * i28] = b_Fm->data[i28 +
          b_Fm->size[0] * i29];
      }
    }

    i28 = P_ttm->size[0];
    i29 = result + 1;
    if (!((i29 >= 1) && (i29 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &ad_emlrtBCI, sp);
    }

    loop_ub = P_ttm->size[1];
    i28 = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r7, i28, &lj_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      r7->data[i28] = i28;
    }

    i28 = vec_P_tt->size[0];
    if (!(1 <= i28)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i28, &yc_emlrtBCI, sp);
    }

    b_cP_tt[0] = 1;
    b_cP_tt[1] = r7->size[0];
    loop_ub = vec_P_tt->size[1];
    i28 = b_vec_P_tt->size[0] * b_vec_P_tt->size[1];
    b_vec_P_tt->size[0] = 1;
    b_vec_P_tt->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_vec_P_tt, i28, &mj_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_vec_P_tt->data[b_vec_P_tt->size[0] * i28] = vec_P_tt->data
        [vec_P_tt->size[0] * i28];
    }

    for (i28 = 0; i28 < 2; i28++) {
      b_Phi[i28] = b_vec_P_tt->size[i28];
    }

    emlrtSubAssignSizeCheckR2012b(&b_cP_tt[0], 2, &b_Phi[0], 2, &jb_emlrtECI, sp);
    loop_ub = vec_P_tt->size[1] - 1;
    for (i28 = 0; i28 <= loop_ub; i28++) {
      P_ttm->data[result + P_ttm->size[0] * r7->data[i28]] = vec_P_tt->
        data[vec_P_tt->size[0] * i28];
    }

    result++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_vec_P_tt);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&vec_P_tt);
  emxFree_real_T(&G);
  st.site = &aj_emlrtRSI;
  *loglikelihood = c_sum(&st, likelihood);

  /* %% Backward recursion */
  i28 = b_Fm->size[0] * b_Fm->size[1];
  b_Fm->size[0] = ysm->size[0];
  b_Fm->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T1(sp, b_Fm, i28, &gi_emlrtRTEI);
  loop_ub = ysm->size[0] * (mu_phi->size[0] - 1);
  for (i28 = 0; i28 < loop_ub; i28++) {
    b_Fm->data[i28] = 0.0;
  }

  /*  T by km 샘플링된 값들을 저장하는 공간 */
  st.site = &bj_emlrtRSI;
  loop_ub = P_ttm->size[1];
  i28 = P_ttm->size[0];
  maxdimlen = ysm->size[0];
  if (!((maxdimlen >= 1) && (maxdimlen <= i28))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i28, &bd_emlrtBCI, &st);
  }

  i28 = likelihood->size[0];
  likelihood->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, likelihood, i28, &ii_emlrtRTEI);
  for (i28 = 0; i28 < loop_ub; i28++) {
    likelihood->data[i28] = P_ttm->data[(maxdimlen + P_ttm->size[0] * i28) - 1];
  }

  nx = likelihood->size[0];
  b_st.site = &uj_emlrtRSI;
  c_st.site = &sj_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  c_st.site = &sj_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  maxdimlen = likelihood->size[0];
  if (1 > likelihood->size[0]) {
    maxdimlen = 1;
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (mu_phi->size[0] - 1 > maxdimlen) {
    b_st.site = &tj_emlrtRSI;
    k_error(&b_st);
  }

  if ((mu_phi->size[0] - 1) * (mu_phi->size[0] - 1) != likelihood->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &nm_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  km by km 초기값으로 마지막 관측치 */
  b_Phi[0] = mu_phi->size[0] - 1;
  b_Phi[1] = mu_phi->size[0] - 1;
  maxdimlen = mu_phi->size[0] - 1;
  nx = mu_phi->size[0] - 1;
  i28 = b_PGG->size[0] * b_PGG->size[1];
  b_PGG->size[0] = nx;
  b_PGG->size[1] = maxdimlen;
  emxEnsureCapacity_real_T1(sp, b_PGG, i28, &li_emlrtRTEI);
  for (i28 = 0; i28 < maxdimlen; i28++) {
    for (i29 = 0; i29 < nx; i29++) {
      b_PGG->data[i29 + b_PGG->size[0] * i28] = likelihood->data[i28 + maxdimlen
        * i29];
    }
  }

  for (i28 = 0; i28 < 2; i28++) {
    b_cP_tt[i28] = b_PGG->size[i28];
  }

  if ((b_Phi[0] != b_cP_tt[0]) || (b_Phi[1] != b_cP_tt[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Phi[0], &b_cP_tt[0], &kb_emlrtECI, sp);
  }

  maxdimlen = mu_phi->size[0] - 1;
  nx = mu_phi->size[0] - 1;
  result = mu_phi->size[0] - 1;
  i28 = b_PGG->size[0] * b_PGG->size[1];
  b_PGG->size[0] = maxdimlen;
  b_PGG->size[1] = nx;
  emxEnsureCapacity_real_T1(sp, b_PGG, i28, &hc_emlrtRTEI);
  for (i28 = 0; i28 < nx; i28++) {
    for (i29 = 0; i29 < maxdimlen; i29++) {
      b_PGG->data[i29 + b_PGG->size[0] * i28] = (likelihood->data[i29 +
        maxdimlen * i28] + likelihood->data[i28 + result * i29]) / 2.0;
    }
  }

  st.site = &cj_emlrtRSI;
  b_cholmod(&st, b_PGG, cP_tt);

  /*  km by km */
  loop_ub = f_ttm->size[1];
  i28 = f_ttm->size[0];
  maxdimlen = ysm->size[0];
  if (!((maxdimlen >= 1) && (maxdimlen <= i28))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i28, &dd_emlrtBCI, sp);
  }

  i28 = f_tt->size[0];
  f_tt->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, f_tt, i28, &ni_emlrtRTEI);
  for (i28 = 0; i28 < loop_ub; i28++) {
    f_tt->data[i28] = f_ttm->data[(maxdimlen + f_ttm->size[0] * i28) - 1];
  }

  /*  km by 1 */
  st.site = &dj_emlrtRSI;
  randn(&st, (real_T)mu_phi->size[0] - 1.0, b_b);
  st.site = &dj_emlrtRSI;
  i28 = a->size[0] * a->size[1];
  a->size[0] = cP_tt->size[1];
  a->size[1] = cP_tt->size[0];
  emxEnsureCapacity_real_T1(&st, a, i28, &oi_emlrtRTEI);
  loop_ub = cP_tt->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    nx = cP_tt->size[1];
    for (i29 = 0; i29 < nx; i29++) {
      a->data[i29 + a->size[0] * i28] = cP_tt->data[i28 + cP_tt->size[0] * i29];
    }
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == b_b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (b_b->size[0] == 1)) {
    i28 = Kalgain->size[0];
    Kalgain->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, Kalgain, i28, &oi_emlrtRTEI);
    loop_ub = a->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      Kalgain->data[i28] = 0.0;
      nx = a->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        Kalgain->data[i28] += a->data[i28 + a->size[0] * i29] * b_b->data[i29];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (b_b->size[0] == 0)) {
      i28 = Kalgain->size[0];
      Kalgain->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, Kalgain, i28, &oi_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        Kalgain->data[i28] = 0.0;
      }
    } else {
      c_st.site = &gc_emlrtRSI;
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
      i28 = Kalgain->size[0];
      Kalgain->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, Kalgain, i28, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b_b->data[0], &ldb_t, &beta1, &Kalgain->data[0], &ldc_t);
    }
  }

  i28 = f_tt->size[0];
  i29 = Kalgain->size[0];
  if (i28 != i29) {
    emlrtSizeEqCheck1DR2012b(i28, i29, &mb_emlrtECI, sp);
  }

  i28 = f_tt->size[0];
  emxEnsureCapacity_real_T(sp, f_tt, i28, &qi_emlrtRTEI);
  loop_ub = f_tt->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    f_tt->data[i28] += Kalgain->data[i28];
  }

  /*  km by 1 */
  maxdimlen = ysm->size[0];
  i28 = ysm->size[0];
  if (!((i28 >= 1) && (i28 <= maxdimlen))) {
    emlrtDynamicBoundsCheckR2012b(i28, 1, maxdimlen, &gd_emlrtBCI, sp);
  }

  maxdimlen = mu_phi->size[0] - 1;
  i28 = r7->size[0];
  r7->size[0] = maxdimlen;
  emxEnsureCapacity_int32_T(sp, r7, i28, &si_emlrtRTEI);
  for (i28 = 0; i28 < maxdimlen; i28++) {
    r7->data[i28] = i28;
  }

  b_cP_tt[0] = 1;
  b_cP_tt[1] = r7->size[0];
  b_Phi[0] = 1;
  b_Phi[1] = f_tt->size[0];
  emlrtSubAssignSizeCheckR2012b(&b_cP_tt[0], 2, &b_Phi[0], 2, &ob_emlrtECI, sp);
  maxdimlen = ysm->size[0];
  loop_ub = f_tt->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    b_Fm->data[(maxdimlen + b_Fm->size[0] * r7->data[i28]) - 1] = f_tt->data[i28];
  }

  /*  1 by by km 마지막 기의 은닉인자를 sampling */
  result = ysm->size[0] - 1;

  /*   time index */
  while (result >= 1) {
    loop_ub = f_ttm->size[1];
    i28 = f_ttm->size[0];
    if (!(result <= i28)) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i28, &ed_emlrtBCI, sp);
    }

    i28 = f_tt->size[0];
    f_tt->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, f_tt, i28, &vi_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      f_tt->data[i28] = f_ttm->data[(result + f_ttm->size[0] * i28) - 1];
    }

    /*  km3 by 1 */
    st.site = &ej_emlrtRSI;
    loop_ub = P_ttm->size[1];
    i28 = P_ttm->size[0];
    if (!(result <= i28)) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i28, &fd_emlrtBCI, &st);
    }

    i28 = likelihood->size[0];
    likelihood->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, likelihood, i28, &wi_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      likelihood->data[i28] = P_ttm->data[(result + P_ttm->size[0] * i28) - 1];
    }

    nx = likelihood->size[0];
    b_st.site = &uj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    assertValidSizeArg(&c_st, (real_T)(nr + 1) - 1.0);
    c_st.site = &sj_emlrtRSI;
    assertValidSizeArg(&c_st, (real_T)(nr + 1) - 1.0);
    maxdimlen = likelihood->size[0];
    if (1 > likelihood->size[0]) {
      maxdimlen = 1;
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if (p > maxdimlen) {
      b_st.site = &tj_emlrtRSI;
      k_error(&b_st);
    }

    if (p * p != likelihood->size[0]) {
      emlrtErrorWithMessageIdR2018a(&st, &nm_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    i28 = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = p;
    P_tl->size[1] = p;
    emxEnsureCapacity_real_T1(&st, P_tl, i28, &yi_emlrtRTEI);
    loop_ub = p * p;
    for (i28 = 0; i28 < loop_ub; i28++) {
      P_tl->data[i28] = likelihood->data[i28];
    }

    /*  km3 by km3 */
    st.site = &fj_emlrtRSI;
    i28 = a->size[0] * a->size[1];
    a->size[0] = Phi->size[0];
    a->size[1] = Phi->size[1];
    emxEnsureCapacity_real_T1(&st, a, i28, &aj_emlrtRTEI);
    loop_ub = Phi->size[0] * Phi->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      a->data[i28] = Phi->data[i28];
    }

    b_st.site = &ec_emlrtRSI;
    if (!(Phi->size[1] == p)) {
      if (((Phi->size[0] == 1) && (Phi->size[1] == 1)) || (p == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((Phi->size[1] == 1) || (nr == 1)) {
      i28 = cP_tt->size[0] * cP_tt->size[1];
      cP_tt->size[0] = Phi->size[0];
      cP_tt->size[1] = nr;
      emxEnsureCapacity_real_T1(&st, cP_tt, i28, &aj_emlrtRTEI);
      loop_ub = Phi->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        for (i29 = 0; i29 < nr; i29++) {
          cP_tt->data[i28 + cP_tt->size[0] * i29] = 0.0;
          nx = Phi->size[1];
          for (i30 = 0; i30 < nx; i30++) {
            cP_tt->data[i28 + cP_tt->size[0] * i29] += Phi->data[i28 + Phi->
              size[0] * i30] * likelihood->data[i30 + nr * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((Phi->size[0] == 0) || (Phi->size[1] == 0) || (p == 0) || (p == 0)) {
        i28 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = Phi->size[0];
        cP_tt->size[1] = p;
        emxEnsureCapacity_real_T1(&b_st, cP_tt, i28, &aj_emlrtRTEI);
        loop_ub = Phi->size[0] * p;
        for (i28 = 0; i28 < loop_ub; i28++) {
          cP_tt->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)Phi->size[0];
        n_t = (ptrdiff_t)p;
        k_t = (ptrdiff_t)Phi->size[1];
        lda_t = (ptrdiff_t)Phi->size[0];
        ldb_t = (ptrdiff_t)Phi->size[1];
        ldc_t = (ptrdiff_t)Phi->size[0];
        i28 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = Phi->size[0];
        cP_tt->size[1] = p;
        emxEnsureCapacity_real_T1(&c_st, cP_tt, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &cP_tt->data[0], &ldc_t);
      }
    }

    st.site = &fj_emlrtRSI;
    i28 = b->size[0] * b->size[1];
    b->size[0] = Phi->size[1];
    b->size[1] = Phi->size[0];
    emxEnsureCapacity_real_T1(&st, b, i28, &fj_emlrtRTEI);
    loop_ub = Phi->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = Phi->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        b->data[i29 + b->size[0] * i28] = Phi->data[i28 + Phi->size[0] * i29];
      }
    }

    b_st.site = &ec_emlrtRSI;
    if (!(cP_tt->size[1] == b->size[0])) {
      if (((cP_tt->size[0] == 1) && (cP_tt->size[1] == 1)) || ((b->size[0] == 1)
           && (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((cP_tt->size[1] == 1) || (b->size[0] == 1)) {
      i28 = PGG->size[0] * PGG->size[1];
      PGG->size[0] = cP_tt->size[0];
      PGG->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&st, PGG, i28, &aj_emlrtRTEI);
      loop_ub = cP_tt->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        nx = b->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          PGG->data[i28 + PGG->size[0] * i29] = 0.0;
          maxdimlen = cP_tt->size[1];
          for (i30 = 0; i30 < maxdimlen; i30++) {
            PGG->data[i28 + PGG->size[0] * i29] += cP_tt->data[i28 + cP_tt->
              size[0] * i30] * b->data[i30 + b->size[0] * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0) || (b->size[0] == 0) ||
          (b->size[1] == 0)) {
        i28 = PGG->size[0] * PGG->size[1];
        PGG->size[0] = cP_tt->size[0];
        PGG->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&b_st, PGG, i28, &aj_emlrtRTEI);
        loop_ub = cP_tt->size[0] * b->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          PGG->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)cP_tt->size[0];
        n_t = (ptrdiff_t)b->size[1];
        k_t = (ptrdiff_t)cP_tt->size[1];
        lda_t = (ptrdiff_t)cP_tt->size[0];
        ldb_t = (ptrdiff_t)cP_tt->size[1];
        ldc_t = (ptrdiff_t)cP_tt->size[0];
        i28 = PGG->size[0] * PGG->size[1];
        PGG->size[0] = cP_tt->size[0];
        PGG->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&c_st, PGG, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &cP_tt->data[0],
              &lda_t, &b->data[0], &ldb_t, &beta1, &PGG->data[0], &ldc_t);
      }
    }

    for (i28 = 0; i28 < 2; i28++) {
      c_PGG[i28] = PGG->size[i28];
      b_Phi[i28] = b_result->size[i28];
    }

    if ((c_PGG[0] != b_Phi[0]) || (c_PGG[1] != b_Phi[1])) {
      emlrtSizeEqCheckNDR2012b(&c_PGG[0], &b_Phi[0], &nb_emlrtECI, sp);
    }

    /*  km by km */
    i28 = b_PGG->size[0] * b_PGG->size[1];
    b_PGG->size[0] = PGG->size[0];
    b_PGG->size[1] = PGG->size[1];
    emxEnsureCapacity_real_T1(sp, b_PGG, i28, &aj_emlrtRTEI);
    loop_ub = PGG->size[0] * PGG->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_PGG->data[i28] = PGG->data[i28] + Sigma->data[i28];
    }

    st.site = &gj_emlrtRSI;
    inv(&st, b_PGG, cP_tt);

    /*  km by km */
    loop_ub = b_Fm->size[1];
    i28 = b_Fm->size[0];
    if (!((result + 1 >= 1) && (result + 1 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, i28, &hd_emlrtBCI, sp);
    }

    maxdimlen = result + 1;
    i28 = e_tl->size[0];
    e_tl->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, e_tl, i28, &ij_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      e_tl->data[i28] = b_Fm->data[(maxdimlen + b_Fm->size[0] * i28) - 1];
    }

    i28 = e_tl->size[0];
    i29 = C->size[0];
    if (i28 != i29) {
      emlrtSizeEqCheck1DR2012b(i28, i29, &pb_emlrtECI, sp);
    }

    st.site = &hj_emlrtRSI;
    i28 = a->size[0] * a->size[1];
    a->size[0] = Phi->size[0];
    a->size[1] = Phi->size[1];
    emxEnsureCapacity_real_T1(&st, a, i28, &jj_emlrtRTEI);
    loop_ub = Phi->size[0] * Phi->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      a->data[i28] = Phi->data[i28];
    }

    b_st.site = &ec_emlrtRSI;
    if (!(Phi->size[1] == f_tt->size[0])) {
      if (((Phi->size[0] == 1) && (Phi->size[1] == 1)) || (f_tt->size[0] == 1))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((Phi->size[1] == 1) || (f_tt->size[0] == 1)) {
      i28 = Kalgain->size[0];
      Kalgain->size[0] = Phi->size[0];
      emxEnsureCapacity_real_T(&st, Kalgain, i28, &jj_emlrtRTEI);
      loop_ub = Phi->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        Kalgain->data[i28] = 0.0;
        nx = Phi->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          Kalgain->data[i28] += Phi->data[i28 + Phi->size[0] * i29] * f_tt->
            data[i29];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((Phi->size[0] == 0) || (Phi->size[1] == 0) || (f_tt->size[0] == 0)) {
        i28 = Kalgain->size[0];
        Kalgain->size[0] = Phi->size[0];
        emxEnsureCapacity_real_T(&b_st, Kalgain, i28, &jj_emlrtRTEI);
        loop_ub = Phi->size[0];
        for (i28 = 0; i28 < loop_ub; i28++) {
          Kalgain->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)Phi->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)Phi->size[1];
        lda_t = (ptrdiff_t)Phi->size[0];
        ldb_t = (ptrdiff_t)Phi->size[1];
        ldc_t = (ptrdiff_t)Phi->size[0];
        i28 = Kalgain->size[0];
        Kalgain->size[0] = Phi->size[0];
        emxEnsureCapacity_real_T(&c_st, Kalgain, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &f_tt->data[0], &ldb_t, &beta1, &Kalgain->data[0], &ldc_t);
      }
    }

    i28 = e_tl->size[0];
    i29 = Kalgain->size[0];
    if (i28 != i29) {
      emlrtSizeEqCheck1DR2012b(i28, i29, &pb_emlrtECI, sp);
    }

    i28 = e_tl->size[0];
    emxEnsureCapacity_real_T(sp, e_tl, i28, &nj_emlrtRTEI);
    loop_ub = e_tl->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      e_tl->data[i28] = (e_tl->data[i28] - C->data[i28]) - Kalgain->data[i28];
    }

    /*  km by 1 */
    st.site = &ij_emlrtRSI;
    i28 = b->size[0] * b->size[1];
    b->size[0] = Phi->size[1];
    b->size[1] = Phi->size[0];
    emxEnsureCapacity_real_T1(&st, b, i28, &oj_emlrtRTEI);
    loop_ub = Phi->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = Phi->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        b->data[i29 + b->size[0] * i28] = Phi->data[i28 + Phi->size[0] * i29];
      }
    }

    b_st.site = &ec_emlrtRSI;
    if (!(p == b->size[0])) {
      if ((p == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((nr == 1) || (b->size[0] == 1)) {
      i28 = a->size[0] * a->size[1];
      a->size[0] = nr;
      a->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&st, a, i28, &pj_emlrtRTEI);
      for (i28 = 0; i28 < nr; i28++) {
        loop_ub = b->size[1];
        for (i29 = 0; i29 < loop_ub; i29++) {
          a->data[i28 + a->size[0] * i29] = 0.0;
          for (i30 = 0; i30 < nr; i30++) {
            a->data[i28 + a->size[0] * i29] += likelihood->data[i28 + nr * i30] *
              b->data[i30 + b->size[0] * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((p == 0) || (b->size[0] == 0) || (b->size[1] == 0)) {
        i28 = a->size[0] * a->size[1];
        a->size[0] = p;
        a->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&b_st, a, i28, &pj_emlrtRTEI);
        loop_ub = p * b->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          a->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)p;
        n_t = (ptrdiff_t)b->size[1];
        k_t = (ptrdiff_t)p;
        lda_t = (ptrdiff_t)p;
        ldb_t = (ptrdiff_t)p;
        ldc_t = (ptrdiff_t)p;
        i28 = a->size[0] * a->size[1];
        a->size[0] = p;
        a->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&c_st, a, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &P_tl->data[0],
              &lda_t, &b->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    st.site = &ij_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(a->size[1] == cP_tt->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((cP_tt->size[0] == 1) &&
           (cP_tt->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (cP_tt->size[0] == 1)) {
      i28 = PGG->size[0] * PGG->size[1];
      PGG->size[0] = a->size[0];
      PGG->size[1] = cP_tt->size[1];
      emxEnsureCapacity_real_T1(&st, PGG, i28, &qj_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        nx = cP_tt->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          PGG->data[i28 + PGG->size[0] * i29] = 0.0;
          maxdimlen = a->size[1];
          for (i30 = 0; i30 < maxdimlen; i30++) {
            PGG->data[i28 + PGG->size[0] * i29] += a->data[i28 + a->size[0] *
              i30] * cP_tt->data[i30 + cP_tt->size[0] * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (cP_tt->size[0] == 0) ||
          (cP_tt->size[1] == 0)) {
        i28 = PGG->size[0] * PGG->size[1];
        PGG->size[0] = a->size[0];
        PGG->size[1] = cP_tt->size[1];
        emxEnsureCapacity_real_T1(&b_st, PGG, i28, &qj_emlrtRTEI);
        loop_ub = a->size[0] * cP_tt->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          PGG->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)a->size[0];
        n_t = (ptrdiff_t)cP_tt->size[1];
        k_t = (ptrdiff_t)a->size[1];
        lda_t = (ptrdiff_t)a->size[0];
        ldb_t = (ptrdiff_t)a->size[1];
        ldc_t = (ptrdiff_t)a->size[0];
        i28 = PGG->size[0] * PGG->size[1];
        PGG->size[0] = a->size[0];
        PGG->size[1] = cP_tt->size[1];
        emxEnsureCapacity_real_T1(&c_st, PGG, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &cP_tt->data[0], &ldb_t, &beta1, &PGG->data[0], &ldc_t);
      }
    }

    /*  km3 by km */
    st.site = &jj_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(PGG->size[1] == e_tl->size[0])) {
      if (((PGG->size[0] == 1) && (PGG->size[1] == 1)) || (e_tl->size[0] == 1))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((PGG->size[1] == 1) || (e_tl->size[0] == 1)) {
      i28 = Kalgain->size[0];
      Kalgain->size[0] = PGG->size[0];
      emxEnsureCapacity_real_T(&st, Kalgain, i28, &rj_emlrtRTEI);
      loop_ub = PGG->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        Kalgain->data[i28] = 0.0;
        nx = PGG->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          Kalgain->data[i28] += PGG->data[i28 + PGG->size[0] * i29] * e_tl->
            data[i29];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((PGG->size[0] == 0) || (PGG->size[1] == 0) || (e_tl->size[0] == 0)) {
        i28 = Kalgain->size[0];
        Kalgain->size[0] = PGG->size[0];
        emxEnsureCapacity_real_T(&b_st, Kalgain, i28, &rj_emlrtRTEI);
        loop_ub = PGG->size[0];
        for (i28 = 0; i28 < loop_ub; i28++) {
          Kalgain->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)PGG->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)PGG->size[1];
        lda_t = (ptrdiff_t)PGG->size[0];
        ldb_t = (ptrdiff_t)PGG->size[1];
        ldc_t = (ptrdiff_t)PGG->size[0];
        i28 = Kalgain->size[0];
        Kalgain->size[0] = PGG->size[0];
        emxEnsureCapacity_real_T(&c_st, Kalgain, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &PGG->data[0], &lda_t,
              &e_tl->data[0], &ldb_t, &beta1, &Kalgain->data[0], &ldc_t);
      }
    }

    i28 = f_tt->size[0];
    i29 = Kalgain->size[0];
    if (i28 != i29) {
      emlrtSizeEqCheck1DR2012b(i28, i29, &qb_emlrtECI, sp);
    }

    i28 = f_tt->size[0];
    emxEnsureCapacity_real_T(sp, f_tt, i28, &sj_emlrtRTEI);
    loop_ub = f_tt->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      f_tt->data[i28] += Kalgain->data[i28];
    }

    /*  km3 by 1 */
    st.site = &kj_emlrtRSI;
    i28 = b->size[0] * b->size[1];
    b->size[0] = Phi->size[0];
    b->size[1] = Phi->size[1];
    emxEnsureCapacity_real_T1(&st, b, i28, &tj_emlrtRTEI);
    loop_ub = Phi->size[0] * Phi->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b->data[i28] = Phi->data[i28];
    }

    b_st.site = &ec_emlrtRSI;
    if (!(PGG->size[1] == Phi->size[0])) {
      if (((PGG->size[0] == 1) && (PGG->size[1] == 1)) || ((Phi->size[0] == 1) &&
           (Phi->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((PGG->size[1] == 1) || (Phi->size[0] == 1)) {
      i28 = a->size[0] * a->size[1];
      a->size[0] = PGG->size[0];
      a->size[1] = Phi->size[1];
      emxEnsureCapacity_real_T1(&st, a, i28, &uj_emlrtRTEI);
      loop_ub = PGG->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        nx = Phi->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          a->data[i28 + a->size[0] * i29] = 0.0;
          maxdimlen = PGG->size[1];
          for (i30 = 0; i30 < maxdimlen; i30++) {
            a->data[i28 + a->size[0] * i29] += PGG->data[i28 + PGG->size[0] *
              i30] * Phi->data[i30 + Phi->size[0] * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((PGG->size[0] == 0) || (PGG->size[1] == 0) || (Phi->size[0] == 0) ||
          (Phi->size[1] == 0)) {
        i28 = a->size[0] * a->size[1];
        a->size[0] = PGG->size[0];
        a->size[1] = Phi->size[1];
        emxEnsureCapacity_real_T1(&b_st, a, i28, &uj_emlrtRTEI);
        loop_ub = PGG->size[0] * Phi->size[1];
        for (i28 = 0; i28 < loop_ub; i28++) {
          a->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)PGG->size[0];
        n_t = (ptrdiff_t)Phi->size[1];
        k_t = (ptrdiff_t)PGG->size[1];
        lda_t = (ptrdiff_t)PGG->size[0];
        ldb_t = (ptrdiff_t)PGG->size[1];
        ldc_t = (ptrdiff_t)PGG->size[0];
        i28 = a->size[0] * a->size[1];
        a->size[0] = PGG->size[0];
        a->size[1] = Phi->size[1];
        emxEnsureCapacity_real_T1(&c_st, a, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &PGG->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    st.site = &kj_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(a->size[1] == p)) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || (p == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (nr == 1)) {
      i28 = cP_tt->size[0] * cP_tt->size[1];
      cP_tt->size[0] = a->size[0];
      cP_tt->size[1] = nr;
      emxEnsureCapacity_real_T1(&st, cP_tt, i28, &vj_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        for (i29 = 0; i29 < nr; i29++) {
          cP_tt->data[i28 + cP_tt->size[0] * i29] = 0.0;
          nx = a->size[1];
          for (i30 = 0; i30 < nx; i30++) {
            cP_tt->data[i28 + cP_tt->size[0] * i29] += a->data[i28 + a->size[0] *
              i30] * likelihood->data[i30 + nr * i29];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (p == 0) || (p == 0)) {
        i28 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = a->size[0];
        cP_tt->size[1] = p;
        emxEnsureCapacity_real_T1(&b_st, cP_tt, i28, &vj_emlrtRTEI);
        loop_ub = a->size[0] * p;
        for (i28 = 0; i28 < loop_ub; i28++) {
          cP_tt->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)a->size[0];
        n_t = (ptrdiff_t)p;
        k_t = (ptrdiff_t)a->size[1];
        lda_t = (ptrdiff_t)a->size[0];
        ldb_t = (ptrdiff_t)a->size[1];
        ldc_t = (ptrdiff_t)a->size[0];
        i28 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = a->size[0];
        cP_tt->size[1] = p;
        emxEnsureCapacity_real_T1(&c_st, cP_tt, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &cP_tt->data[0], &ldc_t);
      }
    }

    /*  km3 by km3 */
    b_Phi[0] = nr;
    b_Phi[1] = nr;
    for (i28 = 0; i28 < 2; i28++) {
      b_cP_tt[i28] = cP_tt->size[i28];
    }

    if ((b_Phi[0] != b_cP_tt[0]) || (b_Phi[1] != b_cP_tt[1])) {
      emlrtSizeEqCheckNDR2012b(&b_Phi[0], &b_cP_tt[0], &rb_emlrtECI, sp);
    }

    loop_ub = nr * nr - 1;
    i28 = cP_tt->size[0] * cP_tt->size[1];
    cP_tt->size[0] = nr;
    cP_tt->size[1] = nr;
    emxEnsureCapacity_real_T1(sp, cP_tt, i28, &wj_emlrtRTEI);
    for (i28 = 0; i28 <= loop_ub; i28++) {
      cP_tt->data[i28] = likelihood->data[i28] - cP_tt->data[i28];
    }

    for (i28 = 0; i28 < 2; i28++) {
      b_cP_tt[i28] = cP_tt->size[i28];
    }

    i28 = b_PGG->size[0] * b_PGG->size[1];
    b_PGG->size[0] = cP_tt->size[1];
    b_PGG->size[1] = cP_tt->size[0];
    emxEnsureCapacity_real_T1(sp, b_PGG, i28, &xj_emlrtRTEI);
    loop_ub = cP_tt->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = cP_tt->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        b_PGG->data[i29 + b_PGG->size[0] * i28] = cP_tt->data[i28 + cP_tt->size
          [0] * i29];
      }
    }

    for (i28 = 0; i28 < 2; i28++) {
      b_Phi[i28] = b_PGG->size[i28];
    }

    if ((b_cP_tt[0] != b_Phi[0]) || (b_cP_tt[1] != b_Phi[1])) {
      emlrtSizeEqCheckNDR2012b(&b_cP_tt[0], &b_Phi[0], &sb_emlrtECI, sp);
    }

    i28 = b_PGG->size[0] * b_PGG->size[1];
    b_PGG->size[0] = cP_tt->size[0];
    b_PGG->size[1] = cP_tt->size[1];
    emxEnsureCapacity_real_T1(sp, b_PGG, i28, &hc_emlrtRTEI);
    loop_ub = cP_tt->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = cP_tt->size[0];
      for (i29 = 0; i29 < nx; i29++) {
        b_PGG->data[i29 + b_PGG->size[0] * i28] = (cP_tt->data[i29 + cP_tt->
          size[0] * i28] + cP_tt->data[i28 + cP_tt->size[0] * i29]) / 2.0;
      }
    }

    st.site = &lj_emlrtRSI;
    b_cholmod(&st, b_PGG, PGG);
    st.site = &mj_emlrtRSI;
    i28 = b_b->size[0];
    b_b->size[0] = nr;
    emxEnsureCapacity_real_T(&st, b_b, i28, &yj_emlrtRTEI);
    if (!(b_b->size[0] == 0)) {
      emlrtRandn(&b_b->data[0], b_b->size[0]);
    }

    st.site = &mj_emlrtRSI;
    i28 = a->size[0] * a->size[1];
    a->size[0] = PGG->size[1];
    a->size[1] = PGG->size[0];
    emxEnsureCapacity_real_T1(&st, a, i28, &ak_emlrtRTEI);
    loop_ub = PGG->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      nx = PGG->size[1];
      for (i29 = 0; i29 < nx; i29++) {
        a->data[i29 + a->size[0] * i28] = PGG->data[i28 + PGG->size[0] * i29];
      }
    }

    b_st.site = &ec_emlrtRSI;
    if (!(a->size[1] == b_b->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (b_b->size[0] == 1)) {
      i28 = Kalgain->size[0];
      Kalgain->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&st, Kalgain, i28, &ak_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        Kalgain->data[i28] = 0.0;
        nx = a->size[1];
        for (i29 = 0; i29 < nx; i29++) {
          Kalgain->data[i28] += a->data[i28 + a->size[0] * i29] * b_b->data[i29];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (b_b->size[0] == 0)) {
        i28 = Kalgain->size[0];
        Kalgain->size[0] = a->size[0];
        emxEnsureCapacity_real_T(&b_st, Kalgain, i28, &ak_emlrtRTEI);
        loop_ub = a->size[0];
        for (i28 = 0; i28 < loop_ub; i28++) {
          Kalgain->data[i28] = 0.0;
        }
      } else {
        c_st.site = &gc_emlrtRSI;
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
        i28 = Kalgain->size[0];
        Kalgain->size[0] = a->size[0];
        emxEnsureCapacity_real_T(&c_st, Kalgain, i28, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &b_b->data[0], &ldb_t, &beta1, &Kalgain->data[0], &ldc_t);
      }
    }

    i28 = f_tt->size[0];
    i29 = Kalgain->size[0];
    if (i28 != i29) {
      emlrtSizeEqCheck1DR2012b(i28, i29, &tb_emlrtECI, sp);
    }

    i28 = f_tt->size[0];
    emxEnsureCapacity_real_T(sp, f_tt, i28, &bk_emlrtRTEI);
    loop_ub = f_tt->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      f_tt->data[i28] += Kalgain->data[i28];
    }

    i28 = b_Fm->size[0];
    if (!(result <= i28)) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i28, &id_emlrtBCI, sp);
    }

    loop_ub = b_Fm->size[1];
    i28 = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r7, i28, &ck_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      r7->data[i28] = i28;
    }

    b_cP_tt[0] = 1;
    b_cP_tt[1] = r7->size[0];
    b_Phi[0] = 1;
    b_Phi[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_cP_tt[0], 2, &b_Phi[0], 2, &ub_emlrtECI, sp);
    loop_ub = f_tt->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_Fm->data[(result + b_Fm->size[0] * r7->data[i28]) - 1] = f_tt->data[i28];
    }

    /*  1 by by km */
    result--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_PGG);
  emxFree_real_T(&b_b);
  emxFree_real_T(&b);
  emxFree_real_T(&a);
  emxFree_real_T(&b_result);
  emxFree_int32_T(&r7);
  emxFree_real_T(&e_tl);
  emxFree_real_T(&PGG);
  emxFree_real_T(&cP_tt);
  emxFree_real_T(&f_tt);
  emxFree_real_T(&Kalgain);
  emxFree_real_T(&P_tl);
  emxFree_real_T(&likelihood);
  emxFree_real_T(&P_ttm);
  emxFree_real_T(&f_ttm);
  emxFree_real_T(&Sigma);
  emxFree_real_T(&Phi);
  emxFree_real_T(&C);
  i28 = b_Fm->size[1];
  if (!(1 <= i28)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i28, &jd_emlrtBCI, sp);
  }

  loop_ub = b_Fm->size[0];
  i28 = Fm->size[0];
  Fm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Fm, i28, &ui_emlrtRTEI);
  for (i28 = 0; i28 < loop_ub; i28++) {
    Fm->data[i28] = b_Fm->data[i28];
  }

  emxFree_real_T(&b_Fm);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *xf, const
  emxArray_real_T *beta, const emxArray_real_T *mu_phi, real_T sig2, const
  emxArray_real_T *ym, const emxArray_real_T *hm, real_T *y_pred, real_T
  *lnpredlik)
{
  real_T y;
  int32_T i36;
  int32_T i37;
  int32_T i38;
  emxArray_real_T *hL;
  int32_T i39;
  int32_T loop_ub;
  int32_T i40;
  emxArray_real_T *a;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  real_T r;
  real_T volf;
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

  /*  예측분포 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  y = ((real_T)ym->size[0] - ((real_T)mu_phi->size[0] - 1.0)) + 1.0;
  if (y > ym->size[0]) {
    i37 = 1;
    i36 = 1;
    i38 = 0;
  } else {
    i36 = hm->size[0];
    i37 = ym->size[0];
    if (!((i37 >= 1) && (i37 <= i36))) {
      emlrtDynamicBoundsCheckR2012b(i37, 1, i36, &rd_emlrtBCI, sp);
    }

    i36 = -1;
    i39 = hm->size[0];
    i38 = (int32_T)y;
    if (!((i38 >= 1) && (i38 <= i39))) {
      emlrtDynamicBoundsCheckR2012b(i38, 1, i39, &qd_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &hL, 1, &pk_emlrtRTEI, true);
  i39 = hL->size[0];
  st.site = &dm_emlrtRSI;
  hL->size[0] = div_s32_floor(&st, i38 - i37, i36) + 1;
  emxEnsureCapacity_real_T(sp, hL, i39, &pk_emlrtRTEI);
  st.site = &dm_emlrtRSI;
  loop_ub = div_s32_floor(&st, i38 - i37, i36);
  for (i39 = 0; i39 <= loop_ub; i39++) {
    hL->data[i39] = hm->data[(i37 + i36 * i39) - 1];
  }

  /*  마지막 기의 h(t) */
  if (2 > mu_phi->size[0]) {
    i39 = 0;
    loop_ub = 0;
  } else {
    i39 = 1;
    i40 = mu_phi->size[0];
    loop_ub = mu_phi->size[0];
    if (!((loop_ub >= 1) && (loop_ub <= i40))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i40, &od_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &a, 2, &qk_emlrtRTEI, true);
  i40 = mu_phi->size[0];
  if (!(1 <= i40)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i40, &pd_emlrtBCI, sp);
  }

  st.site = &dk_emlrtRSI;
  i40 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = loop_ub - i39;
  emxEnsureCapacity_real_T1(&st, a, i40, &qk_emlrtRTEI);
  loop_ub -= i39;
  for (i40 = 0; i40 < loop_ub; i40++) {
    a->data[a->size[0] * i40] = mu_phi->data[i39 + i40];
  }

  b_st.site = &ec_emlrtRSI;
  c_st.site = &dm_emlrtRSI;
  if (!(a->size[1] == div_s32_floor(&c_st, i38 - i37, i36) + 1)) {
    c_st.site = &dm_emlrtRSI;
    if ((a->size[1] == 1) || (div_s32_floor(&c_st, i38 - i37, i36) + 1 == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  b_st.site = &dm_emlrtRSI;
  if ((a->size[1] == 1) || (div_s32_floor(&b_st, i38 - i37, i36) + 1 == 1)) {
    y = 0.0;
    for (i36 = 0; i36 < a->size[1]; i36++) {
      y += a->data[a->size[0] * i36] * hL->data[i36];
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if (a->size[1] < 1) {
      y = 0.0;
    } else {
      n_t = (ptrdiff_t)a->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      y = ddot(&n_t, &a->data[0], &incx_t, &hL->data[0], &incy_t);
    }
  }

  emxFree_real_T(&hL);
  st.site = &dk_emlrtRSI;
  if (sig2 < 0.0) {
    b_st.site = &gf_emlrtRSI;
    f_error(&b_st);
  }

  st.site = &dk_emlrtRSI;
  emlrtRandn(&r, 1);

  /*  다음기에 예상되는 h(t) */
  volf = muDoubleScalarExp(((mu_phi->data[0] + y) + muDoubleScalarSqrt(sig2) * r)
    / 2.0);

  /*  다음기의 예상되는 변동성 */
  st.site = &ek_emlrtRSI;
  i36 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = xf->size[0];
  emxEnsureCapacity_real_T1(&st, a, i36, &rk_emlrtRTEI);
  loop_ub = xf->size[0];
  for (i36 = 0; i36 < loop_ub; i36++) {
    a->data[a->size[0] * i36] = xf->data[i36];
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == beta->size[0])) {
    if ((a->size[1] == 1) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (beta->size[0] == 1)) {
    y = 0.0;
    for (i36 = 0; i36 < a->size[1]; i36++) {
      y += a->data[a->size[0] * i36] * beta->data[i36];
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if (a->size[1] < 1) {
      y = 0.0;
    } else {
      n_t = (ptrdiff_t)a->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      y = ddot(&n_t, &a->data[0], &incx_t, &beta->data[0], &incy_t);
    }
  }

  st.site = &ek_emlrtRSI;
  emlrtRandn(&r, 1);
  *y_pred = y + volf * r;

  /*  다음기에 예상되는 y-value */
  st.site = &fk_emlrtRSI;
  i36 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = xf->size[0];
  emxEnsureCapacity_real_T1(&st, a, i36, &sk_emlrtRTEI);
  loop_ub = xf->size[0];
  for (i36 = 0; i36 < loop_ub; i36++) {
    a->data[a->size[0] * i36] = xf->data[i36];
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == beta->size[0])) {
    if ((a->size[1] == 1) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (beta->size[0] == 1)) {
    y = 0.0;
    for (i36 = 0; i36 < a->size[1]; i36++) {
      y += a->data[a->size[0] * i36] * beta->data[i36];
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if (a->size[1] < 1) {
      y = 0.0;
    } else {
      n_t = (ptrdiff_t)a->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      y = ddot(&n_t, &a->data[0], &incx_t, &beta->data[0], &incy_t);
    }
  }

  emxFree_real_T(&a);
  st.site = &fk_emlrtRSI;
  b_st.site = &mf_emlrtRSI;
  st.site = &fk_emlrtRSI;
  *lnpredlik = lnpdfn(&st, *y_pred, y, volf * volf);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *X, const
                      emxArray_real_T *Y, real_T v_, real_T d_, const
                      emxArray_real_T *mu_phi, real_T *sig2_inv, real_T *sig2)
{
  emxArray_real_T *ehat;
  int32_T iter;
  int32_T loop_ub;
  char_T TRANSA;
  char_T TRANSB;
  int32_T b_loop_ub;
  real_T alpha1;
  int32_T i25;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *a;
  real_T b;
  real_T d;
  real_T ur[2];
  real_T u;
  real_T x;
  int32_T exitg1;
  real_T v;
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

  /*  Sigma 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  st.site = &xh_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(X->size[1] == mu_phi->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (mu_phi->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &ehat, 1, &jh_emlrtRTEI, true);
  if ((X->size[1] == 1) || (mu_phi->size[0] == 1)) {
    iter = ehat->size[0];
    ehat->size[0] = X->size[0];
    emxEnsureCapacity_real_T(&st, ehat, iter, &ih_emlrtRTEI);
    loop_ub = X->size[0];
    for (iter = 0; iter < loop_ub; iter++) {
      ehat->data[iter] = 0.0;
      b_loop_ub = X->size[1];
      for (i25 = 0; i25 < b_loop_ub; i25++) {
        ehat->data[iter] += X->data[iter + X->size[0] * i25] * mu_phi->data[i25];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((X->size[0] == 0) || (X->size[1] == 0) || (mu_phi->size[0] == 0)) {
      iter = ehat->size[0];
      ehat->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&b_st, ehat, iter, &ih_emlrtRTEI);
      loop_ub = X->size[0];
      for (iter = 0; iter < loop_ub; iter++) {
        ehat->data[iter] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)X->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)X->size[1];
      lda_t = (ptrdiff_t)X->size[0];
      ldb_t = (ptrdiff_t)X->size[1];
      ldc_t = (ptrdiff_t)X->size[0];
      iter = ehat->size[0];
      ehat->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&c_st, ehat, iter, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X->data[0], &lda_t,
            &mu_phi->data[0], &ldb_t, &beta1, &ehat->data[0], &ldc_t);
    }
  }

  iter = Y->size[0];
  i25 = ehat->size[0];
  if (iter != i25) {
    emlrtSizeEqCheck1DR2012b(iter, i25, &cb_emlrtECI, sp);
  }

  iter = ehat->size[0];
  ehat->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, ehat, iter, &jh_emlrtRTEI);
  loop_ub = Y->size[0];
  for (iter = 0; iter < loop_ub; iter++) {
    ehat->data[iter] = Y->data[iter] - ehat->data[iter];
  }

  emxInit_real_T1(sp, &a, 2, &kh_emlrtRTEI, true);

  /*  잔차항 */
  st.site = &yh_emlrtRSI;
  iter = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = ehat->size[0];
  emxEnsureCapacity_real_T1(&st, a, iter, &kh_emlrtRTEI);
  loop_ub = ehat->size[0];
  for (iter = 0; iter < loop_ub; iter++) {
    a->data[a->size[0] * iter] = ehat->data[iter];
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == ehat->size[0])) {
    if ((a->size[1] == 1) || (ehat->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (ehat->size[0] == 1)) {
    alpha1 = 0.0;
    for (iter = 0; iter < a->size[1]; iter++) {
      alpha1 += a->data[a->size[0] * iter] * ehat->data[iter];
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    c_st.site = &kf_emlrtRSI;
    d_st.site = &lf_emlrtRSI;
    if (a->size[1] < 1) {
      alpha1 = 0.0;
    } else {
      e_st.site = &ad_emlrtRSI;
      n_t = (ptrdiff_t)a->size[1];
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      alpha1 = ddot(&n_t, &a->data[0], &m_t, &ehat->data[0], &k_t);
    }
  }

  emxFree_real_T(&a);
  emxFree_real_T(&ehat);
  beta1 = (v_ + (real_T)Y->size[0]) / 2.0;
  st.site = &ai_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  /*  m,n: 난수 행렬의 크기 */
  b_st.site = &bi_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b = 1.0 / ((d_ + alpha1) / 2.0);
  c_st.site = &ci_emlrtRSI;
  d_st.site = &di_emlrtRSI;
  e_st.site = &ei_emlrtRSI;
  f_st.site = &fi_emlrtRSI;
  g_st.site = &gi_emlrtRSI;
  if (beta1 <= 0.0) {
    if (beta1 == 0.0) {
      beta1 = 0.0;
    } else {
      beta1 = rtNaN;
    }
  } else {
    if ((!muDoubleScalarIsInf(beta1)) && (!muDoubleScalarIsNaN(beta1))) {
      if (beta1 >= 1.0) {
        d = beta1 - 0.33333333333333331;
        h_st.site = &gi_emlrtRSI;
        emlrtRandu(&u, 1);
        alpha1 = 1.0;
      } else {
        d = (beta1 + 1.0) - 0.33333333333333331;
        h_st.site = &gi_emlrtRSI;
        emlrtRandu(&ur[0], 2);
        u = ur[0];
        if (beta1 < 7.4567656047833286E-20) {
          alpha1 = 0.0;
        } else {
          h_st.site = &gi_emlrtRSI;
          alpha1 = mpower(&h_st, ur[1], 1.0 / beta1);
        }
      }

      h_st.site = &gi_emlrtRSI;
      beta1 = 1.0 / muDoubleScalarSqrt(9.0 * d);
      iter = 0;
      x = 0.0;
      do {
        exitg1 = 0;
        for (v = -1.0; v <= 0.0; v = 1.0 + beta1 * x) {
          h_st.site = &gi_emlrtRSI;
          emlrtRandn(&x, 1);
        }

        v *= v * v;
        x *= x;
        if (u < 1.0 - 0.0331 * x * x) {
          exitg1 = 1;
        } else {
          h_st.site = &gi_emlrtRSI;
          if (u < 0.0) {
            i_st.site = &hc_emlrtRSI;
            c_error(&i_st);
          }

          h_st.site = &gi_emlrtRSI;
          if (muDoubleScalarLog(u) < 0.5 * x + d * ((1.0 - v) +
               muDoubleScalarLog(v))) {
            exitg1 = 1;
          } else {
            iter++;
            if (iter > 1000000) {
              h_st.site = &gi_emlrtRSI;
              e_warning(&h_st);
              exitg1 = 1;
            } else {
              h_st.site = &gi_emlrtRSI;
              emlrtRandu(&u, 1);
            }
          }
        }
      } while (exitg1 == 0);

      beta1 = d * v * alpha1;
    }
  }

  alpha1 = b * beta1;
  if (b < 0.0) {
    alpha1 = rtNaN;
  }

  *sig2 = 1.0 / alpha1;
  *sig2_inv = 1.0 / *sig2;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Gen_Sm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *hm, emxArray_real_T *sm)
{
  int32_T i26;
  int32_T t;
  int32_T i;
  real_T ft;
  real_T fm[7];
  int32_T i27;
  real_T psuml[7];
  static const real_T pm[7] = { 0.0073, 0.10556, 2.0E-5, 0.04395, 0.34001,
    0.24566, 0.2575 };

  boolean_T iseql[7];
  int32_T store;
  boolean_T ex;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  State 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  i26 = sm->size[0];
  sm->size[0] = ysm->size[0];
  emxEnsureCapacity_real_T(sp, sm, i26, &lh_emlrtRTEI);
  t = 0;
  while (t <= ysm->size[0] - 1) {
    /*  이산확률변수 s(t)의 7가지 kernel 값을 저장하는 방 */
    i = 0;
    while (i < 7) {
      i26 = hm->size[0];
      i27 = t + 1;
      if (!((i27 >= 1) && (i27 <= i26))) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, i26, &qc_emlrtBCI, sp);
      }

      /*  ystm(t)의 조건부 기대값 */
      i26 = ysm->size[0];
      i27 = 1 + t;
      if (!((i27 >= 1) && (i27 <= i26))) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, i26, &sc_emlrtBCI, sp);
      }

      st.site = &hi_emlrtRSI;
      ft = lnpdfn(&st, ysm->data[i27 - 1], dv1[i] + hm->data[t], dv0[i]) +
        muDoubleScalarLog(pm[i]);
      fm[i] = muDoubleScalarExp(ft);
      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    ft = fm[0];
    for (i = 0; i < 6; i++) {
      ft += fm[i + 1];
    }

    for (i26 = 0; i26 < 7; i26++) {
      fm[i26] /= ft;
    }

    /*  st의 사후 확률 */
    st.site = &ii_emlrtRSI;

    /* cum = cum'; */
    /*  p에 대한 누적합 */
    psuml[0] = 0.0;
    for (i = 0; i < 6; i++) {
      fm[i + 1] += fm[i];
      psuml[i + 1] = fm[i];
    }

    emlrtRandu(&ft, 1);
    for (i = 0; i < 7; i++) {
      iseql[i] = ((ft > psuml[i]) == (ft <= fm[i]));
    }

    /*  psum=[.1 ; .2; .6; .8; 1] 이고 u=0.68이면 */
    /*  .6 ~ .8 사이에 위치하므로 4번째 원소자리에 1의 값을 부여하고 나머지는 0 */
    store = -1;
    ex = iseql[0];
    for (i = 0; i < 6; i++) {
      if ((int32_T)ex < (int32_T)iseql[i + 1]) {
        ex = iseql[i + 1];
        store = i;
      }
    }

    /*  그 1의 값의 위치     */
    store += 2;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }

    i26 = sm->size[0];
    i27 = 1 + t;
    if (!((i27 >= 1) && (i27 <= i26))) {
      emlrtDynamicBoundsCheckR2012b(i27, 1, i26, &rc_emlrtBCI, sp);
    }

    sm->data[i27 - 1] = store;
    t++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

static void Gen_beta(const emlrtStack *sp, emxArray_real_T *X, emxArray_real_T
                     *Y, const emxArray_real_T *beta0, const emxArray_real_T
                     *precB0, const emxArray_real_T *vol, emxArray_real_T *beta)
{
  emxArray_real_T *b_Y;
  int32_T i3;
  int32_T loop_ub;
  int32_T nr;
  int32_T i;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
  int32_T i4;
  emxArray_real_T *a;
  int32_T n;
  emxArray_real_T *B1;
  real_T alpha1;
  char_T TRANSA;
  char_T TRANSB;
  int32_T b_B1[2];
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emxArray_real_T *c_B1;
  ptrdiff_t k_t;
  int32_T b_precB0[2];
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *A;
  emxArray_real_T *r4;
  boolean_T b1;
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
  emxInit_real_T(sp, &b_Y, 1, &vc_emlrtRTEI, true);

  /*  Beta sampling */
  /*  이분산 모형을 동분산 모형으로 전환 */
  i3 = b_Y->size[0];
  b_Y->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, b_Y, i3, &vc_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    b_Y->data[i3] = Y->data[i3];
  }

  st.site = &mc_emlrtRSI;
  rdivide(&st, b_Y, vol, Y);
  nr = X->size[0];
  i = 0;
  emxFree_real_T(&b_Y);
  emxInit_int32_T(sp, &r2, 1, &id_emlrtRTEI, true);
  emxInit_real_T1(sp, &r3, 2, &id_emlrtRTEI, true);
  while (i <= nr - 1) {
    i3 = X->size[0];
    i4 = i + 1;
    if (!((i4 >= 1) && (i4 <= i3))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &x_emlrtBCI, sp);
    }

    loop_ub = X->size[1];
    i3 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r2, i3, &wc_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      r2->data[i3] = i3;
    }

    i3 = X->size[0];
    i4 = i + 1;
    if (!((i4 >= 1) && (i4 <= i3))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &ab_emlrtBCI, sp);
    }

    i3 = vol->size[0];
    i4 = i + 1;
    if (!((i4 >= 1) && (i4 <= i3))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &y_emlrtBCI, sp);
    }

    loop_ub = X->size[1];
    alpha1 = vol->data[i];
    i3 = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(sp, r3, i3, &yc_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      r3->data[r3->size[0] * i3] = X->data[i + X->size[0] * i3] / alpha1;
    }

    b_B1[0] = 1;
    b_B1[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_B1[0], 2, &(*(int32_T (*)[2])r3->size)[0],
      2, &o_emlrtECI, sp);
    loop_ub = r3->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      X->data[i + X->size[0] * r2->data[i3]] = r3->data[r3->size[0] * i3];
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&r3);
  emxFree_int32_T(&r2);
  emxInit_real_T1(sp, &a, 2, &xc_emlrtRTEI, true);

  /*  number of columns */
  st.site = &nc_emlrtRSI;
  i3 = a->size[0] * a->size[1];
  a->size[0] = X->size[1];
  a->size[1] = X->size[0];
  emxEnsureCapacity_real_T1(&st, a, i3, &xc_emlrtRTEI);
  loop_ub = X->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    n = X->size[1];
    for (i4 = 0; i4 < n; i4++) {
      a->data[i4 + a->size[0] * i3] = X->data[i3 + X->size[0] * i4];
    }
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == X->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((X->size[0] == 1) &&
         (X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T1(&st, &B1, 2, &hd_emlrtRTEI, true);
  if ((a->size[1] == 1) || (X->size[0] == 1)) {
    i3 = B1->size[0] * B1->size[1];
    B1->size[0] = a->size[0];
    B1->size[1] = X->size[1];
    emxEnsureCapacity_real_T1(&st, B1, i3, &xc_emlrtRTEI);
    loop_ub = a->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      n = X->size[1];
      for (i4 = 0; i4 < n; i4++) {
        B1->data[i3 + B1->size[0] * i4] = 0.0;
        nr = a->size[1];
        for (i = 0; i < nr; i++) {
          B1->data[i3 + B1->size[0] * i4] += a->data[i3 + a->size[0] * i] *
            X->data[i + X->size[0] * i4];
        }
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (X->size[0] == 0) || (X->size
         [1] == 0)) {
      i3 = B1->size[0] * B1->size[1];
      B1->size[0] = a->size[0];
      B1->size[1] = X->size[1];
      emxEnsureCapacity_real_T1(&b_st, B1, i3, &xc_emlrtRTEI);
      loop_ub = a->size[0] * X->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        B1->data[i3] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a->size[0];
      n_t = (ptrdiff_t)X->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)a->size[0];
      i3 = B1->size[0] * B1->size[1];
      B1->size[0] = a->size[0];
      B1->size[1] = X->size[1];
      emxEnsureCapacity_real_T1(&c_st, B1, i3, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &X->data[0], &ldb_t, &beta1, &B1->data[0], &ldc_t);
    }
  }

  for (i3 = 0; i3 < 2; i3++) {
    b_B1[i3] = B1->size[i3];
    b_precB0[i3] = precB0->size[i3];
  }

  emxInit_real_T1(sp, &c_B1, 2, &xc_emlrtRTEI, true);
  if ((b_B1[0] != b_precB0[0]) || (b_B1[1] != b_precB0[1])) {
    emlrtSizeEqCheckNDR2012b(&b_B1[0], &b_precB0[0], &n_emlrtECI, sp);
  }

  i3 = c_B1->size[0] * c_B1->size[1];
  c_B1->size[0] = B1->size[0];
  c_B1->size[1] = B1->size[1];
  emxEnsureCapacity_real_T1(sp, c_B1, i3, &xc_emlrtRTEI);
  loop_ub = B1->size[0] * B1->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    c_B1->data[i3] = B1->data[i3] + precB0->data[i3];
  }

  st.site = &nc_emlrtRSI;
  inv(&st, c_B1, B1);
  st.site = &oc_emlrtRSI;
  i3 = a->size[0] * a->size[1];
  a->size[0] = X->size[1];
  a->size[1] = X->size[0];
  emxEnsureCapacity_real_T1(&st, a, i3, &ad_emlrtRTEI);
  loop_ub = X->size[0];
  emxFree_real_T(&c_B1);
  for (i3 = 0; i3 < loop_ub; i3++) {
    n = X->size[1];
    for (i4 = 0; i4 < n; i4++) {
      a->data[i4 + a->size[0] * i3] = X->data[i3 + X->size[0] * i4];
    }
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == Y->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (Y->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &A, 1, &cd_emlrtRTEI, true);
  if ((a->size[1] == 1) || (Y->size[0] == 1)) {
    i3 = A->size[0];
    A->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, A, i3, &ad_emlrtRTEI);
    loop_ub = a->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      A->data[i3] = 0.0;
      n = a->size[1];
      for (i4 = 0; i4 < n; i4++) {
        A->data[i3] += a->data[i3 + a->size[0] * i4] * Y->data[i4];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (Y->size[0] == 0)) {
      i3 = A->size[0];
      A->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, A, i3, &ad_emlrtRTEI);
      loop_ub = a->size[0];
      for (i3 = 0; i3 < loop_ub; i3++) {
        A->data[i3] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
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
      i3 = A->size[0];
      A->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, A, i3, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &Y->data[0], &ldb_t, &beta1, &A->data[0], &ldc_t);
    }
  }

  st.site = &oc_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(precB0->size[1] == beta0->size[0])) {
    if (((precB0->size[0] == 1) && (precB0->size[1] == 1)) || (beta0->size[0] ==
         1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &r4, 1, &id_emlrtRTEI, true);
  if ((precB0->size[1] == 1) || (beta0->size[0] == 1)) {
    i3 = r4->size[0];
    r4->size[0] = precB0->size[0];
    emxEnsureCapacity_real_T(&st, r4, i3, &bd_emlrtRTEI);
    loop_ub = precB0->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      r4->data[i3] = 0.0;
      n = precB0->size[1];
      for (i4 = 0; i4 < n; i4++) {
        r4->data[i3] += precB0->data[i3 + precB0->size[0] * i4] * beta0->data[i4];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((precB0->size[0] == 0) || (precB0->size[1] == 0) || (beta0->size[0] == 0))
    {
      i3 = r4->size[0];
      r4->size[0] = precB0->size[0];
      emxEnsureCapacity_real_T(&b_st, r4, i3, &bd_emlrtRTEI);
      loop_ub = precB0->size[0];
      for (i3 = 0; i3 < loop_ub; i3++) {
        r4->data[i3] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)precB0->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)precB0->size[1];
      lda_t = (ptrdiff_t)precB0->size[0];
      ldb_t = (ptrdiff_t)precB0->size[1];
      ldc_t = (ptrdiff_t)precB0->size[0];
      i3 = r4->size[0];
      r4->size[0] = precB0->size[0];
      emxEnsureCapacity_real_T(&c_st, r4, i3, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &precB0->data[0],
            &lda_t, &beta0->data[0], &ldb_t, &beta1, &r4->data[0], &ldc_t);
    }
  }

  i3 = A->size[0];
  i4 = r4->size[0];
  if (i3 != i4) {
    emlrtSizeEqCheck1DR2012b(i3, i4, &m_emlrtECI, sp);
  }

  i3 = A->size[0];
  emxEnsureCapacity_real_T(sp, A, i3, &cd_emlrtRTEI);
  loop_ub = A->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    A->data[i3] += r4->data[i3];
  }

  st.site = &pc_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(B1->size[1] == A->size[0])) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((B1->size[1] == 1) || (A->size[0] == 1)) {
    i3 = beta->size[0];
    beta->size[0] = B1->size[0];
    emxEnsureCapacity_real_T(&st, beta, i3, &dd_emlrtRTEI);
    loop_ub = B1->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      beta->data[i3] = 0.0;
      n = B1->size[1];
      for (i4 = 0; i4 < n; i4++) {
        beta->data[i3] += B1->data[i3 + B1->size[0] * i4] * A->data[i4];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((B1->size[0] == 0) || (B1->size[1] == 0) || (A->size[0] == 0)) {
      i3 = beta->size[0];
      beta->size[0] = B1->size[0];
      emxEnsureCapacity_real_T(&b_st, beta, i3, &dd_emlrtRTEI);
      loop_ub = B1->size[0];
      for (i3 = 0; i3 < loop_ub; i3++) {
        beta->data[i3] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
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
      i3 = beta->size[0];
      beta->size[0] = B1->size[0];
      emxEnsureCapacity_real_T(&c_st, beta, i3, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &B1->data[0], &lda_t,
            &A->data[0], &ldb_t, &beta1, &beta->data[0], &ldc_t);
    }
  }

  st.site = &qc_emlrtRSI;
  b_st.site = &rc_emlrtRSI;
  n = B1->size[1];
  b1 = (B1->size[0] == B1->size[1]);
  if (!b1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xl_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if (B1->size[1] != 0) {
    i3 = B1->size[1];
    i4 = B1->size[1];
    c_st.site = &sc_emlrtRSI;
    nr = xpotrf(&c_st, i3, B1, i4);
    if (nr == 0) {
    } else {
      n = nr - 1;
      emlrtErrorWithMessageIdR2018a(&b_st, &wl_emlrtRTEI, "Coder:MATLAB:posdef",
        "Coder:MATLAB:posdef", 0);
    }

    c_st.site = &tc_emlrtRSI;
    if ((!(1 > n)) && (n > 2147483646)) {
      d_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (nr = 2; nr - 1 <= n; nr++) {
      c_st.site = &uc_emlrtRSI;
      if ((!(nr > n)) && (n > 2147483646)) {
        d_st.site = &sb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = nr; i <= n; i++) {
        B1->data[(i + B1->size[0] * (nr - 2)) - 1] = 0.0;
      }
    }
  }

  i3 = a->size[0] * a->size[1];
  a->size[0] = B1->size[1];
  a->size[1] = B1->size[0];
  emxEnsureCapacity_real_T1(sp, a, i3, &ed_emlrtRTEI);
  loop_ub = B1->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    n = B1->size[1];
    for (i4 = 0; i4 < n; i4++) {
      a->data[i4 + a->size[0] * i3] = B1->data[i3 + B1->size[0] * i4];
    }
  }

  emxFree_real_T(&B1);
  st.site = &qc_emlrtRSI;
  i3 = A->size[0];
  A->size[0] = X->size[1];
  emxEnsureCapacity_real_T(&st, A, i3, &fd_emlrtRTEI);
  if (!(A->size[0] == 0)) {
    emlrtRandn(&A->data[0], A->size[0]);
  }

  st.site = &qc_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == A->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (A->size[0] == 1)) {
    i3 = r4->size[0];
    r4->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, r4, i3, &ed_emlrtRTEI);
    loop_ub = a->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      r4->data[i3] = 0.0;
      n = a->size[1];
      for (i4 = 0; i4 < n; i4++) {
        r4->data[i3] += a->data[i3 + a->size[0] * i4] * A->data[i4];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (A->size[0] == 0)) {
      i3 = r4->size[0];
      r4->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, r4, i3, &ed_emlrtRTEI);
      loop_ub = a->size[0];
      for (i3 = 0; i3 < loop_ub; i3++) {
        r4->data[i3] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
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
      i3 = r4->size[0];
      r4->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, r4, i3, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &A->data[0], &ldb_t, &beta1, &r4->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&a);
  emxFree_real_T(&A);
  i3 = beta->size[0];
  i4 = r4->size[0];
  if (i3 != i4) {
    emlrtSizeEqCheck1DR2012b(i3, i4, &l_emlrtECI, sp);
  }

  i3 = beta->size[0];
  emxEnsureCapacity_real_T(sp, beta, i3, &gd_emlrtRTEI);
  loop_ub = beta->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    beta->data[i3] += r4->data[i3];
  }

  emxFree_real_T(&r4);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Gen_mu_phi(const emlrtStack *sp, emxArray_real_T *hm, const
  emxArray_real_T *b_, const emxArray_real_T *precb_, real_T sig2_inv, const
  emxArray_real_T *mu_phi0, emxArray_real_T *mu_phi, emxArray_real_T *X,
  emxArray_real_T *Y)
{
  emxArray_real_T *b_hm;
  int32_T c_hm;
  int32_T i6;
  int32_T loop_ub;
  int32_T i7;
  int32_T b_precb_[2];
  int32_T i8;
  int32_T i;
  emxArray_real_T *c_precb_;
  emxArray_real_T *a;
  int32_T i9;
  int32_T i10;
  int32_T n;
  boolean_T empty_non_axis_sizes;
  emxArray_real_T *XX;
  char_T TRANSA;
  int32_T result;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *XY;
  int32_T b_XX[2];
  emxArray_real_T *absolute;
  emxArray_real_T *r5;
  cell_wrap_0 reshapes[2];
  emxArray_real_T *varargin_1;
  emxArray_real_T *b_varargin_1;
  emxArray_creal_T *test;
  uint32_T test_idx_0;
  emxArray_boolean_T *b_test;
  boolean_T minval;
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
  emxInit_real_T(sp, &b_hm, 1, &ld_emlrtRTEI, true);

  /*  mu와 phi 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  c_hm = hm->size[0];
  i6 = b_hm->size[0];
  b_hm->size[0] = c_hm;
  emxEnsureCapacity_real_T(sp, b_hm, i6, &ld_emlrtRTEI);
  for (i6 = 0; i6 < c_hm; i6++) {
    b_hm->data[i6] = hm->data[i6];
  }

  i6 = hm->size[0];
  hm->size[0] = b_hm->size[0];
  emxEnsureCapacity_real_T(sp, hm, i6, &md_emlrtRTEI);
  loop_ub = b_hm->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    hm->data[i6] = b_hm->data[i6];
  }

  if (mu_phi0->size[0] > hm->size[0]) {
    i7 = 1;
    i6 = 1;
  } else {
    i6 = hm->size[0];
    i7 = mu_phi0->size[0];
    if (!((i7 >= 1) && (i7 <= i6))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &bb_emlrtBCI, sp);
    }

    i6 = hm->size[0];
    i8 = hm->size[0];
    if (!((i8 >= 1) && (i8 <= i6))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &cb_emlrtBCI, sp);
    }

    i6 = i8 + 1;
  }

  b_precb_[0] = 1;
  b_precb_[1] = i6 - i7;
  st.site = &cd_emlrtRSI;
  indexShapeCheck(&st, hm->size[0], b_precb_);
  i8 = Y->size[0];
  Y->size[0] = i6 - i7;
  emxEnsureCapacity_real_T(sp, Y, i8, &nd_emlrtRTEI);
  loop_ub = i6 - i7;
  for (i8 = 0; i8 < loop_ub; i8++) {
    Y->data[i8] = hm->data[(i7 + i8) - 1];
  }

  i8 = X->size[0] * X->size[1];
  X->size[0] = i6 - i7;
  X->size[1] = 1;
  emxEnsureCapacity_real_T1(sp, X, i8, &od_emlrtRTEI);
  loop_ub = i6 - i7;
  for (i8 = 0; i8 < loop_ub; i8++) {
    X->data[i8] = 1.0;
  }

  i = 1;
  emxInit_real_T1(sp, &c_precb_, 2, &wd_emlrtRTEI, true);
  while (i - 1 <= mu_phi0->size[0] - 2) {
    i8 = mu_phi0->size[0] - i;
    i9 = hm->size[0] - i;
    if (i8 > i9) {
      i8 = 1;
      i9 = 1;
    } else {
      i10 = hm->size[0];
      if (!((i8 >= 1) && (i8 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i10, &db_emlrtBCI, sp);
      }

      i10 = hm->size[0];
      if (!((i9 >= 1) && (i9 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i9, 1, i10, &eb_emlrtBCI, sp);
      }

      i9++;
    }

    st.site = &dd_emlrtRSI;
    b_st.site = &qd_emlrtRSI;
    if (!((X->size[0] == 0) || (X->size[1] == 0))) {
      c_hm = X->size[0];
    } else if (!(i9 - i8 == 0)) {
      c_hm = i9 - i8;
    } else {
      c_hm = muIntScalarMax_sint32(X->size[0], 0);
      if (i9 - i8 > c_hm) {
        c_hm = i9 - i8;
      }
    }

    c_st.site = &rd_emlrtRSI;
    if ((X->size[0] == c_hm) || ((X->size[0] == 0) || (X->size[1] == 0))) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i9 - i8 == c_hm) || (i9 - i8 == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (c_hm == 0);
    if (empty_non_axis_sizes || (!((X->size[0] == 0) || (X->size[1] == 0)))) {
      result = X->size[1];
    } else {
      result = 0;
    }

    if (empty_non_axis_sizes || (!(i9 - i8 == 0))) {
      n = 1;
    } else {
      n = 0;
    }

    i10 = b_hm->size[0];
    b_hm->size[0] = i9 - i8;
    emxEnsureCapacity_real_T(&b_st, b_hm, i10, &ud_emlrtRTEI);
    loop_ub = i9 - i8;
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_hm->data[i9] = hm->data[(i8 + i9) - 1];
    }

    i8 = c_precb_->size[0] * c_precb_->size[1];
    c_precb_->size[0] = c_hm;
    c_precb_->size[1] = result + n;
    emxEnsureCapacity_real_T1(&b_st, c_precb_, i8, &vd_emlrtRTEI);
    for (i8 = 0; i8 < result; i8++) {
      for (i9 = 0; i9 < c_hm; i9++) {
        c_precb_->data[i9 + c_precb_->size[0] * i8] = X->data[i9 + c_hm * i8];
      }
    }

    for (i8 = 0; i8 < n; i8++) {
      for (i9 = 0; i9 < c_hm; i9++) {
        c_precb_->data[i9 + c_precb_->size[0] * (i8 + result)] = b_hm->data[i9 +
          c_hm * i8];
      }
    }

    i8 = X->size[0] * X->size[1];
    X->size[0] = c_precb_->size[0];
    X->size[1] = c_precb_->size[1];
    emxEnsureCapacity_real_T1(&b_st, X, i8, &xd_emlrtRTEI);
    loop_ub = c_precb_->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      n = c_precb_->size[0];
      for (i9 = 0; i9 < n; i9++) {
        X->data[i9 + X->size[0] * i8] = c_precb_->data[i9 + c_precb_->size[0] *
          i8];
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T1(sp, &a, 2, &pd_emlrtRTEI, true);

  /*  number of columns */
  st.site = &ed_emlrtRSI;
  i8 = a->size[0] * a->size[1];
  a->size[0] = X->size[1];
  a->size[1] = X->size[0];
  emxEnsureCapacity_real_T1(&st, a, i8, &pd_emlrtRTEI);
  loop_ub = X->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    n = X->size[1];
    for (i9 = 0; i9 < n; i9++) {
      a->data[i9 + a->size[0] * i8] = X->data[i8 + X->size[0] * i9];
    }
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == X->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((X->size[0] == 1) &&
         (X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T1(&st, &XX, 2, &qd_emlrtRTEI, true);
  if ((a->size[1] == 1) || (X->size[0] == 1)) {
    i8 = XX->size[0] * XX->size[1];
    XX->size[0] = a->size[0];
    XX->size[1] = X->size[1];
    emxEnsureCapacity_real_T1(&st, XX, i8, &qd_emlrtRTEI);
    loop_ub = a->size[0];
    for (i8 = 0; i8 < loop_ub; i8++) {
      n = X->size[1];
      for (i9 = 0; i9 < n; i9++) {
        XX->data[i8 + XX->size[0] * i9] = 0.0;
        c_hm = a->size[1];
        for (i10 = 0; i10 < c_hm; i10++) {
          XX->data[i8 + XX->size[0] * i9] += a->data[i8 + a->size[0] * i10] *
            X->data[i10 + X->size[0] * i9];
        }
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (X->size[0] == 0) || (X->size
         [1] == 0)) {
      i8 = XX->size[0] * XX->size[1];
      XX->size[0] = a->size[0];
      XX->size[1] = X->size[1];
      emxEnsureCapacity_real_T1(&b_st, XX, i8, &qd_emlrtRTEI);
      loop_ub = a->size[0] * X->size[1];
      for (i8 = 0; i8 < loop_ub; i8++) {
        XX->data[i8] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a->size[0];
      n_t = (ptrdiff_t)X->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)a->size[0];
      i8 = XX->size[0] * XX->size[1];
      XX->size[0] = a->size[0];
      XX->size[1] = X->size[1];
      emxEnsureCapacity_real_T1(&c_st, XX, i8, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &X->data[0], &ldb_t, &beta1, &XX->data[0], &ldc_t);
    }
  }

  st.site = &fd_emlrtRSI;
  i8 = a->size[0] * a->size[1];
  a->size[0] = X->size[1];
  a->size[1] = X->size[0];
  emxEnsureCapacity_real_T1(&st, a, i8, &rd_emlrtRTEI);
  loop_ub = X->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    n = X->size[1];
    for (i9 = 0; i9 < n; i9++) {
      a->data[i9 + a->size[0] * i8] = X->data[i8 + X->size[0] * i9];
    }
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == i6 - i7)) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (i6 - i7 == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &XY, 1, &sd_emlrtRTEI, true);
  if ((a->size[1] == 1) || (i6 - i7 == 1)) {
    i6 = XY->size[0];
    XY->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, XY, i6, &sd_emlrtRTEI);
    loop_ub = a->size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      XY->data[i6] = 0.0;
      n = a->size[1];
      for (i7 = 0; i7 < n; i7++) {
        XY->data[i6] += a->data[i6 + a->size[0] * i7] * Y->data[i7];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (i6 - i7 == 0)) {
      i6 = XY->size[0];
      XY->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, XY, i6, &sd_emlrtRTEI);
      loop_ub = a->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        XY->data[i6] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
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
      i6 = XY->size[0];
      XY->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, XY, i6, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &Y->data[0], &ldb_t, &beta1, &XY->data[0], &ldc_t);
    }
  }

  loop_ub = XX->size[0] * XX->size[1] - 1;
  i6 = XX->size[0] * XX->size[1];
  emxEnsureCapacity_real_T1(sp, XX, i6, &td_emlrtRTEI);
  for (i6 = 0; i6 <= loop_ub; i6++) {
    XX->data[i6] *= sig2_inv;
  }

  for (i6 = 0; i6 < 2; i6++) {
    b_precb_[i6] = precb_->size[i6];
    b_XX[i6] = XX->size[i6];
  }

  if ((b_precb_[0] != b_XX[0]) || (b_precb_[1] != b_XX[1])) {
    emlrtSizeEqCheckNDR2012b(&b_precb_[0], &b_XX[0], &p_emlrtECI, sp);
  }

  i6 = c_precb_->size[0] * c_precb_->size[1];
  c_precb_->size[0] = precb_->size[0];
  c_precb_->size[1] = precb_->size[1];
  emxEnsureCapacity_real_T1(sp, c_precb_, i6, &wd_emlrtRTEI);
  loop_ub = precb_->size[0] * precb_->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    c_precb_->data[i6] = precb_->data[i6] + XX->data[i6];
  }

  st.site = &gd_emlrtRSI;
  invpd(&st, c_precb_, XX);

  /*  full conditional variance */
  st.site = &hd_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  emxFree_real_T(&c_precb_);
  if (!(precb_->size[1] == b_->size[0])) {
    if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) || (b_->size[0] == 1))
    {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &absolute, 1, &oe_emlrtRTEI, true);
  if ((precb_->size[1] == 1) || (b_->size[0] == 1)) {
    i6 = absolute->size[0];
    absolute->size[0] = precb_->size[0];
    emxEnsureCapacity_real_T(&st, absolute, i6, &yd_emlrtRTEI);
    loop_ub = precb_->size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      absolute->data[i6] = 0.0;
      n = precb_->size[1];
      for (i7 = 0; i7 < n; i7++) {
        absolute->data[i6] += precb_->data[i6 + precb_->size[0] * i7] * b_->
          data[i7];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((precb_->size[0] == 0) || (precb_->size[1] == 0) || (b_->size[0] == 0))
    {
      i6 = absolute->size[0];
      absolute->size[0] = precb_->size[0];
      emxEnsureCapacity_real_T(&b_st, absolute, i6, &yd_emlrtRTEI);
      loop_ub = precb_->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        absolute->data[i6] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
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
      i6 = absolute->size[0];
      absolute->size[0] = precb_->size[0];
      emxEnsureCapacity_real_T(&c_st, absolute, i6, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &precb_->data[0],
            &lda_t, &b_->data[0], &ldb_t, &beta1, &absolute->data[0], &ldc_t);
    }
  }

  i6 = XY->size[0];
  emxEnsureCapacity_real_T(sp, XY, i6, &ae_emlrtRTEI);
  loop_ub = XY->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    XY->data[i6] *= sig2_inv;
  }

  i6 = absolute->size[0];
  i7 = XY->size[0];
  if (i6 != i7) {
    emlrtSizeEqCheck1DR2012b(i6, i7, &q_emlrtECI, sp);
  }

  st.site = &hd_emlrtRSI;
  i6 = absolute->size[0];
  emxEnsureCapacity_real_T(&st, absolute, i6, &yd_emlrtRTEI);
  loop_ub = absolute->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    absolute->data[i6] += XY->data[i6];
  }

  b_st.site = &ec_emlrtRSI;
  if (!(XX->size[1] == absolute->size[0])) {
    if (((XX->size[0] == 1) && (XX->size[1] == 1)) || (absolute->size[0] == 1))
    {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((XX->size[1] == 1) || (absolute->size[0] == 1)) {
    i6 = mu_phi->size[0];
    mu_phi->size[0] = XX->size[0];
    emxEnsureCapacity_real_T(&st, mu_phi, i6, &be_emlrtRTEI);
    loop_ub = XX->size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      mu_phi->data[i6] = 0.0;
      n = XX->size[1];
      for (i7 = 0; i7 < n; i7++) {
        mu_phi->data[i6] += XX->data[i6 + XX->size[0] * i7] * absolute->data[i7];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((XX->size[0] == 0) || (XX->size[1] == 0) || (absolute->size[0] == 0)) {
      i6 = mu_phi->size[0];
      mu_phi->size[0] = XX->size[0];
      emxEnsureCapacity_real_T(&b_st, mu_phi, i6, &be_emlrtRTEI);
      loop_ub = XX->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        mu_phi->data[i6] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)XX->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)XX->size[1];
      lda_t = (ptrdiff_t)XX->size[0];
      ldb_t = (ptrdiff_t)XX->size[1];
      ldc_t = (ptrdiff_t)XX->size[0];
      i6 = mu_phi->size[0];
      mu_phi->size[0] = XX->size[0];
      emxEnsureCapacity_real_T(&c_st, mu_phi, i6, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &XX->data[0], &lda_t,
            &absolute->data[0], &ldb_t, &beta1, &mu_phi->data[0], &ldc_t);
    }
  }

  /*  full conditional mean */
  st.site = &id_emlrtRSI;
  b_st.site = &rc_emlrtRSI;
  n = XX->size[1];
  empty_non_axis_sizes = (XX->size[0] == XX->size[1]);
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xl_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if (XX->size[1] != 0) {
    i6 = XX->size[1];
    i7 = XX->size[1];
    c_st.site = &sc_emlrtRSI;
    c_hm = xpotrf(&c_st, i6, XX, i7);
    if (c_hm == 0) {
    } else {
      n = c_hm - 1;
      emlrtErrorWithMessageIdR2018a(&b_st, &wl_emlrtRTEI, "Coder:MATLAB:posdef",
        "Coder:MATLAB:posdef", 0);
    }

    c_st.site = &tc_emlrtRSI;
    if ((!(1 > n)) && (n > 2147483646)) {
      d_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (c_hm = 2; c_hm - 1 <= n; c_hm++) {
      c_st.site = &uc_emlrtRSI;
      if ((!(c_hm > n)) && (n > 2147483646)) {
        d_st.site = &sb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = c_hm; i <= n; i++) {
        XX->data[(i + XX->size[0] * (c_hm - 2)) - 1] = 0.0;
      }
    }
  }

  i6 = a->size[0] * a->size[1];
  a->size[0] = XX->size[1];
  a->size[1] = XX->size[0];
  emxEnsureCapacity_real_T1(sp, a, i6, &ce_emlrtRTEI);
  loop_ub = XX->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    n = XX->size[1];
    for (i7 = 0; i7 < n; i7++) {
      a->data[i7 + a->size[0] * i6] = XX->data[i6 + XX->size[0] * i7];
    }
  }

  st.site = &id_emlrtRSI;
  randn(&st, X->size[1], absolute);
  st.site = &id_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == absolute->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (absolute->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &r5, 1, &pe_emlrtRTEI, true);
  if ((a->size[1] == 1) || (absolute->size[0] == 1)) {
    i6 = r5->size[0];
    r5->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, r5, i6, &ce_emlrtRTEI);
    loop_ub = a->size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      r5->data[i6] = 0.0;
      n = a->size[1];
      for (i7 = 0; i7 < n; i7++) {
        r5->data[i6] += a->data[i6 + a->size[0] * i7] * absolute->data[i7];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (absolute->size[0] == 0)) {
      i6 = r5->size[0];
      r5->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, r5, i6, &ce_emlrtRTEI);
      loop_ub = a->size[0];
      for (i6 = 0; i6 < loop_ub; i6++) {
        r5->data[i6] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
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
      i6 = r5->size[0];
      r5->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, r5, i6, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &absolute->data[0], &ldb_t, &beta1, &r5->data[0], &ldc_t);
    }
  }

  i6 = mu_phi->size[0];
  i7 = r5->size[0];
  if (i6 != i7) {
    emlrtSizeEqCheck1DR2012b(i6, i7, &r_emlrtECI, sp);
  }

  i6 = mu_phi->size[0];
  emxEnsureCapacity_real_T(sp, mu_phi, i6, &de_emlrtRTEI);
  loop_ub = mu_phi->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    mu_phi->data[i6] += r5->data[i6];
  }

  /*  beta sampling 하기 */
  if (2 > mu_phi->size[0]) {
    i6 = 0;
    i8 = 0;
  } else {
    i6 = 1;
    i7 = mu_phi->size[0];
    i8 = mu_phi->size[0];
    if (!((i8 >= 1) && (i8 <= i7))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &fb_emlrtBCI, sp);
    }
  }

  st.site = &jd_emlrtRSI;
  eye(&st, ((real_T)mu_phi0->size[0] - 1.0) - 1.0, XX);
  alpha1 = ((real_T)mu_phi0->size[0] - 1.0) - 1.0;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &s_emlrtDCI, sp);
  }

  st.site = &jd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  if (!((XX->size[0] == 0) || (XX->size[1] == 0))) {
    c_hm = XX->size[0];
  } else if (!(mu_phi0->size[0] - 2 == 0)) {
    c_hm = mu_phi0->size[0] - 2;
  } else {
    c_hm = muIntScalarMax_sint32(XX->size[0], 0);
    if (mu_phi0->size[0] - 2 > c_hm) {
      c_hm = mu_phi0->size[0] - 2;
    }
  }

  c_st.site = &rd_emlrtRSI;
  if ((XX->size[0] == c_hm) || ((XX->size[0] == 0) || (XX->size[1] == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((mu_phi0->size[0] - 2 == c_hm) || (mu_phi0->size[0] - 2 == 0)) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (c_hm == 0);
  if (empty_non_axis_sizes || (!((XX->size[0] == 0) || (XX->size[1] == 0)))) {
    result = XX->size[1];
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes || (!(mu_phi0->size[0] - 2 == 0))) {
    n = 1;
  } else {
    n = 0;
  }

  emxInitMatrix_cell_wrap_0(&b_st, reshapes, &qe_emlrtRTEI, true);
  i7 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
  reshapes[1].f1->size[0] = c_hm;
  reshapes[1].f1->size[1] = n;
  emxEnsureCapacity_real_T1(&b_st, reshapes[1].f1, i7, &ee_emlrtRTEI);
  loop_ub = c_hm * n;
  for (i7 = 0; i7 < loop_ub; i7++) {
    reshapes[1].f1->data[i7] = 0.0;
  }

  i7 = a->size[0] * a->size[1];
  a->size[0] = c_hm;
  a->size[1] = result + reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T1(&b_st, a, i7, &fe_emlrtRTEI);
  for (i7 = 0; i7 < result; i7++) {
    for (i9 = 0; i9 < c_hm; i9++) {
      a->data[i9 + a->size[0] * i7] = XX->data[i9 + c_hm * i7];
    }
  }

  emxFree_real_T(&XX);
  loop_ub = reshapes[1].f1->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    n = reshapes[1].f1->size[0];
    for (i9 = 0; i9 < n; i9++) {
      a->data[i9 + a->size[0] * (i7 + result)] = reshapes[1].f1->data[i9 +
        reshapes[1].f1->size[0] * i7];
    }
  }

  emxFreeMatrix_cell_wrap_0(reshapes);
  emxInit_real_T1(&b_st, &varargin_1, 2, &ge_emlrtRTEI, true);
  st.site = &jd_emlrtRSI;
  i7 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = i8 - i6;
  emxEnsureCapacity_real_T1(&st, varargin_1, i7, &ge_emlrtRTEI);
  loop_ub = i8 - i6;
  for (i7 = 0; i7 < loop_ub; i7++) {
    varargin_1->data[varargin_1->size[0] * i7] = mu_phi->data[i6 + i7];
  }

  b_st.site = &qd_emlrtRSI;
  if (!(varargin_1->size[1] == 0)) {
    c_hm = varargin_1->size[1];
  } else if (!((a->size[0] == 0) || (a->size[1] == 0))) {
    c_hm = a->size[1];
  } else {
    c_hm = 0;
    if (a->size[1] > 0) {
      c_hm = a->size[1];
    }
  }

  c_st.site = &rd_emlrtRSI;
  if ((varargin_1->size[1] == c_hm) || (varargin_1->size[1] == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((a->size[1] == c_hm) || ((a->size[0] == 0) || (a->size[1] == 0))) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (c_hm == 0);
  if (empty_non_axis_sizes || (!(varargin_1->size[1] == 0))) {
    result = 1;
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes || (!((a->size[0] == 0) || (a->size[1] == 0)))) {
    n = a->size[0];
  } else {
    n = 0;
  }

  emxInit_real_T1(&b_st, &b_varargin_1, 2, &he_emlrtRTEI, true);
  i6 = b_varargin_1->size[0] * b_varargin_1->size[1];
  b_varargin_1->size[0] = result + n;
  b_varargin_1->size[1] = c_hm;
  emxEnsureCapacity_real_T1(sp, b_varargin_1, i6, &he_emlrtRTEI);
  for (i6 = 0; i6 < c_hm; i6++) {
    for (i7 = 0; i7 < result; i7++) {
      b_varargin_1->data[i7 + b_varargin_1->size[0] * i6] = varargin_1->data[i7
        + result * i6];
    }
  }

  emxFree_real_T(&varargin_1);
  for (i6 = 0; i6 < c_hm; i6++) {
    for (i7 = 0; i7 < n; i7++) {
      b_varargin_1->data[(i7 + result) + b_varargin_1->size[0] * i6] = a->
        data[i7 + n * i6];
    }
  }

  emxFree_real_T(&a);
  emxInit_creal_T(sp, &test, 1, &ne_emlrtRTEI, true);
  st.site = &kd_emlrtRSI;
  eig(&st, b_varargin_1, test);
  i6 = b_hm->size[0];
  b_hm->size[0] = test->size[0];
  emxEnsureCapacity_real_T(sp, b_hm, i6, &ie_emlrtRTEI);
  loop_ub = test->size[0];
  emxFree_real_T(&b_varargin_1);
  for (i6 = 0; i6 < loop_ub; i6++) {
    b_hm->data[i6] = test->data[i6].im;
  }

  st.site = &ld_emlrtRSI;
  power(&st, b_hm, XY);
  st.site = &md_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  test_idx_0 = (uint32_T)test->size[0];
  i6 = r5->size[0];
  r5->size[0] = (int32_T)test_idx_0;
  emxEnsureCapacity_real_T(&b_st, r5, i6, &je_emlrtRTEI);
  c_st.site = &ke_emlrtRSI;
  emxFree_real_T(&b_hm);
  empty_non_axis_sizes = ((!(1 > test->size[0])) && (test->size[0] > 2147483646));
  if (empty_non_axis_sizes) {
    d_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (c_hm = 0; c_hm < test->size[0]; c_hm++) {
    r5->data[c_hm] = muDoubleScalarHypot(test->data[c_hm].re, test->data[c_hm].
      im);
  }

  emxFree_creal_T(&test);
  st.site = &md_emlrtRSI;
  power(&st, r5, absolute);
  i6 = absolute->size[0];
  i7 = XY->size[0];
  if (i6 != i7) {
    emlrtSizeEqCheck1DR2012b(i6, i7, &s_emlrtECI, sp);
  }

  st.site = &nd_emlrtRSI;
  i6 = absolute->size[0];
  emxEnsureCapacity_real_T(&st, absolute, i6, &ke_emlrtRTEI);
  loop_ub = absolute->size[0];
  emxFree_real_T(&r5);
  for (i6 = 0; i6 < loop_ub; i6++) {
    absolute->data[i6] += XY->data[i6];
  }

  emxFree_real_T(&XY);
  empty_non_axis_sizes = false;
  for (c_hm = 0; c_hm < absolute->size[0]; c_hm++) {
    if (empty_non_axis_sizes || (absolute->data[c_hm] < 0.0)) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (empty_non_axis_sizes) {
    b_st.site = &gf_emlrtRSI;
    f_error(&b_st);
  }

  b_st.site = &th_emlrtRSI;
  n = absolute->size[0];
  c_st.site = &jc_emlrtRSI;
  empty_non_axis_sizes = ((!(1 > absolute->size[0])) && (absolute->size[0] >
    2147483646));
  if (empty_non_axis_sizes) {
    d_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (c_hm = 0; c_hm < n; c_hm++) {
    absolute->data[c_hm] = muDoubleScalarSqrt(absolute->data[c_hm]);
  }

  emxInit_boolean_T(&b_st, &b_test, 1, &ne_emlrtRTEI, true);
  i6 = b_test->size[0];
  b_test->size[0] = absolute->size[0];
  emxEnsureCapacity_boolean_T(sp, b_test, i6, &le_emlrtRTEI);
  loop_ub = absolute->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    b_test->data[i6] = (absolute->data[i6] < 1.0);
  }

  emxFree_real_T(&absolute);
  st.site = &od_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  if ((b_test->size[0] == 1) || (b_test->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_test->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &bf_emlrtRSI;
  f_st.site = &vh_emlrtRSI;
  minval = b_test->data[0];
  g_st.site = &wh_emlrtRSI;
  empty_non_axis_sizes = ((!(2 > b_test->size[0])) && (b_test->size[0] >
    2147483646));
  if (empty_non_axis_sizes) {
    h_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }

  for (c_hm = 1; c_hm < b_test->size[0]; c_hm++) {
    if ((int32_T)minval > (int32_T)b_test->data[c_hm]) {
      minval = b_test->data[c_hm];
    }
  }

  emxFree_boolean_T(&b_test);
  if (!minval) {
    /*  phi의 절대값이 1보다 작도록 제약(Truncated) */
    i6 = mu_phi->size[0];
    mu_phi->size[0] = mu_phi0->size[0];
    emxEnsureCapacity_real_T(sp, mu_phi, i6, &me_emlrtRTEI);
    loop_ub = mu_phi0->size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      mu_phi->data[i6] = mu_phi0->data[i6];
    }
  }

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
  const mxArray *m17;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m17, 4, pArrays, "feval", true, location);
}

static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }

      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m11;
  real_T *pData;
  int32_T i42;
  int32_T i;
  y = NULL;
  m11 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m11);
  i42 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i42] = u->data[u->size[0] * i];
    i42++;
  }

  emlrtAssign(&y, m11);
  return y;
}

static void format(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "format", true, location);
}

void Stochastic_Volatility(const emlrtStack *sp, const emxArray_real_T *ym,
  const emxArray_real_T *X, real_T n0, real_T n1, const emxArray_real_T *beta0,
  const emxArray_real_T *B0, const emxArray_real_T *gamma0, const
  emxArray_real_T *Gamma0, real_T v0, real_T d0, char_T forecast, const
  emxArray_real_T *x_f, char_T ML, struct0_T *Output)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 6 };

  static const char_T u[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  real_T n;
  int32_T isForecast;
  emxArray_real_T *mu_phi;
  int32_T i0;
  int32_T loop_ub;
  emxArray_real_T *precb_;
  emxArray_real_T *precB0;
  emxArray_real_T *b;
  real_T sig2;
  real_T sig2_inv;
  emxArray_real_T *hm;
  char_T TRANSA;
  char_T TRANSB;
  int32_T b_loop_ub;
  real_T alpha1;
  int32_T i1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *mu_phi_hat;
  emxArray_real_T *vol;
  emxArray_real_T *betam;
  emxArray_real_T *Sig2m;
  emxArray_real_T *mu_phim;
  emxArray_real_T *Volm;
  emxArray_real_T *logLik;
  emxArray_real_T *Yfm;
  emxArray_real_T *Hm;
  int32_T iter;
  emxArray_int32_T *r0;
  emxArray_real_T *A;
  emxArray_real_T *b_b;
  emxArray_real_T *b_logLik;
  emxArray_real_T *b_mu_phim;
  emxArray_real_T *b_Sig2m;
  static const int32_T iv1[2] = { 1, 38 };

  static const char_T b_u[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  char_T c_u[37];
  static const int32_T iv2[2] = { 1, 37 };

  int32_T result;
  static const int32_T iv3[2] = { 1, 7 };

  static const char_T d_u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 23 };

  static const char_T e_u[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  const mxArray *d_y;
  int32_T iv5[2];
  int32_T b_precB0[2];
  static const int32_T iv6[2] = { 1, 37 };

  int32_T b_result;
  static const int32_T iv7[2] = { 1, 8 };

  static const char_T f_u[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  static const int32_T iv8[2] = { 1, 14 };

  static const char_T g_u[14] = { '[', 'm', 'u', ' ', 'a', 'n', 'd', ' ', 'p',
    'h', 'i', ':', ' ', ']' };

  static const int32_T iv9[2] = { 1, 8 };

  static const char_T h_u[8] = { '[', 's', 'i', 'g', '2', ':', ' ', ']' };

  boolean_T empty_non_axis_sizes;
  static const int32_T iv10[2] = { 1, 38 };

  char_T i_u[39];
  static const int32_T iv11[2] = { 1, 39 };

  static const int32_T iv12[2] = { 1, 7 };

  static const int32_T iv13[2] = { 1, 36 };

  static const char_T j_u[36] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', ' ', 'P', 'e',
    'r', 'c', 'e', 'n', 't', ' ', 'D', 'o', 'n', 'e', '\\', 'n' };

  emxArray_real_T *r1;
  static const int32_T iv14[2] = { 1, 39 };

  real_T b_d0;
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
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(sp, 6, m0, &u[0]);
  emlrtAssign(&y, m0);
  st.site = &bl_emlrtRSI;
  format(&st, y, &emlrtMCI);
  n = n0 + n1;
  if (forecast == 'Y') {
    isForecast = 1;

    /*   예측하기 */
  } else {
    isForecast = 0;

    /*  예측 안하기 */
  }

  emxInit_real_T(sp, &mu_phi, 1, &emlrtRTEI, true);

  /*  초기값 설정하기 */
  i0 = mu_phi->size[0];
  mu_phi->size[0] = gamma0->size[0];
  emxEnsureCapacity_real_T(sp, mu_phi, i0, &emlrtRTEI);
  loop_ub = gamma0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    mu_phi->data[i0] = gamma0->data[i0];
  }

  emxInit_real_T1(sp, &precb_, 2, &jc_emlrtRTEI, true);
  emxInit_real_T1(sp, &precB0, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 1, &b_emlrtRTEI, true);
  sig2 = d0 / v0;
  sig2_inv = 1.0 / sig2;
  st.site = &emlrtRSI;
  inv(&st, Gamma0, precb_);
  st.site = &b_emlrtRSI;
  inv(&st, B0, precB0);
  i0 = b->size[0];
  b->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, b, i0, &b_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b->data[i0] = beta0->data[i0];
  }

  st.site = &c_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(X->size[1] == beta0->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (beta0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &hm, 1, &lc_emlrtRTEI, true);
  if ((X->size[1] == 1) || (beta0->size[0] == 1)) {
    i0 = hm->size[0];
    hm->size[0] = X->size[0];
    emxEnsureCapacity_real_T(&st, hm, i0, &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      hm->data[i0] = 0.0;
      b_loop_ub = X->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        hm->data[i0] += X->data[i0 + X->size[0] * i1] * beta0->data[i1];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((X->size[0] == 0) || (X->size[1] == 0) || (beta0->size[0] == 0)) {
      i0 = hm->size[0];
      hm->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&b_st, hm, i0, &c_emlrtRTEI);
      loop_ub = X->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        hm->data[i0] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)X->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)X->size[1];
      lda_t = (ptrdiff_t)X->size[0];
      ldb_t = (ptrdiff_t)X->size[1];
      ldc_t = (ptrdiff_t)X->size[0];
      i0 = hm->size[0];
      hm->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&c_st, hm, i0, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X->data[0], &lda_t,
            &beta0->data[0], &ldb_t, &beta1, &hm->data[0], &ldc_t);
    }
  }

  i0 = ym->size[0];
  i1 = hm->size[0];
  if (i0 != i1) {
    emlrtSizeEqCheck1DR2012b(i0, i1, &emlrtECI, sp);
  }

  st.site = &c_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (!(X->size[1] == beta0->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (beta0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &mu_phi_hat, 1, &mb_emlrtRTEI, true);
  if ((X->size[1] == 1) || (beta0->size[0] == 1)) {
    i0 = mu_phi_hat->size[0];
    mu_phi_hat->size[0] = X->size[0];
    emxEnsureCapacity_real_T(&st, mu_phi_hat, i0, &d_emlrtRTEI);
    loop_ub = X->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      mu_phi_hat->data[i0] = 0.0;
      b_loop_ub = X->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        mu_phi_hat->data[i0] += X->data[i0 + X->size[0] * i1] * beta0->data[i1];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((X->size[0] == 0) || (X->size[1] == 0) || (beta0->size[0] == 0)) {
      i0 = mu_phi_hat->size[0];
      mu_phi_hat->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&b_st, mu_phi_hat, i0, &d_emlrtRTEI);
      loop_ub = X->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        mu_phi_hat->data[i0] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)X->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)X->size[1];
      lda_t = (ptrdiff_t)X->size[0];
      ldb_t = (ptrdiff_t)X->size[1];
      ldc_t = (ptrdiff_t)X->size[0];
      i0 = mu_phi_hat->size[0];
      mu_phi_hat->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&c_st, mu_phi_hat, i0, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X->data[0], &lda_t,
            &beta0->data[0], &ldb_t, &beta1, &mu_phi_hat->data[0], &ldc_t);
    }
  }

  i0 = ym->size[0];
  i1 = mu_phi_hat->size[0];
  if (i0 != i1) {
    emlrtSizeEqCheck1DR2012b(i0, i1, &b_emlrtECI, sp);
  }

  i0 = ym->size[0];
  i1 = ym->size[0];
  if (i0 != i1) {
    emlrtSizeEqCheck1DR2012b(i0, i1, &c_emlrtECI, sp);
  }

  i0 = hm->size[0];
  hm->size[0] = ym->size[0];
  emxEnsureCapacity_real_T(sp, hm, i0, &f_emlrtRTEI);
  loop_ub = ym->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    hm->data[i0] = (ym->data[i0] - hm->data[i0]) * (ym->data[i0] -
      mu_phi_hat->data[i0]);
  }

  emxInit_real_T(sp, &vol, 1, &g_emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  b_log(&st, hm);
  i0 = vol->size[0];
  vol->size[0] = hm->size[0];
  emxEnsureCapacity_real_T(sp, vol, i0, &g_emlrtRTEI);
  loop_ub = hm->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    vol->data[i0] = hm->data[i0] / 2.0;
  }

  emxInit_real_T1(sp, &betam, 2, &h_emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  b_exp(&st, vol);

  /*  normal mixture를 이용한 log(Chi-square(1))의 approximation */
  /*  각각의 정규분포가 선택될 확률 */
  /*  선택된 정규분포의 평균 */
  /*  선택된 정규분포의 분산 */
  /*  MCMC output을 저장할 방 */
  i0 = betam->size[0] * betam->size[1];
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &i_emlrtDCI, sp);
  }

  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, sp);
  }

  betam->size[0] = (int32_T)n;
  betam->size[1] = X->size[1];
  emxEnsureCapacity_real_T1(sp, betam, i0, &h_emlrtRTEI);
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &m_emlrtDCI, sp);
  }

  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n * X->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    betam->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Sig2m, 1, &i_emlrtRTEI, true);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &emlrtDCI, sp);
  }

  i0 = Sig2m->size[0];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, sp);
  }

  Sig2m->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Sig2m, i0, &i_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Sig2m->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &mu_phim, 2, &j_emlrtRTEI, true);
  i0 = mu_phim->size[0] * mu_phim->size[1];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, sp);
  }

  mu_phim->size[0] = (int32_T)n;
  mu_phim->size[1] = gamma0->size[0];
  emxEnsureCapacity_real_T1(sp, mu_phim, i0, &j_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &o_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n * gamma0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    mu_phim->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &Volm, 2, &k_emlrtRTEI, true);
  i0 = Volm->size[0] * Volm->size[1];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, sp);
  }

  Volm->size[0] = (int32_T)n;
  Volm->size[1] = X->size[0];
  emxEnsureCapacity_real_T1(sp, Volm, i0, &k_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &p_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n * X->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Volm->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &logLik, 1, &l_emlrtRTEI, true);

  /*  오차항의 exp항 */
  i0 = logLik->size[0];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &q_emlrtDCI, sp);
  }

  logLik->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, logLik, i0, &l_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &q_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    logLik->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Yfm, 1, &m_emlrtRTEI, true);
  i0 = Yfm->size[0];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &r_emlrtDCI, sp);
  }

  Yfm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Yfm, i0, &m_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &r_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Yfm->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &Hm, 2, &mc_emlrtRTEI, true);

  /*  PredLikm = zeros(n,1); */
  /*  displayed message frequency */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &ll_emlrtRTEI, sp);
  i0 = Hm->size[0] * Hm->size[1];
  Hm->size[0] = (int32_T)n;
  Hm->size[1] = X->size[0];
  emxEnsureCapacity_real_T1(sp, Hm, i0, &n_emlrtRTEI);
  iter = 0;
  emxInit_int32_T(sp, &r0, 1, &nc_emlrtRTEI, true);
  emxInit_real_T1(sp, &A, 2, &oc_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_b, 2, &y_emlrtRTEI, true);
  emxInit_real_T(sp, &b_logLik, 1, &q_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_mu_phim, 2, &t_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Sig2m, 1, &ab_emlrtRTEI, true);
  while (iter <= (int32_T)n - 1) {
    /*  report intermediate results */
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*  몫 x와 나머지 resid를 산출 */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((1.0 + (real_T)iter) - muDoubleScalarFloor((1.0 + (real_T)iter) / 100.0)
        * 100.0 == 0.0) {
      st.site = &wl_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i0 = 0; i0 < 37; i0++) {
        c_u[i0] = '=';
      }

      y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 37, m0, &c_u[0]);
      emlrtAssign(&y, m0);
      st.site = &nl_emlrtRSI;
      disp(&st, y, &f_emlrtMCI);
      st.site = &e_emlrtRSI;
      b_st.site = &lc_emlrtRSI;
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
      c_st.site = &cm_emlrtRSI;
      c_emlrt_marshallIn(&c_st, d_feval(&c_st, y, b_y, c_y, d_y, &x_emlrtMCI),
                         "feval");
      for (i0 = 0; i0 < 37; i0++) {
        c_u[i0] = '=';
      }

      y = NULL;
      m0 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(sp, 37, m0, &c_u[0]);
      emlrtAssign(&y, m0);
      st.site = &ml_emlrtRSI;
      disp(&st, y, &g_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateString1(' ');
      emlrtAssign(&y, m0);
      st.site = &ll_emlrtRSI;
      disp(&st, y, &h_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(sp, 8, m0, &f_u[0]);
      emlrtAssign(&y, m0);
      st.site = &kl_emlrtRSI;
      disp(&st, y, &i_emlrtMCI);
      i0 = b_b->size[0] * b_b->size[1];
      b_b->size[0] = 1;
      b_b->size[1] = b->size[0];
      emxEnsureCapacity_real_T1(sp, b_b, i0, &y_emlrtRTEI);
      loop_ub = b->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_b->data[b_b->size[0] * i0] = b->data[i0];
      }

      st.site = &jl_emlrtRSI;
      disp(&st, emlrt_marshallOut(b_b), &j_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(sp, 14, m0, &g_u[0]);
      emlrtAssign(&y, m0);
      st.site = &il_emlrtRSI;
      disp(&st, y, &k_emlrtMCI);
      i0 = b_b->size[0] * b_b->size[1];
      b_b->size[0] = 1;
      b_b->size[1] = mu_phi->size[0];
      emxEnsureCapacity_real_T1(sp, b_b, i0, &cb_emlrtRTEI);
      loop_ub = mu_phi->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_b->data[b_b->size[0] * i0] = mu_phi->data[i0];
      }

      st.site = &hl_emlrtRSI;
      disp(&st, emlrt_marshallOut(b_b), &l_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(sp, 8, m0, &h_u[0]);
      emlrtAssign(&y, m0);
      st.site = &gl_emlrtRSI;
      disp(&st, y, &m_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateDoubleScalar(sig2);
      emlrtAssign(&y, m0);
      st.site = &fl_emlrtRSI;
      disp(&st, y, &n_emlrtMCI);
    }

    /*   Step 0 : beta sampling */
    i0 = b_mu_phim->size[0] * b_mu_phim->size[1];
    b_mu_phim->size[0] = X->size[0];
    b_mu_phim->size[1] = X->size[1];
    emxEnsureCapacity_real_T1(sp, b_mu_phim, i0, &o_emlrtRTEI);
    loop_ub = X->size[0] * X->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_mu_phim->data[i0] = X->data[i0];
    }

    i0 = b_logLik->size[0];
    b_logLik->size[0] = ym->size[0];
    emxEnsureCapacity_real_T(sp, b_logLik, i0, &p_emlrtRTEI);
    loop_ub = ym->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_logLik->data[i0] = ym->data[i0];
    }

    st.site = &f_emlrtRSI;
    Gen_beta(&st, b_mu_phim, b_logLik, beta0, precB0, vol, b);
    i0 = betam->size[0];
    i1 = iter + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &h_emlrtBCI, sp);
    }

    loop_ub = betam->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i0, &s_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    iv5[0] = 1;
    iv5[1] = r0->size[0];
    b_precB0[0] = 1;
    b_precB0[1] = b->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv5[0], 2, &b_precB0[0], 2, &h_emlrtECI, sp);
    loop_ub = b->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      betam->data[iter + betam->size[0] * r0->data[i0]] = b->data[i0];
    }

    /*   Step 1 : mu와 phi sammpling */
    i0 = b_logLik->size[0];
    b_logLik->size[0] = hm->size[0];
    emxEnsureCapacity_real_T(sp, b_logLik, i0, &v_emlrtRTEI);
    loop_ub = hm->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_logLik->data[i0] = hm->data[i0];
    }

    st.site = &g_emlrtRSI;
    Gen_mu_phi(&st, b_logLik, gamma0, precb_, sig2_inv, mu_phi, b_Sig2m,
               b_mu_phim, mu_phi_hat);
    i0 = mu_phi->size[0];
    mu_phi->size[0] = b_Sig2m->size[0];
    emxEnsureCapacity_real_T(sp, mu_phi, i0, &w_emlrtRTEI);
    loop_ub = b_Sig2m->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      mu_phi->data[i0] = b_Sig2m->data[i0];
    }

    i0 = mu_phim->size[0];
    i1 = iter + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    }

    loop_ub = mu_phim->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i0, &x_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    iv5[0] = 1;
    iv5[1] = r0->size[0];
    b_precB0[0] = 1;
    b_precB0[1] = b_Sig2m->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv5[0], 2, &b_precB0[0], 2, &g_emlrtECI, sp);
    loop_ub = b_Sig2m->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      mu_phim->data[iter + mu_phim->size[0] * r0->data[i0]] = b_Sig2m->data[i0];
    }

    /*  mu와 phi 저장하기 */
    /*   Step 2 : ht의 조건부 분산 */
    st.site = &h_emlrtRSI;
    Gen_Sigma(&st, b_mu_phim, mu_phi_hat, v0, d0, b_Sig2m, &sig2_inv, &sig2);
    i0 = Sig2m->size[0];
    if (!((iter + 1 >= 1) && (iter + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, i0, &u_emlrtBCI, sp);
    }

    Sig2m->data[iter] = sig2;
    st.site = &i_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(X->size[1] == b->size[0])) {
      if (((X->size[0] == 1) && (X->size[1] == 1)) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((X->size[1] == 1) || (b->size[0] == 1)) {
      i0 = vol->size[0];
      vol->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&st, vol, i0, &fb_emlrtRTEI);
      loop_ub = X->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        vol->data[i0] = 0.0;
        b_loop_ub = X->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          vol->data[i0] += X->data[i0 + X->size[0] * i1] * b->data[i1];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((X->size[0] == 0) || (X->size[1] == 0) || (b->size[0] == 0)) {
        i0 = vol->size[0];
        vol->size[0] = X->size[0];
        emxEnsureCapacity_real_T(&b_st, vol, i0, &fb_emlrtRTEI);
        loop_ub = X->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          vol->data[i0] = 0.0;
        }
      } else {
        c_st.site = &fc_emlrtRSI;
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)X->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)X->size[1];
        lda_t = (ptrdiff_t)X->size[0];
        ldb_t = (ptrdiff_t)X->size[1];
        ldc_t = (ptrdiff_t)X->size[0];
        i0 = vol->size[0];
        vol->size[0] = X->size[0];
        emxEnsureCapacity_real_T(&c_st, vol, i0, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &vol->data[0], &ldc_t);
      }
    }

    i0 = ym->size[0];
    i1 = vol->size[0];
    if (i0 != i1) {
      emlrtSizeEqCheck1DR2012b(i0, i1, &d_emlrtECI, sp);
    }

    st.site = &i_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    if (!(X->size[1] == b->size[0])) {
      if (((X->size[0] == 1) && (X->size[1] == 1)) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((X->size[1] == 1) || (b->size[0] == 1)) {
      i0 = mu_phi_hat->size[0];
      mu_phi_hat->size[0] = X->size[0];
      emxEnsureCapacity_real_T(&st, mu_phi_hat, i0, &kb_emlrtRTEI);
      loop_ub = X->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        mu_phi_hat->data[i0] = 0.0;
        b_loop_ub = X->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          mu_phi_hat->data[i0] += X->data[i0 + X->size[0] * i1] * b->data[i1];
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((X->size[0] == 0) || (X->size[1] == 0) || (b->size[0] == 0)) {
        i0 = mu_phi_hat->size[0];
        mu_phi_hat->size[0] = X->size[0];
        emxEnsureCapacity_real_T(&b_st, mu_phi_hat, i0, &kb_emlrtRTEI);
        loop_ub = X->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          mu_phi_hat->data[i0] = 0.0;
        }
      } else {
        c_st.site = &fc_emlrtRSI;
        c_st.site = &gc_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)X->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)X->size[1];
        lda_t = (ptrdiff_t)X->size[0];
        ldb_t = (ptrdiff_t)X->size[1];
        ldc_t = (ptrdiff_t)X->size[0];
        i0 = mu_phi_hat->size[0];
        mu_phi_hat->size[0] = X->size[0];
        emxEnsureCapacity_real_T(&c_st, mu_phi_hat, i0, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &mu_phi_hat->data[0], &ldc_t);
      }
    }

    i0 = ym->size[0];
    i1 = mu_phi_hat->size[0];
    if (i0 != i1) {
      emlrtSizeEqCheck1DR2012b(i0, i1, &e_emlrtECI, sp);
    }

    i0 = ym->size[0];
    i1 = ym->size[0];
    if (i0 != i1) {
      emlrtSizeEqCheck1DR2012b(i0, i1, &f_emlrtECI, sp);
    }

    i0 = vol->size[0];
    vol->size[0] = ym->size[0];
    emxEnsureCapacity_real_T(sp, vol, i0, &nb_emlrtRTEI);
    loop_ub = ym->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      vol->data[i0] = (ym->data[i0] - vol->data[i0]) * (ym->data[i0] -
        mu_phi_hat->data[i0]);
    }

    st.site = &i_emlrtRSI;
    b_log(&st, vol);

    /*  변형된 종속변수 */
    /*   Step 3 : Sampling sm */
    st.site = &j_emlrtRSI;
    Gen_Sm(&st, vol, hm, mu_phi_hat);

    /*   Step 4 : Sampling hm */
    st.site = &k_emlrtRSI;
    Gen_Fm(&st, vol, b_Sig2m, sig2, mu_phi_hat, dv0, hm, &alpha1);
    i0 = Hm->size[0];
    i1 = iter + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &t_emlrtBCI, sp);
    }

    loop_ub = Hm->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i0, &qb_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    loop_ub = hm->size[0];
    i0 = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(sp, A, i0, &tb_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      A->data[A->size[0] * i0] = hm->data[i0];
    }

    iv5[0] = 1;
    iv5[1] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv5[0], 2, &(*(int32_T (*)[2])A->size)[0], 2,
      &k_emlrtECI, sp);
    loop_ub = A->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Hm->data[iter + Hm->size[0] * r0->data[i0]] = A->data[A->size[0] * i0];
    }

    i0 = logLik->size[0];
    if (!((iter + 1 >= 1) && (iter + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, i0, &v_emlrtBCI, sp);
    }

    logLik->data[iter] = alpha1;
    i0 = vol->size[0];
    vol->size[0] = hm->size[0];
    emxEnsureCapacity_real_T(sp, vol, i0, &yb_emlrtRTEI);
    loop_ub = hm->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      vol->data[i0] = hm->data[i0] / 2.0;
    }

    st.site = &l_emlrtRSI;
    b_exp(&st, vol);

    /*  volatility */
    i0 = Volm->size[0];
    i1 = iter + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &m_emlrtBCI, sp);
    }

    loop_ub = Volm->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i0, &bc_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    loop_ub = vol->size[0];
    i0 = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(sp, A, i0, &dc_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      A->data[A->size[0] * i0] = vol->data[i0];
    }

    iv5[0] = 1;
    iv5[1] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv5[0], 2, &(*(int32_T (*)[2])A->size)[0], 2,
      &i_emlrtECI, sp);
    loop_ub = A->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Volm->data[iter + Volm->size[0] * r0->data[i0]] = A->data[A->size[0] * i0];
    }

    /*  volatility 저정하기 */
    if (isForecast == 1) {
      /*   예측 */
      i0 = Yfm->size[0];
      if (!((iter + 1 >= 1) && (iter + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, i0, &w_emlrtBCI, sp);
      }

      st.site = &m_emlrtRSI;
      Gen_Forecast(&st, x_f, b, b_Sig2m, sig2, ym, hm, &b_d0, &alpha1);
      Yfm->data[iter] = b_d0;

      /*          PredLikm(iter) = exp(lnpredlik); */
    }

    iter++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_b);
  emxFree_int32_T(&r0);
  emxFree_real_T(&hm);
  y = NULL;
  m0 = emlrtCreateString1(' ');
  emlrtAssign(&y, m0);
  st.site = &vl_emlrtRSI;
  disp(&st, y, &b_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 38, m0, &b_u[0]);
  emlrtAssign(&y, m0);
  st.site = &ul_emlrtRSI;
  disp(&st, y, &c_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateString1(' ');
  emlrtAssign(&y, m0);
  st.site = &tl_emlrtRSI;
  disp(&st, y, &d_emlrtMCI);

  /*  Summary of Output */
  if (n0 + 1.0 > n) {
    i0 = 0;
    result = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, sp);
    }

    i0 = logLik->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = logLik->size[0];
    result = (int32_T)n;
    if (!((result >= 1) && (result <= i1))) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i1, &b_emlrtBCI, sp);
    }
  }

  i1 = b_logLik->size[0];
  b_logLik->size[0] = result - i0;
  emxEnsureCapacity_real_T(sp, b_logLik, i1, &q_emlrtRTEI);
  loop_ub = result - i0;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_logLik->data[i1] = logLik->data[i0 + i1];
  }

  i0 = logLik->size[0];
  logLik->size[0] = b_logLik->size[0];
  emxEnsureCapacity_real_T(sp, logLik, i0, &r_emlrtRTEI);
  loop_ub = b_logLik->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    logLik->data[i0] = b_logLik->data[i0];
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    result = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, sp);
    }

    i0 = mu_phim->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = mu_phim->size[0];
    result = (int32_T)n;
    if (!((result >= 1) && (result <= i1))) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i1, &e_emlrtBCI, sp);
    }
  }

  b_loop_ub = mu_phim->size[1];
  i1 = b_mu_phim->size[0] * b_mu_phim->size[1];
  b_mu_phim->size[0] = result - i0;
  b_mu_phim->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_mu_phim, i1, &t_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    loop_ub = result - i0;
    for (b_result = 0; b_result < loop_ub; b_result++) {
      b_mu_phim->data[b_result + b_mu_phim->size[0] * i1] = mu_phim->data[(i0 +
        b_result) + mu_phim->size[0] * i1];
    }
  }

  i0 = mu_phim->size[0] * mu_phim->size[1];
  mu_phim->size[0] = b_mu_phim->size[0];
  mu_phim->size[1] = b_mu_phim->size[1];
  emxEnsureCapacity_real_T1(sp, mu_phim, i0, &u_emlrtRTEI);
  loop_ub = b_mu_phim->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = b_mu_phim->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      mu_phim->data[i1 + mu_phim->size[0] * i0] = b_mu_phim->data[i1 +
        b_mu_phim->size[0] * i0];
    }
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    result = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, sp);
    }

    i0 = Sig2m->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &f_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = Sig2m->size[0];
    result = (int32_T)n;
    if (!((result >= 1) && (result <= i1))) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i1, &g_emlrtBCI, sp);
    }
  }

  i1 = b_Sig2m->size[0];
  b_Sig2m->size[0] = result - i0;
  emxEnsureCapacity_real_T(sp, b_Sig2m, i1, &ab_emlrtRTEI);
  loop_ub = result - i0;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_Sig2m->data[i1] = Sig2m->data[i0 + i1];
  }

  i0 = Sig2m->size[0];
  Sig2m->size[0] = b_Sig2m->size[0];
  emxEnsureCapacity_real_T(sp, Sig2m, i0, &bb_emlrtRTEI);
  loop_ub = b_Sig2m->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Sig2m->data[i0] = b_Sig2m->data[i0];
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    result = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, sp);
    }

    i0 = betam->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &i_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = betam->size[0];
    result = (int32_T)n;
    if (!((result >= 1) && (result <= i1))) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i1, &j_emlrtBCI, sp);
    }
  }

  b_loop_ub = betam->size[1];
  i1 = b_mu_phim->size[0] * b_mu_phim->size[1];
  b_mu_phim->size[0] = result - i0;
  b_mu_phim->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_mu_phim, i1, &db_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    loop_ub = result - i0;
    for (b_result = 0; b_result < loop_ub; b_result++) {
      b_mu_phim->data[b_result + b_mu_phim->size[0] * i1] = betam->data[(i0 +
        b_result) + betam->size[0] * i1];
    }
  }

  i0 = betam->size[0] * betam->size[1];
  betam->size[0] = b_mu_phim->size[0];
  betam->size[1] = b_mu_phim->size[1];
  emxEnsureCapacity_real_T1(sp, betam, i0, &eb_emlrtRTEI);
  loop_ub = b_mu_phim->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = b_mu_phim->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      betam->data[i1 + betam->size[0] * i0] = b_mu_phim->data[i1 +
        b_mu_phim->size[0] * i0];
    }
  }

  if (isForecast == 1) {
    if (n0 + 1.0 > n) {
      i0 = 0;
      result = 0;
    } else {
      if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
        emlrtIntegerCheckR2012b(n0 + 1.0, &f_emlrtDCI, sp);
      }

      i0 = Yfm->size[0];
      i1 = (int32_T)(n0 + 1.0);
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &k_emlrtBCI, sp);
      }

      i0 = i1 - 1;
      i1 = Yfm->size[0];
      result = (int32_T)n;
      if (!((result >= 1) && (result <= i1))) {
        emlrtDynamicBoundsCheckR2012b(result, 1, i1, &l_emlrtBCI, sp);
      }
    }

    i1 = b_logLik->size[0];
    b_logLik->size[0] = result - i0;
    emxEnsureCapacity_real_T(sp, b_logLik, i1, &hb_emlrtRTEI);
    loop_ub = result - i0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_logLik->data[i1] = Yfm->data[i0 + i1];
    }

    i0 = Yfm->size[0];
    Yfm->size[0] = b_logLik->size[0];
    emxEnsureCapacity_real_T(sp, Yfm, i0, &jb_emlrtRTEI);
    loop_ub = b_logLik->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Yfm->data[i0] = b_logLik->data[i0];
    }

    /*      PredLikm = PredLikm(n0+1:n, :);   % 번인 버리기 */
    /*      predlik = meanc(PredLikm); */
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    result = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &g_emlrtDCI, sp);
    }

    i0 = Volm->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &n_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = Volm->size[0];
    result = (int32_T)n;
    if (!((result >= 1) && (result <= i1))) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i1, &o_emlrtBCI, sp);
    }
  }

  b_loop_ub = Volm->size[1];
  i1 = b_mu_phim->size[0] * b_mu_phim->size[1];
  b_mu_phim->size[0] = result - i0;
  b_mu_phim->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T1(sp, b_mu_phim, i1, &gb_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    loop_ub = result - i0;
    for (b_result = 0; b_result < loop_ub; b_result++) {
      b_mu_phim->data[b_result + b_mu_phim->size[0] * i1] = Volm->data[(i0 +
        b_result) + Volm->size[0] * i1];
    }
  }

  i0 = Volm->size[0] * Volm->size[1];
  Volm->size[0] = b_mu_phim->size[0];
  Volm->size[1] = b_mu_phim->size[1];
  emxEnsureCapacity_real_T1(sp, Volm, i0, &ib_emlrtRTEI);
  loop_ub = b_mu_phim->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = b_mu_phim->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Volm->data[i1 + Volm->size[0] * i0] = b_mu_phim->data[i1 + b_mu_phim->
        size[0] * i0];
    }
  }

  i0 = vol->size[0];
  vol->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, vol, i0, &lb_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    vol->data[i0] = beta0->data[i0];
  }

  i0 = mu_phi_hat->size[0];
  mu_phi_hat->size[0] = gamma0->size[0];
  emxEnsureCapacity_real_T(sp, mu_phi_hat, i0, &mb_emlrtRTEI);
  loop_ub = gamma0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    mu_phi_hat->data[i0] = gamma0->data[i0];
  }

  sig2 = d0 / v0;
  alpha1 = 0.0;
  if (ML == 'Y') {
    sig2_inv = -4.8516519540979028E+8;

    /*  임의로 값을 주고 시작함 */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, n1, mxDOUBLE_CLASS, (int32_T)n1,
      &ml_emlrtRTEI, sp);
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
        st.site = &xl_emlrtRSI;
        clc(&st, &o_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateString1(' ');
        emlrtAssign(&y, m0);
        st.site = &sl_emlrtRSI;
        disp(&st, y, &p_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv10);
        emlrtInitCharArrayR2013a(sp, 38, m0, &b_u[0]);
        emlrtAssign(&y, m0);
        st.site = &rl_emlrtRSI;
        disp(&st, y, &q_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateString1(' ');
        emlrtAssign(&y, m0);
        st.site = &ql_emlrtRSI;
        disp(&st, y, &r_emlrtMCI);
        for (i0 = 0; i0 < 39; i0++) {
          i_u[i0] = '=';
        }

        y = NULL;
        m0 = emlrtCreateCharArray(2, iv11);
        emlrtInitCharArrayR2013a(sp, 39, m0, &i_u[0]);
        emlrtAssign(&y, m0);
        st.site = &pl_emlrtRSI;
        disp(&st, y, &s_emlrtMCI);
        st.site = &n_emlrtRSI;
        b_st.site = &lc_emlrtRSI;
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv12);
        emlrtInitCharArrayR2013a(&b_st, 7, m0, &d_u[0]);
        emlrtAssign(&y, m0);
        b_y = NULL;
        m0 = emlrtCreateDoubleScalar(1.0);
        emlrtAssign(&b_y, m0);
        c_y = NULL;
        m0 = emlrtCreateCharArray(2, iv13);
        emlrtInitCharArrayR2013a(&b_st, 36, m0, &j_u[0]);
        emlrtAssign(&c_y, m0);
        d_y = NULL;
        m0 = emlrtCreateDoubleScalar((1.0 + (real_T)iter) * 100.0 / n1);
        emlrtAssign(&d_y, m0);
        c_st.site = &cm_emlrtRSI;
        c_emlrt_marshallIn(&c_st, d_feval(&c_st, y, b_y, c_y, d_y, &x_emlrtMCI),
                           "feval");
        for (i0 = 0; i0 < 39; i0++) {
          i_u[i0] = '=';
        }

        y = NULL;
        m0 = emlrtCreateCharArray(2, iv14);
        emlrtInitCharArrayR2013a(sp, 39, m0, &i_u[0]);
        emlrtAssign(&y, m0);
        st.site = &ol_emlrtRSI;
        disp(&st, y, &t_emlrtMCI);
      }

      loop_ub = mu_phim->size[1];
      i0 = mu_phim->size[0];
      if (!((iter + 1 >= 1) && (iter + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, i0, &p_emlrtBCI, sp);
      }

      b_loop_ub = iter + 1;
      i0 = mu_phi->size[0];
      mu_phi->size[0] = loop_ub;
      emxEnsureCapacity_real_T(sp, mu_phi, i0, &sb_emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        mu_phi->data[i0] = mu_phim->data[(b_loop_ub + mu_phim->size[0] * i0) - 1];
      }

      i0 = Sig2m->size[0];
      i1 = iter + 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &q_emlrtBCI, sp);
      }

      loop_ub = betam->size[1];
      i0 = betam->size[0];
      if (!((iter + 1 >= 1) && (iter + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, i0, &r_emlrtBCI, sp);
      }

      b_loop_ub = iter + 1;
      i0 = b->size[0];
      b->size[0] = loop_ub;
      emxEnsureCapacity_real_T(sp, b, i0, &vb_emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b->data[i0] = betam->data[(b_loop_ub + betam->size[0] * i0) - 1];
      }

      i0 = logLik->size[0];
      i1 = iter + 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &s_emlrtBCI, sp);
      }

      st.site = &o_emlrtRSI;
      alpha1 = b_lnpdfmvn(&st, b, beta0, B0);
      st.site = &p_emlrtRSI;
      beta1 = b_lnpdfmvn(&st, mu_phi, gamma0, Gamma0);
      st.site = &q_emlrtRSI;
      n = lnpdfig(&st, Sig2m->data[iter], v0 / 2.0, d0 / 2.0);
      alpha1 = logLik->data[iter] + ((alpha1 + beta1) + n);
      if (alpha1 > sig2_inv) {
        i0 = vol->size[0];
        vol->size[0] = b->size[0];
        emxEnsureCapacity_real_T(sp, vol, i0, &ac_emlrtRTEI);
        loop_ub = b->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          vol->data[i0] = b->data[i0];
        }

        i0 = mu_phi_hat->size[0];
        mu_phi_hat->size[0] = mu_phi->size[0];
        emxEnsureCapacity_real_T(sp, mu_phi_hat, i0, &cc_emlrtRTEI);
        loop_ub = mu_phi->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          mu_phi_hat->data[i0] = mu_phi->data[i0];
        }

        sig2 = Sig2m->data[iter];
        sig2_inv = alpha1;

        /*  최빈값 후보의 사후 커널값 */
      }

      iter++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    st.site = &r_emlrtRSI;
    b_st.site = &qd_emlrtRSI;
    if (!((betam->size[0] == 0) || (betam->size[1] == 0))) {
      b_loop_ub = betam->size[0];
    } else if (!((mu_phim->size[0] == 0) || (mu_phim->size[1] == 0))) {
      b_loop_ub = mu_phim->size[0];
    } else if (!(Sig2m->size[0] == 0)) {
      b_loop_ub = Sig2m->size[0];
    } else {
      b_loop_ub = muIntScalarMax_sint32(betam->size[0], 0);
      if (mu_phim->size[0] > b_loop_ub) {
        b_loop_ub = mu_phim->size[0];
      }
    }

    c_st.site = &rd_emlrtRSI;
    if ((betam->size[0] == b_loop_ub) || ((betam->size[0] == 0) || (betam->size
          [1] == 0))) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((mu_phim->size[0] == b_loop_ub) || ((mu_phim->size[0] == 0) ||
         (mu_phim->size[1] == 0))) {
    } else {
      empty_non_axis_sizes = false;
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Sig2m->size[0] == b_loop_ub) || (Sig2m->size[0] == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&c_st, &pl_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (b_loop_ub == 0);
    if (empty_non_axis_sizes || (!((betam->size[0] == 0) || (betam->size[1] == 0))))
    {
      iter = betam->size[1];
    } else {
      iter = 0;
    }

    if (empty_non_axis_sizes || (!((mu_phim->size[0] == 0) || (mu_phim->size[1] ==
           0)))) {
      result = mu_phim->size[1];
    } else {
      result = 0;
    }

    if (empty_non_axis_sizes || (!(Sig2m->size[0] == 0))) {
      b_result = 1;
    } else {
      b_result = 0;
    }

    i0 = precb_->size[0] * precb_->size[1];
    precb_->size[0] = b_loop_ub;
    precb_->size[1] = (iter + result) + b_result;
    emxEnsureCapacity_real_T1(&b_st, precb_, i0, &ec_emlrtRTEI);
    for (i0 = 0; i0 < iter; i0++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        precb_->data[i1 + precb_->size[0] * i0] = betam->data[i1 + b_loop_ub *
          i0];
      }
    }

    for (i0 = 0; i0 < result; i0++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        precb_->data[i1 + precb_->size[0] * (i0 + iter)] = mu_phim->data[i1 +
          b_loop_ub * i0];
      }
    }

    for (i0 = 0; i0 < b_result; i0++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        precb_->data[i1 + precb_->size[0] * ((i0 + iter) + result)] =
          Sig2m->data[i1 + b_loop_ub * i0];
      }
    }

    st.site = &s_emlrtRSI;
    b_st.site = &qk_emlrtRSI;
    if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) || (precb_->size[0]
         != 1)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ql_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    empty_non_axis_sizes = !isequal(precb_);
    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&b_st, &rl_emlrtRTEI,
        "Coder:toolbox:UnsupportedSpecialEmpty",
        "Coder:toolbox:UnsupportedSpecialEmpty", 0);
    }

    empty_non_axis_sizes = !isequal(precb_);
    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&b_st, &sl_emlrtRTEI,
        "Coder:toolbox:UnsupportedSpecialEmpty",
        "Coder:toolbox:UnsupportedSpecialEmpty", 0);
    }

    emxInit_real_T1(&b_st, &r1, 2, &nc_emlrtRTEI, true);
    c_st.site = &rk_emlrtRSI;
    combineVectorElements(&c_st, precb_, A);
    st.site = &t_emlrtRSI;
    cov(&st, precb_, precB0);
    st.site = &t_emlrtRSI;
    cov(&st, precb_, b_mu_phim);
    i0 = r1->size[0] * r1->size[1];
    r1->size[0] = b_mu_phim->size[1];
    r1->size[1] = b_mu_phim->size[0];
    emxEnsureCapacity_real_T1(sp, r1, i0, &fc_emlrtRTEI);
    loop_ub = b_mu_phim->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = b_mu_phim->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        r1->data[i1 + r1->size[0] * i0] = b_mu_phim->data[i0 + b_mu_phim->size[0]
          * i1];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_precB0[i0] = precB0->size[i0];
      iv5[i0] = r1->size[i0];
    }

    if ((b_precB0[0] != iv5[0]) || (b_precB0[1] != iv5[1])) {
      emlrtSizeEqCheckNDR2012b(&b_precB0[0], &iv5[0], &j_emlrtECI, sp);
    }

    i0 = b_Sig2m->size[0];
    b_Sig2m->size[0] = (vol->size[0] + mu_phi_hat->size[0]) + 1;
    emxEnsureCapacity_real_T(sp, b_Sig2m, i0, &gc_emlrtRTEI);
    loop_ub = vol->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_Sig2m->data[i0] = vol->data[i0];
    }

    loop_ub = mu_phi_hat->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_Sig2m->data[i0 + vol->size[0]] = mu_phi_hat->data[i0];
    }

    b_Sig2m->data[vol->size[0] + mu_phi_hat->size[0]] = sig2;
    b_loop_ub = precb_->size[0];
    i0 = b_logLik->size[0];
    b_logLik->size[0] = A->size[1];
    emxEnsureCapacity_real_T(sp, b_logLik, i0, &hc_emlrtRTEI);
    loop_ub = A->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_logLik->data[i0] = A->data[A->size[0] * i0] / (real_T)b_loop_ub;
    }

    i0 = b_mu_phim->size[0] * b_mu_phim->size[1];
    b_mu_phim->size[0] = precB0->size[0];
    b_mu_phim->size[1] = precB0->size[1];
    emxEnsureCapacity_real_T1(sp, b_mu_phim, i0, &ic_emlrtRTEI);
    loop_ub = precB0->size[0] * precB0->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_mu_phim->data[i0] = 0.5 * (precB0->data[i0] + r1->data[i0]);
    }

    emxFree_real_T(&r1);
    st.site = &u_emlrtRSI;
    alpha1 = b_lnpdfmvn(&st, b_Sig2m, b_logLik, b_mu_phim);
    alpha1 = sig2_inv - alpha1;
  }

  emxFree_real_T(&b_Sig2m);
  emxFree_real_T(&b_mu_phim);
  emxFree_real_T(&b_logLik);
  emxFree_real_T(&A);
  emxFree_real_T(&mu_phi_hat);
  emxFree_real_T(&logLik);
  emxFree_real_T(&vol);
  emxFree_real_T(&b);
  emxFree_real_T(&precB0);
  emxFree_real_T(&precb_);
  emxFree_real_T(&mu_phi);
  i0 = Output->Yfm->size[0];
  Output->Yfm->size[0] = Yfm->size[0];
  emxEnsureCapacity_real_T(sp, Output->Yfm, i0, &ob_emlrtRTEI);
  loop_ub = Yfm->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Yfm->data[i0] = Yfm->data[i0];
  }

  emxFree_real_T(&Yfm);
  i0 = Output->Hm->size[0] * Output->Hm->size[1];
  Output->Hm->size[0] = Hm->size[0];
  Output->Hm->size[1] = Hm->size[1];
  emxEnsureCapacity_real_T1(sp, Output->Hm, i0, &pb_emlrtRTEI);
  loop_ub = Hm->size[0] * Hm->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Hm->data[i0] = Hm->data[i0];
  }

  emxFree_real_T(&Hm);
  i0 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = betam->size[0];
  Output->betam->size[1] = betam->size[1];
  emxEnsureCapacity_real_T1(sp, Output->betam, i0, &rb_emlrtRTEI);
  loop_ub = betam->size[0] * betam->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->betam->data[i0] = betam->data[i0];
  }

  emxFree_real_T(&betam);
  i0 = Output->gammam->size[0] * Output->gammam->size[1];
  Output->gammam->size[0] = mu_phim->size[0];
  Output->gammam->size[1] = mu_phim->size[1];
  emxEnsureCapacity_real_T1(sp, Output->gammam, i0, &ub_emlrtRTEI);
  loop_ub = mu_phim->size[0] * mu_phim->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->gammam->data[i0] = mu_phim->data[i0];
  }

  emxFree_real_T(&mu_phim);
  i0 = Output->Sig2m->size[0];
  Output->Sig2m->size[0] = Sig2m->size[0];
  emxEnsureCapacity_real_T(sp, Output->Sig2m, i0, &wb_emlrtRTEI);
  loop_ub = Sig2m->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Sig2m->data[i0] = Sig2m->data[i0];
  }

  emxFree_real_T(&Sig2m);
  Output->lnML = alpha1;
  i0 = Output->Volm->size[0] * Output->Volm->size[1];
  Output->Volm->size[0] = Volm->size[0];
  Output->Volm->size[1] = Volm->size[1];
  emxEnsureCapacity_real_T1(sp, Output->Volm, i0, &xb_emlrtRTEI);
  loop_ub = Volm->size[0] * Volm->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Volm->data[i0] = Volm->data[i0];
  }

  emxFree_real_T(&Volm);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Stochastic_Volatility.c) */

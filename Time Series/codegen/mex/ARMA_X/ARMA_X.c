/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ARMA_X.c
 *
 * Code generation for function 'ARMA_X'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "ARMA_X_emxutil.h"
#include "error1.h"
#include "indexShapeCheck.h"
#include "warning.h"
#include "mpower.h"
#include "eml_int_forloop_overflow_check.h"
#include "randn.h"
#include "xpotrf.h"
#include "inv.h"
#include "isfinite.h"
#include "isnan.h"
#include "sqrt.h"
#include "power.h"
#include "abs.h"
#include "eig.h"
#include "eye.h"
#include "cholmod.h"
#include "invpd.h"
#include "vec.h"
#include "lnpdfmvn.h"
#include "assertValidSizeArg.h"
#include "std.h"
#include "sum.h"
#include "kron.h"
#include "lnpdfig.h"
#include "cov.h"
#include "meanc.h"
#include "demeanc.h"
#include "mean.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11,    /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 12,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 34,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 39,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 41,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 42,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 60,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 72,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 77,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 82,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 85,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 89,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 108, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 138, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 149, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 151, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 152, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 165, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 167, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 169, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 170, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 172, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 174, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 25, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 279,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 280,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 284,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 287,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 292,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 293,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 295,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 297,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 298,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 299,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 303,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 305,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 308,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 316,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 321,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 323,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 326,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 333,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 335,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 338,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 340,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 342,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 343,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 345,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 349,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 351,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 359,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 362,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 364,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 366,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 367,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 374,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 375,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 376,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 377,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 41, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 377,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 200,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 203,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 205,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 206,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 212,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 216,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 217,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 218,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 219,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 220,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 221,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 226,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 227,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 228,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 229,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 230,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 231,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 236,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 13, /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 253,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 293,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 392,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 393,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 399,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 400,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 403,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 405,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 408,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 410,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 412,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 74, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 91, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 92, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 9,  /* lineNo */
  "randig",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\randig.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 13, /* lineNo */
  "randgam",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\randgam.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 11, /* lineNo */
  "gamrnd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\stats\\eml\\gamrnd.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 1,  /* lineNo */
  "rnd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\rnd.p"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 1,  /* lineNo */
  "gamrnd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\private\\gamrnd.p"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 1,  /* lineNo */
  "randg",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\private\\randg.p"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 255,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 256,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 258,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 5,     /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 94,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 95,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 96,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 58,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 59,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 61,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 62,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 63,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 64,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 65,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 66,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 67,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 68,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 133, /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 134, /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 135, /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 136, /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 137, /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 139, /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 60,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 16,  /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 13,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 39,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 39,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 112,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 41,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 41,/* lineNo */
  27,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 45,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 47,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 48,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 49,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 50,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 73,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 100,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 73,/* lineNo */
  18,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 100,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 101,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 78,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 101,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 64,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 102,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 102,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 83,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 66,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 103,/* lineNo */
  6,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 85,/* lineNo */
  17,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 104,/* lineNo */
  7,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 104,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 85,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 105,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 108,/* lineNo */
  23,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 108,/* lineNo */
  36,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 119,/* lineNo */
  6,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 119,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 121,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 50,/* lineNo */
  5,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 122,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 108,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 179,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 180,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 181,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 142,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 182,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 144,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 183,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 184,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 186,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 157,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 165,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 158,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 167,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 170,/* lineNo */
  33,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 170,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 174,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 172,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 270,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 275,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 279,/* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 279,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 280,/* lineNo */
  31,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 280,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 280,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 284,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 285,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 286,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 287,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 287,/* lineNo */
  41,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 287,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 287,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 283,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 319,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 292,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 321,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 293,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 293,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 322,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 293,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 325,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 295,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 326,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 295,/* lineNo */
  22,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 326,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 327,/* lineNo */
  6,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 356,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 332,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 303,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 358,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 333,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 303,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 359,/* lineNo */
  29,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 304,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 333,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 304,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 359,/* lineNo */
  27,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 305,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 335,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 359,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 335,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 305,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 307,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 361,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 335,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 362,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 308,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 336,/* lineNo */
  26,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 362,/* lineNo */
  39,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 308,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 309,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 50,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 340,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 309,/* lineNo */
  18,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 340,/* lineNo */
  25,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 340,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 367,/* lineNo */
  24,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 342,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 342,/* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 369,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 371,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 372,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 342,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 373,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 343,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 343,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 345,/* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 376,/* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 345,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 376,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 377,/* lineNo */
  4,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 346,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 377,/* lineNo */
  35,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 348,/* lineNo */
  22,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 377,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 377,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 351,/* lineNo */
  18,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 351,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 352,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 283,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 323,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 266,/* lineNo */
  32,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 326,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 33,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 193,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 195,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 196,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 203,/* lineNo */
  35,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 200,/* lineNo */
  28,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 200,/* lineNo */
  44,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 200,/* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 203,/* lineNo */
  25,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 200,/* lineNo */
  21,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 203,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 204,/* lineNo */
  30,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 206,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 206,/* lineNo */
  41,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 206,/* lineNo */
  31,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 206,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 207,/* lineNo */
  22,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 207,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 212,/* lineNo */
  17,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 212,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 214,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 216,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 216,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 216,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 217,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 223,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 219,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 221,/* lineNo */
  27,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 221,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 226,/* lineNo */
  18,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 226,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 226,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 227,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 233,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 229,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = { 236,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 231,/* lineNo */
  27,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 231,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 242,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 240,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 205,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 218,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 219,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 220,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 190,/* lineNo */
  17,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 217,/* lineNo */
  32,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = { 386,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = { 387,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = { 389,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xl_emlrtRTEI = { 390,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo yl_emlrtRTEI = { 397,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo am_emlrtRTEI = { 399,/* lineNo */
  31,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bm_emlrtRTEI = { 392,/* lineNo */
  29,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cm_emlrtRTEI = { 408,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo dm_emlrtRTEI = { 392,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo em_emlrtRTEI = { 408,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo fm_emlrtRTEI = { 399,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo gm_emlrtRTEI = { 410,/* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo hm_emlrtRTEI = { 392,/* lineNo */
  52,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo im_emlrtRTEI = { 392,/* lineNo */
  59,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo jm_emlrtRTEI = { 400,/* lineNo */
  26,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo km_emlrtRTEI = { 393,/* lineNo */
  29,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo lm_emlrtRTEI = { 400,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo mm_emlrtRTEI = { 393,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo nm_emlrtRTEI = { 400,/* lineNo */
  36,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo om_emlrtRTEI = { 400,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo pm_emlrtRTEI = { 403,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo qm_emlrtRTEI = { 393,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo rm_emlrtRTEI = { 393,/* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo sm_emlrtRTEI = { 405,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo tm_emlrtRTEI = { 405,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo um_emlrtRTEI = { 399,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo vm_emlrtRTEI = { 383,/* lineNo */
  24,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wm_emlrtRTEI = { 405,/* lineNo */
  32,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo xm_emlrtRTEI = { 253,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo ym_emlrtRTEI = { 254,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo an_emlrtRTEI = { 255,/* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo bn_emlrtRTEI = { 256,/* lineNo */
  7,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cn_emlrtRTEI = { 258,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  39,                                  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  39,                                  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo wn_emlrtRTEI = { 52,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  11,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  78,                                  /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  85,                                  /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  85,                                  /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 100,   /* lineNo */
  17,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  17,                                  /* colNo */
  "logLik",                            /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  22,                                  /* colNo */
  "logLik",                            /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 101, /* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  15,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  20,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 102, /* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  15,                                  /* colNo */
  "sig2m",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  20,                                  /* colNo */
  "sig2m",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  83,                                  /* lineNo */
  8,                                   /* colNo */
  "bm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  83,                                  /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtDCInfo d_emlrtDCI = { 103, /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  9,                                   /* colNo */
  "bm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  14,                                  /* colNo */
  "bm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 104, /* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  11,                                  /* colNo */
  "Yfm",                               /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  16,                                  /* colNo */
  "Yfm",                               /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  31,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  33,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo xn_emlrtRTEI = { 109,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  35,                                  /* colNo */
  "mean_Y",                            /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  8,                                   /* colNo */
  "Vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  73,                                  /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtDCInfo f_emlrtDCI = { 119, /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  9,                                   /* colNo */
  "Vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  14,                                  /* colNo */
  "Vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo yn_emlrtRTEI = { 130,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  22,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  22,                                  /* colNo */
  "sig2m",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  16,                                  /* colNo */
  "bm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  25,                                  /* colNo */
  "logLik",                            /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  170,                                 /* lineNo */
  22,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  22,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  24,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo co_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 45,  /* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 45,  /* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 46,  /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 48,  /* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  16,                                  /* colNo */
  "data",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 16,  /* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  16,                                  /* colNo */
  "data",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 17,  /* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 45,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 45,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 46,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 47,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 48,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 49,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 50,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 105, /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 105, /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  25,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  39,                                  /* colNo */
  "one_phisum",                        /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  9,                                   /* colNo */
  "phi_consm",                         /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  5,                                   /* colNo */
  "logLik",                            /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  5,                                   /* colNo */
  "sig2m",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  9,                                   /* colNo */
  "Yfm",                               /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo so_emlrtRTEI = { 387,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  377,                                 /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  373,                                 /* lineNo */
  6,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  367,                                 /* lineNo */
  30,                                  /* colNo */
  "H1",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  363,                                 /* lineNo */
  20,                                  /* colNo */
  "upper_F",                           /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  362,                                 /* lineNo */
  44,                                  /* colNo */
  "H1",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  362,                                 /* lineNo */
  32,                                  /* colNo */
  "upper_F",                           /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  361,                                 /* lineNo */
  9,                                   /* colNo */
  "Fm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo t_emlrtECI = { 2,   /* nDims */
  359,                                 /* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  359,                                 /* lineNo */
  37,                                  /* colNo */
  "FmT",                               /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  359,                                 /* lineNo */
  35,                                  /* colNo */
  "FmT",                               /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  359,                                 /* lineNo */
  20,                                  /* colNo */
  "FmT",                               /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  352,                                 /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  8,                                   /* colNo */
  "Fm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  351,                                 /* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { 2,   /* nDims */
  348,                                 /* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { 2,   /* nDims */
  346,                                 /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  343,                                 /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  340,                                 /* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  340,                                 /* lineNo */
  15,                                  /* colNo */
  "Fm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bb_emlrtECI = { -1, /* nDims */
  327,                                 /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  4,                                   /* colNo */
  "Fm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  336,                                 /* lineNo */
  18,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 2,  /* nDims */
  335,                                 /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  333,                                 /* lineNo */
  26,                                  /* colNo */
  "P_ttm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  18,                                  /* colNo */
  "f_ttm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { -1, /* nDims */
  326,                                 /* lineNo */
  6,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  325,                                 /* lineNo */
  14,                                  /* colNo */
  "f_ttm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo fb_emlrtECI = { -1, /* nDims */
  307,                                 /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  307,                                 /* lineNo */
  11,                                  /* colNo */
  "f_ttm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gb_emlrtECI = { 2,  /* nDims */
  322,                                 /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  321,                                 /* lineNo */
  22,                                  /* colNo */
  "P_ttm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  309,                                 /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  309,                                 /* lineNo */
  11,                                  /* colNo */
  "P_ttm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  309,                                 /* lineNo */
  27,                                  /* colNo */
  "vec_P_tt",                          /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { 2,  /* nDims */
  305,                                 /* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  304,                                 /* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  293,                                 /* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 2,  /* nDims */
  287,                                 /* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtDCInfo w_emlrtDCI = { 283, /* lineNo */
  17,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 270, /* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 275, /* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 284,/* lineNo */
  17,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 319,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 356,/* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 270,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 275,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 284,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 286,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 319,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 356,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  4,                                   /* colNo */
  "vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  23,                                  /* colNo */
  "vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  299,                                 /* lineNo */
  22,                                  /* colNo */
  "error",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  300,                                 /* lineNo */
  5,                                   /* colNo */
  "likelihood",                        /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  12,                                  /* colNo */
  "error",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  20,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  5,                                   /* colNo */
  "upper_F",                           /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  273,                                 /* lineNo */
  20,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  273,                                 /* lineNo */
  5,                                   /* colNo */
  "TX",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  196,                                 /* lineNo */
  11,                                  /* colNo */
  "error",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  196,                                 /* lineNo */
  18,                                  /* colNo */
  "error",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo wo_emlrtRTEI = { 199,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  8,                                   /* colNo */
  "EV",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { -1, /* nDims */
  200,                                 /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 2,  /* nDims */
  203,                                 /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo ob_emlrtECI = { 2,  /* nDims */
  204,                                 /* lineNo */
  18,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  206,                                 /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { 2,  /* nDims */
  207,                                 /* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  212,                                 /* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  16,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  18,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 216,/* lineNo */
  31,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo sb_emlrtECI = { -1, /* nDims */
  221,                                 /* lineNo */
  32,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtDCInfo kb_emlrtDCI = { 226,/* lineNo */
  33,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  231,                                 /* lineNo */
  32,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  22,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 195,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 195,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 195,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 195,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  214,                                 /* lineNo */
  18,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  28,                                  /* colNo */
  "error",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  44,                                  /* colNo */
  "vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  386,                                 /* lineNo */
  12,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  386,                                 /* lineNo */
  14,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo bp_emlrtRTEI = { 391,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  392,                                 /* lineNo */
  24,                                  /* colNo */
  "Y",                                 /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  392,                                 /* lineNo */
  47,                                  /* colNo */
  "Y",                                 /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  393,                                 /* lineNo */
  22,                                  /* colNo */
  "X",                                 /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ub_emlrtECI = { 2,  /* nDims */
  393,                                 /* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  393,                                 /* lineNo */
  8,                                   /* colNo */
  "X_",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  393,                                 /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { 2,  /* nDims */
  399,                                 /* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { -1, /* nDims */
  400,                                 /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { -1, /* nDims */
  405,                                 /* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { -1, /* nDims */
  408,                                 /* lineNo */
  8,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pName */
};

static emlrtRTEInfo cp_emlrtRTEI = { 54,/* lineNo */
  15,                                  /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtRTEInfo dp_emlrtRTEI = { 80,/* lineNo */
  23,                                  /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtDCInfo pb_emlrtDCI = { 390,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  14,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 389,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 390,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  392,                                 /* lineNo */
  36,                                  /* colNo */
  "Y",                                 /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  392,                                 /* lineNo */
  62,                                  /* colNo */
  "vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  392,                                 /* lineNo */
  20,                                  /* colNo */
  "Y",                                 /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  392,                                 /* lineNo */
  5,                                   /* colNo */
  "Y_",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  393,                                 /* lineNo */
  36,                                  /* colNo */
  "X",                                 /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  256,                                 /* lineNo */
  15,                                  /* colNo */
  "vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  256,                                 /* lineNo */
  10,                                  /* colNo */
  "vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  22,                                  /* colNo */
  "error",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  17,                                  /* colNo */
  "error",                             /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  16,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  12,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  14,                                  /* colNo */
  "coef",                              /* aName */
  "ARMA_X",                            /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo wl_emlrtRSI = { 5,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 68, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 67, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 66, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 65, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 64, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 63, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 62, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 61, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 59, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 139,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 137,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 136,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 135,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 134,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 96, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 95, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 94, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 58, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 133,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\Time Series\\ARMA_X.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 60, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 14, /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

/* Function Declarations */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *n_error, const
                   emxArray_real_T *coef, real_T sig2, real_T p, real_T q,
                   emxArray_real_T *vm, real_T *loglikelihood);
static real_T Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *n_error,
  const emxArray_real_T *vm, const emxArray_real_T *coef, const emxArray_real_T *
  b, real_T sig2, real_T p, real_T q, const emxArray_real_T *x_f);
static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X, const
                     emxArray_real_T *Y, const emxArray_real_T *beta0, const
                     emxArray_real_T *precB0, const emxArray_real_T *coef,
                     real_T a0, real_T d0, real_T p, real_T q, const
                     emxArray_real_T *vm, real_T sig2_before, real_T model,
                     emxArray_real_T *beta, real_T *sig2);
static void Gen_coef(const emlrtStack *sp, const emxArray_real_T *n_error, const
                     emxArray_real_T *vm, const emxArray_real_T *coef0, const
                     emxArray_real_T *precCOEF0, real_T p, real_T q, real_T sig2,
                     const emxArray_real_T *coefm, emxArray_real_T *coef);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static void format(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *n_error, const
                   emxArray_real_T *coef, real_T sig2, real_T p, real_T q,
                   emxArray_real_T *vm, real_T *loglikelihood)
{
  emxArray_real_T *TX;
  real_T ds;
  int32_T i17;
  int32_T loop_ub;
  int32_T maxdimlen;
  emxArray_real_T *upper_F;
  int32_T i18;
  int32_T i19;
  emxArray_real_T *FmT;
  int32_T idx;
  boolean_T empty_non_axis_sizes;
  int32_T nx;
  cell_wrap_0 reshapes[2];
  emxArray_real_T *cP_tt;
  int32_T b_loop_ub;
  emxArray_real_T *F;
  int32_T i20;
  cell_wrap_0 b_reshapes[2];
  emxArray_real_T *b_idx;
  emxArray_real_T *Sigma;
  emxArray_real_T *P_ttm;
  real_T h_1_ds;
  emxArray_real_T *likelihood;
  emxArray_real_T *f_tt;
  int32_T b_cP_tt[2];
  emxArray_real_T *c_cP_tt;
  int32_T b_FmT[2];
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *x;
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
  emxArray_real_T *P_tl;
  emxArray_real_T *f_ttm;
  emxArray_real_T *f_tl;
  emxArray_real_T *Kalgain;
  emxArray_real_T *H1;
  emxArray_real_T *r3;
  emxArray_real_T *b_b;
  emxArray_int32_T *ii;
  emxArray_real_T *c_FmT;
  emxArray_real_T *Fm;
  int32_T b_ds[2];
  real_T var_tlinv_data[1];
  real_T lnmvn_data[1];
  int32_T b_ii[1];
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  emxArray_boolean_T *upper;
  emxArray_boolean_T *lower;
  boolean_T exitg1;
  emxArray_int32_T *c_ii;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &TX, 2, &we_emlrtRTEI, true);

  /*  Fm 샘플랭 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  ds = muDoubleScalarMax(p, q + 1.0);
  i17 = TX->size[0] * TX->size[1];
  TX->size[0] = 1;
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &x_emlrtDCI, sp);
  }

  TX->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, TX, i17, &we_emlrtRTEI);
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &db_emlrtDCI, sp);
  }

  loop_ub = (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    TX->data[i17] = 0.0;
  }

  TX->data[0] = 1.0;
  maxdimlen = 0;
  while (maxdimlen <= (int32_T)q - 1) {
    i17 = coef->size[0];
    i18 = (int32_T)(p + (1.0 + (real_T)maxdimlen));
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &rd_emlrtBCI, sp);
    }

    i17 = TX->size[1];
    i19 = (int32_T)(1.0 + (1.0 + (real_T)maxdimlen));
    if (!((i19 >= 1) && (i19 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i17, &sd_emlrtBCI, sp);
    }

    TX->data[TX->size[0] * (i19 - 1)] = coef->data[i18 - 1];
    maxdimlen++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &upper_F, 2, &xe_emlrtRTEI, true);
  i17 = upper_F->size[0] * upper_F->size[1];
  upper_F->size[0] = 1;
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &y_emlrtDCI, sp);
  }

  upper_F->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, upper_F, i17, &xe_emlrtRTEI);
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &eb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    upper_F->data[i17] = 0.0;
  }

  maxdimlen = 1;
  while (maxdimlen - 1 <= (int32_T)p - 1) {
    i17 = coef->size[0];
    if (!((maxdimlen >= 1) && (maxdimlen <= i17))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i17, &pd_emlrtBCI, sp);
    }

    i17 = upper_F->size[1];
    if (!((maxdimlen >= 1) && (maxdimlen <= i17))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i17, &qd_emlrtBCI, sp);
    }

    upper_F->data[upper_F->size[0] * (maxdimlen - 1)] = coef->data[maxdimlen - 1];
    maxdimlen++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &FmT, 2, &dg_emlrtRTEI, true);
  st.site = &kd_emlrtRSI;
  eye(&st, ds - 1.0, FmT);
  st.site = &kd_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  if (!((FmT->size[0] == 0) || (FmT->size[1] == 0))) {
    idx = FmT->size[0];
  } else if (!((int32_T)(ds - 1.0) == 0)) {
    idx = (int32_T)(ds - 1.0);
  } else {
    idx = muIntScalarMax_sint32(FmT->size[0], 0);
    if ((int32_T)(ds - 1.0) > idx) {
      idx = (int32_T)(ds - 1.0);
    }
  }

  c_st.site = &id_emlrtRSI;
  if ((FmT->size[0] == idx) || ((FmT->size[0] == 0) || (FmT->size[1] == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (((int32_T)(ds - 1.0) == idx) || ((int32_T)(ds - 1.0) == 0)) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (idx == 0);
  if (empty_non_axis_sizes || (!((FmT->size[0] == 0) || (FmT->size[1] == 0)))) {
    nx = FmT->size[1];
  } else {
    nx = 0;
  }

  if (empty_non_axis_sizes || (!((int32_T)(ds - 1.0) == 0))) {
    maxdimlen = 1;
  } else {
    maxdimlen = 0;
  }

  emxInitMatrix_cell_wrap_0(&b_st, reshapes, &uc_emlrtRTEI, true);
  i17 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
  reshapes[1].f1->size[0] = idx;
  reshapes[1].f1->size[1] = maxdimlen;
  emxEnsureCapacity_real_T(&b_st, reshapes[1].f1, i17, &k_emlrtRTEI);
  loop_ub = idx * maxdimlen;
  for (i17 = 0; i17 < loop_ub; i17++) {
    reshapes[1].f1->data[i17] = 0.0;
  }

  emxInit_real_T(&b_st, &cP_tt, 2, &gi_emlrtRTEI, true);
  i17 = cP_tt->size[0] * cP_tt->size[1];
  cP_tt->size[0] = idx;
  cP_tt->size[1] = nx + reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T(&b_st, cP_tt, i17, &ye_emlrtRTEI);
  for (i17 = 0; i17 < nx; i17++) {
    for (i18 = 0; i18 < idx; i18++) {
      cP_tt->data[i18 + cP_tt->size[0] * i17] = FmT->data[i18 + idx * i17];
    }
  }

  loop_ub = reshapes[1].f1->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_loop_ub = reshapes[1].f1->size[0];
    for (i18 = 0; i18 < b_loop_ub; i18++) {
      cP_tt->data[i18 + cP_tt->size[0] * (i17 + nx)] = reshapes[1].f1->data[i18
        + reshapes[1].f1->size[0] * i17];
    }
  }

  emxFreeMatrix_cell_wrap_0(reshapes);
  st.site = &kd_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  if (!(upper_F->size[1] == 0)) {
    idx = upper_F->size[1];
  } else if (!((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0))) {
    idx = cP_tt->size[1];
  } else {
    idx = 0;
    if (cP_tt->size[1] > 0) {
      idx = cP_tt->size[1];
    }
  }

  c_st.site = &id_emlrtRSI;
  if ((upper_F->size[1] == idx) || (upper_F->size[1] == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((cP_tt->size[1] == idx) || ((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0)))
  {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (idx == 0);
  if (empty_non_axis_sizes || (!(upper_F->size[1] == 0))) {
    nx = 1;
  } else {
    nx = 0;
  }

  if (empty_non_axis_sizes || (!((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0))))
  {
    maxdimlen = cP_tt->size[0];
  } else {
    maxdimlen = 0;
  }

  emxInit_real_T(&b_st, &F, 2, &af_emlrtRTEI, true);
  i17 = F->size[0] * F->size[1];
  F->size[0] = nx + maxdimlen;
  F->size[1] = idx;
  emxEnsureCapacity_real_T(&b_st, F, i17, &af_emlrtRTEI);
  for (i17 = 0; i17 < idx; i17++) {
    for (i18 = 0; i18 < nx; i18++) {
      F->data[i18 + F->size[0] * i17] = upper_F->data[i18 + nx * i17];
    }
  }

  for (i17 = 0; i17 < idx; i17++) {
    for (i18 = 0; i18 < maxdimlen; i18++) {
      F->data[(i18 + nx) + F->size[0] * i17] = cP_tt->data[i18 + maxdimlen * i17];
    }
  }

  st.site = &ld_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  if (!((int32_T)(ds - 1.0) == 0)) {
    idx = (int32_T)(ds - 1.0);
  } else if (!((int32_T)(ds - 1.0) == 0)) {
    idx = (int32_T)(ds - 1.0);
  } else {
    i20 = (int32_T)(ds - 1.0);
    idx = muIntScalarMax_sint32(i20, 0);
    if ((int32_T)(ds - 1.0) > idx) {
      idx = (int32_T)(ds - 1.0);
    }
  }

  c_st.site = &id_emlrtRSI;
  if (((int32_T)(ds - 1.0) == idx) || ((int32_T)(ds - 1.0) == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (((int32_T)(ds - 1.0) == idx) || ((int32_T)(ds - 1.0) == 0)) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (idx == 0);
  if (empty_non_axis_sizes || (!((int32_T)(ds - 1.0) == 0))) {
    nx = 1;
  } else {
    nx = 0;
  }

  emxInitMatrix_cell_wrap_0(&b_st, b_reshapes, &uc_emlrtRTEI, true);
  i17 = b_reshapes[0].f1->size[0] * b_reshapes[0].f1->size[1];
  b_reshapes[0].f1->size[0] = idx;
  b_reshapes[0].f1->size[1] = nx;
  emxEnsureCapacity_real_T(&b_st, b_reshapes[0].f1, i17, &k_emlrtRTEI);
  loop_ub = idx * nx;
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_reshapes[0].f1->data[i17] = 0.0;
  }

  if (empty_non_axis_sizes || (!((int32_T)(ds - 1.0) == 0))) {
    nx = (int32_T)(ds - 1.0);
  } else {
    nx = 0;
  }

  i17 = b_reshapes[1].f1->size[0] * b_reshapes[1].f1->size[1];
  b_reshapes[1].f1->size[0] = idx;
  b_reshapes[1].f1->size[1] = nx;
  emxEnsureCapacity_real_T(&b_st, b_reshapes[1].f1, i17, &k_emlrtRTEI);
  loop_ub = idx * nx;
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_reshapes[1].f1->data[i17] = 0.0;
  }

  i17 = cP_tt->size[0] * cP_tt->size[1];
  cP_tt->size[0] = b_reshapes[0].f1->size[0];
  cP_tt->size[1] = b_reshapes[0].f1->size[1] + b_reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T(&b_st, cP_tt, i17, &bf_emlrtRTEI);
  loop_ub = b_reshapes[0].f1->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_loop_ub = b_reshapes[0].f1->size[0];
    for (i18 = 0; i18 < b_loop_ub; i18++) {
      cP_tt->data[i18 + cP_tt->size[0] * i17] = b_reshapes[0].f1->data[i18 +
        b_reshapes[0].f1->size[0] * i17];
    }
  }

  loop_ub = b_reshapes[1].f1->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_loop_ub = b_reshapes[1].f1->size[0];
    for (i18 = 0; i18 < b_loop_ub; i18++) {
      cP_tt->data[i18 + cP_tt->size[0] * (i17 + b_reshapes[0].f1->size[1])] =
        b_reshapes[1].f1->data[i18 + b_reshapes[1].f1->size[0] * i17];
    }
  }

  emxFreeMatrix_cell_wrap_0(b_reshapes);
  emxInit_real_T(&b_st, &b_idx, 2, &ag_emlrtRTEI, true);
  st.site = &ld_emlrtRSI;
  i17 = b_idx->size[0] * b_idx->size[1];
  b_idx->size[0] = 1;
  b_idx->size[1] = 1 + (int32_T)(ds - 1.0);
  emxEnsureCapacity_real_T(&st, b_idx, i17, &cf_emlrtRTEI);
  b_idx->data[0] = sig2;
  loop_ub = (int32_T)(ds - 1.0);
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_idx->data[b_idx->size[0] * (i17 + 1)] = 0.0;
  }

  b_st.site = &hd_emlrtRSI;
  idx = b_idx->size[1];
  c_st.site = &id_emlrtRSI;
  empty_non_axis_sizes = (b_idx->size[1] == idx);
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((cP_tt->size[1] == idx) || ((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0)))
  {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (!((cP_tt->size[0] == 0) || (cP_tt->size[1] == 0))) {
    nx = cP_tt->size[0];
  } else {
    nx = 0;
  }

  emxInit_real_T(&b_st, &Sigma, 2, &df_emlrtRTEI, true);
  i17 = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = 1 + nx;
  Sigma->size[1] = idx;
  emxEnsureCapacity_real_T(&b_st, Sigma, i17, &df_emlrtRTEI);
  for (i17 = 0; i17 < idx; i17++) {
    for (i18 = 0; i18 < 1; i18++) {
      Sigma->data[Sigma->size[0] * i17] = b_idx->data[i17];
    }
  }

  for (i17 = 0; i17 < idx; i17++) {
    for (i18 = 0; i18 < nx; i18++) {
      Sigma->data[(i18 + Sigma->size[0] * i17) + 1] = cP_tt->data[i18 + nx * i17];
    }
  }

  emxInit_real_T(&b_st, &P_ttm, 2, &ef_emlrtRTEI, true);

  /* %%%% Kalman filtering step */
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &w_emlrtDCI, sp);
  }

  /*  은닉인자를 저장 */
  st.site = &md_emlrtRSI;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &cd_emlrtRSI;
  h_1_ds = ds * ds;
  i17 = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[0] = n_error->size[0];
  if (h_1_ds != (int32_T)muDoubleScalarFloor(h_1_ds)) {
    emlrtIntegerCheckR2012b(h_1_ds, &ab_emlrtDCI, sp);
  }

  P_ttm->size[1] = (int32_T)h_1_ds;
  emxEnsureCapacity_real_T(sp, P_ttm, i17, &ef_emlrtRTEI);
  if (h_1_ds != (int32_T)muDoubleScalarFloor(h_1_ds)) {
    emlrtIntegerCheckR2012b(h_1_ds, &fb_emlrtDCI, sp);
  }

  loop_ub = n_error->size[0] * (int32_T)h_1_ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    P_ttm->data[i17] = 0.0;
  }

  emxInit_real_T1(sp, &likelihood, 1, &ff_emlrtRTEI, true);

  /*  은닉인자의 분산을 저장 */
  i17 = likelihood->size[0];
  likelihood->size[0] = n_error->size[0];
  emxEnsureCapacity_real_T1(sp, likelihood, i17, &ff_emlrtRTEI);
  loop_ub = n_error->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    likelihood->data[i17] = 0.0;
  }

  emxInit_real_T1(sp, &f_tt, 1, &jg_emlrtRTEI, true);
  i17 = f_tt->size[0];
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &gb_emlrtDCI, sp);
  }

  f_tt->size[0] = (int32_T)ds;
  emxEnsureCapacity_real_T1(sp, f_tt, i17, &gf_emlrtRTEI);
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &gb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    f_tt->data[i17] = 0.0;
  }

  /*  초기값은 무조건부 평균 */
  st.site = &nd_emlrtRSI;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &cd_emlrtRSI;
  st.site = &nd_emlrtRSI;
  eye(&st, ds * ds, cP_tt);
  st.site = &nd_emlrtRSI;
  kron(&st, F, F, FmT);
  for (i17 = 0; i17 < 2; i17++) {
    b_cP_tt[i17] = cP_tt->size[i17];
  }

  for (i17 = 0; i17 < 2; i17++) {
    b_FmT[i17] = FmT->size[i17];
  }

  emxInit_real_T(sp, &c_cP_tt, 2, &hf_emlrtRTEI, true);
  if ((b_cP_tt[0] != b_FmT[0]) || (b_cP_tt[1] != b_FmT[1])) {
    emlrtSizeEqCheckNDR2012b(&b_cP_tt[0], &b_FmT[0], &lb_emlrtECI, sp);
  }

  i17 = c_cP_tt->size[0] * c_cP_tt->size[1];
  c_cP_tt->size[0] = cP_tt->size[0];
  c_cP_tt->size[1] = cP_tt->size[1];
  emxEnsureCapacity_real_T(sp, c_cP_tt, i17, &hf_emlrtRTEI);
  loop_ub = cP_tt->size[0] * cP_tt->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    c_cP_tt->data[i17] = cP_tt->data[i17] - FmT->data[i17];
  }

  emxInit_real_T(sp, &a, 2, &jf_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &if_emlrtRTEI, true);
  st.site = &nd_emlrtRSI;
  inv(&st, c_cP_tt, a);
  i17 = b->size[0] * b->size[1];
  b->size[0] = Sigma->size[0];
  b->size[1] = Sigma->size[1];
  emxEnsureCapacity_real_T(sp, b, i17, &if_emlrtRTEI);
  loop_ub = Sigma->size[0] * Sigma->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    b->data[i17] = Sigma->data[i17];
  }

  st.site = &nd_emlrtRSI;
  vec(&st, b);
  st.site = &nd_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &x, 2, &jf_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i17 = x->size[0] * x->size[1];
    x->size[0] = a->size[0];
    x->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, x, i17, &jf_emlrtRTEI);
    loop_ub = a->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = b->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        x->data[i17 + x->size[0] * i18] = 0.0;
        nx = a->size[1];
        for (i19 = 0; i19 < nx; i19++) {
          x->data[i17 + x->size[0] * i18] += a->data[i17 + a->size[0] * i19] *
            b->data[i19 + b->size[0] * i18];
        }
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (b->size[0] == 0) || (b->size
         [1] == 0)) {
      i17 = x->size[0] * x->size[1];
      x->size[0] = a->size[0];
      x->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&b_st, x, i17, &jf_emlrtRTEI);
      loop_ub = a->size[0] * b->size[1];
      for (i17 = 0; i17 < loop_ub; i17++) {
        x->data[i17] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
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
      i17 = x->size[0] * x->size[1];
      x->size[0] = a->size[0];
      x->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, x, i17, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &x->data[0], &ldc_t);
    }
  }

  st.site = &nd_emlrtRSI;
  nx = x->size[0] * x->size[1];
  b_st.site = &hg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  c_st.site = &fg_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  maxdimlen = x->size[0];
  if (x->size[1] > x->size[0]) {
    maxdimlen = x->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if ((int32_T)ds > maxdimlen) {
    b_st.site = &gg_emlrtRSI;
    f_error(&b_st);
  }

  if ((int32_T)ds * (int32_T)ds != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &ro_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emxInit_real_T(&st, &P_tl, 2, &sf_emlrtRTEI, true);
  i17 = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = (int32_T)ds;
  P_tl->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(&st, P_tl, i17, &kf_emlrtRTEI);
  loop_ub = (int32_T)ds * (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    P_tl->data[i17] = x->data[i17];
  }

  emxInit_real_T(&st, &f_ttm, 2, &fi_emlrtRTEI, true);
  i17 = f_ttm->size[0] * f_ttm->size[1];
  f_ttm->size[0] = n_error->size[0];
  f_ttm->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, f_ttm, i17, &lf_emlrtRTEI);
  idx = 0;
  emxInit_real_T1(sp, &f_tl, 1, &nf_emlrtRTEI, true);
  emxInit_real_T(sp, &Kalgain, 2, &fg_emlrtRTEI, true);
  emxInit_real_T1(sp, &H1, 1, &rg_emlrtRTEI, true);
  emxInit_real_T(sp, &r3, 2, &hi_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_b, 1, &ii_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 1, &ji_emlrtRTEI, true);
  emxInit_real_T(sp, &c_FmT, 2, &ch_emlrtRTEI, true);
  while (idx <= n_error->size[0] - 1) {
    st.site = &od_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(F->size[1] == f_tt->size[0])) {
      if (((F->size[0] == 1) && (F->size[1] == 1)) || (f_tt->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((F->size[1] == 1) || (f_tt->size[0] == 1)) {
      i17 = f_tl->size[0];
      f_tl->size[0] = F->size[0];
      emxEnsureCapacity_real_T1(&st, f_tl, i17, &nf_emlrtRTEI);
      loop_ub = F->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        f_tl->data[i17] = 0.0;
        b_loop_ub = F->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          f_tl->data[i17] += F->data[i17 + F->size[0] * i18] * f_tt->data[i18];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((F->size[0] == 0) || (F->size[1] == 0) || (f_tt->size[0] == 0)) {
        i17 = f_tl->size[0];
        f_tl->size[0] = F->size[0];
        emxEnsureCapacity_real_T1(&b_st, f_tl, i17, &nf_emlrtRTEI);
        loop_ub = F->size[0];
        for (i17 = 0; i17 < loop_ub; i17++) {
          f_tl->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)F->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)F->size[1];
        lda_t = (ptrdiff_t)F->size[0];
        ldb_t = (ptrdiff_t)F->size[1];
        ldc_t = (ptrdiff_t)F->size[0];
        i17 = f_tl->size[0];
        f_tl->size[0] = F->size[0];
        emxEnsureCapacity_real_T1(&c_st, f_tl, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &F->data[0], &lda_t,
              &f_tt->data[0], &ldb_t, &beta1, &f_tl->data[0], &ldc_t);
      }
    }

    st.site = &pd_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(F->size[1] == P_tl->size[0])) {
      if (((F->size[0] == 1) && (F->size[1] == 1)) || ((P_tl->size[0] == 1) &&
           (P_tl->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((F->size[1] == 1) || (P_tl->size[0] == 1)) {
      i17 = a->size[0] * a->size[1];
      a->size[0] = F->size[0];
      a->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T(&st, a, i17, &pf_emlrtRTEI);
      loop_ub = F->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = P_tl->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          a->data[i17 + a->size[0] * i18] = 0.0;
          nx = F->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            a->data[i17 + a->size[0] * i18] += F->data[i17 + F->size[0] * i19] *
              P_tl->data[i19 + P_tl->size[0] * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((F->size[0] == 0) || (F->size[1] == 0) || (P_tl->size[0] == 0) ||
          (P_tl->size[1] == 0)) {
        i17 = a->size[0] * a->size[1];
        a->size[0] = F->size[0];
        a->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T(&b_st, a, i17, &pf_emlrtRTEI);
        loop_ub = F->size[0] * P_tl->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          a->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)F->size[0];
        n_t = (ptrdiff_t)P_tl->size[1];
        k_t = (ptrdiff_t)F->size[1];
        lda_t = (ptrdiff_t)F->size[0];
        ldb_t = (ptrdiff_t)F->size[1];
        ldc_t = (ptrdiff_t)F->size[0];
        i17 = a->size[0] * a->size[1];
        a->size[0] = F->size[0];
        a->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T(&c_st, a, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &F->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    st.site = &pd_emlrtRSI;
    i17 = b->size[0] * b->size[1];
    b->size[0] = F->size[1];
    b->size[1] = F->size[0];
    emxEnsureCapacity_real_T(&st, b, i17, &qf_emlrtRTEI);
    loop_ub = F->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = F->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        b->data[i18 + b->size[0] * i17] = F->data[i17 + F->size[0] * i18];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == b->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
           (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      i17 = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = a->size[0];
      P_tl->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&st, P_tl, i17, &pf_emlrtRTEI);
      loop_ub = a->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = b->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          P_tl->data[i17 + P_tl->size[0] * i18] = 0.0;
          nx = a->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            P_tl->data[i17 + P_tl->size[0] * i18] += a->data[i17 + a->size[0] *
              i19] * b->data[i19 + b->size[0] * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (b->size[0] == 0) ||
          (b->size[1] == 0)) {
        i17 = P_tl->size[0] * P_tl->size[1];
        P_tl->size[0] = a->size[0];
        P_tl->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&b_st, P_tl, i17, &pf_emlrtRTEI);
        loop_ub = a->size[0] * b->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          P_tl->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i17 = P_tl->size[0] * P_tl->size[1];
        P_tl->size[0] = a->size[0];
        P_tl->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&c_st, P_tl, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &P_tl->data[0], &ldc_t);
      }
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_ds[i17] = P_tl->size[i17];
      b_cP_tt[i17] = Sigma->size[i17];
    }

    if ((b_ds[0] != b_cP_tt[0]) || (b_ds[1] != b_cP_tt[1])) {
      emlrtSizeEqCheckNDR2012b(&b_ds[0], &b_cP_tt[0], &kb_emlrtECI, sp);
    }

    loop_ub = P_tl->size[0] * P_tl->size[1] - 1;
    i17 = P_tl->size[0] * P_tl->size[1];
    emxEnsureCapacity_real_T(sp, P_tl, i17, &sf_emlrtRTEI);
    for (i17 = 0; i17 <= loop_ub; i17++) {
      P_tl->data[i17] += Sigma->data[i17];
    }

    st.site = &qd_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(TX->size[1] == P_tl->size[0])) {
      if ((TX->size[1] == 1) || ((P_tl->size[0] == 1) && (P_tl->size[1] == 1)))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((TX->size[1] == 1) || (P_tl->size[0] == 1)) {
      i17 = b_idx->size[0] * b_idx->size[1];
      b_idx->size[0] = 1;
      b_idx->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T(&st, b_idx, i17, &uf_emlrtRTEI);
      loop_ub = P_tl->size[1];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_idx->data[b_idx->size[0] * i17] = 0.0;
        b_loop_ub = TX->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          b_idx->data[b_idx->size[0] * i17] += TX->data[TX->size[0] * i18] *
            P_tl->data[i18 + P_tl->size[0] * i17];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((TX->size[1] == 0) || (P_tl->size[0] == 0)) {
        i17 = b_idx->size[0] * b_idx->size[1];
        b_idx->size[0] = 1;
        b_idx->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T(&b_st, b_idx, i17, &uf_emlrtRTEI);
        loop_ub = P_tl->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          b_idx->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)1;
        n_t = (ptrdiff_t)P_tl->size[1];
        k_t = (ptrdiff_t)TX->size[1];
        lda_t = (ptrdiff_t)1;
        ldb_t = (ptrdiff_t)TX->size[1];
        ldc_t = (ptrdiff_t)1;
        i17 = b_idx->size[0] * b_idx->size[1];
        b_idx->size[0] = 1;
        b_idx->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T(&c_st, b_idx, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &TX->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &b_idx->data[0], &ldc_t);
      }
    }

    st.site = &qd_emlrtRSI;
    i17 = b_b->size[0];
    b_b->size[0] = TX->size[1];
    emxEnsureCapacity_real_T1(&st, b_b, i17, &wf_emlrtRTEI);
    loop_ub = TX->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_b->data[i17] = TX->data[TX->size[0] * i17];
    }

    b_st.site = &tc_emlrtRSI;
    if (!(b_idx->size[1] == b_b->size[0])) {
      if ((b_idx->size[1] == 1) || (b_b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((b_idx->size[1] == 1) || (b_b->size[0] == 1)) {
      h_1_ds = 0.0;
      for (i17 = 0; i17 < b_idx->size[1]; i17++) {
        h_1_ds += b_idx->data[b_idx->size[0] * i17] * b_b->data[i17];
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      n_t = (ptrdiff_t)b_idx->size[1];
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      h_1_ds = ddot(&n_t, &b_idx->data[0], &m_t, &b_b->data[0], &k_t);
    }

    h_1_ds = 0.5 * (h_1_ds + h_1_ds);
    st.site = &rd_emlrtRSI;
    b_invpd(&st, h_1_ds, var_tlinv_data, b_cP_tt);
    st.site = &sd_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(TX->size[1] == f_tl->size[0])) {
      if ((TX->size[1] == 1) || (f_tl->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((TX->size[1] == 1) || (f_tl->size[0] == 1)) {
      alpha1 = 0.0;
      for (i17 = 0; i17 < TX->size[1]; i17++) {
        alpha1 += TX->data[TX->size[0] * i17] * f_tl->data[i17];
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      if (TX->size[1] < 1) {
        alpha1 = 0.0;
      } else {
        n_t = (ptrdiff_t)TX->size[1];
        m_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)1;
        alpha1 = ddot(&n_t, &TX->data[0], &m_t, &f_tl->data[0], &k_t);
      }
    }

    i17 = n_error->size[0];
    i18 = 1 + idx;
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &md_emlrtBCI, sp);
    }

    st.site = &td_emlrtRSI;
    lnpdfmvn(&st, n_error->data[i18 - 1], alpha1, h_1_ds, lnmvn_data, b_ii);
    i17 = likelihood->size[0];
    i18 = 1 + idx;
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &nd_emlrtBCI, sp);
    }

    likelihood->data[i18 - 1] = lnmvn_data[0];
    i17 = n_error->size[0];
    i18 = 1 + idx;
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &od_emlrtBCI, sp);
    }

    h_1_ds = n_error->data[i18 - 1] - alpha1;
    st.site = &ud_emlrtRSI;
    i17 = b_b->size[0];
    b_b->size[0] = TX->size[1];
    emxEnsureCapacity_real_T1(&st, b_b, i17, &cg_emlrtRTEI);
    loop_ub = TX->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_b->data[i17] = TX->data[TX->size[0] * i17];
    }

    b_st.site = &tc_emlrtRSI;
    if (!(P_tl->size[1] == b_b->size[0])) {
      if (((P_tl->size[0] == 1) && (P_tl->size[1] == 1)) || (b_b->size[0] == 1))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((P_tl->size[1] == 1) || (b_b->size[0] == 1)) {
      i17 = H1->size[0];
      H1->size[0] = P_tl->size[0];
      emxEnsureCapacity_real_T1(&st, H1, i17, &tb_emlrtRTEI);
      loop_ub = P_tl->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        H1->data[i17] = 0.0;
        b_loop_ub = P_tl->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          H1->data[i17] += P_tl->data[i17 + P_tl->size[0] * i18] * b_b->data[i18];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if (P_tl->size[0] == 0) {
        i17 = H1->size[0];
        H1->size[0] = P_tl->size[0];
        emxEnsureCapacity_real_T1(&b_st, H1, i17, &xb_emlrtRTEI);
        loop_ub = P_tl->size[0];
        for (i17 = 0; i17 < loop_ub; i17++) {
          H1->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i17 = H1->size[0];
        H1->size[0] = P_tl->size[0];
        emxEnsureCapacity_real_T1(&c_st, H1, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &P_tl->data[0],
              &lda_t, &b_b->data[0], &ldb_t, &beta1, &H1->data[0], &ldc_t);
      }
    }

    i17 = Kalgain->size[0] * Kalgain->size[1];
    Kalgain->size[0] = H1->size[0];
    Kalgain->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Kalgain, i17, &fg_emlrtRTEI);
    loop_ub = H1->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      Kalgain->data[i17] = H1->data[i17] * var_tlinv_data[0];
    }

    /*  변환된 종속변수에 대해 Gamma는 단위행렬 */
    i17 = r3->size[0] * r3->size[1];
    r3->size[0] = Kalgain->size[0];
    r3->size[1] = 1;
    emxEnsureCapacity_real_T(sp, r3, i17, &hg_emlrtRTEI);
    loop_ub = Kalgain->size[0] * Kalgain->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      r3->data[i17] = Kalgain->data[i17] * h_1_ds;
    }

    i17 = f_tl->size[0];
    i18 = r3->size[0];
    if (i17 != i18) {
      emlrtSizeEqCheck1DR2012b(i17, i18, &jb_emlrtECI, sp);
    }

    i17 = f_tt->size[0];
    f_tt->size[0] = f_tl->size[0];
    emxEnsureCapacity_real_T1(sp, f_tt, i17, &jg_emlrtRTEI);
    loop_ub = f_tl->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      f_tt->data[i17] = f_tl->data[i17] + r3->data[i17];
    }

    maxdimlen = Kalgain->size[0];
    i17 = a->size[0] * a->size[1];
    a->size[0] = maxdimlen;
    a->size[1] = TX->size[1];
    emxEnsureCapacity_real_T(sp, a, i17, &lg_emlrtRTEI);
    for (i17 = 0; i17 < maxdimlen; i17++) {
      loop_ub = TX->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        a->data[i17 + a->size[0] * i18] = Kalgain->data[i17] * TX->data[TX->
          size[0] * i18];
      }
    }

    st.site = &vd_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == P_tl->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((P_tl->size[0] == 1) &&
           (P_tl->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (P_tl->size[0] == 1)) {
      i17 = cP_tt->size[0] * cP_tt->size[1];
      cP_tt->size[0] = a->size[0];
      cP_tt->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T(&st, cP_tt, i17, &lg_emlrtRTEI);
      loop_ub = a->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = P_tl->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          cP_tt->data[i17 + cP_tt->size[0] * i18] = 0.0;
          nx = a->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            cP_tt->data[i17 + cP_tt->size[0] * i18] += a->data[i17 + a->size[0] *
              i19] * P_tl->data[i19 + P_tl->size[0] * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (P_tl->size[0] == 0)) {
        i17 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = a->size[0];
        cP_tt->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T(&b_st, cP_tt, i17, &lg_emlrtRTEI);
        loop_ub = a->size[0] * P_tl->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          cP_tt->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i17 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = a->size[0];
        cP_tt->size[1] = P_tl->size[1];
        emxEnsureCapacity_real_T(&c_st, cP_tt, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &cP_tt->data[0], &ldc_t);
      }
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_ds[i17] = P_tl->size[i17];
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_cP_tt[i17] = cP_tt->size[i17];
    }

    if ((b_ds[0] != b_cP_tt[0]) || (b_ds[1] != b_cP_tt[1])) {
      emlrtSizeEqCheckNDR2012b(&b_ds[0], &b_cP_tt[0], &ib_emlrtECI, sp);
    }

    loop_ub = P_tl->size[0] * P_tl->size[1] - 1;
    i17 = P_tl->size[0] * P_tl->size[1];
    emxEnsureCapacity_real_T(sp, P_tl, i17, &pg_emlrtRTEI);
    for (i17 = 0; i17 <= loop_ub; i17++) {
      P_tl->data[i17] -= cP_tt->data[i17];
    }

    i17 = f_ttm->size[0];
    i18 = idx + 1;
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &gd_emlrtBCI, sp);
    }

    loop_ub = f_ttm->size[1];
    i17 = ii->size[0];
    ii->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, ii, i17, &qg_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      ii->data[i17] = i17;
    }

    b_ds[0] = 1;
    b_ds[1] = ii->size[0];
    b_cP_tt[0] = 1;
    b_cP_tt[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_ds[0], 2, &b_cP_tt[0], 2, &fb_emlrtECI, sp);
    loop_ub = f_tt->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      f_ttm->data[idx + f_ttm->size[0] * ii->data[i17]] = f_tt->data[i17];
    }

    i17 = cP_tt->size[0] * cP_tt->size[1];
    cP_tt->size[0] = P_tl->size[0];
    cP_tt->size[1] = P_tl->size[1];
    emxEnsureCapacity_real_T(sp, cP_tt, i17, &ug_emlrtRTEI);
    loop_ub = P_tl->size[0] * P_tl->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      cP_tt->data[i17] = P_tl->data[i17];
    }

    st.site = &wd_emlrtRSI;
    vec(&st, cP_tt);
    i17 = FmT->size[0] * FmT->size[1];
    FmT->size[0] = cP_tt->size[1];
    FmT->size[1] = cP_tt->size[0];
    emxEnsureCapacity_real_T(sp, FmT, i17, &xg_emlrtRTEI);
    loop_ub = cP_tt->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = cP_tt->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        FmT->data[i18 + FmT->size[0] * i17] = cP_tt->data[i17 + cP_tt->size[0] *
          i18];
      }
    }

    i17 = P_ttm->size[0];
    i18 = idx + 1;
    if (!((i18 >= 1) && (i18 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &id_emlrtBCI, sp);
    }

    loop_ub = P_ttm->size[1];
    i17 = ii->size[0];
    ii->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, ii, i17, &yg_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      ii->data[i17] = i17;
    }

    i17 = FmT->size[0];
    if (!(1 <= i17)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i17, &jd_emlrtBCI, sp);
    }

    b_ds[0] = 1;
    b_ds[1] = ii->size[0];
    loop_ub = FmT->size[1];
    i17 = c_FmT->size[0] * c_FmT->size[1];
    c_FmT->size[0] = 1;
    c_FmT->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, c_FmT, i17, &ch_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      c_FmT->data[c_FmT->size[0] * i17] = FmT->data[FmT->size[0] * i17];
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_FmT[i17] = c_FmT->size[i17];
    }

    emlrtSubAssignSizeCheckR2012b(&b_ds[0], 2, &b_FmT[0], 2, &hb_emlrtECI, sp);
    loop_ub = FmT->size[1] - 1;
    for (i17 = 0; i17 <= loop_ub; i17++) {
      P_ttm->data[idx + P_ttm->size[0] * ii->data[i17]] = FmT->data[FmT->size[0]
        * i17];
    }

    idx++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&c_FmT);
  emxFree_real_T(&r3);
  emxFree_real_T(&Kalgain);
  emxInit_real_T(sp, &Fm, 2, &mf_emlrtRTEI, true);
  st.site = &xd_emlrtRSI;
  *loglikelihood = c_sum(&st, likelihood);

  /* %% Backward recursion */
  i17 = Fm->size[0] * Fm->size[1];
  Fm->size[0] = n_error->size[0];
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &bb_emlrtDCI, sp);
  }

  Fm->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, Fm, i17, &mf_emlrtRTEI);
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &hb_emlrtDCI, sp);
  }

  loop_ub = n_error->size[0] * (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    Fm->data[i17] = 0.0;
  }

  /*  T by km 샘플링된 값들을 저장하는 공간 */
  st.site = &yd_emlrtRSI;
  loop_ub = P_ttm->size[1];
  i17 = P_ttm->size[0];
  maxdimlen = n_error->size[0];
  if (!((maxdimlen >= 1) && (maxdimlen <= i17))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i17, &hd_emlrtBCI, &st);
  }

  i17 = H1->size[0];
  H1->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(&st, H1, i17, &of_emlrtRTEI);
  for (i17 = 0; i17 < loop_ub; i17++) {
    H1->data[i17] = P_ttm->data[(maxdimlen + P_ttm->size[0] * i17) - 1];
  }

  nx = H1->size[0];
  b_st.site = &hg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  c_st.site = &fg_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  maxdimlen = H1->size[0];
  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if ((int32_T)ds > maxdimlen) {
    b_st.site = &gg_emlrtRSI;
    f_error(&b_st);
  }

  if ((int32_T)ds * (int32_T)ds != H1->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &ro_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  km by km 초기값으로 마지막 관측치 */
  b_ds[0] = (int32_T)ds;
  b_ds[1] = (int32_T)ds;
  i17 = c_cP_tt->size[0] * c_cP_tt->size[1];
  c_cP_tt->size[0] = (int32_T)ds;
  c_cP_tt->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, c_cP_tt, i17, &rf_emlrtRTEI);
  loop_ub = (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_loop_ub = (int32_T)ds;
    for (i18 = 0; i18 < b_loop_ub; i18++) {
      c_cP_tt->data[i18 + c_cP_tt->size[0] * i17] = H1->data[i17 + (int32_T)ds *
        i18];
    }
  }

  for (i17 = 0; i17 < 2; i17++) {
    b_cP_tt[i17] = c_cP_tt->size[i17];
  }

  if ((b_ds[0] != b_cP_tt[0]) || (b_ds[1] != b_cP_tt[1])) {
    emlrtSizeEqCheckNDR2012b(&b_ds[0], &b_cP_tt[0], &gb_emlrtECI, sp);
  }

  i17 = c_cP_tt->size[0] * c_cP_tt->size[1];
  c_cP_tt->size[0] = (int32_T)ds;
  c_cP_tt->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, c_cP_tt, i17, &id_emlrtRTEI);
  loop_ub = (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_loop_ub = (int32_T)ds;
    for (i18 = 0; i18 < b_loop_ub; i18++) {
      c_cP_tt->data[i18 + c_cP_tt->size[0] * i17] = (H1->data[i18 + (int32_T)ds *
        i17] + H1->data[i17 + (int32_T)ds * i18]) / 2.0;
    }
  }

  st.site = &ae_emlrtRSI;
  b_cholmod(&st, c_cP_tt, cP_tt);

  /*  km by km */
  loop_ub = f_ttm->size[1];
  i17 = f_ttm->size[0];
  maxdimlen = n_error->size[0];
  if (!((maxdimlen >= 1) && (maxdimlen <= i17))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i17, &fd_emlrtBCI, sp);
  }

  i17 = f_tt->size[0];
  f_tt->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(sp, f_tt, i17, &tf_emlrtRTEI);
  for (i17 = 0; i17 < loop_ub; i17++) {
    f_tt->data[i17] = f_ttm->data[(maxdimlen + f_ttm->size[0] * i17) - 1];
  }

  /*  km by 1 */
  st.site = &be_emlrtRSI;
  randn(&st, ds, b_b);
  st.site = &be_emlrtRSI;
  i17 = a->size[0] * a->size[1];
  a->size[0] = cP_tt->size[1];
  a->size[1] = cP_tt->size[0];
  emxEnsureCapacity_real_T(&st, a, i17, &vf_emlrtRTEI);
  loop_ub = cP_tt->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_loop_ub = cP_tt->size[1];
    for (i18 = 0; i18 < b_loop_ub; i18++) {
      a->data[i18 + a->size[0] * i17] = cP_tt->data[i17 + cP_tt->size[0] * i18];
    }
  }

  b_st.site = &tc_emlrtRSI;
  if (!(a->size[1] == b_b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (b_b->size[0] == 1)) {
    i17 = f_tl->size[0];
    f_tl->size[0] = a->size[0];
    emxEnsureCapacity_real_T1(&st, f_tl, i17, &vf_emlrtRTEI);
    loop_ub = a->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      f_tl->data[i17] = 0.0;
      b_loop_ub = a->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        f_tl->data[i17] += a->data[i17 + a->size[0] * i18] * b_b->data[i18];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (b_b->size[0] == 0)) {
      i17 = f_tl->size[0];
      f_tl->size[0] = a->size[0];
      emxEnsureCapacity_real_T1(&b_st, f_tl, i17, &vf_emlrtRTEI);
      loop_ub = a->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        f_tl->data[i17] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
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
      i17 = f_tl->size[0];
      f_tl->size[0] = a->size[0];
      emxEnsureCapacity_real_T1(&c_st, f_tl, i17, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b_b->data[0], &ldb_t, &beta1, &f_tl->data[0], &ldc_t);
    }
  }

  i17 = f_tt->size[0];
  i18 = f_tl->size[0];
  if (i17 != i18) {
    emlrtSizeEqCheck1DR2012b(i17, i18, &eb_emlrtECI, sp);
  }

  i17 = f_tt->size[0];
  emxEnsureCapacity_real_T1(sp, f_tt, i17, &xf_emlrtRTEI);
  loop_ub = f_tt->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    f_tt->data[i17] += f_tl->data[i17];
  }

  /*  km by 1 */
  maxdimlen = n_error->size[0];
  i17 = n_error->size[0];
  if (!((i17 >= 1) && (i17 <= maxdimlen))) {
    emlrtDynamicBoundsCheckR2012b(i17, 1, maxdimlen, &cd_emlrtBCI, sp);
  }

  i17 = ii->size[0];
  ii->size[0] = (int32_T)ds;
  emxEnsureCapacity_int32_T(sp, ii, i17, &yf_emlrtRTEI);
  loop_ub = (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    ii->data[i17] = i17;
  }

  b_ds[0] = 1;
  b_ds[1] = ii->size[0];
  b_cP_tt[0] = 1;
  b_cP_tt[1] = f_tt->size[0];
  emlrtSubAssignSizeCheckR2012b(&b_ds[0], 2, &b_cP_tt[0], 2, &bb_emlrtECI, sp);
  maxdimlen = n_error->size[0];
  loop_ub = f_tt->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    Fm->data[(maxdimlen + Fm->size[0] * ii->data[i17]) - 1] = f_tt->data[i17];
  }

  /*  1 by by km 마지막 기의 은닉인자를 sampling */
  idx = n_error->size[0] - 1;

  /*   time index */
  while (idx >= 1) {
    loop_ub = f_ttm->size[1];
    i17 = f_ttm->size[0];
    if (!(idx <= i17)) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, i17, &ed_emlrtBCI, sp);
    }

    i17 = f_tt->size[0];
    f_tt->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(sp, f_tt, i17, &bg_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      f_tt->data[i17] = f_ttm->data[(idx + f_ttm->size[0] * i17) - 1];
    }

    /*  km3 by 1 */
    st.site = &ce_emlrtRSI;
    loop_ub = P_ttm->size[1];
    i17 = P_ttm->size[0];
    if (!(idx <= i17)) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, i17, &dd_emlrtBCI, &st);
    }

    i17 = H1->size[0];
    H1->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(&st, H1, i17, &eg_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      H1->data[i17] = P_ttm->data[(idx + P_ttm->size[0] * i17) - 1];
    }

    nx = H1->size[0];
    b_st.site = &hg_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    assertValidSizeArg(&c_st, ds);
    c_st.site = &fg_emlrtRSI;
    assertValidSizeArg(&c_st, ds);
    maxdimlen = H1->size[0];
    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ds > maxdimlen) {
      b_st.site = &gg_emlrtRSI;
      f_error(&b_st);
    }

    if ((int32_T)ds * (int32_T)ds != H1->size[0]) {
      emlrtErrorWithMessageIdR2018a(&st, &ro_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    i17 = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = (int32_T)ds;
    P_tl->size[1] = (int32_T)ds;
    emxEnsureCapacity_real_T(&st, P_tl, i17, &ig_emlrtRTEI);
    loop_ub = (int32_T)ds * (int32_T)ds;
    for (i17 = 0; i17 < loop_ub; i17++) {
      P_tl->data[i17] = H1->data[i17];
    }

    /*  km3 by km3 */
    st.site = &de_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(F->size[1] == (int32_T)ds)) {
      if (((F->size[0] == 1) && (F->size[1] == 1)) || ((int32_T)ds == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((F->size[1] == 1) || ((int32_T)ds == 1)) {
      i17 = a->size[0] * a->size[1];
      a->size[0] = F->size[0];
      a->size[1] = (int32_T)ds;
      emxEnsureCapacity_real_T(&st, a, i17, &mg_emlrtRTEI);
      loop_ub = F->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = (int32_T)ds;
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          a->data[i17 + a->size[0] * i18] = 0.0;
          nx = F->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            a->data[i17 + a->size[0] * i18] += F->data[i17 + F->size[0] * i19] *
              H1->data[i19 + (int32_T)ds * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((F->size[0] == 0) || (F->size[1] == 0) || ((int32_T)ds == 0) ||
          ((int32_T)ds == 0)) {
        i17 = a->size[0] * a->size[1];
        a->size[0] = F->size[0];
        a->size[1] = (int32_T)ds;
        emxEnsureCapacity_real_T(&b_st, a, i17, &mg_emlrtRTEI);
        loop_ub = F->size[0] * (int32_T)ds;
        for (i17 = 0; i17 < loop_ub; i17++) {
          a->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)F->size[0];
        n_t = (ptrdiff_t)(int32_T)ds;
        k_t = (ptrdiff_t)F->size[1];
        lda_t = (ptrdiff_t)F->size[0];
        ldb_t = (ptrdiff_t)F->size[1];
        ldc_t = (ptrdiff_t)F->size[0];
        i17 = a->size[0] * a->size[1];
        a->size[0] = F->size[0];
        a->size[1] = (int32_T)ds;
        emxEnsureCapacity_real_T(&c_st, a, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &F->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    st.site = &de_emlrtRSI;
    i17 = b->size[0] * b->size[1];
    b->size[0] = F->size[1];
    b->size[1] = F->size[0];
    emxEnsureCapacity_real_T(&st, b, i17, &og_emlrtRTEI);
    loop_ub = F->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = F->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        b->data[i18 + b->size[0] * i17] = F->data[i17 + F->size[0] * i18];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == b->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
           (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      i17 = FmT->size[0] * FmT->size[1];
      FmT->size[0] = a->size[0];
      FmT->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&st, FmT, i17, &mg_emlrtRTEI);
      loop_ub = a->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = b->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          FmT->data[i17 + FmT->size[0] * i18] = 0.0;
          nx = a->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            FmT->data[i17 + FmT->size[0] * i18] += a->data[i17 + a->size[0] *
              i19] * b->data[i19 + b->size[0] * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (b->size[0] == 0) ||
          (b->size[1] == 0)) {
        i17 = FmT->size[0] * FmT->size[1];
        FmT->size[0] = a->size[0];
        FmT->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&b_st, FmT, i17, &mg_emlrtRTEI);
        loop_ub = a->size[0] * b->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          FmT->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i17 = FmT->size[0] * FmT->size[1];
        FmT->size[0] = a->size[0];
        FmT->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&c_st, FmT, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &FmT->data[0], &ldc_t);
      }
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_FmT[i17] = FmT->size[i17];
      b_cP_tt[i17] = Sigma->size[i17];
    }

    if ((b_FmT[0] != b_cP_tt[0]) || (b_FmT[1] != b_cP_tt[1])) {
      emlrtSizeEqCheckNDR2012b(&b_FmT[0], &b_cP_tt[0], &db_emlrtECI, sp);
    }

    loop_ub = FmT->size[0] * FmT->size[1] - 1;
    i17 = FmT->size[0] * FmT->size[1];
    emxEnsureCapacity_real_T(sp, FmT, i17, &sg_emlrtRTEI);
    for (i17 = 0; i17 <= loop_ub; i17++) {
      FmT->data[i17] += Sigma->data[i17];
    }

    /*  km by km */
    for (i17 = 0; i17 < 2; i17++) {
      b_FmT[i17] = FmT->size[i17];
    }

    i17 = c_cP_tt->size[0] * c_cP_tt->size[1];
    c_cP_tt->size[0] = FmT->size[1];
    c_cP_tt->size[1] = FmT->size[0];
    emxEnsureCapacity_real_T(sp, c_cP_tt, i17, &vg_emlrtRTEI);
    loop_ub = FmT->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = FmT->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        c_cP_tt->data[i18 + c_cP_tt->size[0] * i17] = FmT->data[i17 + FmT->size
          [0] * i18];
      }
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_cP_tt[i17] = c_cP_tt->size[i17];
    }

    if ((b_FmT[0] != b_cP_tt[0]) || (b_FmT[1] != b_cP_tt[1])) {
      emlrtSizeEqCheckNDR2012b(&b_FmT[0], &b_cP_tt[0], &cb_emlrtECI, sp);
    }

    i17 = c_cP_tt->size[0] * c_cP_tt->size[1];
    c_cP_tt->size[0] = FmT->size[0];
    c_cP_tt->size[1] = FmT->size[1];
    emxEnsureCapacity_real_T(sp, c_cP_tt, i17, &ah_emlrtRTEI);
    loop_ub = FmT->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = FmT->size[0];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        c_cP_tt->data[i18 + c_cP_tt->size[0] * i17] = 0.5 * (FmT->data[i18 +
          FmT->size[0] * i17] + FmT->data[i17 + FmT->size[0] * i18]);
      }
    }

    st.site = &ee_emlrtRSI;
    invpd(&st, c_cP_tt, cP_tt);

    /*  km by km */
    loop_ub = Fm->size[1];
    i17 = Fm->size[0];
    if (!((idx + 1 >= 1) && (idx + 1 <= i17))) {
      emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i17, &bd_emlrtBCI, sp);
    }

    maxdimlen = idx + 1;
    i17 = likelihood->size[0];
    likelihood->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(sp, likelihood, i17, &bh_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      likelihood->data[i17] = Fm->data[(maxdimlen + Fm->size[0] * i17) - 1];
    }

    st.site = &fe_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(F->size[1] == f_tt->size[0])) {
      if (((F->size[0] == 1) && (F->size[1] == 1)) || (f_tt->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((F->size[1] == 1) || (f_tt->size[0] == 1)) {
      i17 = f_tl->size[0];
      f_tl->size[0] = F->size[0];
      emxEnsureCapacity_real_T1(&st, f_tl, i17, &dh_emlrtRTEI);
      loop_ub = F->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        f_tl->data[i17] = 0.0;
        b_loop_ub = F->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          f_tl->data[i17] += F->data[i17 + F->size[0] * i18] * f_tt->data[i18];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((F->size[0] == 0) || (F->size[1] == 0) || (f_tt->size[0] == 0)) {
        i17 = f_tl->size[0];
        f_tl->size[0] = F->size[0];
        emxEnsureCapacity_real_T1(&b_st, f_tl, i17, &dh_emlrtRTEI);
        loop_ub = F->size[0];
        for (i17 = 0; i17 < loop_ub; i17++) {
          f_tl->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)F->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)F->size[1];
        lda_t = (ptrdiff_t)F->size[0];
        ldb_t = (ptrdiff_t)F->size[1];
        ldc_t = (ptrdiff_t)F->size[0];
        i17 = f_tl->size[0];
        f_tl->size[0] = F->size[0];
        emxEnsureCapacity_real_T1(&c_st, f_tl, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &F->data[0], &lda_t,
              &f_tt->data[0], &ldb_t, &beta1, &f_tl->data[0], &ldc_t);
      }
    }

    i17 = likelihood->size[0];
    i18 = f_tl->size[0];
    if (i17 != i18) {
      emlrtSizeEqCheck1DR2012b(i17, i18, &ab_emlrtECI, sp);
    }

    i17 = likelihood->size[0];
    emxEnsureCapacity_real_T1(sp, likelihood, i17, &eh_emlrtRTEI);
    loop_ub = likelihood->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      likelihood->data[i17] -= f_tl->data[i17];
    }

    /*  km by 1 */
    st.site = &ge_emlrtRSI;
    i17 = b->size[0] * b->size[1];
    b->size[0] = F->size[1];
    b->size[1] = F->size[0];
    emxEnsureCapacity_real_T(&st, b, i17, &gh_emlrtRTEI);
    loop_ub = F->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = F->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        b->data[i18 + b->size[0] * i17] = F->data[i17 + F->size[0] * i18];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!((int32_T)ds == b->size[0])) {
      if (((int32_T)ds == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if (((int32_T)ds == 1) || (b->size[0] == 1)) {
      i17 = a->size[0] * a->size[1];
      a->size[0] = (int32_T)ds;
      a->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&st, a, i17, &hh_emlrtRTEI);
      loop_ub = (int32_T)ds;
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = b->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          a->data[i17 + a->size[0] * i18] = 0.0;
          nx = (int32_T)ds;
          for (i19 = 0; i19 < nx; i19++) {
            a->data[i17 + a->size[0] * i18] += H1->data[i17 + (int32_T)ds * i19]
              * b->data[i19 + b->size[0] * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if (((int32_T)ds == 0) || (b->size[0] == 0) || (b->size[1] == 0)) {
        i17 = a->size[0] * a->size[1];
        a->size[0] = (int32_T)ds;
        a->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&b_st, a, i17, &hh_emlrtRTEI);
        loop_ub = (int32_T)ds * b->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          a->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)(int32_T)ds;
        n_t = (ptrdiff_t)b->size[1];
        k_t = (ptrdiff_t)(int32_T)ds;
        lda_t = (ptrdiff_t)(int32_T)ds;
        ldb_t = (ptrdiff_t)(int32_T)ds;
        ldc_t = (ptrdiff_t)(int32_T)ds;
        i17 = a->size[0] * a->size[1];
        a->size[0] = (int32_T)ds;
        a->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&c_st, a, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &P_tl->data[0],
              &lda_t, &b->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    st.site = &ge_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == cP_tt->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((cP_tt->size[0] == 1) &&
           (cP_tt->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (cP_tt->size[0] == 1)) {
      i17 = FmT->size[0] * FmT->size[1];
      FmT->size[0] = a->size[0];
      FmT->size[1] = cP_tt->size[1];
      emxEnsureCapacity_real_T(&st, FmT, i17, &lh_emlrtRTEI);
      loop_ub = a->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = cP_tt->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          FmT->data[i17 + FmT->size[0] * i18] = 0.0;
          nx = a->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            FmT->data[i17 + FmT->size[0] * i18] += a->data[i17 + a->size[0] *
              i19] * cP_tt->data[i19 + cP_tt->size[0] * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (cP_tt->size[0] == 0) ||
          (cP_tt->size[1] == 0)) {
        i17 = FmT->size[0] * FmT->size[1];
        FmT->size[0] = a->size[0];
        FmT->size[1] = cP_tt->size[1];
        emxEnsureCapacity_real_T(&b_st, FmT, i17, &lh_emlrtRTEI);
        loop_ub = a->size[0] * cP_tt->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          FmT->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i17 = FmT->size[0] * FmT->size[1];
        FmT->size[0] = a->size[0];
        FmT->size[1] = cP_tt->size[1];
        emxEnsureCapacity_real_T(&c_st, FmT, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &cP_tt->data[0], &ldb_t, &beta1, &FmT->data[0], &ldc_t);
      }
    }

    /*  km3 by km */
    st.site = &he_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(FmT->size[1] == likelihood->size[0])) {
      if (((FmT->size[0] == 1) && (FmT->size[1] == 1)) || (likelihood->size[0] ==
           1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((FmT->size[1] == 1) || (likelihood->size[0] == 1)) {
      i17 = f_tl->size[0];
      f_tl->size[0] = FmT->size[0];
      emxEnsureCapacity_real_T1(&st, f_tl, i17, &nh_emlrtRTEI);
      loop_ub = FmT->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        f_tl->data[i17] = 0.0;
        b_loop_ub = FmT->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          f_tl->data[i17] += FmT->data[i17 + FmT->size[0] * i18] *
            likelihood->data[i18];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((FmT->size[0] == 0) || (FmT->size[1] == 0) || (likelihood->size[0] ==
           0)) {
        i17 = f_tl->size[0];
        f_tl->size[0] = FmT->size[0];
        emxEnsureCapacity_real_T1(&b_st, f_tl, i17, &nh_emlrtRTEI);
        loop_ub = FmT->size[0];
        for (i17 = 0; i17 < loop_ub; i17++) {
          f_tl->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)FmT->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)FmT->size[1];
        lda_t = (ptrdiff_t)FmT->size[0];
        ldb_t = (ptrdiff_t)FmT->size[1];
        ldc_t = (ptrdiff_t)FmT->size[0];
        i17 = f_tl->size[0];
        f_tl->size[0] = FmT->size[0];
        emxEnsureCapacity_real_T1(&c_st, f_tl, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &FmT->data[0], &lda_t,
              &likelihood->data[0], &ldb_t, &beta1, &f_tl->data[0], &ldc_t);
      }
    }

    i17 = f_tt->size[0];
    i18 = f_tl->size[0];
    if (i17 != i18) {
      emlrtSizeEqCheck1DR2012b(i17, i18, &y_emlrtECI, sp);
    }

    i17 = f_tt->size[0];
    emxEnsureCapacity_real_T1(sp, f_tt, i17, &ph_emlrtRTEI);
    loop_ub = f_tt->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      f_tt->data[i17] += f_tl->data[i17];
    }

    /*  km3 by 1 */
    st.site = &ie_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(FmT->size[1] == F->size[0])) {
      if (((FmT->size[0] == 1) && (FmT->size[1] == 1)) || ((F->size[0] == 1) &&
           (F->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((FmT->size[1] == 1) || (F->size[0] == 1)) {
      i17 = a->size[0] * a->size[1];
      a->size[0] = FmT->size[0];
      a->size[1] = F->size[1];
      emxEnsureCapacity_real_T(&st, a, i17, &rh_emlrtRTEI);
      loop_ub = FmT->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = F->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          a->data[i17 + a->size[0] * i18] = 0.0;
          nx = FmT->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            a->data[i17 + a->size[0] * i18] += FmT->data[i17 + FmT->size[0] *
              i19] * F->data[i19 + F->size[0] * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((FmT->size[0] == 0) || (FmT->size[1] == 0) || (F->size[0] == 0) ||
          (F->size[1] == 0)) {
        i17 = a->size[0] * a->size[1];
        a->size[0] = FmT->size[0];
        a->size[1] = F->size[1];
        emxEnsureCapacity_real_T(&b_st, a, i17, &rh_emlrtRTEI);
        loop_ub = FmT->size[0] * F->size[1];
        for (i17 = 0; i17 < loop_ub; i17++) {
          a->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)FmT->size[0];
        n_t = (ptrdiff_t)F->size[1];
        k_t = (ptrdiff_t)FmT->size[1];
        lda_t = (ptrdiff_t)FmT->size[0];
        ldb_t = (ptrdiff_t)FmT->size[1];
        ldc_t = (ptrdiff_t)FmT->size[0];
        i17 = a->size[0] * a->size[1];
        a->size[0] = FmT->size[0];
        a->size[1] = F->size[1];
        emxEnsureCapacity_real_T(&c_st, a, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &FmT->data[0], &lda_t,
              &F->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
      }
    }

    st.site = &ie_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == (int32_T)ds)) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || ((int32_T)ds == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || ((int32_T)ds == 1)) {
      i17 = FmT->size[0] * FmT->size[1];
      FmT->size[0] = a->size[0];
      FmT->size[1] = (int32_T)ds;
      emxEnsureCapacity_real_T(&st, FmT, i17, &th_emlrtRTEI);
      loop_ub = a->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        b_loop_ub = (int32_T)ds;
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          FmT->data[i17 + FmT->size[0] * i18] = 0.0;
          nx = a->size[1];
          for (i19 = 0; i19 < nx; i19++) {
            FmT->data[i17 + FmT->size[0] * i18] += a->data[i17 + a->size[0] *
              i19] * H1->data[i19 + (int32_T)ds * i18];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || ((int32_T)ds == 0) ||
          ((int32_T)ds == 0)) {
        i17 = FmT->size[0] * FmT->size[1];
        FmT->size[0] = a->size[0];
        FmT->size[1] = (int32_T)ds;
        emxEnsureCapacity_real_T(&b_st, FmT, i17, &th_emlrtRTEI);
        loop_ub = a->size[0] * (int32_T)ds;
        for (i17 = 0; i17 < loop_ub; i17++) {
          FmT->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)a->size[0];
        n_t = (ptrdiff_t)(int32_T)ds;
        k_t = (ptrdiff_t)a->size[1];
        lda_t = (ptrdiff_t)a->size[0];
        ldb_t = (ptrdiff_t)a->size[1];
        ldc_t = (ptrdiff_t)a->size[0];
        i17 = FmT->size[0] * FmT->size[1];
        FmT->size[0] = a->size[0];
        FmT->size[1] = (int32_T)ds;
        emxEnsureCapacity_real_T(&c_st, FmT, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &P_tl->data[0], &ldb_t, &beta1, &FmT->data[0], &ldc_t);
      }
    }

    /*  km3 by km3 */
    b_ds[0] = (int32_T)ds;
    b_ds[1] = (int32_T)ds;
    for (i17 = 0; i17 < 2; i17++) {
      b_FmT[i17] = FmT->size[i17];
    }

    if ((b_ds[0] != b_FmT[0]) || (b_ds[1] != b_FmT[1])) {
      emlrtSizeEqCheckNDR2012b(&b_ds[0], &b_FmT[0], &x_emlrtECI, sp);
    }

    loop_ub = (int32_T)ds * (int32_T)ds - 1;
    i17 = FmT->size[0] * FmT->size[1];
    FmT->size[0] = (int32_T)ds;
    FmT->size[1] = (int32_T)ds;
    emxEnsureCapacity_real_T(sp, FmT, i17, &wh_emlrtRTEI);
    for (i17 = 0; i17 <= loop_ub; i17++) {
      FmT->data[i17] = H1->data[i17] - FmT->data[i17];
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_FmT[i17] = FmT->size[i17];
    }

    i17 = c_cP_tt->size[0] * c_cP_tt->size[1];
    c_cP_tt->size[0] = FmT->size[1];
    c_cP_tt->size[1] = FmT->size[0];
    emxEnsureCapacity_real_T(sp, c_cP_tt, i17, &yh_emlrtRTEI);
    loop_ub = FmT->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = FmT->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        c_cP_tt->data[i18 + c_cP_tt->size[0] * i17] = FmT->data[i17 + FmT->size
          [0] * i18];
      }
    }

    for (i17 = 0; i17 < 2; i17++) {
      b_cP_tt[i17] = c_cP_tt->size[i17];
    }

    if ((b_FmT[0] != b_cP_tt[0]) || (b_FmT[1] != b_cP_tt[1])) {
      emlrtSizeEqCheckNDR2012b(&b_FmT[0], &b_cP_tt[0], &w_emlrtECI, sp);
    }

    i17 = c_cP_tt->size[0] * c_cP_tt->size[1];
    c_cP_tt->size[0] = FmT->size[0];
    c_cP_tt->size[1] = FmT->size[1];
    emxEnsureCapacity_real_T(sp, c_cP_tt, i17, &id_emlrtRTEI);
    loop_ub = FmT->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = FmT->size[0];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        c_cP_tt->data[i18 + c_cP_tt->size[0] * i17] = (FmT->data[i18 + FmT->
          size[0] * i17] + FmT->data[i17 + FmT->size[0] * i18]) / 2.0;
      }
    }

    st.site = &je_emlrtRSI;
    b_cholmod(&st, c_cP_tt, FmT);
    st.site = &ke_emlrtRSI;
    randn(&st, ds, b_b);
    st.site = &ke_emlrtRSI;
    i17 = a->size[0] * a->size[1];
    a->size[0] = FmT->size[1];
    a->size[1] = FmT->size[0];
    emxEnsureCapacity_real_T(&st, a, i17, &ci_emlrtRTEI);
    loop_ub = FmT->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      b_loop_ub = FmT->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        a->data[i18 + a->size[0] * i17] = FmT->data[i17 + FmT->size[0] * i18];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == b_b->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (b_b->size[0] == 1)) {
      i17 = f_tl->size[0];
      f_tl->size[0] = a->size[0];
      emxEnsureCapacity_real_T1(&st, f_tl, i17, &ci_emlrtRTEI);
      loop_ub = a->size[0];
      for (i17 = 0; i17 < loop_ub; i17++) {
        f_tl->data[i17] = 0.0;
        b_loop_ub = a->size[1];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          f_tl->data[i17] += a->data[i17 + a->size[0] * i18] * b_b->data[i18];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (b_b->size[0] == 0)) {
        i17 = f_tl->size[0];
        f_tl->size[0] = a->size[0];
        emxEnsureCapacity_real_T1(&b_st, f_tl, i17, &ci_emlrtRTEI);
        loop_ub = a->size[0];
        for (i17 = 0; i17 < loop_ub; i17++) {
          f_tl->data[i17] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i17 = f_tl->size[0];
        f_tl->size[0] = a->size[0];
        emxEnsureCapacity_real_T1(&c_st, f_tl, i17, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
              &b_b->data[0], &ldb_t, &beta1, &f_tl->data[0], &ldc_t);
      }
    }

    i17 = f_tt->size[0];
    i18 = f_tl->size[0];
    if (i17 != i18) {
      emlrtSizeEqCheck1DR2012b(i17, i18, &v_emlrtECI, sp);
    }

    i17 = f_tt->size[0];
    emxEnsureCapacity_real_T1(sp, f_tt, i17, &di_emlrtRTEI);
    loop_ub = f_tt->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      f_tt->data[i17] += f_tl->data[i17];
    }

    i17 = Fm->size[0];
    if (!(idx <= i17)) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, i17, &ad_emlrtBCI, sp);
    }

    loop_ub = Fm->size[1];
    i17 = ii->size[0];
    ii->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, ii, i17, &ei_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      ii->data[i17] = i17;
    }

    b_ds[0] = 1;
    b_ds[1] = ii->size[0];
    b_cP_tt[0] = 1;
    b_cP_tt[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_ds[0], 2, &b_cP_tt[0], 2, &u_emlrtECI, sp);
    loop_ub = f_tt->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      Fm->data[(idx + Fm->size[0] * ii->data[i17]) - 1] = f_tt->data[i17];
    }

    /*  1 by by km */
    idx--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&c_cP_tt);
  emxFree_real_T(&a);
  emxFree_real_T(&P_tl);
  emxFree_real_T(&f_tl);
  emxFree_real_T(&P_ttm);
  emxFree_real_T(&f_ttm);
  emxFree_real_T(&Sigma);
  i17 = b_idx->size[0] * b_idx->size[1];
  b_idx->size[0] = 1;
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &cb_emlrtDCI, sp);
  }

  b_idx->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, b_idx, i17, &ag_emlrtRTEI);
  if (ds != (int32_T)muDoubleScalarFloor(ds)) {
    emlrtIntegerCheckR2012b(ds, &ib_emlrtDCI, sp);
  }

  loop_ub = (int32_T)ds;
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_idx->data[i17] = 0.0;
  }

  b_idx->data[0] = 1.0;
  i17 = FmT->size[0] * FmT->size[1];
  FmT->size[0] = Fm->size[1];
  FmT->size[1] = Fm->size[0];
  emxEnsureCapacity_real_T(sp, FmT, i17, &dg_emlrtRTEI);
  loop_ub = Fm->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    b_loop_ub = Fm->size[1];
    for (i18 = 0; i18 < b_loop_ub; i18++) {
      FmT->data[i18 + FmT->size[0] * i17] = Fm->data[i17 + Fm->size[0] * i18];
    }
  }

  if (2 > FmT->size[1]) {
    i17 = 0;
    i19 = 0;
  } else {
    i17 = 1;
    i18 = FmT->size[1];
    i19 = FmT->size[1];
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &yc_emlrtBCI, sp);
    }
  }

  if (1 > FmT->size[1] - 1) {
    loop_ub = 0;
  } else {
    i18 = FmT->size[1];
    if (!(1 <= i18)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i18, &xc_emlrtBCI, sp);
    }

    i18 = FmT->size[1];
    loop_ub = FmT->size[1] - 1;
    if (!((loop_ub >= 1) && (loop_ub <= i18))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i18, &wc_emlrtBCI, sp);
    }
  }

  st.site = &le_emlrtRSI;
  b_loop_ub = FmT->size[0];
  i18 = b->size[0] * b->size[1];
  b->size[0] = b_loop_ub;
  b->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, b, i18, &gg_emlrtRTEI);
  for (i18 = 0; i18 < loop_ub; i18++) {
    for (maxdimlen = 0; maxdimlen < b_loop_ub; maxdimlen++) {
      b->data[maxdimlen + b->size[0] * i18] = FmT->data[maxdimlen + FmT->size[0]
        * i18];
    }
  }

  b_st.site = &tc_emlrtRSI;
  i18 = FmT->size[0];
  if (!(F->size[1] == i18)) {
    guard1 = false;
    if ((F->size[0] == 1) && (F->size[1] == 1)) {
      guard1 = true;
    } else {
      i18 = FmT->size[0];
      if ((i18 == 1) && (loop_ub == 1)) {
        guard1 = true;
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if (guard1) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    }
  }

  guard1 = false;
  if (F->size[1] == 1) {
    guard1 = true;
  } else {
    i18 = FmT->size[0];
    if (i18 == 1) {
      guard1 = true;
    } else {
      b_st.site = &sc_emlrtRSI;
      guard2 = false;
      if ((F->size[0] == 0) || (F->size[1] == 0)) {
        guard2 = true;
      } else {
        i18 = FmT->size[0];
        if ((i18 == 0) || (loop_ub == 0)) {
          guard2 = true;
        } else {
          c_st.site = &yc_emlrtRSI;
          c_st.site = &ad_emlrtRSI;
          TRANSA = 'N';
          TRANSB = 'N';
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)F->size[0];
          n_t = (ptrdiff_t)loop_ub;
          k_t = (ptrdiff_t)F->size[1];
          lda_t = (ptrdiff_t)F->size[0];
          ldb_t = (ptrdiff_t)F->size[1];
          ldc_t = (ptrdiff_t)F->size[0];
          i18 = cP_tt->size[0] * cP_tt->size[1];
          cP_tt->size[0] = F->size[0];
          cP_tt->size[1] = loop_ub;
          emxEnsureCapacity_real_T(&c_st, cP_tt, i18, &j_emlrtRTEI);
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &F->data[0], &lda_t,
                &b->data[0], &ldb_t, &beta1, &cP_tt->data[0], &ldc_t);
        }
      }

      if (guard2) {
        i18 = cP_tt->size[0] * cP_tt->size[1];
        cP_tt->size[0] = F->size[0];
        cP_tt->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&b_st, cP_tt, i18, &kg_emlrtRTEI);
        loop_ub *= F->size[0];
        for (i18 = 0; i18 < loop_ub; i18++) {
          cP_tt->data[i18] = 0.0;
        }
      }
    }
  }

  if (guard1) {
    i18 = cP_tt->size[0] * cP_tt->size[1];
    cP_tt->size[0] = F->size[0];
    cP_tt->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, cP_tt, i18, &kg_emlrtRTEI);
    loop_ub = F->size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_loop_ub = b->size[1];
      for (maxdimlen = 0; maxdimlen < b_loop_ub; maxdimlen++) {
        cP_tt->data[i18 + cP_tt->size[0] * maxdimlen] = 0.0;
        nx = F->size[1];
        for (idx = 0; idx < nx; idx++) {
          cP_tt->data[i18 + cP_tt->size[0] * maxdimlen] += F->data[i18 + F->
            size[0] * idx] * b->data[idx + b->size[0] * maxdimlen];
        }
      }
    }
  }

  emxFree_real_T(&F);
  i18 = FmT->size[0];
  b_ds[0] = i18;
  b_ds[1] = i19 - i17;
  for (i18 = 0; i18 < 2; i18++) {
    b_cP_tt[i18] = cP_tt->size[i18];
  }

  if ((b_ds[0] != b_cP_tt[0]) || (b_ds[1] != b_cP_tt[1])) {
    emlrtSizeEqCheckNDR2012b(&b_ds[0], &b_cP_tt[0], &t_emlrtECI, sp);
  }

  st.site = &le_emlrtRSI;
  loop_ub = FmT->size[0];
  i18 = b->size[0] * b->size[1];
  b->size[0] = loop_ub;
  b->size[1] = i19 - i17;
  emxEnsureCapacity_real_T(&st, b, i18, &ng_emlrtRTEI);
  b_loop_ub = i19 - i17;
  for (i18 = 0; i18 < b_loop_ub; i18++) {
    for (i19 = 0; i19 < loop_ub; i19++) {
      b->data[i19 + b->size[0] * i18] = FmT->data[i19 + FmT->size[0] * (i17 +
        i18)] - cP_tt->data[i19 + cP_tt->size[0] * i18];
    }
  }

  emxFree_real_T(&FmT);
  emxFree_real_T(&cP_tt);
  b_st.site = &tc_emlrtRSI;
  if (!((int32_T)ds == b->size[0])) {
    if (((int32_T)ds == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if (((int32_T)ds == 1) || (b->size[0] == 1)) {
    i17 = TX->size[0] * TX->size[1];
    TX->size[0] = 1;
    TX->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, TX, i17, &tb_emlrtRTEI);
    loop_ub = b->size[1];
    for (i17 = 0; i17 < loop_ub; i17++) {
      TX->data[TX->size[0] * i17] = 0.0;
      b_loop_ub = b_idx->size[1];
      for (i18 = 0; i18 < b_loop_ub; i18++) {
        TX->data[TX->size[0] * i17] += b_idx->data[b_idx->size[0] * i18] *
          b->data[i18 + b->size[0] * i17];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if (((int32_T)ds == 0) || (b->size[0] == 0) || (b->size[1] == 0)) {
      i17 = TX->size[0] * TX->size[1];
      TX->size[0] = 1;
      TX->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&b_st, TX, i17, &xb_emlrtRTEI);
      loop_ub = b->size[1];
      for (i17 = 0; i17 < loop_ub; i17++) {
        TX->data[i17] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)(int32_T)ds;
      lda_t = (ptrdiff_t)1;
      ldb_t = (ptrdiff_t)(int32_T)ds;
      ldc_t = (ptrdiff_t)1;
      i17 = TX->size[0] * TX->size[1];
      TX->size[0] = 1;
      TX->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, TX, i17, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_idx->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &TX->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b);
  i17 = Fm->size[0];
  if (!(1 <= i17)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i17, &vc_emlrtBCI, sp);
  }

  loop_ub = Fm->size[1];
  i17 = H1->size[0];
  H1->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(sp, H1, i17, &rg_emlrtRTEI);
  for (i17 = 0; i17 < loop_ub; i17++) {
    H1->data[i17] = Fm->data[Fm->size[0] * i17];
  }

  emxFree_real_T(&Fm);
  if (1 > upper_F->size[1] - 1) {
    loop_ub = 0;
  } else {
    i17 = upper_F->size[1];
    loop_ub = upper_F->size[1] - 1;
    if (!((loop_ub >= 1) && (loop_ub <= i17))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i17, &uc_emlrtBCI, sp);
    }
  }

  if (2 > H1->size[0]) {
    i17 = 0;
    i19 = 0;
  } else {
    i17 = 1;
    i18 = H1->size[0];
    i19 = H1->size[0];
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &tc_emlrtBCI, sp);
    }
  }

  st.site = &me_emlrtRSI;
  i18 = b_idx->size[0] * b_idx->size[1];
  b_idx->size[0] = 1;
  b_idx->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_idx, i18, &tg_emlrtRTEI);
  for (i18 = 0; i18 < loop_ub; i18++) {
    b_idx->data[b_idx->size[0] * i18] = upper_F->data[upper_F->size[0] * i18];
  }

  i18 = b_b->size[0];
  b_b->size[0] = i19 - i17;
  emxEnsureCapacity_real_T1(&st, b_b, i18, &wg_emlrtRTEI);
  b_loop_ub = i19 - i17;
  for (i18 = 0; i18 < b_loop_ub; i18++) {
    b_b->data[i18] = H1->data[i17 + i18];
  }

  b_st.site = &tc_emlrtRSI;
  if (!(loop_ub == i19 - i17)) {
    if ((loop_ub == 1) || (i19 - i17 == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((loop_ub == 1) || (i19 - i17 == 1)) {
    h_1_ds = 0.0;
    for (i17 = 0; i17 < b_idx->size[1]; i17++) {
      h_1_ds += b_idx->data[b_idx->size[0] * i17] * b_b->data[i17];
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    if (loop_ub < 1) {
      h_1_ds = 0.0;
    } else {
      n_t = (ptrdiff_t)loop_ub;
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      h_1_ds = ddot(&n_t, &b_idx->data[0], &m_t, &b_b->data[0], &k_t);
    }
  }

  emxFree_real_T(&b_idx);
  i17 = upper_F->size[1];
  i18 = upper_F->size[1];
  if (!((i18 >= 1) && (i18 <= i17))) {
    emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &sc_emlrtBCI, sp);
  }

  st.site = &ne_emlrtRSI;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &cd_emlrtRSI;
  alpha1 = 1.0 / (1.0 / sig2 * (upper_F->data[upper_F->size[0] * (upper_F->size
    [1] - 1)] * upper_F->data[upper_F->size[0] * (upper_F->size[1] - 1)]) + 1.0 /
                  x->data[0]);
  beta1 = alpha1;
  st.site = &oe_emlrtRSI;
  b_sqrt(&st, &beta1);
  st.site = &oe_emlrtRSI;
  h_1_ds = alpha1 * (1.0 / sig2 * upper_F->data[upper_F->size[0] *
                     (upper_F->size[1] - 1)] * (H1->data[0] - h_1_ds)) + beta1 *
    b_randn();
  emxFree_real_T(&x);
  if (2 > H1->size[0]) {
    i17 = 0;
    i19 = 0;
  } else {
    i17 = 1;
    i18 = H1->size[0];
    i19 = H1->size[0];
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &rc_emlrtBCI, sp);
    }
  }

  st.site = &pe_emlrtRSI;
  i18 = b_b->size[0];
  b_b->size[0] = (i19 - i17) + 1;
  emxEnsureCapacity_real_T1(&st, b_b, i18, &fh_emlrtRTEI);
  loop_ub = i19 - i17;
  for (i18 = 0; i18 < loop_ub; i18++) {
    b_b->data[i18] = H1->data[i17 + i18];
  }

  b_b->data[i19 - i17] = h_1_ds;
  b_st.site = &tc_emlrtRSI;
  if (!(upper_F->size[1] == b_b->size[0])) {
    if ((upper_F->size[1] == 1) || (b_b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((upper_F->size[1] == 1) || (b_b->size[0] == 1)) {
    h_1_ds = 0.0;
    for (i17 = 0; i17 < upper_F->size[1]; i17++) {
      h_1_ds += upper_F->data[upper_F->size[0] * i17] * b_b->data[i17];
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    n_t = (ptrdiff_t)upper_F->size[1];
    m_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)1;
    h_1_ds = ddot(&n_t, &upper_F->data[0], &m_t, &b_b->data[0], &k_t);
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&upper_F);
  i17 = vm->size[0];
  vm->size[0] = 1 + TX->size[1];
  emxEnsureCapacity_real_T1(sp, vm, i17, &ih_emlrtRTEI);
  vm->data[0] = H1->data[0] - h_1_ds;
  loop_ub = TX->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    vm->data[i17 + 1] = TX->data[TX->size[0] * i17];
  }

  emxFree_real_T(&TX);
  emxInit_boolean_T(sp, &upper, 1, &jh_emlrtRTEI, true);
  beta1 = 3.0 * sig2;
  i17 = upper->size[0];
  upper->size[0] = vm->size[0];
  emxEnsureCapacity_boolean_T(sp, upper, i17, &jh_emlrtRTEI);
  loop_ub = vm->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    upper->data[i17] = (vm->data[i17] >= beta1);
  }

  emxInit_boolean_T(sp, &lower, 1, &kh_emlrtRTEI, true);
  beta1 = -3.0 * sig2;
  i17 = lower->size[0];
  lower->size[0] = vm->size[0];
  emxEnsureCapacity_boolean_T(sp, lower, i17, &kh_emlrtRTEI);
  loop_ub = vm->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    lower->data[i17] = (vm->data[i17] <= beta1);
  }

  i17 = upper->size[0];
  i18 = lower->size[0];
  if (i17 != i18) {
    emlrtSizeEqCheck1DR2012b(i17, i18, &s_emlrtECI, sp);
  }

  i17 = H1->size[0];
  H1->size[0] = upper->size[0];
  emxEnsureCapacity_real_T1(sp, H1, i17, &mh_emlrtRTEI);
  loop_ub = upper->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    H1->data[i17] = (real_T)upper->data[i17] + (real_T)lower->data[i17];
  }

  emxFree_boolean_T(&lower);
  emxFree_boolean_T(&upper);
  st.site = &qe_emlrtRSI;
  h_1_ds = c_sum(&st, H1);
  st.site = &re_emlrtRSI;
  b_st.site = &qg_emlrtRSI;
  nx = H1->size[0];
  c_st.site = &rg_emlrtRSI;
  idx = 0;
  i17 = ii->size[0];
  ii->size[0] = H1->size[0];
  emxEnsureCapacity_int32_T(&c_st, ii, i17, &oh_emlrtRTEI);
  d_st.site = &sg_emlrtRSI;
  empty_non_axis_sizes = (H1->size[0] > 2147483646);
  if (empty_non_axis_sizes) {
    e_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  maxdimlen = 1;
  exitg1 = false;
  while ((!exitg1) && (maxdimlen <= nx)) {
    if (H1->data[maxdimlen - 1] != 0.0) {
      idx++;
      ii->data[idx - 1] = maxdimlen;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        maxdimlen++;
      }
    } else {
      maxdimlen++;
    }
  }

  if (!(idx <= H1->size[0])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &so_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (H1->size[0] == 1) {
    if (idx == 0) {
      i17 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity_int32_T(&c_st, ii, i17, &qh_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      i17 = 0;
    } else {
      i17 = idx;
    }

    b_ds[0] = 1;
    b_ds[1] = i17;
    d_st.site = &tg_emlrtRSI;
    indexShapeCheck(&d_st, ii->size[0], b_ds);
    i18 = ii->size[0];
    ii->size[0] = i17;
    emxEnsureCapacity_int32_T(&c_st, ii, i18, &qh_emlrtRTEI);
  }

  st.site = &se_emlrtRSI;
  i17 = H1->size[0];
  emxEnsureCapacity_real_T1(&st, H1, i17, &sh_emlrtRTEI);
  loop_ub = H1->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    H1->data[i17]--;
  }

  emxInit_int32_T(&st, &c_ii, 1, &ji_emlrtRTEI, true);
  b_st.site = &qg_emlrtRSI;
  nx = H1->size[0];
  c_st.site = &rg_emlrtRSI;
  idx = 0;
  i17 = c_ii->size[0];
  c_ii->size[0] = H1->size[0];
  emxEnsureCapacity_int32_T(&c_st, c_ii, i17, &oh_emlrtRTEI);
  d_st.site = &sg_emlrtRSI;
  empty_non_axis_sizes = (H1->size[0] > 2147483646);
  if (empty_non_axis_sizes) {
    e_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  maxdimlen = 1;
  exitg1 = false;
  while ((!exitg1) && (maxdimlen <= nx)) {
    if (H1->data[maxdimlen - 1] != 0.0) {
      idx++;
      c_ii->data[idx - 1] = maxdimlen;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        maxdimlen++;
      }
    } else {
      maxdimlen++;
    }
  }

  if (!(idx <= H1->size[0])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &so_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (H1->size[0] == 1) {
    if (idx == 0) {
      i17 = c_ii->size[0];
      c_ii->size[0] = 0;
      emxEnsureCapacity_int32_T(&c_st, c_ii, i17, &qh_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      i17 = 0;
    } else {
      i17 = idx;
    }

    b_ds[0] = 1;
    b_ds[1] = i17;
    d_st.site = &tg_emlrtRSI;
    indexShapeCheck(&d_st, c_ii->size[0], b_ds);
    i18 = c_ii->size[0];
    c_ii->size[0] = i17;
    emxEnsureCapacity_int32_T(&c_st, c_ii, i18, &qh_emlrtRTEI);
  }

  i17 = H1->size[0];
  H1->size[0] = c_ii->size[0];
  emxEnsureCapacity_real_T1(&st, H1, i17, &uh_emlrtRTEI);
  loop_ub = c_ii->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    H1->data[i17] = c_ii->data[i17];
  }

  emxFree_int32_T(&c_ii);
  maxdimlen = vm->size[0];
  i17 = ii->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i17, &vh_emlrtRTEI);
  loop_ub = ii->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    i18 = ii->data[i17];
    if (!((i18 >= 1) && (i18 <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, maxdimlen, &kd_emlrtBCI, sp);
    }

    ii->data[i17] = i18 - 1;
  }

  st.site = &te_emlrtRSI;
  i17 = likelihood->size[0];
  likelihood->size[0] = (int32_T)h_1_ds;
  emxEnsureCapacity_real_T1(&st, likelihood, i17, &xh_emlrtRTEI);
  if (!(likelihood->size[0] == 0)) {
    emlrtRandn(&likelihood->data[0], likelihood->size[0]);
  }

  maxdimlen = vm->size[0];
  i17 = f_tt->size[0];
  f_tt->size[0] = H1->size[0];
  emxEnsureCapacity_real_T1(sp, f_tt, i17, &ai_emlrtRTEI);
  loop_ub = H1->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    i18 = (int32_T)H1->data[i17];
    if (!((i18 >= 1) && (i18 <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i18, 1, maxdimlen, &ld_emlrtBCI, sp);
    }

    f_tt->data[i17] = vm->data[i18 - 1];
  }

  emxFree_real_T(&H1);
  st.site = &te_emlrtRSI;
  beta1 = b_std(&st, f_tt);
  i17 = likelihood->size[0];
  emxEnsureCapacity_real_T1(sp, likelihood, i17, &bi_emlrtRTEI);
  loop_ub = likelihood->size[0];
  emxFree_real_T(&f_tt);
  for (i17 = 0; i17 < loop_ub; i17++) {
    likelihood->data[i17] *= beta1;
  }

  b_ii[0] = ii->size[0];
  emlrtSubAssignSizeCheckR2012b(&b_ii[0], 1, &(*(int32_T (*)[1])likelihood->size)
    [0], 1, &r_emlrtECI, sp);
  loop_ub = likelihood->size[0];
  for (i17 = 0; i17 < loop_ub; i17++) {
    vm->data[ii->data[i17]] = likelihood->data[i17];
  }

  emxFree_int32_T(&ii);
  emxFree_real_T(&likelihood);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real_T Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *n_error,
  const emxArray_real_T *vm, const emxArray_real_T *coef, const emxArray_real_T *
  b, real_T sig2, real_T p, real_T q, const emxArray_real_T *x_f)
{
  real_T y_pred;
  int32_T i39;
  int32_T loop_ub;
  emxArray_real_T *phi;
  emxArray_real_T *theta;
  int32_T b_coef;
  int32_T b_loop_ub;
  real_T v_X;
  int32_T i40;
  int32_T i41;
  emxArray_real_T *a;
  int32_T iv39[2];
  real_T error_X;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  real_T y;
  real_T r;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  예측분포 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  if (1.0 > p) {
    loop_ub = 0;
  } else {
    i39 = coef->size[0];
    if (!(1 <= i39)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i39, &ue_emlrtBCI, sp);
    }

    i39 = coef->size[0];
    loop_ub = (int32_T)p;
    if (!((loop_ub >= 1) && (loop_ub <= i39))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i39, &te_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &phi, 1, &xm_emlrtRTEI, true);
  i39 = phi->size[0];
  phi->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(sp, phi, i39, &xm_emlrtRTEI);
  for (i39 = 0; i39 < loop_ub; i39++) {
    phi->data[i39] = coef->data[i39];
  }

  emxInit_real_T1(sp, &theta, 1, &ym_emlrtRTEI, true);
  b_coef = coef->size[0];
  i39 = theta->size[0];
  theta->size[0] = (int32_T)muDoubleScalarFloor(q - 1.0) + 1;
  emxEnsureCapacity_real_T1(sp, theta, i39, &ym_emlrtRTEI);
  b_loop_ub = (int32_T)muDoubleScalarFloor(q - 1.0);
  for (i39 = 0; i39 <= b_loop_ub; i39++) {
    i40 = (int32_T)(p + (real_T)(i39 + 1));
    if (!((i40 >= 1) && (i40 <= b_coef))) {
      emlrtDynamicBoundsCheckR2012b(i40, 1, b_coef, &ve_emlrtBCI, sp);
    }

    theta->data[i39] = coef->data[i40 - 1];
  }

  v_X = ((real_T)n_error->size[0] - p) + 1.0;
  if (v_X > n_error->size[0]) {
    i40 = 1;
    i39 = 1;
    i41 = 0;
  } else {
    i39 = n_error->size[0];
    i40 = n_error->size[0];
    if (!((i40 >= 1) && (i40 <= i39))) {
      emlrtDynamicBoundsCheckR2012b(i40, 1, i39, &se_emlrtBCI, sp);
    }

    i39 = -1;
    b_coef = n_error->size[0];
    i41 = (int32_T)v_X;
    if (!((i41 >= 1) && (i41 <= b_coef))) {
      emlrtDynamicBoundsCheckR2012b(i41, 1, b_coef, &re_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &a, 2, &an_emlrtRTEI, true);
  iv39[0] = 1;
  st.site = &al_emlrtRSI;
  iv39[1] = div_s32_floor(&st, i41 - i40, i39) + 1;
  st.site = &al_emlrtRSI;
  indexShapeCheck(&st, n_error->size[0], iv39);
  st.site = &al_emlrtRSI;
  b_coef = a->size[0] * a->size[1];
  a->size[0] = 1;
  b_st.site = &al_emlrtRSI;
  a->size[1] = div_s32_floor(&b_st, i41 - i40, i39) + 1;
  emxEnsureCapacity_real_T(&st, a, b_coef, &an_emlrtRTEI);
  b_st.site = &al_emlrtRSI;
  b_loop_ub = div_s32_floor(&b_st, i41 - i40, i39);
  for (b_coef = 0; b_coef <= b_loop_ub; b_coef++) {
    a->data[a->size[0] * b_coef] = n_error->data[(i40 + i39 * b_coef) - 1];
  }

  b_st.site = &tc_emlrtRSI;
  c_st.site = &al_emlrtRSI;
  if (!(div_s32_floor(&c_st, i41 - i40, i39) + 1 == loop_ub)) {
    c_st.site = &al_emlrtRSI;
    if ((div_s32_floor(&c_st, i41 - i40, i39) + 1 == 1) || (loop_ub == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  b_st.site = &al_emlrtRSI;
  if ((div_s32_floor(&b_st, i41 - i40, i39) + 1 == 1) || (loop_ub == 1)) {
    error_X = 0.0;
    for (i39 = 0; i39 < a->size[1]; i39++) {
      error_X += a->data[a->size[0] * i39] * phi->data[i39];
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    e_st.site = &al_emlrtRSI;
    if (div_s32_floor(&e_st, i41 - i40, i39) + 1 < 1) {
      error_X = 0.0;
    } else {
      e_st.site = &ym_emlrtRSI;
      n_t = (ptrdiff_t)(div_s32_floor(&e_st, i41 - i40, i39) + 1);
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      error_X = ddot(&n_t, &a->data[0], &incx_t, &phi->data[0], &incy_t);
    }
  }

  emxFree_real_T(&phi);
  v_X = ((real_T)n_error->size[0] - q) + 1.0;
  if (v_X > n_error->size[0]) {
    i40 = 1;
    i39 = 1;
    i41 = 0;
  } else {
    i39 = vm->size[0];
    i40 = n_error->size[0];
    if (!((i40 >= 1) && (i40 <= i39))) {
      emlrtDynamicBoundsCheckR2012b(i40, 1, i39, &qe_emlrtBCI, sp);
    }

    i39 = -1;
    b_coef = vm->size[0];
    i41 = (int32_T)v_X;
    if (!((i41 >= 1) && (i41 <= b_coef))) {
      emlrtDynamicBoundsCheckR2012b(i41, 1, b_coef, &pe_emlrtBCI, sp);
    }
  }

  iv39[0] = 1;
  st.site = &bl_emlrtRSI;
  iv39[1] = div_s32_floor(&st, i41 - i40, i39) + 1;
  st.site = &bl_emlrtRSI;
  indexShapeCheck(&st, vm->size[0], iv39);
  st.site = &bl_emlrtRSI;
  b_coef = a->size[0] * a->size[1];
  a->size[0] = 1;
  b_st.site = &bl_emlrtRSI;
  a->size[1] = div_s32_floor(&b_st, i41 - i40, i39) + 1;
  emxEnsureCapacity_real_T(&st, a, b_coef, &bn_emlrtRTEI);
  b_st.site = &bl_emlrtRSI;
  loop_ub = div_s32_floor(&b_st, i41 - i40, i39);
  for (b_coef = 0; b_coef <= loop_ub; b_coef++) {
    a->data[a->size[0] * b_coef] = vm->data[(i40 + i39 * b_coef) - 1];
  }

  b_st.site = &tc_emlrtRSI;
  c_st.site = &bl_emlrtRSI;
  if (!(div_s32_floor(&c_st, i41 - i40, i39) + 1 == (int32_T)muDoubleScalarFloor
        (q - 1.0) + 1)) {
    c_st.site = &bl_emlrtRSI;
    if ((div_s32_floor(&c_st, i41 - i40, i39) + 1 == 1) || ((int32_T)
         muDoubleScalarFloor(q - 1.0) + 1 == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  b_st.site = &bl_emlrtRSI;
  if ((div_s32_floor(&b_st, i41 - i40, i39) + 1 == 1) || ((int32_T)
       muDoubleScalarFloor(q - 1.0) + 1 == 1)) {
    v_X = 0.0;
    for (i39 = 0; i39 < a->size[1]; i39++) {
      v_X += a->data[a->size[0] * i39] * theta->data[i39];
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    e_st.site = &bl_emlrtRSI;
    if (div_s32_floor(&e_st, i41 - i40, i39) + 1 < 1) {
      v_X = 0.0;
    } else {
      e_st.site = &ym_emlrtRSI;
      n_t = (ptrdiff_t)(div_s32_floor(&e_st, i41 - i40, i39) + 1);
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      v_X = ddot(&n_t, &a->data[0], &incx_t, &theta->data[0], &incy_t);
    }
  }

  emxFree_real_T(&theta);
  st.site = &cl_emlrtRSI;
  i39 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x_f->size[0];
  emxEnsureCapacity_real_T(&st, a, i39, &cn_emlrtRTEI);
  loop_ub = x_f->size[0];
  for (i39 = 0; i39 < loop_ub; i39++) {
    a->data[a->size[0] * i39] = x_f->data[i39];
  }

  b_st.site = &tc_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    y = 0.0;
    for (i39 = 0; i39 < a->size[1]; i39++) {
      y += a->data[a->size[0] * i39] * b->data[i39];
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    if (a->size[1] < 1) {
      y = 0.0;
    } else {
      n_t = (ptrdiff_t)a->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      y = ddot(&n_t, &a->data[0], &incx_t, &b->data[0], &incy_t);
    }
  }

  emxFree_real_T(&a);
  st.site = &cl_emlrtRSI;
  if (sig2 < 0.0) {
    b_st.site = &oc_emlrtRSI;
    b_error(&b_st);
  }

  st.site = &cl_emlrtRSI;
  emlrtRandn(&r, 1);
  y_pred = ((y + error_X) + v_X) + muDoubleScalarSqrt(sig2) * r;

  /*  다음기에 예상되는 y-value */
  /*  lnpredlik = lnpdfn(y_pred, xf'*beta, volf^2); */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y_pred;
}

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X, const
                     emxArray_real_T *Y, const emxArray_real_T *beta0, const
                     emxArray_real_T *precB0, const emxArray_real_T *coef,
                     real_T a0, real_T d0, real_T p, real_T q, const
                     emxArray_real_T *vm, real_T sig2_before, real_T model,
                     emxArray_real_T *beta, real_T *sig2)
{
  real_T ds;
  int32_T i36;
  int32_T loop_ub;
  emxArray_real_T *phi;
  emxArray_real_T *theta;
  int32_T iter;
  emxArray_real_T *Y_;
  int32_T i37;
  real_T alpha1;
  emxArray_real_T *X_;
  int32_T i;
  emxArray_real_T *B1;
  emxArray_real_T *r12;
  emxArray_int32_T *r13;
  emxArray_real_T *b;
  emxArray_real_T *a;
  emxArray_real_T *b_X;
  real_T x;
  emxArray_real_T *b_a;
  real_T d;
  int32_T b_loop_ub;
  int32_T i38;
  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *b_B1;
  int32_T c_B1[2];
  int32_T b_precB0[2];
  real_T b_b;
  int32_T n;
  real_T ur[2];
  real_T u;
  boolean_T guard1 = false;
  int32_T exitg1;
  boolean_T b3;
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

  /*  Beta sampling */
  ds = muDoubleScalarMax(p, q);
  if (1.0 > p) {
    loop_ub = 0;
  } else {
    i36 = coef->size[0];
    if (!(1 <= i36)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i36, &de_emlrtBCI, sp);
    }

    i36 = coef->size[0];
    loop_ub = (int32_T)p;
    if (!((loop_ub >= 1) && (loop_ub <= i36))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i36, &ee_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &phi, 1, &ul_emlrtRTEI, true);
  i36 = phi->size[0];
  phi->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(sp, phi, i36, &ul_emlrtRTEI);
  for (i36 = 0; i36 < loop_ub; i36++) {
    phi->data[i36] = coef->data[i36];
  }

  emxInit_real_T1(sp, &theta, 1, &vl_emlrtRTEI, true);
  iter = coef->size[0];
  i36 = theta->size[0];
  theta->size[0] = (int32_T)muDoubleScalarFloor(q - 1.0) + 1;
  emxEnsureCapacity_real_T1(sp, theta, i36, &vl_emlrtRTEI);
  loop_ub = (int32_T)muDoubleScalarFloor(q - 1.0);
  for (i36 = 0; i36 <= loop_ub; i36++) {
    i37 = (int32_T)(p + (real_T)(i36 + 1));
    if (!((i37 >= 1) && (i37 <= iter))) {
      emlrtDynamicBoundsCheckR2012b(i37, 1, iter, &je_emlrtBCI, sp);
    }

    theta->data[i36] = coef->data[i37 - 1];
  }

  emxInit_real_T1(sp, &Y_, 1, &wl_emlrtRTEI, true);
  i36 = Y_->size[0];
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &qb_emlrtDCI, sp);
  }

  Y_->size[0] = (int32_T)alpha1;
  emxEnsureCapacity_real_T1(sp, Y_, i36, &wl_emlrtRTEI);
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &qb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)alpha1;
  for (i36 = 0; i36 < loop_ub; i36++) {
    Y_->data[i36] = 0.0;
  }

  emxInit_real_T(sp, &X_, 2, &xl_emlrtRTEI, true);
  i36 = X_->size[0] * X_->size[1];
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &pb_emlrtDCI, sp);
  }

  X_->size[0] = (int32_T)alpha1;
  X_->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, X_, i36, &xl_emlrtRTEI);
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &rb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)alpha1 * X->size[1];
  for (i36 = 0; i36 < loop_ub; i36++) {
    X_->data[i36] = 0.0;
  }

  i36 = (int32_T)((real_T)X->size[0] + (1.0 - (ds + 1.0)));
  emlrtForLoopVectorCheckR2012b(ds + 1.0, 1.0, X->size[0], mxDOUBLE_CLASS, i36,
    &bp_emlrtRTEI, sp);
  i = 0;
  emxInit_real_T(sp, &B1, 2, &um_emlrtRTEI, true);
  emxInit_real_T(sp, &r12, 2, &vm_emlrtRTEI, true);
  emxInit_int32_T(sp, &r13, 1, &vm_emlrtRTEI, true);
  emxInit_real_T1(sp, &b, 1, &wm_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &gm_emlrtRTEI, true);
  emxInit_real_T(sp, &b_X, 2, &qm_emlrtRTEI, true);
  while (i <= i36 - 1) {
    x = (ds + 1.0) + (real_T)i;
    i37 = Y->size[1];
    if (!(1 <= i37)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i37, &fe_emlrtBCI, sp);
    }

    i37 = Y->size[1];
    if (!(1 <= i37)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i37, &ge_emlrtBCI, sp);
    }

    st.site = &bk_emlrtRSI;
    i37 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = phi->size[0];
    emxEnsureCapacity_real_T(&st, a, i37, &bm_emlrtRTEI);
    loop_ub = phi->size[0];
    for (i37 = 0; i37 < loop_ub; i37++) {
      a->data[a->size[0] * i37] = phi->data[i37];
    }

    iter = Y->size[0];
    i37 = b->size[0];
    b->size[0] = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0)) + 1;
    emxEnsureCapacity_real_T1(&st, b, i37, &dm_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0));
    for (i37 = 0; i37 <= loop_ub; i37++) {
      i38 = (int32_T)(x + (-1.0 - (real_T)i37));
      if (!((i38 >= 1) && (i38 <= iter))) {
        emlrtDynamicBoundsCheckR2012b(i38, 1, iter, &ke_emlrtBCI, &st);
      }

      b->data[i37] = Y->data[i38 - 1];
    }

    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0)) + 1))
    {
      if ((a->size[1] == 1) || ((int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0))
           + 1 == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || ((int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0))
         + 1 == 1)) {
      d = 0.0;
      for (i37 = 0; i37 < a->size[1]; i37++) {
        d += a->data[a->size[0] * i37] * b->data[i37];
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      if (a->size[1] < 1) {
        d = 0.0;
      } else {
        e_st.site = &wc_emlrtRSI;
        n_t = (ptrdiff_t)a->size[1];
        m_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)1;
        d = ddot(&n_t, &a->data[0], &m_t, &b->data[0], &k_t);
      }
    }

    st.site = &bk_emlrtRSI;
    i37 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = theta->size[0];
    emxEnsureCapacity_real_T(&st, a, i37, &hm_emlrtRTEI);
    loop_ub = theta->size[0];
    for (i37 = 0; i37 < loop_ub; i37++) {
      a->data[a->size[0] * i37] = theta->data[i37];
    }

    iter = vm->size[0];
    i37 = b->size[0];
    b->size[0] = (int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0)) + 1;
    emxEnsureCapacity_real_T1(&st, b, i37, &im_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0));
    for (i37 = 0; i37 <= loop_ub; i37++) {
      i38 = (int32_T)(x + (-1.0 - (real_T)i37));
      if (!((i38 >= 1) && (i38 <= iter))) {
        emlrtDynamicBoundsCheckR2012b(i38, 1, iter, &le_emlrtBCI, &st);
      }

      b->data[i37] = vm->data[i38 - 1];
    }

    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == (int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0)) + 1))
    {
      if ((a->size[1] == 1) || ((int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0))
           + 1 == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || ((int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0))
         + 1 == 1)) {
      alpha1 = 0.0;
      for (i37 = 0; i37 < a->size[1]; i37++) {
        alpha1 += a->data[a->size[0] * i37] * b->data[i37];
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      if (a->size[1] < 1) {
        alpha1 = 0.0;
      } else {
        e_st.site = &wc_emlrtRSI;
        n_t = (ptrdiff_t)a->size[1];
        m_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)1;
        alpha1 = ddot(&n_t, &a->data[0], &m_t, &b->data[0], &k_t);
      }
    }

    i37 = Y->size[0];
    i38 = (int32_T)x;
    if (!((i38 >= 1) && (i38 <= i37))) {
      emlrtDynamicBoundsCheckR2012b(i38, 1, i37, &me_emlrtBCI, sp);
    }

    i37 = Y_->size[0];
    iter = (int32_T)(x - ds);
    if (!((iter >= 1) && (iter <= i37))) {
      emlrtDynamicBoundsCheckR2012b(iter, 1, i37, &ne_emlrtBCI, sp);
    }

    Y_->data[iter - 1] = (Y->data[i38 - 1] - d) - alpha1;
    i37 = X->size[0];
    i38 = (int32_T)x;
    if (!((i38 >= 1) && (i38 <= i37))) {
      emlrtDynamicBoundsCheckR2012b(i38, 1, i37, &he_emlrtBCI, sp);
    }

    st.site = &ck_emlrtRSI;
    i37 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = phi->size[0];
    emxEnsureCapacity_real_T(&st, a, i37, &km_emlrtRTEI);
    loop_ub = phi->size[0];
    for (i37 = 0; i37 < loop_ub; i37++) {
      a->data[a->size[0] * i37] = phi->data[i37];
    }

    n = X->size[0];
    loop_ub = X->size[1];
    i37 = B1->size[0] * B1->size[1];
    B1->size[0] = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0)) + 1;
    B1->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, B1, i37, &mm_emlrtRTEI);
    for (i37 = 0; i37 < loop_ub; i37++) {
      b_loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0));
      for (i38 = 0; i38 <= b_loop_ub; i38++) {
        iter = (int32_T)(x + (-1.0 - (real_T)i38));
        if (!((iter >= 1) && (iter <= n))) {
          emlrtDynamicBoundsCheckR2012b(iter, 1, n, &oe_emlrtBCI, &st);
        }

        B1->data[i38 + B1->size[0] * i37] = X->data[(iter + X->size[0] * i37) -
          1];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0)) + 1))
    {
      guard1 = false;
      if (a->size[1] == 1) {
        guard1 = true;
      } else {
        i37 = X->size[1];
        if (((int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0)) + 1 == 1) && (i37
             == 1)) {
          guard1 = true;
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      if (guard1) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      }
    }

    if ((a->size[1] == 1) || ((int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0))
         + 1 == 1)) {
      i37 = r12->size[0] * r12->size[1];
      r12->size[0] = 1;
      r12->size[1] = B1->size[1];
      emxEnsureCapacity_real_T(&st, r12, i37, &km_emlrtRTEI);
      loop_ub = B1->size[1];
      for (i37 = 0; i37 < loop_ub; i37++) {
        r12->data[r12->size[0] * i37] = 0.0;
        b_loop_ub = a->size[1];
        for (i38 = 0; i38 < b_loop_ub; i38++) {
          r12->data[r12->size[0] * i37] += a->data[a->size[0] * i38] * B1->
            data[i38 + B1->size[0] * i37];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      guard1 = false;
      if ((a->size[1] == 0) || ((int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0))
           + 1 == 0)) {
        guard1 = true;
      } else {
        i37 = X->size[1];
        if (i37 == 0) {
          guard1 = true;
        } else {
          c_st.site = &yc_emlrtRSI;
          c_st.site = &ad_emlrtRSI;
          TRANSA = 'N';
          TRANSB = 'N';
          alpha1 = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          i37 = X->size[1];
          n_t = (ptrdiff_t)i37;
          k_t = (ptrdiff_t)a->size[1];
          lda_t = (ptrdiff_t)1;
          ldb_t = (ptrdiff_t)a->size[1];
          ldc_t = (ptrdiff_t)1;
          i37 = X->size[1];
          i38 = r12->size[0] * r12->size[1];
          r12->size[0] = 1;
          r12->size[1] = i37;
          emxEnsureCapacity_real_T(&c_st, r12, i38, &j_emlrtRTEI);
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
                &B1->data[0], &ldb_t, &beta1, &r12->data[0], &ldc_t);
        }
      }

      if (guard1) {
        loop_ub = X->size[1];
        i37 = r12->size[0] * r12->size[1];
        r12->size[0] = 1;
        r12->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&b_st, r12, i37, &km_emlrtRTEI);
        for (i37 = 0; i37 < loop_ub; i37++) {
          r12->data[i37] = 0.0;
        }
      }
    }

    loop_ub = X->size[1];
    i37 = b_X->size[0] * b_X->size[1];
    b_X->size[0] = 1;
    b_X->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, b_X, i37, &qm_emlrtRTEI);
    for (i37 = 0; i37 < loop_ub; i37++) {
      b_X->data[b_X->size[0] * i37] = X->data[((int32_T)x + X->size[0] * i37) -
        1];
    }

    for (i37 = 0; i37 < 2; i37++) {
      c_B1[i37] = b_X->size[i37];
    }

    for (i37 = 0; i37 < 2; i37++) {
      b_precB0[i37] = r12->size[i37];
    }

    if ((c_B1[0] != b_precB0[0]) || (c_B1[1] != b_precB0[1])) {
      emlrtSizeEqCheckNDR2012b(&c_B1[0], &b_precB0[0], &ub_emlrtECI, sp);
    }

    i37 = X_->size[0];
    i38 = (int32_T)(x - ds);
    if (!((i38 >= 1) && (i38 <= i37))) {
      emlrtDynamicBoundsCheckR2012b(i38, 1, i37, &ie_emlrtBCI, sp);
    }

    i37 = i38 - 1;
    loop_ub = X_->size[1];
    i38 = r13->size[0];
    r13->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r13, i38, &rm_emlrtRTEI);
    for (i38 = 0; i38 < loop_ub; i38++) {
      r13->data[i38] = i38;
    }

    b_precB0[0] = 1;
    b_precB0[1] = r13->size[0];
    loop_ub = X->size[1];
    i38 = b_X->size[0] * b_X->size[1];
    b_X->size[0] = 1;
    b_X->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, b_X, i38, &qm_emlrtRTEI);
    for (i38 = 0; i38 < loop_ub; i38++) {
      b_X->data[b_X->size[0] * i38] = X->data[((int32_T)x + X->size[0] * i38) -
        1];
    }

    for (i38 = 0; i38 < 2; i38++) {
      c_B1[i38] = b_X->size[i38];
    }

    emlrtSubAssignSizeCheckR2012b(&b_precB0[0], 2, &c_B1[0], 2, &vb_emlrtECI, sp);
    loop_ub = X->size[1] - 1;
    for (i38 = 0; i38 <= loop_ub; i38++) {
      X_->data[i37 + X_->size[0] * r13->data[i38]] = X->data[((int32_T)x +
        X->size[0] * i38) - 1] - r12->data[r12->size[0] * i38];
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_X);
  emxFree_int32_T(&r13);
  emxFree_real_T(&r12);
  if (model == 1.0) {
    i36 = beta->size[0];
    beta->size[0] = 1;
    emxEnsureCapacity_real_T1(sp, beta, i36, &yl_emlrtRTEI);
    beta->data[0] = 0.0;
  } else {
    emxInit_real_T(sp, &b_a, 2, &am_emlrtRTEI, true);
    d = 1.0 / sig2_before;
    st.site = &dk_emlrtRSI;
    i36 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = X_->size[1];
    b_a->size[1] = X_->size[0];
    emxEnsureCapacity_real_T(&st, b_a, i36, &am_emlrtRTEI);
    loop_ub = X_->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      b_loop_ub = X_->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        b_a->data[i37 + b_a->size[0] * i36] = X_->data[i36 + X_->size[0] * i37];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!(b_a->size[1] == X_->size[0])) {
      if (((b_a->size[0] == 1) && (b_a->size[1] == 1)) || ((X_->size[0] == 1) &&
           (X_->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((b_a->size[1] == 1) || (X_->size[0] == 1)) {
      i36 = B1->size[0] * B1->size[1];
      B1->size[0] = b_a->size[0];
      B1->size[1] = X_->size[1];
      emxEnsureCapacity_real_T(&st, B1, i36, &tb_emlrtRTEI);
      loop_ub = b_a->size[0];
      for (i36 = 0; i36 < loop_ub; i36++) {
        b_loop_ub = X_->size[1];
        for (i37 = 0; i37 < b_loop_ub; i37++) {
          B1->data[i36 + B1->size[0] * i37] = 0.0;
          iter = b_a->size[1];
          for (i38 = 0; i38 < iter; i38++) {
            B1->data[i36 + B1->size[0] * i37] += b_a->data[i36 + b_a->size[0] *
              i38] * X_->data[i38 + X_->size[0] * i37];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((b_a->size[0] == 0) || (b_a->size[1] == 0) || (X_->size[0] == 0) ||
          (X_->size[1] == 0)) {
        i36 = B1->size[0] * B1->size[1];
        B1->size[0] = b_a->size[0];
        B1->size[1] = X_->size[1];
        emxEnsureCapacity_real_T(&b_st, B1, i36, &xb_emlrtRTEI);
        loop_ub = b_a->size[0] * X_->size[1];
        for (i36 = 0; i36 < loop_ub; i36++) {
          B1->data[i36] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)b_a->size[0];
        n_t = (ptrdiff_t)X_->size[1];
        k_t = (ptrdiff_t)b_a->size[1];
        lda_t = (ptrdiff_t)b_a->size[0];
        ldb_t = (ptrdiff_t)b_a->size[1];
        ldc_t = (ptrdiff_t)b_a->size[0];
        i36 = B1->size[0] * B1->size[1];
        B1->size[0] = b_a->size[0];
        B1->size[1] = X_->size[1];
        emxEnsureCapacity_real_T(&c_st, B1, i36, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a->data[0], &lda_t,
              &X_->data[0], &ldb_t, &beta1, &B1->data[0], &ldc_t);
      }
    }

    loop_ub = B1->size[0] * B1->size[1] - 1;
    i36 = B1->size[0] * B1->size[1];
    emxEnsureCapacity_real_T(sp, B1, i36, &fm_emlrtRTEI);
    for (i36 = 0; i36 <= loop_ub; i36++) {
      B1->data[i36] *= d;
    }

    for (i36 = 0; i36 < 2; i36++) {
      c_B1[i36] = B1->size[i36];
      b_precB0[i36] = precB0->size[i36];
    }

    emxInit_real_T(sp, &b_B1, 2, &fm_emlrtRTEI, true);
    if ((c_B1[0] != b_precB0[0]) || (c_B1[1] != b_precB0[1])) {
      emlrtSizeEqCheckNDR2012b(&c_B1[0], &b_precB0[0], &wb_emlrtECI, sp);
    }

    i36 = b_B1->size[0] * b_B1->size[1];
    b_B1->size[0] = B1->size[0];
    b_B1->size[1] = B1->size[1];
    emxEnsureCapacity_real_T(sp, b_B1, i36, &fm_emlrtRTEI);
    loop_ub = B1->size[0] * B1->size[1];
    for (i36 = 0; i36 < loop_ub; i36++) {
      b_B1->data[i36] = B1->data[i36] + precB0->data[i36];
    }

    st.site = &dk_emlrtRSI;
    inv(&st, b_B1, B1);
    d = 1.0 / sig2_before;
    st.site = &ek_emlrtRSI;
    i36 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = X_->size[1];
    b_a->size[1] = X_->size[0];
    emxEnsureCapacity_real_T(&st, b_a, i36, &jm_emlrtRTEI);
    loop_ub = X_->size[0];
    emxFree_real_T(&b_B1);
    for (i36 = 0; i36 < loop_ub; i36++) {
      b_loop_ub = X_->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        b_a->data[i37 + b_a->size[0] * i36] = X_->data[i36 + X_->size[0] * i37];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!(b_a->size[1] == Y_->size[0])) {
      if (((b_a->size[0] == 1) && (b_a->size[1] == 1)) || (Y_->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((b_a->size[1] == 1) || (Y_->size[0] == 1)) {
      i36 = phi->size[0];
      phi->size[0] = b_a->size[0];
      emxEnsureCapacity_real_T1(&st, phi, i36, &tb_emlrtRTEI);
      loop_ub = b_a->size[0];
      for (i36 = 0; i36 < loop_ub; i36++) {
        phi->data[i36] = 0.0;
        b_loop_ub = b_a->size[1];
        for (i37 = 0; i37 < b_loop_ub; i37++) {
          phi->data[i36] += b_a->data[i36 + b_a->size[0] * i37] * Y_->data[i37];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((b_a->size[0] == 0) || (b_a->size[1] == 0) || (Y_->size[0] == 0)) {
        i36 = phi->size[0];
        phi->size[0] = b_a->size[0];
        emxEnsureCapacity_real_T1(&b_st, phi, i36, &xb_emlrtRTEI);
        loop_ub = b_a->size[0];
        for (i36 = 0; i36 < loop_ub; i36++) {
          phi->data[i36] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)b_a->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)b_a->size[1];
        lda_t = (ptrdiff_t)b_a->size[0];
        ldb_t = (ptrdiff_t)b_a->size[1];
        ldc_t = (ptrdiff_t)b_a->size[0];
        i36 = phi->size[0];
        phi->size[0] = b_a->size[0];
        emxEnsureCapacity_real_T1(&c_st, phi, i36, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a->data[0], &lda_t,
              &Y_->data[0], &ldb_t, &beta1, &phi->data[0], &ldc_t);
      }
    }

    i36 = phi->size[0];
    emxEnsureCapacity_real_T1(sp, phi, i36, &lm_emlrtRTEI);
    loop_ub = phi->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      phi->data[i36] *= d;
    }

    st.site = &ek_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(precB0->size[1] == beta0->size[0])) {
      if (((precB0->size[0] == 1) && (precB0->size[1] == 1)) || (beta0->size[0] ==
           1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((precB0->size[1] == 1) || (beta0->size[0] == 1)) {
      i36 = theta->size[0];
      theta->size[0] = precB0->size[0];
      emxEnsureCapacity_real_T1(&st, theta, i36, &nm_emlrtRTEI);
      loop_ub = precB0->size[0];
      for (i36 = 0; i36 < loop_ub; i36++) {
        theta->data[i36] = 0.0;
        b_loop_ub = precB0->size[1];
        for (i37 = 0; i37 < b_loop_ub; i37++) {
          theta->data[i36] += precB0->data[i36 + precB0->size[0] * i37] *
            beta0->data[i37];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((precB0->size[0] == 0) || (precB0->size[1] == 0) || (beta0->size[0] ==
           0)) {
        i36 = theta->size[0];
        theta->size[0] = precB0->size[0];
        emxEnsureCapacity_real_T1(&b_st, theta, i36, &nm_emlrtRTEI);
        loop_ub = precB0->size[0];
        for (i36 = 0; i36 < loop_ub; i36++) {
          theta->data[i36] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i36 = theta->size[0];
        theta->size[0] = precB0->size[0];
        emxEnsureCapacity_real_T1(&c_st, theta, i36, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &precB0->data[0],
              &lda_t, &beta0->data[0], &ldb_t, &beta1, &theta->data[0], &ldc_t);
      }
    }

    i36 = phi->size[0];
    i37 = theta->size[0];
    if (i36 != i37) {
      emlrtSizeEqCheck1DR2012b(i36, i37, &xb_emlrtECI, sp);
    }

    i36 = phi->size[0];
    emxEnsureCapacity_real_T1(sp, phi, i36, &om_emlrtRTEI);
    loop_ub = phi->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      phi->data[i36] += theta->data[i36];
    }

    st.site = &fk_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(B1->size[1] == phi->size[0])) {
      if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (phi->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((B1->size[1] == 1) || (phi->size[0] == 1)) {
      i36 = beta->size[0];
      beta->size[0] = B1->size[0];
      emxEnsureCapacity_real_T1(&st, beta, i36, &pm_emlrtRTEI);
      loop_ub = B1->size[0];
      for (i36 = 0; i36 < loop_ub; i36++) {
        beta->data[i36] = 0.0;
        b_loop_ub = B1->size[1];
        for (i37 = 0; i37 < b_loop_ub; i37++) {
          beta->data[i36] += B1->data[i36 + B1->size[0] * i37] * phi->data[i37];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((B1->size[0] == 0) || (B1->size[1] == 0) || (phi->size[0] == 0)) {
        i36 = beta->size[0];
        beta->size[0] = B1->size[0];
        emxEnsureCapacity_real_T1(&b_st, beta, i36, &pm_emlrtRTEI);
        loop_ub = B1->size[0];
        for (i36 = 0; i36 < loop_ub; i36++) {
          beta->data[i36] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i36 = beta->size[0];
        beta->size[0] = B1->size[0];
        emxEnsureCapacity_real_T1(&c_st, beta, i36, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &B1->data[0], &lda_t,
              &phi->data[0], &ldb_t, &beta1, &beta->data[0], &ldc_t);
      }
    }

    st.site = &gk_emlrtRSI;
    b_st.site = &kk_emlrtRSI;
    n = B1->size[1];
    b3 = (B1->size[0] == B1->size[1]);
    if (!b3) {
      emlrtErrorWithMessageIdR2018a(&b_st, &cp_emlrtRTEI, "Coder:MATLAB:square",
        "Coder:MATLAB:square", 0);
    }

    if (B1->size[1] != 0) {
      i36 = B1->size[1];
      i37 = B1->size[1];
      c_st.site = &lk_emlrtRSI;
      iter = xpotrf(&c_st, i36, B1, i37);
      if (iter == 0) {
      } else {
        n = iter - 1;
        emlrtErrorWithMessageIdR2018a(&b_st, &dp_emlrtRTEI,
          "Coder:MATLAB:posdef", "Coder:MATLAB:posdef", 0);
      }

      c_st.site = &mk_emlrtRSI;
      if ((!(1 > n)) && (n > 2147483646)) {
        d_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (iter = 2; iter - 1 <= n; iter++) {
        c_st.site = &nk_emlrtRSI;
        if ((!(iter > n)) && (n > 2147483646)) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (i = iter; i <= n; i++) {
          B1->data[(i + B1->size[0] * (iter - 2)) - 1] = 0.0;
        }
      }
    }

    i36 = b_a->size[0] * b_a->size[1];
    b_a->size[0] = B1->size[1];
    b_a->size[1] = B1->size[0];
    emxEnsureCapacity_real_T(sp, b_a, i36, &sm_emlrtRTEI);
    loop_ub = B1->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      b_loop_ub = B1->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        b_a->data[i37 + b_a->size[0] * i36] = B1->data[i36 + B1->size[0] * i37];
      }
    }

    st.site = &gk_emlrtRSI;
    randn(&st, X->size[1], b);
    st.site = &gk_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(b_a->size[1] == b->size[0])) {
      if (((b_a->size[0] == 1) && (b_a->size[1] == 1)) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((b_a->size[1] == 1) || (b->size[0] == 1)) {
      i36 = theta->size[0];
      theta->size[0] = b_a->size[0];
      emxEnsureCapacity_real_T1(&st, theta, i36, &sm_emlrtRTEI);
      loop_ub = b_a->size[0];
      for (i36 = 0; i36 < loop_ub; i36++) {
        theta->data[i36] = 0.0;
        b_loop_ub = b_a->size[1];
        for (i37 = 0; i37 < b_loop_ub; i37++) {
          theta->data[i36] += b_a->data[i36 + b_a->size[0] * i37] * b->data[i37];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((b_a->size[0] == 0) || (b_a->size[1] == 0) || (b->size[0] == 0)) {
        i36 = theta->size[0];
        theta->size[0] = b_a->size[0];
        emxEnsureCapacity_real_T1(&b_st, theta, i36, &sm_emlrtRTEI);
        loop_ub = b_a->size[0];
        for (i36 = 0; i36 < loop_ub; i36++) {
          theta->data[i36] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)b_a->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)b_a->size[1];
        lda_t = (ptrdiff_t)b_a->size[0];
        ldb_t = (ptrdiff_t)b_a->size[1];
        ldc_t = (ptrdiff_t)b_a->size[0];
        i36 = theta->size[0];
        theta->size[0] = b_a->size[0];
        emxEnsureCapacity_real_T1(&c_st, theta, i36, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &theta->data[0], &ldc_t);
      }
    }

    emxFree_real_T(&b_a);
    i36 = beta->size[0];
    i37 = theta->size[0];
    if (i36 != i37) {
      emlrtSizeEqCheck1DR2012b(i36, i37, &yb_emlrtECI, sp);
    }

    i36 = beta->size[0];
    emxEnsureCapacity_real_T1(sp, beta, i36, &tm_emlrtRTEI);
    loop_ub = beta->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      beta->data[i36] += theta->data[i36];
    }
  }

  emxFree_real_T(&b);
  emxFree_real_T(&B1);
  emxFree_real_T(&phi);
  st.site = &hk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (!(X_->size[1] == beta->size[0])) {
    if (((X_->size[0] == 1) && (X_->size[1] == 1)) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((X_->size[1] == 1) || (beta->size[0] == 1)) {
    i36 = theta->size[0];
    theta->size[0] = X_->size[0];
    emxEnsureCapacity_real_T1(&st, theta, i36, &cm_emlrtRTEI);
    loop_ub = X_->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      theta->data[i36] = 0.0;
      b_loop_ub = X_->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        theta->data[i36] += X_->data[i36 + X_->size[0] * i37] * beta->data[i37];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((X_->size[0] == 0) || (X_->size[1] == 0) || (beta->size[0] == 0)) {
      i36 = theta->size[0];
      theta->size[0] = X_->size[0];
      emxEnsureCapacity_real_T1(&b_st, theta, i36, &cm_emlrtRTEI);
      loop_ub = X_->size[0];
      for (i36 = 0; i36 < loop_ub; i36++) {
        theta->data[i36] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)X_->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)X_->size[1];
      lda_t = (ptrdiff_t)X_->size[0];
      ldb_t = (ptrdiff_t)X_->size[1];
      ldc_t = (ptrdiff_t)X_->size[0];
      i36 = theta->size[0];
      theta->size[0] = X_->size[0];
      emxEnsureCapacity_real_T1(&c_st, theta, i36, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X_->data[0], &lda_t,
            &beta->data[0], &ldb_t, &beta1, &theta->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&X_);
  i36 = Y_->size[0];
  i37 = theta->size[0];
  if (i36 != i37) {
    emlrtSizeEqCheck1DR2012b(i36, i37, &ac_emlrtECI, sp);
  }

  i36 = Y_->size[0];
  emxEnsureCapacity_real_T1(sp, Y_, i36, &em_emlrtRTEI);
  loop_ub = Y_->size[0];
  for (i36 = 0; i36 < loop_ub; i36++) {
    Y_->data[i36] -= theta->data[i36];
  }

  emxFree_real_T(&theta);

  /*  잔차항 */
  st.site = &ik_emlrtRSI;
  i36 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = Y_->size[0];
  emxEnsureCapacity_real_T(&st, a, i36, &gm_emlrtRTEI);
  loop_ub = Y_->size[0];
  for (i36 = 0; i36 < loop_ub; i36++) {
    a->data[a->size[0] * i36] = Y_->data[i36];
  }

  b_st.site = &tc_emlrtRSI;
  if (!(a->size[1] == Y_->size[0])) {
    if ((a->size[1] == 1) || (Y_->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (Y_->size[0] == 1)) {
    d = 0.0;
    for (i36 = 0; i36 < a->size[1]; i36++) {
      d += a->data[a->size[0] * i36] * Y_->data[i36];
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    if (a->size[1] < 1) {
      d = 0.0;
    } else {
      e_st.site = &wc_emlrtRSI;
      n_t = (ptrdiff_t)a->size[1];
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      d = ddot(&n_t, &a->data[0], &m_t, &Y_->data[0], &k_t);
    }
  }

  emxFree_real_T(&a);
  emxFree_real_T(&Y_);
  alpha1 = (a0 + ((real_T)X->size[0] - ds)) / 2.0;
  st.site = &jk_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  /*  m,n: 난수 행렬의 크기 */
  b_st.site = &tk_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b_b = 1.0 / ((d0 + d) / 2.0);
  c_st.site = &uk_emlrtRSI;
  d_st.site = &vk_emlrtRSI;
  e_st.site = &wk_emlrtRSI;
  f_st.site = &xk_emlrtRSI;
  g_st.site = &yk_emlrtRSI;
  if (alpha1 <= 0.0) {
    if (alpha1 == 0.0) {
      alpha1 = 0.0;
    } else {
      alpha1 = rtNaN;
    }
  } else {
    if ((!muDoubleScalarIsInf(alpha1)) && (!muDoubleScalarIsNaN(alpha1))) {
      if (alpha1 >= 1.0) {
        d = alpha1 - 0.33333333333333331;
        h_st.site = &yk_emlrtRSI;
        emlrtRandu(&u, 1);
        alpha1 = 1.0;
      } else {
        d = (alpha1 + 1.0) - 0.33333333333333331;
        h_st.site = &yk_emlrtRSI;
        emlrtRandu(&ur[0], 2);
        u = ur[0];
        if (alpha1 < 7.4567656047833286E-20) {
          alpha1 = 0.0;
        } else {
          h_st.site = &yk_emlrtRSI;
          alpha1 = mpower(&h_st, ur[1], 1.0 / alpha1);
        }
      }

      h_st.site = &yk_emlrtRSI;
      beta1 = 1.0 / muDoubleScalarSqrt(9.0 * d);
      iter = 0;
      x = 0.0;
      do {
        exitg1 = 0;
        for (ds = -1.0; ds <= 0.0; ds = 1.0 + beta1 * x) {
          h_st.site = &yk_emlrtRSI;
          emlrtRandn(&x, 1);
        }

        ds *= ds * ds;
        x *= x;
        if (u < 1.0 - 0.0331 * x * x) {
          exitg1 = 1;
        } else {
          h_st.site = &yk_emlrtRSI;
          if (u < 0.0) {
            i_st.site = &pg_emlrtRSI;
            g_error(&i_st);
          }

          h_st.site = &yk_emlrtRSI;
          if (muDoubleScalarLog(u) < 0.5 * x + d * ((1.0 - ds) +
               muDoubleScalarLog(ds))) {
            exitg1 = 1;
          } else {
            iter++;
            if (iter > 1000000) {
              h_st.site = &yk_emlrtRSI;
              e_warning(&h_st);
              exitg1 = 1;
            } else {
              h_st.site = &yk_emlrtRSI;
              emlrtRandu(&u, 1);
            }
          }
        }
      } while (exitg1 == 0);

      alpha1 *= d * ds;
    }
  }

  alpha1 *= b_b;
  if (b_b < 0.0) {
    alpha1 = rtNaN;
  }

  /*  var_Y = var(Y); */
  /*  if sig2 >= 2*var_Y */
  /*      sig2 = sig2_before; */
  /*      beta = beta_before; */
  /*  end */
  *sig2 = 1.0 / alpha1;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void Gen_coef(const emlrtStack *sp, const emxArray_real_T *n_error, const
                     emxArray_real_T *vm, const emxArray_real_T *coef0, const
                     emxArray_real_T *precCOEF0, real_T p, real_T q, real_T sig2,
                     const emxArray_real_T *coefm, emxArray_real_T *coef)
{
  real_T ds;
  int32_T i28;
  int32_T loop_ub;
  emxArray_real_T *EV;
  real_T beta1;
  real_T sig2_inv;
  int32_T i29;
  emxArray_real_T *E;
  int32_T result;
  int32_T nr;
  int32_T t;
  emxArray_real_T *r5;
  emxArray_int32_T *r6;
  emxArray_real_T *r7;
  emxArray_real_T *varargin_1;
  int32_T b_loop_ub;
  int32_T i30;
  emxArray_real_T *varb1_inv;
  emxArray_real_T *a;
  int32_T i31;
  int32_T c_loop_ub;
  char_T TRANSA;
  char_T TRANSB;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T b_precCOEF0[2];
  int32_T b_varb1_inv[2];
  emxArray_real_T *c_varb1_inv;
  emxArray_real_T *varb1;
  emxArray_real_T *b;
  emxArray_real_T *imagine;
  emxArray_real_T *b1;
  boolean_T test;
  emxArray_creal_T *eig_;
  emxArray_real_T *absolute;
  emxArray_boolean_T *test_stationary;
  emxArray_boolean_T *test_invertible;
  cell_wrap_0 reshapes[2];
  emxArray_boolean_T *b_varargin_1;
  cell_wrap_0 b_reshapes[2];
  emxArray_boolean_T *r8;
  boolean_T exitg1;
  boolean_T overflow;
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
  ds = muDoubleScalarMax(p, q);
  i28 = coef->size[0];
  coef->size[0] = coef0->size[0];
  emxEnsureCapacity_real_T1(sp, coef, i28, &wi_emlrtRTEI);
  loop_ub = coef0->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    coef->data[i28] = coef0->data[i28];
  }

  emxInit_real_T(sp, &EV, 2, &xi_emlrtRTEI, true);
  i28 = EV->size[0] * EV->size[1];
  beta1 = (real_T)n_error->size[0] - ds;
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &lb_emlrtDCI, sp);
  }

  EV->size[0] = (int32_T)beta1;
  beta1 = p + q;
  if (beta1 != (int32_T)muDoubleScalarFloor(beta1)) {
    emlrtIntegerCheckR2012b(beta1, &mb_emlrtDCI, sp);
  }

  EV->size[1] = (int32_T)beta1;
  emxEnsureCapacity_real_T(sp, EV, i28, &xi_emlrtRTEI);
  beta1 = (real_T)n_error->size[0] - ds;
  if (!(beta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(beta1, &nb_emlrtDCI, sp);
  }

  sig2_inv = p + q;
  if (sig2_inv != (int32_T)muDoubleScalarFloor(sig2_inv)) {
    emlrtIntegerCheckR2012b(sig2_inv, &ob_emlrtDCI, sp);
  }

  loop_ub = (int32_T)beta1 * (int32_T)sig2_inv;
  for (i28 = 0; i28 < loop_ub; i28++) {
    EV->data[i28] = 0.0;
  }

  if (ds + 1.0 > n_error->size[0]) {
    i29 = 1;
    i28 = 1;
  } else {
    i28 = n_error->size[0];
    i29 = (int32_T)(ds + 1.0);
    if (!((i29 >= 1) && (i29 <= i28))) {
      emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &td_emlrtBCI, sp);
    }

    i28 = n_error->size[0];
    result = n_error->size[0];
    if (!((result >= 1) && (result <= i28))) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i28, &ud_emlrtBCI, sp);
    }

    i28 = result + 1;
  }

  emxInit_real_T1(sp, &E, 1, &yi_emlrtRTEI, true);
  result = E->size[0];
  E->size[0] = i28 - i29;
  emxEnsureCapacity_real_T1(sp, E, result, &yi_emlrtRTEI);
  loop_ub = i28 - i29;
  for (result = 0; result < loop_ub; result++) {
    E->data[result] = n_error->data[(i29 + result) - 1];
  }

  nr = coefm->size[0];
  result = (int32_T)((real_T)n_error->size[0] + (1.0 - (ds + 1.0)));
  emlrtForLoopVectorCheckR2012b(ds + 1.0, 1.0, n_error->size[0], mxDOUBLE_CLASS,
    result, &wo_emlrtRTEI, sp);
  t = 0;
  emxInit_real_T(sp, &r5, 2, &pk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &pk_emlrtRTEI, true);
  emxInit_real_T(sp, &r7, 2, &pk_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &sj_emlrtRTEI, true);
  while (t <= result - 1) {
    sig2_inv = (ds + 1.0) + (real_T)t;
    b_loop_ub = n_error->size[0];
    i30 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0)) + 1;
    emxEnsureCapacity_real_T(sp, varargin_1, i30, &bj_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0));
    for (i30 = 0; i30 <= loop_ub; i30++) {
      i31 = (int32_T)(sig2_inv + (-1.0 - (real_T)i30));
      if (!((i31 >= 1) && (i31 <= b_loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, b_loop_ub, &be_emlrtBCI, sp);
      }

      varargin_1->data[varargin_1->size[0] * i30] = i31;
    }

    st.site = &dh_emlrtRSI;
    indexShapeCheck(&st, n_error->size[0], *(int32_T (*)[2])varargin_1->size);
    b_loop_ub = vm->size[0];
    i30 = r5->size[0] * r5->size[1];
    r5->size[0] = 1;
    r5->size[1] = (int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0)) + 1;
    emxEnsureCapacity_real_T(sp, r5, i30, &cj_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0));
    for (i30 = 0; i30 <= loop_ub; i30++) {
      i31 = (int32_T)(sig2_inv + (-1.0 - (real_T)i30));
      if (!((i31 >= 1) && (i31 <= b_loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, b_loop_ub, &ce_emlrtBCI, sp);
      }

      r5->data[r5->size[0] * i30] = i31;
    }

    st.site = &dh_emlrtRSI;
    indexShapeCheck(&st, vm->size[0], *(int32_T (*)[2])r5->size);
    i30 = EV->size[0];
    i31 = (int32_T)(sig2_inv - ds);
    if (!((i31 >= 1) && (i31 <= i30))) {
      emlrtDynamicBoundsCheckR2012b(i31, 1, i30, &vd_emlrtBCI, sp);
    }

    i30 = i31 - 1;
    loop_ub = EV->size[1];
    i31 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r6, i31, &dj_emlrtRTEI);
    for (i31 = 0; i31 < loop_ub; i31++) {
      r6->data[i31] = i31;
    }

    i31 = r7->size[0] * r7->size[1];
    r7->size[0] = 1;
    r7->size[1] = varargin_1->size[1] + r5->size[1];
    emxEnsureCapacity_real_T(sp, r7, i31, &fj_emlrtRTEI);
    loop_ub = varargin_1->size[1];
    for (i31 = 0; i31 < loop_ub; i31++) {
      r7->data[r7->size[0] * i31] = n_error->data[(int32_T)varargin_1->
        data[varargin_1->size[0] * i31] - 1];
    }

    loop_ub = r5->size[1];
    for (i31 = 0; i31 < loop_ub; i31++) {
      r7->data[r7->size[0] * (i31 + varargin_1->size[1])] = vm->data[(int32_T)
        r5->data[r5->size[0] * i31] - 1];
    }

    b_precCOEF0[0] = 1;
    b_precCOEF0[1] = r6->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_precCOEF0[0], 2, &(*(int32_T (*)[2])
      r7->size)[0], 2, &mb_emlrtECI, sp);
    loop_ub = r7->size[1];
    for (i31 = 0; i31 < loop_ub; i31++) {
      EV->data[i30 + EV->size[0] * r6->data[i31]] = r7->data[r7->size[0] * i31];
    }

    t++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&r7);
  emxFree_int32_T(&r6);
  emxFree_real_T(&r5);
  emxInit_real_T(sp, &varb1_inv, 2, &gj_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &aj_emlrtRTEI, true);
  sig2_inv = 1.0 / sig2;
  st.site = &eh_emlrtRSI;
  result = a->size[0] * a->size[1];
  a->size[0] = EV->size[1];
  a->size[1] = EV->size[0];
  emxEnsureCapacity_real_T(&st, a, result, &aj_emlrtRTEI);
  loop_ub = EV->size[0];
  for (result = 0; result < loop_ub; result++) {
    c_loop_ub = EV->size[1];
    for (i30 = 0; i30 < c_loop_ub; i30++) {
      a->data[i30 + a->size[0] * result] = EV->data[result + EV->size[0] * i30];
    }
  }

  b_st.site = &tc_emlrtRSI;
  if (!(a->size[1] == EV->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((EV->size[0] == 1) &&
         (EV->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (EV->size[0] == 1)) {
    result = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = a->size[0];
    varb1_inv->size[1] = EV->size[1];
    emxEnsureCapacity_real_T(&st, varb1_inv, result, &tb_emlrtRTEI);
    loop_ub = a->size[0];
    for (result = 0; result < loop_ub; result++) {
      c_loop_ub = EV->size[1];
      for (i30 = 0; i30 < c_loop_ub; i30++) {
        varb1_inv->data[result + varb1_inv->size[0] * i30] = 0.0;
        b_loop_ub = a->size[1];
        for (i31 = 0; i31 < b_loop_ub; i31++) {
          varb1_inv->data[result + varb1_inv->size[0] * i30] += a->data[result +
            a->size[0] * i31] * EV->data[i31 + EV->size[0] * i30];
        }
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (EV->size[0] == 0) ||
        (EV->size[1] == 0)) {
      result = varb1_inv->size[0] * varb1_inv->size[1];
      varb1_inv->size[0] = a->size[0];
      varb1_inv->size[1] = EV->size[1];
      emxEnsureCapacity_real_T(&b_st, varb1_inv, result, &xb_emlrtRTEI);
      loop_ub = a->size[0] * EV->size[1];
      for (result = 0; result < loop_ub; result++) {
        varb1_inv->data[result] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      ds = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a->size[0];
      n_t = (ptrdiff_t)EV->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)a->size[0];
      result = varb1_inv->size[0] * varb1_inv->size[1];
      varb1_inv->size[0] = a->size[0];
      varb1_inv->size[1] = EV->size[1];
      emxEnsureCapacity_real_T(&c_st, varb1_inv, result, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &ds, &a->data[0], &lda_t,
            &EV->data[0], &ldb_t, &beta1, &varb1_inv->data[0], &ldc_t);
    }
  }

  loop_ub = varb1_inv->size[0] * varb1_inv->size[1] - 1;
  result = varb1_inv->size[0] * varb1_inv->size[1];
  emxEnsureCapacity_real_T(sp, varb1_inv, result, &ej_emlrtRTEI);
  for (result = 0; result <= loop_ub; result++) {
    varb1_inv->data[result] *= sig2_inv;
  }

  for (result = 0; result < 2; result++) {
    b_precCOEF0[result] = precCOEF0->size[result];
  }

  for (result = 0; result < 2; result++) {
    b_varb1_inv[result] = varb1_inv->size[result];
  }

  if ((b_precCOEF0[0] != b_varb1_inv[0]) || (b_precCOEF0[1] != b_varb1_inv[1]))
  {
    emlrtSizeEqCheckNDR2012b(&b_precCOEF0[0], &b_varb1_inv[0], &nb_emlrtECI, sp);
  }

  loop_ub = precCOEF0->size[0] * precCOEF0->size[1] - 1;
  result = varb1_inv->size[0] * varb1_inv->size[1];
  varb1_inv->size[0] = precCOEF0->size[0];
  varb1_inv->size[1] = precCOEF0->size[1];
  emxEnsureCapacity_real_T(sp, varb1_inv, result, &gj_emlrtRTEI);
  for (result = 0; result <= loop_ub; result++) {
    varb1_inv->data[result] += precCOEF0->data[result];
  }

  for (result = 0; result < 2; result++) {
    b_varb1_inv[result] = varb1_inv->size[result];
  }

  emxInit_real_T(sp, &c_varb1_inv, 2, &hj_emlrtRTEI, true);
  result = c_varb1_inv->size[0] * c_varb1_inv->size[1];
  c_varb1_inv->size[0] = varb1_inv->size[1];
  c_varb1_inv->size[1] = varb1_inv->size[0];
  emxEnsureCapacity_real_T(sp, c_varb1_inv, result, &hj_emlrtRTEI);
  loop_ub = varb1_inv->size[0];
  for (result = 0; result < loop_ub; result++) {
    c_loop_ub = varb1_inv->size[1];
    for (i30 = 0; i30 < c_loop_ub; i30++) {
      c_varb1_inv->data[i30 + c_varb1_inv->size[0] * result] = varb1_inv->
        data[result + varb1_inv->size[0] * i30];
    }
  }

  for (result = 0; result < 2; result++) {
    b_precCOEF0[result] = c_varb1_inv->size[result];
  }

  if ((b_varb1_inv[0] != b_precCOEF0[0]) || (b_varb1_inv[1] != b_precCOEF0[1]))
  {
    emlrtSizeEqCheckNDR2012b(&b_varb1_inv[0], &b_precCOEF0[0], &ob_emlrtECI, sp);
  }

  result = c_varb1_inv->size[0] * c_varb1_inv->size[1];
  c_varb1_inv->size[0] = varb1_inv->size[0];
  c_varb1_inv->size[1] = varb1_inv->size[1];
  emxEnsureCapacity_real_T(sp, c_varb1_inv, result, &ah_emlrtRTEI);
  loop_ub = varb1_inv->size[1];
  for (result = 0; result < loop_ub; result++) {
    c_loop_ub = varb1_inv->size[0];
    for (i30 = 0; i30 < c_loop_ub; i30++) {
      c_varb1_inv->data[i30 + c_varb1_inv->size[0] * result] = 0.5 *
        (varb1_inv->data[i30 + varb1_inv->size[0] * result] + varb1_inv->
         data[result + varb1_inv->size[0] * i30]);
    }
  }

  emxInit_real_T(sp, &varb1, 2, &lk_emlrtRTEI, true);
  st.site = &fh_emlrtRSI;
  invpd(&st, c_varb1_inv, varb1);

  /*  full conditional variance */
  st.site = &gh_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (!(precCOEF0->size[1] == coef0->size[0])) {
    if (((precCOEF0->size[0] == 1) && (precCOEF0->size[1] == 1)) || (coef0->
         size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T1(&st, &b, 1, &ij_emlrtRTEI, true);
  if ((precCOEF0->size[1] == 1) || (coef0->size[0] == 1)) {
    result = b->size[0];
    b->size[0] = precCOEF0->size[0];
    emxEnsureCapacity_real_T1(&st, b, result, &ij_emlrtRTEI);
    loop_ub = precCOEF0->size[0];
    for (result = 0; result < loop_ub; result++) {
      b->data[result] = 0.0;
      c_loop_ub = precCOEF0->size[1];
      for (i30 = 0; i30 < c_loop_ub; i30++) {
        b->data[result] += precCOEF0->data[result + precCOEF0->size[0] * i30] *
          coef0->data[i30];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((precCOEF0->size[0] == 0) || (precCOEF0->size[1] == 0) || (coef0->size[0]
         == 0)) {
      result = b->size[0];
      b->size[0] = precCOEF0->size[0];
      emxEnsureCapacity_real_T1(&b_st, b, result, &ij_emlrtRTEI);
      loop_ub = precCOEF0->size[0];
      for (result = 0; result < loop_ub; result++) {
        b->data[result] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      ds = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)precCOEF0->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)precCOEF0->size[1];
      lda_t = (ptrdiff_t)precCOEF0->size[0];
      ldb_t = (ptrdiff_t)precCOEF0->size[1];
      ldc_t = (ptrdiff_t)precCOEF0->size[0];
      result = b->size[0];
      b->size[0] = precCOEF0->size[0];
      emxEnsureCapacity_real_T1(&c_st, b, result, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &ds, &precCOEF0->data[0], &lda_t,
            &coef0->data[0], &ldb_t, &beta1, &b->data[0], &ldc_t);
    }
  }

  emxInit_real_T1(&st, &imagine, 1, &nk_emlrtRTEI, true);
  st.site = &gh_emlrtRSI;
  result = a->size[0] * a->size[1];
  a->size[0] = EV->size[1];
  a->size[1] = EV->size[0];
  emxEnsureCapacity_real_T(&st, a, result, &jj_emlrtRTEI);
  loop_ub = EV->size[0];
  for (result = 0; result < loop_ub; result++) {
    c_loop_ub = EV->size[1];
    for (i30 = 0; i30 < c_loop_ub; i30++) {
      a->data[i30 + a->size[0] * result] = EV->data[result + EV->size[0] * i30];
    }
  }

  b_st.site = &tc_emlrtRSI;
  if (!(a->size[1] == i28 - i29)) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (i28 - i29 == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (i28 - i29 == 1)) {
    i28 = imagine->size[0];
    imagine->size[0] = a->size[0];
    emxEnsureCapacity_real_T1(&st, imagine, i28, &tb_emlrtRTEI);
    loop_ub = a->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      imagine->data[i28] = 0.0;
      c_loop_ub = a->size[1];
      for (i29 = 0; i29 < c_loop_ub; i29++) {
        imagine->data[i28] += a->data[i28 + a->size[0] * i29] * E->data[i29];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (i28 - i29 == 0)) {
      i28 = imagine->size[0];
      imagine->size[0] = a->size[0];
      emxEnsureCapacity_real_T1(&b_st, imagine, i28, &xb_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        imagine->data[i28] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      ds = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)a->size[0];
      i28 = imagine->size[0];
      imagine->size[0] = a->size[0];
      emxEnsureCapacity_real_T1(&c_st, imagine, i28, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &ds, &a->data[0], &lda_t,
            &E->data[0], &ldb_t, &beta1, &imagine->data[0], &ldc_t);
    }
  }

  i28 = imagine->size[0];
  emxEnsureCapacity_real_T1(sp, imagine, i28, &kj_emlrtRTEI);
  loop_ub = imagine->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    imagine->data[i28] *= sig2_inv;
  }

  i28 = b->size[0];
  i29 = imagine->size[0];
  if (i28 != i29) {
    emlrtSizeEqCheck1DR2012b(i28, i29, &pb_emlrtECI, sp);
  }

  st.site = &gh_emlrtRSI;
  i28 = b->size[0];
  emxEnsureCapacity_real_T1(&st, b, i28, &ij_emlrtRTEI);
  loop_ub = b->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    b->data[i28] += imagine->data[i28];
  }

  b_st.site = &tc_emlrtRSI;
  if (!(varb1->size[1] == b->size[0])) {
    if (((varb1->size[0] == 1) && (varb1->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T1(&st, &b1, 1, &lj_emlrtRTEI, true);
  if ((varb1->size[1] == 1) || (b->size[0] == 1)) {
    i28 = b1->size[0];
    b1->size[0] = varb1->size[0];
    emxEnsureCapacity_real_T1(&st, b1, i28, &lj_emlrtRTEI);
    loop_ub = varb1->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b1->data[i28] = 0.0;
      c_loop_ub = varb1->size[1];
      for (i29 = 0; i29 < c_loop_ub; i29++) {
        b1->data[i28] += varb1->data[i28 + varb1->size[0] * i29] * b->data[i29];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((varb1->size[0] == 0) || (varb1->size[1] == 0) || (b->size[0] == 0)) {
      i28 = b1->size[0];
      b1->size[0] = varb1->size[0];
      emxEnsureCapacity_real_T1(&b_st, b1, i28, &lj_emlrtRTEI);
      loop_ub = varb1->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        b1->data[i28] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      ds = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)varb1->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)varb1->size[1];
      lda_t = (ptrdiff_t)varb1->size[0];
      ldb_t = (ptrdiff_t)varb1->size[1];
      ldc_t = (ptrdiff_t)varb1->size[0];
      i28 = b1->size[0];
      b1->size[0] = varb1->size[0];
      emxEnsureCapacity_real_T1(&c_st, b1, i28, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &ds, &varb1->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &b1->data[0], &ldc_t);
    }
  }

  /*  full conditional mean */
  for (i28 = 0; i28 < 2; i28++) {
    b_precCOEF0[i28] = varb1->size[i28];
  }

  i28 = c_varb1_inv->size[0] * c_varb1_inv->size[1];
  c_varb1_inv->size[0] = varb1->size[1];
  c_varb1_inv->size[1] = varb1->size[0];
  emxEnsureCapacity_real_T(sp, c_varb1_inv, i28, &mj_emlrtRTEI);
  loop_ub = varb1->size[0];
  for (i28 = 0; i28 < loop_ub; i28++) {
    c_loop_ub = varb1->size[1];
    for (i29 = 0; i29 < c_loop_ub; i29++) {
      c_varb1_inv->data[i29 + c_varb1_inv->size[0] * i28] = varb1->data[i28 +
        varb1->size[0] * i29];
    }
  }

  for (i28 = 0; i28 < 2; i28++) {
    b_varb1_inv[i28] = c_varb1_inv->size[i28];
  }

  if ((b_precCOEF0[0] != b_varb1_inv[0]) || (b_precCOEF0[1] != b_varb1_inv[1]))
  {
    emlrtSizeEqCheckNDR2012b(&b_precCOEF0[0], &b_varb1_inv[0], &qb_emlrtECI, sp);
  }

  i28 = c_varb1_inv->size[0] * c_varb1_inv->size[1];
  c_varb1_inv->size[0] = varb1->size[0];
  c_varb1_inv->size[1] = varb1->size[1];
  emxEnsureCapacity_real_T(sp, c_varb1_inv, i28, &ah_emlrtRTEI);
  loop_ub = varb1->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    c_loop_ub = varb1->size[0];
    for (i29 = 0; i29 < c_loop_ub; i29++) {
      c_varb1_inv->data[i29 + c_varb1_inv->size[0] * i28] = 0.5 * (varb1->
        data[i29 + varb1->size[0] * i28] + varb1->data[i28 + varb1->size[0] *
        i29]);
    }
  }

  i28 = varb1->size[0] * varb1->size[1];
  varb1->size[0] = c_varb1_inv->size[0];
  varb1->size[1] = c_varb1_inv->size[1];
  emxEnsureCapacity_real_T(sp, varb1, i28, &nj_emlrtRTEI);
  loop_ub = c_varb1_inv->size[1];
  for (i28 = 0; i28 < loop_ub; i28++) {
    c_loop_ub = c_varb1_inv->size[0];
    for (i29 = 0; i29 < c_loop_ub; i29++) {
      varb1->data[i29 + varb1->size[0] * i28] = c_varb1_inv->data[i29 +
        c_varb1_inv->size[0] * i28];
    }
  }

  emxFree_real_T(&c_varb1_inv);
  test = false;
  sig2_inv = 0.0;
  emxInit_creal_T(sp, &eig_, 1, &mk_emlrtRTEI, true);
  emxInit_real_T1(sp, &absolute, 1, &ok_emlrtRTEI, true);
  emxInit_boolean_T(sp, &test_stationary, 1, &yj_emlrtRTEI, true);
  emxInit_boolean_T(sp, &test_invertible, 1, &ik_emlrtRTEI, true);
  emxInitMatrix_cell_wrap_0(sp, reshapes, &uc_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_varargin_1, 1, &uj_emlrtRTEI, true);
  emxInitMatrix_cell_wrap_0(sp, b_reshapes, &uc_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r8, 1, &qk_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (!test)) {
    st.site = &hh_emlrtRSI;
    b_cholmod(&st, varb1, varb1_inv);
    i28 = a->size[0] * a->size[1];
    a->size[0] = varb1_inv->size[1];
    a->size[1] = varb1_inv->size[0];
    emxEnsureCapacity_real_T(sp, a, i28, &oj_emlrtRTEI);
    loop_ub = varb1_inv->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      c_loop_ub = varb1_inv->size[1];
      for (i29 = 0; i29 < c_loop_ub; i29++) {
        a->data[i29 + a->size[0] * i28] = varb1_inv->data[i28 + varb1_inv->size
          [0] * i29];
      }
    }

    st.site = &hh_emlrtRSI;
    randn(&st, p + q, b);
    st.site = &hh_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(a->size[1] == b->size[0])) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      i28 = coef->size[0];
      coef->size[0] = a->size[0];
      emxEnsureCapacity_real_T1(&st, coef, i28, &oj_emlrtRTEI);
      loop_ub = a->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        coef->data[i28] = 0.0;
        c_loop_ub = a->size[1];
        for (i29 = 0; i29 < c_loop_ub; i29++) {
          coef->data[i28] += a->data[i28 + a->size[0] * i29] * b->data[i29];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((a->size[0] == 0) || (a->size[1] == 0) || (b->size[0] == 0)) {
        i28 = coef->size[0];
        coef->size[0] = a->size[0];
        emxEnsureCapacity_real_T1(&b_st, coef, i28, &oj_emlrtRTEI);
        loop_ub = a->size[0];
        for (i28 = 0; i28 < loop_ub; i28++) {
          coef->data[i28] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        ds = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)a->size[0];
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)a->size[1];
        lda_t = (ptrdiff_t)a->size[0];
        ldb_t = (ptrdiff_t)a->size[1];
        ldc_t = (ptrdiff_t)a->size[0];
        i28 = coef->size[0];
        coef->size[0] = a->size[0];
        emxEnsureCapacity_real_T1(&c_st, coef, i28, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &ds, &a->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &coef->data[0], &ldc_t);
      }
    }

    i28 = b1->size[0];
    i29 = coef->size[0];
    if (i28 != i29) {
      emlrtSizeEqCheck1DR2012b(i28, i29, &rb_emlrtECI, sp);
    }

    i28 = coef->size[0];
    coef->size[0] = b1->size[0];
    emxEnsureCapacity_real_T1(sp, coef, i28, &pj_emlrtRTEI);
    loop_ub = b1->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      coef->data[i28] += b1->data[i28];
    }

    /*  beta sampling 하기 */
    if (1.0 > p) {
      loop_ub = 0;
    } else {
      i28 = coef->size[0];
      if (!(1 <= i28)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i28, &wd_emlrtBCI, sp);
      }

      i28 = coef->size[0];
      loop_ub = (int32_T)p;
      if (!((loop_ub >= 1) && (loop_ub <= i28))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i28, &xd_emlrtBCI, sp);
      }
    }

    b_loop_ub = coef->size[0];
    i28 = E->size[0];
    E->size[0] = (int32_T)muDoubleScalarFloor(q - 1.0) + 1;
    emxEnsureCapacity_real_T1(sp, E, i28, &qj_emlrtRTEI);
    c_loop_ub = (int32_T)muDoubleScalarFloor(q - 1.0);
    for (i28 = 0; i28 <= c_loop_ub; i28++) {
      i29 = (int32_T)(p + (real_T)(i28 + 1));
      if (!((i29 >= 1) && (i29 <= b_loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, b_loop_ub, &ae_emlrtBCI, sp);
      }

      E->data[i28] = coef->data[i29 - 1];
    }

    st.site = &ih_emlrtRSI;
    eye(&st, p - 1.0, varb1_inv);
    beta1 = p - 1.0;
    if (!(beta1 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(beta1, &jb_emlrtDCI, sp);
    }

    st.site = &ih_emlrtRSI;
    b_st.site = &hd_emlrtRSI;
    if (!((varb1_inv->size[0] == 0) || (varb1_inv->size[1] == 0))) {
      t = varb1_inv->size[0];
    } else if (!((int32_T)(p - 1.0) == 0)) {
      t = (int32_T)(p - 1.0);
    } else {
      t = muIntScalarMax_sint32(varb1_inv->size[0], 0);
      if ((int32_T)(p - 1.0) > t) {
        t = (int32_T)(p - 1.0);
      }
    }

    c_st.site = &id_emlrtRSI;
    if ((varb1_inv->size[0] == t) || ((varb1_inv->size[0] == 0) ||
         (varb1_inv->size[1] == 0))) {
      test = true;
    } else {
      test = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (((int32_T)(p - 1.0) == t) || ((int32_T)(p - 1.0) == 0)) {
    } else {
      test = false;
    }

    if (!test) {
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (t == 0);
    if (test || (!((varb1_inv->size[0] == 0) || (varb1_inv->size[1] == 0)))) {
      result = varb1_inv->size[1];
    } else {
      result = 0;
    }

    if (test || (!((int32_T)(p - 1.0) == 0))) {
      b_loop_ub = 1;
    } else {
      b_loop_ub = 0;
    }

    i28 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
    reshapes[1].f1->size[0] = t;
    reshapes[1].f1->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(&b_st, reshapes[1].f1, i28, &k_emlrtRTEI);
    c_loop_ub = t * b_loop_ub;
    for (i28 = 0; i28 < c_loop_ub; i28++) {
      reshapes[1].f1->data[i28] = 0.0;
    }

    i28 = EV->size[0] * EV->size[1];
    EV->size[0] = t;
    EV->size[1] = result + reshapes[1].f1->size[1];
    emxEnsureCapacity_real_T(&b_st, EV, i28, &rj_emlrtRTEI);
    for (i28 = 0; i28 < result; i28++) {
      for (i29 = 0; i29 < t; i29++) {
        EV->data[i29 + EV->size[0] * i28] = varb1_inv->data[i29 + t * i28];
      }
    }

    c_loop_ub = reshapes[1].f1->size[1];
    for (i28 = 0; i28 < c_loop_ub; i28++) {
      b_loop_ub = reshapes[1].f1->size[0];
      for (i29 = 0; i29 < b_loop_ub; i29++) {
        EV->data[i29 + EV->size[0] * (i28 + result)] = reshapes[1].f1->data[i29
          + reshapes[1].f1->size[0] * i28];
      }
    }

    st.site = &ih_emlrtRSI;
    i28 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, varargin_1, i28, &sj_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      varargin_1->data[varargin_1->size[0] * i28] = coef->data[i28];
    }

    b_st.site = &hd_emlrtRSI;
    if (!(varargin_1->size[1] == 0)) {
      t = varargin_1->size[1];
    } else if (!((EV->size[0] == 0) || (EV->size[1] == 0))) {
      t = EV->size[1];
    } else {
      t = 0;
      if (EV->size[1] > 0) {
        t = EV->size[1];
      }
    }

    c_st.site = &id_emlrtRSI;
    if ((varargin_1->size[1] == t) || (varargin_1->size[1] == 0)) {
      test = true;
    } else {
      test = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((EV->size[1] == t) || ((EV->size[0] == 0) || (EV->size[1] == 0))) {
    } else {
      test = false;
    }

    if (!test) {
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (t == 0);
    if (test || (!(varargin_1->size[1] == 0))) {
      result = 1;
    } else {
      result = 0;
    }

    if (test || (!((EV->size[0] == 0) || (EV->size[1] == 0)))) {
      b_loop_ub = EV->size[0];
    } else {
      b_loop_ub = 0;
    }

    i28 = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = result + b_loop_ub;
    varb1_inv->size[1] = t;
    emxEnsureCapacity_real_T(&b_st, varb1_inv, i28, &tj_emlrtRTEI);
    for (i28 = 0; i28 < t; i28++) {
      for (i29 = 0; i29 < result; i29++) {
        varb1_inv->data[i29 + varb1_inv->size[0] * i28] = varargin_1->data[i29 +
          result * i28];
      }
    }

    for (i28 = 0; i28 < t; i28++) {
      for (i29 = 0; i29 < b_loop_ub; i29++) {
        varb1_inv->data[(i29 + result) + varb1_inv->size[0] * i28] = EV->
          data[i29 + b_loop_ub * i28];
      }
    }

    st.site = &jh_emlrtRSI;
    b_st.site = &jh_emlrtRSI;
    eig(&b_st, varb1_inv, eig_);
    b_isnan(&st, eig_, test_invertible);
    b_st.site = &jh_emlrtRSI;
    eig(&b_st, varb1_inv, eig_);
    b_isfinite(&st, eig_, r8);
    i28 = b_varargin_1->size[0];
    b_varargin_1->size[0] = test_invertible->size[0] + r8->size[0];
    emxEnsureCapacity_boolean_T(&st, b_varargin_1, i28, &uj_emlrtRTEI);
    loop_ub = test_invertible->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_varargin_1->data[i28] = !test_invertible->data[i28];
    }

    loop_ub = r8->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_varargin_1->data[i28 + test_invertible->size[0]] = r8->data[i28];
    }

    b_st.site = &uj_emlrtRSI;
    c_st.site = &bc_emlrtRSI;
    d_st.site = &cc_emlrtRSI;
    if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&d_st, &ko_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (!(b_varargin_1->size[0] >= 1)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &jo_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &jc_emlrtRSI;
    f_st.site = &vj_emlrtRSI;
    test = b_varargin_1->data[0];
    g_st.site = &wj_emlrtRSI;
    overflow = ((!(2 > b_varargin_1->size[0])) && (b_varargin_1->size[0] >
      2147483646));
    if (overflow) {
      h_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (b_loop_ub = 1; b_loop_ub < b_varargin_1->size[0]; b_loop_ub++) {
      if ((int32_T)test > (int32_T)b_varargin_1->data[b_loop_ub]) {
        test = b_varargin_1->data[b_loop_ub];
      }
    }

    if (test) {
      st.site = &kh_emlrtRSI;
      eig(&st, varb1_inv, eig_);
      i28 = b->size[0];
      b->size[0] = eig_->size[0];
      emxEnsureCapacity_real_T1(sp, b, i28, &wj_emlrtRTEI);
      loop_ub = eig_->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        b->data[i28] = eig_->data[i28].im;
      }

      st.site = &lh_emlrtRSI;
      power(&st, b, imagine);
      st.site = &mh_emlrtRSI;
      d_abs(&st, eig_, b);
      st.site = &mh_emlrtRSI;
      power(&st, b, absolute);
      i28 = absolute->size[0];
      i29 = imagine->size[0];
      if (i28 != i29) {
        emlrtSizeEqCheck1DR2012b(i28, i29, &sb_emlrtECI, sp);
      }

      i28 = absolute->size[0];
      emxEnsureCapacity_real_T1(sp, absolute, i28, &xj_emlrtRTEI);
      loop_ub = absolute->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        absolute->data[i28] += imagine->data[i28];
      }

      st.site = &nh_emlrtRSI;
      c_sqrt(&st, absolute);
      i28 = test_stationary->size[0];
      test_stationary->size[0] = absolute->size[0];
      emxEnsureCapacity_boolean_T(sp, test_stationary, i28, &yj_emlrtRTEI);
      loop_ub = absolute->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        test_stationary->data[i28] = (absolute->data[i28] < 1.0);
      }
    } else {
      i28 = test_stationary->size[0];
      test_stationary->size[0] = 1;
      emxEnsureCapacity_boolean_T(sp, test_stationary, i28, &vj_emlrtRTEI);
      test_stationary->data[0] = false;
    }

    st.site = &oh_emlrtRSI;
    eye(&st, q - 1.0, varb1_inv);
    beta1 = q - 1.0;
    if (!(beta1 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(beta1, &kb_emlrtDCI, sp);
    }

    st.site = &oh_emlrtRSI;
    b_st.site = &hd_emlrtRSI;
    if (!((varb1_inv->size[0] == 0) || (varb1_inv->size[1] == 0))) {
      t = varb1_inv->size[0];
    } else if (!((int32_T)(q - 1.0) == 0)) {
      t = (int32_T)(q - 1.0);
    } else {
      t = muIntScalarMax_sint32(varb1_inv->size[0], 0);
      if ((int32_T)(q - 1.0) > t) {
        t = (int32_T)(q - 1.0);
      }
    }

    c_st.site = &id_emlrtRSI;
    if ((varb1_inv->size[0] == t) || ((varb1_inv->size[0] == 0) ||
         (varb1_inv->size[1] == 0))) {
      test = true;
    } else {
      test = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (((int32_T)(q - 1.0) == t) || ((int32_T)(q - 1.0) == 0)) {
    } else {
      test = false;
    }

    if (!test) {
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (t == 0);
    if (test || (!((varb1_inv->size[0] == 0) || (varb1_inv->size[1] == 0)))) {
      result = varb1_inv->size[1];
    } else {
      result = 0;
    }

    if (test || (!((int32_T)(q - 1.0) == 0))) {
      b_loop_ub = 1;
    } else {
      b_loop_ub = 0;
    }

    i28 = b_reshapes[1].f1->size[0] * b_reshapes[1].f1->size[1];
    b_reshapes[1].f1->size[0] = t;
    b_reshapes[1].f1->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(&b_st, b_reshapes[1].f1, i28, &k_emlrtRTEI);
    loop_ub = t * b_loop_ub;
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_reshapes[1].f1->data[i28] = 0.0;
    }

    i28 = EV->size[0] * EV->size[1];
    EV->size[0] = t;
    EV->size[1] = result + b_reshapes[1].f1->size[1];
    emxEnsureCapacity_real_T(&b_st, EV, i28, &ak_emlrtRTEI);
    for (i28 = 0; i28 < result; i28++) {
      for (i29 = 0; i29 < t; i29++) {
        EV->data[i29 + EV->size[0] * i28] = varb1_inv->data[i29 + t * i28];
      }
    }

    loop_ub = b_reshapes[1].f1->size[1];
    for (i28 = 0; i28 < loop_ub; i28++) {
      c_loop_ub = b_reshapes[1].f1->size[0];
      for (i29 = 0; i29 < c_loop_ub; i29++) {
        EV->data[i29 + EV->size[0] * (i28 + result)] = b_reshapes[1].f1->
          data[i29 + b_reshapes[1].f1->size[0] * i28];
      }
    }

    st.site = &oh_emlrtRSI;
    i28 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = E->size[0];
    emxEnsureCapacity_real_T(&st, varargin_1, i28, &bk_emlrtRTEI);
    loop_ub = E->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      varargin_1->data[varargin_1->size[0] * i28] = E->data[i28];
    }

    b_st.site = &hd_emlrtRSI;
    if (!(varargin_1->size[1] == 0)) {
      t = varargin_1->size[1];
    } else if (!((EV->size[0] == 0) || (EV->size[1] == 0))) {
      t = EV->size[1];
    } else {
      t = 0;
      if (EV->size[1] > 0) {
        t = EV->size[1];
      }
    }

    c_st.site = &id_emlrtRSI;
    if ((varargin_1->size[1] == t) || (varargin_1->size[1] == 0)) {
      test = true;
    } else {
      test = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((EV->size[1] == t) || ((EV->size[0] == 0) || (EV->size[1] == 0))) {
    } else {
      test = false;
    }

    if (!test) {
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (t == 0);
    if (test || (!(varargin_1->size[1] == 0))) {
      result = 1;
    } else {
      result = 0;
    }

    if (test || (!((EV->size[0] == 0) || (EV->size[1] == 0)))) {
      b_loop_ub = EV->size[0];
    } else {
      b_loop_ub = 0;
    }

    i28 = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = result + b_loop_ub;
    varb1_inv->size[1] = t;
    emxEnsureCapacity_real_T(&b_st, varb1_inv, i28, &ck_emlrtRTEI);
    for (i28 = 0; i28 < t; i28++) {
      for (i29 = 0; i29 < result; i29++) {
        varb1_inv->data[i29 + varb1_inv->size[0] * i28] = varargin_1->data[i29 +
          result * i28];
      }
    }

    for (i28 = 0; i28 < t; i28++) {
      for (i29 = 0; i29 < b_loop_ub; i29++) {
        varb1_inv->data[(i29 + result) + varb1_inv->size[0] * i28] = EV->
          data[i29 + b_loop_ub * i28];
      }
    }

    st.site = &ph_emlrtRSI;
    b_st.site = &ph_emlrtRSI;
    eig(&b_st, varb1_inv, eig_);
    b_isnan(&st, eig_, test_invertible);
    b_st.site = &ph_emlrtRSI;
    eig(&b_st, varb1_inv, eig_);
    b_isfinite(&st, eig_, r8);
    i28 = b_varargin_1->size[0];
    b_varargin_1->size[0] = test_invertible->size[0] + r8->size[0];
    emxEnsureCapacity_boolean_T(&st, b_varargin_1, i28, &dk_emlrtRTEI);
    loop_ub = test_invertible->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_varargin_1->data[i28] = !test_invertible->data[i28];
    }

    loop_ub = r8->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_varargin_1->data[i28 + test_invertible->size[0]] = r8->data[i28];
    }

    b_st.site = &uj_emlrtRSI;
    c_st.site = &bc_emlrtRSI;
    d_st.site = &cc_emlrtRSI;
    if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&d_st, &ko_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (!(b_varargin_1->size[0] >= 1)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &jo_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &jc_emlrtRSI;
    f_st.site = &vj_emlrtRSI;
    test = b_varargin_1->data[0];
    g_st.site = &wj_emlrtRSI;
    overflow = ((!(2 > b_varargin_1->size[0])) && (b_varargin_1->size[0] >
      2147483646));
    if (overflow) {
      h_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (b_loop_ub = 1; b_loop_ub < b_varargin_1->size[0]; b_loop_ub++) {
      if ((int32_T)test > (int32_T)b_varargin_1->data[b_loop_ub]) {
        test = b_varargin_1->data[b_loop_ub];
      }
    }

    if (test) {
      st.site = &qh_emlrtRSI;
      eig(&st, varb1_inv, eig_);
      i28 = b->size[0];
      b->size[0] = eig_->size[0];
      emxEnsureCapacity_real_T1(sp, b, i28, &fk_emlrtRTEI);
      loop_ub = eig_->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        b->data[i28] = eig_->data[i28].im;
      }

      st.site = &rh_emlrtRSI;
      power(&st, b, imagine);
      st.site = &sh_emlrtRSI;
      d_abs(&st, eig_, b);
      st.site = &sh_emlrtRSI;
      power(&st, b, absolute);
      i28 = absolute->size[0];
      i29 = imagine->size[0];
      if (i28 != i29) {
        emlrtSizeEqCheck1DR2012b(i28, i29, &tb_emlrtECI, sp);
      }

      i28 = absolute->size[0];
      emxEnsureCapacity_real_T1(sp, absolute, i28, &hk_emlrtRTEI);
      loop_ub = absolute->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        absolute->data[i28] += imagine->data[i28];
      }

      st.site = &th_emlrtRSI;
      c_sqrt(&st, absolute);
      i28 = test_invertible->size[0];
      test_invertible->size[0] = absolute->size[0];
      emxEnsureCapacity_boolean_T(sp, test_invertible, i28, &ik_emlrtRTEI);
      loop_ub = absolute->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        test_invertible->data[i28] = (absolute->data[i28] < 1.0);
      }
    } else {
      i28 = test_invertible->size[0];
      test_invertible->size[0] = 1;
      emxEnsureCapacity_boolean_T(sp, test_invertible, i28, &ek_emlrtRTEI);
      test_invertible->data[0] = false;
    }

    st.site = &uh_emlrtRSI;
    i28 = b_varargin_1->size[0];
    b_varargin_1->size[0] = test_stationary->size[0] + test_invertible->size[0];
    emxEnsureCapacity_boolean_T(&st, b_varargin_1, i28, &gk_emlrtRTEI);
    loop_ub = test_stationary->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_varargin_1->data[i28] = test_stationary->data[i28];
    }

    loop_ub = test_invertible->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      b_varargin_1->data[i28 + test_stationary->size[0]] = test_invertible->
        data[i28];
    }

    b_st.site = &uj_emlrtRSI;
    c_st.site = &bc_emlrtRSI;
    d_st.site = &cc_emlrtRSI;
    if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&d_st, &ko_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (!(b_varargin_1->size[0] >= 1)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &jo_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &jc_emlrtRSI;
    f_st.site = &vj_emlrtRSI;
    test = b_varargin_1->data[0];
    g_st.site = &wj_emlrtRSI;
    overflow = ((!(2 > b_varargin_1->size[0])) && (b_varargin_1->size[0] >
      2147483646));
    if (overflow) {
      h_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (b_loop_ub = 1; b_loop_ub < b_varargin_1->size[0]; b_loop_ub++) {
      if ((int32_T)test > (int32_T)b_varargin_1->data[b_loop_ub]) {
        test = b_varargin_1->data[b_loop_ub];
      }
    }

    sig2_inv++;
    if ((sig2_inv > 10.0) && (nr > 10)) {
      loop_ub = coefm->size[1];
      i28 = coefm->size[0];
      nr -= 2;
      if (!(nr <= i28)) {
        emlrtDynamicBoundsCheckR2012b(nr, 1, i28, &yd_emlrtBCI, sp);
      }

      i28 = coef->size[0];
      coef->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(sp, coef, i28, &kk_emlrtRTEI);
      for (i28 = 0; i28 < loop_ub; i28++) {
        coef->data[i28] = coefm->data[(nr + coefm->size[0] * i28) - 1];
      }

      exitg1 = true;
    } else if ((sig2_inv > 10.0) && (nr <= 10)) {
      i28 = coef->size[0];
      coef->size[0] = coef0->size[0];
      emxEnsureCapacity_real_T1(sp, coef, i28, &jk_emlrtRTEI);
      loop_ub = coef0->size[0];
      for (i28 = 0; i28 < loop_ub; i28++) {
        coef->data[i28] = coef0->data[i28];
      }

      exitg1 = true;
    } else {
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  emxFree_boolean_T(&r8);
  emxFreeMatrix_cell_wrap_0(b_reshapes);
  emxFree_boolean_T(&b_varargin_1);
  emxFree_real_T(&varargin_1);
  emxFreeMatrix_cell_wrap_0(reshapes);
  emxFree_real_T(&b);
  emxFree_real_T(&a);
  emxFree_boolean_T(&test_invertible);
  emxFree_boolean_T(&test_stationary);
  emxFree_real_T(&absolute);
  emxFree_real_T(&imagine);
  emxFree_creal_T(&eig_);
  emxFree_real_T(&b1);
  emxFree_real_T(&varb1);
  emxFree_real_T(&varb1_inv);
  emxFree_real_T(&E);
  emxFree_real_T(&EV);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "clc", true, location);
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
  const mxArray *m10;
  real_T *pData;
  int32_T i44;
  int32_T i;
  y = NULL;
  m10 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m10);
  i44 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i44] = u->data[u->size[0] * i];
    i44++;
  }

  emlrtAssign(&y, m10);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
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

void ARMA_X(const emlrtStack *sp, const emxArray_real_T *data, const
            emxArray_real_T *xind, const emxArray_real_T *yind, const
            emxArray_real_T *b0, const emxArray_real_T *B0, real_T a0, real_T d0,
            const emxArray_real_T *phi0, const emxArray_real_T *PHI0, const
            emxArray_real_T *theta0, const emxArray_real_T *THETA0, real_T n0,
            real_T n1, char_T forecast, const emxArray_real_T *x_f, char_T ML,
            struct0_T *Output)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 6 };

  static const char_T u[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  int32_T nc;
  emxArray_real_T *mean_Y;
  emxArray_real_T *Y;
  emxArray_real_T *X;
  int32_T loop_ub;
  int32_T b_data;
  int32_T i0;
  int32_T b_loop_ub;
  int32_T i1;
  real_T n;
  real_T alpha1;
  int32_T isForecast;
  int32_T phi0_idx_0;
  emxArray_real_T *coef;
  emxArray_real_T *precB0;
  emxArray_real_T *b;
  real_T sig2;
  int32_T nr;
  int32_T b_nr;
  emxArray_real_T *n_error;
  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *coef0;
  int32_T phi0_idx_1;
  boolean_T empty_non_axis_sizes;
  int32_T result;
  cell_wrap_0 reshapes[2];
  emxArray_real_T *MHm;
  cell_wrap_0 b_reshapes[2];
  emxArray_real_T *precCOEF0;
  emxArray_real_T *COEF0;
  emxArray_real_T *bm;
  emxArray_real_T *Vm;
  emxArray_real_T *sig2m;
  emxArray_real_T *coefm;
  emxArray_real_T *logLik;
  emxArray_real_T *Yfm;
  emxArray_real_T *b_hat;
  emxArray_int32_T *r0;
  emxArray_real_T *r1;
  emxArray_real_T *b_b;
  static const int32_T iv1[2] = { 1, 38 };

  static const char_T b_u[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  char_T c_u[37];
  static const int32_T iv2[2] = { 1, 37 };

  static const int32_T iv3[2] = { 1, 7 };

  static const char_T d_u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  emxArray_real_T *b_logLik;
  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 23 };

  static const char_T e_u[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  int32_T b_X[2];
  const mxArray *d_y;
  static const int32_T iv5[2] = { 1, 37 };

  static const int32_T iv6[2] = { 1, 8 };

  static const char_T f_u[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  int32_T b_precCOEF0[2];
  static const int32_T iv7[2] = { 1, 17 };

  static const char_T g_u[17] = { '[', 'p', 'h', 'i', ' ', 'a', 'n', 'd', ' ',
    't', 'h', 'e', 't', 'a', ':', ' ', ']' };

  real_T sig2_prior;
  static const int32_T iv8[2] = { 1, 8 };

  static const char_T h_u[8] = { '[', 's', 'i', 'g', '2', ':', ' ', ']' };

  emxArray_real_T *phi_consm;
  emxArray_real_T *coef_hat;
  static const int32_T iv9[2] = { 1, 38 };

  char_T i_u[39];
  static const int32_T iv10[2] = { 1, 39 };

  static const int32_T iv11[2] = { 1, 7 };

  static const int32_T iv12[2] = { 1, 36 };

  static const char_T j_u[36] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', ' ', 'P', 'e',
    'r', 'c', 'e', 'n', 't', ' ', 'D', 'o', 'n', 'e', '\\', 'n' };

  uint32_T u0;
  uint32_T b_phi0;
  static const int32_T iv13[2] = { 1, 39 };

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
  st.site = &wl_emlrtRSI;
  format(&st, y, &emlrtMCI);

  /*  number of columns */
  nc = data->size[1];
  emxInit_real_T(sp, &mean_Y, 2, &pc_emlrtRTEI, true);
  emxInit_real_T(sp, &Y, 2, &qc_emlrtRTEI, true);
  emxInit_real_T(sp, &X, 2, &b_emlrtRTEI, true);
  if (data->size[1] == 1) {
    st.site = &emlrtRSI;
    mean(&st, data, mean_Y);
    st.site = &b_emlrtRSI;
    demeanc(&st, data, Y);
    i0 = X->size[0] * X->size[1];
    X->size[0] = data->size[0];
    X->size[1] = 1;
    emxEnsureCapacity_real_T(sp, X, i0, &b_emlrtRTEI);
    loop_ub = data->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      X->data[i0] = 0.0;
    }
  } else {
    loop_ub = data->size[0];
    b_data = data->size[1];
    i0 = Y->size[0] * Y->size[1];
    Y->size[0] = loop_ub;
    Y->size[1] = yind->size[1];
    emxEnsureCapacity_real_T(sp, Y, i0, &emlrtRTEI);
    b_loop_ub = yind->size[1];
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        alpha1 = yind->data[yind->size[0] * i0];
        if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
          emlrtIntegerCheckR2012b(alpha1, &k_emlrtDCI, sp);
        }

        phi0_idx_0 = (int32_T)alpha1;
        if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= b_data))) {
          emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, b_data, &y_emlrtBCI, sp);
        }

        Y->data[i1 + Y->size[0] * i0] = data->data[i1 + data->size[0] *
          (phi0_idx_0 - 1)];
      }
    }

    loop_ub = data->size[0];
    b_data = data->size[1];
    i0 = X->size[0] * X->size[1];
    X->size[0] = loop_ub;
    X->size[1] = xind->size[1];
    emxEnsureCapacity_real_T(sp, X, i0, &c_emlrtRTEI);
    b_loop_ub = xind->size[1];
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        alpha1 = xind->data[xind->size[0] * i0];
        if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
          emlrtIntegerCheckR2012b(alpha1, &l_emlrtDCI, sp);
        }

        phi0_idx_0 = (int32_T)alpha1;
        if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= b_data))) {
          emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, b_data, &ab_emlrtBCI, sp);
        }

        X->data[i1 + X->size[0] * i0] = data->data[i1 + data->size[0] *
          (phi0_idx_0 - 1)];
      }
    }

    i0 = mean_Y->size[0] * mean_Y->size[1];
    mean_Y->size[0] = 1;
    mean_Y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, mean_Y, i0, &d_emlrtRTEI);
    mean_Y->data[0] = 0.0;
  }

  n = n0 + n1;
  if (forecast == 'Y') {
    isForecast = 1;

    /*   예측하기 */
  } else {
    isForecast = 0;

    /*  예측 안하기 */
  }

  emxInit_real_T1(sp, &coef, 1, &e_emlrtRTEI, true);

  /*  초기값 설정하기 */
  i0 = coef->size[0];
  coef->size[0] = phi0->size[0] + theta0->size[0];
  emxEnsureCapacity_real_T1(sp, coef, i0, &e_emlrtRTEI);
  loop_ub = phi0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    coef->data[i0] = phi0->data[i0];
  }

  loop_ub = theta0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    coef->data[i0 + phi0->size[0]] = theta0->data[i0];
  }

  emxInit_real_T(sp, &precB0, 2, &rc_emlrtRTEI, true);
  emxInit_real_T1(sp, &b, 1, &f_emlrtRTEI, true);
  sig2 = d0 / a0;
  st.site = &c_emlrtRSI;
  invpd(&st, B0, precB0);
  i0 = b->size[0];
  b->size[0] = b0->size[0];
  emxEnsureCapacity_real_T1(sp, b, i0, &f_emlrtRTEI);
  loop_ub = b0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b->data[i0] = b0->data[i0];
  }

  nr = phi0->size[0];
  b_nr = theta0->size[0];
  i0 = Y->size[1];
  if (1 != i0) {
    emlrtDimSizeEqCheckR2012b(1, i0, &emlrtECI, sp);
  }

  st.site = &d_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (!(X->size[1] == b0->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (b0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T1(&st, &n_error, 1, &h_emlrtRTEI, true);
  if ((X->size[1] == 1) || (b0->size[0] == 1)) {
    i0 = n_error->size[0];
    n_error->size[0] = X->size[0];
    emxEnsureCapacity_real_T1(&st, n_error, i0, &g_emlrtRTEI);
    loop_ub = X->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      n_error->data[i0] = 0.0;
      b_loop_ub = X->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        n_error->data[i0] += X->data[i0 + X->size[0] * i1] * b0->data[i1];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((X->size[0] == 0) || (X->size[1] == 0) || (b0->size[0] == 0)) {
      i0 = n_error->size[0];
      n_error->size[0] = X->size[0];
      emxEnsureCapacity_real_T1(&b_st, n_error, i0, &g_emlrtRTEI);
      loop_ub = X->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        n_error->data[i0] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
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
      i0 = n_error->size[0];
      n_error->size[0] = X->size[0];
      emxEnsureCapacity_real_T1(&c_st, n_error, i0, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X->data[0], &lda_t,
            &b0->data[0], &ldb_t, &beta1, &n_error->data[0], &ldc_t);
    }
  }

  i0 = Y->size[0];
  i1 = n_error->size[0];
  if (i0 != i1) {
    emlrtSizeEqCheck1DR2012b(i0, i1, &b_emlrtECI, sp);
  }

  loop_ub = Y->size[0];
  i0 = n_error->size[0];
  n_error->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(sp, n_error, i0, &h_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    n_error->data[i0] = Y->data[i0] - n_error->data[i0];
  }

  emxInit_real_T1(sp, &coef0, 1, &i_emlrtRTEI, true);
  i0 = coef0->size[0];
  coef0->size[0] = phi0->size[0] + theta0->size[0];
  emxEnsureCapacity_real_T1(sp, coef0, i0, &i_emlrtRTEI);
  loop_ub = phi0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    coef0->data[i0] = phi0->data[i0];
  }

  loop_ub = theta0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    coef0->data[i0 + phi0->size[0]] = theta0->data[i0];
  }

  st.site = &e_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  if (!((PHI0->size[0] == 0) || (PHI0->size[1] == 0))) {
    phi0_idx_0 = PHI0->size[0];
  } else {
    b_data = phi0->size[0];
    phi0_idx_1 = theta0->size[0];
    if (!((b_data == 0) || (phi0_idx_1 == 0))) {
      phi0_idx_0 = phi0->size[0];
    } else {
      phi0_idx_0 = muIntScalarMax_sint32(PHI0->size[0], 0);
      b_data = phi0->size[0];
      if (b_data > phi0_idx_0) {
        phi0_idx_0 = phi0->size[0];
      }
    }
  }

  c_st.site = &id_emlrtRSI;
  if ((PHI0->size[0] == phi0_idx_0) || ((PHI0->size[0] == 0) || (PHI0->size[1] ==
        0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  b_data = phi0->size[0];
  if (b_data == phi0_idx_0) {
  } else {
    b_data = phi0->size[0];
    phi0_idx_1 = theta0->size[0];
    if ((b_data == 0) || (phi0_idx_1 == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (phi0_idx_0 == 0);
  if (empty_non_axis_sizes || (!((PHI0->size[0] == 0) || (PHI0->size[1] == 0))))
  {
    result = PHI0->size[1];
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes) {
    phi0_idx_1 = theta0->size[0];
  } else {
    b_data = phi0->size[0];
    phi0_idx_1 = theta0->size[0];
    if (!((b_data == 0) || (phi0_idx_1 == 0))) {
      phi0_idx_1 = theta0->size[0];
    } else {
      phi0_idx_1 = 0;
    }
  }

  emxInitMatrix_cell_wrap_0(&b_st, reshapes, &uc_emlrtRTEI, true);
  i0 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
  reshapes[1].f1->size[0] = phi0_idx_0;
  reshapes[1].f1->size[1] = phi0_idx_1;
  emxEnsureCapacity_real_T(&b_st, reshapes[1].f1, i0, &k_emlrtRTEI);
  loop_ub = phi0_idx_0 * phi0_idx_1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    reshapes[1].f1->data[i0] = 0.0;
  }

  emxInit_real_T(&b_st, &MHm, 2, &ic_emlrtRTEI, true);
  i0 = MHm->size[0] * MHm->size[1];
  MHm->size[0] = phi0_idx_0;
  MHm->size[1] = result + reshapes[1].f1->size[1];
  emxEnsureCapacity_real_T(&b_st, MHm, i0, &l_emlrtRTEI);
  for (i0 = 0; i0 < result; i0++) {
    for (i1 = 0; i1 < phi0_idx_0; i1++) {
      MHm->data[i1 + MHm->size[0] * i0] = PHI0->data[i1 + phi0_idx_0 * i0];
    }
  }

  loop_ub = reshapes[1].f1->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = reshapes[1].f1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      MHm->data[i1 + MHm->size[0] * (i0 + result)] = reshapes[1].f1->data[i1 +
        reshapes[1].f1->size[0] * i0];
    }
  }

  emxFreeMatrix_cell_wrap_0(reshapes);
  st.site = &e_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  phi0_idx_0 = theta0->size[0];
  phi0_idx_1 = phi0->size[0];
  if (!((phi0_idx_0 == 0) || (phi0_idx_1 == 0))) {
    phi0_idx_0 = theta0->size[0];
  } else if (!((THETA0->size[0] == 0) || (THETA0->size[1] == 0))) {
    phi0_idx_0 = THETA0->size[0];
  } else {
    phi0_idx_0 = theta0->size[0];
    if (phi0_idx_0 > 0) {
      phi0_idx_0 = theta0->size[0];
    } else {
      phi0_idx_0 = 0;
    }

    if (THETA0->size[0] > phi0_idx_0) {
      phi0_idx_0 = THETA0->size[0];
    }
  }

  c_st.site = &id_emlrtRSI;
  b_data = theta0->size[0];
  if (b_data == phi0_idx_0) {
    empty_non_axis_sizes = true;
  } else {
    b_data = theta0->size[0];
    phi0_idx_1 = phi0->size[0];
    if ((b_data == 0) || (phi0_idx_1 == 0)) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
      emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
  }

  if ((THETA0->size[0] == phi0_idx_0) || ((THETA0->size[0] == 0) ||
       (THETA0->size[1] == 0))) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (phi0_idx_0 == 0);
  if (empty_non_axis_sizes) {
    phi0_idx_1 = phi0->size[0];
  } else {
    b_data = theta0->size[0];
    phi0_idx_1 = phi0->size[0];
    if (!((b_data == 0) || (phi0_idx_1 == 0))) {
      phi0_idx_1 = phi0->size[0];
    } else {
      phi0_idx_1 = 0;
    }
  }

  emxInitMatrix_cell_wrap_0(&b_st, b_reshapes, &uc_emlrtRTEI, true);
  i0 = b_reshapes[0].f1->size[0] * b_reshapes[0].f1->size[1];
  b_reshapes[0].f1->size[0] = phi0_idx_0;
  b_reshapes[0].f1->size[1] = phi0_idx_1;
  emxEnsureCapacity_real_T(&b_st, b_reshapes[0].f1, i0, &k_emlrtRTEI);
  loop_ub = phi0_idx_0 * phi0_idx_1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_reshapes[0].f1->data[i0] = 0.0;
  }

  if (empty_non_axis_sizes || (!((THETA0->size[0] == 0) || (THETA0->size[1] == 0))))
  {
    result = THETA0->size[1];
  } else {
    result = 0;
  }

  emxInit_real_T(&b_st, &precCOEF0, 2, &sc_emlrtRTEI, true);
  i0 = precCOEF0->size[0] * precCOEF0->size[1];
  precCOEF0->size[0] = b_reshapes[0].f1->size[0];
  precCOEF0->size[1] = b_reshapes[0].f1->size[1] + result;
  emxEnsureCapacity_real_T(&b_st, precCOEF0, i0, &m_emlrtRTEI);
  loop_ub = b_reshapes[0].f1->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = b_reshapes[0].f1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      precCOEF0->data[i1 + precCOEF0->size[0] * i0] = b_reshapes[0].f1->data[i1
        + b_reshapes[0].f1->size[0] * i0];
    }
  }

  for (i0 = 0; i0 < result; i0++) {
    for (i1 = 0; i1 < phi0_idx_0; i1++) {
      precCOEF0->data[i1 + precCOEF0->size[0] * (i0 + b_reshapes[0].f1->size[1])]
        = THETA0->data[i1 + phi0_idx_0 * i0];
    }
  }

  emxFreeMatrix_cell_wrap_0(b_reshapes);
  st.site = &e_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  if (!((MHm->size[0] == 0) || (MHm->size[1] == 0))) {
    result = MHm->size[1];
  } else if (!((precCOEF0->size[0] == 0) || (precCOEF0->size[1] == 0))) {
    result = precCOEF0->size[1];
  } else {
    result = muIntScalarMax_sint32(MHm->size[1], 0);
    if (precCOEF0->size[1] > result) {
      result = precCOEF0->size[1];
    }
  }

  c_st.site = &id_emlrtRSI;
  if ((MHm->size[1] == result) || ((MHm->size[0] == 0) || (MHm->size[1] == 0)))
  {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((precCOEF0->size[1] == result) || ((precCOEF0->size[0] == 0) ||
       (precCOEF0->size[1] == 0))) {
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (!((MHm->size[0] == 0) || (MHm->size[1] == 0)))) {
    phi0_idx_1 = MHm->size[0];
  } else {
    phi0_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (!((precCOEF0->size[0] == 0) || (precCOEF0->size[1]
         == 0)))) {
    phi0_idx_0 = precCOEF0->size[0];
  } else {
    phi0_idx_0 = 0;
  }

  emxInit_real_T(&b_st, &COEF0, 2, &n_emlrtRTEI, true);
  i0 = COEF0->size[0] * COEF0->size[1];
  COEF0->size[0] = phi0_idx_1 + phi0_idx_0;
  COEF0->size[1] = result;
  emxEnsureCapacity_real_T(&b_st, COEF0, i0, &n_emlrtRTEI);
  for (i0 = 0; i0 < result; i0++) {
    for (i1 = 0; i1 < phi0_idx_1; i1++) {
      COEF0->data[i1 + COEF0->size[0] * i0] = MHm->data[i1 + phi0_idx_1 * i0];
    }
  }

  for (i0 = 0; i0 < result; i0++) {
    for (i1 = 0; i1 < phi0_idx_0; i1++) {
      COEF0->data[(i1 + phi0_idx_1) + COEF0->size[0] * i0] = precCOEF0->data[i1
        + phi0_idx_0 * i0];
    }
  }

  emxInit_real_T(&b_st, &bm, 2, &o_emlrtRTEI, true);
  st.site = &f_emlrtRSI;
  invpd(&st, COEF0, precCOEF0);

  /*  MCMC output을 저장할 방 */
  i0 = bm->size[0] * bm->size[1];
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &h_emlrtDCI, sp);
  }

  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &g_emlrtDCI, sp);
  }

  bm->size[0] = (int32_T)n;
  bm->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, bm, i0, &o_emlrtRTEI);
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &n_emlrtDCI, sp);
  }

  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n * X->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    bm->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Vm, 2, &p_emlrtRTEI, true);
  i0 = Vm->size[0] * Vm->size[1];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, sp);
  }

  Vm->size[0] = (int32_T)n;
  Vm->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, Vm, i0, &p_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &o_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n * X->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Vm->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &sig2m, 1, &q_emlrtRTEI, true);
  i0 = sig2m->size[0];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &p_emlrtDCI, sp);
  }

  sig2m->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T1(sp, sig2m, i0, &q_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &p_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    sig2m->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &coefm, 2, &r_emlrtRTEI, true);
  i0 = coefm->size[0] * coefm->size[1];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, sp);
  }

  coefm->size[0] = (int32_T)n;
  coefm->size[1] = coef->size[0];
  emxEnsureCapacity_real_T(sp, coefm, i0, &r_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &q_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n * coef->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    coefm->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &logLik, 1, &s_emlrtRTEI, true);
  i0 = logLik->size[0];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &r_emlrtDCI, sp);
  }

  logLik->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T1(sp, logLik, i0, &s_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &r_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    logLik->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &Yfm, 1, &t_emlrtRTEI, true);
  i0 = Yfm->size[0];
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &s_emlrtDCI, sp);
  }

  Yfm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T1(sp, Yfm, i0, &t_emlrtRTEI);
  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &s_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Yfm->data[i0] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &wn_emlrtRTEI, sp);
  phi0_idx_1 = 0;
  emxInit_real_T1(sp, &b_hat, 1, &sb_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &tc_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &tc_emlrtRTEI, true);
  emxInit_real_T(sp, &b_b, 2, &cb_emlrtRTEI, true);
  while (phi0_idx_1 <= (int32_T)n - 1) {
    /*  report intermediate results */
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*  몫 x와 나머지 resid를 산출 */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((1.0 + (real_T)phi0_idx_1) - muDoubleScalarFloor((1.0 + (real_T)
          phi0_idx_1) / 100.0) * 100.0 == 0.0) {
      st.site = &sm_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i0 = 0; i0 < 37; i0++) {
        c_u[i0] = '=';
      }

      y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 37, m0, &c_u[0]);
      emlrtAssign(&y, m0);
      st.site = &jm_emlrtRSI;
      disp(&st, y, &f_emlrtMCI);
      st.site = &g_emlrtRSI;
      b_st.site = &jd_emlrtRSI;
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
      m0 = emlrtCreateDoubleScalar(1.0 + (real_T)phi0_idx_1);
      emlrtAssign(&d_y, m0);
      c_st.site = &vm_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, y, b_y, c_y, d_y, &y_emlrtMCI),
                       "feval");
      for (i0 = 0; i0 < 37; i0++) {
        c_u[i0] = '=';
      }

      y = NULL;
      m0 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(sp, 37, m0, &c_u[0]);
      emlrtAssign(&y, m0);
      st.site = &im_emlrtRSI;
      disp(&st, y, &g_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateString1(' ');
      emlrtAssign(&y, m0);
      st.site = &hm_emlrtRSI;
      disp(&st, y, &h_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(sp, 8, m0, &f_u[0]);
      emlrtAssign(&y, m0);
      st.site = &gm_emlrtRSI;
      disp(&st, y, &i_emlrtMCI);
      i0 = b_b->size[0] * b_b->size[1];
      b_b->size[0] = 1;
      b_b->size[1] = b->size[0];
      emxEnsureCapacity_real_T(sp, b_b, i0, &cb_emlrtRTEI);
      loop_ub = b->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_b->data[b_b->size[0] * i0] = b->data[i0];
      }

      st.site = &fm_emlrtRSI;
      disp(&st, emlrt_marshallOut(b_b), &j_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(sp, 17, m0, &g_u[0]);
      emlrtAssign(&y, m0);
      st.site = &em_emlrtRSI;
      disp(&st, y, &k_emlrtMCI);
      i0 = b_b->size[0] * b_b->size[1];
      b_b->size[0] = 1;
      b_b->size[1] = coef->size[0];
      emxEnsureCapacity_real_T(sp, b_b, i0, &gb_emlrtRTEI);
      loop_ub = coef->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_b->data[b_b->size[0] * i0] = coef->data[i0];
      }

      st.site = &dm_emlrtRSI;
      disp(&st, emlrt_marshallOut(b_b), &l_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(sp, 8, m0, &h_u[0]);
      emlrtAssign(&y, m0);
      st.site = &cm_emlrtRSI;
      disp(&st, y, &m_emlrtMCI);
      y = NULL;
      m0 = emlrtCreateDoubleScalar(sig2);
      emlrtAssign(&y, m0);
      st.site = &bm_emlrtRSI;
      disp(&st, y, &n_emlrtMCI);
    }

    /*   Step 1 : Sampling Hidden v_t */
    st.site = &h_emlrtRSI;
    Gen_Fm(&st, n_error, coef, sig2, nr, b_nr, b_hat, &alpha1);
    i0 = Vm->size[0];
    i1 = phi0_idx_1 + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &p_emlrtBCI, sp);
    }

    loop_ub = Vm->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i0, &u_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    loop_ub = b_hat->size[0];
    i0 = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, r1, i0, &w_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r1->data[r1->size[0] * i0] = b_hat->data[i0];
    }

    b_X[0] = 1;
    b_X[1] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_X[0], 2, &(*(int32_T (*)[2])r1->size)[0], 2,
      &g_emlrtECI, sp);
    loop_ub = r1->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Vm->data[phi0_idx_1 + Vm->size[0] * r0->data[i0]] = r1->data[r1->size[0] *
        i0];
    }

    i0 = logLik->size[0];
    if (!((phi0_idx_1 + 1 >= 1) && (phi0_idx_1 + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_1 + 1, 1, i0, &eb_emlrtBCI, sp);
    }

    logLik->data[phi0_idx_1] = alpha1;

    /*   Step 2 : coef sammpling */
    st.site = &i_emlrtRSI;
    Gen_coef(&st, n_error, b_hat, coef0, precCOEF0, nr, b_nr, sig2, coefm, coef);
    i0 = coefm->size[0];
    i1 = phi0_idx_1 + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
    }

    loop_ub = coefm->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i0, &ab_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    b_X[0] = 1;
    b_X[1] = r0->size[0];
    b_precCOEF0[0] = 1;
    b_precCOEF0[1] = coef->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_X[0], 2, &b_precCOEF0[0], 2, &c_emlrtECI,
      sp);
    loop_ub = coef->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      coefm->data[phi0_idx_1 + coefm->size[0] * r0->data[i0]] = coef->data[i0];
    }

    /*  mu와 phi 저장하기 */
    i0 = sig2m->size[0];
    if (!((phi0_idx_1 + 1 >= 1) && (phi0_idx_1 + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_1 + 1, 1, i0, &fb_emlrtBCI, sp);
    }

    sig2m->data[phi0_idx_1] = sig2;

    /*   Step 3 : beta, sig2 sampling */
    st.site = &j_emlrtRSI;
    Gen_beta(&st, X, Y, b0, precB0, coef, a0, d0, nr, b_nr, b_hat, sig2, nc, b,
             &sig2_prior);
    sig2 = sig2_prior;
    i0 = bm->size[0];
    i1 = phi0_idx_1 + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &h_emlrtBCI, sp);
    }

    loop_ub = bm->size[1];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i0, &fb_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    b_X[0] = 1;
    b_X[1] = r0->size[0];
    b_precCOEF0[0] = 1;
    b_precCOEF0[1] = b->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_X[0], 2, &b_precCOEF0[0], 2, &f_emlrtECI,
      sp);
    loop_ub = b->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      bm->data[phi0_idx_1 + bm->size[0] * r0->data[i0]] = b->data[i0];
    }

    i0 = Y->size[1];
    if (1 != i0) {
      emlrtDimSizeEqCheckR2012b(1, i0, &d_emlrtECI, sp);
    }

    st.site = &k_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    if (!(X->size[1] == b->size[0])) {
      if (((X->size[0] == 1) && (X->size[1] == 1)) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((X->size[1] == 1) || (b->size[0] == 1)) {
      i0 = n_error->size[0];
      n_error->size[0] = X->size[0];
      emxEnsureCapacity_real_T1(&st, n_error, i0, &jb_emlrtRTEI);
      loop_ub = X->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        n_error->data[i0] = 0.0;
        b_loop_ub = X->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          n_error->data[i0] += X->data[i0 + X->size[0] * i1] * b->data[i1];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((X->size[0] == 0) || (X->size[1] == 0) || (b->size[0] == 0)) {
        i0 = n_error->size[0];
        n_error->size[0] = X->size[0];
        emxEnsureCapacity_real_T1(&b_st, n_error, i0, &jb_emlrtRTEI);
        loop_ub = X->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          n_error->data[i0] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
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
        i0 = n_error->size[0];
        n_error->size[0] = X->size[0];
        emxEnsureCapacity_real_T1(&c_st, n_error, i0, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &X->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &n_error->data[0], &ldc_t);
      }
    }

    i0 = Y->size[0];
    i1 = n_error->size[0];
    if (i0 != i1) {
      emlrtSizeEqCheck1DR2012b(i0, i1, &e_emlrtECI, sp);
    }

    loop_ub = Y->size[0];
    i0 = n_error->size[0];
    n_error->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(sp, n_error, i0, &mb_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      n_error->data[i0] = Y->data[i0] - n_error->data[i0];
    }

    if (isForecast == 1) {
      /*   예측 */
      i0 = Yfm->size[0];
      if (!((phi0_idx_1 + 1 >= 1) && (phi0_idx_1 + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(phi0_idx_1 + 1, 1, i0, &gb_emlrtBCI, sp);
      }

      st.site = &l_emlrtRSI;
      Yfm->data[phi0_idx_1] = Gen_Forecast(&st, n_error, b_hat, coef, b,
        sig2_prior, nr, b_nr, x_f);

      /*          PredLikm(iter) = exp(lnpredlik); */
    }

    phi0_idx_1++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&precB0);
  y = NULL;
  m0 = emlrtCreateString1(' ');
  emlrtAssign(&y, m0);
  st.site = &rm_emlrtRSI;
  disp(&st, y, &b_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 38, m0, &b_u[0]);
  emlrtAssign(&y, m0);
  st.site = &qm_emlrtRSI;
  disp(&st, y, &c_emlrtMCI);
  y = NULL;
  m0 = emlrtCreateString1(' ');
  emlrtAssign(&y, m0);
  st.site = &pm_emlrtRSI;
  disp(&st, y, &d_emlrtMCI);

  /*  Summary of Output */
  if (n0 + 1.0 > n) {
    i0 = 0;
    phi0_idx_0 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, sp);
    }

    i0 = logLik->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &b_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = logLik->size[0];
    phi0_idx_0 = (int32_T)n;
    if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, i1, &c_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &b_logLik, 1, &v_emlrtRTEI, true);
  i1 = b_logLik->size[0];
  b_logLik->size[0] = phi0_idx_0 - i0;
  emxEnsureCapacity_real_T1(sp, b_logLik, i1, &v_emlrtRTEI);
  loop_ub = phi0_idx_0 - i0;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_logLik->data[i1] = logLik->data[i0 + i1];
  }

  i0 = logLik->size[0];
  logLik->size[0] = b_logLik->size[0];
  emxEnsureCapacity_real_T1(sp, logLik, i0, &x_emlrtRTEI);
  loop_ub = b_logLik->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    logLik->data[i0] = b_logLik->data[i0];
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    phi0_idx_0 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, sp);
    }

    i0 = coefm->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = coefm->size[0];
    phi0_idx_0 = (int32_T)n;
    if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, i1, &e_emlrtBCI, sp);
    }
  }

  b_data = coefm->size[1];
  i1 = Y->size[0] * Y->size[1];
  Y->size[0] = phi0_idx_0 - i0;
  Y->size[1] = b_data;
  emxEnsureCapacity_real_T(sp, Y, i1, &y_emlrtRTEI);
  for (i1 = 0; i1 < b_data; i1++) {
    loop_ub = phi0_idx_0 - i0;
    for (phi0_idx_1 = 0; phi0_idx_1 < loop_ub; phi0_idx_1++) {
      Y->data[phi0_idx_1 + Y->size[0] * i1] = coefm->data[(i0 + phi0_idx_1) +
        coefm->size[0] * i1];
    }
  }

  i0 = coefm->size[0] * coefm->size[1];
  coefm->size[0] = Y->size[0];
  coefm->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, coefm, i0, &bb_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = Y->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      coefm->data[i1 + coefm->size[0] * i0] = Y->data[i1 + Y->size[0] * i0];
    }
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    phi0_idx_0 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, sp);
    }

    i0 = sig2m->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &f_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = sig2m->size[0];
    phi0_idx_0 = (int32_T)n;
    if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, i1, &g_emlrtBCI, sp);
    }
  }

  i1 = b_logLik->size[0];
  b_logLik->size[0] = phi0_idx_0 - i0;
  emxEnsureCapacity_real_T1(sp, b_logLik, i1, &db_emlrtRTEI);
  loop_ub = phi0_idx_0 - i0;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_logLik->data[i1] = sig2m->data[i0 + i1];
  }

  i0 = sig2m->size[0];
  sig2m->size[0] = b_logLik->size[0];
  emxEnsureCapacity_real_T1(sp, sig2m, i0, &eb_emlrtRTEI);
  loop_ub = b_logLik->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    sig2m->data[i0] = b_logLik->data[i0];
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    phi0_idx_0 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, sp);
    }

    i0 = bm->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &i_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = bm->size[0];
    phi0_idx_0 = (int32_T)n;
    if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, i1, &j_emlrtBCI, sp);
    }
  }

  b_data = bm->size[1];
  i1 = Y->size[0] * Y->size[1];
  Y->size[0] = phi0_idx_0 - i0;
  Y->size[1] = b_data;
  emxEnsureCapacity_real_T(sp, Y, i1, &hb_emlrtRTEI);
  for (i1 = 0; i1 < b_data; i1++) {
    loop_ub = phi0_idx_0 - i0;
    for (phi0_idx_1 = 0; phi0_idx_1 < loop_ub; phi0_idx_1++) {
      Y->data[phi0_idx_1 + Y->size[0] * i1] = bm->data[(i0 + phi0_idx_1) +
        bm->size[0] * i1];
    }
  }

  i0 = bm->size[0] * bm->size[1];
  bm->size[0] = Y->size[0];
  bm->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, bm, i0, &ib_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = Y->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      bm->data[i1 + bm->size[0] * i0] = Y->data[i1 + Y->size[0] * i0];
    }
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    phi0_idx_0 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, sp);
    }

    i0 = Yfm->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &k_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = Yfm->size[0];
    phi0_idx_0 = (int32_T)n;
    if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, i1, &l_emlrtBCI, sp);
    }
  }

  i1 = b_logLik->size[0];
  b_logLik->size[0] = phi0_idx_0 - i0;
  emxEnsureCapacity_real_T1(sp, b_logLik, i1, &kb_emlrtRTEI);
  loop_ub = phi0_idx_0 - i0;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_logLik->data[i1] = Yfm->data[i0 + i1];
  }

  i0 = Yfm->size[0];
  Yfm->size[0] = b_logLik->size[0];
  emxEnsureCapacity_real_T1(sp, Yfm, i0, &lb_emlrtRTEI);
  loop_ub = b_logLik->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Yfm->data[i0] = b_logLik->data[i0];
  }

  emxInit_real_T1(sp, &phi_consm, 1, &nb_emlrtRTEI, true);
  i0 = phi_consm->size[0];
  if (!(n1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n1, &u_emlrtDCI, sp);
  }

  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &t_emlrtDCI, sp);
  }

  phi_consm->size[0] = (int32_T)n1;
  emxEnsureCapacity_real_T1(sp, phi_consm, i0, &nb_emlrtRTEI);
  if (!(n1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n1, &u_emlrtDCI, sp);
  }

  if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
    emlrtIntegerCheckR2012b(n1, &t_emlrtDCI, sp);
  }

  loop_ub = (int32_T)n1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    phi_consm->data[i0] = 0.0;
  }

  if (data->size[1] == 1) {
    if (1 > phi0->size[0]) {
      loop_ub = 0;
    } else {
      i0 = coefm->size[1];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &m_emlrtBCI, sp);
      }

      i0 = coefm->size[1];
      loop_ub = phi0->size[0];
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &n_emlrtBCI, sp);
      }
    }

    st.site = &m_emlrtRSI;
    b_loop_ub = coefm->size[0];
    i0 = MHm->size[0] * MHm->size[1];
    MHm->size[0] = b_loop_ub;
    MHm->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, MHm, i0, &ob_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        MHm->data[i1 + MHm->size[0] * i0] = coefm->data[i1 + coefm->size[0] * i0];
      }
    }

    i0 = b->size[0];
    b->size[0] = phi0->size[0];
    emxEnsureCapacity_real_T1(&st, b, i0, &pb_emlrtRTEI);
    b_loop_ub = phi0->size[0];
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      b->data[i0] = 1.0;
    }

    b_st.site = &tc_emlrtRSI;
    if (!(loop_ub == phi0->size[0])) {
      i0 = coefm->size[0];
      if (((i0 == 1) && (loop_ub == 1)) || (phi0->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((loop_ub == 1) || (phi0->size[0] == 1)) {
      i0 = n_error->size[0];
      n_error->size[0] = MHm->size[0];
      emxEnsureCapacity_real_T1(&st, n_error, i0, &tb_emlrtRTEI);
      loop_ub = MHm->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        n_error->data[i0] = 0.0;
        b_loop_ub = MHm->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          n_error->data[i0] += MHm->data[i0 + MHm->size[0] * i1];
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      i0 = coefm->size[0];
      if ((i0 == 0) || (loop_ub == 0) || (phi0->size[0] == 0)) {
        loop_ub = coefm->size[0];
        i0 = n_error->size[0];
        n_error->size[0] = loop_ub;
        emxEnsureCapacity_real_T1(&b_st, n_error, i0, &xb_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          n_error->data[i0] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        i0 = coefm->size[0];
        m_t = (ptrdiff_t)i0;
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)loop_ub;
        i0 = coefm->size[0];
        lda_t = (ptrdiff_t)i0;
        ldb_t = (ptrdiff_t)loop_ub;
        i0 = coefm->size[0];
        ldc_t = (ptrdiff_t)i0;
        i0 = coefm->size[0];
        i1 = n_error->size[0];
        n_error->size[0] = i0;
        emxEnsureCapacity_real_T1(&c_st, n_error, i1, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &MHm->data[0], &lda_t,
              &b->data[0], &ldb_t, &beta1, &n_error->data[0], &ldc_t);
      }
    }

    i0 = n_error->size[0];
    emxEnsureCapacity_real_T1(sp, n_error, i0, &vb_emlrtRTEI);
    loop_ub = n_error->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      n_error->data[i0] = 1.0 - n_error->data[i0];
    }

    emlrtForLoopVectorCheckR2012b(1.0, 1.0, n1, mxDOUBLE_CLASS, (int32_T)n1,
      &xn_emlrtRTEI, sp);
    b_data = 1;
    while (b_data - 1 <= (int32_T)n1 - 1) {
      i0 = mean_Y->size[1];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &o_emlrtBCI, sp);
      }

      i0 = n_error->size[0];
      if (!((b_data >= 1) && (b_data <= i0))) {
        emlrtDynamicBoundsCheckR2012b(b_data, 1, i0, &cb_emlrtBCI, sp);
      }

      i0 = phi_consm->size[0];
      if (!((b_data >= 1) && (b_data <= i0))) {
        emlrtDynamicBoundsCheckR2012b(b_data, 1, i0, &db_emlrtBCI, sp);
      }

      phi_consm->data[b_data - 1] = mean_Y->data[0] * n_error->data[b_data - 1];
      b_data++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  emxFree_real_T(&mean_Y);

  /*  if isForecast ==1 */
  /*      Yfm = Yfm(n0+1:n, :); */
  /*      PredLikm = PredLikm(n0+1:n, :);   % 번인 버리기 */
  /*      predlik = meanc(PredLikm); */
  /*  end */
  if (n0 + 1.0 > n) {
    i0 = 0;
    phi0_idx_0 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &f_emlrtDCI, sp);
    }

    i0 = Vm->size[0];
    i1 = (int32_T)(n0 + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &q_emlrtBCI, sp);
    }

    i0 = i1 - 1;
    i1 = Vm->size[0];
    phi0_idx_0 = (int32_T)n;
    if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, i1, &r_emlrtBCI, sp);
    }
  }

  b_data = Vm->size[1];
  i1 = Y->size[0] * Y->size[1];
  Y->size[0] = phi0_idx_0 - i0;
  Y->size[1] = b_data;
  emxEnsureCapacity_real_T(sp, Y, i1, &qb_emlrtRTEI);
  for (i1 = 0; i1 < b_data; i1++) {
    loop_ub = phi0_idx_0 - i0;
    for (phi0_idx_1 = 0; phi0_idx_1 < loop_ub; phi0_idx_1++) {
      Y->data[phi0_idx_1 + Y->size[0] * i1] = Vm->data[(i0 + phi0_idx_1) +
        Vm->size[0] * i1];
    }
  }

  i0 = Vm->size[0] * Vm->size[1];
  Vm->size[0] = Y->size[0];
  Vm->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, Vm, i0, &rb_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = Y->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Vm->data[i1 + Vm->size[0] * i0] = Y->data[i1 + Y->size[0] * i0];
    }
  }

  i0 = b_hat->size[0];
  b_hat->size[0] = b0->size[0];
  emxEnsureCapacity_real_T1(sp, b_hat, i0, &sb_emlrtRTEI);
  loop_ub = b0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_hat->data[i0] = b0->data[i0];
  }

  emxInit_real_T1(sp, &coef_hat, 1, &ub_emlrtRTEI, true);
  i0 = coef_hat->size[0];
  coef_hat->size[0] = coef0->size[0];
  emxEnsureCapacity_real_T1(sp, coef_hat, i0, &ub_emlrtRTEI);
  loop_ub = coef0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    coef_hat->data[i0] = coef0->data[i0];
  }

  n = d0 / a0;
  alpha1 = 0.0;
  if (ML == 'Y') {
    sig2 = -4.8516519540979028E+8;

    /*  임의로 값을 주고 시작함 */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, n1, mxDOUBLE_CLASS, (int32_T)n1,
      &yn_emlrtRTEI, sp);
    phi0_idx_1 = 0;
    while (phi0_idx_1 <= (int32_T)n1 - 1) {
      /*  y = x*b + resid */
      /*  x and b are both integer, and resid is positive */
      /*  몫 x와 나머지 resid를 산출 */
      /*      if resid == 0 */
      /*         resid = b; */
      /*         x = x - 1; */
      /*      end */
      if ((1.0 + (real_T)phi0_idx_1) - muDoubleScalarFloor((1.0 + (real_T)
            phi0_idx_1) / 100.0) * 100.0 == 0.0) {
        st.site = &tm_emlrtRSI;
        clc(&st, &o_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateString1(' ');
        emlrtAssign(&y, m0);
        st.site = &om_emlrtRSI;
        disp(&st, y, &p_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv9);
        emlrtInitCharArrayR2013a(sp, 38, m0, &b_u[0]);
        emlrtAssign(&y, m0);
        st.site = &nm_emlrtRSI;
        disp(&st, y, &q_emlrtMCI);
        y = NULL;
        m0 = emlrtCreateString1(' ');
        emlrtAssign(&y, m0);
        st.site = &mm_emlrtRSI;
        disp(&st, y, &r_emlrtMCI);
        for (i0 = 0; i0 < 39; i0++) {
          i_u[i0] = '=';
        }

        y = NULL;
        m0 = emlrtCreateCharArray(2, iv10);
        emlrtInitCharArrayR2013a(sp, 39, m0, &i_u[0]);
        emlrtAssign(&y, m0);
        st.site = &lm_emlrtRSI;
        disp(&st, y, &s_emlrtMCI);
        st.site = &n_emlrtRSI;
        b_st.site = &jd_emlrtRSI;
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv11);
        emlrtInitCharArrayR2013a(&b_st, 7, m0, &d_u[0]);
        emlrtAssign(&y, m0);
        b_y = NULL;
        m0 = emlrtCreateDoubleScalar(1.0);
        emlrtAssign(&b_y, m0);
        c_y = NULL;
        m0 = emlrtCreateCharArray(2, iv12);
        emlrtInitCharArrayR2013a(&b_st, 36, m0, &j_u[0]);
        emlrtAssign(&c_y, m0);
        d_y = NULL;
        m0 = emlrtCreateDoubleScalar((1.0 + (real_T)phi0_idx_1) * 100.0 / n1);
        emlrtAssign(&d_y, m0);
        c_st.site = &vm_emlrtRSI;
        emlrt_marshallIn(&c_st, feval(&c_st, y, b_y, c_y, d_y, &y_emlrtMCI),
                         "feval");
        for (i0 = 0; i0 < 39; i0++) {
          i_u[i0] = '=';
        }

        y = NULL;
        m0 = emlrtCreateCharArray(2, iv13);
        emlrtInitCharArrayR2013a(sp, 39, m0, &i_u[0]);
        emlrtAssign(&y, m0);
        st.site = &km_emlrtRSI;
        disp(&st, y, &t_emlrtMCI);
      }

      loop_ub = coefm->size[1];
      i0 = coefm->size[0];
      if (!((phi0_idx_1 + 1 >= 1) && (phi0_idx_1 + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(phi0_idx_1 + 1, 1, i0, &s_emlrtBCI, sp);
      }

      b_data = phi0_idx_1 + 1;
      i0 = coef->size[0];
      coef->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(sp, coef, i0, &bc_emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        coef->data[i0] = coefm->data[(b_data + coefm->size[0] * i0) - 1];
      }

      i0 = sig2m->size[0];
      i1 = phi0_idx_1 + 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &t_emlrtBCI, sp);
      }

      loop_ub = bm->size[1];
      i0 = bm->size[0];
      if (!((phi0_idx_1 + 1 >= 1) && (phi0_idx_1 + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(phi0_idx_1 + 1, 1, i0, &u_emlrtBCI, sp);
      }

      b_data = phi0_idx_1 + 1;
      i0 = b->size[0];
      b->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(sp, b, i0, &dc_emlrtRTEI);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b->data[i0] = bm->data[(b_data + bm->size[0] * i0) - 1];
      }

      i0 = logLik->size[0];
      i1 = phi0_idx_1 + 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &v_emlrtBCI, sp);
      }

      if (nc == 1) {
        alpha1 = 0.0;
      } else {
        st.site = &o_emlrtRSI;
        alpha1 = b_lnpdfmvn(&st, b, b0, B0);
      }

      st.site = &p_emlrtRSI;
      beta1 = b_lnpdfmvn(&st, coef, coef0, COEF0);
      st.site = &q_emlrtRSI;
      sig2_prior = lnpdfig(&st, sig2m->data[phi0_idx_1], a0 / 2.0, d0 / 2.0);
      alpha1 = logLik->data[phi0_idx_1] + ((alpha1 + beta1) + sig2_prior);
      if (alpha1 > sig2) {
        i0 = b_hat->size[0];
        b_hat->size[0] = b->size[0];
        emxEnsureCapacity_real_T1(sp, b_hat, i0, &hc_emlrtRTEI);
        loop_ub = b->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          b_hat->data[i0] = b->data[i0];
        }

        i0 = coef_hat->size[0];
        coef_hat->size[0] = coef->size[0];
        emxEnsureCapacity_real_T1(sp, coef_hat, i0, &jc_emlrtRTEI);
        loop_ub = coef->size[0];
        for (i0 = 0; i0 < loop_ub; i0++) {
          coef_hat->data[i0] = coef->data[i0];
        }

        n = sig2m->data[phi0_idx_1];
        sig2 = alpha1;

        /*  최빈값 후보의 사후 커널값 */
      }

      phi0_idx_1++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (data->size[1] == 1) {
      st.site = &r_emlrtRSI;
      b_st.site = &hd_emlrtRSI;
      if (!((coefm->size[0] == 0) || (coefm->size[1] == 0))) {
        result = coefm->size[0];
      } else if (!(sig2m->size[0] == 0)) {
        result = sig2m->size[0];
      } else {
        result = muIntScalarMax_sint32(coefm->size[0], 0);
      }

      c_st.site = &id_emlrtRSI;
      if ((coefm->size[0] == result) || ((coefm->size[0] == 0) || (coefm->size[1]
            == 0))) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
        emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((sig2m->size[0] == result) || (sig2m->size[0] == 0)) {
      } else {
        empty_non_axis_sizes = false;
      }

      if (!empty_non_axis_sizes) {
        emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || (!((coefm->size[0] == 0) || (coefm->size[1] ==
             0)))) {
        phi0_idx_1 = coefm->size[1];
      } else {
        phi0_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (!(sig2m->size[0] == 0))) {
        phi0_idx_0 = 1;
      } else {
        phi0_idx_0 = 0;
      }

      i0 = MHm->size[0] * MHm->size[1];
      MHm->size[0] = result;
      MHm->size[1] = phi0_idx_1 + phi0_idx_0;
      emxEnsureCapacity_real_T(&b_st, MHm, i0, &ic_emlrtRTEI);
      for (i0 = 0; i0 < phi0_idx_1; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          MHm->data[i1 + MHm->size[0] * i0] = coefm->data[i1 + result * i0];
        }
      }

      for (i0 = 0; i0 < phi0_idx_0; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          MHm->data[i1 + MHm->size[0] * (i0 + phi0_idx_1)] = sig2m->data[i1 +
            result * i0];
        }
      }
    } else {
      st.site = &s_emlrtRSI;
      b_st.site = &hd_emlrtRSI;
      if (!((bm->size[0] == 0) || (bm->size[1] == 0))) {
        result = bm->size[0];
      } else if (!((coefm->size[0] == 0) || (coefm->size[1] == 0))) {
        result = coefm->size[0];
      } else if (!(sig2m->size[0] == 0)) {
        result = sig2m->size[0];
      } else {
        result = muIntScalarMax_sint32(bm->size[0], 0);
        if (coefm->size[0] > result) {
          result = coefm->size[0];
        }
      }

      c_st.site = &id_emlrtRSI;
      if ((bm->size[0] == result) || ((bm->size[0] == 0) || (bm->size[1] == 0)))
      {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
        emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((coefm->size[0] == result) || ((coefm->size[0] == 0) || (coefm->size[1]
            == 0))) {
      } else {
        empty_non_axis_sizes = false;
      }

      if (!empty_non_axis_sizes) {
        emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((sig2m->size[0] == result) || (sig2m->size[0] == 0)) {
      } else {
        empty_non_axis_sizes = false;
      }

      if (!empty_non_axis_sizes) {
        emlrtErrorWithMessageIdR2018a(&c_st, &co_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || (!((bm->size[0] == 0) || (bm->size[1] == 0))))
      {
        phi0_idx_1 = bm->size[1];
      } else {
        phi0_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (!((coefm->size[0] == 0) || (coefm->size[1] ==
             0)))) {
        phi0_idx_0 = coefm->size[1];
      } else {
        phi0_idx_0 = 0;
      }

      if (empty_non_axis_sizes || (!(sig2m->size[0] == 0))) {
        b_data = 1;
      } else {
        b_data = 0;
      }

      i0 = MHm->size[0] * MHm->size[1];
      MHm->size[0] = result;
      MHm->size[1] = (phi0_idx_1 + phi0_idx_0) + b_data;
      emxEnsureCapacity_real_T(&b_st, MHm, i0, &kc_emlrtRTEI);
      for (i0 = 0; i0 < phi0_idx_1; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          MHm->data[i1 + MHm->size[0] * i0] = bm->data[i1 + result * i0];
        }
      }

      for (i0 = 0; i0 < phi0_idx_0; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          MHm->data[i1 + MHm->size[0] * (i0 + phi0_idx_1)] = coefm->data[i1 +
            result * i0];
        }
      }

      for (i0 = 0; i0 < b_data; i0++) {
        for (i1 = 0; i1 < result; i1++) {
          MHm->data[i1 + MHm->size[0] * ((i0 + phi0_idx_1) + phi0_idx_0)] =
            sig2m->data[i1 + result * i0];
        }
      }
    }

    st.site = &t_emlrtRSI;
    meanc(&st, MHm, n_error);
    st.site = &u_emlrtRSI;
    cov(&st, MHm, X);
    st.site = &u_emlrtRSI;
    cov(&st, MHm, Y);
    i0 = precCOEF0->size[0] * precCOEF0->size[1];
    precCOEF0->size[0] = Y->size[1];
    precCOEF0->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, precCOEF0, i0, &lc_emlrtRTEI);
    loop_ub = Y->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = Y->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        precCOEF0->data[i1 + precCOEF0->size[0] * i0] = Y->data[i0 + Y->size[0] *
          i1];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_X[i0] = X->size[i0];
      b_precCOEF0[i0] = precCOEF0->size[i0];
    }

    if ((b_X[0] != b_precCOEF0[0]) || (b_X[1] != b_precCOEF0[1])) {
      emlrtSizeEqCheckNDR2012b(&b_X[0], &b_precCOEF0[0], &h_emlrtECI, sp);
    }

    loop_ub = X->size[0] * X->size[1] - 1;
    i0 = X->size[0] * X->size[1];
    emxEnsureCapacity_real_T(sp, X, i0, &mc_emlrtRTEI);
    for (i0 = 0; i0 <= loop_ub; i0++) {
      X->data[i0] = 0.5 * (X->data[i0] + precCOEF0->data[i0]);
    }

    if (data->size[1] == 1) {
      i0 = b_logLik->size[0];
      b_logLik->size[0] = coef_hat->size[0] + 1;
      emxEnsureCapacity_real_T1(sp, b_logLik, i0, &oc_emlrtRTEI);
      loop_ub = coef_hat->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_logLik->data[i0] = coef_hat->data[i0];
      }

      b_logLik->data[coef_hat->size[0]] = n;
      st.site = &v_emlrtRSI;
      alpha1 = b_lnpdfmvn(&st, b_logLik, n_error, X);
    } else {
      i0 = b_logLik->size[0];
      b_logLik->size[0] = (b_hat->size[0] + coef_hat->size[0]) + 1;
      emxEnsureCapacity_real_T1(sp, b_logLik, i0, &nc_emlrtRTEI);
      loop_ub = b_hat->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_logLik->data[i0] = b_hat->data[i0];
      }

      loop_ub = coef_hat->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_logLik->data[i0 + b_hat->size[0]] = coef_hat->data[i0];
      }

      b_logLik->data[b_hat->size[0] + coef_hat->size[0]] = n;
      st.site = &w_emlrtRSI;
      alpha1 = b_lnpdfmvn(&st, b_logLik, n_error, X);
    }

    alpha1 = sig2 - alpha1;
  }

  emxFree_real_T(&b_logLik);
  emxFree_real_T(&MHm);
  emxFree_real_T(&coef_hat);
  emxFree_real_T(&b_hat);
  emxFree_real_T(&logLik);
  emxFree_real_T(&precCOEF0);
  emxFree_real_T(&COEF0);
  emxFree_real_T(&coef0);
  emxFree_real_T(&n_error);
  emxFree_real_T(&b);
  emxFree_real_T(&coef);
  emxFree_real_T(&X);
  emxFree_real_T(&Y);
  i0 = Output->Yfm->size[0];
  Output->Yfm->size[0] = Yfm->size[0];
  emxEnsureCapacity_real_T1(sp, Output->Yfm, i0, &wb_emlrtRTEI);
  loop_ub = Yfm->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Yfm->data[i0] = Yfm->data[i0];
  }

  emxFree_real_T(&Yfm);
  i0 = Output->Vm->size[0] * Output->Vm->size[1];
  Output->Vm->size[0] = Vm->size[0];
  Output->Vm->size[1] = Vm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Vm, i0, &yb_emlrtRTEI);
  loop_ub = Vm->size[0] * Vm->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Vm->data[i0] = Vm->data[i0];
  }

  emxFree_real_T(&Vm);
  i0 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = bm->size[0];
  Output->betam->size[1] = bm->size[1];
  emxEnsureCapacity_real_T(sp, Output->betam, i0, &ac_emlrtRTEI);
  loop_ub = bm->size[0] * bm->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->betam->data[i0] = bm->data[i0];
  }

  emxFree_real_T(&bm);
  if (1 > phi0->size[0]) {
    loop_ub = 0;
  } else {
    i0 = coefm->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &w_emlrtBCI, sp);
    }

    i0 = coefm->size[1];
    loop_ub = phi0->size[0];
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &x_emlrtBCI, sp);
    }
  }

  b_loop_ub = coefm->size[0];
  i0 = Output->phim->size[0] * Output->phim->size[1];
  Output->phim->size[0] = b_loop_ub;
  Output->phim->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->phim, i0, &cc_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Output->phim->data[i1 + Output->phim->size[0] * i0] = coefm->data[i1 +
        coefm->size[0] * i0];
    }
  }

  loop_ub = coefm->size[0];
  u0 = (uint32_T)theta0->size[0];
  b_phi0 = (uint32_T)phi0->size[0];
  b_data = coefm->size[1];
  i0 = Output->thetam->size[0] * Output->thetam->size[1];
  Output->thetam->size[0] = loop_ub;
  Output->thetam->size[1] = (int32_T)u0;
  emxEnsureCapacity_real_T(sp, Output->thetam, i0, &ec_emlrtRTEI);
  b_loop_ub = (int32_T)u0 - 1;
  for (i0 = 0; i0 <= b_loop_ub; i0++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      phi0_idx_0 = (int32_T)((i0 + b_phi0) + 1U);
      if (!((phi0_idx_0 >= 1) && (phi0_idx_0 <= b_data))) {
        emlrtDynamicBoundsCheckR2012b(phi0_idx_0, 1, b_data, &bb_emlrtBCI, sp);
      }

      Output->thetam->data[i1 + Output->thetam->size[0] * i0] = coefm->data[i1 +
        coefm->size[0] * (phi0_idx_0 - 1)];
    }
  }

  emxFree_real_T(&coefm);
  i0 = Output->sig2m->size[0];
  Output->sig2m->size[0] = sig2m->size[0];
  emxEnsureCapacity_real_T1(sp, Output->sig2m, i0, &fc_emlrtRTEI);
  loop_ub = sig2m->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->sig2m->data[i0] = sig2m->data[i0];
  }

  emxFree_real_T(&sig2m);
  Output->lnML = alpha1;
  i0 = Output->phi_0->size[0];
  Output->phi_0->size[0] = phi_consm->size[0];
  emxEnsureCapacity_real_T1(sp, Output->phi_0, i0, &gc_emlrtRTEI);
  loop_ub = phi_consm->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->phi_0->data[i0] = phi_consm->data[i0];
  }

  emxFree_real_T(&phi_consm);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ARMA_X.c) */

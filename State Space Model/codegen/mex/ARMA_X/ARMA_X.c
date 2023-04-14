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
#include "ARMA_X.h"
#include "ARMA_X_data.h"
#include "ARMA_X_emxutil.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_types.h"
#include "abs.h"
#include "assertValidSizeArg.h"
#include "chol.h"
#include "cholmod.h"
#include "cov.h"
#include "demeanc.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "gammaln.h"
#include "gamrnd.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "invpd.h"
#include "kron.h"
#include "lnpdfmvn.h"
#include "mean.h"
#include "mtimes.h"
#include "power.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "vec.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11,    /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 12,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 34,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 39,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 41,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 42,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 67,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 79,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 83,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 88,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 91,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 95,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 106, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 108, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 109, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 135, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 152, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 154, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 156, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 157, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 159, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 161, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 6,  /* lineNo */
  "demeanc",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 28, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 100,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 266,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 267,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 271,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 274,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 279,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 280,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 282,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 284,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 285,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 286,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 290,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 292,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 295,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 303,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 308,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 310,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 313,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 323,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 325,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 328,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 330,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 332,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 333,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 335,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 339,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 341,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 343,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 364,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 367,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 369,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 371,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 372,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 187,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 190,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 192,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 193,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 199,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 203,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 204,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 205,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 206,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 207,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 208,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 213,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 214,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 215,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 216,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 217,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 218,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 223,/* lineNo */
  "Gen_coef",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 15, /* lineNo */
  "min",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 46, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 92, /* lineNo */
  "minimum",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 308,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 349,/* lineNo */
  "minOrMax1D",                        /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 407,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 408,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 414,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 415,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 418,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 420,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 423,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 425,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 427,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 12, /* lineNo */
  "randig",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 18, /* lineNo */
  "randgam",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 242,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 243,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 245,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 8,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 9,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 5,     /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 122, /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 123, /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 124, /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 65,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 66,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 68,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 69,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 70,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 71,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 72,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 73,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 74,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 75,  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pName */
};

static emlrtECInfo emlrtECI = { 1,     /* nDims */
  8,                                   /* lineNo */
  5,                                   /* colNo */
  "demeanc",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 275, /* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  24,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  22,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  157,                                 /* lineNo */
  22,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 1,   /* nDims */
  157,                                 /* lineNo */
  22,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  14,                                  /* colNo */
  "Vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  9,                                   /* colNo */
  "Vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 146,   /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  80,                                  /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  8,                                   /* colNo */
  "Vm",                                /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  35,                                  /* colNo */
  "mean_Y",                            /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 136,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  33,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  31,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  16,                                  /* colNo */
  "Yfm",                               /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  11,                                  /* colNo */
  "Yfm",                               /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 131, /* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  96,                                  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  14,                                  /* colNo */
  "bm",                                /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  9,                                   /* colNo */
  "bm",                                /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 130, /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  89,                                  /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  8,                                   /* colNo */
  "bm",                                /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  20,                                  /* colNo */
  "sig2m",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  15,                                  /* colNo */
  "sig2m",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 129, /* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  20,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  15,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 128, /* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { 1,   /* nDims */
  91,                                  /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  84,                                  /* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  84,                                  /* lineNo */
  11,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 59,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 1,   /* nDims */
  39,                                  /* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  16,                                  /* colNo */
  "data",                              /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 16,  /* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 48,  /* lineNo */
  15,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 52,  /* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  16,                                  /* colNo */
  "data",                              /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 17,  /* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 45,  /* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 45,  /* lineNo */
  11,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 46,  /* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 47,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 48,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 49,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 52,  /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 132, /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 132, /* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  11,                                  /* colNo */
  "sig2m",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  50,                                  /* colNo */
  "one_phisum",                        /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  19,                                  /* colNo */
  "phi_consm",                         /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  25,                                  /* colNo */
  "coefm",                             /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  13,                                  /* colNo */
  "Yfm",                               /* aName */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  381,                                 /* lineNo */
  14,                                  /* colNo */
  "vm0",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  367,                                 /* lineNo */
  32,                                  /* colNo */
  "upper_F",                           /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  366,                                 /* lineNo */
  9,                                   /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  364,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 1,   /* nDims */
  364,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  364,                                 /* lineNo */
  37,                                  /* colNo */
  "FmT",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  364,                                 /* lineNo */
  35,                                  /* colNo */
  "FmT",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  352,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  12,                                  /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  23,                                  /* colNo */
  "Fm0",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  351,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  351,                                 /* lineNo */
  12,                                  /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  351,                                 /* lineNo */
  25,                                  /* colNo */
  "Fm0",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  349,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  349,                                 /* lineNo */
  12,                                  /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo x_emlrtECI = { 1,   /* nDims */
  343,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  343,                                 /* lineNo */
  17,                                  /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { 1,   /* nDims */
  341,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  338,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 1,  /* nDims */
  338,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  336,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 1,  /* nDims */
  336,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 1,  /* nDims */
  333,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 1,  /* nDims */
  330,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  330,                                 /* lineNo */
  15,                                  /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  314,                                 /* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  4,                                   /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { 2,  /* nDims */
  326,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo ib_emlrtECI = { 1,  /* nDims */
  326,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { 2,  /* nDims */
  325,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 1,  /* nDims */
  325,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  323,                                 /* lineNo */
  26,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  322,                                 /* lineNo */
  18,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lb_emlrtECI = { 1,  /* nDims */
  313,                                 /* lineNo */
  6,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  312,                                 /* lineNo */
  14,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { -1, /* nDims */
  294,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  294,                                 /* lineNo */
  11,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  308,                                 /* lineNo */
  22,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo nb_emlrtECI = { -1, /* nDims */
  296,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  11,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  27,                                  /* colNo */
  "vec_P_tt",                          /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { 2,  /* nDims */
  292,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { 1,  /* nDims */
  292,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { 1,  /* nDims */
  291,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  20,                                  /* colNo */
  "error",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  286,                                 /* lineNo */
  30,                                  /* colNo */
  "error",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { 2,  /* nDims */
  280,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 1,  /* nDims */
  280,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { 2,  /* nDims */
  274,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { 1,  /* nDims */
  274,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtDCInfo t_emlrtDCI = { 257, /* lineNo */
  14,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 262, /* lineNo */
  19,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 271, /* lineNo */
  17,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 306, /* lineNo */
  14,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 317, /* lineNo */
  15,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 257, /* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  25,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  11,                                  /* colNo */
  "TX",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 262,/* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  25,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  15,                                  /* colNo */
  "upper_F",                           /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 270,/* lineNo */
  17,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 271,/* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 273,/* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 306,/* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  286,                                 /* lineNo */
  28,                                  /* colNo */
  "error",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  16,                                  /* colNo */
  "likelihood",                        /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  18,                                  /* colNo */
  "error",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 317,/* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  368,                                 /* lineNo */
  20,                                  /* colNo */
  "upper_F",                           /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  11,                                  /* colNo */
  "error",                             /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  18,                                  /* colNo */
  "error",                             /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  20,                                  /* colNo */
  "error",                             /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = { 186,/* lineNo */
  9,                                   /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  187,                                 /* lineNo */
  8,                                   /* colNo */
  "EV",                                /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  187,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { 1,  /* nDims */
  190,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { 2,  /* nDims */
  190,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { 1,  /* nDims */
  191,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { 2,  /* nDims */
  191,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo bc_emlrtECI = { 1,  /* nDims */
  193,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { 1,  /* nDims */
  194,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo dc_emlrtECI = { 2,  /* nDims */
  194,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo ec_emlrtECI = { 1,  /* nDims */
  199,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  16,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  18,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 203,/* lineNo */
  31,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo fc_emlrtECI = { 1,  /* nDims */
  208,                                 /* lineNo */
  32,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtDCInfo hb_emlrtDCI = { 213,/* lineNo */
  33,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo gc_emlrtECI = { 1,  /* nDims */
  218,                                 /* lineNo */
  32,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  22,                                  /* colNo */
  "coefm",                             /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 182,/* lineNo */
  12,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 182,/* lineNo */
  20,                                  /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 182,/* lineNo */
  1,                                   /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 182,/* lineNo */
  1,                                   /* colNo */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  187,                                 /* lineNo */
  28,                                  /* colNo */
  "error",                             /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  187,                                 /* lineNo */
  44,                                  /* colNo */
  "vm",                                /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  18,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_coef",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  401,                                 /* lineNo */
  12,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  401,                                 /* lineNo */
  14,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = { 406,/* lineNo */
  9,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  24,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  22,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hc_emlrtECI = { 2,  /* nDims */
  408,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  8,                                   /* colNo */
  "X_",                                /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ic_emlrtECI = { -1, /* nDims */
  408,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo jc_emlrtECI = { 1,  /* nDims */
  414,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo kc_emlrtECI = { 2,  /* nDims */
  414,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo lc_emlrtECI = { 1,  /* nDims */
  415,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo mc_emlrtECI = { 1,  /* nDims */
  420,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtECInfo nc_emlrtECI = { 1,  /* nDims */
  423,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtDCInfo mb_emlrtDCI = { 405,/* lineNo */
  12,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  402,                                 /* lineNo */
  14,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 404,/* lineNo */
  1,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 405,/* lineNo */
  1,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  36,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  62,                                  /* colNo */
  "vm",                                /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  22,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  8,                                   /* colNo */
  "Y_",                                /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  36,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  12,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  16,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  17,                                  /* colNo */
  "error",                             /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  22,                                  /* colNo */
  "error",                             /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  10,                                  /* colNo */
  "vm",                                /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  15,                                  /* colNo */
  "vm",                                /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  14,                                  /* colNo */
  "coef",                              /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo jb_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 8,/* lineNo */
  9,                                   /* colNo */
  "demeanc",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 13,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 32,/* lineNo */
  8,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 39,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 46,/* lineNo */
  7,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 47,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 48,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 49,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 50,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 56,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 79,/* lineNo */
  58,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 128,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 79,/* lineNo */
  61,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 129,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 71,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 130,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 73,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 166,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 132,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 135,/* lineNo */
  36,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 167,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 135,/* lineNo */
  23,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 169,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 170,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 91,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 152,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 114,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 115,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 154,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 156,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 161,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 159,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 95,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 41,/* lineNo */
  27,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 6,/* lineNo */
  1,                                   /* colNo */
  "demeanc",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 257,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 262,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 266,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 267,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 267,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 270,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 271,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 272,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 273,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 274,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 274,/* lineNo */
  41,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 274,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 306,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 308,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 309,/* lineNo */
  8,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 312,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 290,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 291,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 291,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 87,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 291,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 317,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 363,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 322,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 295,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 323,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 295,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 364,/* lineNo */
  29,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 296,/* lineNo */
  18,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 298,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 364,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 364,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 366,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 367,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 253,/* lineNo */
  36,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 330,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 372,/* lineNo */
  24,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 379,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 382,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 379,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 382,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 336,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 338,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 338,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 343,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 351,/* lineNo */
  21,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 352,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 270,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 279,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 280,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 310,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 280,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 282,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 180,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 182,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 187,/* lineNo */
  28,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 187,/* lineNo */
  44,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 190,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 183,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 187,/* lineNo */
  22,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 187,/* lineNo */
  41,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 187,/* lineNo */
  21,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 199,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 201,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 177,/* lineNo */
  17,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 203,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 18,/* lineNo */
  13,                                  /* colNo */
  "isnan",                             /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/isnan.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 18,/* lineNo */
  34,                                  /* colNo */
  "isnan",                             /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/isnan.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 18,/* lineNo */
  13,                                  /* colNo */
  "isinf",                             /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/isinf.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 18,/* lineNo */
  34,                                  /* colNo */
  "isinf",                             /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/isinf.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 204,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 210,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 206,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 208,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 213,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 213,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 214,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 220,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 216,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 223,/* lineNo */
  16,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 218,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 229,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 227,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 192,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 193,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 205,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 206,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 207,/* lineNo */
  9,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 204,/* lineNo */
  41,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 401,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 402,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 404,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 405,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 412,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 407,/* lineNo */
  36,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 407,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 414,/* lineNo */
  14,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 398,/* lineNo */
  24,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 408,/* lineNo */
  34,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 408,/* lineNo */
  29,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 408,/* lineNo */
  20,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 414,/* lineNo */
  5,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 241,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 243,/* lineNo */
  7,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 245,/* lineNo */
  1,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 237,/* lineNo */
  19,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo rl_emlrtRTEI = { 292,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 341,/* lineNo */
  10,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 336,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = { 199,/* lineNo */
  12,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = { 190,/* lineNo */
  13,                                  /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = { 423,/* lineNo */
  8,                                   /* colNo */
  "ARMA_X",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pName */
};

static emlrtRSInfo hl_emlrtRSI = { 5,  /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 68, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 66, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 74, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 70, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 72, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 123,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 124,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 122,/* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 75, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 73, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 71, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 69, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 65, /* lineNo */
  "ARMA_X",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 8,  /* lineNo */
  "demeanc",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 338,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 291,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 336,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/ARMA_X.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 76, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

/* Function Declarations */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *d_error, const
                   emxArray_real_T *coef, real_T sig2, real_T p, real_T q, const
                   emxArray_real_T *vm0, const emxArray_real_T *Fm0,
                   emxArray_real_T *vm, real_T *loglikelihood, emxArray_real_T
                   *Fm);
static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *d_error,
  const emxArray_real_T *vm, const emxArray_real_T *coef, const emxArray_real_T *
  b, real_T sig2, real_T p, real_T q, const emxArray_real_T *x_f,
  emxArray_real_T *y_pred);
static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X, const
                     emxArray_real_T *Y, const emxArray_real_T *beta0, const
                     emxArray_real_T *precB0, const emxArray_real_T *coef,
                     real_T a0, real_T d0, real_T p, real_T q, const
                     emxArray_real_T *vm, real_T sig2_before, real_T model,
                     real_T d, emxArray_real_T *beta, real_T *sig2);
static void Gen_coef(const emlrtStack *sp, const emxArray_real_T *d_error, const
                     emxArray_real_T *vm, const emxArray_real_T *coef0, const
                     emxArray_real_T *precCOEF0, real_T p, real_T q, real_T sig2,
                     const emxArray_real_T *coefm, emxArray_real_T *coef);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37]);
static void b_minus(const emlrtStack *sp, emxArray_real_T *P_tl, const
                    emxArray_real_T *cP_tt);
static void b_plus(const emlrtStack *sp, emxArray_real_T *f_tt, const
                   emxArray_real_T *f_tl);
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *d_error,
  const emxArray_real_T *Y, const emxArray_real_T *y_pred);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8]);
static void c_minus(const emlrtStack *sp, emxArray_real_T *Y_, const
                    emxArray_real_T *theta);
static void c_plus(const emlrtStack *sp, emxArray_real_T *coef, const
                   emxArray_real_T *b1);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static void d_plus(const emlrtStack *sp, emxArray_real_T *varb1_inv, const
                   emxArray_real_T *precCOEF0);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [17]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6]);
static const mxArray *f_emlrt_marshallOut(const real_T u);
static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);
static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tt,
  const emxArray_real_T *f_tl);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [38]);
static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *likelihood,
  const emxArray_real_T *Fm, int32_T t, const emxArray_real_T *f_tl);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23]);
static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *vec_P_tt,
  const emxArray_real_T *f_tl, real_T ds);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo km_emlrtRSI);
static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *P_tl,
  const emxArray_real_T *vec_P_tt, int32_T i3, int32_T i4);
static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo km_emlrtRSI, const emxArray_real_T *r3);
static const mxArray *m_emlrt_marshallOut(void);
static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *varb1,
  emlrtRSInfo km_emlrtRSI, const emxArray_real_T *varb1_inv);
static void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1, const
  emxArray_real_T *X, real_T i);
static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo km_emlrtRSI, const emxArray_real_T *precB0);
static void plus(const emlrtStack *sp, emxArray_real_T *P_tl, const
                 emxArray_real_T *Sigma);

/* Function Definitions */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *d_error, const
                   emxArray_real_T *coef, real_T sig2, real_T p, real_T q, const
                   emxArray_real_T *vm0, const emxArray_real_T *Fm0,
                   emxArray_real_T *vm, real_T *loglikelihood, emxArray_real_T
                   *Fm)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T c_f_tl;
  emxArray_real_T *F;
  emxArray_real_T *Kalgain;
  emxArray_real_T *P_tl;
  emxArray_real_T *P_ttm;
  emxArray_real_T *Sigma;
  emxArray_real_T *TX;
  emxArray_real_T *b_f_tl;
  emxArray_real_T *b_f_tt;
  emxArray_real_T *b_y;
  emxArray_real_T *cP_tt;
  emxArray_real_T *f_ll;
  emxArray_real_T *f_tl;
  emxArray_real_T *f_tt;
  emxArray_real_T *f_ttm;
  emxArray_real_T *idx;
  emxArray_real_T *likelihood;
  emxArray_real_T *r;
  emxArray_real_T *upper_F;
  emxArray_real_T *vec_P_tt;
  emxArray_real_T *y;
  const real_T *Fm0_data;
  const real_T *coef_data;
  const real_T *error_data;
  const real_T *vm0_data;
  real_T ds;
  real_T mean_tl;
  real_T var_tl;
  real_T var_tlinv_data;
  real_T *P_tl_data;
  real_T *P_ttm_data;
  real_T *Sigma_data;
  real_T *TX_data;
  real_T *cP_tt_data;
  real_T *f_ll_data;
  real_T *f_tl_data;
  real_T *f_tt_data;
  real_T *f_ttm_data;
  real_T *likelihood_data;
  real_T *r1;
  real_T *upper_F_data;
  real_T *vec_P_tt_data;
  real_T *y_data;
  int32_T b_input_sizes[2];
  int32_T b_result[2];
  int32_T c_input_sizes[2];
  int32_T d_input_sizes[2];
  int32_T e_input_sizes[2];
  int32_T f_input_sizes[2];
  int32_T g_input_sizes[2];
  int32_T input_sizes[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T result;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int8_T input_sizes_idx_0;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  Fm0_data = Fm0->data;
  vm0_data = vm0->data;
  coef_data = coef->data;
  error_data = d_error->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &TX, 2, &we_emlrtRTEI);

  /*  Fm 샘플랭 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  ds = muDoubleScalarMax(p, q + 1.0);
  i = TX->size[0] * TX->size[1];
  TX->size[0] = 1;
  emxEnsureCapacity_real_T(sp, TX, i, &we_emlrtRTEI);
  i = (int32_T)muDoubleScalarFloor(ds);
  if (ds != i) {
    emlrtIntegerCheckR2012b(ds, &t_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub_tmp = (int32_T)ds;
  i1 = TX->size[0] * TX->size[1];
  TX->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, TX, i1, &we_emlrtRTEI);
  TX_data = TX->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &y_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    TX_data[i1] = 0.0;
  }

  TX_data[0] = 1.0;
  i1 = (int32_T)q;
  for (sizes_idx_1 = 0; sizes_idx_1 < i1; sizes_idx_1++) {
    i2 = (int32_T)(p + ((real_T)sizes_idx_1 + 1.0));
    if ((i2 < 1) || (i2 > coef->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, coef->size[0], &kd_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (((int32_T)(sizes_idx_1 + 2U) < 1) || ((int32_T)(sizes_idx_1 + 2U) >
         TX->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sizes_idx_1 + 2U), 1, TX->size[1],
        &ld_emlrtBCI, (emlrtCTX)sp);
    }

    TX_data[sizes_idx_1 + 1] = coef_data[i2 - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxInit_real_T(sp, &upper_F, 2, &xe_emlrtRTEI);
  i1 = upper_F->size[0] * upper_F->size[1];
  upper_F->size[0] = 1;
  emxEnsureCapacity_real_T(sp, upper_F, i1, &xe_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &u_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = upper_F->size[0] * upper_F->size[1];
  upper_F->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, upper_F, i1, &xe_emlrtRTEI);
  upper_F_data = upper_F->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &ab_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    upper_F_data[i1] = 0.0;
  }

  i1 = (int32_T)p;
  for (sizes_idx_1 = 0; sizes_idx_1 < i1; sizes_idx_1++) {
    if (((int32_T)(sizes_idx_1 + 1U) < 1) || ((int32_T)(sizes_idx_1 + 1U) >
         coef->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sizes_idx_1 + 1U), 1, coef->size[0],
        &md_emlrtBCI, (emlrtCTX)sp);
    }

    if (((int32_T)(sizes_idx_1 + 1U) < 1) || ((int32_T)(sizes_idx_1 + 1U) >
         upper_F->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sizes_idx_1 + 1U), 1,
        upper_F->size[1], &nd_emlrtBCI, (emlrtCTX)sp);
    }

    upper_F_data[sizes_idx_1] = coef_data[sizes_idx_1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxInit_real_T(sp, &vec_P_tt, 2, &xf_emlrtRTEI);
  emxInit_real_T(sp, &cP_tt, 2, &xg_emlrtRTEI);
  st.site = &qd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  eye(&b_st, ds - 1.0, vec_P_tt);
  vec_P_tt_data = vec_P_tt->data;
  b_st.site = &nd_emlrtRSI;
  if ((vec_P_tt->size[0] != 0) && (vec_P_tt->size[1] != 0)) {
    result = vec_P_tt->size[0];
  } else if (loop_ub_tmp - 1 != 0.0) {
    result = (int32_T)ds - 1;
  } else {
    result = vec_P_tt->size[0];
    if ((int32_T)ds - 1 > vec_P_tt->size[0]) {
      result = (int32_T)ds - 1;
    }
  }

  c_st.site = &od_emlrtRSI;
  if ((vec_P_tt->size[0] != result) && ((vec_P_tt->size[0] != 0) &&
       (vec_P_tt->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  loop_ub = (int32_T)ds - 1;
  if ((loop_ub != result) && (!((int32_T)ds - 1 == 0.0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || ((vec_P_tt->size[0] != 0) && (vec_P_tt->size[1] !=
        0))) {
    input_sizes[1] = vec_P_tt->size[1];
  } else {
    input_sizes[1] = 0;
  }

  if (empty_non_axis_sizes || ((int32_T)ds - 1 != 0.0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  b_result[1] = input_sizes[1];
  i1 = cP_tt->size[0] * cP_tt->size[1];
  cP_tt->size[0] = result;
  cP_tt->size[1] = b_result[1] + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, cP_tt, i1, &ub_emlrtRTEI);
  cP_tt_data = cP_tt->data;
  b_loop_ub = b_result[1];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i2 = 0; i2 < result; i2++) {
      cP_tt_data[i2 + cP_tt->size[0] * i1] = vec_P_tt_data[i2 + result * i1];
    }
  }

  for (i1 = 0; i1 < sizes_idx_1; i1++) {
    for (i2 = 0; i2 < result; i2++) {
      cP_tt_data[i2 + cP_tt->size[0] * b_result[1]] = 0.0;
    }
  }

  st.site = &qd_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  if (upper_F->size[1] != 0) {
    result = upper_F->size[1];
  } else if ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)) {
    result = cP_tt->size[1];
  } else {
    result = 0;
    if (cP_tt->size[1] > 0) {
      result = cP_tt->size[1];
    }
  }

  c_st.site = &od_emlrtRSI;
  if ((upper_F->size[1] != result) && (upper_F->size[1] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((cP_tt->size[1] != result) && ((cP_tt->size[0] != 0) && (cP_tt->size[1] !=
        0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (upper_F->size[1] != 0)) {
    input_sizes_idx_0 = 1;
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)))
  {
    sizes_idx_0 = cP_tt->size[0];
  } else {
    sizes_idx_0 = 0;
  }

  emxInit_real_T(&b_st, &F, 2, &ye_emlrtRTEI);
  i1 = F->size[0] * F->size[1];
  F->size[0] = input_sizes_idx_0 + sizes_idx_0;
  F->size[1] = result;
  emxEnsureCapacity_real_T(&b_st, F, i1, &ye_emlrtRTEI);
  vec_P_tt_data = F->data;
  for (i1 = 0; i1 < result; i1++) {
    b_loop_ub = input_sizes_idx_0;
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      vec_P_tt_data[F->size[0] * i1] = upper_F_data[input_sizes_idx_0 * i1];
    }
  }

  for (i1 = 0; i1 < result; i1++) {
    for (i2 = 0; i2 < sizes_idx_0; i2++) {
      vec_P_tt_data[(i2 + input_sizes_idx_0) + F->size[0] * i1] = cP_tt_data[i2
        + sizes_idx_0 * i1];
    }
  }

  st.site = &rd_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  var_tl = (int32_T)ds - 1;
  if (var_tl != 0.0) {
    result = loop_ub;
  } else if (var_tl != 0.0) {
    result = loop_ub;
  } else {
    result = muIntScalarMax_sint32(loop_ub, 0);
    if (loop_ub > result) {
      result = loop_ub;
    }
  }

  c_st.site = &od_emlrtRSI;
  if ((loop_ub != result) && (!(var_tl == 0.0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((loop_ub != result) && (!(var_tl == 0.0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (var_tl != 0.0)) {
    input_sizes_idx_0 = 1;
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || (var_tl != 0.0)) {
    sizes_idx_1 = loop_ub;
  } else {
    sizes_idx_1 = 0;
  }

  i1 = cP_tt->size[0] * cP_tt->size[1];
  cP_tt->size[0] = result;
  cP_tt->size[1] = input_sizes_idx_0 + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, cP_tt, i1, &ub_emlrtRTEI);
  cP_tt_data = cP_tt->data;
  b_loop_ub = input_sizes_idx_0;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i2 = 0; i2 < result; i2++) {
      cP_tt_data[i2] = 0.0;
    }
  }

  for (i1 = 0; i1 < sizes_idx_1; i1++) {
    for (i2 = 0; i2 < result; i2++) {
      cP_tt_data[i2 + cP_tt->size[0] * (i1 + input_sizes_idx_0)] = 0.0;
    }
  }

  emxInit_real_T(&b_st, &idx, 2, &sf_emlrtRTEI);
  st.site = &rd_emlrtRSI;
  i1 = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(&st, idx, i1, &af_emlrtRTEI);
  vec_P_tt_data = idx->data;
  vec_P_tt_data[0] = sig2;
  for (i1 = 0; i1 < loop_ub; i1++) {
    vec_P_tt_data[i1 + 1] = 0.0;
  }

  b_st.site = &nd_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  if ((cP_tt->size[1] != idx->size[1]) && ((cP_tt->size[0] != 0) && (cP_tt->
        size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &Sigma, 2, &bf_emlrtRTEI);
  if ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)) {
    b_result[0] = cP_tt->size[0];
  } else {
    b_result[0] = 0;
  }

  i1 = Sigma->size[0] * Sigma->size[1];
  if ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)) {
    loop_ub = cP_tt->size[0];
  } else {
    loop_ub = 0;
  }

  Sigma->size[0] = loop_ub + 1;
  Sigma->size[1] = idx->size[1];
  emxEnsureCapacity_real_T(&b_st, Sigma, i1, &bf_emlrtRTEI);
  Sigma_data = Sigma->data;
  loop_ub = idx->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Sigma_data[Sigma->size[0] * i1] = vec_P_tt_data[i1];
  }

  loop_ub = idx->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_loop_ub = b_result[0];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      Sigma_data[(i2 + Sigma->size[0] * i1) + 1] = 0.0;
    }
  }

  emxInit_real_T(&b_st, &f_ttm, 2, &ug_emlrtRTEI);

  /* %%%% Kalman filtering step */
  i1 = f_ttm->size[0] * f_ttm->size[1];
  f_ttm->size[0] = d_error->size[0];
  emxEnsureCapacity_real_T(sp, f_ttm, i1, &cf_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &bb_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &P_ttm, 2, &df_emlrtRTEI);
  i1 = f_ttm->size[0] * f_ttm->size[1];
  f_ttm->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, f_ttm, i1, &cf_emlrtRTEI);
  f_ttm_data = f_ttm->data;

  /*  은닉인자를 저장 */
  st.site = &sd_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  var_tl = ds * ds;
  i1 = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[0] = d_error->size[0];
  emxEnsureCapacity_real_T(sp, P_ttm, i1, &df_emlrtRTEI);
  if (var_tl != (int32_T)var_tl) {
    emlrtIntegerCheckR2012b(var_tl, &v_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[1] = (int32_T)var_tl;
  emxEnsureCapacity_real_T(sp, P_ttm, i1, &df_emlrtRTEI);
  P_ttm_data = P_ttm->data;
  if ((int32_T)var_tl != (int32_T)var_tl) {
    emlrtIntegerCheckR2012b(var_tl, &cb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = d_error->size[0] * (int32_T)var_tl;
  for (i1 = 0; i1 < loop_ub; i1++) {
    P_ttm_data[i1] = 0.0;
  }

  emxInit_real_T(sp, &likelihood, 1, &ef_emlrtRTEI);

  /*  은닉인자의 분산을 저장 */
  i1 = likelihood->size[0];
  likelihood->size[0] = d_error->size[0];
  emxEnsureCapacity_real_T(sp, likelihood, i1, &ef_emlrtRTEI);
  likelihood_data = likelihood->data;
  loop_ub = d_error->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    likelihood_data[i1] = 0.0;
  }

  emxInit_real_T(sp, &f_ll, 1, &ff_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &db_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = f_ll->size[0];
  f_ll->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, f_ll, i1, &ff_emlrtRTEI);
  f_ll_data = f_ll->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &db_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    f_ll_data[i1] = 0.0;
  }

  emxInit_real_T(sp, &r, 2, &hg_emlrtRTEI);

  /*  초기값은 무조건부 평균 */
  st.site = &td_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  st.site = &td_emlrtRSI;
  eye(&st, ds * ds, r);
  r1 = r->data;
  st.site = &td_emlrtRSI;
  kron(&st, F, F, cP_tt);
  cP_tt_data = cP_tt->data;
  if ((r->size[0] != cP_tt->size[0]) && ((r->size[0] != 1) && (cP_tt->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[0], cP_tt->size[0], &ub_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((r->size[1] != cP_tt->size[1]) && ((r->size[1] != 1) && (cP_tt->size[1] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[1], cP_tt->size[1], &tb_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &td_emlrtRSI;
  emxInit_real_T(&st, &y, 2, &yg_emlrtRTEI);
  if ((r->size[0] == cP_tt->size[0]) && (r->size[1] == cP_tt->size[1])) {
    i1 = y->size[0] * y->size[1];
    y->size[0] = r->size[0];
    y->size[1] = r->size[1];
    emxEnsureCapacity_real_T(&st, y, i1, &gf_emlrtRTEI);
    y_data = y->data;
    loop_ub = r->size[0] * r->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      y_data[i1] = r1[i1] - cP_tt_data[i1];
    }

    b_st.site = &td_emlrtRSI;
    inv(&b_st, y, cP_tt);
  } else {
    b_st.site = &td_emlrtRSI;
    l_binary_expand_op(&b_st, cP_tt, td_emlrtRSI, r);
  }

  emxInit_real_T(&st, &P_tl, 2, &wg_emlrtRTEI);
  i1 = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = Sigma->size[0];
  P_tl->size[1] = Sigma->size[1];
  emxEnsureCapacity_real_T(&st, P_tl, i1, &hf_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = Sigma->size[0] * Sigma->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    P_tl_data[i1] = Sigma_data[i1];
  }

  b_st.site = &td_emlrtRSI;
  vec(&b_st, P_tl);
  b_st.site = &dd_emlrtRSI;
  c_dynamic_size_checks(&b_st, cP_tt, P_tl, cP_tt->size[1], P_tl->size[0]);
  b_st.site = &fd_emlrtRSI;
  d_mtimes(&b_st, cP_tt, P_tl, r);
  r1 = r->data;
  st.site = &td_emlrtRSI;
  sizes_idx_1 = r->size[0] * r->size[1];
  b_st.site = &yf_emlrtRSI;
  c_st.site = &xf_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  c_st.site = &xf_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  sizes_idx_0 = r->size[0];
  if (r->size[1] > r->size[0]) {
    sizes_idx_0 = r->size[1];
  }

  if (loop_ub_tmp > muIntScalarMax_sint32(sizes_idx_1, sizes_idx_0)) {
    emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  loop_ub = loop_ub_tmp * loop_ub_tmp;
  if (loop_ub != sizes_idx_1) {
    emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  i1 = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = loop_ub_tmp;
  P_tl->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, P_tl, i1, &if_emlrtRTEI);
  P_tl_data = P_tl->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    P_tl_data[i1] = r1[i1];
  }

  i1 = d_error->size[0];
  if (0 <= d_error->size[0] - 1) {
    c_loop_ub = TX->size[1];
    b_result[0] = 1;
  }

  emxInit_real_T(sp, &f_tl, 1, &vg_emlrtRTEI);
  emxInit_real_T(sp, &Kalgain, 2, &nf_emlrtRTEI);
  emxInit_real_T(sp, &f_tt, 2, &rf_emlrtRTEI);
  emxInit_real_T(sp, &b_y, 2, &ah_emlrtRTEI);
  emxInit_real_T(sp, &b_f_tl, 2, &pf_emlrtRTEI);
  for (result = 0; result < i1; result++) {
    st.site = &ud_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, F, f_ll, F->size[1], f_ll->size[0]);
    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, F, f_ll, f_tl);
    f_tl_data = f_tl->data;
    st.site = &vd_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, F, P_tl, F->size[1], P_tl->size[0]);
    b_st.site = &fd_emlrtRSI;
    d_mtimes(&b_st, F, P_tl, y);
    st.site = &vd_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, y, F, y->size[1], F->size[1]);
    b_st.site = &fd_emlrtRSI;
    c_mtimes(&b_st, y, F, P_tl);
    P_tl_data = P_tl->data;
    if ((P_tl->size[0] != Sigma->size[0]) && ((P_tl->size[0] != 1) &&
         (Sigma->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[0], Sigma->size[0], &sb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[1] != Sigma->size[1]) && ((P_tl->size[1] != 1) &&
         (Sigma->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], Sigma->size[1], &rb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[0] == Sigma->size[0]) && (P_tl->size[1] == Sigma->size[1]))
    {
      b_loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        P_tl_data[i2] += Sigma_data[i2];
      }
    } else {
      st.site = &vd_emlrtRSI;
      plus(&st, P_tl, Sigma);
      P_tl_data = P_tl->data;
    }

    st.site = &wd_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    d_dynamic_size_checks(&b_st, TX, P_tl, TX->size[1], P_tl->size[0]);
    b_st.site = &fd_emlrtRSI;
    e_mtimes(&b_st, TX, P_tl, b_y);
    st.site = &wd_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    e_dynamic_size_checks(&b_st, b_y, TX, b_y->size[1], TX->size[1]);
    var_tl = mtimes(b_y, TX);
    var_tl = 0.5 * (var_tl + var_tl);
    st.site = &xd_emlrtRSI;
    b_invpd(&st, var_tl, (real_T *)&var_tlinv_data, input_sizes);
    st.site = &yd_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    dynamic_size_checks(&b_st, TX, f_tl, TX->size[1], f_tl->size[0]);
    mean_tl = mtimes(TX, f_tl);
    if (1 > d_error->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, d_error->size[1], &jd_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (result + 1 > d_error->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, d_error->size[0],
        &od_emlrtBCI, (emlrtCTX)sp);
    }

    if (result + 1 > likelihood->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, likelihood->size[0],
        &pd_emlrtBCI, (emlrtCTX)sp);
    }

    st.site = &ae_emlrtRSI;
    likelihood_data[result] = lnpdfmvn(error_data[result], mean_tl, var_tl);
    if (1 > d_error->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, d_error->size[1], &id_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (result + 1 > d_error->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, d_error->size[0],
        &qd_emlrtBCI, (emlrtCTX)sp);
    }

    var_tl = error_data[result] - mean_tl;
    st.site = &be_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    f_dynamic_size_checks(&b_st, P_tl, TX, P_tl->size[1], TX->size[1]);
    b_st.site = &fd_emlrtRSI;
    f_mtimes(&b_st, P_tl, TX, f_ll);
    f_ll_data = f_ll->data;
    i2 = Kalgain->size[0] * Kalgain->size[1];
    Kalgain->size[0] = f_ll->size[0];
    Kalgain->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Kalgain, i2, &nf_emlrtRTEI);
    cP_tt_data = Kalgain->data;
    b_loop_ub = f_ll->size[0];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      cP_tt_data[i2] = f_ll_data[i2] * var_tlinv_data;
    }

    /*  변환된 종속변수에 대해 Gamma는 단위행렬 */
    i2 = f_tt->size[0] * f_tt->size[1];
    f_tt->size[0] = Kalgain->size[0];
    f_tt->size[1] = 1;
    emxEnsureCapacity_real_T(sp, f_tt, i2, &of_emlrtRTEI);
    f_tt_data = f_tt->data;
    b_loop_ub = Kalgain->size[0];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      f_tt_data[i2] = cP_tt_data[i2] * var_tl;
    }

    if ((f_tl->size[0] != f_tt->size[0]) && ((f_tl->size[0] != 1) && (f_tt->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tl->size[0], f_tt->size[0], &qb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (f_tl->size[0] == f_tt->size[0]) {
      i2 = b_f_tl->size[0] * b_f_tl->size[1];
      b_f_tl->size[0] = f_tl->size[0];
      b_f_tl->size[1] = 1;
      emxEnsureCapacity_real_T(sp, b_f_tl, i2, &pf_emlrtRTEI);
      vec_P_tt_data = b_f_tl->data;
      b_loop_ub = f_tl->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        vec_P_tt_data[i2] = f_tl_data[i2] + f_tt_data[i2];
      }

      i2 = f_tt->size[0] * f_tt->size[1];
      f_tt->size[0] = b_f_tl->size[0];
      f_tt->size[1] = 1;
      emxEnsureCapacity_real_T(sp, f_tt, i2, &rf_emlrtRTEI);
      f_tt_data = f_tt->data;
      b_loop_ub = b_f_tl->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        f_tt_data[i2] = vec_P_tt_data[i2];
      }
    } else {
      st.site = &hm_emlrtRSI;
      g_binary_expand_op(&st, f_tt, f_tl);
      f_tt_data = f_tt->data;
    }

    i2 = y->size[0] * y->size[1];
    y->size[0] = Kalgain->size[0];
    y->size[1] = TX->size[1];
    emxEnsureCapacity_real_T(sp, y, i2, &qf_emlrtRTEI);
    y_data = y->data;
    for (i2 = 0; i2 < c_loop_ub; i2++) {
      b_loop_ub = Kalgain->size[0];
      for (sizes_idx_0 = 0; sizes_idx_0 < b_loop_ub; sizes_idx_0++) {
        y_data[sizes_idx_0 + y->size[0] * i2] = cP_tt_data[sizes_idx_0] *
          TX_data[i2];
      }
    }

    st.site = &ce_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, y, P_tl, y->size[1], P_tl->size[0]);
    b_st.site = &fd_emlrtRSI;
    d_mtimes(&b_st, y, P_tl, cP_tt);
    cP_tt_data = cP_tt->data;
    if ((P_tl->size[0] != cP_tt->size[0]) && ((P_tl->size[0] != 1) &&
         (cP_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[0], cP_tt->size[0], &pb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[1] != cP_tt->size[1]) && ((P_tl->size[1] != 1) &&
         (cP_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], cP_tt->size[1], &ob_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[0] == cP_tt->size[0]) && (P_tl->size[1] == cP_tt->size[1]))
    {
      b_loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        P_tl_data[i2] -= cP_tt_data[i2];
      }
    } else {
      st.site = &ce_emlrtRSI;
      b_minus(&st, P_tl, cP_tt);
      P_tl_data = P_tl->data;
    }

    if (result + 1 > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, f_ttm->size[0], &ed_emlrtBCI,
        (emlrtCTX)sp);
    }

    input_sizes[0] = 1;
    input_sizes[1] = f_ttm->size[1];
    b_result[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_result[0], 2,
      &mb_emlrtECI, (emlrtCTX)sp);
    b_loop_ub = f_tt->size[0];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      f_ttm_data[result + f_ttm->size[0] * i2] = f_tt_data[i2];
    }

    i2 = cP_tt->size[0] * cP_tt->size[1];
    cP_tt->size[0] = P_tl->size[0];
    cP_tt->size[1] = P_tl->size[1];
    emxEnsureCapacity_real_T(sp, cP_tt, i2, &vf_emlrtRTEI);
    cP_tt_data = cP_tt->data;
    b_loop_ub = P_tl->size[0] * P_tl->size[1];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      cP_tt_data[i2] = P_tl_data[i2];
    }

    st.site = &de_emlrtRSI;
    vec(&st, cP_tt);
    cP_tt_data = cP_tt->data;
    i2 = vec_P_tt->size[0] * vec_P_tt->size[1];
    vec_P_tt->size[0] = cP_tt->size[1];
    vec_P_tt->size[1] = cP_tt->size[0];
    emxEnsureCapacity_real_T(sp, vec_P_tt, i2, &xf_emlrtRTEI);
    vec_P_tt_data = vec_P_tt->data;
    b_loop_ub = cP_tt->size[0];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      sizes_idx_1 = cP_tt->size[1];
      for (sizes_idx_0 = 0; sizes_idx_0 < sizes_idx_1; sizes_idx_0++) {
        vec_P_tt_data[sizes_idx_0 + vec_P_tt->size[0] * i2] = cP_tt_data[i2 +
          cP_tt->size[0] * sizes_idx_0];
      }
    }

    if (result + 1 > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, P_ttm->size[0], &gd_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (1 > vec_P_tt->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_P_tt->size[0], &hd_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_loop_ub = vec_P_tt->size[1];
    i2 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = vec_P_tt->size[1];
    emxEnsureCapacity_real_T(sp, b_y, i2, &ag_emlrtRTEI);
    y_data = b_y->data;
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      y_data[i2] = vec_P_tt_data[vec_P_tt->size[0] * i2];
    }

    input_sizes[0] = 1;
    input_sizes[1] = P_ttm->size[1];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_y->size[0], 2,
      &nb_emlrtECI, (emlrtCTX)sp);
    b_loop_ub = vec_P_tt->size[1];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      P_ttm_data[result + P_ttm->size[0] * i2] = vec_P_tt_data[vec_P_tt->size[0]
        * i2];
    }

    b_loop_ub = f_tt->size[0];
    i2 = f_ll->size[0];
    f_ll->size[0] = f_tt->size[0];
    emxEnsureCapacity_real_T(sp, f_ll, i2, &bg_emlrtRTEI);
    f_ll_data = f_ll->data;
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      f_ll_data[i2] = f_tt_data[i2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_f_tl);
  emxFree_real_T(sp, &f_tt);
  emxFree_real_T(sp, &Kalgain);
  emxFree_real_T(sp, &TX);
  st.site = &ee_emlrtRSI;
  *loglikelihood = c_sum(&st, likelihood);

  /* %% Backward recursion */
  i1 = Fm->size[0] * Fm->size[1];
  Fm->size[0] = d_error->size[0];
  emxEnsureCapacity_real_T(sp, Fm, i1, &jf_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &w_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Fm->size[0] * Fm->size[1];
  Fm->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Fm, i1, &jf_emlrtRTEI);
  TX_data = Fm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &eb_emlrtDCI, (emlrtCTX)sp);
  }

  b_loop_ub = d_error->size[0] * loop_ub_tmp;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    TX_data[i1] = 0.0;
  }

  /*  T by km 샘플링된 값들을 저장하는 공간 */
  if ((d_error->size[0] < 1) || (d_error->size[0] > P_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(d_error->size[0], 1, P_ttm->size[0],
      &fd_emlrtBCI, (emlrtCTX)sp);
  }

  b_loop_ub = P_ttm->size[1];
  i1 = f_tl->size[0];
  f_tl->size[0] = P_ttm->size[1];
  emxEnsureCapacity_real_T(sp, f_tl, i1, &kf_emlrtRTEI);
  f_tl_data = f_tl->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    f_tl_data[i1] = P_ttm_data[(d_error->size[0] + P_ttm->size[0] * i1) - 1];
  }

  st.site = &fe_emlrtRSI;
  sizes_idx_1 = f_tl->size[0];
  b_st.site = &yf_emlrtRSI;
  c_st.site = &xf_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  c_st.site = &xf_emlrtRSI;
  assertValidSizeArg(&c_st, ds);
  sizes_idx_0 = f_tl->size[0];
  if (loop_ub_tmp > muIntScalarMax_sint32(sizes_idx_1, sizes_idx_0)) {
    emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (loop_ub != f_tl->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  km by km 초기값으로 마지막 관측치 */
  i1 = y->size[0] * y->size[1];
  y->size[0] = loop_ub_tmp;
  y->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, y, i1, &lf_emlrtRTEI);
  y_data = y->data;
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      y_data[i2 + y->size[0] * i1] = (f_tl_data[i2 + loop_ub_tmp * i1] +
        f_tl_data[i1 + loop_ub_tmp * i2]) / 2.0;
    }
  }

  st.site = &ge_emlrtRSI;
  b_cholmod(&st, y, cP_tt);

  /*  km by km */
  if ((d_error->size[0] < 1) || (d_error->size[0] > f_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(d_error->size[0], 1, f_ttm->size[0],
      &dd_emlrtBCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &b_f_tt, 1, &rf_emlrtRTEI);
  b_loop_ub = f_ttm->size[1];
  i1 = b_f_tt->size[0];
  b_f_tt->size[0] = f_ttm->size[1];
  emxEnsureCapacity_real_T(sp, b_f_tt, i1, &mf_emlrtRTEI);
  f_tt_data = b_f_tt->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    f_tt_data[i1] = f_ttm_data[(d_error->size[0] + f_ttm->size[0] * i1) - 1];
  }

  /*  km by 1 */
  st.site = &he_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  randn(&b_st, ds, likelihood);
  b_st.site = &dd_emlrtRSI;
  b_dynamic_size_checks(&b_st, cP_tt, likelihood, cP_tt->size[0],
                        likelihood->size[0]);
  b_st.site = &fd_emlrtRSI;
  g_mtimes(&b_st, cP_tt, likelihood, f_tl);
  f_tl_data = f_tl->data;
  if ((b_f_tt->size[0] != f_tl->size[0]) && ((b_f_tt->size[0] != 1) &&
       (f_tl->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_f_tt->size[0], f_tl->size[0], &lb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (b_f_tt->size[0] == f_tl->size[0]) {
    b_loop_ub = b_f_tt->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      f_tt_data[i1] += f_tl_data[i1];
    }
  } else {
    st.site = &he_emlrtRSI;
    b_plus(&st, b_f_tt, f_tl);
    f_tt_data = b_f_tt->data;
  }

  /*  km by 1 */
  if (d_error->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(d_error->size[0], 1, d_error->size[0],
      &ad_emlrtBCI, (emlrtCTX)sp);
  }

  input_sizes[0] = 1;
  input_sizes[1] = loop_ub_tmp;
  b_result[0] = 1;
  b_result[1] = b_f_tt->size[0];
  emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_result[0], 2,
    &gb_emlrtECI, (emlrtCTX)sp);
  b_loop_ub = b_f_tt->size[0];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    TX_data[(d_error->size[0] + Fm->size[0] * i1) - 1] = f_tt_data[i1];
  }

  /*  1 by by km 마지막 기의 은닉인자를 sampling */
  result = d_error->size[0] - 1;

  /*   time index */
  i1 = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  emxEnsureCapacity_real_T(sp, idx, i1, &sf_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &x_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = idx->size[0] * idx->size[1];
  idx->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, idx, i1, &sf_emlrtRTEI);
  vec_P_tt_data = idx->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(ds, &fb_emlrtDCI, (emlrtCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    vec_P_tt_data[i] = 0.0;
  }

  vec_P_tt_data[0] = 1.0;
  while (result >= 1) {
    if (result > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result, 1, f_ttm->size[0], &cd_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_loop_ub = f_ttm->size[1];
    i = b_f_tt->size[0];
    b_f_tt->size[0] = f_ttm->size[1];
    emxEnsureCapacity_real_T(sp, b_f_tt, i, &uf_emlrtRTEI);
    f_tt_data = b_f_tt->data;
    for (i = 0; i < b_loop_ub; i++) {
      f_tt_data[i] = f_ttm_data[(result + f_ttm->size[0] * i) - 1];
    }

    /*  km3 by 1 */
    if (result > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result, 1, P_ttm->size[0], &bd_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_loop_ub = P_ttm->size[1];
    i = f_tl->size[0];
    f_tl->size[0] = P_ttm->size[1];
    emxEnsureCapacity_real_T(sp, f_tl, i, &wf_emlrtRTEI);
    f_tl_data = f_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      f_tl_data[i] = P_ttm_data[(result + P_ttm->size[0] * i) - 1];
    }

    st.site = &ie_emlrtRSI;
    sizes_idx_1 = f_tl->size[0];
    b_st.site = &yf_emlrtRSI;
    c_st.site = &xf_emlrtRSI;
    assertValidSizeArg(&c_st, ds);
    c_st.site = &xf_emlrtRSI;
    assertValidSizeArg(&c_st, ds);
    sizes_idx_0 = f_tl->size[0];
    if (loop_ub_tmp > muIntScalarMax_sint32(sizes_idx_1, sizes_idx_0)) {
      emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if (loop_ub != f_tl->size[0]) {
      emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    /*  km3 by km3 */
    st.site = &je_emlrtRSI;
    c_f_tl = *f_tl;
    b_input_sizes[0] = loop_ub_tmp;
    b_input_sizes[1] = loop_ub_tmp;
    c_f_tl.size = &b_input_sizes[0];
    c_f_tl.numDimensions = 2;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, F, &c_f_tl, F->size[1], (int32_T)ds);
    c_f_tl = *f_tl;
    c_input_sizes[0] = loop_ub_tmp;
    c_input_sizes[1] = loop_ub_tmp;
    c_f_tl.size = &c_input_sizes[0];
    c_f_tl.numDimensions = 2;
    b_st.site = &fd_emlrtRSI;
    d_mtimes(&b_st, F, &c_f_tl, y);
    st.site = &je_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, y, F, y->size[1], F->size[1]);
    b_st.site = &fd_emlrtRSI;
    c_mtimes(&b_st, y, F, cP_tt);
    cP_tt_data = cP_tt->data;
    if ((cP_tt->size[0] != Sigma->size[0]) && ((cP_tt->size[0] != 1) &&
         (Sigma->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], Sigma->size[0], &kb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((cP_tt->size[1] != Sigma->size[1]) && ((cP_tt->size[1] != 1) &&
         (Sigma->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], Sigma->size[1], &jb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((cP_tt->size[0] == Sigma->size[0]) && (cP_tt->size[1] == Sigma->size[1]))
    {
      b_loop_ub = cP_tt->size[0] * cP_tt->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        cP_tt_data[i] += Sigma_data[i];
      }
    } else {
      st.site = &je_emlrtRSI;
      plus(&st, cP_tt, Sigma);
      cP_tt_data = cP_tt->data;
    }

    /*  km by km */
    if ((cP_tt->size[0] != cP_tt->size[1]) && ((cP_tt->size[0] != 1) &&
         (cP_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], cP_tt->size[1], &ib_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((cP_tt->size[0] != cP_tt->size[1]) && ((cP_tt->size[1] != 1) &&
         (cP_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], cP_tt->size[0], &hb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (cP_tt->size[0] == cP_tt->size[1]) {
      i = y->size[0] * y->size[1];
      y->size[0] = cP_tt->size[0];
      y->size[1] = cP_tt->size[1];
      emxEnsureCapacity_real_T(sp, y, i, &fg_emlrtRTEI);
      y_data = y->data;
      b_loop_ub = cP_tt->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        c_loop_ub = cP_tt->size[0];
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          y_data[i1 + y->size[0] * i] = 0.5 * (cP_tt_data[i1 + cP_tt->size[0] *
            i] + cP_tt_data[i + cP_tt->size[0] * i1]);
        }
      }

      st.site = &ke_emlrtRSI;
      invpd(&st, y, cP_tt);
    } else {
      st.site = &ke_emlrtRSI;
      j_binary_expand_op(&st, cP_tt, ke_emlrtRSI);
    }

    /*  km by km */
    if (result + 1 > Fm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, Fm->size[0], &yc_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &le_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, F, b_f_tt, F->size[1], b_f_tt->size[0]);
    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, F, b_f_tt, f_ll);
    f_ll_data = f_ll->data;
    if ((f_ll->size[0] != Fm->size[1]) && ((Fm->size[1] != 1) && (f_ll->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(Fm->size[1], f_ll->size[0], &fb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (f_ll->size[0] == Fm->size[1]) {
      b_loop_ub = Fm->size[1];
      i = likelihood->size[0];
      likelihood->size[0] = Fm->size[1];
      emxEnsureCapacity_real_T(sp, likelihood, i, &ig_emlrtRTEI);
      likelihood_data = likelihood->data;
      for (i = 0; i < b_loop_ub; i++) {
        likelihood_data[i] = TX_data[result + Fm->size[0] * i] - f_ll_data[i];
      }
    } else {
      st.site = &le_emlrtRSI;
      h_binary_expand_op(&st, likelihood, Fm, result, f_ll);
    }

    /*  km by 1 */
    st.site = &me_emlrtRSI;
    c_f_tl = *f_tl;
    d_input_sizes[0] = loop_ub_tmp;
    d_input_sizes[1] = loop_ub_tmp;
    c_f_tl.size = &d_input_sizes[0];
    c_f_tl.numDimensions = 2;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, &c_f_tl, F, (int32_T)ds, F->size[1]);
    c_f_tl = *f_tl;
    e_input_sizes[0] = loop_ub_tmp;
    e_input_sizes[1] = loop_ub_tmp;
    c_f_tl.size = &e_input_sizes[0];
    c_f_tl.numDimensions = 2;
    b_st.site = &fd_emlrtRSI;
    c_mtimes(&b_st, &c_f_tl, F, y);
    st.site = &me_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, y, cP_tt, y->size[1], cP_tt->size[0]);
    b_st.site = &fd_emlrtRSI;
    d_mtimes(&b_st, y, cP_tt, vec_P_tt);

    /*  km3 by km */
    st.site = &ne_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, vec_P_tt, likelihood, vec_P_tt->size[1],
                          likelihood->size[0]);
    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, vec_P_tt, likelihood, f_ll);
    f_ll_data = f_ll->data;
    if ((b_f_tt->size[0] != f_ll->size[0]) && ((b_f_tt->size[0] != 1) &&
         (f_ll->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_f_tt->size[0], f_ll->size[0], &eb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (b_f_tt->size[0] == f_ll->size[0]) {
      b_loop_ub = b_f_tt->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        f_tt_data[i] += f_ll_data[i];
      }
    } else {
      st.site = &ne_emlrtRSI;
      b_plus(&st, b_f_tt, f_ll);
      f_tt_data = b_f_tt->data;
    }

    /*  km3 by 1 */
    st.site = &oe_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, vec_P_tt, F, vec_P_tt->size[1], F->size[0]);
    b_st.site = &fd_emlrtRSI;
    d_mtimes(&b_st, vec_P_tt, F, y);
    st.site = &oe_emlrtRSI;
    c_f_tl = *f_tl;
    f_input_sizes[0] = loop_ub_tmp;
    f_input_sizes[1] = loop_ub_tmp;
    c_f_tl.size = &f_input_sizes[0];
    c_f_tl.numDimensions = 2;
    b_st.site = &dd_emlrtRSI;
    c_dynamic_size_checks(&b_st, y, &c_f_tl, y->size[1], (int32_T)ds);
    c_f_tl = *f_tl;
    g_input_sizes[0] = loop_ub_tmp;
    g_input_sizes[1] = loop_ub_tmp;
    c_f_tl.size = &g_input_sizes[0];
    c_f_tl.numDimensions = 2;
    b_st.site = &fd_emlrtRSI;
    d_mtimes(&b_st, y, &c_f_tl, vec_P_tt);

    /*  km3 by km3 */
    if ((loop_ub_tmp != vec_P_tt->size[0]) && ((ds != 1.0) && (vec_P_tt->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b((int32_T)ds, vec_P_tt->size[0], &db_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((loop_ub_tmp != vec_P_tt->size[1]) && ((ds != 1.0) && (vec_P_tt->size[1]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b((int32_T)ds, vec_P_tt->size[1], &cb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((loop_ub_tmp == vec_P_tt->size[0]) && (loop_ub_tmp == vec_P_tt->size[1]))
    {
      b_loop_ub = loop_ub - 1;
      i = vec_P_tt->size[0] * vec_P_tt->size[1];
      vec_P_tt->size[0] = loop_ub_tmp;
      vec_P_tt->size[1] = loop_ub_tmp;
      emxEnsureCapacity_real_T(sp, vec_P_tt, i, &og_emlrtRTEI);
      vec_P_tt_data = vec_P_tt->data;
      for (i = 0; i <= b_loop_ub; i++) {
        vec_P_tt_data[i] = f_tl_data[i] - vec_P_tt_data[i];
      }
    } else {
      st.site = &im_emlrtRSI;
      i_binary_expand_op(&st, vec_P_tt, f_tl, ds);
      vec_P_tt_data = vec_P_tt->data;
    }

    if ((vec_P_tt->size[0] != vec_P_tt->size[1]) && ((vec_P_tt->size[0] != 1) &&
         (vec_P_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(vec_P_tt->size[0], vec_P_tt->size[1],
        &bb_emlrtECI, (emlrtCTX)sp);
    }

    if ((vec_P_tt->size[0] != vec_P_tt->size[1]) && ((vec_P_tt->size[1] != 1) &&
         (vec_P_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(vec_P_tt->size[1], vec_P_tt->size[0],
        &ab_emlrtECI, (emlrtCTX)sp);
    }

    if (vec_P_tt->size[0] == vec_P_tt->size[1]) {
      i = y->size[0] * y->size[1];
      y->size[0] = vec_P_tt->size[0];
      y->size[1] = vec_P_tt->size[1];
      emxEnsureCapacity_real_T(sp, y, i, &pg_emlrtRTEI);
      y_data = y->data;
      b_loop_ub = vec_P_tt->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        c_loop_ub = vec_P_tt->size[0];
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          y_data[i1 + y->size[0] * i] = (vec_P_tt_data[i1 + vec_P_tt->size[0] *
            i] + vec_P_tt_data[i + vec_P_tt->size[0] * i1]) / 2.0;
        }
      }

      i = vec_P_tt->size[0] * vec_P_tt->size[1];
      vec_P_tt->size[0] = y->size[0];
      vec_P_tt->size[1] = y->size[1];
      emxEnsureCapacity_real_T(sp, vec_P_tt, i, &qg_emlrtRTEI);
      vec_P_tt_data = vec_P_tt->data;
      b_loop_ub = y->size[0] * y->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        vec_P_tt_data[i] = y_data[i];
      }
    } else {
      st.site = &fm_emlrtRSI;
      c_binary_expand_op(&st, vec_P_tt);
    }

    st.site = &pe_emlrtRSI;
    b_cholmod(&st, vec_P_tt, cP_tt);
    st.site = &qe_emlrtRSI;
    b_st.site = &qe_emlrtRSI;
    randn(&b_st, ds, likelihood);
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, cP_tt, likelihood, cP_tt->size[0],
                          likelihood->size[0]);
    b_st.site = &fd_emlrtRSI;
    g_mtimes(&b_st, cP_tt, likelihood, f_tl);
    f_tl_data = f_tl->data;
    if ((b_f_tt->size[0] != f_tl->size[0]) && ((b_f_tt->size[0] != 1) &&
         (f_tl->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_f_tt->size[0], f_tl->size[0], &y_emlrtECI,
        (emlrtCTX)sp);
    }

    if (b_f_tt->size[0] == f_tl->size[0]) {
      b_loop_ub = b_f_tt->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        f_tt_data[i] += f_tl_data[i];
      }
    } else {
      st.site = &qe_emlrtRSI;
      b_plus(&st, b_f_tt, f_tl);
      f_tt_data = b_f_tt->data;
    }

    if (result + 1 > Fm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, Fm->size[0], &xc_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &re_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, F, b_f_tt, F->size[1], b_f_tt->size[0]);
    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, F, b_f_tt, f_tl);
    f_tl_data = f_tl->data;
    if ((f_tl->size[0] != Fm->size[1]) && ((Fm->size[1] != 1) && (f_tl->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(Fm->size[1], f_tl->size[0], &x_emlrtECI,
        (emlrtCTX)sp);
    }

    st.site = &re_emlrtRSI;
    if (f_tl->size[0] == Fm->size[1]) {
      b_loop_ub = Fm->size[1];
      i = likelihood->size[0];
      likelihood->size[0] = Fm->size[1];
      emxEnsureCapacity_real_T(&st, likelihood, i, &rg_emlrtRTEI);
      likelihood_data = likelihood->data;
      for (i = 0; i < b_loop_ub; i++) {
        likelihood_data[i] = TX_data[result + Fm->size[0] * i] - f_tl_data[i];
      }
    } else {
      b_st.site = &re_emlrtRSI;
      h_binary_expand_op(&b_st, likelihood, Fm, result, f_tl);
    }

    b_st.site = &dd_emlrtRSI;
    dynamic_size_checks(&b_st, idx, likelihood, (int32_T)ds, likelihood->size[0]);
    var_tl = mtimes(idx, likelihood);
    if ((var_tl <= 3.0 * sig2) + (var_tl >= -3.0 * sig2) == 2) {
      if (result > Fm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(result, 1, Fm->size[0], &wc_emlrtBCI,
          (emlrtCTX)sp);
      }

      input_sizes[0] = 1;
      input_sizes[1] = Fm->size[1];
      b_result[0] = 1;
      b_result[1] = b_f_tt->size[0];
      emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_result[0], 2,
        &w_emlrtECI, (emlrtCTX)sp);
      b_loop_ub = b_f_tt->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        TX_data[(result + Fm->size[0] * i) - 1] = f_tt_data[i];
      }
    } else {
      if (result + 1 > Fm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(result + 1, 1, Fm->size[0], &uc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (result + 1 > Fm0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(result + 1, 1, Fm0->size[0], &vc_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_loop_ub = Fm0->size[1];
      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = Fm0->size[1];
      emxEnsureCapacity_real_T(sp, b_y, i, &sg_emlrtRTEI);
      y_data = b_y->data;
      for (i = 0; i < b_loop_ub; i++) {
        y_data[i] = Fm0_data[result + Fm0->size[0] * i];
      }

      input_sizes[0] = 1;
      input_sizes[1] = Fm->size[1];
      emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_y->size[0], 2,
        &v_emlrtECI, (emlrtCTX)sp);
      b_loop_ub = Fm0->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        TX_data[result + Fm->size[0] * i] = Fm0_data[result + Fm0->size[0] * i];
      }

      if (result > Fm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(result, 1, Fm->size[0], &sc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (result > Fm0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(result, 1, Fm0->size[0], &tc_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_loop_ub = Fm0->size[1];
      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = Fm0->size[1];
      emxEnsureCapacity_real_T(sp, b_y, i, &tg_emlrtRTEI);
      y_data = b_y->data;
      for (i = 0; i < b_loop_ub; i++) {
        y_data[i] = Fm0_data[(result + Fm0->size[0] * i) - 1];
      }

      input_sizes[0] = 1;
      input_sizes[1] = Fm->size[1];
      emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_y->size[0], 2,
        &u_emlrtECI, (emlrtCTX)sp);
      b_loop_ub = Fm0->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        TX_data[(result + Fm->size[0] * i) - 1] = Fm0_data[(result + Fm0->size[0]
          * i) - 1];
      }
    }

    /*  num_ok = sum(ok); */
    /*      ok_LHS = find(ok); */
    /*  ok_RHS = find(ok - 1); */
    /*      vm(ok_LHS,1) = vm0(ok_LHS,1); */
    /*  vm(ok_LHS,1) = std(vm(ok_RHS,1)).*randn(num_ok,1); %#ok<FNDSB> */
    result--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_f_tt);
  emxFree_real_T(sp, &cP_tt);
  emxFree_real_T(sp, &P_ttm);
  emxFree_real_T(sp, &f_ttm);
  emxFree_real_T(sp, &Sigma);
  i = vec_P_tt->size[0] * vec_P_tt->size[1];
  vec_P_tt->size[0] = Fm->size[1];
  vec_P_tt->size[1] = Fm->size[0];
  emxEnsureCapacity_real_T(sp, vec_P_tt, i, &tf_emlrtRTEI);
  vec_P_tt_data = vec_P_tt->data;
  loop_ub = Fm->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = Fm->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      vec_P_tt_data[i1 + vec_P_tt->size[0] * i] = TX_data[i + Fm->size[0] * i1];
    }
  }

  if (2 > vec_P_tt->size[1]) {
    i = -1;
    i1 = -1;
    loop_ub = 0;
  } else {
    i = 0;
    i1 = vec_P_tt->size[1] - 1;
    if (1 > vec_P_tt->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_P_tt->size[1], &rc_emlrtBCI,
        (emlrtCTX)sp);
    }

    if ((vec_P_tt->size[1] - 1 < 1) || (vec_P_tt->size[1] - 1 > vec_P_tt->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b(vec_P_tt->size[1] - 1, 1, vec_P_tt->size[1],
        &qc_emlrtBCI, (emlrtCTX)sp);
    }

    loop_ub = vec_P_tt->size[1] - 1;
  }

  st.site = &se_emlrtRSI;
  b_loop_ub = vec_P_tt->size[0];
  i2 = y->size[0] * y->size[1];
  y->size[0] = vec_P_tt->size[0];
  y->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, y, i2, &yf_emlrtRTEI);
  y_data = y->data;
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (sizes_idx_0 = 0; sizes_idx_0 < b_loop_ub; sizes_idx_0++) {
      y_data[sizes_idx_0 + y->size[0] * i2] = vec_P_tt_data[sizes_idx_0 +
        vec_P_tt->size[0] * i2];
    }
  }

  b_st.site = &dd_emlrtRSI;
  c_dynamic_size_checks(&b_st, F, y, F->size[1], vec_P_tt->size[0]);
  b_loop_ub = vec_P_tt->size[0];
  i2 = y->size[0] * y->size[1];
  y->size[0] = vec_P_tt->size[0];
  y->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, y, i2, &yf_emlrtRTEI);
  y_data = y->data;
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (sizes_idx_0 = 0; sizes_idx_0 < b_loop_ub; sizes_idx_0++) {
      y_data[sizes_idx_0 + y->size[0] * i2] = vec_P_tt_data[sizes_idx_0 +
        vec_P_tt->size[0] * i2];
    }
  }

  b_st.site = &fd_emlrtRSI;
  d_mtimes(&b_st, F, y, P_tl);
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &F);
  if ((vec_P_tt->size[0] != P_tl->size[0]) && ((vec_P_tt->size[0] != 1) &&
       (P_tl->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(vec_P_tt->size[0], P_tl->size[0], &t_emlrtECI,
      (emlrtCTX)sp);
  }

  loop_ub = i1 - i;
  if ((loop_ub != P_tl->size[1]) && ((loop_ub != 1) && (P_tl->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(loop_ub, P_tl->size[1], &s_emlrtECI, (emlrtCTX)
      sp);
  }

  st.site = &se_emlrtRSI;
  if ((vec_P_tt->size[0] == P_tl->size[0]) && (loop_ub == P_tl->size[1])) {
    b_loop_ub = vec_P_tt->size[0];
    i1 = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = vec_P_tt->size[0];
    P_tl->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, P_tl, i1, &cg_emlrtRTEI);
    P_tl_data = P_tl->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        P_tl_data[i2 + P_tl->size[0] * i1] = vec_P_tt_data[i2 + vec_P_tt->size[0]
          * ((i + i1) + 1)] - P_tl_data[i2 + P_tl->size[0] * i1];
      }
    }
  } else {
    b_st.site = &se_emlrtRSI;
    k_binary_expand_op(&b_st, P_tl, vec_P_tt, i + 1, i1);
  }

  emxFree_real_T(&st, &vec_P_tt);
  b_st.site = &dd_emlrtRSI;
  d_dynamic_size_checks(&b_st, idx, P_tl, (int32_T)ds, P_tl->size[0]);
  b_st.site = &fd_emlrtRSI;
  e_mtimes(&b_st, idx, P_tl, b_y);
  y_data = b_y->data;
  i = vm->size[0];
  vm->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, vm, i, &dg_emlrtRTEI);
  vec_P_tt_data = vm->data;
  loop_ub = b_y->size[1];
  emxFree_real_T(sp, &idx);
  emxFree_real_T(sp, &P_tl);
  for (i = 0; i < loop_ub; i++) {
    vec_P_tt_data[i] = y_data[i];
  }

  if (1 > Fm->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Fm->size[0], &pc_emlrtBCI, (emlrtCTX)sp);
  }

  loop_ub = Fm->size[1];
  i = f_ll->size[0];
  f_ll->size[0] = Fm->size[1];
  emxEnsureCapacity_real_T(sp, f_ll, i, &eg_emlrtRTEI);
  f_ll_data = f_ll->data;
  for (i = 0; i < loop_ub; i++) {
    f_ll_data[i] = TX_data[Fm->size[0] * i];
  }

  if (1 > upper_F->size[1] - 1) {
    loop_ub = 0;
  } else {
    if ((upper_F->size[1] - 1 < 1) || (upper_F->size[1] - 1 > upper_F->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b(upper_F->size[1] - 1, 1, upper_F->size[1],
        &oc_emlrtBCI, (emlrtCTX)sp);
    }

    loop_ub = upper_F->size[1] - 1;
  }

  if (2 > f_ll->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = f_ll->size[0];
  }

  st.site = &te_emlrtRSI;
  i2 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_y, i2, &gg_emlrtRTEI);
  y_data = b_y->data;
  for (i2 = 0; i2 < loop_ub; i2++) {
    y_data[i2] = upper_F_data[i2];
  }

  b_loop_ub = i1 - i;
  i2 = f_tl->size[0];
  f_tl->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, f_tl, i2, &hg_emlrtRTEI);
  f_tl_data = f_tl->data;
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    f_tl_data[i2] = f_ll_data[i + i2];
  }

  b_st.site = &dd_emlrtRSI;
  dynamic_size_checks(&b_st, b_y, f_tl, loop_ub, i1 - i);
  if (upper_F->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(upper_F->size[1], 1, upper_F->size[1],
      &rd_emlrtBCI, (emlrtCTX)sp);
  }

  var_tl = upper_F_data[upper_F->size[1] - 1];
  st.site = &ue_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  mean_tl = 1.0 / (1.0 / sig2 * (var_tl * var_tl) + 1.0 / r1[0]);
  st.site = &ve_emlrtRSI;
  if (mean_tl < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &bb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  i1 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_y, i1, &gg_emlrtRTEI);
  y_data = b_y->data;
  emxFree_real_T(sp, &r);
  for (i1 = 0; i1 < loop_ub; i1++) {
    y_data[i1] = upper_F_data[i1];
  }

  i1 = f_tl->size[0];
  f_tl->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, f_tl, i1, &hg_emlrtRTEI);
  f_tl_data = f_tl->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    f_tl_data[i1] = f_ll_data[i + i1];
  }

  st.site = &ve_emlrtRSI;
  var_tl = mean_tl * (1.0 / sig2 * var_tl * (f_ll_data[0] - mtimes(b_y, f_tl)))
    + muDoubleScalarSqrt(mean_tl) * b_randn();
  emxFree_real_T(sp, &b_y);
  if (2 > f_ll->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = f_ll->size[0];
  }

  st.site = &we_emlrtRSI;
  loop_ub = i1 - i;
  i1 = likelihood->size[0];
  likelihood->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(&st, likelihood, i1, &jg_emlrtRTEI);
  likelihood_data = likelihood->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    likelihood_data[i1] = f_ll_data[i + i1];
  }

  likelihood_data[loop_ub] = var_tl;
  b_st.site = &dd_emlrtRSI;
  dynamic_size_checks(&b_st, upper_F, likelihood, upper_F->size[1],
                      likelihood->size[0]);
  var_tl = f_ll_data[0] - mtimes(upper_F, likelihood);
  emxFree_real_T(sp, &f_ll);
  emxFree_real_T(sp, &likelihood);
  emxFree_real_T(sp, &upper_F);
  if ((var_tl <= 3.0 * sig2) + (var_tl >= -3.0 * sig2) == 2) {
    i = f_tl->size[0];
    f_tl->size[0] = vm->size[0] + 1;
    emxEnsureCapacity_real_T(sp, f_tl, i, &kg_emlrtRTEI);
    f_tl_data = f_tl->data;
    f_tl_data[0] = var_tl;
    loop_ub = vm->size[0];
    for (i = 0; i < loop_ub; i++) {
      f_tl_data[i + 1] = vec_P_tt_data[i];
    }

    i = vm->size[0];
    vm->size[0] = f_tl->size[0];
    emxEnsureCapacity_real_T(sp, vm, i, &mg_emlrtRTEI);
    vec_P_tt_data = vm->data;
    loop_ub = f_tl->size[0];
    for (i = 0; i < loop_ub; i++) {
      vec_P_tt_data[i] = f_tl_data[i];
    }
  } else {
    if (1 > vm0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vm0->size[0], &nc_emlrtBCI, (emlrtCTX)
        sp);
    }

    i = f_tl->size[0];
    f_tl->size[0] = vm->size[0] + 1;
    emxEnsureCapacity_real_T(sp, f_tl, i, &lg_emlrtRTEI);
    f_tl_data = f_tl->data;
    f_tl_data[0] = vm0_data[0];
    loop_ub = vm->size[0];
    for (i = 0; i < loop_ub; i++) {
      f_tl_data[i + 1] = vec_P_tt_data[i];
    }

    i = vm->size[0];
    vm->size[0] = f_tl->size[0];
    emxEnsureCapacity_real_T(sp, vm, i, &ng_emlrtRTEI);
    vec_P_tt_data = vm->data;
    loop_ub = f_tl->size[0];
    for (i = 0; i < loop_ub; i++) {
      vec_P_tt_data[i] = f_tl_data[i];
    }
  }

  emxFree_real_T(sp, &f_tl);

  /*  upper = vm >= 3*sig2; */
  /*  lower = vm <= -3*sig2; */
  /*  ok = upper + lower; */
  /*  num_ok = sum(ok); */
  /*  ok_LHS = find(ok); */
  /*  ok_RHS = find(ok - 1); */
  /*  vm(ok_LHS,1) = vm0(ok_LHS,1); */
  /*  vm(ok_LHS,1) = std(vm(ok_RHS,1)).*randn(num_ok,1); %#ok<FNDSB> */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *d_error,
  const emxArray_real_T *vm, const emxArray_real_T *coef, const emxArray_real_T *
  b, real_T sig2, real_T p, real_T q, const emxArray_real_T *x_f,
  emxArray_real_T *y_pred)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *r;
  emxArray_real_T *theta;
  const real_T *b_data;
  const real_T *coef_data;
  const real_T *error_data;
  const real_T *vm_data;
  const real_T *x_f_data;
  real_T v_X;
  real_T x;
  real_T y;
  real_T *r1;
  real_T *theta_data;
  int32_T iv[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_f_data = x_f->data;
  b_data = b->data;
  coef_data = coef->data;
  vm_data = vm->data;
  error_data = d_error->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  예측분포 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  if (1.0 > p) {
    i = 0;
  } else {
    if (1 > coef->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, coef->size[0], &oe_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (((int32_T)p < 1) || ((int32_T)p > coef->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, coef->size[0], &pe_emlrtBCI,
        (emlrtCTX)sp);
    }

    i = (int32_T)p;
  }

  emxInit_real_T(sp, &theta, 1, &bk_emlrtRTEI);
  loop_ub = (int32_T)muDoubleScalarFloor(q - 1.0);
  i1 = theta->size[0];
  theta->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(sp, theta, i1, &bk_emlrtRTEI);
  theta_data = theta->data;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    i2 = (int32_T)(p + (real_T)(i1 + 1));
    if ((i2 < 1) || (i2 > coef->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, coef->size[0], &ue_emlrtBCI,
        (emlrtCTX)sp);
    }

    theta_data[i1] = coef_data[i2 - 1];
  }

  v_X = ((real_T)d_error->size[0] - p) + 1.0;
  if (v_X > d_error->size[0]) {
    i2 = 0;
    i3 = 1;
    i1 = -1;
  } else {
    i1 = d_error->size[0] * d_error->size[1];
    if ((d_error->size[0] < 1) || (d_error->size[0] > i1)) {
      emlrtDynamicBoundsCheckR2012b(d_error->size[0], 1, i1, &qe_emlrtBCI,
        (emlrtCTX)sp);
    }

    i2 = d_error->size[0] - 1;
    i3 = -1;
    if (((int32_T)v_X < 1) || ((int32_T)v_X > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)v_X, 1, i1, &re_emlrtBCI, (emlrtCTX)
        sp);
    }

    i1 = (int32_T)v_X - 1;
  }

  iv[0] = 1;
  st.site = &hj_emlrtRSI;
  b_loop_ub = div_s32_floor(&st, i1 - i2, i3);
  iv[1] = b_loop_ub + 1;
  st.site = &hj_emlrtRSI;
  indexShapeCheck(&st, *(int32_T (*)[2])d_error->size, iv);
  st.site = &hj_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  if (1 != i) {
    if ((b_loop_ub + 1 == 1) || (i == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  v_X = ((real_T)d_error->size[0] - q) + 1.0;
  if (v_X > d_error->size[0]) {
    i = 1;
    i1 = 1;
    i4 = 0;
  } else {
    if ((d_error->size[0] < 1) || (d_error->size[0] > vm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(d_error->size[0], 1, vm->size[0],
        &se_emlrtBCI, (emlrtCTX)sp);
    }

    i = d_error->size[0];
    i1 = -1;
    if (((int32_T)v_X < 1) || ((int32_T)v_X > vm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)v_X, 1, vm->size[0], &te_emlrtBCI,
        (emlrtCTX)sp);
    }

    i4 = (int32_T)v_X;
  }

  emxInit_real_T(sp, &r, 1, &ek_emlrtRTEI);
  iv[0] = 1;
  st.site = &ij_emlrtRSI;
  c_loop_ub = div_s32_floor(&st, i4 - i, i1);
  iv[1] = c_loop_ub + 1;
  st.site = &ij_emlrtRSI;
  b_indexShapeCheck(&st, vm->size[0], iv);
  i5 = r->size[0];
  r->size[0] = c_loop_ub + 1;
  emxEnsureCapacity_real_T(sp, r, i5, &ck_emlrtRTEI);
  r1 = r->data;
  for (i5 = 0; i5 <= c_loop_ub; i5++) {
    r1[i5] = vm_data[(i + i1 * i5) - 1];
  }

  st.site = &ij_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  if (c_loop_ub + 1 != loop_ub + 1) {
    if ((c_loop_ub + 1 == 1) || (loop_ub + 1 == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (c_loop_ub + 1 < 1) {
    v_X = 0.0;
  } else {
    b_st.site = &ij_emlrtRSI;
    n_t = (ptrdiff_t)(div_s32_floor(&b_st, i4 - i, i1) + 1);
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    v_X = ddot(&n_t, &r1[0], &incx_t, &theta_data[0], &incy_t);
  }

  emxFree_real_T(&st, &r);
  emxFree_real_T(&st, &theta);
  st.site = &jj_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  if (x_f->size[0] != b->size[0]) {
    if ((x_f->size[0] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (x_f->size[0] < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x_f->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    y = ddot(&n_t, &x_f_data[0], &incx_t, &b_data[0], &incy_t);
  }

  st.site = &jj_emlrtRSI;
  if (sig2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &bb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  st.site = &jj_emlrtRSI;
  x = muDoubleScalarSqrt(sig2) * b_randn();
  i = y_pred->size[0];
  y_pred->size[0] = b_loop_ub + 1;
  emxEnsureCapacity_real_T(sp, y_pred, i, &dk_emlrtRTEI);
  theta_data = y_pred->data;
  for (i = 0; i <= b_loop_ub; i++) {
    theta_data[i] = ((y + error_data[i2 + i3 * i] * coef_data[0]) + v_X) + x;
  }

  /*  다음기에 예상되는 y-value */
  /*  lnpredlik = lnpdfn(y_pred, xf'*beta, volf^2); */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X, const
                     emxArray_real_T *Y, const emxArray_real_T *beta0, const
                     emxArray_real_T *precB0, const emxArray_real_T *coef,
                     real_T a0, real_T d0, real_T p, real_T q, const
                     emxArray_real_T *vm, real_T sig2_before, real_T model,
                     real_T d, emxArray_real_T *beta, real_T *sig2)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *B1;
  emxArray_real_T *X_;
  emxArray_real_T *Y_;
  emxArray_real_T *b;
  emxArray_real_T *b_B1;
  emxArray_real_T *b_tmp;
  emxArray_real_T *phi;
  emxArray_real_T *r;
  emxArray_real_T *theta;
  const real_T *X_data;
  const real_T *Y_data;
  const real_T *coef_data;
  const real_T *precB0_data;
  const real_T *vm_data;
  real_T alpha1;
  real_T b_d;
  real_T beta1;
  real_T c_i;
  real_T d1;
  real_T d2;
  real_T ds;
  real_T *B1_data;
  real_T *X__data;
  real_T *Y__data;
  real_T *b_tmp_data;
  real_T *beta_data;
  real_T *phi_data;
  real_T *theta_data;
  int32_T b_Y_[2];
  int32_T b_Y;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T b_vm;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  vm_data = vm->data;
  coef_data = coef->data;
  precB0_data = precB0->data;
  Y_data = Y->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  Beta sampling */
  ds = muDoubleScalarMax(p, q);
  if (1.0 > p) {
    loop_ub = 0;
  } else {
    if (1 > coef->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, coef->size[0], &de_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (((int32_T)p < 1) || ((int32_T)p > coef->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, coef->size[0], &ee_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = (int32_T)p;
  }

  emxInit_real_T(sp, &phi, 1, &nj_emlrtRTEI);
  i = phi->size[0];
  phi->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, phi, i, &nj_emlrtRTEI);
  phi_data = phi->data;
  for (i = 0; i < loop_ub; i++) {
    phi_data[i] = coef_data[i];
  }

  emxInit_real_T(sp, &theta, 1, &oj_emlrtRTEI);
  b_loop_ub = (int32_T)muDoubleScalarFloor(q - 1.0);
  i = theta->size[0];
  theta->size[0] = b_loop_ub + 1;
  emxEnsureCapacity_real_T(sp, theta, i, &oj_emlrtRTEI);
  theta_data = theta->data;
  for (i = 0; i <= b_loop_ub; i++) {
    i1 = (int32_T)(p + (real_T)(i + 1));
    if ((i1 < 1) || (i1 > coef->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, coef->size[0], &ie_emlrtBCI,
        (emlrtCTX)sp);
    }

    theta_data[i] = coef_data[i1 - 1];
  }

  emxInit_real_T(sp, &Y_, 1, &pj_emlrtRTEI);
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &nb_emlrtDCI, (emlrtCTX)sp);
  }

  i = Y_->size[0];
  Y_->size[0] = (int32_T)alpha1;
  emxEnsureCapacity_real_T(sp, Y_, i, &pj_emlrtRTEI);
  Y__data = Y_->data;
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &nb_emlrtDCI, (emlrtCTX)sp);
  }

  c_loop_ub = (int32_T)alpha1;
  for (i = 0; i < c_loop_ub; i++) {
    Y__data[i] = 0.0;
  }

  emxInit_real_T(sp, &X_, 2, &qj_emlrtRTEI);
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &mb_emlrtDCI, (emlrtCTX)sp);
  }

  i = X_->size[0] * X_->size[1];
  X_->size[0] = (int32_T)alpha1;
  X_->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, X_, i, &qj_emlrtRTEI);
  X__data = X_->data;
  alpha1 = (real_T)X->size[0] - ds;
  if (!(alpha1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(alpha1, &ob_emlrtDCI, (emlrtCTX)sp);
  }

  c_loop_ub = (int32_T)alpha1 * X->size[1];
  for (i = 0; i < c_loop_ub; i++) {
    X__data[i] = 0.0;
  }

  i = (int32_T)((real_T)X->size[0] + (1.0 - (ds + 1.0)));
  emlrtForLoopVectorCheckR2021a(ds + 1.0, 1.0, X->size[0], mxDOUBLE_CLASS, i,
    &x_emlrtRTEI, (emlrtCTX)sp);
  if (0 <= i - 1) {
    b_d = 0.0 - p;
    d_loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0));
    b_Y = Y->size[0];
    b_vm = vm->size[0];
    d1 = 0.0 - q;
    e_loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0));
    d2 = 0.0 - q;
    b_Y_[0] = 1;
  }

  emxInit_real_T(sp, &B1, 2, &ak_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &vj_emlrtRTEI);
  emxInit_real_T(sp, &b, 1, &tj_emlrtRTEI);
  emxInit_real_T(sp, &b_tmp, 1, &sj_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    c_i = (ds + 1.0) + (real_T)b_i;
    if (1 > Y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Y->size[1], &fe_emlrtBCI, (emlrtCTX)sp);
    }

    st.site = &li_emlrtRSI;
    i1 = b_tmp->size[0];
    b_tmp->size[0] = (int32_T)muDoubleScalarFloor(-(b_d - -1.0)) + 1;
    emxEnsureCapacity_real_T(&st, b_tmp, i1, &sj_emlrtRTEI);
    b_tmp_data = b_tmp->data;
    for (i1 = 0; i1 <= d_loop_ub; i1++) {
      b_tmp_data[i1] = c_i + (-1.0 - (real_T)i1);
    }

    i1 = b->size[0];
    b->size[0] = b_tmp->size[0];
    emxEnsureCapacity_real_T(&st, b, i1, &tj_emlrtRTEI);
    beta_data = b->data;
    c_loop_ub = b_tmp->size[0];
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      i2 = (int32_T)b_tmp_data[i1];
      if ((i2 < 1) || (i2 > b_Y)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, b_Y, &je_emlrtBCI, &st);
      }

      beta_data[i1] = Y_data[i2 - 1];
    }

    b_st.site = &dd_emlrtRSI;
    if (loop_ub != b_tmp->size[0]) {
      if ((loop_ub == 1) || (b_tmp->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (loop_ub < 1) {
      alpha1 = 0.0;
    } else {
      n_t = (ptrdiff_t)loop_ub;
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      alpha1 = ddot(&n_t, &phi_data[0], &incx_t, &beta_data[0], &incy_t);
    }

    st.site = &li_emlrtRSI;
    i1 = b->size[0];
    b->size[0] = (int32_T)muDoubleScalarFloor(-(d1 - -1.0)) + 1;
    emxEnsureCapacity_real_T(&st, b, i1, &vj_emlrtRTEI);
    beta_data = b->data;
    for (i1 = 0; i1 <= e_loop_ub; i1++) {
      i2 = (int32_T)(c_i + (-1.0 - (real_T)i1));
      if ((i2 < 1) || (i2 > b_vm)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, b_vm, &ke_emlrtBCI, &st);
      }

      beta_data[i1] = vm_data[i2 - 1];
    }

    b_st.site = &dd_emlrtRSI;
    if (b_loop_ub + 1 != (int32_T)muDoubleScalarFloor(-(d2 - -1.0)) + 1) {
      if ((b_loop_ub + 1 == 1) || ((int32_T)muDoubleScalarFloor(-((0.0 - q) -
             -1.0)) + 1 == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (b_loop_ub + 1 < 1) {
      beta1 = 0.0;
    } else {
      n_t = (ptrdiff_t)((int32_T)muDoubleScalarFloor(q - 1.0) + 1);
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      beta1 = ddot(&n_t, &theta_data[0], &incx_t, &beta_data[0], &incy_t);
    }

    if (((int32_T)c_i < 1) || ((int32_T)c_i > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, Y->size[0], &le_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = (int32_T)(c_i - ds);
    if ((i1 < 1) || (i1 > Y_->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Y_->size[0], &me_emlrtBCI, (emlrtCTX)
        sp);
    }

    Y__data[i1 - 1] = (Y_data[(int32_T)c_i - 1] - alpha1) - beta1;
    if (((int32_T)c_i < 1) || ((int32_T)c_i > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, X->size[0], &ge_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &mi_emlrtRSI;
    c_loop_ub = X->size[1];
    i2 = B1->size[0] * B1->size[1];
    B1->size[0] = b_tmp->size[0];
    B1->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, B1, i2, &wj_emlrtRTEI);
    B1_data = B1->data;
    for (i2 = 0; i2 < c_loop_ub; i2++) {
      f_loop_ub = b_tmp->size[0];
      for (i3 = 0; i3 < f_loop_ub; i3++) {
        i4 = (int32_T)b_tmp_data[i3];
        if ((i4 < 1) || (i4 > X->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, X->size[0], &ne_emlrtBCI, &st);
        }

        B1_data[i3 + B1->size[0] * i2] = X_data[(i4 + X->size[0] * i2) - 1];
      }
    }

    b_st.site = &dd_emlrtRSI;
    if (loop_ub != b_tmp->size[0]) {
      if ((loop_ub == 1) || ((b_tmp->size[0] == 1) && (X->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &fd_emlrtRSI;
    if ((loop_ub == 0) || (b_tmp->size[0] == 0) || (X->size[1] == 0)) {
      c_loop_ub = X->size[1];
      i2 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&b_st, r, i2, &xj_emlrtRTEI);
      beta_data = r->data;
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        beta_data[i2] = 0.0;
      }
    } else {
      c_st.site = &gd_emlrtRSI;
      d_st.site = &hd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'T';
      alpha1 = 1.0;
      beta1 = 0.0;
      incx_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)X->size[1];
      incy_t = (ptrdiff_t)loop_ub;
      lda_t = (ptrdiff_t)loop_ub;
      ldb_t = (ptrdiff_t)b_tmp->size[0];
      ldc_t = (ptrdiff_t)1;
      i2 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&d_st, r, i2, &ve_emlrtRTEI);
      beta_data = r->data;
      dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &alpha1, &phi_data[0],
            &lda_t, &B1_data[0], &ldb_t, &beta1, &beta_data[0], &ldc_t);
    }

    c_loop_ub = X->size[1];
    if ((X->size[1] != r->size[1]) && ((X->size[1] != 1) && (r->size[1] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(X->size[1], r->size[1], &hc_emlrtECI,
        (emlrtCTX)sp);
    }

    if (i1 > X_->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, X_->size[0], &he_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (X->size[1] == r->size[1]) {
      i2 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, r, i2, &yj_emlrtRTEI);
      beta_data = r->data;
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        beta_data[i2] = X_data[((int32_T)c_i + X->size[0] * i2) - 1] -
          beta_data[i2];
      }
    } else {
      st.site = &mi_emlrtRSI;
      o_binary_expand_op(&st, r, X, c_i);
      beta_data = r->data;
    }

    b_Y_[1] = X_->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_Y_[0], 2, &r->size[0], 2, &ic_emlrtECI,
      (emlrtCTX)sp);
    c_loop_ub = r->size[1];
    for (i2 = 0; i2 < c_loop_ub; i2++) {
      X__data[(i1 + X_->size[0] * i2) - 1] = beta_data[i2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_tmp);
  emxFree_real_T(sp, &r);
  if (model == 1.0) {
    i = beta->size[0];
    beta->size[0] = 1;
    emxEnsureCapacity_real_T(sp, beta, i, &rj_emlrtRTEI);
    beta_data = beta->data;
    beta_data[0] = 0.0;
  } else {
    st.site = &ni_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_st.site = &fd_emlrtRSI;
    h_mtimes(&b_st, X_, X_, B1);
    B1_data = B1->data;
    alpha1 = 1.0 / sig2_before;
    loop_ub = B1->size[0] * B1->size[1];
    for (i = 0; i < loop_ub; i++) {
      B1_data[i] *= alpha1;
    }

    if ((B1->size[0] != precB0->size[0]) && ((B1->size[0] != 1) && (precB0->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(B1->size[0], precB0->size[0], &jc_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((B1->size[1] != precB0->size[1]) && ((B1->size[1] != 1) && (precB0->
          size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(B1->size[1], precB0->size[1], &kc_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((B1->size[0] == precB0->size[0]) && (B1->size[1] == precB0->size[1])) {
      emxInit_real_T(sp, &b_B1, 2, &uj_emlrtRTEI);
      i = b_B1->size[0] * b_B1->size[1];
      b_B1->size[0] = B1->size[0];
      b_B1->size[1] = B1->size[1];
      emxEnsureCapacity_real_T(sp, b_B1, i, &uj_emlrtRTEI);
      beta_data = b_B1->data;
      loop_ub = B1->size[0] * B1->size[1];
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = B1_data[i] + precB0_data[i];
      }

      st.site = &ni_emlrtRSI;
      inv(&st, b_B1, B1);
      emxFree_real_T(sp, &b_B1);
    } else {
      st.site = &ni_emlrtRSI;
      p_binary_expand_op(&st, B1, ni_emlrtRSI, precB0);
    }

    st.site = &oi_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, X_, Y_, X_->size[0], Y_->size[0]);
    b_st.site = &fd_emlrtRSI;
    g_mtimes(&b_st, X_, Y_, phi);
    phi_data = phi->data;
    loop_ub = phi->size[0];
    for (i = 0; i < loop_ub; i++) {
      phi_data[i] *= alpha1;
    }

    st.site = &oi_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, precB0, beta0, precB0->size[1], beta0->size[0]);
    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, precB0, beta0, theta);
    theta_data = theta->data;
    if ((phi->size[0] != theta->size[0]) && ((phi->size[0] != 1) && (theta->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(phi->size[0], theta->size[0], &lc_emlrtECI,
        (emlrtCTX)sp);
    }

    if (phi->size[0] == theta->size[0]) {
      loop_ub = phi->size[0];
      for (i = 0; i < loop_ub; i++) {
        phi_data[i] += theta_data[i];
      }
    } else {
      st.site = &oi_emlrtRSI;
      b_plus(&st, phi, theta);
    }

    st.site = &pi_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, B1, phi, B1->size[1], phi->size[0]);
    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, B1, phi, beta);
    beta_data = beta->data;
    st.site = &qi_emlrtRSI;
    b_st.site = &ui_emlrtRSI;
    cholesky(&b_st, B1);
    st.site = &qi_emlrtRSI;
    b_st.site = &qi_emlrtRSI;
    randn(&b_st, X->size[1], b);
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, B1, b, B1->size[0], b->size[0]);
    b_st.site = &fd_emlrtRSI;
    g_mtimes(&b_st, B1, b, theta);
    theta_data = theta->data;
    if ((beta->size[0] != theta->size[0]) && ((beta->size[0] != 1) &&
         (theta->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(beta->size[0], theta->size[0], &mc_emlrtECI,
        (emlrtCTX)sp);
    }

    if (beta->size[0] == theta->size[0]) {
      loop_ub = beta->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] += theta_data[i];
      }
    } else {
      st.site = &qi_emlrtRSI;
      b_plus(&st, beta, theta);
    }
  }

  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &B1);
  emxFree_real_T(sp, &phi);
  st.site = &ri_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_, beta, X_->size[1], beta->size[0]);
  b_st.site = &fd_emlrtRSI;
  b_mtimes(&b_st, X_, beta, theta);
  theta_data = theta->data;
  emxFree_real_T(sp, &X_);
  if ((Y_->size[0] != theta->size[0]) && ((Y_->size[0] != 1) && (theta->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y_->size[0], theta->size[0], &nc_emlrtECI,
      (emlrtCTX)sp);
  }

  if (Y_->size[0] == theta->size[0]) {
    loop_ub = Y_->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y__data[i] -= theta_data[i];
    }
  } else {
    st.site = &ri_emlrtRSI;
    c_minus(&st, Y_, theta);
    Y__data = Y_->data;
  }

  emxFree_real_T(sp, &theta);

  /*  잔차항 */
  st.site = &si_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  if (Y_->size[0] < 1) {
    alpha1 = 0.0;
  } else {
    n_t = (ptrdiff_t)Y_->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    alpha1 = ddot(&n_t, &Y__data[0], &incx_t, &Y__data[0], &incy_t);
  }

  emxFree_real_T(&st, &Y_);
  st.site = &ti_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &bj_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  c_st.site = &cj_emlrtRSI;
  alpha1 = gamrnd(&c_st, (a0 + ((real_T)X->size[0] - ds)) / 2.0, 1.0 / ((d0 + d *
    alpha1) / 2.0));

  /*  var_Y = var(Y); */
  /*  if sig2 >= 2*var_Y */
  /*      sig2 = sig2_before; */
  /*      beta = beta_before; */
  /*  end */
  *sig2 = 1.0 / alpha1 / d;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_coef(const emlrtStack *sp, const emxArray_real_T *d_error, const
                     emxArray_real_T *vm, const emxArray_real_T *coef0, const
                     emxArray_real_T *precCOEF0, real_T p, real_T q, real_T sig2,
                     const emxArray_real_T *coefm, emxArray_real_T *coef)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *r6;
  emxArray_boolean_T *test_invertible;
  emxArray_boolean_T *test_stationary;
  emxArray_boolean_T *varargin_1;
  emxArray_creal_T *eig_;
  emxArray_creal_T *x;
  emxArray_real_T *EV;
  emxArray_real_T *absolute;
  emxArray_real_T *b1;
  emxArray_real_T *c_vm;
  emxArray_real_T *f_error;
  emxArray_real_T *imagine;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *theta;
  emxArray_real_T *varb1;
  emxArray_real_T *varb1_inv;
  creal_T *eig__data;
  creal_T *x_data;
  const real_T *coef0_data;
  const real_T *coefm_data;
  const real_T *error_data;
  const real_T *precCOEF0_data;
  const real_T *vm_data;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T ds;
  real_T sig2_inv;
  real_T *EV_data;
  real_T *b1_data;
  real_T *b_error_data;
  real_T *b_vm_data;
  real_T *coef_data;
  real_T *imagine_data;
  real_T *theta_data;
  real_T *varb1_inv_data;
  int32_T sizes[2];
  int32_T b_loop_ub;
  int32_T b_vm;
  int32_T c_loop_ub;
  int32_T e_error;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T iter;
  int32_T loop_ub;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int32_T t;
  int8_T input_sizes_idx_1;
  boolean_T b;
  boolean_T exitg1;
  boolean_T test;
  boolean_T *r10;
  boolean_T *r11;
  boolean_T *r7;
  boolean_T *r8;
  boolean_T *r9;
  boolean_T *test_invertible_data;
  boolean_T *test_stationary_data;
  boolean_T *varargin_1_data;
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
  coefm_data = coefm->data;
  precCOEF0_data = precCOEF0->data;
  coef0_data = coef0->data;
  vm_data = vm->data;
  error_data = d_error->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  ds = muDoubleScalarMax(p, q);
  i = coef->size[0];
  coef->size[0] = coef0->size[0];
  emxEnsureCapacity_real_T(sp, coef, i, &kh_emlrtRTEI);
  coef_data = coef->data;
  loop_ub = coef0->size[0];
  for (i = 0; i < loop_ub; i++) {
    coef_data[i] = coef0_data[i];
  }

  emxInit_real_T(sp, &EV, 2, &lh_emlrtRTEI);
  d = (real_T)d_error->size[0] - ds;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ib_emlrtDCI, (emlrtCTX)sp);
  }

  i = EV->size[0] * EV->size[1];
  EV->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, EV, i, &lh_emlrtRTEI);
  d = p + q;
  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &jb_emlrtDCI, (emlrtCTX)sp);
  }

  i = EV->size[0] * EV->size[1];
  EV->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, EV, i, &lh_emlrtRTEI);
  EV_data = EV->data;
  sig2_inv = (real_T)d_error->size[0] - ds;
  if (!(sig2_inv >= 0.0)) {
    emlrtNonNegativeCheckR2012b(sig2_inv, &kb_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &lb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = (int32_T)sig2_inv * (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    EV_data[i] = 0.0;
  }

  if (ds + 1.0 > d_error->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    if (((int32_T)(ds + 1.0) < 1) || ((int32_T)(ds + 1.0) > d_error->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ds + 1.0), 1, d_error->size[0],
        &sd_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(ds + 1.0) - 1;
    if (d_error->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(d_error->size[0], 1, d_error->size[0],
        &td_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = d_error->size[0];
  }

  if (1 > d_error->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, d_error->size[1], &ud_emlrtBCI,
      (emlrtCTX)sp);
  }

  iter = coefm->size[0];
  i2 = (int32_T)((real_T)d_error->size[0] + (1.0 - (ds + 1.0)));
  emlrtForLoopVectorCheckR2021a(ds + 1.0, 1.0, d_error->size[0], mxDOUBLE_CLASS,
    i2, &s_emlrtRTEI, (emlrtCTX)sp);
  if (0 <= i2 - 1) {
    e_error = d_error->size[0] * d_error->size[1];
    d2 = 0.0 - p;
    b_loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - p) - -1.0));
    b_vm = vm->size[0];
    d3 = 0.0 - q;
    c_loop_ub = (int32_T)muDoubleScalarFloor(-((0.0 - q) - -1.0));
  }

  emxInit_real_T(sp, &varb1_inv, 2, &oh_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &wh_emlrtRTEI);
  emxInit_real_T(sp, &f_error, 1, &qh_emlrtRTEI);
  emxInit_real_T(sp, &c_vm, 2, &rh_emlrtRTEI);
  if (0 <= i2 - 1) {
    sizes[0] = 1;
  }

  for (t = 0; t < i2; t++) {
    sig2_inv = (ds + 1.0) + (real_T)t;
    i3 = c_vm->size[0] * c_vm->size[1];
    c_vm->size[0] = 1;
    c_vm->size[1] = (int32_T)muDoubleScalarFloor(-(d2 - -1.0)) + 1;
    emxEnsureCapacity_real_T(sp, c_vm, i3, &mh_emlrtRTEI);
    b_vm_data = c_vm->data;
    for (i3 = 0; i3 <= b_loop_ub; i3++) {
      i4 = (int32_T)(sig2_inv + (-1.0 - (real_T)i3));
      if ((i4 < 1) || (i4 > e_error)) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, e_error, &ae_emlrtBCI, (emlrtCTX)sp);
      }

      b_vm_data[i3] = i4;
    }

    st.site = &gg_emlrtRSI;
    indexShapeCheck(&st, *(int32_T (*)[2])d_error->size, *(int32_T (*)[2])
                    c_vm->size);
    i3 = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int32_T)muDoubleScalarFloor(-(d3 - -1.0)) + 1;
    emxEnsureCapacity_real_T(sp, r, i3, &nh_emlrtRTEI);
    imagine_data = r->data;
    for (i3 = 0; i3 <= c_loop_ub; i3++) {
      i4 = (int32_T)(sig2_inv + (-1.0 - (real_T)i3));
      if ((i4 < 1) || (i4 > b_vm)) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, b_vm, &be_emlrtBCI, (emlrtCTX)sp);
      }

      imagine_data[i3] = i4;
    }

    st.site = &gg_emlrtRSI;
    b_indexShapeCheck(&st, vm->size[0], *(int32_T (*)[2])r->size);
    i3 = (int32_T)(sig2_inv - ds);
    if ((i3 < 1) || (i3 > EV->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, EV->size[0], &vd_emlrtBCI, (emlrtCTX)
        sp);
    }

    st.site = &gg_emlrtRSI;
    b_st.site = &nd_emlrtRSI;
    if (c_vm->size[1] != 0) {
      sizes_idx_0 = c_vm->size[1];
    } else if (r->size[1] != 0) {
      sizes_idx_0 = 1;
    } else {
      sizes_idx_0 = 1;
    }

    c_st.site = &od_emlrtRSI;
    if ((sizes_idx_0 != c_vm->size[1]) && (c_vm->size[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((1 != sizes_idx_0) && (r->size[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    input_sizes_idx_1 = (int8_T)(c_vm->size[1] != 0);
    if (r->size[1] != 0) {
      sizes_idx_1 = r->size[1];
    } else {
      sizes_idx_1 = 0;
    }

    i4 = f_error->size[0];
    f_error->size[0] = c_vm->size[1];
    emxEnsureCapacity_real_T(&b_st, f_error, i4, &qh_emlrtRTEI);
    b_error_data = f_error->data;
    loop_ub = c_vm->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      b_error_data[i4] = error_data[(int32_T)b_vm_data[i4] - 1];
    }

    i4 = c_vm->size[0] * c_vm->size[1];
    c_vm->size[0] = 1;
    c_vm->size[1] = r->size[1];
    emxEnsureCapacity_real_T(&b_st, c_vm, i4, &rh_emlrtRTEI);
    b_vm_data = c_vm->data;
    loop_ub = r->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      b_vm_data[i4] = vm_data[(int32_T)imagine_data[i4] - 1];
    }

    i4 = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = sizes_idx_0;
    varb1_inv->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, varb1_inv, i4, &sh_emlrtRTEI);
    varb1_inv_data = varb1_inv->data;
    loop_ub = input_sizes_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      for (i5 = 0; i5 < sizes_idx_0; i5++) {
        varb1_inv_data[i5] = b_error_data[i5];
      }
    }

    for (i4 = 0; i4 < sizes_idx_1; i4++) {
      for (i5 = 0; i5 < sizes_idx_0; i5++) {
        varb1_inv_data[i5 + varb1_inv->size[0] * (i4 + input_sizes_idx_1)] =
          b_vm_data[i5 + sizes_idx_0 * i4];
      }
    }

    sizes[1] = EV->size[1];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &varb1_inv->size[0], 2,
      &vb_emlrtECI, (emlrtCTX)sp);
    loop_ub = varb1_inv->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      sizes_idx_0 = varb1_inv->size[0];
      for (i5 = 0; i5 < sizes_idx_0; i5++) {
        EV_data[(i3 + EV->size[0] * i4) - 1] = varb1_inv_data[i5 +
          varb1_inv->size[0] * i4];
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &r);
  sig2_inv = 1.0 / sig2;
  st.site = &hg_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  c_dynamic_size_checks(&b_st, EV, EV, EV->size[0], EV->size[0]);
  b_st.site = &fd_emlrtRSI;
  h_mtimes(&b_st, EV, EV, varb1_inv);
  varb1_inv_data = varb1_inv->data;
  loop_ub = varb1_inv->size[0] * varb1_inv->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    varb1_inv_data[i2] *= sig2_inv;
  }

  if ((precCOEF0->size[0] != varb1_inv->size[0]) && ((precCOEF0->size[0] != 1) &&
       (varb1_inv->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precCOEF0->size[0], varb1_inv->size[0],
      &wb_emlrtECI, (emlrtCTX)sp);
  }

  if ((precCOEF0->size[1] != varb1_inv->size[1]) && ((precCOEF0->size[1] != 1) &&
       (varb1_inv->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precCOEF0->size[1], varb1_inv->size[1],
      &xb_emlrtECI, (emlrtCTX)sp);
  }

  if ((precCOEF0->size[0] == varb1_inv->size[0]) && (precCOEF0->size[1] ==
       varb1_inv->size[1])) {
    loop_ub = precCOEF0->size[0] * precCOEF0->size[1];
    i2 = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = precCOEF0->size[0];
    varb1_inv->size[1] = precCOEF0->size[1];
    emxEnsureCapacity_real_T(sp, varb1_inv, i2, &oh_emlrtRTEI);
    varb1_inv_data = varb1_inv->data;
    for (i2 = 0; i2 < loop_ub; i2++) {
      varb1_inv_data[i2] += precCOEF0_data[i2];
    }
  } else {
    st.site = &hg_emlrtRSI;
    d_plus(&st, varb1_inv, precCOEF0);
    varb1_inv_data = varb1_inv->data;
  }

  if ((varb1_inv->size[0] != varb1_inv->size[1]) && ((varb1_inv->size[0] != 1) &&
       (varb1_inv->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(varb1_inv->size[0], varb1_inv->size[1],
      &yb_emlrtECI, (emlrtCTX)sp);
  }

  if ((varb1_inv->size[0] != varb1_inv->size[1]) && ((varb1_inv->size[1] != 1) &&
       (varb1_inv->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(varb1_inv->size[1], varb1_inv->size[0],
      &ac_emlrtECI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &varb1, 2, &qi_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &fg_emlrtRTEI);
  if (varb1_inv->size[0] == varb1_inv->size[1]) {
    i2 = r1->size[0] * r1->size[1];
    r1->size[0] = varb1_inv->size[0];
    r1->size[1] = varb1_inv->size[1];
    emxEnsureCapacity_real_T(sp, r1, i2, &fg_emlrtRTEI);
    imagine_data = r1->data;
    loop_ub = varb1_inv->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_loop_ub = varb1_inv->size[0];
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        imagine_data[i3 + r1->size[0] * i2] = 0.5 * (varb1_inv_data[i3 +
          varb1_inv->size[0] * i2] + varb1_inv_data[i2 + varb1_inv->size[0] * i3]);
      }
    }

    st.site = &ig_emlrtRSI;
    invpd(&st, r1, varb1);
    coef_data = varb1->data;
  } else {
    st.site = &ig_emlrtRSI;
    n_binary_expand_op(&st, varb1, ig_emlrtRSI, varb1_inv);
    coef_data = varb1->data;
  }

  emxInit_real_T(sp, &theta, 1, &vh_emlrtRTEI);
  emxInit_real_T(sp, &imagine, 1, &ti_emlrtRTEI);

  /*  full conditional variance */
  st.site = &jg_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  b_dynamic_size_checks(&b_st, precCOEF0, coef0, precCOEF0->size[1], coef0->
                        size[0]);
  b_st.site = &fd_emlrtRSI;
  b_mtimes(&b_st, precCOEF0, coef0, imagine);
  imagine_data = imagine->data;
  st.site = &jg_emlrtRSI;
  loop_ub = i1 - i;
  i2 = f_error->size[0];
  f_error->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, f_error, i2, &ph_emlrtRTEI);
  b_error_data = f_error->data;
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_error_data[i2] = error_data[i + i2];
  }

  b_st.site = &dd_emlrtRSI;
  b_dynamic_size_checks(&b_st, EV, f_error, EV->size[0], i1 - i);
  i1 = f_error->size[0];
  f_error->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, f_error, i1, &ph_emlrtRTEI);
  b_error_data = f_error->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_error_data[i1] = error_data[i + i1];
  }

  b_st.site = &fd_emlrtRSI;
  g_mtimes(&b_st, EV, f_error, theta);
  theta_data = theta->data;
  loop_ub = theta->size[0];
  for (i = 0; i < loop_ub; i++) {
    theta_data[i] *= sig2_inv;
  }

  if ((imagine->size[0] != theta->size[0]) && ((imagine->size[0] != 1) &&
       (theta->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(imagine->size[0], theta->size[0], &bc_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &jg_emlrtRSI;
  if (imagine->size[0] == theta->size[0]) {
    loop_ub = imagine->size[0];
    for (i = 0; i < loop_ub; i++) {
      imagine_data[i] += theta_data[i];
    }
  } else {
    b_st.site = &jg_emlrtRSI;
    b_plus(&b_st, imagine, theta);
  }

  emxInit_real_T(&st, &b1, 1, &ri_emlrtRTEI);
  b_st.site = &dd_emlrtRSI;
  b_dynamic_size_checks(&b_st, varb1, imagine, varb1->size[1], imagine->size[0]);
  b_st.site = &fd_emlrtRSI;
  b_mtimes(&b_st, varb1, imagine, b1);
  b1_data = b1->data;

  /*  full conditional mean */
  if ((varb1->size[0] != varb1->size[1]) && ((varb1->size[0] != 1) &&
       (varb1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(varb1->size[0], varb1->size[1], &cc_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((varb1->size[0] != varb1->size[1]) && ((varb1->size[1] != 1) &&
       (varb1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(varb1->size[1], varb1->size[0], &dc_emlrtECI,
      (emlrtCTX)sp);
  }

  if (varb1->size[0] == varb1->size[1]) {
    i = r1->size[0] * r1->size[1];
    r1->size[0] = varb1->size[0];
    r1->size[1] = varb1->size[1];
    emxEnsureCapacity_real_T(sp, r1, i, &fg_emlrtRTEI);
    imagine_data = r1->data;
    loop_ub = varb1->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = varb1->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        imagine_data[i1 + r1->size[0] * i] = 0.5 * (coef_data[i1 + varb1->size[0]
          * i] + coef_data[i + varb1->size[0] * i1]);
      }
    }

    i = varb1->size[0] * varb1->size[1];
    varb1->size[0] = r1->size[0];
    varb1->size[1] = r1->size[1];
    emxEnsureCapacity_real_T(sp, varb1, i, &th_emlrtRTEI);
    coef_data = varb1->data;
    loop_ub = r1->size[0] * r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      coef_data[i] = imagine_data[i];
    }
  } else {
    st.site = &jm_emlrtRSI;
    m_binary_expand_op(&st, varb1);
  }

  emxFree_real_T(sp, &r1);
  test = false;
  sig2_inv = 0.0;
  emxInit_creal_T(sp, &eig_, &si_emlrtRTEI);
  emxInit_real_T(sp, &absolute, 1, &ui_emlrtRTEI);
  emxInit_boolean_T(sp, &test_stationary, &gi_emlrtRTEI);
  emxInit_boolean_T(sp, &test_invertible, &ni_emlrtRTEI);
  emxInit_boolean_T(sp, &varargin_1, &di_emlrtRTEI);
  emxInit_creal_T(sp, &x, &vi_emlrtRTEI);
  emxInit_boolean_T(sp, &r2, &ai_emlrtRTEI);
  emxInit_boolean_T(sp, &r3, &bi_emlrtRTEI);
  emxInit_boolean_T(sp, &r4, &ci_emlrtRTEI);
  emxInit_boolean_T(sp, &r5, &yh_emlrtRTEI);
  emxInit_boolean_T(sp, &r6, &ai_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (!test)) {
    st.site = &kg_emlrtRSI;
    b_cholmod(&st, varb1, varb1_inv);
    st.site = &kg_emlrtRSI;
    b_st.site = &kg_emlrtRSI;
    randn(&b_st, p + q, imagine);
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, varb1_inv, imagine, varb1_inv->size[0],
                          imagine->size[0]);
    b_st.site = &fd_emlrtRSI;
    g_mtimes(&b_st, varb1_inv, imagine, coef);
    if ((b1->size[0] != coef->size[0]) && ((b1->size[0] != 1) && (coef->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(b1->size[0], coef->size[0], &ec_emlrtECI,
        (emlrtCTX)sp);
    }

    if (b1->size[0] == coef->size[0]) {
      i = coef->size[0];
      coef->size[0] = b1->size[0];
      emxEnsureCapacity_real_T(sp, coef, i, &uh_emlrtRTEI);
      coef_data = coef->data;
      loop_ub = b1->size[0];
      for (i = 0; i < loop_ub; i++) {
        coef_data[i] += b1_data[i];
      }
    } else {
      st.site = &kg_emlrtRSI;
      c_plus(&st, coef, b1);
      coef_data = coef->data;
    }

    /*  beta sampling 하기 */
    if (1.0 > p) {
      loop_ub = 0;
    } else {
      if (1 > coef->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, coef->size[0], &wd_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (((int32_T)p < 1) || ((int32_T)p > coef->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, coef->size[0], &xd_emlrtBCI,
          (emlrtCTX)sp);
      }

      loop_ub = (int32_T)p;
    }

    b_loop_ub = (int32_T)muDoubleScalarFloor(q - 1.0);
    i = b_loop_ub + 1;
    i1 = theta->size[0];
    theta->size[0] = b_loop_ub + 1;
    emxEnsureCapacity_real_T(sp, theta, i1, &vh_emlrtRTEI);
    theta_data = theta->data;
    for (i1 = 0; i1 <= b_loop_ub; i1++) {
      i2 = (int32_T)(p + (real_T)(i1 + 1));
      if ((i2 < 1) || (i2 > coef->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, coef->size[0], &ce_emlrtBCI,
          (emlrtCTX)sp);
      }

      theta_data[i1] = coef_data[i2 - 1];
    }

    st.site = &lg_emlrtRSI;
    b_st.site = &lg_emlrtRSI;
    eye(&b_st, p - 1.0, varb1_inv);
    varb1_inv_data = varb1_inv->data;
    if (!(p - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(p - 1.0, &gb_emlrtDCI, &st);
    }

    b_st.site = &nd_emlrtRSI;
    if ((varb1_inv->size[0] != 0) && (varb1_inv->size[1] != 0)) {
      e_error = varb1_inv->size[0];
    } else if ((int32_T)(p - 1.0) != 0) {
      e_error = (int32_T)(p - 1.0);
    } else {
      e_error = varb1_inv->size[0];
      if ((int32_T)(p - 1.0) > varb1_inv->size[0]) {
        e_error = (int32_T)(p - 1.0);
      }
    }

    c_st.site = &od_emlrtRSI;
    if ((varb1_inv->size[0] != e_error) && ((varb1_inv->size[0] != 0) &&
         (varb1_inv->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (((int32_T)(p - 1.0) != e_error) && ((int32_T)(p - 1.0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (e_error == 0);
    if (test || ((varb1_inv->size[0] != 0) && (varb1_inv->size[1] != 0))) {
      sizes_idx_0 = varb1_inv->size[1];
    } else {
      sizes_idx_0 = 0;
    }

    if (test || ((int32_T)(p - 1.0) != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    i1 = EV->size[0] * EV->size[1];
    EV->size[0] = e_error;
    EV->size[1] = sizes_idx_0 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, EV, i1, &ub_emlrtRTEI);
    EV_data = EV->data;
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      for (i2 = 0; i2 < e_error; i2++) {
        EV_data[i2 + EV->size[0] * i1] = varb1_inv_data[i2 + e_error * i1];
      }
    }

    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      for (i2 = 0; i2 < e_error; i2++) {
        EV_data[i2 + EV->size[0] * sizes_idx_0] = 0.0;
      }
    }

    st.site = &lg_emlrtRSI;
    b_st.site = &nd_emlrtRSI;
    if (loop_ub != 0) {
      e_error = loop_ub;
    } else if ((EV->size[0] != 0) && (EV->size[1] != 0)) {
      e_error = EV->size[1];
    } else {
      e_error = 0;
      if (EV->size[1] > 0) {
        e_error = EV->size[1];
      }
    }

    c_st.site = &od_emlrtRSI;
    if ((loop_ub != e_error) && (loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((EV->size[1] != e_error) && ((EV->size[0] != 0) && (EV->size[1] != 0)))
    {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (e_error == 0);
    if (test || (loop_ub != 0)) {
      input_sizes_idx_1 = 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (test || ((EV->size[0] != 0) && (EV->size[1] != 0))) {
      sizes_idx_0 = EV->size[0];
    } else {
      sizes_idx_0 = 0;
    }

    i1 = c_vm->size[0] * c_vm->size[1];
    c_vm->size[0] = 1;
    c_vm->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&b_st, c_vm, i1, &wh_emlrtRTEI);
    b_vm_data = c_vm->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_vm_data[i1] = coef_data[i1];
    }

    i1 = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = input_sizes_idx_1 + sizes_idx_0;
    varb1_inv->size[1] = e_error;
    emxEnsureCapacity_real_T(&b_st, varb1_inv, i1, &xh_emlrtRTEI);
    varb1_inv_data = varb1_inv->data;
    for (i1 = 0; i1 < e_error; i1++) {
      loop_ub = input_sizes_idx_1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        varb1_inv_data[varb1_inv->size[0] * i1] = b_vm_data[input_sizes_idx_1 *
          i1];
      }
    }

    for (i1 = 0; i1 < e_error; i1++) {
      for (i2 = 0; i2 < sizes_idx_0; i2++) {
        varb1_inv_data[(i2 + input_sizes_idx_1) + varb1_inv->size[0] * i1] =
          EV_data[i2 + sizes_idx_0 * i1];
      }
    }

    st.site = &mg_emlrtRSI;
    b_st.site = &mg_emlrtRSI;
    eig(&b_st, varb1_inv, eig_);
    eig__data = eig_->data;
    b_st.site = &mg_emlrtRSI;
    eig(&b_st, varb1_inv, x);
    x_data = x->data;
    i1 = test_invertible->size[0];
    test_invertible->size[0] = eig_->size[0];
    emxEnsureCapacity_boolean_T(&st, test_invertible, i1, &yh_emlrtRTEI);
    test_invertible_data = test_invertible->data;
    loop_ub = eig_->size[0];
    i1 = r2->size[0];
    r2->size[0] = eig_->size[0];
    emxEnsureCapacity_boolean_T(&st, r2, i1, &ai_emlrtRTEI);
    r7 = r2->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      test_invertible_data[i1] = muDoubleScalarIsNaN(eig__data[i1].re);
      r7[i1] = muDoubleScalarIsNaN(eig__data[i1].im);
    }

    i1 = r3->size[0];
    r3->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r3, i1, &bi_emlrtRTEI);
    r8 = r3->data;
    loop_ub = x->size[0];
    i1 = r4->size[0];
    r4->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, i1, &ci_emlrtRTEI);
    r9 = r4->data;
    i1 = r5->size[0];
    r5->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r5, i1, &yh_emlrtRTEI);
    r10 = r5->data;
    i1 = r6->size[0];
    r6->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r6, i1, &ai_emlrtRTEI);
    r11 = r6->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      d = x_data[i1].re;
      r8[i1] = muDoubleScalarIsInf(d);
      d1 = x_data[i1].im;
      r9[i1] = muDoubleScalarIsInf(d1);
      r10[i1] = muDoubleScalarIsNaN(d);
      r11[i1] = muDoubleScalarIsNaN(d1);
    }

    i1 = varargin_1->size[0];
    varargin_1->size[0] = test_invertible->size[0] + r3->size[0];
    emxEnsureCapacity_boolean_T(&st, varargin_1, i1, &di_emlrtRTEI);
    varargin_1_data = varargin_1->data;
    loop_ub = test_invertible->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargin_1_data[i1] = ((!test_invertible_data[i1]) && (!r7[i1]));
    }

    loop_ub = r3->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargin_1_data[i1 + test_invertible->size[0]] = ((!r8[i1]) && (!r9[i1]) &&
        ((!r10[i1]) && (!r11[i1])));
    }

    b_st.site = &ei_emlrtRSI;
    c_st.site = &fi_emlrtRSI;
    d_st.site = &gi_emlrtRSI;
    if (varargin_1->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &uc_emlrtRSI;
    sizes_idx_0 = varargin_1->size[0];
    f_st.site = &hi_emlrtRSI;
    test = varargin_1_data[0];
    g_st.site = &ii_emlrtRSI;
    if ((2 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
      h_st.site = &gb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (e_error = 2; e_error <= sizes_idx_0; e_error++) {
      b = varargin_1_data[e_error - 1];
      test = (((int32_T)test <= (int32_T)b) && test);
    }

    if (test) {
      st.site = &ng_emlrtRSI;
      eig(&st, varb1_inv, eig_);
      eig__data = eig_->data;
      i1 = f_error->size[0];
      f_error->size[0] = eig_->size[0];
      emxEnsureCapacity_real_T(sp, f_error, i1, &fi_emlrtRTEI);
      b_error_data = f_error->data;
      loop_ub = eig_->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_error_data[i1] = eig__data[i1].im;
      }

      st.site = &og_emlrtRSI;
      power(&st, f_error, imagine);
      imagine_data = imagine->data;
      st.site = &pg_emlrtRSI;
      d_abs(&st, eig_, f_error);
      st.site = &pg_emlrtRSI;
      power(&st, f_error, absolute);
      coef_data = absolute->data;
      if ((absolute->size[0] != imagine->size[0]) && ((absolute->size[0] != 1) &&
           (imagine->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(absolute->size[0], imagine->size[0],
          &fc_emlrtECI, (emlrtCTX)sp);
      }

      if (absolute->size[0] == imagine->size[0]) {
        loop_ub = absolute->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          coef_data[i1] += imagine_data[i1];
        }
      } else {
        b_plus(sp, absolute, imagine);
      }

      st.site = &qg_emlrtRSI;
      b_sqrt(&st, absolute);
      coef_data = absolute->data;
      i1 = test_stationary->size[0];
      test_stationary->size[0] = absolute->size[0];
      emxEnsureCapacity_boolean_T(sp, test_stationary, i1, &gi_emlrtRTEI);
      test_stationary_data = test_stationary->data;
      loop_ub = absolute->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        test_stationary_data[i1] = (coef_data[i1] < 1.0);
      }
    } else {
      i1 = test_stationary->size[0];
      test_stationary->size[0] = 1;
      emxEnsureCapacity_boolean_T(sp, test_stationary, i1, &ei_emlrtRTEI);
      test_stationary_data = test_stationary->data;
      test_stationary_data[0] = false;
    }

    st.site = &rg_emlrtRSI;
    b_st.site = &rg_emlrtRSI;
    eye(&b_st, q - 1.0, varb1_inv);
    varb1_inv_data = varb1_inv->data;
    if (!(q - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(q - 1.0, &hb_emlrtDCI, &st);
    }

    b_st.site = &nd_emlrtRSI;
    if ((varb1_inv->size[0] != 0) && (varb1_inv->size[1] != 0)) {
      e_error = varb1_inv->size[0];
    } else if ((int32_T)(q - 1.0) != 0) {
      e_error = (int32_T)(q - 1.0);
    } else {
      e_error = varb1_inv->size[0];
      if ((int32_T)(q - 1.0) > varb1_inv->size[0]) {
        e_error = (int32_T)(q - 1.0);
      }
    }

    c_st.site = &od_emlrtRSI;
    if ((varb1_inv->size[0] != e_error) && ((varb1_inv->size[0] != 0) &&
         (varb1_inv->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (((int32_T)(q - 1.0) != e_error) && ((int32_T)(q - 1.0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (e_error == 0);
    if (test || ((varb1_inv->size[0] != 0) && (varb1_inv->size[1] != 0))) {
      sizes_idx_0 = varb1_inv->size[1];
    } else {
      sizes_idx_0 = 0;
    }

    if (test || ((int32_T)(q - 1.0) != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    i1 = EV->size[0] * EV->size[1];
    EV->size[0] = e_error;
    EV->size[1] = sizes_idx_0 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, EV, i1, &ub_emlrtRTEI);
    EV_data = EV->data;
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      for (i2 = 0; i2 < e_error; i2++) {
        EV_data[i2 + EV->size[0] * i1] = varb1_inv_data[i2 + e_error * i1];
      }
    }

    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      for (i2 = 0; i2 < e_error; i2++) {
        EV_data[i2 + EV->size[0] * sizes_idx_0] = 0.0;
      }
    }

    st.site = &rg_emlrtRSI;
    b_st.site = &nd_emlrtRSI;
    if (b_loop_ub + 1 != 0) {
      e_error = b_loop_ub + 1;
    } else if ((EV->size[0] != 0) && (EV->size[1] != 0)) {
      e_error = EV->size[1];
    } else {
      e_error = muIntScalarMax_sint32(i, 0);
      if (EV->size[1] > e_error) {
        e_error = EV->size[1];
      }
    }

    c_st.site = &od_emlrtRSI;
    if ((b_loop_ub + 1 != e_error) && (b_loop_ub + 1 != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((EV->size[1] != e_error) && ((EV->size[0] != 0) && (EV->size[1] != 0)))
    {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    test = (e_error == 0);
    if (test || (b_loop_ub + 1 != 0)) {
      input_sizes_idx_1 = 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (test || ((EV->size[0] != 0) && (EV->size[1] != 0))) {
      sizes_idx_0 = EV->size[0];
    } else {
      sizes_idx_0 = 0;
    }

    i = c_vm->size[0] * c_vm->size[1];
    c_vm->size[0] = 1;
    c_vm->size[1] = theta->size[0];
    emxEnsureCapacity_real_T(&b_st, c_vm, i, &hi_emlrtRTEI);
    b_vm_data = c_vm->data;
    loop_ub = theta->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_vm_data[i] = theta_data[i];
    }

    i = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = input_sizes_idx_1 + sizes_idx_0;
    varb1_inv->size[1] = e_error;
    emxEnsureCapacity_real_T(&b_st, varb1_inv, i, &ii_emlrtRTEI);
    varb1_inv_data = varb1_inv->data;
    for (i = 0; i < e_error; i++) {
      loop_ub = input_sizes_idx_1;
      for (i1 = 0; i1 < loop_ub; i1++) {
        varb1_inv_data[varb1_inv->size[0] * i] = b_vm_data[input_sizes_idx_1 * i];
      }
    }

    for (i = 0; i < e_error; i++) {
      for (i1 = 0; i1 < sizes_idx_0; i1++) {
        varb1_inv_data[(i1 + input_sizes_idx_1) + varb1_inv->size[0] * i] =
          EV_data[i1 + sizes_idx_0 * i];
      }
    }

    st.site = &sg_emlrtRSI;
    b_st.site = &sg_emlrtRSI;
    eig(&b_st, varb1_inv, eig_);
    eig__data = eig_->data;
    b_st.site = &sg_emlrtRSI;
    eig(&b_st, varb1_inv, x);
    x_data = x->data;
    i = test_invertible->size[0];
    test_invertible->size[0] = eig_->size[0];
    emxEnsureCapacity_boolean_T(&st, test_invertible, i, &yh_emlrtRTEI);
    test_invertible_data = test_invertible->data;
    loop_ub = eig_->size[0];
    i = r2->size[0];
    r2->size[0] = eig_->size[0];
    emxEnsureCapacity_boolean_T(&st, r2, i, &ai_emlrtRTEI);
    r7 = r2->data;
    for (i = 0; i < loop_ub; i++) {
      test_invertible_data[i] = muDoubleScalarIsNaN(eig__data[i].re);
      r7[i] = muDoubleScalarIsNaN(eig__data[i].im);
    }

    i = r3->size[0];
    r3->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r3, i, &bi_emlrtRTEI);
    r8 = r3->data;
    loop_ub = x->size[0];
    i = r4->size[0];
    r4->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, i, &ci_emlrtRTEI);
    r9 = r4->data;
    i = r5->size[0];
    r5->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r5, i, &yh_emlrtRTEI);
    r10 = r5->data;
    i = r6->size[0];
    r6->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(&st, r6, i, &ai_emlrtRTEI);
    r11 = r6->data;
    for (i = 0; i < loop_ub; i++) {
      d = x_data[i].re;
      r8[i] = muDoubleScalarIsInf(d);
      d1 = x_data[i].im;
      r9[i] = muDoubleScalarIsInf(d1);
      r10[i] = muDoubleScalarIsNaN(d);
      r11[i] = muDoubleScalarIsNaN(d1);
    }

    i = varargin_1->size[0];
    varargin_1->size[0] = test_invertible->size[0] + r3->size[0];
    emxEnsureCapacity_boolean_T(&st, varargin_1, i, &ji_emlrtRTEI);
    varargin_1_data = varargin_1->data;
    loop_ub = test_invertible->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i] = ((!test_invertible_data[i]) && (!r7[i]));
    }

    loop_ub = r3->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i + test_invertible->size[0]] = ((!r8[i]) && (!r9[i]) &&
        ((!r10[i]) && (!r11[i])));
    }

    b_st.site = &ei_emlrtRSI;
    c_st.site = &fi_emlrtRSI;
    d_st.site = &gi_emlrtRSI;
    if (varargin_1->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &uc_emlrtRSI;
    sizes_idx_0 = varargin_1->size[0];
    f_st.site = &hi_emlrtRSI;
    test = varargin_1_data[0];
    g_st.site = &ii_emlrtRSI;
    if ((2 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
      h_st.site = &gb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (e_error = 2; e_error <= sizes_idx_0; e_error++) {
      b = varargin_1_data[e_error - 1];
      test = (((int32_T)test <= (int32_T)b) && test);
    }

    if (test) {
      st.site = &tg_emlrtRSI;
      eig(&st, varb1_inv, eig_);
      eig__data = eig_->data;
      i = f_error->size[0];
      f_error->size[0] = eig_->size[0];
      emxEnsureCapacity_real_T(sp, f_error, i, &li_emlrtRTEI);
      b_error_data = f_error->data;
      loop_ub = eig_->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_error_data[i] = eig__data[i].im;
      }

      st.site = &ug_emlrtRSI;
      power(&st, f_error, imagine);
      imagine_data = imagine->data;
      st.site = &vg_emlrtRSI;
      d_abs(&st, eig_, f_error);
      st.site = &vg_emlrtRSI;
      power(&st, f_error, absolute);
      coef_data = absolute->data;
      if ((absolute->size[0] != imagine->size[0]) && ((absolute->size[0] != 1) &&
           (imagine->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(absolute->size[0], imagine->size[0],
          &gc_emlrtECI, (emlrtCTX)sp);
      }

      if (absolute->size[0] == imagine->size[0]) {
        loop_ub = absolute->size[0];
        for (i = 0; i < loop_ub; i++) {
          coef_data[i] += imagine_data[i];
        }
      } else {
        b_plus(sp, absolute, imagine);
      }

      st.site = &wg_emlrtRSI;
      b_sqrt(&st, absolute);
      coef_data = absolute->data;
      i = test_invertible->size[0];
      test_invertible->size[0] = absolute->size[0];
      emxEnsureCapacity_boolean_T(sp, test_invertible, i, &ni_emlrtRTEI);
      test_invertible_data = test_invertible->data;
      loop_ub = absolute->size[0];
      for (i = 0; i < loop_ub; i++) {
        test_invertible_data[i] = (coef_data[i] < 1.0);
      }
    } else {
      i = test_invertible->size[0];
      test_invertible->size[0] = 1;
      emxEnsureCapacity_boolean_T(sp, test_invertible, i, &ki_emlrtRTEI);
      test_invertible_data = test_invertible->data;
      test_invertible_data[0] = false;
    }

    st.site = &xg_emlrtRSI;
    i = varargin_1->size[0];
    varargin_1->size[0] = test_stationary->size[0] + test_invertible->size[0];
    emxEnsureCapacity_boolean_T(&st, varargin_1, i, &mi_emlrtRTEI);
    varargin_1_data = varargin_1->data;
    loop_ub = test_stationary->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i] = test_stationary_data[i];
    }

    loop_ub = test_invertible->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i + test_stationary->size[0]] = test_invertible_data[i];
    }

    b_st.site = &ei_emlrtRSI;
    c_st.site = &fi_emlrtRSI;
    d_st.site = &gi_emlrtRSI;
    if (varargin_1->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &uc_emlrtRSI;
    sizes_idx_0 = varargin_1->size[0];
    f_st.site = &hi_emlrtRSI;
    test = varargin_1_data[0];
    g_st.site = &ii_emlrtRSI;
    if ((2 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
      h_st.site = &gb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (e_error = 2; e_error <= sizes_idx_0; e_error++) {
      b = varargin_1_data[e_error - 1];
      test = (((int32_T)test <= (int32_T)b) && test);
    }

    sig2_inv++;
    if ((sig2_inv > 10.0) && (iter > 1)) {
      if (iter - 1 > coefm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(iter - 1, 1, coefm->size[0], &yd_emlrtBCI,
          (emlrtCTX)sp);
      }

      loop_ub = coefm->size[1];
      i = coef->size[0];
      coef->size[0] = coefm->size[1];
      emxEnsureCapacity_real_T(sp, coef, i, &pi_emlrtRTEI);
      coef_data = coef->data;
      for (i = 0; i < loop_ub; i++) {
        coef_data[i] = coefm_data[(iter + coefm->size[0] * i) - 2];
      }

      exitg1 = true;
    } else if ((sig2_inv > 10.0) && (iter == 1)) {
      i = coef->size[0];
      coef->size[0] = coef0->size[0];
      emxEnsureCapacity_real_T(sp, coef, i, &oi_emlrtRTEI);
      coef_data = coef->data;
      loop_ub = coef0->size[0];
      for (i = 0; i < loop_ub; i++) {
        coef_data[i] = coef0_data[i];
      }

      exitg1 = true;
    } else if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &c_vm);
  emxFree_real_T(sp, &f_error);
  emxFree_boolean_T(sp, &r6);
  emxFree_boolean_T(sp, &r5);
  emxFree_boolean_T(sp, &r4);
  emxFree_boolean_T(sp, &r3);
  emxFree_boolean_T(sp, &r2);
  emxFree_creal_T(sp, &x);
  emxFree_boolean_T(sp, &varargin_1);
  emxFree_boolean_T(sp, &test_invertible);
  emxFree_boolean_T(sp, &test_stationary);
  emxFree_real_T(sp, &absolute);
  emxFree_real_T(sp, &imagine);
  emxFree_creal_T(sp, &eig_);
  emxFree_real_T(sp, &theta);
  emxFree_real_T(sp, &b1);
  emxFree_real_T(sp, &varb1);
  emxFree_real_T(sp, &varb1_inv);
  emxFree_real_T(sp, &EV);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37])
{
  static const int32_T iv[2] = { 1, 37 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void b_minus(const emlrtStack *sp, emxArray_real_T *P_tl, const
                    emxArray_real_T *cP_tt)
{
  emxArray_real_T *b_P_tl;
  const real_T *cP_tt_data;
  real_T *P_tl_data;
  real_T *b_P_tl_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  cP_tt_data = cP_tt->data;
  P_tl_data = P_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_tl, 2, &rl_emlrtRTEI);
  i = b_P_tl->size[0] * b_P_tl->size[1];
  if (cP_tt->size[0] == 1) {
    b_P_tl->size[0] = P_tl->size[0];
  } else {
    b_P_tl->size[0] = cP_tt->size[0];
  }

  if (cP_tt->size[1] == 1) {
    b_P_tl->size[1] = P_tl->size[1];
  } else {
    b_P_tl->size[1] = cP_tt->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_P_tl, i, &rl_emlrtRTEI);
  b_P_tl_data = b_P_tl->data;
  stride_0_0 = (P_tl->size[0] != 1);
  stride_0_1 = (P_tl->size[1] != 1);
  stride_1_0 = (cP_tt->size[0] != 1);
  stride_1_1 = (cP_tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (cP_tt->size[1] == 1) {
    loop_ub = P_tl->size[1];
  } else {
    loop_ub = cP_tt->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (cP_tt->size[0] == 1) {
      b_loop_ub = P_tl->size[0];
    } else {
      b_loop_ub = cP_tt->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_P_tl_data[i1 + b_P_tl->size[0] * i] = P_tl_data[i1 * stride_0_0 +
        P_tl->size[0] * aux_0_1] - cP_tt_data[i1 * stride_1_0 + cP_tt->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = b_P_tl->size[0];
  P_tl->size[1] = b_P_tl->size[1];
  emxEnsureCapacity_real_T(sp, P_tl, i, &rl_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = b_P_tl->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_P_tl->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] = b_P_tl_data[i1 + b_P_tl->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_P_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *f_tt, const
                   emxArray_real_T *f_tl)
{
  emxArray_real_T *b_f_tt;
  const real_T *f_tl_data;
  real_T *b_f_tt_data;
  real_T *f_tt_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_tl_data = f_tl->data;
  f_tt_data = f_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_tt, 1, &sl_emlrtRTEI);
  i = b_f_tt->size[0];
  if (f_tl->size[0] == 1) {
    b_f_tt->size[0] = f_tt->size[0];
  } else {
    b_f_tt->size[0] = f_tl->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_f_tt, i, &sl_emlrtRTEI);
  b_f_tt_data = b_f_tt->data;
  stride_0_0 = (f_tt->size[0] != 1);
  stride_1_0 = (f_tl->size[0] != 1);
  if (f_tl->size[0] == 1) {
    loop_ub = f_tt->size[0];
  } else {
    loop_ub = f_tl->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_f_tt_data[i] = f_tt_data[i * stride_0_0] + f_tl_data[i * stride_1_0];
  }

  i = f_tt->size[0];
  f_tt->size[0] = b_f_tt->size[0];
  emxEnsureCapacity_real_T(sp, f_tt, i, &sl_emlrtRTEI);
  f_tt_data = f_tt->data;
  loop_ub = b_f_tt->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_tt_data[i] = b_f_tt_data[i];
  }

  emxFree_real_T(sp, &b_f_tt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *d_error,
  const emxArray_real_T *Y, const emxArray_real_T *y_pred)
{
  const real_T *Y_data;
  const real_T *y_pred_data;
  real_T *error_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T y_pred_idx_0;
  y_pred_data = y_pred->data;
  Y_data = Y->data;
  y_pred_idx_0 = y_pred->size[0];
  i = d_error->size[0] * d_error->size[1];
  if (y_pred_idx_0 == 1) {
    d_error->size[0] = Y->size[0];
  } else {
    d_error->size[0] = y_pred_idx_0;
  }

  d_error->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, d_error, i, &uc_emlrtRTEI);
  error_data = d_error->data;
  stride_0_0 = (Y->size[0] != 1);
  stride_1_0 = (y_pred_idx_0 != 1);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (y_pred_idx_0 == 1) {
      b_loop_ub = Y->size[0];
    } else {
      b_loop_ub = y_pred_idx_0;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      error_data[i1 + d_error->size[0] * i] = Y_data[i1 * stride_0_0 + Y->size[0]
        * i] - y_pred_data[i1 * stride_1_0];
    }
  }
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8])
{
  static const int32_T iv[2] = { 1, 8 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 8, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void c_minus(const emlrtStack *sp, emxArray_real_T *Y_, const
                    emxArray_real_T *theta)
{
  emxArray_real_T *b_Y_;
  const real_T *theta_data;
  real_T *Y__data;
  real_T *b_Y__data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  theta_data = theta->data;
  Y__data = Y_->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y_, 1, &wl_emlrtRTEI);
  i = b_Y_->size[0];
  if (theta->size[0] == 1) {
    b_Y_->size[0] = Y_->size[0];
  } else {
    b_Y_->size[0] = theta->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_Y_, i, &wl_emlrtRTEI);
  b_Y__data = b_Y_->data;
  stride_0_0 = (Y_->size[0] != 1);
  stride_1_0 = (theta->size[0] != 1);
  if (theta->size[0] == 1) {
    loop_ub = Y_->size[0];
  } else {
    loop_ub = theta->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_Y__data[i] = Y__data[i * stride_0_0] - theta_data[i * stride_1_0];
  }

  i = Y_->size[0];
  Y_->size[0] = b_Y_->size[0];
  emxEnsureCapacity_real_T(sp, Y_, i, &wl_emlrtRTEI);
  Y__data = Y_->data;
  loop_ub = b_Y_->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y__data[i] = b_Y__data[i];
  }

  emxFree_real_T(sp, &b_Y_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_plus(const emlrtStack *sp, emxArray_real_T *coef, const
                   emxArray_real_T *b1)
{
  emxArray_real_T *b_b1;
  const real_T *b1_data;
  real_T *b_b1_data;
  real_T *coef_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  b1_data = b1->data;
  coef_data = coef->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b1, 1, &ul_emlrtRTEI);
  i = b_b1->size[0];
  if (coef->size[0] == 1) {
    b_b1->size[0] = b1->size[0];
  } else {
    b_b1->size[0] = coef->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_b1, i, &ul_emlrtRTEI);
  b_b1_data = b_b1->data;
  stride_0_0 = (b1->size[0] != 1);
  stride_1_0 = (coef->size[0] != 1);
  if (coef->size[0] == 1) {
    loop_ub = b1->size[0];
  } else {
    loop_ub = coef->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_b1_data[i] = b1_data[i * stride_0_0] + coef_data[i * stride_1_0];
  }

  i = coef->size[0];
  coef->size[0] = b_b1->size[0];
  emxEnsureCapacity_real_T(sp, coef, i, &ul_emlrtRTEI);
  coef_data = coef->data;
  loop_ub = b_b1->size[0];
  for (i = 0; i < loop_ub; i++) {
    coef_data[i] = b_b1_data[i];
  }

  emxFree_real_T(sp, &b_b1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  iv[0] = 1;
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static void d_plus(const emlrtStack *sp, emxArray_real_T *varb1_inv, const
                   emxArray_real_T *precCOEF0)
{
  emxArray_real_T *b_precCOEF0;
  const real_T *precCOEF0_data;
  real_T *b_precCOEF0_data;
  real_T *varb1_inv_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  precCOEF0_data = precCOEF0->data;
  varb1_inv_data = varb1_inv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_precCOEF0, 2, &vl_emlrtRTEI);
  i = b_precCOEF0->size[0] * b_precCOEF0->size[1];
  if (varb1_inv->size[0] == 1) {
    b_precCOEF0->size[0] = precCOEF0->size[0];
  } else {
    b_precCOEF0->size[0] = varb1_inv->size[0];
  }

  if (varb1_inv->size[1] == 1) {
    b_precCOEF0->size[1] = precCOEF0->size[1];
  } else {
    b_precCOEF0->size[1] = varb1_inv->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_precCOEF0, i, &vl_emlrtRTEI);
  b_precCOEF0_data = b_precCOEF0->data;
  stride_0_0 = (precCOEF0->size[0] != 1);
  stride_0_1 = (precCOEF0->size[1] != 1);
  stride_1_0 = (varb1_inv->size[0] != 1);
  stride_1_1 = (varb1_inv->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (varb1_inv->size[1] == 1) {
    loop_ub = precCOEF0->size[1];
  } else {
    loop_ub = varb1_inv->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (varb1_inv->size[0] == 1) {
      b_loop_ub = precCOEF0->size[0];
    } else {
      b_loop_ub = varb1_inv->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_precCOEF0_data[i1 + b_precCOEF0->size[0] * i] = precCOEF0_data[i1 *
        stride_0_0 + precCOEF0->size[0] * aux_0_1] + varb1_inv_data[i1 *
        stride_1_0 + varb1_inv->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = varb1_inv->size[0] * varb1_inv->size[1];
  varb1_inv->size[0] = b_precCOEF0->size[0];
  varb1_inv->size[1] = b_precCOEF0->size[1];
  emxEnsureCapacity_real_T(sp, varb1_inv, i, &vl_emlrtRTEI);
  varb1_inv_data = varb1_inv->data;
  loop_ub = b_precCOEF0->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_precCOEF0->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      varb1_inv_data[i1 + varb1_inv->size[0] * i] = b_precCOEF0_data[i1 +
        b_precCOEF0->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_precCOEF0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, (emlrtCTX)sp);
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

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [17])
{
  static const int32_T iv[2] = { 1, 17 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 17, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6])
{
  static const int32_T iv[2] = { 1, 6 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 6, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray, (const char_T *)
                        "format", true, location);
}

static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tt,
  const emxArray_real_T *f_tl)
{
  emxArray_real_T *b_f_tl;
  const real_T *f_tl_data;
  real_T *b_f_tl_data;
  real_T *f_tt_data;
  int32_T f_tl_idx_0;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_tl_data = f_tl->data;
  f_tt_data = f_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_tl, 2, &pf_emlrtRTEI);
  f_tl_idx_0 = f_tl->size[0];
  i = b_f_tl->size[0] * b_f_tl->size[1];
  if (f_tt->size[0] == 1) {
    b_f_tl->size[0] = f_tl_idx_0;
  } else {
    b_f_tl->size[0] = f_tt->size[0];
  }

  b_f_tl->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b_f_tl, i, &pf_emlrtRTEI);
  b_f_tl_data = b_f_tl->data;
  stride_0_0 = (f_tl_idx_0 != 1);
  stride_1_0 = (f_tt->size[0] != 1);
  if (f_tt->size[0] != 1) {
    f_tl_idx_0 = f_tt->size[0];
  }

  for (i = 0; i < f_tl_idx_0; i++) {
    b_f_tl_data[i] = f_tl_data[i * stride_0_0] + f_tt_data[i * stride_1_0];
  }

  i = f_tt->size[0] * f_tt->size[1];
  f_tt->size[0] = b_f_tl->size[0];
  f_tt->size[1] = 1;
  emxEnsureCapacity_real_T(sp, f_tt, i, &pf_emlrtRTEI);
  f_tt_data = f_tt->data;
  f_tl_idx_0 = b_f_tl->size[0];
  for (i = 0; i < f_tl_idx_0; i++) {
    f_tt_data[i] = b_f_tl_data[i];
  }

  emxFree_real_T(sp, &b_f_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [38])
{
  static const int32_T iv[2] = { 1, 38 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 38, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *likelihood,
  const emxArray_real_T *Fm, int32_T t, const emxArray_real_T *f_tl)
{
  const real_T *Fm_data;
  const real_T *f_tl_data;
  real_T *likelihood_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_tl_data = f_tl->data;
  Fm_data = Fm->data;
  i = Fm->size[1];
  stride_0_0 = likelihood->size[0];
  if (f_tl->size[0] == 1) {
    likelihood->size[0] = i;
  } else {
    likelihood->size[0] = f_tl->size[0];
  }

  emxEnsureCapacity_real_T(sp, likelihood, stride_0_0, &rg_emlrtRTEI);
  likelihood_data = likelihood->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (f_tl->size[0] != 1);
  if (f_tl->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = f_tl->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    likelihood_data[i] = Fm_data[t + Fm->size[0] * (i * stride_0_0)] -
      f_tl_data[i * stride_1_0];
  }
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23])
{
  static const int32_T iv[2] = { 1, 23 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *vec_P_tt,
  const emxArray_real_T *f_tl, real_T ds)
{
  emxArray_real_T *b_f_tl;
  const real_T *f_tl_data;
  real_T *b_f_tl_data;
  real_T *vec_P_tt_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  f_tl_data = f_tl->data;
  vec_P_tt_data = vec_P_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_tl, 2, &tl_emlrtRTEI);
  i = b_f_tl->size[0] * b_f_tl->size[1];
  if (vec_P_tt->size[0] == 1) {
    b_f_tl->size[0] = (int32_T)ds;
  } else {
    b_f_tl->size[0] = vec_P_tt->size[0];
  }

  if (vec_P_tt->size[1] == 1) {
    b_f_tl->size[1] = (int32_T)ds;
  } else {
    b_f_tl->size[1] = vec_P_tt->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_f_tl, i, &tl_emlrtRTEI);
  b_f_tl_data = b_f_tl->data;
  stride_0_0 = ((int32_T)ds != 1);
  stride_0_1 = ((int32_T)ds != 1);
  stride_1_0 = (vec_P_tt->size[0] != 1);
  stride_1_1 = (vec_P_tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (vec_P_tt->size[1] == 1) {
    loop_ub = (int32_T)ds;
  } else {
    loop_ub = vec_P_tt->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (vec_P_tt->size[0] == 1) {
      b_loop_ub = (int32_T)ds;
    } else {
      b_loop_ub = vec_P_tt->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_f_tl_data[i1 + b_f_tl->size[0] * i] = f_tl_data[i1 * stride_0_0 +
        (int32_T)ds * aux_0_1] - vec_P_tt_data[i1 * stride_1_0 + vec_P_tt->size
        [0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = vec_P_tt->size[0] * vec_P_tt->size[1];
  vec_P_tt->size[0] = b_f_tl->size[0];
  vec_P_tt->size[1] = b_f_tl->size[1];
  emxEnsureCapacity_real_T(sp, vec_P_tt, i, &tl_emlrtRTEI);
  vec_P_tt_data = vec_P_tt->data;
  loop_ub = b_f_tl->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_f_tl->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      vec_P_tt_data[i1 + vec_P_tt->size[0] * i] = b_f_tl_data[i1 + b_f_tl->size
        [0] * i];
    }
  }

  emxFree_real_T(sp, &b_f_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
{
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo km_emlrtRSI)
{
  emlrtStack st;
  emxArray_real_T *r;
  real_T *cP_tt_data;
  real_T *r1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  cP_tt_data = cP_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &fg_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (cP_tt->size[1] == 1) {
    r->size[0] = cP_tt->size[0];
  } else {
    r->size[0] = cP_tt->size[1];
  }

  if (cP_tt->size[0] == 1) {
    r->size[1] = cP_tt->size[1];
  } else {
    r->size[1] = cP_tt->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &fg_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (cP_tt->size[0] != 1);
  stride_0_1 = (cP_tt->size[1] != 1);
  stride_1_0 = (cP_tt->size[1] != 1);
  stride_1_1 = (cP_tt->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (cP_tt->size[0] == 1) {
    loop_ub = cP_tt->size[1];
  } else {
    loop_ub = cP_tt->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    if (cP_tt->size[1] == 1) {
      b_loop_ub = cP_tt->size[0];
    } else {
      b_loop_ub = cP_tt->size[1];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] = 0.5 * (cP_tt_data[i1 * stride_0_0 + cP_tt->size
        [0] * aux_0_1] + cP_tt_data[aux_1_1 + cP_tt->size[0] * (i1 * stride_1_0)]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &km_emlrtRSI;
  invpd(&st, r, cP_tt);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *P_tl,
  const emxArray_real_T *vec_P_tt, int32_T i3, int32_T i4)
{
  emxArray_real_T *b_vec_P_tt;
  const real_T *vec_P_tt_data;
  real_T *P_tl_data;
  real_T *b_vec_P_tt_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  vec_P_tt_data = vec_P_tt->data;
  P_tl_data = P_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_vec_P_tt, 2, &cg_emlrtRTEI);
  i = vec_P_tt->size[0];
  i1 = b_vec_P_tt->size[0] * b_vec_P_tt->size[1];
  if (P_tl->size[0] == 1) {
    b_vec_P_tt->size[0] = i;
  } else {
    b_vec_P_tt->size[0] = P_tl->size[0];
  }

  if (P_tl->size[1] == 1) {
    b_vec_P_tt->size[1] = (i4 - i3) + 1;
  } else {
    b_vec_P_tt->size[1] = P_tl->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_vec_P_tt, i1, &cg_emlrtRTEI);
  b_vec_P_tt_data = b_vec_P_tt->data;
  stride_0_0 = (i != 1);
  stride_0_1 = ((i4 - i3) + 1 != 1);
  stride_1_0 = (P_tl->size[0] != 1);
  stride_1_1 = (P_tl->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (P_tl->size[1] == 1) {
    loop_ub = (i4 - i3) + 1;
  } else {
    loop_ub = P_tl->size[1];
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    if (P_tl->size[0] == 1) {
      b_loop_ub = i;
    } else {
      b_loop_ub = P_tl->size[0];
    }

    for (i2 = 0; i2 < b_loop_ub; i2++) {
      b_vec_P_tt_data[i2 + b_vec_P_tt->size[0] * i1] = vec_P_tt_data[i2 *
        stride_0_0 + vec_P_tt->size[0] * (i3 + aux_0_1)] - P_tl_data[i2 *
        stride_1_0 + P_tl->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = b_vec_P_tt->size[0];
  P_tl->size[1] = b_vec_P_tt->size[1];
  emxEnsureCapacity_real_T(sp, P_tl, i, &cg_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = b_vec_P_tt->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_vec_P_tt->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] = b_vec_P_tt_data[i1 + b_vec_P_tt->size
        [0] * i];
    }
  }

  emxFree_real_T(sp, &b_vec_P_tt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo km_emlrtRSI, const emxArray_real_T *r3)
{
  emlrtStack st;
  emxArray_real_T *r1;
  const real_T *r;
  real_T *cP_tt_data;
  real_T *r2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  r = r3->data;
  cP_tt_data = cP_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r1, 2, &gf_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  if (cP_tt->size[0] == 1) {
    r1->size[0] = r3->size[0];
  } else {
    r1->size[0] = cP_tt->size[0];
  }

  if (cP_tt->size[1] == 1) {
    r1->size[1] = r3->size[1];
  } else {
    r1->size[1] = cP_tt->size[1];
  }

  emxEnsureCapacity_real_T(sp, r1, i, &gf_emlrtRTEI);
  r2 = r1->data;
  stride_0_0 = (r3->size[0] != 1);
  stride_0_1 = (r3->size[1] != 1);
  stride_1_0 = (cP_tt->size[0] != 1);
  stride_1_1 = (cP_tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (cP_tt->size[1] == 1) {
    loop_ub = r3->size[1];
  } else {
    loop_ub = cP_tt->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (cP_tt->size[0] == 1) {
      b_loop_ub = r3->size[0];
    } else {
      b_loop_ub = cP_tt->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r2[i1 + r1->size[0] * i] = r[i1 * stride_0_0 + r3->size[0] * aux_0_1] -
        cP_tt_data[i1 * stride_1_0 + cP_tt->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &km_emlrtRSI;
  inv(&st, r1, cP_tt);
  emxFree_real_T(sp, &r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *m_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  return y;
}

static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *varb1,
  emlrtRSInfo km_emlrtRSI, const emxArray_real_T *varb1_inv)
{
  emlrtStack st;
  emxArray_real_T *r;
  const real_T *varb1_inv_data;
  real_T *r1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  varb1_inv_data = varb1_inv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &fg_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (varb1_inv->size[1] == 1) {
    r->size[0] = varb1_inv->size[0];
  } else {
    r->size[0] = varb1_inv->size[1];
  }

  if (varb1_inv->size[0] == 1) {
    r->size[1] = varb1_inv->size[1];
  } else {
    r->size[1] = varb1_inv->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &fg_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (varb1_inv->size[0] != 1);
  stride_0_1 = (varb1_inv->size[1] != 1);
  stride_1_0 = (varb1_inv->size[1] != 1);
  stride_1_1 = (varb1_inv->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (varb1_inv->size[0] == 1) {
    loop_ub = varb1_inv->size[1];
  } else {
    loop_ub = varb1_inv->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    if (varb1_inv->size[1] == 1) {
      b_loop_ub = varb1_inv->size[0];
    } else {
      b_loop_ub = varb1_inv->size[1];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] = 0.5 * (varb1_inv_data[i1 * stride_0_0 +
        varb1_inv->size[0] * aux_0_1] + varb1_inv_data[aux_1_1 + varb1_inv->
        size[0] * (i1 * stride_1_0)]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &km_emlrtRSI;
  invpd(&st, r, varb1);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1, const
  emxArray_real_T *X, real_T i)
{
  emxArray_real_T *b_X;
  const real_T *X_data;
  real_T *b_X_data;
  real_T *r;
  int32_T b_i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  X_data = X->data;
  r = r1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_X, 2, &yj_emlrtRTEI);
  b_i = X->size[1];
  stride_0_1 = b_X->size[0] * b_X->size[1];
  b_X->size[0] = 1;
  if (r1->size[1] == 1) {
    b_X->size[1] = b_i;
  } else {
    b_X->size[1] = r1->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_X, stride_0_1, &yj_emlrtRTEI);
  b_X_data = b_X->data;
  stride_0_1 = (b_i != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = b_i;
  } else {
    loop_ub = r1->size[1];
  }

  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_X_data[b_i] = X_data[((int32_T)i + X->size[0] * (b_i * stride_0_1)) - 1] -
      r[b_i * stride_1_1];
  }

  b_i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = b_X->size[1];
  emxEnsureCapacity_real_T(sp, r1, b_i, &yj_emlrtRTEI);
  r = r1->data;
  loop_ub = b_X->size[1];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r[b_i] = b_X_data[b_i];
  }

  emxFree_real_T(sp, &b_X);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo km_emlrtRSI, const emxArray_real_T *precB0)
{
  emlrtStack st;
  emxArray_real_T *b_B1;
  const real_T *precB0_data;
  real_T *B1_data;
  real_T *b_B1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  precB0_data = precB0->data;
  B1_data = B1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_B1, 2, &uj_emlrtRTEI);
  i = b_B1->size[0] * b_B1->size[1];
  if (precB0->size[0] == 1) {
    b_B1->size[0] = B1->size[0];
  } else {
    b_B1->size[0] = precB0->size[0];
  }

  if (precB0->size[1] == 1) {
    b_B1->size[1] = B1->size[1];
  } else {
    b_B1->size[1] = precB0->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_B1, i, &uj_emlrtRTEI);
  b_B1_data = b_B1->data;
  stride_0_0 = (B1->size[0] != 1);
  stride_0_1 = (B1->size[1] != 1);
  stride_1_0 = (precB0->size[0] != 1);
  stride_1_1 = (precB0->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (precB0->size[1] == 1) {
    loop_ub = B1->size[1];
  } else {
    loop_ub = precB0->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (precB0->size[0] == 1) {
      b_loop_ub = B1->size[0];
    } else {
      b_loop_ub = precB0->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_B1_data[i1 + b_B1->size[0] * i] = B1_data[i1 * stride_0_0 + B1->size[0] *
        aux_0_1] + precB0_data[i1 * stride_1_0 + precB0->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &km_emlrtRSI;
  inv(&st, b_B1, B1);
  emxFree_real_T(sp, &b_B1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *P_tl, const
                 emxArray_real_T *Sigma)
{
  emxArray_real_T *b_P_tl;
  const real_T *Sigma_data;
  real_T *P_tl_data;
  real_T *b_P_tl_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  Sigma_data = Sigma->data;
  P_tl_data = P_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_tl, 2, &yg_emlrtRTEI);
  i = b_P_tl->size[0] * b_P_tl->size[1];
  if (Sigma->size[0] == 1) {
    b_P_tl->size[0] = P_tl->size[0];
  } else {
    b_P_tl->size[0] = Sigma->size[0];
  }

  if (Sigma->size[1] == 1) {
    b_P_tl->size[1] = P_tl->size[1];
  } else {
    b_P_tl->size[1] = Sigma->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_P_tl, i, &yg_emlrtRTEI);
  b_P_tl_data = b_P_tl->data;
  stride_0_0 = (P_tl->size[0] != 1);
  stride_0_1 = (P_tl->size[1] != 1);
  stride_1_0 = (Sigma->size[0] != 1);
  stride_1_1 = (Sigma->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Sigma->size[1] == 1) {
    loop_ub = P_tl->size[1];
  } else {
    loop_ub = Sigma->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (Sigma->size[0] == 1) {
      b_loop_ub = P_tl->size[0];
    } else {
      b_loop_ub = Sigma->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_P_tl_data[i1 + b_P_tl->size[0] * i] = P_tl_data[i1 * stride_0_0 +
        P_tl->size[0] * aux_0_1] + Sigma_data[i1 * stride_1_0 + Sigma->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = b_P_tl->size[0];
  P_tl->size[1] = b_P_tl->size[1];
  emxEnsureCapacity_real_T(sp, P_tl, i, &yg_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = b_P_tl->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_P_tl->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] = b_P_tl_data[i1 + b_P_tl->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_P_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void ARMA_X(const emlrtStack *sp, const emxArray_real_T *data, const
            emxArray_real_T *xind, real_T yind, const emxArray_real_T *b0, const
            emxArray_real_T *B0, real_T a0, real_T d0, const emxArray_real_T
            *phi0, const emxArray_real_T *PHI0, const emxArray_real_T *theta0,
            const emxArray_real_T *THETA0, real_T n0, real_T n1, char_T forecast,
            const emxArray_real_T *x_f, char_T ML, real_T d, struct0_T *Output)
{
  static const char_T b_cv1[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  static const char_T cv4[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  static const char_T cv6[17] = { '[', 'p', 'h', 'i', ' ', 'a', 'n', 'd', ' ',
    't', 'h', 'e', 't', 'a', ':', ' ', ']' };

  static const char_T cv5[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  static const char_T cv7[8] = { '[', 's', 'i', 'g', '2', ':', ' ', ']' };

  static const char_T cv3[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T b_cv[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *COEF0;
  emxArray_real_T *Fm;
  emxArray_real_T *Vm;
  emxArray_real_T *X;
  emxArray_real_T *Y;
  emxArray_real_T *Yfm;
  emxArray_real_T *b;
  emxArray_real_T *b_hat;
  emxArray_real_T *coef0;
  emxArray_real_T *coef_hat;
  emxArray_real_T *coefm;
  emxArray_real_T *d_error;
  emxArray_real_T *meanX;
  emxArray_real_T *mean_Y;
  emxArray_real_T *precB0;
  emxArray_real_T *precCOEF0;
  emxArray_real_T *result;
  emxArray_real_T *vm;
  emxArray_real_T *y_pred;
  const real_T *PHI0_data;
  const real_T *THETA0_data;
  const real_T *b0_data;
  const real_T *data_data;
  const real_T *phi0_data;
  const real_T *theta0_data;
  const real_T *xind_data;
  real_T alpha;
  real_T b_d;
  real_T b_prior;
  real_T b_sig2;
  real_T beta;
  real_T coef_prior;
  real_T lnpost1;
  real_T lnpost_hat;
  real_T n;
  real_T sig2;
  real_T sig2_hat;
  real_T *Fm_data;
  real_T *Vm_data;
  real_T *X_data;
  real_T *Y_data;
  real_T *Yfm_data;
  real_T *b_data;
  real_T *b_hat_data;
  real_T *coef_hat_data;
  real_T *coefm_data;
  real_T *error_data;
  real_T *meanX_data;
  real_T *mean_Y_data;
  int32_T b_result[2];
  int32_T b_y_pred[2];
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_0;
  int32_T input_sizes_idx_1;
  int32_T isForecast;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T model;
  int32_T p;
  int32_T q;
  int32_T sizes_idx_1;
  uint32_T ds;
  char_T b_cv2[37];
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  THETA0_data = THETA0->data;
  theta0_data = theta0->data;
  PHI0_data = PHI0->data;
  phi0_data = phi0->data;
  b0_data = b0->data;
  xind_data = xind->data;
  data_data = data->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &hl_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);

  /*  number of columns */
  model = data->size[1];
  emxInit_real_T(sp, &mean_Y, 2, &ed_emlrtRTEI);
  emxInit_real_T(sp, &Y, 2, &mb_emlrtRTEI);
  emxInit_real_T(sp, &X, 2, &nb_emlrtRTEI);
  emxInit_real_T(sp, &b, 1, &rb_emlrtRTEI);
  emxInit_real_T(sp, &meanX, 2, &kd_emlrtRTEI);
  if (data->size[1] == 1) {
    st.site = &emlrtRSI;
    mean(&st, data, mean_Y);
    mean_Y_data = mean_Y->data;
    st.site = &b_emlrtRSI;

    /*  demeaning vectors */
    b_st.site = &nb_emlrtRSI;
    mean(&b_st, data, meanX);
    meanX_data = meanX->data;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = data->size[0];
    Y->size[1] = meanX->size[1];
    emxEnsureCapacity_real_T(&st, Y, i, &kb_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = meanX->size[1];
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = data->size[0];
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        Y_data[i1 + Y->size[0] * i] = meanX_data[i];
      }
    }

    if ((data->size[0] != Y->size[0]) && ((data->size[0] != 1) && (Y->size[0] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(data->size[0], Y->size[0], &emlrtECI, &st);
    }

    if ((data->size[0] == Y->size[0]) && (1 == Y->size[1])) {
      loop_ub = data->size[0];
      i = Y->size[0] * Y->size[1];
      Y->size[0] = data->size[0];
      Y->size[1] = 1;
      emxEnsureCapacity_real_T(&st, Y, i, &mb_emlrtRTEI);
      Y_data = Y->data;
      for (i = 0; i < loop_ub; i++) {
        Y_data[i] = data_data[i] - Y_data[i];
      }
    } else {
      b_st.site = &em_emlrtRSI;
      minus(&b_st, Y, data);
      Y_data = Y->data;
    }

    i = X->size[0] * X->size[1];
    X->size[0] = data->size[0];
    X->size[1] = 1;
    emxEnsureCapacity_real_T(sp, X, i, &nb_emlrtRTEI);
    X_data = X->data;
    loop_ub = data->size[0];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = 0.0;
    }
  } else {
    if (yind != (int32_T)muDoubleScalarFloor(yind)) {
      emlrtIntegerCheckR2012b(yind, &f_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)yind < 1) || ((int32_T)yind > data->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)yind, 1, data->size[1], &s_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = data->size[0];
    i = b->size[0];
    b->size[0] = data->size[0];
    emxEnsureCapacity_real_T(sp, b, i, &jb_emlrtRTEI);
    b_data = b->data;
    for (i = 0; i < loop_ub; i++) {
      b_data[i] = data_data[i + data->size[0] * ((int32_T)yind - 1)];
    }

    i = Y->size[0] * Y->size[1];
    Y->size[0] = data->size[0];
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Y, i, &lb_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = data->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = b_data[i];
    }

    loop_ub = data->size[0];
    i = X->size[0] * X->size[1];
    X->size[0] = data->size[0];
    X->size[1] = xind->size[1];
    emxEnsureCapacity_real_T(sp, X, i, &ob_emlrtRTEI);
    X_data = X->data;
    input_sizes_idx_1 = xind->size[1];
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (xind_data[i] != (int32_T)muDoubleScalarFloor(xind_data[i])) {
          emlrtIntegerCheckR2012b(xind_data[i], &i_emlrtDCI, (emlrtCTX)sp);
        }

        q = (int32_T)xind_data[i];
        if ((q < 1) || (q > data->size[1])) {
          emlrtDynamicBoundsCheckR2012b(q, 1, data->size[1], &t_emlrtBCI,
            (emlrtCTX)sp);
        }

        X_data[i1 + X->size[0] * i] = data_data[i1 + data->size[0] * (q - 1)];
      }
    }

    i = mean_Y->size[0] * mean_Y->size[1];
    mean_Y->size[0] = 1;
    mean_Y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, mean_Y, i, &pb_emlrtRTEI);
    mean_Y_data = mean_Y->data;
    mean_Y_data[0] = 0.0;
  }

  n = n0 + n1;
  if (forecast == 'Y') {
    isForecast = 1;

    /*   예측하기 */
  } else {
    isForecast = 0;

    /*  예측 안하기 */
  }

  /*  초기값 설정하기 */
  i = Output->phi_0->size[0];
  Output->phi_0->size[0] = phi0->size[0] + theta0->size[0];
  emxEnsureCapacity_real_T(sp, Output->phi_0, i, &qb_emlrtRTEI);
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    Output->phi_0->data[i] = phi0_data[i];
  }

  loop_ub = theta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    Output->phi_0->data[i + phi0->size[0]] = theta0_data[i];
  }

  emxInit_real_T(sp, &precB0, 2, &fd_emlrtRTEI);
  sig2 = d0 / a0;
  st.site = &c_emlrtRSI;
  invpd(&st, B0, precB0);
  i = b->size[0];
  b->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b, i, &rb_emlrtRTEI);
  b_data = b->data;
  loop_ub = b0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = b0_data[i];
  }

  emxInit_real_T(sp, &y_pred, 1, &id_emlrtRTEI);
  p = phi0->size[0];
  q = theta0->size[0];
  st.site = &d_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X, b0, X->size[1], b0->size[0]);
  b_st.site = &fd_emlrtRSI;
  b_mtimes(&b_st, X, b0, y_pred);
  meanX_data = y_pred->data;
  if ((Y->size[0] != y_pred->size[0]) && ((Y->size[0] != 1) && (y_pred->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], y_pred->size[0], &i_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &d_error, 2, &tb_emlrtRTEI);
  if (Y->size[0] == y_pred->size[0]) {
    i = d_error->size[0] * d_error->size[1];
    d_error->size[0] = Y->size[0];
    d_error->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(sp, d_error, i, &tb_emlrtRTEI);
    error_data = d_error->data;
    loop_ub = Y->size[1];
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = Y->size[0];
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        error_data[i1 + d_error->size[0] * i] = Y_data[i1 + Y->size[0] * i] -
          meanX_data[i1];
      }
    }
  } else {
    st.site = &d_emlrtRSI;
    binary_expand_op(&st, d_error, Y, y_pred);
  }

  emxInit_real_T(sp, &coef0, 1, &sb_emlrtRTEI);
  i = coef0->size[0];
  coef0->size[0] = Output->phi_0->size[0];
  emxEnsureCapacity_real_T(sp, coef0, i, &sb_emlrtRTEI);
  X_data = coef0->data;
  loop_ub = Output->phi_0->size[0];
  for (i = 0; i < loop_ub; i++) {
    X_data[i] = Output->phi_0->data[i];
  }

  emxInit_real_T(sp, &precCOEF0, 2, &gd_emlrtRTEI);
  st.site = &e_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  if ((PHI0->size[0] != 0) && (PHI0->size[1] != 0)) {
    loop_ub = PHI0->size[0];
  } else if ((phi0->size[0] != 0) && (theta0->size[0] != 0)) {
    loop_ub = phi0->size[0];
  } else {
    loop_ub = PHI0->size[0];
    if (phi0->size[0] > PHI0->size[0]) {
      loop_ub = phi0->size[0];
    }
  }

  c_st.site = &od_emlrtRSI;
  if ((PHI0->size[0] != loop_ub) && ((PHI0->size[0] != 0) && (PHI0->size[1] != 0)))
  {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((phi0->size[0] != loop_ub) && ((phi0->size[0] != 0) && (theta0->size[0] !=
        0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (loop_ub == 0);
  if (empty_non_axis_sizes || ((PHI0->size[0] != 0) && (PHI0->size[1] != 0))) {
    input_sizes_idx_1 = PHI0->size[1];
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || ((phi0->size[0] != 0) && (theta0->size[0] != 0)))
  {
    sizes_idx_1 = theta0->size[0];
  } else {
    sizes_idx_1 = 0;
  }

  i = precCOEF0->size[0] * precCOEF0->size[1];
  precCOEF0->size[0] = loop_ub;
  precCOEF0->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, precCOEF0, i, &ub_emlrtRTEI);
  meanX_data = precCOEF0->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      meanX_data[i1 + precCOEF0->size[0] * i] = PHI0_data[i1 + loop_ub * i];
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      meanX_data[i1 + precCOEF0->size[0] * (i + input_sizes_idx_1)] = 0.0;
    }
  }

  emxInit_real_T(&b_st, &result, 2, &jd_emlrtRTEI);
  st.site = &e_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  if ((theta0->size[0] != 0) && (phi0->size[0] != 0)) {
    loop_ub = theta0->size[0];
  } else if ((THETA0->size[0] != 0) && (THETA0->size[1] != 0)) {
    loop_ub = THETA0->size[0];
  } else {
    loop_ub = theta0->size[0];
    if (THETA0->size[0] > theta0->size[0]) {
      loop_ub = THETA0->size[0];
    }
  }

  c_st.site = &od_emlrtRSI;
  if ((theta0->size[0] != loop_ub) && ((theta0->size[0] != 0) && (phi0->size[0]
        != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((THETA0->size[0] != loop_ub) && ((THETA0->size[0] != 0) && (THETA0->size[1]
        != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (loop_ub == 0);
  if (empty_non_axis_sizes || ((theta0->size[0] != 0) && (phi0->size[0] != 0)))
  {
    input_sizes_idx_1 = phi0->size[0];
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || ((THETA0->size[0] != 0) && (THETA0->size[1] != 0)))
  {
    sizes_idx_1 = THETA0->size[1];
  } else {
    sizes_idx_1 = 0;
  }

  i = result->size[0] * result->size[1];
  result->size[0] = loop_ub;
  result->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, result, i, &ub_emlrtRTEI);
  error_data = result->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      error_data[i1 + result->size[0] * i] = 0.0;
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      error_data[i1 + result->size[0] * (i + input_sizes_idx_1)] =
        THETA0_data[i1 + loop_ub * i];
    }
  }

  st.site = &e_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  if ((precCOEF0->size[0] != 0) && (precCOEF0->size[1] != 0)) {
    loop_ub = precCOEF0->size[1];
  } else if ((result->size[0] != 0) && (result->size[1] != 0)) {
    loop_ub = result->size[1];
  } else {
    loop_ub = precCOEF0->size[1];
    if (result->size[1] > precCOEF0->size[1]) {
      loop_ub = result->size[1];
    }
  }

  c_st.site = &od_emlrtRSI;
  if ((precCOEF0->size[1] != loop_ub) && ((precCOEF0->size[0] != 0) &&
       (precCOEF0->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((result->size[1] != loop_ub) && ((result->size[0] != 0) && (result->size[1]
        != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (loop_ub == 0);
  if (empty_non_axis_sizes || ((precCOEF0->size[0] != 0) && (precCOEF0->size[1]
        != 0))) {
    input_sizes_idx_0 = precCOEF0->size[0];
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || ((result->size[0] != 0) && (result->size[1] != 0)))
  {
    sizes_idx_1 = result->size[0];
  } else {
    sizes_idx_1 = 0;
  }

  emxInit_real_T(&b_st, &COEF0, 2, &vb_emlrtRTEI);
  i = COEF0->size[0] * COEF0->size[1];
  COEF0->size[0] = input_sizes_idx_0 + sizes_idx_1;
  COEF0->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&b_st, COEF0, i, &vb_emlrtRTEI);
  X_data = COEF0->data;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      X_data[i1 + COEF0->size[0] * i] = meanX_data[i1 + input_sizes_idx_0 * i];
    }
  }

  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      X_data[(i1 + input_sizes_idx_0) + COEF0->size[0] * i] = error_data[i1 +
        sizes_idx_1 * i];
    }
  }

  st.site = &f_emlrtRSI;
  invpd(&st, COEF0, precCOEF0);

  /*  MCMC output을 저장할 방 */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &k_emlrtDCI, (emlrtCTX)sp);
  }

  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = (int32_T)n;
  Output->betam->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &wb_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &Vm, 2, &hd_emlrtRTEI);
  loop_ub_tmp = (int32_T)n;
  i1 = Vm->size[0] * Vm->size[1];
  Vm->size[0] = loop_ub_tmp;
  Vm->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, Vm, i1, &xb_emlrtRTEI);
  Vm_data = Vm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->sig2m->size[0];
  Output->sig2m->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->sig2m, i1, &yb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Output->sig2m->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &coefm, 2, &ac_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &g_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = coefm->size[0] * coefm->size[1];
  coefm->size[0] = loop_ub_tmp;
  coefm->size[1] = Output->phi_0->size[0];
  emxEnsureCapacity_real_T(sp, coefm, i1, &ac_emlrtRTEI);
  coefm_data = coefm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = loop_ub_tmp * Output->phi_0->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    coefm_data[i1] = 0.0;
  }

  emxInit_real_T(sp, &Yfm, 1, &bc_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &o_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Yfm->size[0];
  Yfm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Yfm, i1, &bc_emlrtRTEI);
  Yfm_data = Yfm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &o_emlrtDCI, (emlrtCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    Yfm_data[i] = 0.0;
  }

  emxInit_real_T(sp, &vm, 1, &cc_emlrtRTEI);
  i = vm->size[0];
  vm->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, vm, i, &cc_emlrtRTEI);
  X_data = vm->data;
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    X_data[i] = 0.0;
  }

  emxInit_real_T(sp, &Fm, 2, &dc_emlrtRTEI);
  ds = (uint32_T)muDoubleScalarMax(phi0->size[0], (real_T)theta0->size[0] + 1.0);
  i = Fm->size[0] * Fm->size[1];
  Fm->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, Fm, i, &dc_emlrtRTEI);
  if ((real_T)ds != (int32_T)ds) {
    emlrtIntegerCheckR2012b(ds, &h_emlrtDCI, (emlrtCTX)sp);
  }

  i = Fm->size[0] * Fm->size[1];
  Fm->size[1] = (int32_T)ds;
  emxEnsureCapacity_real_T(sp, Fm, i, &dc_emlrtRTEI);
  Fm_data = Fm->data;
  if ((real_T)ds != (int32_T)ds) {
    emlrtIntegerCheckR2012b(ds, &p_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = X->size[0] * (int32_T)ds;
  for (i = 0; i < loop_ub; i++) {
    Fm_data[i] = 0.0;
  }

  emxInit_real_T(sp, &b_hat, 1, &ec_emlrtRTEI);
  lnpost_hat = -4.8516519540979028E+8;

  /*  임의로 값을 주고 시작함 */
  i = b_hat->size[0];
  b_hat->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b_hat, i, &ec_emlrtRTEI);
  b_hat_data = b_hat->data;
  loop_ub = b0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_hat_data[i] = b0_data[i];
  }

  emxInit_real_T(sp, &coef_hat, 1, &fc_emlrtRTEI);
  i = coef_hat->size[0];
  coef_hat->size[0] = Output->phi_0->size[0];
  emxEnsureCapacity_real_T(sp, coef_hat, i, &fc_emlrtRTEI);
  coef_hat_data = coef_hat->data;
  loop_ub = Output->phi_0->size[0];
  for (i = 0; i < loop_ub; i++) {
    coef_hat_data[i] = Output->phi_0->data[i];
  }

  sig2_hat = sig2;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &c_emlrtRTEI, (emlrtCTX)sp);
  for (input_sizes_idx_0 = 0; input_sizes_idx_0 < loop_ub_tmp; input_sizes_idx_0
       ++) {
    /*  report intermediate results */
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((input_sizes_idx_0 - (int32_T)muDoubleScalarFloor(((real_T)
           input_sizes_idx_0 + 1.0) / 100.0) * 100) + 1 == 0) {
      st.site = &am_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i = 0; i < 37; i++) {
        b_cv2[i] = '=';
      }

      st.site = &jl_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, b_cv2), &f_emlrtMCI);
      st.site = &g_emlrtRSI;
      b_st.site = &pd_emlrtRSI;
      c_st.site = &pl_emlrtRSI;
      d_st.site = &ol_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, i_emlrt_marshallOut(&c_st, cv3),
        f_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, cv4),
        f_emlrt_marshallOut((real_T)input_sizes_idx_0 + 1.0), &s_emlrtMCI),
                       "<output of feval>");
      for (i = 0; i < 37; i++) {
        b_cv2[i] = '=';
      }

      st.site = &il_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, b_cv2), &g_emlrtMCI);
      st.site = &yl_emlrtRSI;
      disp(&st, m_emlrt_marshallOut(), &h_emlrtMCI);
      st.site = &ll_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
      i = meanX->size[0] * meanX->size[1];
      meanX->size[0] = 1;
      loop_ub = b->size[0];
      meanX->size[1] = b->size[0];
      emxEnsureCapacity_real_T(sp, meanX, i, &kc_emlrtRTEI);
      meanX_data = meanX->data;
      for (i = 0; i < loop_ub; i++) {
        meanX_data[i] = b_data[i];
      }

      st.site = &xl_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(meanX), &j_emlrtMCI);
      st.site = &ml_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv6), &k_emlrtMCI);
      i = meanX->size[0] * meanX->size[1];
      meanX->size[0] = 1;
      meanX->size[1] = Output->phi_0->size[0];
      emxEnsureCapacity_real_T(sp, meanX, i, &mc_emlrtRTEI);
      meanX_data = meanX->data;
      loop_ub = Output->phi_0->size[0];
      for (i = 0; i < loop_ub; i++) {
        meanX_data[i] = Output->phi_0->data[i];
      }

      st.site = &wl_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(meanX), &l_emlrtMCI);
      st.site = &kl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv7), &m_emlrtMCI);
      st.site = &vl_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(sig2), &n_emlrtMCI);
    }

    /*   Step 1 : Sampling Hidden v_t */
    i = b->size[0];
    b->size[0] = vm->size[0];
    emxEnsureCapacity_real_T(sp, b, i, &gc_emlrtRTEI);
    b_data = b->data;
    loop_ub = vm->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_data[i] = X_data[i];
    }

    i = result->size[0] * result->size[1];
    result->size[0] = Fm->size[0];
    result->size[1] = Fm->size[1];
    emxEnsureCapacity_real_T(sp, result, i, &ic_emlrtRTEI);
    error_data = result->data;
    loop_ub = Fm->size[0] * Fm->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      error_data[i] = Fm_data[i];
    }

    st.site = &h_emlrtRSI;
    Gen_Fm(&st, d_error, Output->phi_0, sig2, p, q, b, result, vm, &lnpost1, Fm);
    Fm_data = Fm->data;
    X_data = vm->data;
    if (input_sizes_idx_0 + 1 > Vm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(input_sizes_idx_0 + 1, 1, Vm->size[0],
        &e_emlrtBCI, (emlrtCTX)sp);
    }

    loop_ub = vm->size[0];
    b_result[0] = 1;
    b_result[1] = Vm->size[1];
    b_y_pred[0] = 1;
    b_y_pred[1] = vm->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_result[0], 2, &b_y_pred[0], 2, &d_emlrtECI,
      (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Vm_data[input_sizes_idx_0 + Vm->size[0] * i] = X_data[i];
    }

    /*   Step 2 : coef sammpling */
    st.site = &i_emlrtRSI;
    Gen_coef(&st, d_error, vm, coef0, precCOEF0, p, q, sig2, coefm,
             Output->phi_0);
    if (input_sizes_idx_0 + 1 > coefm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(input_sizes_idx_0 + 1, 1, coefm->size[0],
        &r_emlrtBCI, (emlrtCTX)sp);
    }

    b_result[0] = 1;
    b_result[1] = coefm->size[1];
    b_y_pred[0] = 1;
    b_y_pred[1] = Output->phi_0->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_result[0], 2, &b_y_pred[0], 2, &h_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = Output->phi_0->size[0];
    for (i = 0; i < loop_ub; i++) {
      coefm_data[input_sizes_idx_0 + coefm->size[0] * i] = Output->phi_0->data[i];
    }

    /*  mu와 phi 저장하기 */
    if ((int32_T)(input_sizes_idx_0 + 1U) > Output->sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(input_sizes_idx_0 + 1U), 1,
        Output->sig2m->size[0], &u_emlrtBCI, (emlrtCTX)sp);
    }

    Output->sig2m->data[input_sizes_idx_0] = sig2;

    /*   Step 3 : beta, sig2 sampling */
    st.site = &j_emlrtRSI;
    Gen_beta(&st, X, Y, b0, precB0, Output->phi_0, a0, d0, p, q, vm, sig2, model,
             d, b, &b_sig2);
    b_data = b->data;
    sig2 = b_sig2;
    if (input_sizes_idx_0 + 1 > Output->betam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(input_sizes_idx_0 + 1, 1, Output->
        betam->size[0], &m_emlrtBCI, (emlrtCTX)sp);
    }

    b_result[0] = 1;
    b_result[1] = Output->betam->size[1];
    b_y_pred[0] = 1;
    loop_ub = b->size[0];
    b_y_pred[1] = b->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_result[0], 2, &b_y_pred[0], 2, &f_emlrtECI,
      (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Output->betam->data[input_sizes_idx_0 + Output->betam->size[0] * i] =
        b_data[i];
    }

    st.site = &k_emlrtRSI;
    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, X, b, X->size[1], b->size[0]);
    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, X, b, y_pred);
    meanX_data = y_pred->data;
    if ((Y->size[0] != y_pred->size[0]) && ((Y->size[0] != 1) && (y_pred->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(Y->size[0], y_pred->size[0], &g_emlrtECI,
        (emlrtCTX)sp);
    }

    if (Y->size[0] == y_pred->size[0]) {
      i = d_error->size[0] * d_error->size[1];
      d_error->size[0] = Y->size[0];
      d_error->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(sp, d_error, i, &uc_emlrtRTEI);
      error_data = d_error->data;
      loop_ub = Y->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = Y->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          error_data[i1 + d_error->size[0] * i] = Y_data[i1 + Y->size[0] * i] -
            meanX_data[i1];
        }
      }
    } else {
      st.site = &k_emlrtRSI;
      binary_expand_op(&st, d_error, Y, y_pred);
    }

    if (isForecast == 1) {
      /*   예측 */
      st.site = &l_emlrtRSI;
      Gen_Forecast(&st, d_error, vm, Output->phi_0, b, b_sig2, p, q, x_f, y_pred);
      meanX_data = y_pred->data;
      if (1 != y_pred->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(1, y_pred->size[0], &e_emlrtECI,
          (emlrtCTX)sp);
      }

      if ((int32_T)(input_sizes_idx_0 + 1U) > Yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(input_sizes_idx_0 + 1U), 1,
          Yfm->size[0], &y_emlrtBCI, (emlrtCTX)sp);
      }

      Yfm_data[input_sizes_idx_0] = meanX_data[0];

      /*          PredLikm(iter) = exp(lnpredlik); */
    }

    if ((ML == 'Y') && ((real_T)input_sizes_idx_0 + 1.0 > n0)) {
      if (model == 1) {
        b_prior = 0.0;
      } else {
        st.site = &m_emlrtRSI;
        b_prior = b_lnpdfmvn(&st, b, b0, B0);
      }

      st.site = &n_emlrtRSI;
      coef_prior = b_lnpdfmvn(&st, Output->phi_0, coef0, COEF0);
      st.site = &o_emlrtRSI;
      alpha = a0 / 2.0;
      beta = d0 / 2.0;

      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &pk_emlrtRSI;
      if (beta < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &y_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      b_d = alpha;
      b_st.site = &pk_emlrtRSI;
      gammaln(&b_st, &b_d);
      b_st.site = &qk_emlrtRSI;
      if (b_sig2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &y_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      lnpost1 += (b_prior + coef_prior) + (((alpha * muDoubleScalarLog(beta) -
        b_d) - (alpha + 1.0) * muDoubleScalarLog(b_sig2)) - beta / b_sig2);
      if (lnpost1 > lnpost_hat) {
        loop_ub = b->size[0];
        i = b_hat->size[0];
        b_hat->size[0] = b->size[0];
        emxEnsureCapacity_real_T(sp, b_hat, i, &wc_emlrtRTEI);
        b_hat_data = b_hat->data;
        for (i = 0; i < loop_ub; i++) {
          b_hat_data[i] = b_data[i];
        }

        i = coef_hat->size[0];
        coef_hat->size[0] = Output->phi_0->size[0];
        emxEnsureCapacity_real_T(sp, coef_hat, i, &xc_emlrtRTEI);
        coef_hat_data = coef_hat->data;
        loop_ub = Output->phi_0->size[0];
        for (i = 0; i < loop_ub; i++) {
          coef_hat_data[i] = Output->phi_0->data[i];
        }

        sig2_hat = b_sig2;
        lnpost_hat = lnpost1;

        /*  최빈값 후보의 사후 커널값 */
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &meanX);
  emxFree_real_T(sp, &vm);
  emxFree_real_T(sp, &COEF0);
  emxFree_real_T(sp, &coef0);
  emxFree_real_T(sp, &d_error);
  emxFree_real_T(sp, &precB0);
  emxFree_real_T(sp, &X);
  st.site = &ul_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &b_emlrtMCI);
  st.site = &nl_emlrtRSI;
  disp(&st, g_emlrt_marshallOut(&st, b_cv1), &c_emlrtMCI);
  st.site = &tl_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &d_emlrtMCI);

  /*  Summary of Output */
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > coefm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, coefm->size[0],
        &q_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > coefm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, coefm->size[0], &p_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp - 1;
  }

  p = coefm->size[1] - 1;
  for (q = 0; q <= p; q++) {
    isForecast = i1 - i;
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < isForecast;
         input_sizes_idx_1++) {
      coefm_data[input_sizes_idx_1 + isForecast * q] = coefm_data[((i +
        input_sizes_idx_1) + coefm->size[0] * q) + 1];
    }
  }

  q = coefm->size[0] * coefm->size[1];
  coefm->size[0] = i1 - i;
  coefm->size[1] = p + 1;
  emxEnsureCapacity_real_T(sp, coefm, q, &hc_emlrtRTEI);
  coefm_data = coefm->data;
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->sig2m->size
         [0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->sig2m->size
        [0], &o_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Output->sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->sig2m->size[0],
        &n_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp;
  }

  isForecast = i1 - i;
  for (i1 = 0; i1 < isForecast; i1++) {
    Output->sig2m->data[i1] = Output->sig2m->data[i + i1];
  }

  i = Output->sig2m->size[0];
  Output->sig2m->size[0] = isForecast;
  emxEnsureCapacity_real_T(sp, Output->sig2m, i, &jc_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->betam->size
         [0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->betam->size
        [0], &l_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->betam->size[0],
        &k_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)n - 1;
  }

  sizes_idx_1 = Output->betam->size[1] - 1;
  for (q = 0; q <= sizes_idx_1; q++) {
    input_sizes_idx_0 = i1 - i;
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < input_sizes_idx_0;
         input_sizes_idx_1++) {
      Output->betam->data[input_sizes_idx_1 + input_sizes_idx_0 * q] =
        Output->betam->data[((i + input_sizes_idx_1) + Output->betam->size[0] *
        q) + 1];
    }
  }

  q = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = i1 - i;
  Output->betam->size[1] = sizes_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, Output->betam, q, &lc_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Yfm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Yfm->size[0],
        &j_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Yfm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Yfm->size[0], &i_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp;
  }

  loop_ub = i1 - i;
  i1 = Output->Yfm->size[0];
  Output->Yfm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->Yfm, i1, &nc_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->Yfm->data[i1] = Yfm_data[i + i1];
  }

  emxFree_real_T(sp, &Yfm);
  if (!(n1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n1, &r_emlrtDCI, (emlrtCTX)sp);
  }

  b_d = (int32_T)muDoubleScalarFloor(n1);
  if (n1 != b_d) {
    emlrtIntegerCheckR2012b(n1, &q_emlrtDCI, (emlrtCTX)sp);
  }

  i = Output->phi_0->size[0];
  loop_ub = (int32_T)n1;
  Output->phi_0->size[0] = (int32_T)n1;
  emxEnsureCapacity_real_T(sp, Output->phi_0, i, &oc_emlrtRTEI);
  if (n1 != b_d) {
    emlrtIntegerCheckR2012b(n1, &q_emlrtDCI, (emlrtCTX)sp);
  }

  for (i = 0; i < loop_ub; i++) {
    Output->phi_0->data[i] = 0.0;
  }

  if (data->size[1] == 1) {
    if (1 > phi0->size[0]) {
      input_sizes_idx_1 = 0;
    } else {
      if (1 > p + 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, p + 1, &h_emlrtBCI, (emlrtCTX)sp);
      }

      if (phi0->size[0] > p + 1) {
        emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, p + 1, &g_emlrtBCI,
          (emlrtCTX)sp);
      }

      input_sizes_idx_1 = phi0->size[0];
    }

    st.site = &p_emlrtRSI;
    i = b->size[0];
    b->size[0] = phi0->size[0];
    emxEnsureCapacity_real_T(&st, b, i, &pc_emlrtRTEI);
    b_data = b->data;
    input_sizes_idx_0 = phi0->size[0];
    for (i = 0; i < input_sizes_idx_0; i++) {
      b_data[i] = 1.0;
    }

    input_sizes_idx_0 = coefm->size[0];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = coefm->size[0];
    Y->size[1] = input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, Y, i, &rc_emlrtRTEI);
    Y_data = Y->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        Y_data[i1 + Y->size[0] * i] = coefm_data[i1 + coefm->size[0] * i];
      }
    }

    b_st.site = &dd_emlrtRSI;
    b_dynamic_size_checks(&b_st, Y, b, input_sizes_idx_1, phi0->size[0]);
    input_sizes_idx_0 = coefm->size[0];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = coefm->size[0];
    Y->size[1] = input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, Y, i, &rc_emlrtRTEI);
    Y_data = Y->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        Y_data[i1 + Y->size[0] * i] = coefm_data[i1 + coefm->size[0] * i];
      }
    }

    b_st.site = &fd_emlrtRSI;
    b_mtimes(&b_st, Y, b, y_pred);
    meanX_data = y_pred->data;
    input_sizes_idx_1 = y_pred->size[0];
    for (i = 0; i < input_sizes_idx_1; i++) {
      meanX_data[i] = 1.0 - meanX_data[i];
    }

    emlrtForLoopVectorCheckR2021a(1.0, 1.0, n1, mxDOUBLE_CLASS, (int32_T)n1,
      &b_emlrtRTEI, (emlrtCTX)sp);
    for (input_sizes_idx_0 = 0; input_sizes_idx_0 < loop_ub; input_sizes_idx_0++)
    {
      if (1 > mean_Y->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, mean_Y->size[1], &f_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (((int32_T)(input_sizes_idx_0 + 1U) < 1) || ((int32_T)
           (input_sizes_idx_0 + 1U) > y_pred->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(input_sizes_idx_0 + 1U), 1,
          y_pred->size[0], &v_emlrtBCI, (emlrtCTX)sp);
      }

      if (((int32_T)(input_sizes_idx_0 + 1U) < 1) || ((int32_T)
           (input_sizes_idx_0 + 1U) > Output->phi_0->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(input_sizes_idx_0 + 1U), 1,
          Output->phi_0->size[0], &w_emlrtBCI, (emlrtCTX)sp);
      }

      Output->phi_0->data[input_sizes_idx_0] = mean_Y_data[0] *
        meanX_data[input_sizes_idx_0];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  }

  emxFree_real_T(sp, &Y);

  /*  if isForecast ==1 */
  /*      Yfm = Yfm(n0+1:n, :); */
  /*      PredLikm = PredLikm(n0+1:n, :);   % 번인 버리기 */
  /*      predlik = meanc(PredLikm); */
  /*  end */
  if (n0 + 1.0 > n) {
    i = 0;
    loop_ub_tmp = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Vm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Vm->size[0],
        &d_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Vm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Vm->size[0], &c_emlrtBCI,
        (emlrtCTX)sp);
    }
  }

  loop_ub = Vm->size[1];
  input_sizes_idx_1 = loop_ub_tmp - i;
  i1 = Output->Vm->size[0] * Output->Vm->size[1];
  Output->Vm->size[0] = input_sizes_idx_1;
  Output->Vm->size[1] = Vm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Vm, i1, &qc_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (q = 0; q < input_sizes_idx_1; q++) {
      Output->Vm->data[q + Output->Vm->size[0] * i1] = Vm_data[(i + q) +
        Vm->size[0] * i1];
    }
  }

  emxFree_real_T(sp, &Vm);
  Output->lnML = 0.0;
  if (ML == 'Y') {
    if (data->size[1] == 1) {
      st.site = &q_emlrtRSI;
      b_st.site = &nd_emlrtRSI;
      if ((coefm->size[0] != 0) && (p + 1 != 0)) {
        loop_ub = coefm->size[0];
      } else if (isForecast != 0) {
        loop_ub = isForecast;
      } else {
        loop_ub = coefm->size[0];
      }

      c_st.site = &od_emlrtRSI;
      if ((coefm->size[0] != loop_ub) && ((coefm->size[0] != 0) && (p + 1 != 0)))
      {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((isForecast != loop_ub) && (isForecast != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes || ((coefm->size[0] != 0) && (p + 1 != 0))) {
        input_sizes_idx_1 = p + 1;
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (isForecast != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      i = precCOEF0->size[0] * precCOEF0->size[1];
      precCOEF0->size[0] = loop_ub;
      precCOEF0->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, precCOEF0, i, &vc_emlrtRTEI);
      meanX_data = precCOEF0->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          meanX_data[i1 + precCOEF0->size[0] * i] = coefm_data[i1 + loop_ub * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          meanX_data[i1 + precCOEF0->size[0] * input_sizes_idx_1] =
            Output->sig2m->data[i1];
        }
      }
    } else {
      st.site = &r_emlrtRSI;
      b_st.site = &nd_emlrtRSI;
      if ((Output->betam->size[0] != 0) && (sizes_idx_1 + 1 != 0)) {
        loop_ub = Output->betam->size[0];
      } else if ((coefm->size[0] != 0) && (p + 1 != 0)) {
        loop_ub = coefm->size[0];
      } else if (isForecast != 0) {
        loop_ub = isForecast;
      } else {
        loop_ub = Output->betam->size[0];
        if (coefm->size[0] > Output->betam->size[0]) {
          loop_ub = coefm->size[0];
        }
      }

      c_st.site = &od_emlrtRSI;
      if ((Output->betam->size[0] != loop_ub) && ((Output->betam->size[0] != 0) &&
           (sizes_idx_1 + 1 != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((coefm->size[0] != loop_ub) && ((coefm->size[0] != 0) && (p + 1 != 0)))
      {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((isForecast != loop_ub) && (isForecast != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes || ((Output->betam->size[0] != 0) && (sizes_idx_1
            + 1 != 0))) {
        input_sizes_idx_1 = sizes_idx_1 + 1;
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((coefm->size[0] != 0) && (p + 1 != 0))) {
        input_sizes_idx_0 = p + 1;
      } else {
        input_sizes_idx_0 = 0;
      }

      if (empty_non_axis_sizes || (isForecast != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      i = precCOEF0->size[0] * precCOEF0->size[1];
      precCOEF0->size[0] = loop_ub;
      i1 = input_sizes_idx_1 + input_sizes_idx_0;
      precCOEF0->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, precCOEF0, i, &yc_emlrtRTEI);
      meanX_data = precCOEF0->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (q = 0; q < loop_ub; q++) {
          meanX_data[q + precCOEF0->size[0] * i] = Output->betam->data[q +
            loop_ub * i];
        }
      }

      for (i = 0; i < input_sizes_idx_0; i++) {
        for (q = 0; q < loop_ub; q++) {
          meanX_data[q + precCOEF0->size[0] * (i + input_sizes_idx_1)] =
            coefm_data[q + loop_ub * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (q = 0; q < loop_ub; q++) {
          meanX_data[q + precCOEF0->size[0] * i1] = Output->sig2m->data[q];
        }
      }
    }

    st.site = &s_emlrtRSI;
    b_st.site = &xk_emlrtRSI;
    mean(&b_st, precCOEF0, mean_Y);
    mean_Y_data = mean_Y->data;
    i = y_pred->size[0];
    y_pred->size[0] = mean_Y->size[1];
    emxEnsureCapacity_real_T(&st, y_pred, i, &ad_emlrtRTEI);
    meanX_data = y_pred->data;
    loop_ub = mean_Y->size[1];
    for (i = 0; i < loop_ub; i++) {
      meanX_data[i] = mean_Y_data[i];
    }

    st.site = &t_emlrtRSI;
    cov(&st, precCOEF0, result);
    error_data = result->data;
    st.site = &t_emlrtRSI;
    cov(&st, precCOEF0, Fm);
    Fm_data = Fm->data;
    if ((result->size[0] != Fm->size[1]) && ((result->size[0] != 1) && (Fm->
          size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(result->size[0], Fm->size[1], &c_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((Fm->size[0] != result->size[1]) && ((result->size[1] != 1) && (Fm->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(result->size[1], Fm->size[0], &b_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((result->size[0] == Fm->size[1]) && (Fm->size[0] == result->size[1])) {
      i = precCOEF0->size[0] * precCOEF0->size[1];
      precCOEF0->size[0] = result->size[0];
      precCOEF0->size[1] = result->size[1];
      emxEnsureCapacity_real_T(sp, precCOEF0, i, &bd_emlrtRTEI);
      meanX_data = precCOEF0->data;
      loop_ub = result->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = result->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          meanX_data[i1 + precCOEF0->size[0] * i] = 0.5 * (error_data[i1 +
            result->size[0] * i] + Fm_data[i + Fm->size[0] * i1]);
        }
      }
    } else {
      st.site = &jm_emlrtRSI;
      b_binary_expand_op(&st, precCOEF0, result, Fm);
    }

    if (data->size[1] == 1) {
      i = b->size[0];
      b->size[0] = coef_hat->size[0] + 1;
      emxEnsureCapacity_real_T(sp, b, i, &dd_emlrtRTEI);
      b_data = b->data;
      loop_ub = coef_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_data[i] = coef_hat_data[i];
      }

      b_data[coef_hat->size[0]] = sig2_hat;
      st.site = &u_emlrtRSI;
      lnpost1 = b_lnpdfmvn(&st, b, y_pred, precCOEF0);
    } else {
      i = b->size[0];
      b->size[0] = (b_hat->size[0] + coef_hat->size[0]) + 1;
      emxEnsureCapacity_real_T(sp, b, i, &cd_emlrtRTEI);
      b_data = b->data;
      loop_ub = b_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_data[i] = b_hat_data[i];
      }

      loop_ub = coef_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_data[i + b_hat->size[0]] = coef_hat_data[i];
      }

      b_data[b_hat->size[0] + coef_hat->size[0]] = sig2_hat;
      st.site = &v_emlrtRSI;
      lnpost1 = b_lnpdfmvn(&st, b, y_pred, precCOEF0);
    }

    Output->lnML = lnpost_hat - lnpost1;
  }

  emxFree_real_T(sp, &result);
  emxFree_real_T(sp, &y_pred);
  emxFree_real_T(sp, &coef_hat);
  emxFree_real_T(sp, &b_hat);
  emxFree_real_T(sp, &Fm);
  emxFree_real_T(sp, &precCOEF0);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &mean_Y);
  if (1 > phi0->size[0]) {
    loop_ub = 0;
  } else {
    if (1 > p + 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, p + 1, &b_emlrtBCI, (emlrtCTX)sp);
    }

    if (phi0->size[0] > p + 1) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, p + 1, &emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = phi0->size[0];
  }

  input_sizes_idx_1 = coefm->size[0];
  i = Output->phim->size[0] * Output->phim->size[1];
  Output->phim->size[0] = coefm->size[0];
  Output->phim->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->phim, i, &sc_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      Output->phim->data[i1 + Output->phim->size[0] * i] = coefm_data[i1 +
        coefm->size[0] * i];
    }
  }

  loop_ub = coefm->size[0];
  i = Output->thetam->size[0] * Output->thetam->size[1];
  Output->thetam->size[0] = coefm->size[0];
  Output->thetam->size[1] = theta0->size[0];
  emxEnsureCapacity_real_T(sp, Output->thetam, i, &tc_emlrtRTEI);
  input_sizes_idx_1 = theta0->size[0] - 1;
  for (i = 0; i <= input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      q = (int32_T)(((uint32_T)i + phi0->size[0]) + 1U);
      if ((q < 1) || (q > p + 1)) {
        emlrtDynamicBoundsCheckR2012b(q, 1, p + 1, &x_emlrtBCI, (emlrtCTX)sp);
      }

      Output->thetam->data[i1 + Output->thetam->size[0] * i] = coefm_data[i1 +
        coefm->size[0] * (q - 1)];
    }
  }

  emxFree_real_T(sp, &coefm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (ARMA_X.c) */

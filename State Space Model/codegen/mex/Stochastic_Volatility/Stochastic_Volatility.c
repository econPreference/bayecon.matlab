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
#include "Stochastic_Volatility.h"
#include "Stochastic_Volatility_data.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_mexutil.h"
#include "Stochastic_Volatility_types.h"
#include "abs.h"
#include "assertValidSizeArg.h"
#include "chol.h"
#include "cholmod.h"
#include "cov.h"
#include "div.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "exp.h"
#include "eye.h"
#include "gammaln.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "invpd.h"
#include "kron.h"
#include "lnpdfmvn.h"
#include "log.h"
#include "mean.h"
#include "mpower.h"
#include "mtimes.h"
#include "power.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "vec.h"
#include "warning.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 18,    /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 19,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 24,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 25,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 83,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 95,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 99,  /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 103, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 106, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 109, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 112, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 116, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 120, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 128, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 129, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 130, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 160, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 162, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 163, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 164, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 362,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 368,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 369,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 372,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 374,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 34, /* lineNo */
  "rdivide_helper",                    /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/rdivide_helper.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 51, /* lineNo */
  "div",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/div.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 225,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 229,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 233,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 234,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 236,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 237,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 239,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 241,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 242,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 243,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 244,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 245,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 246,/* lineNo */
  "Gen_mu_phi",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 28, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 100,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 15, /* lineNo */
  "min",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 46, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 92, /* lineNo */
  "minimum",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 308,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 349,/* lineNo */
  "minOrMax1D",                        /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 210,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 212,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 213,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 12, /* lineNo */
  "randig",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 18, /* lineNo */
  "randgam",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 11, /* lineNo */
  "gamrnd",                            /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 1,  /* lineNo */
  "rnd",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/rnd.p"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 1,  /* lineNo */
  "gamrnd",                            /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/gamrnd.p"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 1,  /* lineNo */
  "randg",                             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/randg.p"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 191,/* lineNo */
  "Gen_Sm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 196,/* lineNo */
  "Gen_Sm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 279,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 280,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 284,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 286,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 287,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 292,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 293,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 295,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 297,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 298,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 299,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 303,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 305,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 308,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 316,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 321,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 323,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 326,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 333,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 335,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 336,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 338,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 340,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 341,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 343,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 347,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 349,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 260,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 263,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 265,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 8,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 9,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 142,   /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 143, /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 144, /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 81,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 82,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 84,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 85,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 86,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 87,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 88,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 89,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 90,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 91,  /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 275, /* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  163,                                 /* lineNo */
  22,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 1,   /* nDims */
  163,                                 /* lineNo */
  22,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  18,                                  /* colNo */
  "Volm",                              /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  13,                                  /* colNo */
  "Volm",                              /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 156,   /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  117,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  10,                                  /* colNo */
  "Volm",                              /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  152,                                 /* lineNo */
  20,                                  /* colNo */
  "Yfm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  152,                                 /* lineNo */
  15,                                  /* colNo */
  "Yfm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 152, /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  14,                                  /* colNo */
  "Hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  9,                                   /* colNo */
  "Hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 150, /* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  113,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  8,                                   /* colNo */
  "Hm",                                /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  20,                                  /* colNo */
  "betam",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  15,                                  /* colNo */
  "betam",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 149, /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  96,                                  /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  11,                                  /* colNo */
  "betam",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  148,                                 /* lineNo */
  20,                                  /* colNo */
  "Sig2m",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  148,                                 /* lineNo */
  15,                                  /* colNo */
  "Sig2m",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 148, /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  24,                                  /* colNo */
  "mu_phim",                           /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  19,                                  /* colNo */
  "mu_phim",                           /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 147, /* lineNo */
  19,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  100,                                 /* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  13,                                  /* colNo */
  "mu_phim",                           /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { 1,   /* nDims */
  106,                                 /* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 1,   /* nDims */
  106,                                 /* lineNo */
  28,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 1,   /* nDims */
  106,                                 /* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 75,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { 1,   /* nDims */
  24,                                  /* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 1,   /* nDims */
  24,                                  /* lineNo */
  27,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 1,   /* nDims */
  24,                                  /* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 64,  /* lineNo */
  17,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 61,  /* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 61,  /* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 62,  /* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 63,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 64,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 67,  /* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  11,                                  /* colNo */
  "Sig2m",                             /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  13,                                  /* colNo */
  "Yfm",                               /* aName */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 13,/* lineNo */
  27,                                  /* colNo */
  "assertCompatibleDims",              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/shared/coder/coder/lib/+coder/+internal/assertCompatibleDims.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { 1,   /* nDims */
  374,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { 1,   /* nDims */
  369,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { 2,   /* nDims */
  368,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo p_emlrtECI = { 1,   /* nDims */
  368,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  364,                                 /* lineNo */
  1,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  364,                                 /* lineNo */
  3,                                   /* colNo */
  "X",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  364,                                 /* lineNo */
  12,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  364,                                 /* lineNo */
  21,                                  /* colNo */
  "vol",                               /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  225,                                 /* lineNo */
  8,                                   /* colNo */
  "hm",                                /* aName */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  225,                                 /* lineNo */
  12,                                  /* colNo */
  "hm",                                /* aName */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  15,                                  /* colNo */
  "hm",                                /* aName */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  23,                                  /* colNo */
  "hm",                                /* aName */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { 1,   /* nDims */
  236,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  236,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 1,   /* nDims */
  237,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { 1,   /* nDims */
  239,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo n_emlrtDCI = { 241, /* lineNo */
  39,                                  /* colNo */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { 1,   /* nDims */
  245,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_mu_phi",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { 1,  /* nDims */
  210,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  25,                                  /* colNo */
  "ysm",                               /* aName */
  "Gen_Sm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  28,                                  /* colNo */
  "hm",                                /* aName */
  "Gen_Sm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  196,                                 /* lineNo */
  8,                                   /* colNo */
  "sm",                                /* aName */
  "Gen_Sm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  9,                                   /* colNo */
  "hm",                                /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  14,                                  /* colNo */
  "hm",                                /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  13,                                  /* colNo */
  "mu_phi",                            /* aName */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  354,                                 /* lineNo */
  11,                                  /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  350,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  350,                                 /* lineNo */
  8,                                   /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kb_emlrtECI = { 1,  /* nDims */
  349,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 2,  /* nDims */
  346,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { 1,  /* nDims */
  346,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 2,  /* nDims */
  344,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo ob_emlrtECI = { 1,  /* nDims */
  344,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { 1,  /* nDims */
  341,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { 1,  /* nDims */
  338,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  338,                                 /* lineNo */
  15,                                  /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  327,                                 /* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  4,                                   /* colNo */
  "Fm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo sb_emlrtECI = { 2,  /* nDims */
  335,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { 1,  /* nDims */
  335,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  333,                                 /* lineNo */
  26,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  18,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ub_emlrtECI = { 1,  /* nDims */
  326,                                 /* lineNo */
  6,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  325,                                 /* lineNo */
  14,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  307,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  307,                                 /* lineNo */
  11,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  321,                                 /* lineNo */
  22,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo wb_emlrtECI = { -1, /* nDims */
  309,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  309,                                 /* lineNo */
  11,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  309,                                 /* lineNo */
  27,                                  /* colNo */
  "vec_P_tt",                          /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo xb_emlrtECI = { 2,  /* nDims */
  305,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { 1,  /* nDims */
  305,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { 1,  /* nDims */
  304,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  5,                                   /* colNo */
  "G",                                 /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bc_emlrtECI = { 2,  /* nDims */
  293,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { 1,  /* nDims */
  293,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo dc_emlrtECI = { 1,  /* nDims */
  292,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  13,                                  /* colNo */
  "sm",                                /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ec_emlrtECI = { 2,  /* nDims */
  287,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo fc_emlrtECI = { 1,  /* nDims */
  287,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  3,                                   /* colNo */
  "C",                                 /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gc_emlrtECI = { 2,  /* nDims */
  286,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtECInfo hc_emlrtECI = { 1,  /* nDims */
  286,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtDCInfo q_emlrtDCI = { 280, /* lineNo */
  36,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 279, /* lineNo */
  41,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  17,                                  /* colNo */
  "mu_phi",                            /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 275, /* lineNo */
  13,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 284, /* lineNo */
  17,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 275, /* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 280, /* lineNo */
  23,                                  /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 284, /* lineNo */
  1,                                   /* colNo */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  295,                                 /* lineNo */
  31,                                  /* colNo */
  "vsm",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  299,                                 /* lineNo */
  26,                                  /* colNo */
  "ysm",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  300,                                 /* lineNo */
  16,                                  /* colNo */
  "likelihood",                        /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  16,                                  /* colNo */
  "ysm",                               /* aName */
  "Gen_Fm",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo hb_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 24,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 24,/* lineNo */
  27,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 61,/* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 63,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 64,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 67,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 71,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 147,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 95,/* lineNo */
  18,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 95,/* lineNo */
  21,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 148,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 87,/* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 149,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 89,/* lineNo */
  14,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 169,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 99,/* lineNo */
  59,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 152,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 174,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 106,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 106,/* lineNo */
  28,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 160,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 116,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 164,/* lineNo */
  30,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 4,/* lineNo */
  8,                                   /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 76,/* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 135,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 136,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 62,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 65,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 106,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 1,/* lineNo */
  10,                                  /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 364,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 368,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 368,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 369,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 359,/* lineNo */
  17,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 225,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 227,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 225,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 236,/* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 221,/* lineNo */
  25,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 229,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 295,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 243,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 245,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 247,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 233,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 234,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 242,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 244,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 244,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 210,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 183,/* lineNo */
  6,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 259,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 260,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 254,/* lineNo */
  32,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 275,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 277,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 271,/* lineNo */
  32,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 279,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 280,/* lineNo */
  10,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 280,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 283,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 284,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 285,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 286,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 287,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 287,/* lineNo */
  44,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 287,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 319,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 292,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 321,/* lineNo */
  16,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 322,/* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 325,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 304,/* lineNo */
  19,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 304,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 87,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 354,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 332,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 333,/* lineNo */
  20,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 308,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 309,/* lineNo */
  18,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 335,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 338,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 344,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 346,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 346,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 283,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 293,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 303,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 323,/* lineNo */
  1,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 340,/* lineNo */
  5,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 271,/* lineNo */
  11,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 280,/* lineNo */
  9,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 293,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 106,/* lineNo */
  15,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 374,/* lineNo */
  8,                                   /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 305,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 304,/* lineNo */
  12,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 344,/* lineNo */
  13,                                  /* colNo */
  "Stochastic_Volatility",             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pName */
};

static const real_T dv[7] = { -11.40039, -5.24321, -9.83726, 1.50746, -0.65098,
  0.52478, -2.35859 };

static const real_T dv1[7] = { 5.79596, 2.61369, 5.1795, 0.16735, 0.64009,
  0.34023, 1.26261 };

static emlrtRSInfo cl_emlrtRSI = { 84, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 82, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 90, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 86, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 88, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 143,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 144,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 142,/* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 91, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 89, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 87, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 85, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 81, /* lineNo */
  "Stochastic_Volatility",             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 52, /* lineNo */
  "div",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/div.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 346,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 304,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 344,/* lineNo */
  "Gen_Fm",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 259,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Stochastic_Volatility.m"/* pathName */
};

/* Function Declarations */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *mu_phi, real_T sig2, const emxArray_real_T
                   *sm, emxArray_real_T *Fm, real_T *loglikelihood);
static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *xf, const
  emxArray_real_T *beta, const emxArray_real_T *mu_phi, real_T sig2, const
  emxArray_real_T *ym, const emxArray_real_T *hm, real_T *y_pred, real_T
  *lnpredlik);
static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *X, const
                      emxArray_real_T *Y, real_T v_, real_T d_, const
                      emxArray_real_T *mu_phi, real_T d, real_T *sig2_inv,
                      real_T *sig2);
static void Gen_Sm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *hm, emxArray_real_T *sm);
static void Gen_beta(const emlrtStack *sp, emxArray_real_T *X, emxArray_real_T
                     *Y, const emxArray_real_T *beta0, const emxArray_real_T
                     *precB0, const emxArray_real_T *vol, emxArray_real_T *beta);
static void Gen_mu_phi(const emlrtStack *sp, const emxArray_real_T *hm, const
  emxArray_real_T *b_, const emxArray_real_T *precb_, real_T sig2_inv, const
  emxArray_real_T *mu_phi0, emxArray_real_T *mu_phi, emxArray_real_T *X,
  emxArray_real_T *Y);
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *precB0);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8]);
static void b_plus(const emlrtStack *sp, emxArray_real_T *f_tt, const
                   emxArray_real_T *f_tl);
static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo em_emlrtRSI,
  const emxArray_real_T *b_hat, const emxArray_real_T *mu_phi_hat, real_T
  sig2_hat, const emxArray_real_T *retf, const emxArray_real_T *precB0, const
  emxArray_real_T *Hm);
static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *precb_);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void c_minus(const emlrtStack *sp, emxArray_real_T *P_tl, const
                    emxArray_real_T *cP_tt);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [14]);
static void d_minus(const emlrtStack *sp, emxArray_real_T *f_tl, const
                    emxArray_real_T *likelihood);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static const mxArray *e_emlrt_marshallOut(const real_T u);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[37]);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [38]);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23]);
static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *P_tl,
  const emxArray_real_T *result);
static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  const emxArray_real_T *Kalgain, int32_T p);
static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tl,
  const emxArray_real_T *Fm, int32_T t, const emxArray_real_T *C);
static const mxArray *l_emlrt_marshallOut(void);
static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *PGG);
static void minus(const emlrtStack *sp, emxArray_real_T *vol, const
                  emxArray_real_T *ym);
static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *Phi);
static void plus(const emlrtStack *sp, emxArray_real_T *beta, const
                 emxArray_real_T *r1);
static void times(const emlrtStack *sp, emxArray_real_T *ysm, const
                  emxArray_real_T *vol);

/* Function Definitions */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *mu_phi, real_T sig2, const emxArray_real_T
                   *sm, emxArray_real_T *Fm, real_T *loglikelihood)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T b_Kalgain;
  emxArray_real_T *C;
  emxArray_real_T *G;
  emxArray_real_T *Kalgain;
  emxArray_real_T *PGG;
  emxArray_real_T *P_tl;
  emxArray_real_T *P_ttm;
  emxArray_real_T *Phi;
  emxArray_real_T *Sigma;
  emxArray_real_T *b_Fm;
  emxArray_real_T *b_result;
  emxArray_real_T *cP_tt;
  emxArray_real_T *c_mu_phi;
  emxArray_real_T *f_tl;
  emxArray_real_T *f_tt;
  emxArray_real_T *f_ttm;
  emxArray_real_T *likelihood;
  emxArray_real_T *vec_P_tt;
  emxArray_real_T *y;
  const real_T *mu_phi_data;
  const real_T *sm_data;
  const real_T *ysm_data;
  real_T b;
  real_T mean_tl;
  real_T var_tl;
  real_T *C_data;
  real_T *Fm_data;
  real_T *G_data;
  real_T *PGG_data;
  real_T *P_tl_data;
  real_T *P_ttm_data;
  real_T *Phi_data;
  real_T *Sigma_data;
  real_T *cP_tt_data;
  real_T *f_tt_data;
  real_T *f_ttm_data;
  real_T *likelihood_data;
  real_T *result_data;
  int32_T b_input_sizes[2];
  int32_T b_mu_phi[2];
  int32_T c_input_sizes[2];
  int32_T d_input_sizes[2];
  int32_T e_input_sizes[2];
  int32_T f_input_sizes[2];
  int32_T g_input_sizes[2];
  int32_T input_sizes[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T nr;
  int32_T p;
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
  sm_data = sm->data;
  mu_phi_data = mu_phi->data;
  ysm_data = ysm->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &G, 2, &th_emlrtRTEI);

  /*  Fm 샘플랭 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  nr = mu_phi->size[0] - 1;
  p = mu_phi->size[0] - 1;
  i = G->size[0] * G->size[1];
  G->size[0] = 1;
  emxEnsureCapacity_real_T(sp, G, i, &th_emlrtRTEI);
  if (mu_phi->size[0] - 1 < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &s_emlrtDCI, (emlrtCTX)sp);
  }

  i = G->size[0] * G->size[1];
  G->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(sp, G, i, &th_emlrtRTEI);
  G_data = G->data;
  if (mu_phi->size[0] - 1 < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &u_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = mu_phi->size[0] - 1;
  for (i = 0; i < loop_ub; i++) {
    G_data[i] = 0.0;
  }

  if (1 > mu_phi->size[0] - 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, mu_phi->size[0] - 1, &fd_emlrtBCI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &C, 1, &uh_emlrtRTEI);
  G_data[0] = 1.0;
  i = C->size[0];
  C->size[0] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(sp, C, i, &uh_emlrtRTEI);
  C_data = C->data;
  loop_ub = mu_phi->size[0];
  for (i = 0; i <= loop_ub - 2; i++) {
    C_data[i] = 0.0;
  }

  if (1 > mu_phi->size[0] - 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, mu_phi->size[0] - 1, &hd_emlrtBCI,
      (emlrtCTX)sp);
  }

  if (1 > mu_phi->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, mu_phi->size[0], &id_emlrtBCI, (emlrtCTX)
      sp);
  }

  C_data[0] = mu_phi_data[0];
  if (2 > mu_phi->size[0]) {
    i = -1;
    i1 = -1;
  } else {
    i = 0;
    i1 = mu_phi->size[0] - 1;
  }

  emxInit_real_T(sp, &cP_tt, 2, &dj_emlrtRTEI);
  emxInit_real_T(sp, &PGG, 2, &ej_emlrtRTEI);
  st.site = &kh_emlrtRSI;
  b_st.site = &kh_emlrtRSI;
  eye(&b_st, ((real_T)mu_phi->size[0] - 1.0) - 1.0, cP_tt);
  cP_tt_data = cP_tt->data;
  if (!(((real_T)mu_phi->size[0] - 1.0) - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(((real_T)mu_phi->size[0] - 1.0) - 1.0,
      &r_emlrtDCI, &st);
  }

  b_st.site = &cd_emlrtRSI;
  if ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)) {
    result = cP_tt->size[0];
  } else if (mu_phi->size[0] - 2 != 0) {
    result = mu_phi->size[0] - 2;
  } else {
    result = cP_tt->size[0];
    if (mu_phi->size[0] - 2 > cP_tt->size[0]) {
      result = mu_phi->size[0] - 2;
    }
  }

  c_st.site = &dd_emlrtRSI;
  if ((cP_tt->size[0] != result) && ((cP_tt->size[0] != 0) && (cP_tt->size[1] !=
        0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((mu_phi->size[0] - 2 != result) && (mu_phi->size[0] - 2 != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)))
  {
    input_sizes[1] = cP_tt->size[1];
  } else {
    input_sizes[1] = 0;
  }

  if (empty_non_axis_sizes || (mu_phi->size[0] - 2 != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  b_mu_phi[1] = input_sizes[1];
  i2 = PGG->size[0] * PGG->size[1];
  PGG->size[0] = result;
  PGG->size[1] = b_mu_phi[1] + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, PGG, i2, &qd_emlrtRTEI);
  PGG_data = PGG->data;
  loop_ub = b_mu_phi[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (sizes_idx_0 = 0; sizes_idx_0 < result; sizes_idx_0++) {
      PGG_data[sizes_idx_0 + PGG->size[0] * i2] = cP_tt_data[sizes_idx_0 +
        result * i2];
    }
  }

  for (i2 = 0; i2 < sizes_idx_1; i2++) {
    for (sizes_idx_0 = 0; sizes_idx_0 < result; sizes_idx_0++) {
      PGG_data[sizes_idx_0 + PGG->size[0] * b_mu_phi[1]] = 0.0;
    }
  }

  st.site = &kh_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  loop_ub = i1 - i;
  if (loop_ub != 0) {
    result = loop_ub;
  } else if ((PGG->size[0] != 0) && (PGG->size[1] != 0)) {
    result = PGG->size[1];
  } else {
    result = 0;
    if (PGG->size[1] > 0) {
      result = PGG->size[1];
    }
  }

  c_st.site = &dd_emlrtRSI;
  if ((loop_ub != result) && (loop_ub != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((PGG->size[1] != result) && ((PGG->size[0] != 0) && (PGG->size[1] != 0)))
  {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (loop_ub != 0)) {
    input_sizes_idx_0 = 1;
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || ((PGG->size[0] != 0) && (PGG->size[1] != 0))) {
    sizes_idx_0 = PGG->size[0];
  } else {
    sizes_idx_0 = 0;
  }

  emxInit_real_T(&b_st, &c_mu_phi, 2, &xh_emlrtRTEI);
  i1 = c_mu_phi->size[0] * c_mu_phi->size[1];
  c_mu_phi->size[0] = 1;
  c_mu_phi->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&b_st, c_mu_phi, i1, &vh_emlrtRTEI);
  cP_tt_data = c_mu_phi->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    cP_tt_data[i1] = mu_phi_data[(i + i1) + 1];
  }

  emxInit_real_T(&b_st, &Phi, 2, &wh_emlrtRTEI);
  i = Phi->size[0] * Phi->size[1];
  Phi->size[0] = input_sizes_idx_0 + sizes_idx_0;
  Phi->size[1] = result;
  emxEnsureCapacity_real_T(&b_st, Phi, i, &wh_emlrtRTEI);
  Phi_data = Phi->data;
  for (i = 0; i < result; i++) {
    loop_ub = input_sizes_idx_0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      Phi_data[Phi->size[0] * i] = cP_tt_data[input_sizes_idx_0 * i];
    }
  }

  for (i = 0; i < result; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      Phi_data[(i1 + input_sizes_idx_0) + Phi->size[0] * i] = PGG_data[i1 +
        sizes_idx_0 * i];
    }
  }

  st.site = &lh_emlrtRSI;
  if (!(((real_T)mu_phi->size[0] - 1.0) - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(((real_T)mu_phi->size[0] - 1.0) - 1.0,
      &q_emlrtDCI, &st);
  }

  b_st.site = &cd_emlrtRSI;
  if (mu_phi->size[0] - 2 != 0) {
    result = mu_phi->size[0] - 2;
  } else if (mu_phi->size[0] - 2 != 0) {
    result = mu_phi->size[0] - 2;
  } else {
    i = mu_phi->size[0] - 2;
    result = muIntScalarMax_sint32(i, 0);
    if (mu_phi->size[0] - 2 > result) {
      result = mu_phi->size[0] - 2;
    }
  }

  c_st.site = &dd_emlrtRSI;
  if ((mu_phi->size[0] - 2 != result) && (mu_phi->size[0] - 2 != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((mu_phi->size[0] - 2 != result) && (mu_phi->size[0] - 2 != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (mu_phi->size[0] - 2 != 0)) {
    input_sizes_idx_0 = 1;
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || (mu_phi->size[0] - 2 != 0)) {
    sizes_idx_1 = mu_phi->size[0] - 2;
  } else {
    sizes_idx_1 = 0;
  }

  i = PGG->size[0] * PGG->size[1];
  PGG->size[0] = result;
  PGG->size[1] = input_sizes_idx_0 + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, PGG, i, &qd_emlrtRTEI);
  PGG_data = PGG->data;
  loop_ub = input_sizes_idx_0;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < result; i1++) {
      PGG_data[i1] = 0.0;
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < result; i1++) {
      PGG_data[i1 + PGG->size[0] * (i + input_sizes_idx_0)] = 0.0;
    }
  }

  emxInit_real_T(&b_st, &b_result, 2, &gj_emlrtRTEI);
  st.site = &lh_emlrtRSI;
  if (mu_phi->size[0] - 2 < 0) {
    emlrtNonNegativeCheckR2012b(mu_phi->size[0] - 2, &v_emlrtDCI, &st);
  }

  i = c_mu_phi->size[0] * c_mu_phi->size[1];
  c_mu_phi->size[0] = 1;
  c_mu_phi->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(&st, c_mu_phi, i, &xh_emlrtRTEI);
  cP_tt_data = c_mu_phi->data;
  cP_tt_data[0] = sig2;
  loop_ub = mu_phi->size[0] - 2;
  for (i = 0; i < loop_ub; i++) {
    cP_tt_data[i + 1] = 0.0;
  }

  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  if ((PGG->size[1] != c_mu_phi->size[1]) && ((PGG->size[0] != 0) && (PGG->size
        [1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((PGG->size[0] != 0) && (PGG->size[1] != 0)) {
    sizes_idx_0 = PGG->size[0];
  } else {
    sizes_idx_0 = 0;
  }

  i = b_result->size[0] * b_result->size[1];
  b_result->size[0] = sizes_idx_0 + 1;
  b_result->size[1] = c_mu_phi->size[1];
  emxEnsureCapacity_real_T(&b_st, b_result, i, &qd_emlrtRTEI);
  result_data = b_result->data;
  loop_ub = c_mu_phi->size[1];
  for (i = 0; i < loop_ub; i++) {
    result_data[b_result->size[0] * i] = cP_tt_data[i];
  }

  loop_ub = c_mu_phi->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      result_data[(i1 + b_result->size[0] * i) + 1] = 0.0;
    }
  }

  emxInit_real_T(&b_st, &Sigma, 2, &yh_emlrtRTEI);
  input_sizes[0] = 1;
  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = sizes_idx_0 + 1;
  Sigma->size[1] = c_mu_phi->size[1];
  emxEnsureCapacity_real_T(sp, Sigma, i, &yh_emlrtRTEI);
  Sigma_data = Sigma->data;
  loop_ub = c_mu_phi->size[1];
  for (i = 0; i < loop_ub; i++) {
    Sigma_data[Sigma->size[0] * i] = cP_tt_data[i];
  }

  loop_ub = c_mu_phi->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      Sigma_data[(i1 + Sigma->size[0] * i) + 1] = 0.0;
    }
  }

  emxInit_real_T(sp, &f_ttm, 2, &aj_emlrtRTEI);
  emxInit_real_T(sp, &P_ttm, 2, &bi_emlrtRTEI);

  /* %%%% Kalman filtering step */
  i = f_ttm->size[0] * f_ttm->size[1];
  f_ttm->size[0] = ysm->size[0];
  f_ttm->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(sp, f_ttm, i, &ai_emlrtRTEI);
  f_ttm_data = f_ttm->data;

  /*  은닉인자를 저장 */
  st.site = &mh_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  var_tl = ((real_T)mu_phi->size[0] - 1.0) * ((real_T)mu_phi->size[0] - 1.0);
  i = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[0] = ysm->size[0];
  emxEnsureCapacity_real_T(sp, P_ttm, i, &bi_emlrtRTEI);
  if (var_tl != (int32_T)var_tl) {
    emlrtIntegerCheckR2012b(var_tl, &t_emlrtDCI, (emlrtCTX)sp);
  }

  i = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[1] = (int32_T)var_tl;
  emxEnsureCapacity_real_T(sp, P_ttm, i, &bi_emlrtRTEI);
  P_ttm_data = P_ttm->data;
  if (var_tl != (int32_T)var_tl) {
    emlrtIntegerCheckR2012b(var_tl, &w_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = ysm->size[0] * (int32_T)var_tl;
  for (i = 0; i < loop_ub; i++) {
    P_ttm_data[i] = 0.0;
  }

  emxInit_real_T(sp, &likelihood, 1, &ci_emlrtRTEI);

  /*  은닉인자의 분산을 저장 */
  i = likelihood->size[0];
  likelihood->size[0] = ysm->size[0];
  emxEnsureCapacity_real_T(sp, likelihood, i, &ci_emlrtRTEI);
  likelihood_data = likelihood->data;
  loop_ub = ysm->size[0];
  for (i = 0; i < loop_ub; i++) {
    likelihood_data[i] = 0.0;
  }

  st.site = &nh_emlrtRSI;
  eye(&st, (real_T)mu_phi->size[0] - 1.0, cP_tt);
  cP_tt_data = cP_tt->data;
  if ((cP_tt->size[0] != Phi->size[0]) && ((cP_tt->size[0] != 1) && (Phi->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], Phi->size[0], &hc_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((cP_tt->size[1] != Phi->size[1]) && ((cP_tt->size[1] != 1) && (Phi->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], Phi->size[1], &gc_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &nh_emlrtRSI;
  emxInit_real_T(&st, &P_tl, 2, &bj_emlrtRTEI);
  if ((cP_tt->size[0] == Phi->size[0]) && (cP_tt->size[1] == Phi->size[1])) {
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = cP_tt->size[0];
    P_tl->size[1] = cP_tt->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &di_emlrtRTEI);
    P_tl_data = P_tl->data;
    loop_ub = cP_tt->size[0] * cP_tt->size[1];
    for (i = 0; i < loop_ub; i++) {
      P_tl_data[i] = cP_tt_data[i] - Phi_data[i];
    }

    b_st.site = &nh_emlrtRSI;
    inv(&b_st, P_tl, cP_tt);
  } else {
    b_st.site = &nh_emlrtRSI;
    n_binary_expand_op(&b_st, cP_tt, nh_emlrtRSI, Phi);
  }

  emxInit_real_T(&st, &f_tt, 1, &ni_emlrtRTEI);
  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, cP_tt, C, cP_tt->size[1], C->size[0]);
  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, cP_tt, C, f_tt);

  /*  초기값은 무조건부 평균 */
  st.site = &oh_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  st.site = &oh_emlrtRSI;
  eye(&st, ((real_T)mu_phi->size[0] - 1.0) * ((real_T)mu_phi->size[0] - 1.0),
      cP_tt);
  cP_tt_data = cP_tt->data;
  st.site = &oh_emlrtRSI;
  kron(&st, Phi, Phi, PGG);
  PGG_data = PGG->data;
  if ((cP_tt->size[0] != PGG->size[0]) && ((cP_tt->size[0] != 1) && (PGG->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], PGG->size[0], &fc_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((cP_tt->size[1] != PGG->size[1]) && ((cP_tt->size[1] != 1) && (PGG->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], PGG->size[1], &ec_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &oh_emlrtRSI;
  if ((cP_tt->size[0] == PGG->size[0]) && (cP_tt->size[1] == PGG->size[1])) {
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = cP_tt->size[0];
    P_tl->size[1] = cP_tt->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &ei_emlrtRTEI);
    P_tl_data = P_tl->data;
    loop_ub = cP_tt->size[0] * cP_tt->size[1];
    for (i = 0; i < loop_ub; i++) {
      P_tl_data[i] = cP_tt_data[i] - PGG_data[i];
    }

    b_st.site = &oh_emlrtRSI;
    inv(&b_st, P_tl, cP_tt);
  } else {
    b_st.site = &oh_emlrtRSI;
    m_binary_expand_op(&b_st, cP_tt, oh_emlrtRSI, PGG);
  }

  emxInit_real_T(&st, &b_Fm, 2, &fj_emlrtRTEI);
  b_st.site = &oh_emlrtRSI;
  vec(&b_st, b_result, b_Fm);
  Fm_data = b_Fm->data;
  i = PGG->size[0] * PGG->size[1];
  PGG->size[0] = b_Fm->size[0];
  PGG->size[1] = b_Fm->size[1];
  emxEnsureCapacity_real_T(&st, PGG, i, &fi_emlrtRTEI);
  PGG_data = PGG->data;
  loop_ub = b_Fm->size[0] * b_Fm->size[1];
  for (i = 0; i < loop_ub; i++) {
    PGG_data[i] = Fm_data[i];
  }

  b_st.site = &sb_emlrtRSI;
  b_dynamic_size_checks(&b_st, cP_tt, PGG, cP_tt->size[1], PGG->size[0]);
  b_st.site = &rb_emlrtRSI;
  f_mtimes(&b_st, cP_tt, PGG, P_tl);
  st.site = &oh_emlrtRSI;
  sizes_idx_0 = P_tl->size[0] * P_tl->size[1];
  b_st.site = &si_emlrtRSI;
  c_st.site = &ri_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  c_st.site = &ri_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  sizes_idx_1 = P_tl->size[0];
  if (P_tl->size[1] > P_tl->size[0]) {
    sizes_idx_1 = P_tl->size[1];
  }

  if (mu_phi->size[0] - 1 > muIntScalarMax_sint32(sizes_idx_0, sizes_idx_1)) {
    emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((mu_phi->size[0] - 1) * (mu_phi->size[0] - 1) != sizes_idx_0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_mu_phi[0] = mu_phi->size[0] - 1;
  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = mu_phi->size[0] - 1;
  P_tl->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(sp, P_tl, i, &gi_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = mu_phi->size[0] - 1;
  for (i = 0; i < loop_ub; i++) {
    sizes_idx_1 = b_mu_phi[0];
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] = P_tl_data[i1 + b_mu_phi[0] * i];
    }
  }

  i = ysm->size[0];
  if (0 <= ysm->size[0] - 1) {
    b_loop_ub = G->size[1];
    input_sizes[0] = 1;
  }

  emxInit_real_T(sp, &f_tl, 1, &ii_emlrtRTEI);
  emxInit_real_T(sp, &Kalgain, 1, &cj_emlrtRTEI);
  emxInit_real_T(sp, &vec_P_tt, 2, &si_emlrtRTEI);
  emxInit_real_T(sp, &y, 2, &hj_emlrtRTEI);
  for (result = 0; result < i; result++) {
    if (result + 1 > sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, sm->size[0], &gd_emlrtBCI,
        (emlrtCTX)sp);
    }

    /*  t기의 상태변수 */
    st.site = &ph_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    dynamic_size_checks(&b_st, Phi, f_tt, Phi->size[1], f_tt->size[0]);
    b_st.site = &rb_emlrtRSI;
    mtimes(&b_st, Phi, f_tt, f_tl);
    loop_ub = C->size[0];
    if ((C->size[0] != f_tl->size[0]) && ((C->size[0] != 1) && (f_tl->size[0] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(C->size[0], f_tl->size[0], &dc_emlrtECI,
        (emlrtCTX)sp);
    }

    if (C->size[0] == f_tl->size[0]) {
      i1 = f_tl->size[0];
      f_tl->size[0] = C->size[0];
      emxEnsureCapacity_real_T(sp, f_tl, i1, &ii_emlrtRTEI);
      cP_tt_data = f_tl->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        cP_tt_data[i1] += C_data[i1];
      }
    } else {
      st.site = &ph_emlrtRSI;
      b_plus(&st, f_tl, C);
      cP_tt_data = f_tl->data;
    }

    st.site = &qh_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, Phi, P_tl, Phi->size[1], P_tl->size[0]);
    b_st.site = &rb_emlrtRSI;
    f_mtimes(&b_st, Phi, P_tl, y);
    st.site = &qh_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, Phi, y->size[1], Phi->size[1]);
    b_st.site = &rb_emlrtRSI;
    e_mtimes(&b_st, y, Phi, P_tl);
    P_tl_data = P_tl->data;
    if ((P_tl->size[0] != b_result->size[0]) && ((P_tl->size[0] != 1) &&
         (b_result->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[0], b_result->size[0], &cc_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[1] != b_result->size[1]) && ((P_tl->size[1] != 1) &&
         (b_result->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], b_result->size[1], &bc_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[0] == b_result->size[0]) && (P_tl->size[1] == b_result->
         size[1])) {
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        P_tl_data[i1] += result_data[i1];
      }
    } else {
      st.site = &qh_emlrtRSI;
      j_binary_expand_op(&st, P_tl, b_result);
      P_tl_data = P_tl->data;
    }

    st.site = &rh_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    d_dynamic_size_checks(&b_st, G, P_tl, nr, P_tl->size[0]);
    b_st.site = &rb_emlrtRSI;
    g_mtimes(&b_st, G, P_tl, c_mu_phi);
    st.site = &rh_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    e_dynamic_size_checks(&b_st, c_mu_phi, G, c_mu_phi->size[1], nr);
    i1 = (int32_T)sm_data[result];
    if ((i1 < 1) || (i1 > 7)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 7, &jd_emlrtBCI, (emlrtCTX)sp);
    }

    var_tl = d_mtimes(c_mu_phi, G) + dv1[i1 - 1];
    var_tl = 0.5 * (var_tl + var_tl);
    st.site = &sh_emlrtRSI;
    b = b_inv(&st, var_tl);
    st.site = &th_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    c_dynamic_size_checks(&b_st, G, f_tl, nr, f_tl->size[0]);
    mean_tl = dv[(int32_T)sm_data[result] - 1] + d_mtimes(G, f_tl);
    if (result + 1 > ysm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, ysm->size[0], &kd_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (result + 1 > likelihood->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, likelihood->size[0],
        &ld_emlrtBCI, (emlrtCTX)sp);
    }

    st.site = &uh_emlrtRSI;
    likelihood_data[result] = lnpdfmvn(ysm_data[result], mean_tl, var_tl);
    if (result + 1 > ysm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, ysm->size[0], &md_emlrtBCI,
        (emlrtCTX)sp);
    }

    var_tl = ysm_data[result] - mean_tl;
    st.site = &vh_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    f_dynamic_size_checks(&b_st, P_tl, G, P_tl->size[1], nr);
    b_st.site = &rb_emlrtRSI;
    h_mtimes(&b_st, P_tl, G, Kalgain);
    PGG_data = Kalgain->data;
    loop_ub = Kalgain->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      PGG_data[i1] *= b;
    }

    /*  변환된 종속변수에 대해 Gamma는 단위행렬 */
    i1 = f_tt->size[0];
    f_tt->size[0] = Kalgain->size[0];
    emxEnsureCapacity_real_T(sp, f_tt, i1, &mi_emlrtRTEI);
    f_tt_data = f_tt->data;
    loop_ub = Kalgain->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      f_tt_data[i1] = PGG_data[i1] * var_tl;
    }

    if ((f_tl->size[0] != f_tt->size[0]) && ((f_tl->size[0] != 1) && (f_tt->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tl->size[0], f_tt->size[0], &ac_emlrtECI,
        (emlrtCTX)sp);
    }

    if (f_tl->size[0] == f_tt->size[0]) {
      i1 = f_tt->size[0];
      f_tt->size[0] = f_tl->size[0];
      emxEnsureCapacity_real_T(sp, f_tt, i1, &ni_emlrtRTEI);
      f_tt_data = f_tt->data;
      loop_ub = f_tl->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_tt_data[i1] += cP_tt_data[i1];
      }
    } else {
      st.site = &bm_emlrtRSI;
      b_plus(&st, f_tt, f_tl);
      f_tt_data = f_tt->data;
    }

    i1 = y->size[0] * y->size[1];
    y->size[0] = Kalgain->size[0];
    y->size[1] = G->size[1];
    emxEnsureCapacity_real_T(sp, y, i1, &oi_emlrtRTEI);
    Phi_data = y->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      loop_ub = Kalgain->size[0];
      for (i2 = 0; i2 < loop_ub; i2++) {
        Phi_data[i2 + y->size[0] * i1] = PGG_data[i2] * G_data[i1];
      }
    }

    st.site = &wh_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, P_tl, y->size[1], P_tl->size[0]);
    b_st.site = &rb_emlrtRSI;
    f_mtimes(&b_st, y, P_tl, cP_tt);
    cP_tt_data = cP_tt->data;
    if ((P_tl->size[0] != cP_tt->size[0]) && ((P_tl->size[0] != 1) &&
         (cP_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[0], cP_tt->size[0], &yb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[1] != cP_tt->size[1]) && ((P_tl->size[1] != 1) &&
         (cP_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], cP_tt->size[1], &xb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[0] == cP_tt->size[0]) && (P_tl->size[1] == cP_tt->size[1]))
    {
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        P_tl_data[i1] -= cP_tt_data[i1];
      }
    } else {
      st.site = &wh_emlrtRSI;
      c_minus(&st, P_tl, cP_tt);
    }

    if (result + 1 > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, f_ttm->size[0], &bd_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_mu_phi[0] = 1;
    b_mu_phi[1] = f_ttm->size[1];
    input_sizes[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_mu_phi[0], 2, &input_sizes[0], 2,
      &vb_emlrtECI, (emlrtCTX)sp);
    loop_ub = f_tt->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      f_ttm_data[result + f_ttm->size[0] * i1] = f_tt_data[i1];
    }

    st.site = &xh_emlrtRSI;
    vec(&st, P_tl, b_Fm);
    Fm_data = b_Fm->data;
    i1 = vec_P_tt->size[0] * vec_P_tt->size[1];
    vec_P_tt->size[0] = b_Fm->size[1];
    vec_P_tt->size[1] = b_Fm->size[0];
    emxEnsureCapacity_real_T(sp, vec_P_tt, i1, &si_emlrtRTEI);
    Phi_data = vec_P_tt->data;
    loop_ub = b_Fm->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      sizes_idx_1 = b_Fm->size[1];
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        Phi_data[i2 + vec_P_tt->size[0] * i1] = Fm_data[i1 + b_Fm->size[0] * i2];
      }
    }

    if (result + 1 > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, P_ttm->size[0], &dd_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (1 > vec_P_tt->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_P_tt->size[0], &ed_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = vec_P_tt->size[1];
    i1 = c_mu_phi->size[0] * c_mu_phi->size[1];
    c_mu_phi->size[0] = 1;
    c_mu_phi->size[1] = vec_P_tt->size[1];
    emxEnsureCapacity_real_T(sp, c_mu_phi, i1, &ti_emlrtRTEI);
    cP_tt_data = c_mu_phi->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      cP_tt_data[i1] = Phi_data[vec_P_tt->size[0] * i1];
    }

    b_mu_phi[0] = 1;
    b_mu_phi[1] = P_ttm->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_mu_phi[0], 2, &c_mu_phi->size[0], 2,
      &wb_emlrtECI, (emlrtCTX)sp);
    loop_ub = vec_P_tt->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      P_ttm_data[result + P_ttm->size[0] * i1] = Phi_data[vec_P_tt->size[0] * i1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &c_mu_phi);
  emxFree_real_T(sp, &vec_P_tt);
  emxFree_real_T(sp, &G);
  st.site = &yh_emlrtRSI;
  *loglikelihood = c_sum(&st, likelihood);

  /* %% Backward recursion */
  i = b_Fm->size[0] * b_Fm->size[1];
  b_Fm->size[0] = ysm->size[0];
  b_Fm->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(sp, b_Fm, i, &hi_emlrtRTEI);
  Fm_data = b_Fm->data;
  loop_ub = ysm->size[0] * (mu_phi->size[0] - 1);
  for (i = 0; i < loop_ub; i++) {
    Fm_data[i] = 0.0;
  }

  /*  T by km 샘플링된 값들을 저장하는 공간 */
  if ((ysm->size[0] < 1) || (ysm->size[0] > P_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(ysm->size[0], 1, P_ttm->size[0], &cd_emlrtBCI,
      (emlrtCTX)sp);
  }

  loop_ub = P_ttm->size[1];
  i = Kalgain->size[0];
  Kalgain->size[0] = P_ttm->size[1];
  emxEnsureCapacity_real_T(sp, Kalgain, i, &ji_emlrtRTEI);
  PGG_data = Kalgain->data;
  for (i = 0; i < loop_ub; i++) {
    PGG_data[i] = P_ttm_data[(ysm->size[0] + P_ttm->size[0] * i) - 1];
  }

  st.site = &ai_emlrtRSI;
  sizes_idx_0 = Kalgain->size[0];
  b_st.site = &si_emlrtRSI;
  c_st.site = &ri_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  c_st.site = &ri_emlrtRSI;
  assertValidSizeArg(&c_st, (real_T)mu_phi->size[0] - 1.0);
  sizes_idx_1 = Kalgain->size[0];
  if (1 > Kalgain->size[0]) {
    sizes_idx_1 = 1;
  }

  if (mu_phi->size[0] - 1 > muIntScalarMax_sint32(sizes_idx_0, sizes_idx_1)) {
    emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((mu_phi->size[0] - 1) * (mu_phi->size[0] - 1) != Kalgain->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  km by km 초기값으로 마지막 관측치 */
  b_mu_phi[0] = mu_phi->size[0] - 1;
  input_sizes[0] = mu_phi->size[0] - 1;
  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = mu_phi->size[0] - 1;
  P_tl->size[1] = mu_phi->size[0] - 1;
  emxEnsureCapacity_real_T(sp, P_tl, i, &ki_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = mu_phi->size[0] - 1;
  for (i = 0; i < loop_ub; i++) {
    sizes_idx_1 = b_mu_phi[0];
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] = (PGG_data[i1 + b_mu_phi[0] * i] +
        PGG_data[i + input_sizes[0] * i1]) / 2.0;
    }
  }

  st.site = &bi_emlrtRSI;
  b_cholmod(&st, P_tl, cP_tt);

  /*  km by km */
  if ((ysm->size[0] < 1) || (ysm->size[0] > f_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(ysm->size[0], 1, f_ttm->size[0], &ad_emlrtBCI,
      (emlrtCTX)sp);
  }

  loop_ub = f_ttm->size[1];
  i = f_tt->size[0];
  f_tt->size[0] = f_ttm->size[1];
  emxEnsureCapacity_real_T(sp, f_tt, i, &li_emlrtRTEI);
  f_tt_data = f_tt->data;
  for (i = 0; i < loop_ub; i++) {
    f_tt_data[i] = f_ttm_data[(ysm->size[0] + f_ttm->size[0] * i) - 1];
  }

  /*  km by 1 */
  st.site = &ci_emlrtRSI;
  b_st.site = &ci_emlrtRSI;
  randn(&b_st, (real_T)mu_phi->size[0] - 1.0, likelihood);
  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, cP_tt, likelihood, cP_tt->size[0], likelihood->
                      size[0]);
  b_st.site = &rb_emlrtRSI;
  c_mtimes(&b_st, cP_tt, likelihood, Kalgain);
  PGG_data = Kalgain->data;
  if ((f_tt->size[0] != Kalgain->size[0]) && ((f_tt->size[0] != 1) &&
       (Kalgain->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(f_tt->size[0], Kalgain->size[0], &ub_emlrtECI,
      (emlrtCTX)sp);
  }

  if (f_tt->size[0] == Kalgain->size[0]) {
    loop_ub = f_tt->size[0];
    for (i = 0; i < loop_ub; i++) {
      f_tt_data[i] += PGG_data[i];
    }
  } else {
    st.site = &ci_emlrtRSI;
    plus(&st, f_tt, Kalgain);
    f_tt_data = f_tt->data;
  }

  /*  km by 1 */
  if (ysm->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(ysm->size[0], 1, ysm->size[0], &wc_emlrtBCI,
      (emlrtCTX)sp);
  }

  b_mu_phi[0] = 1;
  b_mu_phi[1] = mu_phi->size[0] - 1;
  input_sizes[0] = 1;
  input_sizes[1] = f_tt->size[0];
  emlrtSubAssignSizeCheckR2012b(&b_mu_phi[0], 2, &input_sizes[0], 2,
    &rb_emlrtECI, (emlrtCTX)sp);
  loop_ub = f_tt->size[0];
  for (i = 0; i < loop_ub; i++) {
    Fm_data[(ysm->size[0] + b_Fm->size[0] * i) - 1] = f_tt_data[i];
  }

  /*  1 by by km 마지막 기의 은닉인자를 sampling */
  result = ysm->size[0] - 1;

  /*   time index */
  if (result >= 1) {
    i3 = p * p;
    b_mu_phi[0] = 1;
  }

  result = ysm->size[0] - 1;
  while (result >= 1) {
    if (result > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result, 1, f_ttm->size[0], &yc_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = f_ttm->size[1];
    i = f_tt->size[0];
    f_tt->size[0] = f_ttm->size[1];
    emxEnsureCapacity_real_T(sp, f_tt, i, &qi_emlrtRTEI);
    f_tt_data = f_tt->data;
    for (i = 0; i < loop_ub; i++) {
      f_tt_data[i] = f_ttm_data[(result + f_ttm->size[0] * i) - 1];
    }

    /*  km3 by 1 */
    if (result > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result, 1, P_ttm->size[0], &xc_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = P_ttm->size[1];
    i = Kalgain->size[0];
    Kalgain->size[0] = P_ttm->size[1];
    emxEnsureCapacity_real_T(sp, Kalgain, i, &ri_emlrtRTEI);
    PGG_data = Kalgain->data;
    for (i = 0; i < loop_ub; i++) {
      PGG_data[i] = P_ttm_data[(result + P_ttm->size[0] * i) - 1];
    }

    st.site = &di_emlrtRSI;
    sizes_idx_0 = Kalgain->size[0];
    b_st.site = &si_emlrtRSI;
    c_st.site = &ri_emlrtRSI;
    assertValidSizeArg(&c_st, (real_T)(nr + 1) - 1.0);
    c_st.site = &ri_emlrtRSI;
    assertValidSizeArg(&c_st, (real_T)(nr + 1) - 1.0);
    sizes_idx_1 = Kalgain->size[0];
    if (1 > Kalgain->size[0]) {
      sizes_idx_1 = 1;
    }

    if (p > muIntScalarMax_sint32(sizes_idx_0, sizes_idx_1)) {
      emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if (i3 != Kalgain->size[0]) {
      emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    /*  km3 by km3 */
    st.site = &ei_emlrtRSI;
    b_Kalgain = *Kalgain;
    b_input_sizes[0] = p;
    b_input_sizes[1] = p;
    b_Kalgain.size = &b_input_sizes[0];
    b_Kalgain.numDimensions = 2;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, Phi, &b_Kalgain, Phi->size[1], nr);
    b_Kalgain = *Kalgain;
    c_input_sizes[0] = p;
    c_input_sizes[1] = p;
    b_Kalgain.size = &c_input_sizes[0];
    b_Kalgain.numDimensions = 2;
    b_st.site = &rb_emlrtRSI;
    f_mtimes(&b_st, Phi, &b_Kalgain, y);
    st.site = &ei_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, Phi, y->size[1], Phi->size[1]);
    b_st.site = &rb_emlrtRSI;
    e_mtimes(&b_st, y, Phi, cP_tt);
    cP_tt_data = cP_tt->data;
    if ((cP_tt->size[0] != b_result->size[0]) && ((cP_tt->size[0] != 1) &&
         (b_result->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], b_result->size[0],
        &tb_emlrtECI, (emlrtCTX)sp);
    }

    if ((cP_tt->size[1] != b_result->size[1]) && ((cP_tt->size[1] != 1) &&
         (b_result->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], b_result->size[1],
        &sb_emlrtECI, (emlrtCTX)sp);
    }

    /*  km by km */
    if ((cP_tt->size[0] == Sigma->size[0]) && (cP_tt->size[1] == Sigma->size[1]))
    {
      i = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = cP_tt->size[0];
      P_tl->size[1] = cP_tt->size[1];
      emxEnsureCapacity_real_T(sp, P_tl, i, &ui_emlrtRTEI);
      P_tl_data = P_tl->data;
      loop_ub = cP_tt->size[0] * cP_tt->size[1];
      for (i = 0; i < loop_ub; i++) {
        P_tl_data[i] = cP_tt_data[i] + Sigma_data[i];
      }

      st.site = &fi_emlrtRSI;
      inv(&st, P_tl, cP_tt);
    } else {
      st.site = &fi_emlrtRSI;
      b_binary_expand_op(&st, cP_tt, fi_emlrtRSI, Sigma);
    }

    /*  km by km */
    if (result + 1 > b_Fm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, b_Fm->size[0], &vc_emlrtBCI,
        (emlrtCTX)sp);
    }

    if ((C->size[0] != b_Fm->size[1]) && ((b_Fm->size[1] != 1) && (C->size[0] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(b_Fm->size[1], C->size[0], &qb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (C->size[0] == b_Fm->size[1]) {
      loop_ub = b_Fm->size[1];
      i = f_tl->size[0];
      f_tl->size[0] = b_Fm->size[1];
      emxEnsureCapacity_real_T(sp, f_tl, i, &vi_emlrtRTEI);
      cP_tt_data = f_tl->data;
      for (i = 0; i < loop_ub; i++) {
        cP_tt_data[i] = Fm_data[result + b_Fm->size[0] * i] - C_data[i];
      }
    } else {
      st.site = &gi_emlrtRSI;
      l_binary_expand_op(&st, f_tl, b_Fm, result, C);
      cP_tt_data = f_tl->data;
    }

    st.site = &gi_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    dynamic_size_checks(&b_st, Phi, f_tt, Phi->size[1], f_tt->size[0]);
    b_st.site = &rb_emlrtRSI;
    mtimes(&b_st, Phi, f_tt, likelihood);
    likelihood_data = likelihood->data;
    if ((f_tl->size[0] != likelihood->size[0]) && ((f_tl->size[0] != 1) &&
         (likelihood->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tl->size[0], likelihood->size[0],
        &qb_emlrtECI, (emlrtCTX)sp);
    }

    if (f_tl->size[0] == likelihood->size[0]) {
      loop_ub = f_tl->size[0];
      for (i = 0; i < loop_ub; i++) {
        cP_tt_data[i] -= likelihood_data[i];
      }
    } else {
      st.site = &gi_emlrtRSI;
      d_minus(&st, f_tl, likelihood);
    }

    /*  km by 1 */
    st.site = &hi_emlrtRSI;
    b_Kalgain = *Kalgain;
    d_input_sizes[0] = p;
    d_input_sizes[1] = p;
    b_Kalgain.size = &d_input_sizes[0];
    b_Kalgain.numDimensions = 2;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, &b_Kalgain, Phi, nr, Phi->size[1]);
    b_Kalgain = *Kalgain;
    e_input_sizes[0] = p;
    e_input_sizes[1] = p;
    b_Kalgain.size = &e_input_sizes[0];
    b_Kalgain.numDimensions = 2;
    b_st.site = &rb_emlrtRSI;
    e_mtimes(&b_st, &b_Kalgain, Phi, y);
    st.site = &hi_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, cP_tt, y->size[1], cP_tt->size[0]);
    b_st.site = &rb_emlrtRSI;
    f_mtimes(&b_st, y, cP_tt, PGG);

    /*  km3 by km */
    st.site = &ii_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    dynamic_size_checks(&b_st, PGG, f_tl, PGG->size[1], f_tl->size[0]);
    b_st.site = &rb_emlrtRSI;
    mtimes(&b_st, PGG, f_tl, likelihood);
    likelihood_data = likelihood->data;
    if ((f_tt->size[0] != likelihood->size[0]) && ((f_tt->size[0] != 1) &&
         (likelihood->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tt->size[0], likelihood->size[0],
        &pb_emlrtECI, (emlrtCTX)sp);
    }

    if (f_tt->size[0] == likelihood->size[0]) {
      loop_ub = f_tt->size[0];
      for (i = 0; i < loop_ub; i++) {
        f_tt_data[i] += likelihood_data[i];
      }
    } else {
      st.site = &ii_emlrtRSI;
      plus(&st, f_tt, likelihood);
      f_tt_data = f_tt->data;
    }

    /*  km3 by 1 */
    st.site = &ji_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, PGG, Phi, PGG->size[1], Phi->size[0]);
    b_st.site = &rb_emlrtRSI;
    f_mtimes(&b_st, PGG, Phi, y);
    st.site = &ji_emlrtRSI;
    b_Kalgain = *Kalgain;
    f_input_sizes[0] = p;
    f_input_sizes[1] = p;
    b_Kalgain.size = &f_input_sizes[0];
    b_Kalgain.numDimensions = 2;
    b_st.site = &sb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, &b_Kalgain, y->size[1], nr);
    b_Kalgain = *Kalgain;
    g_input_sizes[0] = p;
    g_input_sizes[1] = p;
    b_Kalgain.size = &g_input_sizes[0];
    b_Kalgain.numDimensions = 2;
    b_st.site = &rb_emlrtRSI;
    f_mtimes(&b_st, y, &b_Kalgain, cP_tt);

    /*  km3 by km3 */
    if ((p != cP_tt->size[0]) && ((p != 1) && (cP_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(p, cP_tt->size[0], &ob_emlrtECI, (emlrtCTX)sp);
    }

    if ((p != cP_tt->size[1]) && ((p != 1) && (cP_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(p, cP_tt->size[1], &nb_emlrtECI, (emlrtCTX)sp);
    }

    if ((p == cP_tt->size[0]) && (p == cP_tt->size[1])) {
      loop_ub = i3 - 1;
      i = cP_tt->size[0] * cP_tt->size[1];
      cP_tt->size[0] = p;
      cP_tt->size[1] = p;
      emxEnsureCapacity_real_T(sp, cP_tt, i, &wi_emlrtRTEI);
      cP_tt_data = cP_tt->data;
      for (i = 0; i <= loop_ub; i++) {
        cP_tt_data[i] = PGG_data[i] - cP_tt_data[i];
      }
    } else {
      st.site = &cm_emlrtRSI;
      k_binary_expand_op(&st, cP_tt, Kalgain, p);
      cP_tt_data = cP_tt->data;
    }

    if ((cP_tt->size[0] != cP_tt->size[1]) && ((cP_tt->size[0] != 1) &&
         (cP_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], cP_tt->size[1], &mb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((cP_tt->size[0] != cP_tt->size[1]) && ((cP_tt->size[1] != 1) &&
         (cP_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], cP_tt->size[0], &lb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (cP_tt->size[0] == cP_tt->size[1]) {
      i = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = cP_tt->size[0];
      P_tl->size[1] = cP_tt->size[1];
      emxEnsureCapacity_real_T(sp, P_tl, i, &xi_emlrtRTEI);
      P_tl_data = P_tl->data;
      loop_ub = cP_tt->size[1];
      for (i = 0; i < loop_ub; i++) {
        sizes_idx_1 = cP_tt->size[0];
        for (i1 = 0; i1 < sizes_idx_1; i1++) {
          P_tl_data[i1 + P_tl->size[0] * i] = (cP_tt_data[i1 + cP_tt->size[0] *
            i] + cP_tt_data[i + cP_tt->size[0] * i1]) / 2.0;
        }
      }

      i = cP_tt->size[0] * cP_tt->size[1];
      cP_tt->size[0] = P_tl->size[0];
      cP_tt->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T(sp, cP_tt, i, &yi_emlrtRTEI);
      cP_tt_data = cP_tt->data;
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i = 0; i < loop_ub; i++) {
        cP_tt_data[i] = P_tl_data[i];
      }
    } else {
      st.site = &yl_emlrtRSI;
      d_binary_expand_op(&st, cP_tt);
    }

    st.site = &ki_emlrtRSI;
    b_cholmod(&st, cP_tt, PGG);
    st.site = &li_emlrtRSI;
    b_st.site = &li_emlrtRSI;
    randn(&b_st, (real_T)(nr + 1) - 1.0, likelihood);
    b_st.site = &sb_emlrtRSI;
    dynamic_size_checks(&b_st, PGG, likelihood, PGG->size[0], likelihood->size[0]);
    b_st.site = &rb_emlrtRSI;
    c_mtimes(&b_st, PGG, likelihood, Kalgain);
    PGG_data = Kalgain->data;
    if ((f_tt->size[0] != Kalgain->size[0]) && ((f_tt->size[0] != 1) &&
         (Kalgain->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tt->size[0], Kalgain->size[0], &kb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (f_tt->size[0] == Kalgain->size[0]) {
      loop_ub = f_tt->size[0];
      for (i = 0; i < loop_ub; i++) {
        f_tt_data[i] += PGG_data[i];
      }
    } else {
      st.site = &li_emlrtRSI;
      plus(&st, f_tt, Kalgain);
      f_tt_data = f_tt->data;
    }

    if (result > b_Fm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result, 1, b_Fm->size[0], &uc_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_mu_phi[1] = b_Fm->size[1];
    input_sizes[0] = 1;
    input_sizes[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_mu_phi[0], 2, &input_sizes[0], 2,
      &jb_emlrtECI, (emlrtCTX)sp);
    loop_ub = f_tt->size[0];
    for (i = 0; i < loop_ub; i++) {
      Fm_data[(result + b_Fm->size[0] * i) - 1] = f_tt_data[i];
    }

    /*  1 by by km */
    result--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &b_result);
  emxFree_real_T(sp, &PGG);
  emxFree_real_T(sp, &cP_tt);
  emxFree_real_T(sp, &f_tt);
  emxFree_real_T(sp, &Kalgain);
  emxFree_real_T(sp, &P_tl);
  emxFree_real_T(sp, &f_tl);
  emxFree_real_T(sp, &likelihood);
  emxFree_real_T(sp, &P_ttm);
  emxFree_real_T(sp, &f_ttm);
  emxFree_real_T(sp, &Sigma);
  emxFree_real_T(sp, &Phi);
  emxFree_real_T(sp, &C);
  if (1 > b_Fm->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, b_Fm->size[1], &tc_emlrtBCI, (emlrtCTX)
      sp);
  }

  loop_ub = b_Fm->size[0];
  i = Fm->size[0];
  Fm->size[0] = b_Fm->size[0];
  emxEnsureCapacity_real_T(sp, Fm, i, &pi_emlrtRTEI);
  Phi_data = Fm->data;
  for (i = 0; i < loop_ub; i++) {
    Phi_data[i] = Fm_data[i];
  }

  emxFree_real_T(sp, &b_Fm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *xf, const
  emxArray_real_T *beta, const emxArray_real_T *mu_phi, real_T sig2, const
  emxArray_real_T *ym, const emxArray_real_T *hm, real_T *y_pred, real_T
  *lnpredlik)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *hL;
  emxArray_real_T *r;
  const real_T *beta_data;
  const real_T *hm_data;
  const real_T *mu_phi_data;
  const real_T *xf_data;
  real_T hf;
  real_T volf;
  real_T *hL_data;
  real_T *r1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  hm_data = hm->data;
  mu_phi_data = mu_phi->data;
  beta_data = beta->data;
  xf_data = xf->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  예측분포 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  hf = ((real_T)ym->size[0] - ((real_T)mu_phi->size[0] - 1.0)) + 1.0;
  if (hf > ym->size[0]) {
    i = 1;
    i1 = 1;
    i2 = 0;
  } else {
    if ((ym->size[0] < 1) || (ym->size[0] > hm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(ym->size[0], 1, hm->size[0], &qc_emlrtBCI,
        (emlrtCTX)sp);
    }

    i = ym->size[0];
    i1 = -1;
    if (((int32_T)hf < 1) || ((int32_T)hf > hm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)hf, 1, hm->size[0], &rc_emlrtBCI,
        (emlrtCTX)sp);
    }

    i2 = (int32_T)hf;
  }

  emxInit_real_T(sp, &hL, 1, &og_emlrtRTEI);
  st.site = &dm_emlrtRSI;
  loop_ub = div_s32_floor(&st, i2 - i, i1);
  i2 = hL->size[0];
  hL->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(sp, hL, i2, &og_emlrtRTEI);
  hL_data = hL->data;
  for (i2 = 0; i2 <= loop_ub; i2++) {
    hL_data[i2] = hm_data[(i + i1 * i2) - 1];
  }

  /*  마지막 기의 h(t) */
  if (2 > mu_phi->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = mu_phi->size[0];
  }

  emxInit_real_T(sp, &r, 1, &qg_emlrtRTEI);
  b_loop_ub = i1 - i;
  i2 = r->size[0];
  r->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, r, i2, &pg_emlrtRTEI);
  r1 = r->data;
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    r1[i2] = mu_phi_data[i + i2];
  }

  if (1 > mu_phi->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, mu_phi->size[0], &sc_emlrtBCI, (emlrtCTX)
      sp);
  }

  st.site = &bj_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (b_loop_ub != loop_ub + 1) {
    if ((b_loop_ub == 1) || (loop_ub + 1 == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (b_loop_ub < 1) {
    hf = 0.0;
  } else {
    n_t = (ptrdiff_t)(i1 - i);
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    hf = ddot(&n_t, &r1[0], &incx_t, &hL_data[0], &incy_t);
  }

  emxFree_real_T(&st, &r);
  emxFree_real_T(&st, &hL);
  st.site = &bj_emlrtRSI;
  if (sig2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  st.site = &bj_emlrtRSI;
  hf = (mu_phi_data[0] + hf) + muDoubleScalarSqrt(sig2) * b_randn();

  /*  다음기에 예상되는 h(t) */
  volf = muDoubleScalarExp(hf / 2.0);

  /*  다음기의 예상되는 변동성 */
  st.site = &cj_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (xf->size[0] != beta->size[0]) {
    if ((xf->size[0] == 1) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (xf->size[0] < 1) {
    hf = 0.0;
  } else {
    n_t = (ptrdiff_t)xf->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    hf = ddot(&n_t, &xf_data[0], &incx_t, &beta_data[0], &incy_t);
  }

  st.site = &cj_emlrtRSI;
  *y_pred = hf + volf * b_randn();

  /*  다음기에 예상되는 y-value */
  st.site = &dj_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (xf->size[0] != beta->size[0]) {
    if ((xf->size[0] == 1) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (xf->size[0] < 1) {
    hf = 0.0;
  } else {
    n_t = (ptrdiff_t)xf->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    hf = ddot(&n_t, &xf_data[0], &incx_t, &beta_data[0], &incy_t);
  }

  st.site = &dj_emlrtRSI;
  volf *= volf;
  st.site = &dj_emlrtRSI;

  /*  log pdf of normal */
  /*  x = normal variates */
  /*  mu = vector of means */
  /*  sig2vec = vector of variances */
  hf = *y_pred - hf;
  *lnpredlik = -0.5 * muDoubleScalarLog(2.0 * volf * 3.1415926535897931) - 0.5 *
    (hf * hf) / volf;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *X, const
                      emxArray_real_T *Y, real_T v_, real_T d_, const
                      emxArray_real_T *mu_phi, real_T d, real_T *sig2_inv,
                      real_T *sig2)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *ehat;
  real_T ur[2];
  const real_T *Y_data;
  real_T b;
  real_T b_d;
  real_T c;
  real_T gam;
  real_T u;
  real_T v;
  real_T x;
  real_T *ehat_data;
  int32_T exitg1;
  int32_T i;
  int32_T iter;
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
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  Sigma 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  st.site = &vg_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (mu_phi->size[0] != X->size[1]) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (mu_phi->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &ehat, 1, &jg_emlrtRTEI);
  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, X, mu_phi, ehat);
  if ((Y->size[0] != ehat->size[0]) && ((Y->size[0] != 1) && (ehat->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], ehat->size[0], &gb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (Y->size[0] == ehat->size[0]) {
    i = ehat->size[0];
    ehat->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ehat, i, &jg_emlrtRTEI);
    ehat_data = ehat->data;
    iter = Y->size[0];
    for (i = 0; i < iter; i++) {
      ehat_data[i] = Y_data[i] - ehat_data[i];
    }
  } else {
    st.site = &vg_emlrtRSI;
    minus(&st, ehat, Y);
    ehat_data = ehat->data;
  }

  /*  잔차항 */
  st.site = &wg_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (ehat->size[0] < 1) {
    gam = 0.0;
  } else {
    n_t = (ptrdiff_t)ehat->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    gam = ddot(&n_t, &ehat_data[0], &incx_t, &ehat_data[0], &incy_t);
  }

  emxFree_real_T(&st, &ehat);
  st.site = &xg_emlrtRSI;
  c = (v_ + (real_T)Y->size[0]) / 2.0;

  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &yg_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b = 1.0 / ((d_ + d * gam) / 2.0);
  c_st.site = &ah_emlrtRSI;
  d_st.site = &bh_emlrtRSI;
  e_st.site = &ch_emlrtRSI;
  f_st.site = &dh_emlrtRSI;
  g_st.site = &eh_emlrtRSI;
  if (c <= 0.0) {
    if (c == 0.0) {
      c = 0.0;
    } else {
      c = rtNaN;
    }
  } else if ((!muDoubleScalarIsInf(c)) && (!muDoubleScalarIsNaN(c))) {
    if (c >= 1.0) {
      b_d = c - 0.33333333333333331;
      u = b_rand();
      gam = 1.0;
    } else {
      b_d = (c + 1.0) - 0.33333333333333331;
      c_rand(ur);
      u = ur[0];
      if (c < 7.4567656047833286E-20) {
        gam = 0.0;
      } else {
        h_st.site = &eh_emlrtRSI;
        gam = mpower(&h_st, ur[1], 1.0 / c);
      }
    }

    c = 1.0 / muDoubleScalarSqrt(9.0 * b_d);
    iter = 0;
    x = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * x + 1.0) {
        x = b_randn();
      }

      v *= v * v;
      x *= x;
      if (u < 1.0 - 0.0331 * x * x) {
        exitg1 = 1;
      } else {
        h_st.site = &eh_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(&h_st, &t_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 3, "log");
        }

        if (muDoubleScalarLog(u) < 0.5 * x + b_d * ((1.0 - v) +
             muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            h_st.site = &eh_emlrtRSI;
            e_warning(&h_st);
            exitg1 = 1;
          } else {
            u = b_rand();
          }
        }
      }
    } while (exitg1 == 0);

    c = b_d * v * gam;
  }

  gam = b * c;
  if (b < 0.0) {
    gam = rtNaN;
  }

  *sig2 = 1.0 / gam / d;
  *sig2_inv = 1.0 / *sig2;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Sm(const emlrtStack *sp, const emxArray_real_T *ysm, const
                   emxArray_real_T *hm, emxArray_real_T *sm)
{
  static const real_T pm[7] = { 0.0073, 0.10556, 2.0E-5, 0.04395, 0.34001,
    0.24566, 0.2575 };

  emlrtStack st;
  real_T fm[7];
  real_T psuml[7];
  const real_T *hm_data;
  const real_T *ysm_data;
  real_T d;
  real_T e;
  real_T *sm_data;
  int32_T b_i;
  int32_T i;
  int32_T k;
  int32_T t;
  boolean_T iseql[7];
  boolean_T ex;
  st.prev = sp;
  st.tls = sp->tls;
  hm_data = hm->data;
  ysm_data = ysm->data;

  /*  State 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  i = sm->size[0];
  sm->size[0] = ysm->size[0];
  emxEnsureCapacity_real_T(sp, sm, i, &kg_emlrtRTEI);
  sm_data = sm->data;
  i = ysm->size[0];
  for (t = 0; t < i; t++) {
    /*  이산확률변수 s(t)의 7가지 kernel 값을 저장하는 방 */
    for (b_i = 0; b_i < 7; b_i++) {
      if (t + 1 > hm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, hm->size[0], &oc_emlrtBCI,
          (emlrtCTX)sp);
      }

      /*  ystm(t)의 조건부 기대값 */
      st.site = &fh_emlrtRSI;
      if (t + 1 > ysm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, ysm->size[0], &nc_emlrtBCI, &st);
      }

      /*  log pdf of normal */
      /*  x = normal variates */
      /*  mu = vector of means */
      /*  sig2vec = vector of variances */
      e = ysm_data[t] - (dv[b_i] + hm_data[t]);
      d = dv1[b_i];
      fm[b_i] = muDoubleScalarExp((-0.5 * muDoubleScalarLog(2.0 * d *
        3.1415926535897931) - 0.5 * (e * e) / d) + muDoubleScalarLog(pm[b_i]));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    e = e_sumColumnB(fm);
    for (b_i = 0; b_i < 7; b_i++) {
      fm[b_i] /= e;
    }

    /*  st의 사후 확률 */
    st.site = &hh_emlrtRSI;

    /* cum = cum'; */
    psuml[0] = 0.0;
    for (k = 0; k < 6; k++) {
      fm[k + 1] += fm[k];
      psuml[k + 1] = fm[k];
    }

    if (t + 1 > sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, sm->size[0], &pc_emlrtBCI, &st);
    }

    sm_data[t] = 0.0;
    e = b_rand();
    for (b_i = 0; b_i < 7; b_i++) {
      iseql[b_i] = ((e > psuml[b_i]) == (e <= fm[b_i]));
    }

    b_i = -1;
    ex = iseql[0];
    for (k = 0; k < 6; k++) {
      if ((int32_T)ex < (int32_T)iseql[k + 1]) {
        ex = true;
        b_i = k;
      }
    }

    if (t + 1 > sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, sm->size[0], &pc_emlrtBCI, &st);
    }

    sm_data[t] = (real_T)b_i + 2.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
}

static void Gen_beta(const emlrtStack *sp, emxArray_real_T *X, emxArray_real_T
                     *Y, const emxArray_real_T *beta0, const emxArray_real_T
                     *precB0, const emxArray_real_T *vol, emxArray_real_T *beta)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *B1;
  emxArray_real_T *b_B1;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  const real_T *precB0_data;
  const real_T *vol_data;
  real_T *X_data;
  real_T *Y_data;
  real_T *r1;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  vol_data = vol->data;
  precB0_data = precB0->data;
  Y_data = Y->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  Beta sampling */
  /*  이분산 모형을 동분산 모형으로 전환 */
  st.site = &ac_emlrtRSI;
  b_st.site = &fc_emlrtRSI;
  c_st.site = &gc_emlrtRSI;
  if ((Y->size[0] != 1) && (vol->size[0] != 1) && (Y->size[0] != vol->size[0]))
  {
    emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
      "MATLAB:sizeDimensionsMustMatch", "MATLAB:sizeDimensionsMustMatch", 0);
  }

  if (Y->size[0] == vol->size[0]) {
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] /= vol_data[i];
    }
  } else {
    c_st.site = &xl_emlrtRSI;
    rdivide(&c_st, Y, vol);
  }

  i = X->size[0];
  if (0 <= X->size[0] - 1) {
    iv[0] = 1;
  }

  emxInit_real_T(sp, &r, 2, &id_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, X->size[0], &s_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (b_i + 1 > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, X->size[0], &t_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (b_i + 1 > vol->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vol->size[0], &u_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = X->size[1];
    i1 = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, r, i1, &ed_emlrtRTEI);
    r1 = r->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1[i1] = X_data[b_i + X->size[0] * i1] / vol_data[b_i];
    }

    iv[1] = X->size[1];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &r->size[0], 2, &q_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = r->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      X_data[b_i + X->size[0] * i1] = r1[i1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &r);
  emxInit_real_T(sp, &B1, 2, &gd_emlrtRTEI);

  /*  number of columns */
  st.site = &bc_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  b_mtimes(&b_st, X, X, B1);
  Y_data = B1->data;
  if ((B1->size[0] != precB0->size[0]) && ((B1->size[0] != 1) && (precB0->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(B1->size[0], precB0->size[0], &p_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((B1->size[1] != precB0->size[1]) && ((B1->size[1] != 1) && (precB0->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(B1->size[1], precB0->size[1], &o_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((B1->size[0] == precB0->size[0]) && (B1->size[1] == precB0->size[1])) {
    emxInit_real_T(sp, &b_B1, 2, &fd_emlrtRTEI);
    i = b_B1->size[0] * b_B1->size[1];
    b_B1->size[0] = B1->size[0];
    b_B1->size[1] = B1->size[1];
    emxEnsureCapacity_real_T(sp, b_B1, i, &fd_emlrtRTEI);
    X_data = b_B1->data;
    loop_ub = B1->size[0] * B1->size[1];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = Y_data[i] + precB0_data[i];
    }

    st.site = &bc_emlrtRSI;
    inv(&st, b_B1, B1);
    emxFree_real_T(sp, &b_B1);
  } else {
    st.site = &bc_emlrtRSI;
    b_binary_expand_op(&st, B1, bc_emlrtRSI, precB0);
  }

  st.site = &cc_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (X->size[0] != Y->size[0]) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (Y->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &A, 1, &hd_emlrtRTEI);
  b_st.site = &rb_emlrtRSI;
  c_mtimes(&b_st, X, Y, A);
  Y_data = A->data;
  st.site = &cc_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (beta0->size[0] != precB0->size[1]) {
    if (((precB0->size[0] == 1) && (precB0->size[1] == 1)) || (beta0->size[0] ==
         1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &r2, 1, &id_emlrtRTEI);
  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, precB0, beta0, r2);
  r1 = r2->data;
  if ((A->size[0] != r2->size[0]) && ((A->size[0] != 1) && (r2->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(A->size[0], r2->size[0], &n_emlrtECI, (emlrtCTX)
      sp);
  }

  if (A->size[0] == r2->size[0]) {
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] += r1[i];
    }
  } else {
    st.site = &cc_emlrtRSI;
    plus(&st, A, r2);
  }

  st.site = &dc_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  if (A->size[0] != B1->size[1]) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, B1, A, beta);
  Y_data = beta->data;
  st.site = &ec_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  cholesky(&b_st, B1);
  st.site = &ec_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  randn(&b_st, X->size[1], A);
  b_st.site = &sb_emlrtRSI;
  if (B1->size[0] != A->size[0]) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &rb_emlrtRSI;
  c_mtimes(&b_st, B1, A, r2);
  r1 = r2->data;
  emxFree_real_T(sp, &A);
  emxFree_real_T(sp, &B1);
  if ((beta->size[0] != r2->size[0]) && ((beta->size[0] != 1) && (r2->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], r2->size[0], &m_emlrtECI,
      (emlrtCTX)sp);
  }

  if (beta->size[0] == r2->size[0]) {
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] += r1[i];
    }
  } else {
    st.site = &ec_emlrtRSI;
    plus(&st, beta, r2);
  }

  emxFree_real_T(sp, &r2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_mu_phi(const emlrtStack *sp, const emxArray_real_T *hm, const
  emxArray_real_T *b_, const emxArray_real_T *precb_, real_T sig2_inv, const
  emxArray_real_T *mu_phi0, emxArray_real_T *mu_phi, emxArray_real_T *X,
  emxArray_real_T *Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_boolean_T *b_test;
  emxArray_creal_T *test;
  emxArray_real_T *XX;
  emxArray_real_T *XY;
  emxArray_real_T *absolute;
  emxArray_real_T *b_mu_phi;
  emxArray_real_T *b_precb_;
  emxArray_real_T *c_mu_phi;
  emxArray_real_T *r;
  creal_T *test_data;
  const real_T *hm_data;
  const real_T *mu_phi0_data;
  const real_T *precb__data;
  real_T *XX_data;
  real_T *Y_data;
  real_T *absolute_data;
  real_T *mu_phi_data;
  int32_T result[2];
  int32_T b_i;
  int32_T b_result;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int8_T input_sizes_idx_0;
  boolean_T b;
  boolean_T empty_non_axis_sizes;
  boolean_T *b_test_data;
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
  mu_phi0_data = mu_phi0->data;
  precb__data = precb_->data;
  hm_data = hm->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  mu와 phi 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  if (mu_phi0->size[0] > hm->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    if ((mu_phi0->size[0] < 1) || (mu_phi0->size[0] > hm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(mu_phi0->size[0], 1, hm->size[0],
        &v_emlrtBCI, (emlrtCTX)sp);
    }

    i = mu_phi0->size[0] - 1;
    if (hm->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(hm->size[0], 1, hm->size[0], &w_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = hm->size[0];
  }

  result[0] = 1;
  input_sizes_idx_1 = i1 - i;
  result[1] = input_sizes_idx_1;
  st.site = &nc_emlrtRSI;
  indexShapeCheck(&st, hm->size[0], result);
  i2 = Y->size[0];
  Y->size[0] = input_sizes_idx_1;
  emxEnsureCapacity_real_T(sp, Y, i2, &kd_emlrtRTEI);
  Y_data = Y->data;
  for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
    Y_data[i2] = hm_data[i + i2];
  }

  i2 = X->size[0] * X->size[1];
  X->size[0] = input_sizes_idx_1;
  X->size[1] = 1;
  emxEnsureCapacity_real_T(sp, X, i2, &ld_emlrtRTEI);
  Y_data = X->data;
  for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
    Y_data[i2] = 1.0;
  }

  i2 = mu_phi0->size[0];
  emxInit_real_T(sp, &absolute, 1, &yd_emlrtRTEI);
  for (b_i = 0; b_i <= i2 - 2; b_i++) {
    i3 = (mu_phi0->size[0] - b_i) - 1;
    i4 = (hm->size[0] - b_i) - 1;
    if (i3 > i4) {
      i3 = 0;
      i4 = 0;
    } else {
      if ((i3 < 1) || (i3 > hm->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, hm->size[0], &x_emlrtBCI, (emlrtCTX)
          sp);
      }

      i3--;
      if ((i4 < 1) || (i4 > hm->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, hm->size[0], &y_emlrtBCI, (emlrtCTX)
          sp);
      }
    }

    st.site = &oc_emlrtRSI;
    b_st.site = &cd_emlrtRSI;
    if ((X->size[0] != 0) && (X->size[1] != 0)) {
      b_result = X->size[0];
    } else {
      b_result = i4 - i3;
      if (b_result == 0) {
        b_result = X->size[0];
        if (0 > X->size[0]) {
          b_result = 0;
        }
      }
    }

    c_st.site = &dd_emlrtRSI;
    if ((X->size[0] != b_result) && ((X->size[0] != 0) && (X->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i4 - i3 != b_result) && (i4 - i3 != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (b_result == 0);
    if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
      loop_ub = X->size[1];
    } else {
      loop_ub = 0;
    }

    if (empty_non_axis_sizes || (i4 - i3 != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    sizes_idx_0 = absolute->size[0];
    absolute->size[0] = i4 - i3;
    emxEnsureCapacity_real_T(&b_st, absolute, sizes_idx_0, &od_emlrtRTEI);
    absolute_data = absolute->data;
    sizes_idx_0 = i4 - i3;
    for (i4 = 0; i4 < sizes_idx_0; i4++) {
      absolute_data[i4] = hm_data[i3 + i4];
    }

    for (i3 = 0; i3 < loop_ub; i3++) {
      for (i4 = 0; i4 < b_result; i4++) {
        Y_data[i4 + X->size[0] * i3] = Y_data[i4 + b_result * i3];
      }
    }

    i3 = X->size[0] * X->size[1];
    X->size[0] = b_result;
    X->size[1] = loop_ub + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, X, i3, &pd_emlrtRTEI);
    Y_data = X->data;
    for (i3 = 0; i3 < sizes_idx_1; i3++) {
      for (i4 = 0; i4 < b_result; i4++) {
        Y_data[i4 + X->size[0] * loop_ub] = absolute_data[i4];
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxInit_real_T(sp, &XX, 2, &vd_emlrtRTEI);

  /*  number of columns */
  st.site = &pc_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  b_dynamic_size_checks(&b_st, X, X, X->size[0], X->size[0]);
  b_st.site = &rb_emlrtRSI;
  b_mtimes(&b_st, X, X, XX);
  XX_data = XX->data;
  st.site = &qc_emlrtRSI;
  i2 = absolute->size[0];
  absolute->size[0] = input_sizes_idx_1;
  emxEnsureCapacity_real_T(&st, absolute, i2, &md_emlrtRTEI);
  absolute_data = absolute->data;
  for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
    absolute_data[i2] = hm_data[i + i2];
  }

  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, X, absolute, X->size[0], i1 - i);
  i1 = absolute->size[0];
  absolute->size[0] = input_sizes_idx_1;
  emxEnsureCapacity_real_T(&st, absolute, i1, &md_emlrtRTEI);
  absolute_data = absolute->data;
  for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
    absolute_data[i1] = hm_data[i + i1];
  }

  emxInit_real_T(&st, &XY, 1, &wd_emlrtRTEI);
  b_st.site = &rb_emlrtRSI;
  c_mtimes(&b_st, X, absolute, XY);
  Y_data = XY->data;
  loop_ub = XX->size[0] * XX->size[1];
  for (i = 0; i < loop_ub; i++) {
    XX_data[i] *= sig2_inv;
  }

  if ((precb_->size[0] != XX->size[0]) && ((precb_->size[0] != 1) && (XX->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[0], XX->size[0], &r_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((precb_->size[1] != XX->size[1]) && ((precb_->size[1] != 1) && (XX->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[1], XX->size[1], &s_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &b_precb_, 2, &nd_emlrtRTEI);
  if ((precb_->size[0] == XX->size[0]) && (precb_->size[1] == XX->size[1])) {
    i = b_precb_->size[0] * b_precb_->size[1];
    b_precb_->size[0] = precb_->size[0];
    b_precb_->size[1] = precb_->size[1];
    emxEnsureCapacity_real_T(sp, b_precb_, i, &nd_emlrtRTEI);
    absolute_data = b_precb_->data;
    loop_ub = precb_->size[0] * precb_->size[1];
    for (i = 0; i < loop_ub; i++) {
      absolute_data[i] = precb__data[i] + XX_data[i];
    }

    st.site = &rc_emlrtRSI;
    invpd(&st, b_precb_, XX);
  } else {
    st.site = &rc_emlrtRSI;
    c_binary_expand_op(&st, XX, rc_emlrtRSI, precb_);
  }

  /*  full conditional variance */
  st.site = &sc_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, precb_, b_, precb_->size[1], b_->size[0]);
  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, precb_, b_, absolute);
  absolute_data = absolute->data;
  loop_ub = XY->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_data[i] *= sig2_inv;
  }

  if ((absolute->size[0] != XY->size[0]) && ((absolute->size[0] != 1) &&
       (XY->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(absolute->size[0], XY->size[0], &t_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &sc_emlrtRSI;
  if (absolute->size[0] == XY->size[0]) {
    loop_ub = absolute->size[0];
    for (i = 0; i < loop_ub; i++) {
      absolute_data[i] += Y_data[i];
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    plus(&b_st, absolute, XY);
  }

  emxInit_real_T(&st, &r, 1, &ae_emlrtRTEI);
  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, XX, absolute, XX->size[1], absolute->size[0]);
  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, XX, absolute, mu_phi);
  mu_phi_data = mu_phi->data;

  /*  full conditional mean */
  st.site = &tc_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  cholesky(&b_st, XX);
  st.site = &tc_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  randn(&b_st, X->size[1], absolute);
  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, XX, absolute, XX->size[0], absolute->size[0]);
  b_st.site = &rb_emlrtRSI;
  c_mtimes(&b_st, XX, absolute, r);
  Y_data = r->data;
  if ((mu_phi->size[0] != r->size[0]) && ((mu_phi->size[0] != 1) && (r->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(mu_phi->size[0], r->size[0], &u_emlrtECI,
      (emlrtCTX)sp);
  }

  if (mu_phi->size[0] == r->size[0]) {
    loop_ub = mu_phi->size[0];
    for (i = 0; i < loop_ub; i++) {
      mu_phi_data[i] += Y_data[i];
    }
  } else {
    st.site = &tc_emlrtRSI;
    plus(&st, mu_phi, r);
    mu_phi_data = mu_phi->data;
  }

  /*  beta sampling 하기 */
  if (2 > mu_phi->size[0]) {
    i = -1;
    i1 = -1;
  } else {
    i = 0;
    i1 = mu_phi->size[0] - 1;
  }

  st.site = &uc_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  eye(&b_st, ((real_T)mu_phi0->size[0] - 1.0) - 1.0, b_precb_);
  absolute_data = b_precb_->data;
  if (!(((real_T)mu_phi0->size[0] - 1.0) - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(((real_T)mu_phi0->size[0] - 1.0) - 1.0,
      &n_emlrtDCI, &st);
  }

  b_st.site = &cd_emlrtRSI;
  if ((b_precb_->size[0] != 0) && (b_precb_->size[1] != 0)) {
    b_result = b_precb_->size[0];
  } else if (mu_phi0->size[0] - 2 != 0) {
    b_result = mu_phi0->size[0] - 2;
  } else {
    b_result = b_precb_->size[0];
    if (mu_phi0->size[0] - 2 > b_precb_->size[0]) {
      b_result = mu_phi0->size[0] - 2;
    }
  }

  c_st.site = &dd_emlrtRSI;
  if ((b_precb_->size[0] != b_result) && ((b_precb_->size[0] != 0) &&
       (b_precb_->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((mu_phi0->size[0] - 2 != b_result) && (mu_phi0->size[0] - 2 != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (b_result == 0);
  if (empty_non_axis_sizes || ((b_precb_->size[0] != 0) && (b_precb_->size[1] !=
        0))) {
    input_sizes_idx_1 = b_precb_->size[1];
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (mu_phi0->size[0] - 2 != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  i2 = XX->size[0] * XX->size[1];
  XX->size[0] = b_result;
  XX->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, XX, i2, &qd_emlrtRTEI);
  XX_data = XX->data;
  for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
    for (i3 = 0; i3 < b_result; i3++) {
      XX_data[i3 + XX->size[0] * i2] = absolute_data[i3 + b_result * i2];
    }
  }

  emxFree_real_T(&b_st, &b_precb_);
  for (i2 = 0; i2 < sizes_idx_1; i2++) {
    for (i3 = 0; i3 < b_result; i3++) {
      XX_data[i3 + XX->size[0] * input_sizes_idx_1] = 0.0;
    }
  }

  st.site = &uc_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  loop_ub = i1 - i;
  if (loop_ub != 0) {
    b_result = loop_ub;
  } else if ((XX->size[0] != 0) && (XX->size[1] != 0)) {
    b_result = XX->size[1];
  } else {
    b_result = 0;
    if (XX->size[1] > 0) {
      b_result = XX->size[1];
    }
  }

  c_st.site = &dd_emlrtRSI;
  if ((loop_ub != b_result) && (loop_ub != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((XX->size[1] != b_result) && ((XX->size[0] != 0) && (XX->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (b_result == 0);
  if (empty_non_axis_sizes || (loop_ub != 0)) {
    input_sizes_idx_0 = 1;
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || ((XX->size[0] != 0) && (XX->size[1] != 0))) {
    sizes_idx_0 = XX->size[0];
  } else {
    sizes_idx_0 = 0;
  }

  emxInit_real_T(&b_st, &b_mu_phi, 2, &od_emlrtRTEI);
  i1 = b_mu_phi->size[0] * b_mu_phi->size[1];
  b_mu_phi->size[0] = 1;
  b_mu_phi->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_mu_phi, i1, &od_emlrtRTEI);
  Y_data = b_mu_phi->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Y_data[i1] = mu_phi_data[(i + i1) + 1];
  }

  emxInit_real_T(sp, &c_mu_phi, 2, &rd_emlrtRTEI);
  input_sizes_idx_1 = input_sizes_idx_0;
  i = c_mu_phi->size[0] * c_mu_phi->size[1];
  c_mu_phi->size[0] = input_sizes_idx_0 + sizes_idx_0;
  c_mu_phi->size[1] = b_result;
  emxEnsureCapacity_real_T(sp, c_mu_phi, i, &rd_emlrtRTEI);
  mu_phi_data = c_mu_phi->data;
  for (i = 0; i < b_result; i++) {
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      mu_phi_data[c_mu_phi->size[0] * i] = Y_data[input_sizes_idx_0 * i];
    }
  }

  emxFree_real_T(sp, &b_mu_phi);
  for (i = 0; i < b_result; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      mu_phi_data[(i1 + input_sizes_idx_0) + c_mu_phi->size[0] * i] = XX_data[i1
        + sizes_idx_0 * i];
    }
  }

  emxFree_real_T(sp, &XX);
  emxInit_creal_T(sp, &test, &xd_emlrtRTEI);
  st.site = &vc_emlrtRSI;
  eig(&st, c_mu_phi, test);
  test_data = test->data;
  i = absolute->size[0];
  absolute->size[0] = test->size[0];
  emxEnsureCapacity_real_T(sp, absolute, i, &sd_emlrtRTEI);
  absolute_data = absolute->data;
  loop_ub = test->size[0];
  emxFree_real_T(sp, &c_mu_phi);
  for (i = 0; i < loop_ub; i++) {
    absolute_data[i] = test_data[i].im;
  }

  st.site = &wc_emlrtRSI;
  power(&st, absolute, XY);
  Y_data = XY->data;
  st.site = &xc_emlrtRSI;
  d_abs(&st, test, r);
  st.site = &xc_emlrtRSI;
  power(&st, r, absolute);
  absolute_data = absolute->data;
  emxFree_real_T(sp, &r);
  emxFree_creal_T(sp, &test);
  if ((absolute->size[0] != XY->size[0]) && ((absolute->size[0] != 1) &&
       (XY->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(absolute->size[0], XY->size[0], &v_emlrtECI,
      (emlrtCTX)sp);
  }

  if (absolute->size[0] == XY->size[0]) {
    loop_ub = absolute->size[0];
    for (i = 0; i < loop_ub; i++) {
      absolute_data[i] += Y_data[i];
    }
  } else {
    plus(sp, absolute, XY);
  }

  emxFree_real_T(sp, &XY);
  emxInit_boolean_T(sp, &b_test, &xd_emlrtRTEI);
  st.site = &yc_emlrtRSI;
  b_sqrt(&st, absolute);
  absolute_data = absolute->data;
  i = b_test->size[0];
  b_test->size[0] = absolute->size[0];
  emxEnsureCapacity_boolean_T(sp, b_test, i, &td_emlrtRTEI);
  b_test_data = b_test->data;
  loop_ub = absolute->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_test_data[i] = (absolute_data[i] < 1.0);
  }

  emxFree_real_T(sp, &absolute);
  st.site = &ad_emlrtRSI;
  b_st.site = &qg_emlrtRSI;
  c_st.site = &rg_emlrtRSI;
  d_st.site = &sg_emlrtRSI;
  if (b_test->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ye_emlrtRSI;
  input_sizes_idx_1 = b_test->size[0];
  f_st.site = &tg_emlrtRSI;
  empty_non_axis_sizes = b_test_data[0];
  g_st.site = &ug_emlrtRSI;
  if ((2 <= b_test->size[0]) && (b_test->size[0] > 2147483646)) {
    h_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }

  for (sizes_idx_0 = 2; sizes_idx_0 <= input_sizes_idx_1; sizes_idx_0++) {
    b = b_test_data[sizes_idx_0 - 1];
    empty_non_axis_sizes = (((int32_T)empty_non_axis_sizes <= (int32_T)b) &&
      empty_non_axis_sizes);
  }

  emxFree_boolean_T(&f_st, &b_test);
  if (!empty_non_axis_sizes) {
    i = mu_phi->size[0];
    mu_phi->size[0] = mu_phi0->size[0];
    emxEnsureCapacity_real_T(sp, mu_phi, i, &ud_emlrtRTEI);
    mu_phi_data = mu_phi->data;
    loop_ub = mu_phi0->size[0];
    for (i = 0; i < loop_ub; i++) {
      mu_phi_data[i] = mu_phi0_data[i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *precB0)
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
  emxInit_real_T(sp, &b_B1, 2, &fd_emlrtRTEI);
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

  emxEnsureCapacity_real_T(sp, b_B1, i, &fd_emlrtRTEI);
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

  st.site = &em_emlrtRSI;
  inv(&st, b_B1, B1);
  emxFree_real_T(sp, &b_B1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8])
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

static void b_plus(const emlrtStack *sp, emxArray_real_T *f_tt, const
                   emxArray_real_T *f_tl)
{
  emxArray_real_T *b_f_tl;
  const real_T *f_tl_data;
  real_T *b_f_tl_data;
  real_T *f_tt_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_tl_data = f_tl->data;
  f_tt_data = f_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_tl, 1, &mj_emlrtRTEI);
  i = b_f_tl->size[0];
  if (f_tt->size[0] == 1) {
    b_f_tl->size[0] = f_tl->size[0];
  } else {
    b_f_tl->size[0] = f_tt->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_f_tl, i, &mj_emlrtRTEI);
  b_f_tl_data = b_f_tl->data;
  stride_0_0 = (f_tl->size[0] != 1);
  stride_1_0 = (f_tt->size[0] != 1);
  if (f_tt->size[0] == 1) {
    loop_ub = f_tl->size[0];
  } else {
    loop_ub = f_tt->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_f_tl_data[i] = f_tl_data[i * stride_0_0] + f_tt_data[i * stride_1_0];
  }

  i = f_tt->size[0];
  f_tt->size[0] = b_f_tl->size[0];
  emxEnsureCapacity_real_T(sp, f_tt, i, &mj_emlrtRTEI);
  f_tt_data = f_tt->data;
  loop_ub = b_f_tl->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_tt_data[i] = b_f_tl_data[i];
  }

  emxFree_real_T(sp, &b_f_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo em_emlrtRSI,
  const emxArray_real_T *b_hat, const emxArray_real_T *mu_phi_hat, real_T
  sig2_hat, const emxArray_real_T *retf, const emxArray_real_T *precB0, const
  emxArray_real_T *Hm)
{
  emlrtStack st;
  emxArray_real_T *b_b_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r;
  const real_T *Hm_data;
  const real_T *b_hat_data;
  const real_T *mu_phi_hat_data;
  const real_T *precB0_data;
  const real_T *retf_data;
  real_T ln_joint_post;
  real_T *b_b_hat_data;
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
  Hm_data = Hm->data;
  precB0_data = precB0->data;
  retf_data = retf->data;
  mu_phi_hat_data = mu_phi_hat->data;
  b_hat_data = b_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b_hat, 1, &ic_emlrtRTEI);
  i = b_b_hat->size[0];
  b_b_hat->size[0] = (b_hat->size[0] + mu_phi_hat->size[0]) + 1;
  emxEnsureCapacity_real_T(sp, b_b_hat, i, &ic_emlrtRTEI);
  b_b_hat_data = b_b_hat->data;
  loop_ub = b_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = b_hat_data[i];
  }

  loop_ub = mu_phi_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i + b_hat->size[0]] = mu_phi_hat_data[i];
  }

  emxInit_real_T(sp, &b_retf, 1, &jc_emlrtRTEI);
  b_b_hat_data[b_hat->size[0] + mu_phi_hat->size[0]] = sig2_hat;
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &jc_emlrtRTEI);
  b_b_hat_data = b_retf->data;
  loop_ub = retf->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = retf_data[i];
  }

  emxInit_real_T(sp, &r, 2, &kc_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (Hm->size[1] == 1) {
    r->size[0] = precB0->size[0];
  } else {
    r->size[0] = Hm->size[1];
  }

  if (Hm->size[0] == 1) {
    r->size[1] = precB0->size[1];
  } else {
    r->size[1] = Hm->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &kc_emlrtRTEI);
  b_b_hat_data = r->data;
  stride_0_0 = (precB0->size[0] != 1);
  stride_0_1 = (precB0->size[1] != 1);
  stride_1_0 = (Hm->size[1] != 1);
  stride_1_1 = (Hm->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Hm->size[0] == 1) {
    loop_ub = precB0->size[1];
  } else {
    loop_ub = Hm->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    if (Hm->size[1] == 1) {
      b_loop_ub = precB0->size[0];
    } else {
      b_loop_ub = Hm->size[1];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_hat_data[i1 + r->size[0] * i] = 0.5 * (precB0_data[i1 * stride_0_0 +
        precB0->size[0] * aux_0_1] + Hm_data[aux_1_1 + Hm->size[0] * (i1 *
        stride_1_0)]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &em_emlrtRSI;
  ln_joint_post = b_lnpdfmvn(&st, b_b_hat, b_retf, r);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_b_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return ln_joint_post;
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *precb_)
{
  emlrtStack st;
  emxArray_real_T *b_precb_;
  const real_T *precb__data;
  real_T *XX_data;
  real_T *b_precb__data;
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
  precb__data = precb_->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_precb_, 2, &nd_emlrtRTEI);
  i = b_precb_->size[0] * b_precb_->size[1];
  if (XX->size[0] == 1) {
    b_precb_->size[0] = precb_->size[0];
  } else {
    b_precb_->size[0] = XX->size[0];
  }

  if (XX->size[1] == 1) {
    b_precb_->size[1] = precb_->size[1];
  } else {
    b_precb_->size[1] = XX->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_precb_, i, &nd_emlrtRTEI);
  b_precb__data = b_precb_->data;
  stride_0_0 = (precb_->size[0] != 1);
  stride_0_1 = (precb_->size[1] != 1);
  stride_1_0 = (XX->size[0] != 1);
  stride_1_1 = (XX->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (XX->size[1] == 1) {
    loop_ub = precb_->size[1];
  } else {
    loop_ub = XX->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (XX->size[0] == 1) {
      b_loop_ub = precb_->size[0];
    } else {
      b_loop_ub = XX->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_precb__data[i1 + b_precb_->size[0] * i] = precb__data[i1 * stride_0_0 +
        precb_->size[0] * aux_0_1] + XX_data[i1 * stride_1_0 + XX->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &em_emlrtRSI;
  invpd(&st, b_precb_, XX);
  emxFree_real_T(sp, &b_precb_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
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

static void c_minus(const emlrtStack *sp, emxArray_real_T *P_tl, const
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
  emxInit_real_T(sp, &b_P_tl, 2, &lj_emlrtRTEI);
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

  emxEnsureCapacity_real_T(sp, b_P_tl, i, &lj_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, P_tl, i, &lj_emlrtRTEI);
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

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [14])
{
  static const int32_T iv[2] = { 1, 14 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 14, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void d_minus(const emlrtStack *sp, emxArray_real_T *f_tl, const
                    emxArray_real_T *likelihood)
{
  emxArray_real_T *b_f_tl;
  const real_T *likelihood_data;
  real_T *b_f_tl_data;
  real_T *f_tl_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  likelihood_data = likelihood->data;
  f_tl_data = f_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_tl, 1, &vi_emlrtRTEI);
  i = b_f_tl->size[0];
  if (likelihood->size[0] == 1) {
    b_f_tl->size[0] = f_tl->size[0];
  } else {
    b_f_tl->size[0] = likelihood->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_f_tl, i, &vi_emlrtRTEI);
  b_f_tl_data = b_f_tl->data;
  stride_0_0 = (f_tl->size[0] != 1);
  stride_1_0 = (likelihood->size[0] != 1);
  if (likelihood->size[0] == 1) {
    loop_ub = f_tl->size[0];
  } else {
    loop_ub = likelihood->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_f_tl_data[i] = f_tl_data[i * stride_0_0] - likelihood_data[i * stride_1_0];
  }

  i = f_tl->size[0];
  f_tl->size[0] = b_f_tl->size[0];
  emxEnsureCapacity_real_T(sp, f_tl, i, &vi_emlrtRTEI);
  f_tl_data = f_tl->data;
  loop_ub = b_f_tl->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_tl_data[i] = b_f_tl_data[i];
  }

  emxFree_real_T(sp, &b_f_tl);
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

static const mxArray *e_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[37])
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

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
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

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *P_tl,
  const emxArray_real_T *result)
{
  emxArray_real_T *b_P_tl;
  const real_T *result_data;
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
  result_data = result->data;
  P_tl_data = P_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_tl, 2, &hj_emlrtRTEI);
  i = b_P_tl->size[0] * b_P_tl->size[1];
  if (result->size[0] == 1) {
    b_P_tl->size[0] = P_tl->size[0];
  } else {
    b_P_tl->size[0] = result->size[0];
  }

  if (result->size[1] == 1) {
    b_P_tl->size[1] = P_tl->size[1];
  } else {
    b_P_tl->size[1] = result->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_P_tl, i, &hj_emlrtRTEI);
  b_P_tl_data = b_P_tl->data;
  stride_0_0 = (P_tl->size[0] != 1);
  stride_0_1 = (P_tl->size[1] != 1);
  stride_1_0 = (result->size[0] != 1);
  stride_1_1 = (result->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (result->size[1] == 1) {
    loop_ub = P_tl->size[1];
  } else {
    loop_ub = result->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (result->size[0] == 1) {
      b_loop_ub = P_tl->size[0];
    } else {
      b_loop_ub = result->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_P_tl_data[i1 + b_P_tl->size[0] * i] = P_tl_data[i1 * stride_0_0 +
        P_tl->size[0] * aux_0_1] + result_data[i1 * stride_1_0 + result->size[0]
        * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = b_P_tl->size[0];
  P_tl->size[1] = b_P_tl->size[1];
  emxEnsureCapacity_real_T(sp, P_tl, i, &hj_emlrtRTEI);
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

static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  const emxArray_real_T *Kalgain, int32_T p)
{
  emxArray_real_T *b_Kalgain;
  const real_T *Kalgain_data;
  real_T *b_Kalgain_data;
  real_T *cP_tt_data;
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
  Kalgain_data = Kalgain->data;
  cP_tt_data = cP_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Kalgain, 2, &nj_emlrtRTEI);
  i = b_Kalgain->size[0] * b_Kalgain->size[1];
  if (cP_tt->size[0] == 1) {
    b_Kalgain->size[0] = p;
  } else {
    b_Kalgain->size[0] = cP_tt->size[0];
  }

  if (cP_tt->size[1] == 1) {
    b_Kalgain->size[1] = p;
  } else {
    b_Kalgain->size[1] = cP_tt->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_Kalgain, i, &nj_emlrtRTEI);
  b_Kalgain_data = b_Kalgain->data;
  stride_0_0 = (p != 1);
  stride_0_1 = (p != 1);
  stride_1_0 = (cP_tt->size[0] != 1);
  stride_1_1 = (cP_tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (cP_tt->size[1] == 1) {
    loop_ub = p;
  } else {
    loop_ub = cP_tt->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (cP_tt->size[0] == 1) {
      b_loop_ub = p;
    } else {
      b_loop_ub = cP_tt->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Kalgain_data[i1 + b_Kalgain->size[0] * i] = Kalgain_data[i1 * stride_0_0
        + p * aux_0_1] - cP_tt_data[i1 * stride_1_0 + cP_tt->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = cP_tt->size[0] * cP_tt->size[1];
  cP_tt->size[0] = b_Kalgain->size[0];
  cP_tt->size[1] = b_Kalgain->size[1];
  emxEnsureCapacity_real_T(sp, cP_tt, i, &nj_emlrtRTEI);
  cP_tt_data = cP_tt->data;
  loop_ub = b_Kalgain->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Kalgain->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      cP_tt_data[i1 + cP_tt->size[0] * i] = b_Kalgain_data[i1 + b_Kalgain->size
        [0] * i];
    }
  }

  emxFree_real_T(sp, &b_Kalgain);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tl,
  const emxArray_real_T *Fm, int32_T t, const emxArray_real_T *C)
{
  const real_T *C_data;
  const real_T *Fm_data;
  real_T *f_tl_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  C_data = C->data;
  Fm_data = Fm->data;
  i = Fm->size[1];
  stride_0_0 = f_tl->size[0];
  if (C->size[0] == 1) {
    f_tl->size[0] = i;
  } else {
    f_tl->size[0] = C->size[0];
  }

  emxEnsureCapacity_real_T(sp, f_tl, stride_0_0, &vi_emlrtRTEI);
  f_tl_data = f_tl->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (C->size[0] != 1);
  if (C->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = C->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    f_tl_data[i] = Fm_data[t + Fm->size[0] * (i * stride_0_0)] - C_data[i *
      stride_1_0];
  }
}

static const mxArray *l_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  return y;
}

static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *PGG)
{
  emlrtStack st;
  emxArray_real_T *b_cP_tt;
  const real_T *PGG_data;
  real_T *b_cP_tt_data;
  real_T *cP_tt_data;
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
  PGG_data = PGG->data;
  cP_tt_data = cP_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_cP_tt, 2, &ei_emlrtRTEI);
  i = b_cP_tt->size[0] * b_cP_tt->size[1];
  if (PGG->size[0] == 1) {
    b_cP_tt->size[0] = cP_tt->size[0];
  } else {
    b_cP_tt->size[0] = PGG->size[0];
  }

  if (PGG->size[1] == 1) {
    b_cP_tt->size[1] = cP_tt->size[1];
  } else {
    b_cP_tt->size[1] = PGG->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_cP_tt, i, &ei_emlrtRTEI);
  b_cP_tt_data = b_cP_tt->data;
  stride_0_0 = (cP_tt->size[0] != 1);
  stride_0_1 = (cP_tt->size[1] != 1);
  stride_1_0 = (PGG->size[0] != 1);
  stride_1_1 = (PGG->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (PGG->size[1] == 1) {
    loop_ub = cP_tt->size[1];
  } else {
    loop_ub = PGG->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (PGG->size[0] == 1) {
      b_loop_ub = cP_tt->size[0];
    } else {
      b_loop_ub = PGG->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_cP_tt_data[i1 + b_cP_tt->size[0] * i] = cP_tt_data[i1 * stride_0_0 +
        cP_tt->size[0] * aux_0_1] - PGG_data[i1 * stride_1_0 + PGG->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &em_emlrtRSI;
  inv(&st, b_cP_tt, cP_tt);
  emxFree_real_T(sp, &b_cP_tt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void minus(const emlrtStack *sp, emxArray_real_T *vol, const
                  emxArray_real_T *ym)
{
  emxArray_real_T *b_ym;
  const real_T *ym_data;
  real_T *b_ym_data;
  real_T *vol_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  ym_data = ym->data;
  vol_data = vol->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_ym, 1, &fc_emlrtRTEI);
  i = b_ym->size[0];
  if (vol->size[0] == 1) {
    b_ym->size[0] = ym->size[0];
  } else {
    b_ym->size[0] = vol->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_ym, i, &fc_emlrtRTEI);
  b_ym_data = b_ym->data;
  stride_0_0 = (ym->size[0] != 1);
  stride_1_0 = (vol->size[0] != 1);
  if (vol->size[0] == 1) {
    loop_ub = ym->size[0];
  } else {
    loop_ub = vol->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_ym_data[i] = ym_data[i * stride_0_0] - vol_data[i * stride_1_0];
  }

  i = vol->size[0];
  vol->size[0] = b_ym->size[0];
  emxEnsureCapacity_real_T(sp, vol, i, &fc_emlrtRTEI);
  vol_data = vol->data;
  loop_ub = b_ym->size[0];
  for (i = 0; i < loop_ub; i++) {
    vol_data[i] = b_ym_data[i];
  }

  emxFree_real_T(sp, &b_ym);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *Phi)
{
  emlrtStack st;
  emxArray_real_T *b_cP_tt;
  const real_T *Phi_data;
  real_T *b_cP_tt_data;
  real_T *cP_tt_data;
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
  Phi_data = Phi->data;
  cP_tt_data = cP_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_cP_tt, 2, &di_emlrtRTEI);
  i = b_cP_tt->size[0] * b_cP_tt->size[1];
  if (Phi->size[0] == 1) {
    b_cP_tt->size[0] = cP_tt->size[0];
  } else {
    b_cP_tt->size[0] = Phi->size[0];
  }

  if (Phi->size[1] == 1) {
    b_cP_tt->size[1] = cP_tt->size[1];
  } else {
    b_cP_tt->size[1] = Phi->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_cP_tt, i, &di_emlrtRTEI);
  b_cP_tt_data = b_cP_tt->data;
  stride_0_0 = (cP_tt->size[0] != 1);
  stride_0_1 = (cP_tt->size[1] != 1);
  stride_1_0 = (Phi->size[0] != 1);
  stride_1_1 = (Phi->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Phi->size[1] == 1) {
    loop_ub = cP_tt->size[1];
  } else {
    loop_ub = Phi->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (Phi->size[0] == 1) {
      b_loop_ub = cP_tt->size[0];
    } else {
      b_loop_ub = Phi->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_cP_tt_data[i1 + b_cP_tt->size[0] * i] = cP_tt_data[i1 * stride_0_0 +
        cP_tt->size[0] * aux_0_1] - Phi_data[i1 * stride_1_0 + Phi->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &em_emlrtRSI;
  inv(&st, b_cP_tt, cP_tt);
  emxFree_real_T(sp, &b_cP_tt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *beta, const
                 emxArray_real_T *r1)
{
  emxArray_real_T *b_beta;
  const real_T *r;
  real_T *b_beta_data;
  real_T *beta_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  beta_data = beta->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta, 1, &jj_emlrtRTEI);
  i = b_beta->size[0];
  if (r1->size[0] == 1) {
    b_beta->size[0] = beta->size[0];
  } else {
    b_beta->size[0] = r1->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_beta, i, &jj_emlrtRTEI);
  b_beta_data = b_beta->data;
  stride_0_0 = (beta->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = beta->size[0];
  } else {
    loop_ub = r1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_beta_data[i] = beta_data[i * stride_0_0] + r[i * stride_1_0];
  }

  i = beta->size[0];
  beta->size[0] = b_beta->size[0];
  emxEnsureCapacity_real_T(sp, beta, i, &jj_emlrtRTEI);
  beta_data = beta->data;
  loop_ub = b_beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = b_beta_data[i];
  }

  emxFree_real_T(sp, &b_beta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void times(const emlrtStack *sp, emxArray_real_T *ysm, const
                  emxArray_real_T *vol)
{
  emxArray_real_T *b_ysm;
  const real_T *vol_data;
  real_T *b_ysm_data;
  real_T *ysm_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  vol_data = vol->data;
  ysm_data = ysm->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_ysm, 1, &ij_emlrtRTEI);
  i = b_ysm->size[0];
  if (vol->size[0] == 1) {
    b_ysm->size[0] = ysm->size[0];
  } else {
    b_ysm->size[0] = vol->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_ysm, i, &ij_emlrtRTEI);
  b_ysm_data = b_ysm->data;
  stride_0_0 = (ysm->size[0] != 1);
  stride_1_0 = (vol->size[0] != 1);
  if (vol->size[0] == 1) {
    loop_ub = ysm->size[0];
  } else {
    loop_ub = vol->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_ysm_data[i] = ysm_data[i * stride_0_0] * vol_data[i * stride_1_0];
  }

  i = ysm->size[0];
  ysm->size[0] = b_ysm->size[0];
  emxEnsureCapacity_real_T(sp, ysm, i, &ij_emlrtRTEI);
  ysm_data = ysm->data;
  loop_ub = b_ysm->size[0];
  for (i = 0; i < loop_ub; i++) {
    ysm_data[i] = b_ysm_data[i];
  }

  emxFree_real_T(sp, &b_ysm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Stochastic_Volatility(const emlrtStack *sp, const emxArray_real_T *ym,
  const emxArray_real_T *X, real_T n0, real_T n1, const emxArray_real_T *beta0,
  const emxArray_real_T *B0, const emxArray_real_T *gamma0, const
  emxArray_real_T *Gamma0, real_T v0, real_T d0, char_T forecast, const
  emxArray_real_T *x_f, char_T ML, real_T d, struct0_T *Output)
{
  static const char_T b_cv[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  static const char_T cv3[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  static const char_T cv5[14] = { '[', 'm', 'u', ' ', 'a', 'n', 'd', ' ', 'p',
    'h', 'i', ':', ' ', ']' };

  static const char_T cv4[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  static const char_T cv6[8] = { '[', 's', 'i', 'g', '2', ':', ' ', ']' };

  static const char_T cv2[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *Hm;
  emxArray_real_T *Volm;
  emxArray_real_T *b;
  emxArray_real_T *b_X;
  emxArray_real_T *b_hat;
  emxArray_real_T *hm;
  emxArray_real_T *mu_phi;
  emxArray_real_T *mu_phi_hat;
  emxArray_real_T *precB0;
  emxArray_real_T *precb_;
  emxArray_real_T *retf;
  emxArray_real_T *vol;
  emxArray_real_T *ysm;
  const real_T *X_data;
  const real_T *beta0_data;
  const real_T *gamma0_data;
  const real_T *ym_data;
  real_T alpha;
  real_T b_d;
  real_T b_prior;
  real_T beta;
  real_T lnpost_hat;
  real_T loglikelihood;
  real_T mu_phi_prior;
  real_T n;
  real_T sig2;
  real_T sig2_hat;
  real_T sig2_inv;
  real_T *Hm_data;
  real_T *Volm_data;
  real_T *b_data;
  real_T *b_hat_data;
  real_T *hm_data;
  real_T *mu_phi_data;
  real_T *mu_phi_hat_data;
  real_T *vol_data;
  real_T *ysm_data;
  int32_T c_Output[2];
  int32_T result[2];
  int32_T b_Output;
  int32_T b_loop_ub_tmp;
  int32_T d_Output;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T input_sizes_idx_1;
  int32_T isForecast;
  int32_T loop_ub_tmp;
  int32_T sizes_idx_1;
  char_T cv1[37];
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  gamma0_data = gamma0->data;
  beta0_data = beta0->data;
  X_data = X->data;
  ym_data = ym->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  n = n0 + n1;
  if (forecast == 'Y') {
    isForecast = 1;

    /*   예측하기 */
  } else {
    isForecast = 0;

    /*  예측 안하기 */
  }

  emxInit_real_T(sp, &mu_phi, 1, &hb_emlrtRTEI);

  /*  초기값 설정하기 */
  i = mu_phi->size[0];
  mu_phi->size[0] = gamma0->size[0];
  emxEnsureCapacity_real_T(sp, mu_phi, i, &hb_emlrtRTEI);
  mu_phi_data = mu_phi->data;
  input_sizes_idx_1 = gamma0->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    mu_phi_data[i] = gamma0_data[i];
  }

  emxInit_real_T(sp, &precb_, 2, &nc_emlrtRTEI);
  emxInit_real_T(sp, &precB0, 2, &oc_emlrtRTEI);
  emxInit_real_T(sp, &b, 1, &ib_emlrtRTEI);
  sig2 = d0 / v0;
  sig2_inv = 1.0 / sig2;
  st.site = &emlrtRSI;
  inv(&st, Gamma0, precb_);
  st.site = &b_emlrtRSI;
  inv(&st, B0, precB0);
  i = b->size[0];
  b->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, b, i, &ib_emlrtRTEI);
  b_data = b->data;
  input_sizes_idx_1 = beta0->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    b_data[i] = beta0_data[i];
  }

  emxInit_real_T(sp, &hm, 1, &pc_emlrtRTEI);
  st.site = &c_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, X, beta0, X->size[1], beta0->size[0]);
  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, X, beta0, hm);
  if ((ym->size[0] != hm->size[0]) && ((ym->size[0] != 1) && (hm->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(ym->size[0], hm->size[0], &l_emlrtECI, (emlrtCTX)
      sp);
  }

  emxInit_real_T(sp, &vol, 1, &lb_emlrtRTEI);
  st.site = &c_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  dynamic_size_checks(&b_st, X, beta0, X->size[1], beta0->size[0]);
  b_st.site = &rb_emlrtRSI;
  mtimes(&b_st, X, beta0, vol);
  if ((ym->size[0] != vol->size[0]) && ((ym->size[0] != 1) && (vol->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(ym->size[0], vol->size[0], &k_emlrtECI,
      (emlrtCTX)sp);
  }

  if (ym->size[0] == hm->size[0]) {
    i = hm->size[0];
    hm->size[0] = ym->size[0];
    emxEnsureCapacity_real_T(sp, hm, i, &jb_emlrtRTEI);
    hm_data = hm->data;
    input_sizes_idx_1 = ym->size[0];
    for (i = 0; i < input_sizes_idx_1; i++) {
      hm_data[i] = ym_data[i] - hm_data[i];
    }
  } else {
    st.site = &c_emlrtRSI;
    minus(&st, hm, ym);
    hm_data = hm->data;
  }

  if (ym->size[0] == vol->size[0]) {
    i = vol->size[0];
    vol->size[0] = ym->size[0];
    emxEnsureCapacity_real_T(sp, vol, i, &kb_emlrtRTEI);
    vol_data = vol->data;
    input_sizes_idx_1 = ym->size[0];
    for (i = 0; i < input_sizes_idx_1; i++) {
      vol_data[i] = ym_data[i] - vol_data[i];
    }
  } else {
    st.site = &c_emlrtRSI;
    minus(&st, vol, ym);
    vol_data = vol->data;
  }

  if ((hm->size[0] != vol->size[0]) && ((hm->size[0] != 1) && (vol->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(hm->size[0], vol->size[0], &j_emlrtECI,
      (emlrtCTX)sp);
  }

  if (hm->size[0] == vol->size[0]) {
    input_sizes_idx_1 = hm->size[0];
    for (i = 0; i < input_sizes_idx_1; i++) {
      hm_data[i] *= vol_data[i];
    }
  } else {
    times(sp, hm, vol);
  }

  st.site = &c_emlrtRSI;
  b_log(&st, hm);
  hm_data = hm->data;
  i = vol->size[0];
  vol->size[0] = hm->size[0];
  emxEnsureCapacity_real_T(sp, vol, i, &lb_emlrtRTEI);
  vol_data = vol->data;
  input_sizes_idx_1 = hm->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    vol_data[i] = hm_data[i] / 2.0;
  }

  st.site = &d_emlrtRSI;
  b_exp(&st, vol);

  /*  normal mixture를 이용한 log(Chi-square(1))의 approximation */
  /*  각각의 정규분포가 선택될 확률 */
  /*  선택된 정규분포의 평균 */
  /*  선택된 정규분포의 분산 */
  /*  MCMC output을 저장할 방 */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }

  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = (int32_T)n;
  Output->betam->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &mb_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub_tmp = (int32_T)n;
  i1 = Output->Sig2m->size[0];
  Output->Sig2m->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Sig2m, i1, &nb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Output->Sig2m->data[i1] = 0.0;
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &g_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->gammam->size[0] * Output->gammam->size[1];
  Output->gammam->size[0] = loop_ub_tmp;
  Output->gammam->size[1] = gamma0->size[0];
  emxEnsureCapacity_real_T(sp, Output->gammam, i1, &ob_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, (emlrtCTX)sp);
  }

  input_sizes_idx_1 = loop_ub_tmp * gamma0->size[0];
  for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
    Output->gammam->data[i1] = 0.0;
  }

  /*  오차항의 exp항 */
  /*  logLik = zeros(n,1); */
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Yfm->size[0];
  Output->Yfm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Yfm, i1, &pb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    Output->Yfm->data[i] = 0.0;
  }

  emxInit_real_T(sp, &b_hat, 1, &qb_emlrtRTEI);

  /*  PredLikm = zeros(n,1); */
  i = b_hat->size[0];
  b_hat->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, b_hat, i, &qb_emlrtRTEI);
  b_hat_data = b_hat->data;
  input_sizes_idx_1 = beta0->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    b_hat_data[i] = beta0_data[i];
  }

  emxInit_real_T(sp, &mu_phi_hat, 1, &rb_emlrtRTEI);
  i = mu_phi_hat->size[0];
  mu_phi_hat->size[0] = gamma0->size[0];
  emxEnsureCapacity_real_T(sp, mu_phi_hat, i, &rb_emlrtRTEI);
  mu_phi_hat_data = mu_phi_hat->data;
  input_sizes_idx_1 = gamma0->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    mu_phi_hat_data[i] = gamma0_data[i];
  }

  emxInit_real_T(sp, &Hm, 2, &qc_emlrtRTEI);
  emxInit_real_T(sp, &Volm, 2, &rc_emlrtRTEI);
  sig2_hat = sig2;
  lnpost_hat = -4.8516519540979028E+8;

  /*  임의로 값을 주고 시작함 */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &b_emlrtRTEI, (emlrtCTX)sp);
  i = Hm->size[0] * Hm->size[1];
  Hm->size[0] = loop_ub_tmp;
  Hm->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, Hm, i, &mb_emlrtRTEI);
  Hm_data = Hm->data;
  i = Volm->size[0] * Volm->size[1];
  Volm->size[0] = loop_ub_tmp;
  Volm->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, Volm, i, &mb_emlrtRTEI);
  Volm_data = Volm->data;
  emxInit_real_T(sp, &ysm, 1, &sc_emlrtRTEI);
  emxInit_real_T(sp, &retf, 2, &tc_emlrtRTEI);
  emxInit_real_T(sp, &b_X, 2, &tb_emlrtRTEI);
  for (sizes_idx_1 = 0; sizes_idx_1 < loop_ub_tmp; sizes_idx_1++) {
    /*  report intermediate results */
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((sizes_idx_1 - (int32_T)muDoubleScalarFloor(((real_T)sizes_idx_1 + 1.0) /
          100.0) * 100) + 1 == 0) {
      st.site = &tl_emlrtRSI;
      clc(&st, &d_emlrtMCI);
      for (i = 0; i < 37; i++) {
        cv1[i] = '=';
      }

      st.site = &dl_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, cv1), &e_emlrtMCI);
      st.site = &e_emlrtRSI;
      b_st.site = &yb_emlrtRSI;
      c_st.site = &il_emlrtRSI;
      d_st.site = &jl_emlrtRSI;
      c_emlrt_marshallIn(&c_st, d_feval(&c_st, g_emlrt_marshallOut(&c_st, cv2),
        e_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, cv3),
        e_emlrt_marshallOut((real_T)sizes_idx_1 + 1.0), &q_emlrtMCI),
                         "<output of feval>");
      for (i = 0; i < 37; i++) {
        cv1[i] = '=';
      }

      st.site = &cl_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, cv1), &f_emlrtMCI);
      st.site = &sl_emlrtRSI;
      disp(&st, l_emlrt_marshallOut(), &g_emlrtMCI);
      st.site = &fl_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv4), &h_emlrtMCI);
      i = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      input_sizes_idx_1 = b->size[0];
      retf->size[1] = b->size[0];
      emxEnsureCapacity_real_T(sp, retf, i, &wb_emlrtRTEI);
      hm_data = retf->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        hm_data[i] = b_data[i];
      }

      st.site = &rl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(retf), &i_emlrtMCI);
      st.site = &gl_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(&st, cv5), &j_emlrtMCI);
      i = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      input_sizes_idx_1 = mu_phi->size[0];
      retf->size[1] = mu_phi->size[0];
      emxEnsureCapacity_real_T(sp, retf, i, &yb_emlrtRTEI);
      hm_data = retf->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        hm_data[i] = mu_phi_data[i];
      }

      st.site = &ql_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(retf), &k_emlrtMCI);
      st.site = &el_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv6), &l_emlrtMCI);
      st.site = &pl_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(sig2), &m_emlrtMCI);
    }

    /*   Step 0 : beta sampling */
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = X->size[0];
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, b_X, i, &tb_emlrtRTEI);
    hm_data = b_X->data;
    input_sizes_idx_1 = X->size[0] * X->size[1] - 1;
    for (i = 0; i <= input_sizes_idx_1; i++) {
      hm_data[i] = X_data[i];
    }

    i = ysm->size[0];
    ysm->size[0] = ym->size[0];
    emxEnsureCapacity_real_T(sp, ysm, i, &ub_emlrtRTEI);
    ysm_data = ysm->data;
    input_sizes_idx_1 = ym->size[0] - 1;
    for (i = 0; i <= input_sizes_idx_1; i++) {
      ysm_data[i] = ym_data[i];
    }

    st.site = &f_emlrtRSI;
    Gen_beta(&st, b_X, ysm, beta0, precB0, vol, b);
    b_data = b->data;
    if (sizes_idx_1 + 1 > Output->betam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, Output->betam->size[0],
        &k_emlrtBCI, (emlrtCTX)sp);
    }

    c_Output[0] = 1;
    c_Output[1] = Output->betam->size[1];
    result[0] = 1;
    input_sizes_idx_1 = b->size[0];
    result[1] = b->size[0];
    emlrtSubAssignSizeCheckR2012b(&c_Output[0], 2, &result[0], 2, &e_emlrtECI,
      (emlrtCTX)sp);
    for (i = 0; i < input_sizes_idx_1; i++) {
      Output->betam->data[sizes_idx_1 + Output->betam->size[0] * i] = b_data[i];
    }

    /*   Step 1 : mu와 phi sammpling */
    i = ysm->size[0];
    ysm->size[0] = mu_phi->size[0];
    emxEnsureCapacity_real_T(sp, ysm, i, &bc_emlrtRTEI);
    ysm_data = ysm->data;
    input_sizes_idx_1 = mu_phi->size[0] - 1;
    for (i = 0; i <= input_sizes_idx_1; i++) {
      ysm_data[i] = mu_phi_data[i];
    }

    st.site = &g_emlrtRSI;
    Gen_mu_phi(&st, hm, gamma0, precb_, sig2_inv, ysm, mu_phi, b_X, vol);
    mu_phi_data = mu_phi->data;
    if (sizes_idx_1 + 1 > Output->gammam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, Output->gammam->size[0],
        &p_emlrtBCI, (emlrtCTX)sp);
    }

    c_Output[0] = 1;
    c_Output[1] = Output->gammam->size[1];
    result[0] = 1;
    input_sizes_idx_1 = mu_phi->size[0];
    result[1] = mu_phi->size[0];
    emlrtSubAssignSizeCheckR2012b(&c_Output[0], 2, &result[0], 2, &f_emlrtECI,
      (emlrtCTX)sp);
    for (i = 0; i < input_sizes_idx_1; i++) {
      Output->gammam->data[sizes_idx_1 + Output->gammam->size[0] * i] =
        mu_phi_data[i];
    }

    /*  mu와 phi 저장하기 */
    /*   Step 2 : ht의 조건부 분산 */
    st.site = &h_emlrtRSI;
    Gen_Sigma(&st, b_X, vol, v0, d0, mu_phi, d, &sig2_inv, &sig2);
    if ((int32_T)(sizes_idx_1 + 1U) > Output->Sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sizes_idx_1 + 1U), 1,
        Output->Sig2m->size[0], &q_emlrtBCI, (emlrtCTX)sp);
    }

    Output->Sig2m->data[sizes_idx_1] = sig2;
    st.site = &i_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    dynamic_size_checks(&b_st, X, b, X->size[1], b->size[0]);
    b_st.site = &rb_emlrtRSI;
    mtimes(&b_st, X, b, ysm);
    if ((ym->size[0] != ysm->size[0]) && ((ym->size[0] != 1) && (ysm->size[0] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(ym->size[0], ysm->size[0], &i_emlrtECI,
        (emlrtCTX)sp);
    }

    st.site = &i_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    dynamic_size_checks(&b_st, X, b, X->size[1], b->size[0]);
    b_st.site = &rb_emlrtRSI;
    mtimes(&b_st, X, b, vol);
    if ((ym->size[0] != vol->size[0]) && ((ym->size[0] != 1) && (vol->size[0] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(ym->size[0], vol->size[0], &h_emlrtECI,
        (emlrtCTX)sp);
    }

    if (ym->size[0] == ysm->size[0]) {
      i = ysm->size[0];
      ysm->size[0] = ym->size[0];
      emxEnsureCapacity_real_T(sp, ysm, i, &ec_emlrtRTEI);
      ysm_data = ysm->data;
      input_sizes_idx_1 = ym->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        ysm_data[i] = ym_data[i] - ysm_data[i];
      }
    } else {
      st.site = &i_emlrtRSI;
      minus(&st, ysm, ym);
      ysm_data = ysm->data;
    }

    if (ym->size[0] == vol->size[0]) {
      i = vol->size[0];
      vol->size[0] = ym->size[0];
      emxEnsureCapacity_real_T(sp, vol, i, &fc_emlrtRTEI);
      vol_data = vol->data;
      input_sizes_idx_1 = ym->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        vol_data[i] = ym_data[i] - vol_data[i];
      }
    } else {
      st.site = &i_emlrtRSI;
      minus(&st, vol, ym);
      vol_data = vol->data;
    }

    if ((ysm->size[0] != vol->size[0]) && ((ysm->size[0] != 1) && (vol->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(ysm->size[0], vol->size[0], &g_emlrtECI,
        (emlrtCTX)sp);
    }

    if (ysm->size[0] == vol->size[0]) {
      input_sizes_idx_1 = ysm->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        ysm_data[i] *= vol_data[i];
      }
    } else {
      times(sp, ysm, vol);
    }

    st.site = &i_emlrtRSI;
    b_log(&st, ysm);

    /*  변형된 종속변수 */
    /*   Step 3 : Sampling sm */
    st.site = &j_emlrtRSI;
    Gen_Sm(&st, ysm, hm, vol);

    /*   Step 4 : Sampling hm */
    st.site = &k_emlrtRSI;
    Gen_Fm(&st, ysm, mu_phi, sig2, vol, hm, &loglikelihood);
    hm_data = hm->data;
    if (sizes_idx_1 + 1 > Hm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, Hm->size[0], &h_emlrtBCI,
        (emlrtCTX)sp);
    }

    c_Output[0] = 1;
    c_Output[1] = Hm->size[1];
    result[0] = 1;
    result[1] = hm->size[0];
    emlrtSubAssignSizeCheckR2012b(&c_Output[0], 2, &result[0], 2, &d_emlrtECI,
      (emlrtCTX)sp);
    input_sizes_idx_1 = hm->size[0];

    /*      logLik(iter,:) = loglikelihood; */
    i = vol->size[0];
    vol->size[0] = hm->size[0];
    emxEnsureCapacity_real_T(sp, vol, i, &hc_emlrtRTEI);
    vol_data = vol->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      Hm_data[sizes_idx_1 + Hm->size[0] * i] = hm_data[i];
      vol_data[i] = hm_data[i] / 2.0;
    }

    st.site = &l_emlrtRSI;
    b_exp(&st, vol);
    vol_data = vol->data;

    /*  volatility */
    if (sizes_idx_1 + 1 > Volm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, Volm->size[0],
        &c_emlrtBCI, (emlrtCTX)sp);
    }

    c_Output[0] = 1;
    c_Output[1] = Volm->size[1];
    result[0] = 1;
    result[1] = vol->size[0];
    emlrtSubAssignSizeCheckR2012b(&c_Output[0], 2, &result[0], 2, &c_emlrtECI,
      (emlrtCTX)sp);
    input_sizes_idx_1 = vol->size[0];
    for (i = 0; i < input_sizes_idx_1; i++) {
      Volm_data[sizes_idx_1 + Volm->size[0] * i] = vol_data[i];
    }

    /*  volatility 저정하기 */
    if (isForecast == 1) {
      /*   예측 */
      if ((int32_T)(sizes_idx_1 + 1U) > Output->Yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(sizes_idx_1 + 1U), 1,
          Output->Yfm->size[0], &r_emlrtBCI, (emlrtCTX)sp);
      }

      st.site = &m_emlrtRSI;
      Gen_Forecast(&st, x_f, b, mu_phi, sig2, ym, hm, &Output->Yfm->
                   data[sizes_idx_1], &b_prior);

      /*          PredLikm(iter) = exp(lnpredlik); */
    }

    if ((ML == 'Y') && ((real_T)sizes_idx_1 + 1.0 > n0)) {
      st.site = &n_emlrtRSI;
      b_prior = b_lnpdfmvn(&st, b, beta0, B0);
      st.site = &o_emlrtRSI;
      mu_phi_prior = b_lnpdfmvn(&st, mu_phi, gamma0, Gamma0);
      st.site = &p_emlrtRSI;
      alpha = v0 / 2.0;
      beta = d0 / 2.0;

      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &jk_emlrtRSI;
      if (beta < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      b_d = alpha;
      b_st.site = &jk_emlrtRSI;
      gammaln(&b_st, &b_d);
      b_st.site = &kk_emlrtRSI;
      if (sig2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      b_prior = loglikelihood + ((b_prior + mu_phi_prior) + (((alpha *
        muDoubleScalarLog(beta) - b_d) - (alpha + 1.0) * muDoubleScalarLog(sig2))
        - beta / sig2));
      if (b_prior > lnpost_hat) {
        input_sizes_idx_1 = b->size[0];
        i = b_hat->size[0];
        b_hat->size[0] = b->size[0];
        emxEnsureCapacity_real_T(sp, b_hat, i, &lc_emlrtRTEI);
        b_hat_data = b_hat->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          b_hat_data[i] = b_data[i];
        }

        input_sizes_idx_1 = mu_phi->size[0];
        i = mu_phi_hat->size[0];
        mu_phi_hat->size[0] = mu_phi->size[0];
        emxEnsureCapacity_real_T(sp, mu_phi_hat, i, &mc_emlrtRTEI);
        mu_phi_hat_data = mu_phi_hat->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          mu_phi_hat_data[i] = mu_phi_data[i];
        }

        sig2_hat = sig2;
        lnpost_hat = b_prior;

        /*  최빈값 후보의 사후 커널값 */
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_X);
  emxFree_real_T(sp, &ysm);
  emxFree_real_T(sp, &vol);
  emxFree_real_T(sp, &hm);
  st.site = &ol_emlrtRSI;
  disp(&st, l_emlrt_marshallOut(), &emlrtMCI);
  st.site = &hl_emlrtRSI;
  disp(&st, f_emlrt_marshallOut(&st, b_cv), &b_emlrtMCI);
  st.site = &nl_emlrtRSI;
  disp(&st, l_emlrt_marshallOut(), &c_emlrtMCI);

  /*  Summary of Output */
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &f_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->gammam->
         size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->gammam->
        size[0], &o_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->gammam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->gammam->size[0],
        &n_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp - 1;
  }

  b_Output = Output->gammam->size[1] - 1;
  for (i2 = 0; i2 <= b_Output; i2++) {
    b_loop_ub_tmp = i1 - i;
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < b_loop_ub_tmp;
         input_sizes_idx_1++) {
      Output->gammam->data[input_sizes_idx_1 + b_loop_ub_tmp * i2] =
        Output->gammam->data[((i + input_sizes_idx_1) + Output->gammam->size[0] *
        i2) + 1];
    }
  }

  i2 = Output->gammam->size[0] * Output->gammam->size[1];
  Output->gammam->size[0] = i1 - i;
  Output->gammam->size[1] = b_Output + 1;
  emxEnsureCapacity_real_T(sp, Output->gammam, i2, &sb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->Sig2m->size
         [0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->Sig2m->size
        [0], &m_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Output->Sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Sig2m->size[0],
        &l_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp;
  }

  b_loop_ub_tmp = i1 - i;
  for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
    Output->Sig2m->data[i1] = Output->Sig2m->data[i + i1];
  }

  i = Output->Sig2m->size[0];
  Output->Sig2m->size[0] = b_loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Sig2m, i, &vb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->betam->size
         [0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->betam->size
        [0], &j_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->betam->size[0],
        &i_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)n - 1;
  }

  d_Output = Output->betam->size[1] - 1;
  for (i2 = 0; i2 <= d_Output; i2++) {
    sizes_idx_1 = i1 - i;
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < sizes_idx_1;
         input_sizes_idx_1++) {
      Output->betam->data[input_sizes_idx_1 + sizes_idx_1 * i2] = Output->
        betam->data[((i + input_sizes_idx_1) + Output->betam->size[0] * i2) + 1];
    }
  }

  i2 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = i1 - i;
  Output->betam->size[1] = d_Output + 1;
  emxEnsureCapacity_real_T(sp, Output->betam, i2, &xb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Hm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Hm->size[0],
        &g_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Hm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Hm->size[0], &f_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp;
  }

  input_sizes_idx_1 = Hm->size[1];
  sizes_idx_1 = i1 - i;
  i1 = Output->Hm->size[0] * Output->Hm->size[1];
  Output->Hm->size[0] = sizes_idx_1;
  Output->Hm->size[1] = Hm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Hm, i1, &ac_emlrtRTEI);
  for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
    for (i2 = 0; i2 < sizes_idx_1; i2++) {
      Output->Hm->data[i2 + Output->Hm->size[0] * i1] = Hm_data[(i + i2) +
        Hm->size[0] * i1];
    }
  }

  if (isForecast == 1) {
    if (n0 + 1.0 > n) {
      i = 0;
      i1 = 0;
    } else {
      if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
        emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->Yfm->size
           [0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->Yfm->size
          [0], &e_emlrtBCI, (emlrtCTX)sp);
      }

      i = (int32_T)(n0 + 1.0) - 1;
      if ((n < 1.0) || (loop_ub_tmp > Output->Yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Yfm->size[0],
          &d_emlrtBCI, (emlrtCTX)sp);
      }

      i1 = loop_ub_tmp;
    }

    sizes_idx_1 = i1 - i;
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      Output->Yfm->data[i1] = Output->Yfm->data[i + i1];
    }

    i = Output->Yfm->size[0];
    Output->Yfm->size[0] = sizes_idx_1;
    emxEnsureCapacity_real_T(sp, Output->Yfm, i, &cc_emlrtRTEI);

    /*      PredLikm = PredLikm(n0+1:n, :);   % 번인 버리기 */
    /*      predlik = meanc(PredLikm); */
  }

  if (n0 + 1.0 > n) {
    i = 0;
    loop_ub_tmp = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Volm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Volm->size[0],
        &b_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Volm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Volm->size[0], &emlrtBCI,
        (emlrtCTX)sp);
    }
  }

  input_sizes_idx_1 = Volm->size[1];
  sizes_idx_1 = loop_ub_tmp - i;
  i1 = Output->Volm->size[0] * Output->Volm->size[1];
  Output->Volm->size[0] = sizes_idx_1;
  Output->Volm->size[1] = Volm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Volm, i1, &dc_emlrtRTEI);
  for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
    for (i2 = 0; i2 < sizes_idx_1; i2++) {
      Output->Volm->data[i2 + Output->Volm->size[0] * i1] = Volm_data[(i + i2) +
        Volm->size[0] * i1];
    }
  }

  emxFree_real_T(sp, &Volm);
  Output->lnML = 0.0;
  if (ML == 'Y') {
    st.site = &q_emlrtRSI;
    b_st.site = &cd_emlrtRSI;
    if ((Output->betam->size[0] != 0) && (d_Output + 1 != 0)) {
      loop_ub_tmp = Output->betam->size[0];
    } else if ((Output->gammam->size[0] != 0) && (b_Output + 1 != 0)) {
      loop_ub_tmp = Output->gammam->size[0];
    } else if (b_loop_ub_tmp != 0) {
      loop_ub_tmp = b_loop_ub_tmp;
    } else {
      loop_ub_tmp = Output->betam->size[0];
      if (Output->gammam->size[0] > Output->betam->size[0]) {
        loop_ub_tmp = Output->gammam->size[0];
      }
    }

    c_st.site = &dd_emlrtRSI;
    if ((Output->betam->size[0] != loop_ub_tmp) && ((Output->betam->size[0] != 0)
         && (d_Output + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Output->gammam->size[0] != loop_ub_tmp) && ((Output->gammam->size[0] !=
          0) && (b_Output + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((b_loop_ub_tmp != loop_ub_tmp) && (b_loop_ub_tmp != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (loop_ub_tmp == 0);
    if (empty_non_axis_sizes || ((Output->betam->size[0] != 0) && (d_Output + 1
          != 0))) {
      isForecast = d_Output + 1;
    } else {
      isForecast = 0;
    }

    if (empty_non_axis_sizes || ((Output->gammam->size[0] != 0) && (b_Output + 1
          != 0))) {
      input_sizes_idx_1 = b_Output + 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (b_loop_ub_tmp != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    i = precb_->size[0] * precb_->size[1];
    precb_->size[0] = loop_ub_tmp;
    i1 = isForecast + input_sizes_idx_1;
    precb_->size[1] = i1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, precb_, i, &gc_emlrtRTEI);
    hm_data = precb_->data;
    for (i = 0; i < isForecast; i++) {
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        hm_data[i2 + precb_->size[0] * i] = Output->betam->data[i2 + loop_ub_tmp
          * i];
      }
    }

    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        hm_data[i2 + precb_->size[0] * (i + isForecast)] = Output->gammam->
          data[i2 + loop_ub_tmp * i];
      }
    }

    for (i = 0; i < sizes_idx_1; i++) {
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        hm_data[i2 + precb_->size[0] * i1] = Output->Sig2m->data[i2];
      }
    }

    st.site = &r_emlrtRSI;
    b_st.site = &rk_emlrtRSI;
    mean(&b_st, precb_, retf);
    hm_data = retf->data;
    st.site = &s_emlrtRSI;
    cov(&st, precb_, precB0);
    ysm_data = precB0->data;
    st.site = &s_emlrtRSI;
    cov(&st, precb_, Hm);
    Hm_data = Hm->data;
    if ((precB0->size[0] != Hm->size[1]) && ((precB0->size[0] != 1) && (Hm->
          size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(precB0->size[0], Hm->size[1], &b_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((Hm->size[0] != precB0->size[1]) && ((precB0->size[1] != 1) && (Hm->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(precB0->size[1], Hm->size[0], &emlrtECI,
        (emlrtCTX)sp);
    }

    if ((precB0->size[0] == Hm->size[1]) && (Hm->size[0] == precB0->size[1])) {
      i = b->size[0];
      b->size[0] = (b_hat->size[0] + mu_phi_hat->size[0]) + 1;
      emxEnsureCapacity_real_T(sp, b, i, &ic_emlrtRTEI);
      b_data = b->data;
      input_sizes_idx_1 = b_hat->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        b_data[i] = b_hat_data[i];
      }

      input_sizes_idx_1 = mu_phi_hat->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        b_data[i + b_hat->size[0]] = mu_phi_hat_data[i];
      }

      b_data[b_hat->size[0] + mu_phi_hat->size[0]] = sig2_hat;
      i = mu_phi->size[0];
      mu_phi->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, mu_phi, i, &jc_emlrtRTEI);
      mu_phi_data = mu_phi->data;
      input_sizes_idx_1 = retf->size[1];
      for (i = 0; i < input_sizes_idx_1; i++) {
        mu_phi_data[i] = hm_data[i];
      }

      i = precb_->size[0] * precb_->size[1];
      precb_->size[0] = precB0->size[0];
      precb_->size[1] = precB0->size[1];
      emxEnsureCapacity_real_T(sp, precb_, i, &kc_emlrtRTEI);
      hm_data = precb_->data;
      input_sizes_idx_1 = precB0->size[1];
      for (i = 0; i < input_sizes_idx_1; i++) {
        sizes_idx_1 = precB0->size[0];
        for (i1 = 0; i1 < sizes_idx_1; i1++) {
          hm_data[i1 + precb_->size[0] * i] = 0.5 * (ysm_data[i1 + precB0->size
            [0] * i] + Hm_data[i + Hm->size[0] * i1]);
        }
      }

      st.site = &t_emlrtRSI;
      b_prior = b_lnpdfmvn(&st, b, mu_phi, precb_);
    } else {
      st.site = &t_emlrtRSI;
      b_prior = binary_expand_op(&st, t_emlrtRSI, b_hat, mu_phi_hat, sig2_hat,
        retf, precB0, Hm);
    }

    Output->lnML = lnpost_hat - b_prior;
  }

  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &mu_phi_hat);
  emxFree_real_T(sp, &b_hat);
  emxFree_real_T(sp, &Hm);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &precB0);
  emxFree_real_T(sp, &precb_);
  emxFree_real_T(sp, &mu_phi);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Stochastic_Volatility.c) */

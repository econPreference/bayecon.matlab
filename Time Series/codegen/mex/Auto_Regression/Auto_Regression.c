/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Auto_Regression.c
 *
 * Code generation for function 'Auto_Regression'
 *
 */

/* Include files */
#include "Auto_Regression.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_mexutil.h"
#include "Auto_Regression_types.h"
#include "abs.h"
#include "assertValidSizeArg.h"
#include "chol.h"
#include "cov.h"
#include "det.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "invpd.h"
#include "kron.h"
#include "lnpdfig.h"
#include "lnpdfmvn.h"
#include "mean.h"
#include "mpower.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "power.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "std.h"
#include "sum.h"
#include "vec.h"
#include "warning.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 22,    /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 23,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 43,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 45,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 50,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 60,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 63,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 64,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 65,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 83,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 100, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 101, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 105, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 108, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 112, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 116, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 119, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 120, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 122, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 123, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 127, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 128, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 129, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 134, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 135, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 137,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 138,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 139,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 155,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 166,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 168,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 169,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 171,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 4,  /* lineNo */
  "stdc",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/stdc.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 28, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 100,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 185,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 186,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 187,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 188,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 278,/* lineNo */
  "Gen_sig2",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 280,/* lineNo */
  "Gen_sig2",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 282,/* lineNo */
  "Gen_sig2",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 12, /* lineNo */
  "randig",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 18, /* lineNo */
  "randgam",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 11, /* lineNo */
  "gamrnd",                            /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 1,  /* lineNo */
  "rnd",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/rnd.p"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 1,  /* lineNo */
  "gamrnd",                            /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/gamrnd.p"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 1,  /* lineNo */
  "randg",                             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/randg.p"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 200,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 207,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 209,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 210,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 213,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 214,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 219,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 223,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 224,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 225,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 226,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 227,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 228,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 229,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 238,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 240,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 241,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 242,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 246,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 248,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 249,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 253,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 255,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 256,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 258,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 259,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 262,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 15, /* lineNo */
  "min",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 46, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 92, /* lineNo */
  "minimum",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 308,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 349,/* lineNo */
  "minOrMax1D",                        /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 4,  /* lineNo */
  "sumc",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/sumc.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 6,     /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 151, /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 152, /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 153, /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 81,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 82,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 84,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 85,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 86,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 87,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 88,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 89,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 90,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 91,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 275, /* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  124,                                 /* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  12,                                  /* colNo */
  "Sigmam",                            /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  169,                                 /* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 1,   /* nDims */
  169,                                 /* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  20,                                  /* colNo */
  "yfm",                               /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  15,                                  /* colNo */
  "yfm",                               /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 161,   /* lineNo */
  15,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  14,                                  /* colNo */
  "bm",                                /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  9,                                   /* colNo */
  "bm",                                /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 158, /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  106,                                 /* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  106,                                 /* lineNo */
  8,                                   /* colNo */
  "bm",                                /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  18,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  13,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 156, /* lineNo */
  13,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  114,                                 /* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  10,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  155,                                 /* lineNo */
  20,                                  /* colNo */
  "sig2m",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  155,                                 /* lineNo */
  15,                                  /* colNo */
  "sig2m",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 155, /* lineNo */
  15,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  45,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  37,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  30,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  127,                                 /* lineNo */
  18,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  39,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  32,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  32,                                  /* colNo */
  "vec_Sigma",                         /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  119,                                 /* lineNo */
  21,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 1,   /* nDims */
  119,                                 /* lineNo */
  21,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  13,                                  /* colNo */
  "G",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { 1,   /* nDims */
  103,                                 /* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  41,                                  /* colNo */
  "X_hat",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  102,                                 /* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 1,   /* nDims */
  102,                                 /* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  58,                                  /* colNo */
  "X_hat",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  41,                                  /* colNo */
  "X_hat",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  100,                                 /* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  15,                                  /* colNo */
  "X_hat",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  30,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { 2,   /* nDims */
  100,                                 /* lineNo */
  26,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  28,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 99,/* lineNo */
  13,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 77,/* lineNo */
  12,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  4,                                   /* colNo */
  "e1",                                /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  63,                                  /* lineNo */
  17,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { 1,   /* nDims */
  63,                                  /* lineNo */
  17,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  13,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  11,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  9,                                   /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  11,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  9,                                   /* colNo */
  "X",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 50,  /* lineNo */
  31,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 37,  /* lineNo */
  16,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 37,  /* lineNo */
  18,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 94,  /* lineNo */
  19,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  16,                                  /* colNo */
  "data",                              /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 16,  /* lineNo */
  16,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  16,                                  /* colNo */
  "data",                              /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 17,  /* lineNo */
  16,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 33,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 33,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 34,  /* lineNo */
  12,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 35,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 36,  /* lineNo */
  14,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 37,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 94,  /* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 95,  /* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  42,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  11,                                  /* colNo */
  "sig2m",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  42,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  28,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  15,                                  /* colNo */
  "Y_hat",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  58,                                  /* colNo */
  "Y_hat",                             /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  13,                                  /* colNo */
  "yfm",                               /* aName */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  185,                                 /* lineNo */
  21,                                  /* colNo */
  "sig2_inv",                          /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { 1,   /* nDims */
  185,                                 /* lineNo */
  26,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  185,                                 /* lineNo */
  26,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 1,  /* nDims */
  185,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  185,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  187,                                 /* lineNo */
  16,                                  /* colNo */
  "sig2_inv",                          /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo db_emlrtECI = { 1,  /* nDims */
  187,                                 /* lineNo */
  21,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 1,  /* nDims */
  187,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 1,  /* nDims */
  188,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { 1,  /* nDims */
  280,                                 /* lineNo */
  40,                                  /* colNo */
  "Gen_sig2",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo hb_emlrtECI = { 1,  /* nDims */
  280,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_sig2",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  71,                                  /* colNo */
  "X_hat",                             /* aName */
  "Gen_sig2",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  39,                                  /* colNo */
  "X_hat",                             /* aName */
  "Gen_sig2",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo w_emlrtRTEI = { 277,/* lineNo */
  9,                                   /* colNo */
  "Gen_sig2",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  26,                                  /* colNo */
  "Y_hat",                             /* aName */
  "Gen_sig2",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  73,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  25,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  87,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  39,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  72,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  25,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  86,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  39,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  16,                                  /* colNo */
  "center_hat",                        /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  50,                                  /* colNo */
  "Y_stary_star",                      /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  16,                                  /* colNo */
  "center_hat",                        /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  42,                                  /* colNo */
  "vec_",                              /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  63,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  42,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 209, /* lineNo */
  1,                                   /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  42,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  63,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  20,                                  /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  22,                                  /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { 2,  /* nDims */
  257,                                 /* lineNo */
  16,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { 1,  /* nDims */
  257,                                 /* lineNo */
  16,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  256,                                 /* lineNo */
  36,                                  /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kb_emlrtECI = { 1,  /* nDims */
  255,                                 /* lineNo */
  73,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 1,  /* nDims */
  255,                                 /* lineNo */
  44,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  105,                                 /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  98,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  75,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  57,                                  /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  50,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  27,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo y_emlrtRTEI = { 252,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  35,                                  /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { 1,  /* nDims */
  248,                                 /* lineNo */
  72,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 1,  /* nDims */
  248,                                 /* lineNo */
  44,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  103,                                 /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  97,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  74,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  56,                                  /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  50,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  27,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ab_emlrtRTEI = { 245,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  4,                                   /* colNo */
  "e1",                                /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { 2,  /* nDims */
  240,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { 1,  /* nDims */
  240,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { 1,  /* nDims */
  228,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtDCInfo u_emlrtDCI = { 224, /* lineNo */
  35,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { 1,  /* nDims */
  223,                                 /* lineNo */
  16,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 1,  /* nDims */
  219,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { 2,  /* nDims */
  213,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { 1,  /* nDims */
  213,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 210,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  208,                                 /* lineNo */
  15,                                  /* colNo */
  "vec_",                              /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo vb_emlrtECI = { 1,  /* nDims */
  205,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  65,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  53,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo wb_emlrtECI = { 2,  /* nDims */
  204,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { 1,  /* nDims */
  204,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  74,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  53,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo cb_emlrtRTEI = { 203,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { 1,  /* nDims */
  200,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_G",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 13,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 34,/* lineNo */
  6,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 36,/* lineNo */
  8,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 5,/* lineNo */
  8,                                   /* colNo */
  "stdc",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/stdc.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 53,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 54,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 57,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 85,/* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 63,/* lineNo */
  17,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 63,/* lineNo */
  34,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 50,/* lineNo */
  10,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 50,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 64,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 68,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 69,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 94,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 155,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 156,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 95,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 87,/* lineNo */
  14,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 158,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 96,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 89,/* lineNo */
  14,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 97,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 161,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 58,/* lineNo */
  7,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 100,/* lineNo */
  42,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 100,/* lineNo */
  40,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 108,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 100,/* lineNo */
  26,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 109,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 166,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 101,/* lineNo */
  40,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 112,/* lineNo */
  54,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 113,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 102,/* lineNo */
  35,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 171,/* lineNo */
  30,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 102,/* lineNo */
  52,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 4,/* lineNo */
  8,                                   /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 119,/* lineNo */
  21,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 119,/* lineNo */
  38,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 103,/* lineNo */
  35,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 123,/* lineNo */
  17,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 123,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 124,/* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 127,/* lineNo */
  30,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 134,/* lineNo */
  43,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 135,/* lineNo */
  47,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 127,/* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 128,/* lineNo */
  29,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 144,/* lineNo */
  13,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 145,/* lineNo */
  13,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 129,/* lineNo */
  28,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 45,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 60,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 65,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 50,/* lineNo */
  16,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 2,/* lineNo */
  10,                                  /* colNo */
  "stdc",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/stdc.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 185,/* lineNo */
  10,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 186,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 187,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 183,/* lineNo */
  17,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 185,/* lineNo */
  26,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 278,/* lineNo */
  33,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 280,/* lineNo */
  12,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 278,/* lineNo */
  65,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 280,/* lineNo */
  40,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 270,/* lineNo */
  17,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 197,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 200,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 201,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 202,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 204,/* lineNo */
  63,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 209,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 204,/* lineNo */
  35,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 85,/* lineNo */
  36,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 205,/* lineNo */
  35,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 215,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 213,/* lineNo */
  15,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 223,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 223,/* lineNo */
  16,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 224,/* lineNo */
  10,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 224,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 226,/* lineNo */
  15,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 228,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 233,/* lineNo */
  9,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 240,/* lineNo */
  17,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 240,/* lineNo */
  34,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 246,/* lineNo */
  39,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 246,/* lineNo */
  32,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 246,/* lineNo */
  79,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 248,/* lineNo */
  72,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 246,/* lineNo */
  54,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 246,/* lineNo */
  101,                                 /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 249,/* lineNo */
  33,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 253,/* lineNo */
  39,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 253,/* lineNo */
  32,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 253,/* lineNo */
  80,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 255,/* lineNo */
  73,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 253,/* lineNo */
  54,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 256,/* lineNo */
  33,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 253,/* lineNo */
  102,                                 /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 258,/* lineNo */
  19,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 259,/* lineNo */
  18,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 265,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 214,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 225,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 227,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 240,/* lineNo */
  1,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 224,/* lineNo */
  20,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 248,/* lineNo */
  31,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo al_emlrtRTEI = { 103,/* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = { 102,/* lineNo */
  22,                                  /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = { 187,/* lineNo */
  5,                                   /* colNo */
  "Auto_Regression",                   /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pName */
};

static emlrtRSInfo fl_emlrtRSI = { 6,  /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 84, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 82, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 86, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 88, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 90, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 152,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 153,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 151,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 91, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 89, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 87, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 85, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 81, /* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 205,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 103,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 204,/* lineNo */
  "Gen_G",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 102,/* lineNo */
  "Auto_Regression",                   /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Auto_Regression.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 76, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 85, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

/* Function Declarations */
static void Gen_G(const emlrtStack *sp, const emxArray_real_T *Y, const
                  emxArray_real_T *X, const emxArray_real_T *Y_p, const
                  emxArray_real_T *X_p, const emxArray_real_T *Sigma0, const
                  emxArray_real_T *inv_Sigma0, const emxArray_real_T *beta,
                  const real_T sig2_inv_data[], const emxArray_real_T *G0, const
                  emxArray_real_T *phi0, const emxArray_real_T *precphi0, const
                  emxArray_real_T *PHI0, emxArray_real_T *G);
static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X_p, const
                     emxArray_real_T *Y_p, const emxArray_real_T *X_hatX_hat,
                     const emxArray_real_T *X_hatY_hat, const emxArray_real_T
                     *inv_Sigma, const emxArray_real_T *b0, const
                     emxArray_real_T *precb0, const emxArray_real_T *sig2_inv,
                     emxArray_real_T *beta);
static real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y_p, const
  emxArray_real_T *X_p, const emxArray_real_T *X_hat, const emxArray_real_T
  *Y_hat, const emxArray_real_T *inv_Sigma, const emxArray_real_T *beta, real_T
  a0, real_T d0);
static real_T b_binary_expand_op(const emlrtStack *sp, emlrtRSInfo jm_emlrtRSI,
  const emxArray_real_T *Y, int32_T i2, const emxArray_real_T *e1, const
  emxArray_real_T *sig2, const emxArray_real_T *Sigma);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37]);
static void b_plus(const emlrtStack *sp, emxArray_real_T *kron_G, const
                   emxArray_real_T *b);
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1, const
  emxArray_real_T *X, uint32_T i);
static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *retf,
  const emxArray_real_T *x_f, const emxArray_real_T *r1);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8]);
static void c_plus(const emlrtStack *sp, emxArray_real_T *Y_stary_star, const
                   emxArray_real_T *r1, const emxArray_real_T *absolute);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Sigma,
  emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *b, const emxArray_real_T
  *kron_G);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6]);
static real_T f_binary_expand_op(const emlrtStack *sp, emlrtRSInfo jm_emlrtRSI,
  const emxArray_real_T *b_hat, const emxArray_real_T *phi_hat, const real_T
  sig2_hat_data[], const emxArray_real_T *retf, const emxArray_real_T *b, const
  emxArray_real_T *Sigma);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [10]);
static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [38]);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23]);
static const mxArray *j_emlrt_marshallOut(const real_T u);
static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A, const
  emxArray_real_T *sig2_inv, const emxArray_real_T *X_hatY_hat);
static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *r3, const emxArray_real_T
  *precb0);
static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1, const
  emxArray_real_T *sig2_inv, const emxArray_real_T *X_hatX_hat);
static const mxArray *m_emlrt_marshallOut(void);
static void minus(const emlrtStack *sp, emxArray_real_T *b, const
                  emxArray_real_T *Y_p);
static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T
  *Y_starY_star, emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *b);
static void plus(const emlrtStack *sp, emxArray_real_T *sig2, const
                 emxArray_real_T *e1);
static void q_binary_expand_op(const emlrtStack *sp, int32_T sizes[2], const
  emxArray_real_T *r3, const emxArray_real_T *absolute);
static void r_binary_expand_op(const emlrtStack *sp, emxArray_real_T *PHI_hat,
  emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *center_hat, const
  emxArray_real_T *phi0, const emxArray_real_T *precphi0);
static void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y_star,
  const emxArray_real_T *Y, const emxArray_real_T *r1);

/* Function Definitions */
static void Gen_G(const emlrtStack *sp, const emxArray_real_T *Y, const
                  emxArray_real_T *X, const emxArray_real_T *Y_p, const
                  emxArray_real_T *X_p, const emxArray_real_T *Sigma0, const
                  emxArray_real_T *inv_Sigma0, const emxArray_real_T *beta,
                  const real_T sig2_inv_data[], const emxArray_real_T *G0, const
                  emxArray_real_T *phi0, const emxArray_real_T *precphi0, const
                  emxArray_real_T *PHI0, emxArray_real_T *G)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_boolean_T *test;
  emxArray_creal_T *eigen;
  emxArray_int8_T *e1;
  emxArray_real_T b_vec_Sigma;
  emxArray_real_T *PHI_hat;
  emxArray_real_T *Y_starY_star;
  emxArray_real_T *Y_stary_star;
  emxArray_real_T *absolute;
  emxArray_real_T *b;
  emxArray_real_T *b_G;
  emxArray_real_T *b_y_star;
  emxArray_real_T *center_hat;
  emxArray_real_T *r;
  emxArray_real_T *result;
  emxArray_real_T *vec_Sigma;
  emxArray_real_T *y;
  emxArray_real_T *y_star;
  creal_T *eigen_data;
  const real_T *G0_data;
  const real_T *Y_data;
  const real_T *Y_p_data;
  const real_T *precphi0_data;
  real_T d;
  real_T deno1_data;
  real_T numer1_data;
  real_T numer2;
  real_T rss;
  real_T *G_data;
  real_T *PHI_hat_data;
  real_T *Y_starY_star_data;
  real_T *Y_stary_star_data;
  real_T *absolute_data;
  real_T *b_y_star_data;
  real_T *center_hat_data;
  real_T *r1;
  real_T *y_star_data;
  int32_T b_center_hat[2];
  int32_T c_center_hat[2];
  int32_T sizes[2];
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T iter;
  int32_T loop_ub;
  int32_T n;
  int32_T nx;
  int32_T p;
  int32_T t;
  uint32_T b_t;
  int8_T input_sizes_idx_0;
  int8_T *e1_data;
  boolean_T b_b;
  boolean_T empty_non_axis_sizes;
  boolean_T *test_data;
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
  precphi0_data = precphi0->data;
  G0_data = G0->data;
  Y_p_data = Y_p->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int8_T(sp, &e1, &hh_emlrtRTEI);
  p = phi0->size[0];
  i = e1->size[0];
  e1->size[0] = phi0->size[0];
  emxEnsureCapacity_int8_T(sp, e1, i, &hh_emlrtRTEI);
  e1_data = e1->data;
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    e1_data[i] = 0;
  }

  if (1 > phi0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, phi0->size[0], &oe_emlrtBCI, (emlrtCTX)
      sp);
  }

  emxInit_real_T(sp, &r, 1, &lh_emlrtRTEI);
  e1_data[0] = 1;
  st.site = &ih_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, X, beta, X->size[1], beta->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, X, beta, r);
  r1 = r->data;
  if ((Y->size[0] != r->size[0]) && ((Y->size[0] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], r->size[0], &yb_emlrtECI, (emlrtCTX)
      sp);
  }

  emxInit_real_T(sp, &y_star, 2, &ih_emlrtRTEI);
  if (Y->size[0] == r->size[0]) {
    i = y_star->size[0] * y_star->size[1];
    y_star->size[0] = Y->size[0];
    y_star->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(sp, y_star, i, &ih_emlrtRTEI);
    y_star_data = y_star->data;
    loop_ub = Y->size[1];
    for (i = 0; i < loop_ub; i++) {
      nx = Y->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        y_star_data[i1 + y_star->size[0] * i] = Y_data[i1 + Y->size[0] * i] -
          r1[i1];
      }
    }
  } else {
    st.site = &ih_emlrtRSI;
    s_binary_expand_op(&st, y_star, Y, r);
    y_star_data = y_star->data;
  }

  emxInit_real_T(sp, &Y_starY_star, 2, &jh_emlrtRTEI);
  i = Y_starY_star->size[0] * Y_starY_star->size[1];
  Y_starY_star->size[0] = phi0->size[0];
  Y_starY_star->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Y_starY_star, i, &jh_emlrtRTEI);
  Y_starY_star_data = Y_starY_star->data;
  loop_ub = phi0->size[0] * phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_starY_star_data[i] = 0.0;
  }

  emxInit_real_T(sp, &Y_stary_star, 1, &kh_emlrtRTEI);
  i = Y_stary_star->size[0];
  Y_stary_star->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Y_stary_star, i, &kh_emlrtRTEI);
  Y_stary_star_data = Y_stary_star->data;
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_stary_star_data[i] = 0.0;
  }

  i = X->size[0] - phi0->size[0];
  emlrtForLoopVectorCheckR2021a((real_T)phi0->size[0] + 1.0, 1.0, X->size[0],
    mxDOUBLE_CLASS, i, &cb_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &absolute, 1, &xi_emlrtRTEI);
  emxInit_real_T(sp, &b, 2, &bi_emlrtRTEI);
  emxInit_real_T(sp, &b_y_star, 2, &oh_emlrtRTEI);
  for (t = 0; t < i; t++) {
    b_t = ((uint32_T)p + t) + 1U;
    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &se_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = r->size[0];
    r->size[0] = (int32_T)-((0.0 - (real_T)p) - -1.0) + 1;
    emxEnsureCapacity_real_T(sp, r, i1, &lh_emlrtRTEI);
    r1 = r->data;
    loop_ub = (int32_T)-((0.0 - (real_T)p) - -1.0);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      r1[i1] = (real_T)b_t + (-1.0 - (real_T)i1);
    }

    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = (int32_T)r1[i1];
      if ((iter < 1) || (iter > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(iter, 1, y_star->size[0], &wd_emlrtBCI,
          (emlrtCTX)sp);
      }
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &te_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = (int32_T)r1[i1];
      if ((iter < 1) || (iter > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(iter, 1, y_star->size[0], &vd_emlrtBCI,
          (emlrtCTX)sp);
      }
    }

    i1 = absolute->size[0];
    absolute->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, absolute, i1, &nh_emlrtRTEI);
    absolute_data = absolute->data;
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      absolute_data[i1] = y_star_data[(int32_T)r1[i1] - 1];
    }

    i1 = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = r->size[0];
    emxEnsureCapacity_real_T(sp, b_y_star, i1, &oh_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_y_star_data[i1] = y_star_data[(int32_T)r1[i1] - 1];
    }

    i1 = b->size[0] * b->size[1];
    b->size[0] = absolute->size[0];
    b->size[1] = b_y_star->size[1];
    emxEnsureCapacity_real_T(sp, b, i1, &nh_emlrtRTEI);
    center_hat_data = b->data;
    loop_ub = b_y_star->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      nx = absolute->size[0];
      for (iter = 0; iter < nx; iter++) {
        center_hat_data[iter + b->size[0] * i1] = absolute_data[iter] *
          b_y_star_data[i1];
      }
    }

    if ((Y_starY_star->size[0] != b->size[0]) && ((Y_starY_star->size[0] != 1) &&
         (b->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Y_starY_star->size[0], b->size[0],
        &xb_emlrtECI, (emlrtCTX)sp);
    }

    if ((Y_starY_star->size[1] != b->size[1]) && ((Y_starY_star->size[1] != 1) &&
         (b->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Y_starY_star->size[1], b->size[1],
        &wb_emlrtECI, (emlrtCTX)sp);
    }

    if ((Y_starY_star->size[0] == b->size[0]) && (Y_starY_star->size[1] ==
         b->size[1])) {
      loop_ub = Y_starY_star->size[0] * Y_starY_star->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Y_starY_star_data[i1] += center_hat_data[i1];
      }
    } else {
      st.site = &em_emlrtRSI;
      b_plus(&st, Y_starY_star, b);
      Y_starY_star_data = Y_starY_star->data;
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &re_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &qe_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = (int32_T)r1[i1];
      if ((iter < 1) || (iter > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(iter, 1, y_star->size[0], &ud_emlrtBCI,
          (emlrtCTX)sp);
      }
    }

    if (((int32_T)b_t < 1) || ((int32_T)b_t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_t, 1, y_star->size[0],
        &td_emlrtBCI, (emlrtCTX)sp);
    }

    numer2 = y_star_data[(int32_T)b_t - 1];
    i1 = absolute->size[0];
    absolute->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, absolute, i1, &ph_emlrtRTEI);
    absolute_data = absolute->data;
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      absolute_data[i1] = y_star_data[(int32_T)r1[i1] - 1] * numer2;
    }

    loop_ub = Y_stary_star->size[0];
    if ((Y_stary_star->size[0] != absolute->size[0]) && ((Y_stary_star->size[0]
          != 1) && (absolute->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Y_stary_star->size[0], absolute->size[0],
        &vb_emlrtECI, (emlrtCTX)sp);
    }

    if (Y_stary_star->size[0] == absolute->size[0]) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Y_stary_star_data[i1] += absolute_data[i1];
      }
    } else {
      st.site = &cm_emlrtRSI;
      plus(&st, Y_stary_star, absolute);
      Y_stary_star_data = Y_stary_star->data;
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  st.site = &jh_emlrtRSI;
  vec(&st, Y_starY_star);
  Y_starY_star_data = Y_starY_star->data;
  if (1 > Y_starY_star->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Y_starY_star->size[1], &pe_emlrtBCI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &center_hat, 1, &mh_emlrtRTEI);
  st.site = &kh_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  c_st.site = &sd_emlrtRSI;
  numer2 = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  if (numer2 != (int32_T)numer2) {
    emlrtIntegerCheckR2012b(numer2, &t_emlrtDCI, (emlrtCTX)sp);
  }

  i = center_hat->size[0];
  center_hat->size[0] = (int32_T)numer2;
  emxEnsureCapacity_real_T(sp, center_hat, i, &mh_emlrtRTEI);
  center_hat_data = center_hat->data;
  if (numer2 != (int32_T)numer2) {
    emlrtIntegerCheckR2012b(numer2, &t_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = (int32_T)numer2;
  for (i = 0; i < loop_ub; i++) {
    center_hat_data[i] = 0.0;
  }

  st.site = &lh_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  c_st.site = &sd_emlrtRSI;
  d = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &bb_emlrtRTEI, (emlrtCTX)sp);
  if (0 <= (int32_T)d - 1) {
    n = Y_starY_star->size[0];
  }

  for (nx = 0; nx < i; nx++) {
    if (((int32_T)(nx + 1U) < 1) || ((int32_T)(nx + 1U) > center_hat->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(nx + 1U), 1, center_hat->size[0],
        &rd_emlrtBCI, (emlrtCTX)sp);
    }

    if (((int32_T)(nx + 1U) < 1) || ((int32_T)(nx + 1U) > n)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(nx + 1U), 1, n, &sd_emlrtBCI,
        (emlrtCTX)sp);
    }

    center_hat_data[nx] = sig2_inv_data[0] * Y_starY_star_data[nx];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  st.site = &mh_emlrtRSI;
  nx = center_hat->size[0];
  b_st.site = &mg_emlrtRSI;
  c_st.site = &lg_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  c_st.site = &lg_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  n = center_hat->size[0];
  if (1 > center_hat->size[0]) {
    n = 1;
  }

  if (phi0->size[0] > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (phi0->size[0] * phi0->size[0] != center_hat->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  if ((phi0->size[0] != precphi0->size[0]) && ((phi0->size[0] != 1) &&
       (precphi0->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(phi0->size[0], precphi0->size[0], &ub_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((phi0->size[0] != precphi0->size[1]) && ((phi0->size[0] != 1) &&
       (precphi0->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(phi0->size[0], precphi0->size[1], &tb_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &PHI_hat, 2, &vi_emlrtRTEI);
  emxInit_real_T(sp, &vec_Sigma, 2, &yi_emlrtRTEI);
  if ((phi0->size[0] == precphi0->size[0]) && (phi0->size[0] == precphi0->size[1]))
  {
    i = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = phi0->size[0];
    vec_Sigma->size[1] = phi0->size[0];
    emxEnsureCapacity_real_T(sp, vec_Sigma, i, &rh_emlrtRTEI);
    absolute_data = vec_Sigma->data;
    loop_ub = phi0->size[0] * phi0->size[0];
    for (i = 0; i < loop_ub; i++) {
      absolute_data[i] = center_hat_data[i] + precphi0_data[i];
    }

    st.site = &nh_emlrtRSI;
    inv(&st, vec_Sigma, PHI_hat);
    PHI_hat_data = PHI_hat->data;
  } else {
    st.site = &nh_emlrtRSI;
    r_binary_expand_op(&st, PHI_hat, nh_emlrtRSI, center_hat, phi0, precphi0);
    PHI_hat_data = PHI_hat->data;
  }

  i = center_hat->size[0];
  center_hat->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, center_hat, i, &qh_emlrtRTEI);
  center_hat_data = center_hat->data;
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    center_hat_data[i] = 0.0;
  }

  i = phi0->size[0];
  for (nx = 0; nx < i; nx++) {
    if ((nx + 1 < 1) || (nx + 1 > center_hat->size[0])) {
      emlrtDynamicBoundsCheckR2012b(nx + 1, 1, center_hat->size[0], &pd_emlrtBCI,
        (emlrtCTX)sp);
    }

    if ((nx + 1 < 1) || (nx + 1 > Y_stary_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b(nx + 1, 1, Y_stary_star->size[0],
        &qd_emlrtBCI, (emlrtCTX)sp);
    }

    center_hat_data[nx] = sig2_inv_data[0] * Y_stary_star_data[nx];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  st.site = &oh_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, precphi0, phi0, precphi0->size[1], phi0->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, precphi0, phi0, r);
  r1 = r->data;
  if ((center_hat->size[0] != r->size[0]) && ((center_hat->size[0] != 1) &&
       (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(center_hat->size[0], r->size[0], &sb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (center_hat->size[0] == r->size[0]) {
    loop_ub = center_hat->size[0];
    for (i = 0; i < loop_ub; i++) {
      center_hat_data[i] += r1[i];
    }
  } else {
    st.site = &oh_emlrtRSI;
    plus(&st, center_hat, r);
  }

  iter = 0;
  emxInit_creal_T(sp, &eigen, &wi_emlrtRTEI);
  emxInit_boolean_T(sp, &test, &xh_emlrtRTEI);
  emxInit_real_T(sp, &result, 2, &aj_emlrtRTEI);
  do {
    exitg1 = 0;
    st.site = &ph_emlrtRSI;
    i = b->size[0] * b->size[1];
    b->size[0] = PHI_hat->size[0];
    b->size[1] = PHI_hat->size[1];
    emxEnsureCapacity_real_T(&st, b, i, &vg_emlrtRTEI);
    center_hat_data = b->data;
    loop_ub = PHI_hat->size[0] * PHI_hat->size[1];
    for (i = 0; i < loop_ub; i++) {
      center_hat_data[i] = PHI_hat_data[i];
    }

    b_st.site = &sg_emlrtRSI;
    cholesky(&b_st, b);
    st.site = &ph_emlrtRSI;
    b_st.site = &md_emlrtRSI;
    b_dynamic_size_checks(&b_st, PHI_hat, center_hat, PHI_hat->size[1],
                          center_hat->size[0]);
    b_st.site = &od_emlrtRSI;
    b_mtimes(&b_st, PHI_hat, center_hat, r);
    r1 = r->data;
    st.site = &ph_emlrtRSI;
    b_st.site = &ph_emlrtRSI;
    randn(&b_st, p, Y_stary_star);
    b_st.site = &md_emlrtRSI;
    b_dynamic_size_checks(&b_st, b, Y_stary_star, b->size[0], Y_stary_star->
                          size[0]);
    b_st.site = &od_emlrtRSI;
    g_mtimes(&b_st, b, Y_stary_star, absolute);
    absolute_data = absolute->data;
    if ((r->size[0] != absolute->size[0]) && ((r->size[0] != 1) &&
         (absolute->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[0], absolute->size[0], &rb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (r->size[0] == absolute->size[0]) {
      i = Y_stary_star->size[0];
      Y_stary_star->size[0] = r->size[0];
      emxEnsureCapacity_real_T(sp, Y_stary_star, i, &sh_emlrtRTEI);
      Y_stary_star_data = Y_stary_star->data;
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        Y_stary_star_data[i] = r1[i] + absolute_data[i];
      }
    } else {
      st.site = &ph_emlrtRSI;
      c_plus(&st, Y_stary_star, r, absolute);
      Y_stary_star_data = Y_stary_star->data;
    }

    st.site = &qh_emlrtRSI;
    b_st.site = &qh_emlrtRSI;
    eye(&b_st, (real_T)p - 1.0, Y_starY_star);
    Y_starY_star_data = Y_starY_star->data;
    if (!((real_T)p - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(-1.0, &u_emlrtDCI, &st);
    }

    b_st.site = &kf_emlrtRSI;
    if ((Y_starY_star->size[0] != 0) && (Y_starY_star->size[1] != 0)) {
      t = Y_starY_star->size[0];
    } else if (p - 1 != 0) {
      t = p - 1;
    } else {
      t = Y_starY_star->size[0];
      if (p - 1 > Y_starY_star->size[0]) {
        t = p - 1;
      }
    }

    c_st.site = &lf_emlrtRSI;
    if ((Y_starY_star->size[0] != t) && ((Y_starY_star->size[0] != 0) &&
         (Y_starY_star->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((p - 1 != t) && (p - 1 != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (t == 0);
    if (empty_non_axis_sizes || ((Y_starY_star->size[0] != 0) &&
         (Y_starY_star->size[1] != 0))) {
      nx = Y_starY_star->size[1];
    } else {
      nx = 0;
    }

    if (empty_non_axis_sizes || (p - 1 != 0)) {
      sizes[1] = 1;
    } else {
      sizes[1] = 0;
    }

    i = result->size[0] * result->size[1];
    result->size[0] = t;
    result->size[1] = nx + sizes[1];
    emxEnsureCapacity_real_T(&b_st, result, i, &gc_emlrtRTEI);
    center_hat_data = result->data;
    for (i = 0; i < nx; i++) {
      for (i1 = 0; i1 < t; i1++) {
        center_hat_data[i1 + result->size[0] * i] = Y_starY_star_data[i1 + t * i];
      }
    }

    loop_ub = sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < t; i1++) {
        center_hat_data[i1 + result->size[0] * nx] = 0.0;
      }
    }

    st.site = &qh_emlrtRSI;
    if (r->size[0] == absolute->size[0]) {
      i = b_y_star->size[0] * b_y_star->size[1];
      b_y_star->size[0] = 1;
      b_y_star->size[1] = r->size[0];
      emxEnsureCapacity_real_T(&st, b_y_star, i, &th_emlrtRTEI);
      b_y_star_data = b_y_star->data;
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_y_star_data[i] = r1[i] + absolute_data[i];
      }

      sizes[1] = b_y_star->size[1];
    } else {
      b_st.site = &qh_emlrtRSI;
      q_binary_expand_op(&b_st, sizes, r, absolute);
    }

    b_st.site = &kf_emlrtRSI;
    if (sizes[1] != 0) {
      t = Y_stary_star->size[0];
    } else if ((result->size[0] != 0) && (result->size[1] != 0)) {
      t = result->size[1];
    } else {
      if (Y_stary_star->size[0] > 0) {
        t = Y_stary_star->size[0];
      } else {
        t = 0;
      }

      if (result->size[1] > t) {
        t = result->size[1];
      }
    }

    c_st.site = &lf_emlrtRSI;
    if ((Y_stary_star->size[0] != t) && (sizes[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((result->size[1] != t) && ((result->size[0] != 0) && (result->size[1] !=
          0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (t == 0);
    if (empty_non_axis_sizes || (sizes[1] != 0)) {
      input_sizes_idx_0 = 1;
    } else {
      input_sizes_idx_0 = 0;
    }

    if (empty_non_axis_sizes || ((result->size[0] != 0) && (result->size[1] != 0)))
    {
      sizes[0] = result->size[0];
    } else {
      sizes[0] = 0;
    }

    i = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = Y_stary_star->size[0];
    emxEnsureCapacity_real_T(&b_st, b_y_star, i, &uh_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    loop_ub = Y_stary_star->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_y_star_data[i] = Y_stary_star_data[i];
    }

    nx = input_sizes_idx_0;
    n = sizes[0];
    i = G->size[0] * G->size[1];
    G->size[0] = input_sizes_idx_0 + sizes[0];
    G->size[1] = t;
    emxEnsureCapacity_real_T(&b_st, G, i, &vh_emlrtRTEI);
    G_data = G->data;
    for (i = 0; i < t; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        G_data[G->size[0] * i] = b_y_star_data[input_sizes_idx_0 * i];
      }
    }

    for (i = 0; i < t; i++) {
      for (i1 = 0; i1 < n; i1++) {
        G_data[(i1 + input_sizes_idx_0) + G->size[0] * i] = center_hat_data[i1 +
          n * i];
      }
    }

    st.site = &rh_emlrtRSI;
    eig(&st, G, eigen);
    eigen_data = eigen->data;
    i = absolute->size[0];
    absolute->size[0] = eigen->size[0];
    emxEnsureCapacity_real_T(sp, absolute, i, &wh_emlrtRTEI);
    absolute_data = absolute->data;
    loop_ub = eigen->size[0];
    for (i = 0; i < loop_ub; i++) {
      absolute_data[i] = eigen_data[i].im;
    }

    st.site = &sh_emlrtRSI;
    power(&st, absolute, Y_stary_star);
    Y_stary_star_data = Y_stary_star->data;
    st.site = &th_emlrtRSI;
    d_abs(&st, eigen, r);
    st.site = &th_emlrtRSI;
    power(&st, r, absolute);
    absolute_data = absolute->data;
    if ((absolute->size[0] != Y_stary_star->size[0]) && ((absolute->size[0] != 1)
         && (Y_stary_star->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(absolute->size[0], Y_stary_star->size[0],
        &qb_emlrtECI, (emlrtCTX)sp);
    }

    if (absolute->size[0] == Y_stary_star->size[0]) {
      loop_ub = absolute->size[0];
      for (i = 0; i < loop_ub; i++) {
        absolute_data[i] += Y_stary_star_data[i];
      }
    } else {
      plus(sp, absolute, Y_stary_star);
    }

    st.site = &uh_emlrtRSI;
    b_sqrt(&st, absolute);
    absolute_data = absolute->data;
    i = test->size[0];
    test->size[0] = absolute->size[0];
    emxEnsureCapacity_boolean_T(sp, test, i, &xh_emlrtRTEI);
    test_data = test->data;
    loop_ub = absolute->size[0];
    for (i = 0; i < loop_ub; i++) {
      test_data[i] = (absolute_data[i] < 1.0);
    }

    st.site = &vh_emlrtRSI;
    b_st.site = &pj_emlrtRSI;
    c_st.site = &qj_emlrtRSI;
    d_st.site = &rj_emlrtRSI;
    if (test->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &ed_emlrtRSI;
    nx = test->size[0];
    f_st.site = &sj_emlrtRSI;
    empty_non_axis_sizes = test_data[0];
    g_st.site = &tj_emlrtRSI;
    if ((2 <= test->size[0]) && (test->size[0] > 2147483646)) {
      h_st.site = &bc_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (n = 2; n <= nx; n++) {
      b_b = test_data[n - 1];
      empty_non_axis_sizes = (((int32_T)empty_non_axis_sizes <= (int32_T)b_b) &&
        empty_non_axis_sizes);
    }

    if (empty_non_axis_sizes) {
      exitg1 = 1;
    } else {
      iter++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }

      if (iter > 1000) {
        i = G->size[0] * G->size[1];
        G->size[0] = G0->size[0];
        G->size[1] = G0->size[1];
        emxEnsureCapacity_real_T(sp, G, i, &yh_emlrtRTEI);
        G_data = G->data;
        loop_ub = G0->size[0] * G0->size[1];
        for (i = 0; i < loop_ub; i++) {
          G_data[i] = G0_data[i];
        }

        exitg1 = 1;
      }
    }
  } while (exitg1 == 0);

  emxFree_real_T(sp, &result);
  emxFree_boolean_T(sp, &test);
  emxFree_creal_T(sp, &eigen);
  st.site = &wh_emlrtRSI;
  kron(&st, G, G, Y_starY_star);
  Y_starY_star_data = Y_starY_star->data;
  st.site = &xh_emlrtRSI;
  eye(&st, Y_starY_star->size[0], b);
  center_hat_data = b->data;
  if ((b->size[0] != Y_starY_star->size[0]) && ((b->size[0] != 1) &&
       (Y_starY_star->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b->size[0], Y_starY_star->size[0], &pb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((b->size[1] != Y_starY_star->size[1]) && ((b->size[1] != 1) &&
       (Y_starY_star->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b->size[1], Y_starY_star->size[1], &ob_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &xh_emlrtRSI;
  if ((b->size[0] == Y_starY_star->size[0]) && (b->size[1] == Y_starY_star->
       size[1])) {
    i = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = b->size[0];
    vec_Sigma->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, vec_Sigma, i, &ai_emlrtRTEI);
    absolute_data = vec_Sigma->data;
    loop_ub = b->size[0] * b->size[1];
    for (i = 0; i < loop_ub; i++) {
      absolute_data[i] = center_hat_data[i] - Y_starY_star_data[i];
    }

    b_st.site = &xh_emlrtRSI;
    inv(&b_st, vec_Sigma, Y_starY_star);
  } else {
    b_st.site = &xh_emlrtRSI;
    p_binary_expand_op(&b_st, Y_starY_star, xh_emlrtRSI, b);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = e1->size[0];
  b->size[1] = e1->size[0];
  emxEnsureCapacity_real_T(&st, b, i, &bi_emlrtRTEI);
  center_hat_data = b->data;
  loop_ub = e1->size[0];
  for (i = 0; i < loop_ub; i++) {
    nx = e1->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      center_hat_data[i1 + b->size[0] * i] = e1_data[i1] * e1_data[i];
    }
  }

  emxFree_int8_T(&st, &e1);
  b_st.site = &xh_emlrtRSI;
  vec(&b_st, b);
  b_st.site = &md_emlrtRSI;
  c_dynamic_size_checks(&b_st, Y_starY_star, b, Y_starY_star->size[1], b->size[0]);
  b_st.site = &od_emlrtRSI;
  c_mtimes(&b_st, Y_starY_star, b, vec_Sigma);
  st.site = &yh_emlrtRSI;
  nx = vec_Sigma->size[0] * vec_Sigma->size[1];
  b_st.site = &mg_emlrtRSI;
  c_st.site = &lg_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  c_st.site = &lg_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  n = vec_Sigma->size[0];
  emxFree_real_T(&st, &b);
  if (vec_Sigma->size[1] > vec_Sigma->size[0]) {
    n = vec_Sigma->size[1];
  }

  if (phi0->size[0] > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (phi0->size[0] * phi0->size[0] != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  nx = phi0->size[0];
  n = phi0->size[0];
  b_vec_Sigma = *vec_Sigma;
  b_center_hat[0] = nx;
  b_center_hat[1] = n;
  b_vec_Sigma.size = &b_center_hat[0];
  b_vec_Sigma.numDimensions = 2;
  st.site = &ai_emlrtRSI;
  inv(&st, &b_vec_Sigma, Y_starY_star);
  rss = 0.0;
  i = X->size[0] - phi0->size[0];
  emlrtForLoopVectorCheckR2021a((real_T)phi0->size[0] + 1.0, 1.0, X->size[0],
    mxDOUBLE_CLASS, i, &ab_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &b_G, 2, &ii_emlrtRTEI);
  for (t = 0; t < i; t++) {
    b_t = ((uint32_T)p + t) + 1U;
    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &me_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = r->size[0];
    r->size[0] = (int32_T)-((0.0 - (real_T)p) - -1.0) + 1;
    emxEnsureCapacity_real_T(sp, r, i1, &ci_emlrtRTEI);
    r1 = r->data;
    loop_ub = (int32_T)-((0.0 - (real_T)p) - -1.0);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      r1[i1] = (real_T)b_t + (-1.0 - (real_T)i1);
    }

    i1 = absolute->size[0];
    absolute->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, absolute, i1, &di_emlrtRTEI);
    absolute_data = absolute->data;
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = (int32_T)r1[i1];
      if ((iter < 1) || (iter > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r1[i1], 1, y_star->size[0],
          &od_emlrtBCI, (emlrtCTX)sp);
      }

      absolute_data[i1] = y_star_data[iter - 1];
    }

    if (1 > G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &le_emlrtBCI, (emlrtCTX)sp);
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &je_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = Y_stary_star->size[0];
    Y_stary_star->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, Y_stary_star, i1, &ei_emlrtRTEI);
    Y_stary_star_data = Y_stary_star->data;
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = (int32_T)r1[i1];
      if ((iter < 1) || (iter > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r1[i1], 1, y_star->size[0],
          &nd_emlrtBCI, (emlrtCTX)sp);
      }

      Y_stary_star_data[i1] = y_star_data[iter - 1];
    }

    if (1 > G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &ie_emlrtBCI, (emlrtCTX)sp);
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &ne_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &ke_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &bi_emlrtRSI;
    loop_ub = G->size[1];
    i1 = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = G->size[1];
    emxEnsureCapacity_real_T(&st, b_y_star, i1, &hi_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_y_star_data[i1] = G_data[G->size[0] * i1];
    }

    b_st.site = &md_emlrtRSI;
    f_dynamic_size_checks(&b_st, absolute, b_y_star, r->size[0], G->size[1]);
    st.site = &bi_emlrtRSI;
    loop_ub = G->size[1];
    i1 = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = G->size[1];
    emxEnsureCapacity_real_T(&st, b_y_star, i1, &ii_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_y_star_data[i1] = G_data[G->size[0] * i1];
    }

    b_st.site = &md_emlrtRSI;
    f_dynamic_size_checks(&b_st, Y_stary_star, b_y_star, r->size[0], G->size[1]);
    loop_ub = G->size[1];
    i1 = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = G->size[1];
    emxEnsureCapacity_real_T(sp, b_y_star, i1, &hi_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    i1 = b_G->size[0] * b_G->size[1];
    b_G->size[0] = 1;
    b_G->size[1] = G->size[1];
    emxEnsureCapacity_real_T(sp, b_G, i1, &ii_emlrtRTEI);
    center_hat_data = b_G->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      d = G_data[G->size[0] * i1];
      b_y_star_data[i1] = d;
      center_hat_data[i1] = d;
    }

    if (((int32_T)b_t < 1) || ((int32_T)b_t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_t, 1, y_star->size[0],
        &ld_emlrtBCI, (emlrtCTX)sp);
    }

    if (((int32_T)b_t < 1) || ((int32_T)b_t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_t, 1, y_star->size[0],
        &md_emlrtBCI, (emlrtCTX)sp);
    }

    numer2 = y_star_data[(int32_T)b_t - 1];
    rss += (numer2 - e_mtimes(absolute, b_y_star)) * (numer2 - e_mtimes
      (Y_stary_star, b_G));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  st.site = &ci_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, X_p, beta, r);
  r1 = r->data;
  if ((Y_p->size[0] != r->size[0]) && ((Y_p->size[0] != 1) && (r->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Y_p->size[0], r->size[0], &nb_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &ci_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, X_p, beta, Y_stary_star);
  if ((Y_p->size[0] != Y_stary_star->size[0]) && ((Y_p->size[0] != 1) &&
       (Y_stary_star->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y_p->size[0], Y_stary_star->size[0],
      &mb_emlrtECI, (emlrtCTX)sp);
  }

  if (1 > G->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &he_emlrtBCI, (emlrtCTX)sp);
  }

  deno1_data = 0.5 * sig2_inv_data[0];
  emxInit_real_T(sp, &y, 2, &bj_emlrtRTEI);
  if (Y_p->size[0] == r->size[0]) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = Y_p->size[0];
    emxEnsureCapacity_real_T(sp, y, i, &fi_emlrtRTEI);
    center_hat_data = y->data;
    loop_ub = Y_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      center_hat_data[i] = deno1_data * (Y_p_data[i] - r1[i]);
    }
  } else {
    st.site = &im_emlrtRSI;
    o_binary_expand_op(&st, y, (real_T *)&deno1_data, Y_p, r);
  }

  st.site = &ci_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  g_dynamic_size_checks(&b_st, y, Y_starY_star, y->size[1], Y_starY_star->size[0]);
  b_st.site = &od_emlrtRSI;
  h_mtimes(&b_st, y, Y_starY_star, b_y_star);
  st.site = &ci_emlrtRSI;
  emxFree_real_T(&st, &Y_starY_star);
  if (Y_p->size[0] == Y_stary_star->size[0]) {
    i = Y_stary_star->size[0];
    Y_stary_star->size[0] = Y_p->size[0];
    emxEnsureCapacity_real_T(&st, Y_stary_star, i, &gi_emlrtRTEI);
    Y_stary_star_data = Y_stary_star->data;
    loop_ub = Y_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_stary_star_data[i] = Y_p_data[i] - Y_stary_star_data[i];
    }
  } else {
    b_st.site = &ci_emlrtRSI;
    minus(&b_st, Y_stary_star, Y_p);
  }

  b_st.site = &md_emlrtRSI;
  dynamic_size_checks(&b_st, b_y_star, Y_stary_star, b_y_star->size[1],
                      Y_stary_star->size[0]);
  nx = phi0->size[0];
  n = phi0->size[0];
  b_vec_Sigma = *vec_Sigma;
  c_center_hat[0] = nx;
  c_center_hat[1] = n;
  b_vec_Sigma.size = &c_center_hat[0];
  b_vec_Sigma.numDimensions = 2;
  st.site = &ci_emlrtRSI;
  d = det(&st, &b_vec_Sigma);
  st.site = &ci_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  d = muDoubleScalarLog(d);
  loop_ub = G->size[1];
  i = absolute->size[0];
  absolute->size[0] = G->size[1];
  emxEnsureCapacity_real_T(sp, absolute, i, &ji_emlrtRTEI);
  absolute_data = absolute->data;
  for (i = 0; i < loop_ub; i++) {
    absolute_data[i] = G_data[G->size[0] * i];
  }

  st.site = &di_emlrtRSI;
  numer2 = lnpdfmvn(&st, absolute, phi0, PHI0);
  numer1_data = ((-0.5 * d - mtimes(b_y_star, Y_stary_star)) - deno1_data * rss)
    + numer2;
  rss = 0.0;
  i = X->size[0] - phi0->size[0];
  emlrtForLoopVectorCheckR2021a((real_T)phi0->size[0] + 1.0, 1.0, X->size[0],
    mxDOUBLE_CLASS, i, &y_emlrtRTEI, (emlrtCTX)sp);
  for (t = 0; t < i; t++) {
    b_t = ((uint32_T)p + t) + 1U;
    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &fe_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = r->size[0];
    r->size[0] = (int32_T)-((0.0 - (real_T)p) - -1.0) + 1;
    emxEnsureCapacity_real_T(sp, r, i1, &ki_emlrtRTEI);
    r1 = r->data;
    loop_ub = (int32_T)-((0.0 - (real_T)p) - -1.0);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      r1[i1] = (real_T)b_t + (-1.0 - (real_T)i1);
    }

    i1 = absolute->size[0];
    absolute->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, absolute, i1, &li_emlrtRTEI);
    absolute_data = absolute->data;
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = (int32_T)r1[i1];
      if ((iter < 1) || (iter > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r1[i1], 1, y_star->size[0],
          &kd_emlrtBCI, (emlrtCTX)sp);
      }

      absolute_data[i1] = y_star_data[iter - 1];
    }

    if (1 > G0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &ee_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &ce_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = Y_stary_star->size[0];
    Y_stary_star->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, Y_stary_star, i1, &mi_emlrtRTEI);
    Y_stary_star_data = Y_stary_star->data;
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = (int32_T)r1[i1];
      if ((iter < 1) || (iter > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r1[i1], 1, y_star->size[0],
          &jd_emlrtBCI, (emlrtCTX)sp);
      }

      Y_stary_star_data[i1] = y_star_data[iter - 1];
    }

    if (1 > G0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &be_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &ge_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (1 > y_star->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, y_star->size[1], &de_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &ei_emlrtRSI;
    loop_ub = G0->size[1];
    i1 = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(&st, b_y_star, i1, &oi_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_y_star_data[i1] = G0_data[G0->size[0] * i1];
    }

    b_st.site = &md_emlrtRSI;
    f_dynamic_size_checks(&b_st, absolute, b_y_star, r->size[0], G0->size[1]);
    st.site = &ei_emlrtRSI;
    loop_ub = G0->size[1];
    i1 = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(&st, b_y_star, i1, &qi_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_y_star_data[i1] = G0_data[G0->size[0] * i1];
    }

    b_st.site = &md_emlrtRSI;
    f_dynamic_size_checks(&b_st, Y_stary_star, b_y_star, r->size[0], G0->size[1]);
    loop_ub = G0->size[1];
    i1 = b_y_star->size[0] * b_y_star->size[1];
    b_y_star->size[0] = 1;
    b_y_star->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(sp, b_y_star, i1, &oi_emlrtRTEI);
    b_y_star_data = b_y_star->data;
    i1 = b_G->size[0] * b_G->size[1];
    b_G->size[0] = 1;
    b_G->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(sp, b_G, i1, &qi_emlrtRTEI);
    center_hat_data = b_G->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      d = G0_data[G0->size[0] * i1];
      b_y_star_data[i1] = d;
      center_hat_data[i1] = d;
    }

    if (((int32_T)b_t < 1) || ((int32_T)b_t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_t, 1, y_star->size[0],
        &hd_emlrtBCI, (emlrtCTX)sp);
    }

    if (((int32_T)b_t < 1) || ((int32_T)b_t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_t, 1, y_star->size[0],
        &id_emlrtBCI, (emlrtCTX)sp);
    }

    numer2 = y_star_data[(int32_T)b_t - 1];
    rss += (numer2 - e_mtimes(absolute, b_y_star)) * (numer2 - e_mtimes
      (Y_stary_star, b_G));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_G);
  emxFree_real_T(sp, &y_star);
  st.site = &fi_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, X_p, beta, r);
  r1 = r->data;
  if ((Y_p->size[0] != r->size[0]) && ((Y_p->size[0] != 1) && (r->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Y_p->size[0], r->size[0], &lb_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &fi_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, X_p, beta, Y_stary_star);
  if ((Y_p->size[0] != Y_stary_star->size[0]) && ((Y_p->size[0] != 1) &&
       (Y_stary_star->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y_p->size[0], Y_stary_star->size[0],
      &kb_emlrtECI, (emlrtCTX)sp);
  }

  if (1 > G0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &ae_emlrtBCI, (emlrtCTX)sp);
  }

  if (Y_p->size[0] == r->size[0]) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = Y_p->size[0];
    emxEnsureCapacity_real_T(sp, y, i, &fi_emlrtRTEI);
    center_hat_data = y->data;
    loop_ub = Y_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      center_hat_data[i] = deno1_data * (Y_p_data[i] - r1[i]);
    }
  } else {
    st.site = &im_emlrtRSI;
    o_binary_expand_op(&st, y, (real_T *)&deno1_data, Y_p, r);
  }

  emxFree_real_T(sp, &r);
  st.site = &fi_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  g_dynamic_size_checks(&b_st, y, inv_Sigma0, y->size[1], inv_Sigma0->size[0]);
  b_st.site = &od_emlrtRSI;
  h_mtimes(&b_st, y, inv_Sigma0, b_y_star);
  st.site = &fi_emlrtRSI;
  emxFree_real_T(&st, &y);
  if (Y_p->size[0] == Y_stary_star->size[0]) {
    i = Y_stary_star->size[0];
    Y_stary_star->size[0] = Y_p->size[0];
    emxEnsureCapacity_real_T(&st, Y_stary_star, i, &ni_emlrtRTEI);
    Y_stary_star_data = Y_stary_star->data;
    loop_ub = Y_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_stary_star_data[i] = Y_p_data[i] - Y_stary_star_data[i];
    }
  } else {
    b_st.site = &fi_emlrtRSI;
    minus(&b_st, Y_stary_star, Y_p);
  }

  b_st.site = &md_emlrtRSI;
  dynamic_size_checks(&b_st, b_y_star, Y_stary_star, b_y_star->size[1],
                      Y_stary_star->size[0]);
  st.site = &fi_emlrtRSI;
  d = det(&st, Sigma0);
  st.site = &fi_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  d = muDoubleScalarLog(d);
  loop_ub = G0->size[1];
  i = absolute->size[0];
  absolute->size[0] = G0->size[1];
  emxEnsureCapacity_real_T(sp, absolute, i, &pi_emlrtRTEI);
  absolute_data = absolute->data;
  for (i = 0; i < loop_ub; i++) {
    absolute_data[i] = G0_data[G0->size[0] * i];
  }

  st.site = &gi_emlrtRSI;
  numer2 = lnpdfmvn(&st, absolute, phi0, PHI0);
  deno1_data = ((-0.5 * d - mtimes(b_y_star, Y_stary_star)) - deno1_data * rss)
    + numer2;
  emxFree_real_T(sp, &b_y_star);
  if ((PHI_hat->size[0] != PHI_hat->size[1]) && ((PHI_hat->size[0] != 1) &&
       (PHI_hat->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(PHI_hat->size[0], PHI_hat->size[1], &jb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((PHI_hat->size[0] != PHI_hat->size[1]) && ((PHI_hat->size[1] != 1) &&
       (PHI_hat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(PHI_hat->size[1], PHI_hat->size[0], &ib_emlrtECI,
      (emlrtCTX)sp);
  }

  if (PHI_hat->size[0] == PHI_hat->size[1]) {
    i = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = PHI_hat->size[0];
    vec_Sigma->size[1] = PHI_hat->size[1];
    emxEnsureCapacity_real_T(sp, vec_Sigma, i, &od_emlrtRTEI);
    absolute_data = vec_Sigma->data;
    loop_ub = PHI_hat->size[1];
    for (i = 0; i < loop_ub; i++) {
      nx = PHI_hat->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        absolute_data[i1 + vec_Sigma->size[0] * i] = 0.5 * (PHI_hat_data[i1 +
          PHI_hat->size[0] * i] + PHI_hat_data[i + PHI_hat->size[0] * i1]);
      }
    }

    i = PHI_hat->size[0] * PHI_hat->size[1];
    PHI_hat->size[0] = vec_Sigma->size[0];
    PHI_hat->size[1] = vec_Sigma->size[1];
    emxEnsureCapacity_real_T(sp, PHI_hat, i, &ri_emlrtRTEI);
    PHI_hat_data = PHI_hat->data;
    loop_ub = vec_Sigma->size[0] * vec_Sigma->size[1];
    for (i = 0; i < loop_ub; i++) {
      PHI_hat_data[i] = absolute_data[i];
    }
  } else {
    st.site = &hm_emlrtRSI;
    n_binary_expand_op(&st, PHI_hat);
  }

  emxFree_real_T(sp, &vec_Sigma);
  if (1 > G0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &yd_emlrtBCI, (emlrtCTX)sp);
  }

  st.site = &hi_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, PHI_hat, center_hat, PHI_hat->size[1],
                        center_hat->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, PHI_hat, center_hat, Y_stary_star);
  loop_ub = G0->size[1];
  i = absolute->size[0];
  absolute->size[0] = G0->size[1];
  emxEnsureCapacity_real_T(sp, absolute, i, &si_emlrtRTEI);
  absolute_data = absolute->data;
  for (i = 0; i < loop_ub; i++) {
    absolute_data[i] = G0_data[G0->size[0] * i];
  }

  st.site = &hi_emlrtRSI;
  numer2 = lnpdfmvn(&st, absolute, Y_stary_star, PHI_hat);
  if (1 > G->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &xd_emlrtBCI, (emlrtCTX)sp);
  }

  st.site = &ii_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  b_dynamic_size_checks(&b_st, PHI_hat, center_hat, PHI_hat->size[1],
                        center_hat->size[0]);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, PHI_hat, center_hat, Y_stary_star);
  loop_ub = G->size[1];
  i = absolute->size[0];
  absolute->size[0] = G->size[1];
  emxEnsureCapacity_real_T(sp, absolute, i, &ti_emlrtRTEI);
  absolute_data = absolute->data;
  emxFree_real_T(sp, &center_hat);
  for (i = 0; i < loop_ub; i++) {
    absolute_data[i] = G_data[G->size[0] * i];
  }

  st.site = &ii_emlrtRSI;
  rss = lnpdfmvn(&st, absolute, Y_stary_star, PHI_hat);
  st.site = &ji_emlrtRSI;
  d = b_rand();
  st.site = &ji_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  d = muDoubleScalarLog(d);
  emxFree_real_T(sp, &absolute);
  emxFree_real_T(sp, &PHI_hat);
  emxFree_real_T(sp, &Y_stary_star);
  if (!(d < muDoubleScalarMin(((numer1_data + numer2) - deno1_data) - rss, 0.0)))
  {
    i = G->size[0] * G->size[1];
    G->size[0] = G0->size[0];
    G->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(sp, G, i, &ui_emlrtRTEI);
    G_data = G->data;
    loop_ub = G0->size[0] * G0->size[1];
    for (i = 0; i < loop_ub; i++) {
      G_data[i] = G0_data[i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X_p, const
                     emxArray_real_T *Y_p, const emxArray_real_T *X_hatX_hat,
                     const emxArray_real_T *X_hatY_hat, const emxArray_real_T
                     *inv_Sigma, const emxArray_real_T *b0, const
                     emxArray_real_T *precb0, const emxArray_real_T *sig2_inv,
                     emxArray_real_T *beta)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *B1;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  const real_T *X_hatX_hat_data;
  const real_T *X_hatY_hat_data;
  const real_T *precb0_data;
  const real_T *sig2_inv_data;
  real_T b_sig2_inv;
  real_T *A_data;
  real_T *B1_data;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  sig2_inv_data = sig2_inv->data;
  precb0_data = precb0->data;
  X_hatY_hat_data = X_hatY_hat->data;
  X_hatX_hat_data = X_hatX_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, 2, &ah_emlrtRTEI);
  st.site = &og_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (X_p->size[0] != inv_Sigma->size[0]) {
    if (((X_p->size[0] == 1) && (X_p->size[1] == 1)) || ((inv_Sigma->size[0] ==
          1) && (inv_Sigma->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &od_emlrtRSI;
  f_mtimes(&b_st, X_p, inv_Sigma, y);
  st.site = &og_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (X_p->size[0] != y->size[1]) {
    if (((y->size[0] == 1) && (y->size[1] == 1)) || ((X_p->size[0] == 1) &&
         (X_p->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &r, 2, &yg_emlrtRTEI);
  b_st.site = &od_emlrtRSI;
  c_mtimes(&b_st, y, X_p, r);
  r1 = r->data;
  if ((r->size[0] != X_hatX_hat->size[0]) && ((r->size[0] != 1) &&
       (X_hatX_hat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[0], X_hatX_hat->size[0], &y_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((r->size[1] != X_hatX_hat->size[1]) && ((r->size[1] != 1) &&
       (X_hatX_hat->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[1], X_hatX_hat->size[1], &ab_emlrtECI,
      (emlrtCTX)sp);
  }

  if (1 > sig2_inv->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, sig2_inv->size[1], &cd_emlrtBCI,
      (emlrtCTX)sp);
  }

  if ((r->size[0] == X_hatX_hat->size[0]) && (r->size[1] == X_hatX_hat->size[1]))
  {
    b_sig2_inv = sig2_inv_data[0];
    loop_ub = r->size[0] * r->size[1];
    for (i = 0; i < loop_ub; i++) {
      r1[i] = b_sig2_inv * (r1[i] + X_hatX_hat_data[i]);
    }
  } else {
    st.site = &og_emlrtRSI;
    m_binary_expand_op(&st, r, sig2_inv, X_hatX_hat);
    r1 = r->data;
  }

  if ((r->size[0] != precb0->size[0]) && ((r->size[0] != 1) && (precb0->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[0], precb0->size[0], &bb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((r->size[1] != precb0->size[1]) && ((r->size[1] != 1) && (precb0->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[1], precb0->size[1], &cb_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &B1, 2, &wg_emlrtRTEI);
  if ((r->size[0] == precb0->size[0]) && (r->size[1] == precb0->size[1])) {
    i = y->size[0] * y->size[1];
    y->size[0] = r->size[0];
    y->size[1] = r->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &ug_emlrtRTEI);
    B1_data = y->data;
    loop_ub = r->size[0] * r->size[1];
    for (i = 0; i < loop_ub; i++) {
      B1_data[i] = r1[i] + precb0_data[i];
    }

    st.site = &pg_emlrtRSI;
    inv(&st, y, B1);
    B1_data = B1->data;
  } else {
    st.site = &pg_emlrtRSI;
    l_binary_expand_op(&st, B1, pg_emlrtRSI, r, precb0);
    B1_data = B1->data;
  }

  st.site = &qg_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (X_p->size[0] != inv_Sigma->size[0]) {
    if (((X_p->size[0] == 1) && (X_p->size[1] == 1)) || ((inv_Sigma->size[0] ==
          1) && (inv_Sigma->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &od_emlrtRSI;
  f_mtimes(&b_st, X_p, inv_Sigma, y);
  st.site = &qg_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (Y_p->size[0] != y->size[1]) {
    if (((y->size[0] == 1) && (y->size[1] == 1)) || (Y_p->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &A, 1, &xg_emlrtRTEI);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, y, Y_p, A);
  A_data = A->data;
  emxFree_real_T(sp, &y);
  if ((A->size[0] != X_hatY_hat->size[0]) && ((A->size[0] != 1) &&
       (X_hatY_hat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[0], X_hatY_hat->size[0], &db_emlrtECI,
      (emlrtCTX)sp);
  }

  if (1 > sig2_inv->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, sig2_inv->size[1], &dd_emlrtBCI,
      (emlrtCTX)sp);
  }

  if (A->size[0] == X_hatY_hat->size[0]) {
    b_sig2_inv = sig2_inv_data[0];
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = b_sig2_inv * (A_data[i] + X_hatY_hat_data[i]);
    }
  } else {
    st.site = &qg_emlrtRSI;
    k_binary_expand_op(&st, A, sig2_inv, X_hatY_hat);
    A_data = A->data;
  }

  st.site = &qg_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (b0->size[0] != precb0->size[1]) {
    if (((precb0->size[0] == 1) && (precb0->size[1] == 1)) || (b0->size[0] == 1))
    {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &r2, 1, &yg_emlrtRTEI);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, precb0, b0, r2);
  r1 = r2->data;
  if ((A->size[0] != r2->size[0]) && ((A->size[0] != 1) && (r2->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(A->size[0], r2->size[0], &eb_emlrtECI, (emlrtCTX)
      sp);
  }

  if (A->size[0] == r2->size[0]) {
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] += r1[i];
    }
  } else {
    st.site = &qg_emlrtRSI;
    plus(&st, A, r2);
  }

  st.site = &rg_emlrtRSI;
  i = r->size[0] * r->size[1];
  r->size[0] = B1->size[0];
  r->size[1] = B1->size[1];
  emxEnsureCapacity_real_T(&st, r, i, &vg_emlrtRTEI);
  r1 = r->data;
  loop_ub = B1->size[0] * B1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1[i] = B1_data[i];
  }

  b_st.site = &sg_emlrtRSI;
  cholesky(&b_st, r);
  st.site = &rg_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (A->size[0] != B1->size[1]) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, B1, A, beta);
  B1_data = beta->data;
  st.site = &rg_emlrtRSI;

  /*  number of columns */
  b_st.site = &rg_emlrtRSI;
  randn(&b_st, X_p->size[1], A);
  b_st.site = &md_emlrtRSI;
  emxFree_real_T(&b_st, &B1);
  if (r->size[0] != A->size[0]) {
    if (((r->size[0] == 1) && (r->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &od_emlrtRSI;
  g_mtimes(&b_st, r, A, r2);
  r1 = r2->data;
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &A);
  if ((beta->size[0] != r2->size[0]) && ((beta->size[0] != 1) && (r2->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], r2->size[0], &fb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (beta->size[0] == r2->size[0]) {
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      B1_data[i] += r1[i];
    }
  } else {
    st.site = &rg_emlrtRSI;
    plus(&st, beta, r2);
  }

  emxFree_real_T(sp, &r2);

  /*  beta sampling ���� */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y_p, const
  emxArray_real_T *X_p, const emxArray_real_T *X_hat, const emxArray_real_T
  *Y_hat, const emxArray_real_T *inv_Sigma, const emxArray_real_T *beta, real_T
  a0, real_T d0)
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
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *r;
  real_T ur[2];
  const real_T *X_hat_data;
  const real_T *Y_hat_data;
  const real_T *Y_p_data;
  const real_T *beta_data;
  real_T b_b;
  real_T c;
  real_T d;
  real_T ehat;
  real_T gam;
  real_T sig2;
  real_T u;
  real_T v;
  real_T *a_data;
  real_T *b_data;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T iter;
  uint32_T T;
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
  beta_data = beta->data;
  Y_hat_data = Y_hat->data;
  X_hat_data = X_hat->data;
  Y_p_data = Y_p->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  T = (uint32_T)X_p->size[0] + X_hat->size[0];
  ehat = 0.0;
  gam = (real_T)T - (real_T)inv_Sigma->size[0];
  i = (int32_T)gam;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, gam, mxDOUBLE_CLASS, (int32_T)gam,
    &w_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &a, 2, &ch_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    st.site = &yg_emlrtRSI;
    if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > X_hat->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, X_hat->size[0],
        &fd_emlrtBCI, &st);
    }

    iter = X_hat->size[1];
    i1 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X_hat->size[1];
    emxEnsureCapacity_real_T(&st, a, i1, &ch_emlrtRTEI);
    a_data = a->data;
    for (i1 = 0; i1 < iter; i1++) {
      a_data[i1] = X_hat_data[b_i + X_hat->size[0] * i1];
    }

    b_st.site = &md_emlrtRSI;
    iter = X_hat->size[1];
    if (beta->size[0] != X_hat->size[1]) {
      if ((X_hat->size[1] == 1) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (X_hat->size[1] < 1) {
      c = 0.0;
    } else {
      n_t = (ptrdiff_t)X_hat->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      c = ddot(&n_t, &a_data[0], &incx_t, &beta_data[0], &incy_t);
    }

    st.site = &yg_emlrtRSI;
    if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > X_hat->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, X_hat->size[0],
        &ed_emlrtBCI, &st);
    }

    i1 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X_hat->size[1];
    emxEnsureCapacity_real_T(&st, a, i1, &eh_emlrtRTEI);
    a_data = a->data;
    for (i1 = 0; i1 < iter; i1++) {
      a_data[i1] = X_hat_data[b_i + X_hat->size[0] * i1];
    }

    b_st.site = &md_emlrtRSI;
    if (beta->size[0] != X_hat->size[1]) {
      if ((X_hat->size[1] == 1) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (X_hat->size[1] < 1) {
      gam = 0.0;
    } else {
      n_t = (ptrdiff_t)X_hat->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      gam = ddot(&n_t, &a_data[0], &incx_t, &beta_data[0], &incy_t);
    }

    if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > Y_hat->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, Y_hat->size[0],
        &gd_emlrtBCI, (emlrtCTX)sp);
    }

    ehat += (Y_hat_data[b_i] - c) * (Y_hat_data[b_i] - gam);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  st.site = &ah_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (beta->size[0] != X_p->size[1]) {
    if (((X_p->size[0] == 1) && (X_p->size[1] == 1)) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &r, 1, &gh_emlrtRTEI);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, X_p, beta, r);
  if ((Y_p->size[0] != r->size[0]) && ((Y_p->size[0] != 1) && (r->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Y_p->size[0], r->size[0], &hb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (Y_p->size[0] == r->size[0]) {
    i = r->size[0];
    r->size[0] = Y_p->size[0];
    emxEnsureCapacity_real_T(sp, r, i, &dh_emlrtRTEI);
    b_data = r->data;
    iter = Y_p->size[0];
    for (i = 0; i < iter; i++) {
      b_data[i] = Y_p_data[i] - b_data[i];
    }
  } else {
    st.site = &ah_emlrtRSI;
    minus(&st, r, Y_p);
  }

  st.site = &ah_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (beta->size[0] != X_p->size[1]) {
    if (((X_p->size[0] == 1) && (X_p->size[1] == 1)) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &b, 1, &fh_emlrtRTEI);
  b_st.site = &od_emlrtRSI;
  b_mtimes(&b_st, X_p, beta, b);
  if ((Y_p->size[0] != b->size[0]) && ((Y_p->size[0] != 1) && (b->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Y_p->size[0], b->size[0], &gb_emlrtECI,
      (emlrtCTX)sp);
  }

  st.site = &ah_emlrtRSI;
  b_st.site = &md_emlrtRSI;
  if (r->size[0] != inv_Sigma->size[0]) {
    if ((r->size[0] == 1) || ((inv_Sigma->size[0] == 1) && (inv_Sigma->size[1] ==
          1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &od_emlrtRSI;
  d_mtimes(&b_st, r, inv_Sigma, a);
  a_data = a->data;
  st.site = &ah_emlrtRSI;
  emxFree_real_T(&st, &r);
  if (Y_p->size[0] == b->size[0]) {
    i = b->size[0];
    b->size[0] = Y_p->size[0];
    emxEnsureCapacity_real_T(&st, b, i, &fh_emlrtRTEI);
    b_data = b->data;
    iter = Y_p->size[0];
    for (i = 0; i < iter; i++) {
      b_data[i] = Y_p_data[i] - b_data[i];
    }
  } else {
    b_st.site = &ah_emlrtRSI;
    minus(&b_st, b, Y_p);
    b_data = b->data;
  }

  b_st.site = &md_emlrtRSI;
  if (b->size[0] != a->size[1]) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (a->size[1] < 1) {
    c = 0.0;
  } else {
    n_t = (ptrdiff_t)a->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    c = ddot(&n_t, &a_data[0], &incx_t, &b_data[0], &incy_t);
  }

  emxFree_real_T(&st, &b);
  emxFree_real_T(&st, &a);
  st.site = &bh_emlrtRSI;
  gam = (a0 + (real_T)T) / 2.0;

  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &ch_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b_b = 1.0 / (((d0 + c) + ehat) / 2.0);
  c_st.site = &dh_emlrtRSI;
  d_st.site = &eh_emlrtRSI;
  e_st.site = &fh_emlrtRSI;
  f_st.site = &gh_emlrtRSI;
  g_st.site = &hh_emlrtRSI;
  if (gam <= 0.0) {
    if (gam == 0.0) {
      gam = 0.0;
    } else {
      gam = rtNaN;
    }
  } else if ((!muDoubleScalarIsInf(gam)) && (!muDoubleScalarIsNaN(gam))) {
    if (gam >= 1.0) {
      d = gam - 0.33333333333333331;
      u = b_rand();
      gam = 1.0;
    } else {
      d = (gam + 1.0) - 0.33333333333333331;
      c_rand(ur);
      u = ur[0];
      if (gam < 7.4567656047833286E-20) {
        gam = 0.0;
      } else {
        h_st.site = &hh_emlrtRSI;
        gam = b_mpower(&h_st, ur[1], 1.0 / gam);
      }
    }

    c = 1.0 / muDoubleScalarSqrt(9.0 * d);
    iter = 0;
    ehat = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * ehat + 1.0) {
        ehat = b_randn();
      }

      v *= v * v;
      ehat *= ehat;
      if (u < 1.0 - 0.0331 * ehat * ehat) {
        exitg1 = 1;
      } else {
        h_st.site = &hh_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(&h_st, &v_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 3, "log");
        }

        if (muDoubleScalarLog(u) < 0.5 * ehat + d * ((1.0 - v) +
             muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            h_st.site = &hh_emlrtRSI;
            d_warning(&h_st);
            exitg1 = 1;
          } else {
            u = b_rand();
          }
        }
      }
    } while (exitg1 == 0);

    gam *= d * v;
  }

  gam *= b_b;
  if (b_b < 0.0) {
    gam = rtNaN;
  }

  sig2 = 1.0 / gam;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return sig2;
}

static real_T b_binary_expand_op(const emlrtStack *sp, emlrtRSInfo jm_emlrtRSI,
  const emxArray_real_T *Y, int32_T i2, const emxArray_real_T *e1, const
  emxArray_real_T *sig2, const emxArray_real_T *Sigma)
{
  emlrtStack st;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_sig2;
  const real_T *Sigma_data;
  const real_T *Y_data;
  const real_T *sig2_data;
  real_T x;
  real_T *b_Y_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  Sigma_data = Sigma->data;
  sig2_data = sig2->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y, 1, &ad_emlrtRTEI);
  i = b_Y->size[0];
  b_Y->size[0] = i2 + 1;
  emxEnsureCapacity_real_T(sp, b_Y, i, &ad_emlrtRTEI);
  b_Y_data = b_Y->data;
  for (i = 0; i <= i2; i++) {
    b_Y_data[i] = Y_data[i];
  }

  emxInit_real_T(sp, &b_sig2, 2, &xd_emlrtRTEI);
  i = b_sig2->size[0] * b_sig2->size[1];
  if (Sigma->size[0] == 1) {
    b_sig2->size[0] = 1;
  } else {
    b_sig2->size[0] = Sigma->size[0];
  }

  b_sig2->size[1] = Sigma->size[1];
  emxEnsureCapacity_real_T(sp, b_sig2, i, &xd_emlrtRTEI);
  b_Y_data = b_sig2->data;
  stride_1_0 = (Sigma->size[0] != 1);
  loop_ub = Sigma->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (Sigma->size[0] == 1) {
      b_loop_ub = 1;
    } else {
      b_loop_ub = Sigma->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Y_data[i1 + b_sig2->size[0] * i] = sig2_data[0] * Sigma_data[i1 *
        stride_1_0 + Sigma->size[0] * i];
    }
  }

  st.site = &jm_emlrtRSI;
  x = lnpdfmvn(&st, b_Y, e1, b_sig2);
  emxFree_real_T(sp, &b_sig2);
  emxFree_real_T(sp, &b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return x;
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

static void b_plus(const emlrtStack *sp, emxArray_real_T *kron_G, const
                   emxArray_real_T *b)
{
  emxArray_real_T *b_kron_G;
  const real_T *b_data;
  real_T *b_kron_G_data;
  real_T *kron_G_data;
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
  b_data = b->data;
  kron_G_data = kron_G->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_kron_G, 2, &bl_emlrtRTEI);
  i = b_kron_G->size[0] * b_kron_G->size[1];
  if (b->size[0] == 1) {
    b_kron_G->size[0] = kron_G->size[0];
  } else {
    b_kron_G->size[0] = b->size[0];
  }

  if (b->size[1] == 1) {
    b_kron_G->size[1] = kron_G->size[1];
  } else {
    b_kron_G->size[1] = b->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_kron_G, i, &bl_emlrtRTEI);
  b_kron_G_data = b_kron_G->data;
  stride_0_0 = (kron_G->size[0] != 1);
  stride_0_1 = (kron_G->size[1] != 1);
  stride_1_0 = (b->size[0] != 1);
  stride_1_1 = (b->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (b->size[1] == 1) {
    loop_ub = kron_G->size[1];
  } else {
    loop_ub = b->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (b->size[0] == 1) {
      b_loop_ub = kron_G->size[0];
    } else {
      b_loop_ub = b->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_kron_G_data[i1 + b_kron_G->size[0] * i] = kron_G_data[i1 * stride_0_0 +
        kron_G->size[0] * aux_0_1] + b_data[i1 * stride_1_0 + b->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = kron_G->size[0] * kron_G->size[1];
  kron_G->size[0] = b_kron_G->size[0];
  kron_G->size[1] = b_kron_G->size[1];
  emxEnsureCapacity_real_T(sp, kron_G, i, &bl_emlrtRTEI);
  kron_G_data = kron_G->data;
  loop_ub = b_kron_G->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_kron_G->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      kron_G_data[i1 + kron_G->size[0] * i] = b_kron_G_data[i1 + b_kron_G->size
        [0] * i];
    }
  }

  emxFree_real_T(sp, &b_kron_G);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1, const
  emxArray_real_T *X, uint32_T i)
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
  emxInit_real_T(sp, &b_X, 2, &ed_emlrtRTEI);
  b_i = X->size[1];
  stride_0_1 = b_X->size[0] * b_X->size[1];
  b_X->size[0] = 1;
  if (r1->size[1] == 1) {
    b_X->size[1] = b_i;
  } else {
    b_X->size[1] = r1->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_X, stride_0_1, &ed_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, r1, b_i, &ed_emlrtRTEI);
  r = r1->data;
  loop_ub = b_X->size[1];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r[b_i] = b_X_data[b_i];
  }

  emxFree_real_T(sp, &b_X);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *retf,
  const emxArray_real_T *x_f, const emxArray_real_T *r1)
{
  const real_T *r;
  const real_T *x_f_data;
  real_T *retf_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  r = r1->data;
  x_f_data = x_f->data;
  i = retf->size[0] * retf->size[1];
  retf->size[0] = 1;
  if (r1->size[1] == 1) {
    retf->size[1] = x_f->size[0];
  } else {
    retf->size[1] = r1->size[1];
  }

  emxEnsureCapacity_real_T(sp, retf, i, &ae_emlrtRTEI);
  retf_data = retf->data;
  stride_0_1 = (x_f->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = x_f->size[0];
  } else {
    loop_ub = r1->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    retf_data[i] = x_f_data[i * stride_0_1] - r[i * stride_1_1];
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

static void c_plus(const emlrtStack *sp, emxArray_real_T *Y_stary_star, const
                   emxArray_real_T *r1, const emxArray_real_T *absolute)
{
  const real_T *absolute_data;
  const real_T *r;
  real_T *Y_stary_star_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  absolute_data = absolute->data;
  r = r1->data;
  i = Y_stary_star->size[0];
  if (absolute->size[0] == 1) {
    Y_stary_star->size[0] = r1->size[0];
  } else {
    Y_stary_star->size[0] = absolute->size[0];
  }

  emxEnsureCapacity_real_T(sp, Y_stary_star, i, &sh_emlrtRTEI);
  Y_stary_star_data = Y_stary_star->data;
  stride_0_0 = (r1->size[0] != 1);
  stride_1_0 = (absolute->size[0] != 1);
  if (absolute->size[0] == 1) {
    loop_ub = r1->size[0];
  } else {
    loop_ub = absolute->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    Y_stary_star_data[i] = r[i * stride_0_0] + absolute_data[i * stride_1_0];
  }
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

static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Sigma,
  emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *b, const emxArray_real_T
  *kron_G)
{
  emlrtStack st;
  emxArray_real_T *b_b;
  const real_T *b_data;
  const real_T *kron_G_data;
  real_T *b_b_data;
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
  kron_G_data = kron_G->data;
  b_data = b->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b, 2, &pd_emlrtRTEI);
  i = b_b->size[0] * b_b->size[1];
  if (kron_G->size[0] == 1) {
    b_b->size[0] = b->size[0];
  } else {
    b_b->size[0] = kron_G->size[0];
  }

  if (kron_G->size[1] == 1) {
    b_b->size[1] = b->size[1];
  } else {
    b_b->size[1] = kron_G->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_b, i, &pd_emlrtRTEI);
  b_b_data = b_b->data;
  stride_0_0 = (b->size[0] != 1);
  stride_0_1 = (b->size[1] != 1);
  stride_1_0 = (kron_G->size[0] != 1);
  stride_1_1 = (kron_G->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (kron_G->size[1] == 1) {
    loop_ub = b->size[1];
  } else {
    loop_ub = kron_G->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (kron_G->size[0] == 1) {
      b_loop_ub = b->size[0];
    } else {
      b_loop_ub = kron_G->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_data[i1 + b_b->size[0] * i] = b_data[i1 * stride_0_0 + b->size[0] *
        aux_0_1] - kron_G_data[i1 * stride_1_0 + kron_G->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &jm_emlrtRSI;
  inv(&st, b_b, Sigma);
  emxFree_real_T(sp, &b_b);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
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

static real_T f_binary_expand_op(const emlrtStack *sp, emlrtRSInfo jm_emlrtRSI,
  const emxArray_real_T *b_hat, const emxArray_real_T *phi_hat, const real_T
  sig2_hat_data[], const emxArray_real_T *retf, const emxArray_real_T *b, const
  emxArray_real_T *Sigma)
{
  emlrtStack st;
  emxArray_real_T *b_b_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r;
  const real_T *Sigma_data;
  const real_T *b_data;
  const real_T *b_hat_data;
  const real_T *phi_hat_data;
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
  Sigma_data = Sigma->data;
  b_data = b->data;
  retf_data = retf->data;
  phi_hat_data = phi_hat->data;
  b_hat_data = b_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b_hat, 1, &ld_emlrtRTEI);
  i = b_b_hat->size[0];
  b_b_hat->size[0] = (b_hat->size[0] + phi_hat->size[0]) + 1;
  emxEnsureCapacity_real_T(sp, b_b_hat, i, &ld_emlrtRTEI);
  b_b_hat_data = b_b_hat->data;
  loop_ub = b_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = b_hat_data[i];
  }

  loop_ub = phi_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i + b_hat->size[0]] = phi_hat_data[i];
  }

  emxInit_real_T(sp, &b_retf, 1, &nd_emlrtRTEI);
  b_b_hat_data[b_hat->size[0] + phi_hat->size[0]] = sig2_hat_data[0];
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &nd_emlrtRTEI);
  b_b_hat_data = b_retf->data;
  loop_ub = retf->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = retf_data[i];
  }

  emxInit_real_T(sp, &r, 2, &od_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (Sigma->size[1] == 1) {
    r->size[0] = b->size[0];
  } else {
    r->size[0] = Sigma->size[1];
  }

  if (Sigma->size[0] == 1) {
    r->size[1] = b->size[1];
  } else {
    r->size[1] = Sigma->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &od_emlrtRTEI);
  b_b_hat_data = r->data;
  stride_0_0 = (b->size[0] != 1);
  stride_0_1 = (b->size[1] != 1);
  stride_1_0 = (Sigma->size[1] != 1);
  stride_1_1 = (Sigma->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Sigma->size[0] == 1) {
    loop_ub = b->size[1];
  } else {
    loop_ub = Sigma->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    if (Sigma->size[1] == 1) {
      b_loop_ub = b->size[0];
    } else {
      b_loop_ub = Sigma->size[1];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_hat_data[i1 + r->size[0] * i] = 0.5 * (b_data[i1 * stride_0_0 +
        b->size[0] * aux_0_1] + Sigma_data[aux_1_1 + Sigma->size[0] * (i1 *
        stride_1_0)]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &jm_emlrtRSI;
  ln_joint_post = lnpdfmvn(&st, b_b_hat, b_retf, r);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_b_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return ln_joint_post;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [10])
{
  static const int32_T iv[2] = { 1, 10 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 10, m, &u[0]);
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

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *j_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A, const
  emxArray_real_T *sig2_inv, const emxArray_real_T *X_hatY_hat)
{
  emxArray_real_T *b_sig2_inv;
  const real_T *X_hatY_hat_data;
  const real_T *sig2_inv_data;
  real_T c_sig2_inv;
  real_T *A_data;
  real_T *b_sig2_inv_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  X_hatY_hat_data = X_hatY_hat->data;
  sig2_inv_data = sig2_inv->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_sig2_inv, 1, &cl_emlrtRTEI);
  c_sig2_inv = sig2_inv_data[0];
  i = b_sig2_inv->size[0];
  if (X_hatY_hat->size[0] == 1) {
    b_sig2_inv->size[0] = A->size[0];
  } else {
    b_sig2_inv->size[0] = X_hatY_hat->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_sig2_inv, i, &cl_emlrtRTEI);
  b_sig2_inv_data = b_sig2_inv->data;
  stride_0_0 = (A->size[0] != 1);
  stride_1_0 = (X_hatY_hat->size[0] != 1);
  if (X_hatY_hat->size[0] == 1) {
    loop_ub = A->size[0];
  } else {
    loop_ub = X_hatY_hat->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_sig2_inv_data[i] = c_sig2_inv * (A_data[i * stride_0_0] +
      X_hatY_hat_data[i * stride_1_0]);
  }

  i = A->size[0];
  A->size[0] = b_sig2_inv->size[0];
  emxEnsureCapacity_real_T(sp, A, i, &cl_emlrtRTEI);
  A_data = A->data;
  loop_ub = b_sig2_inv->size[0];
  for (i = 0; i < loop_ub; i++) {
    A_data[i] = b_sig2_inv_data[i];
  }

  emxFree_real_T(sp, &b_sig2_inv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *r3, const emxArray_real_T
  *precb0)
{
  emlrtStack st;
  emxArray_real_T *r1;
  const real_T *precb0_data;
  const real_T *r;
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
  precb0_data = precb0->data;
  r = r3->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r1, 2, &ug_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  if (precb0->size[0] == 1) {
    r1->size[0] = r3->size[0];
  } else {
    r1->size[0] = precb0->size[0];
  }

  if (precb0->size[1] == 1) {
    r1->size[1] = r3->size[1];
  } else {
    r1->size[1] = precb0->size[1];
  }

  emxEnsureCapacity_real_T(sp, r1, i, &ug_emlrtRTEI);
  r2 = r1->data;
  stride_0_0 = (r3->size[0] != 1);
  stride_0_1 = (r3->size[1] != 1);
  stride_1_0 = (precb0->size[0] != 1);
  stride_1_1 = (precb0->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (precb0->size[1] == 1) {
    loop_ub = r3->size[1];
  } else {
    loop_ub = precb0->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (precb0->size[0] == 1) {
      b_loop_ub = r3->size[0];
    } else {
      b_loop_ub = precb0->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r2[i1 + r1->size[0] * i] = r[i1 * stride_0_0 + r3->size[0] * aux_0_1] +
        precb0_data[i1 * stride_1_0 + precb0->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &jm_emlrtRSI;
  inv(&st, r1, B1);
  emxFree_real_T(sp, &r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1, const
  emxArray_real_T *sig2_inv, const emxArray_real_T *X_hatX_hat)
{
  emxArray_real_T *b_sig2_inv;
  const real_T *X_hatX_hat_data;
  const real_T *sig2_inv_data;
  real_T c_sig2_inv;
  real_T *b_sig2_inv_data;
  real_T *r;
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
  X_hatX_hat_data = X_hatX_hat->data;
  sig2_inv_data = sig2_inv->data;
  r = r1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_sig2_inv, 2, &ug_emlrtRTEI);
  c_sig2_inv = sig2_inv_data[0];
  i = b_sig2_inv->size[0] * b_sig2_inv->size[1];
  if (X_hatX_hat->size[0] == 1) {
    b_sig2_inv->size[0] = r1->size[0];
  } else {
    b_sig2_inv->size[0] = X_hatX_hat->size[0];
  }

  if (X_hatX_hat->size[1] == 1) {
    b_sig2_inv->size[1] = r1->size[1];
  } else {
    b_sig2_inv->size[1] = X_hatX_hat->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_sig2_inv, i, &ug_emlrtRTEI);
  b_sig2_inv_data = b_sig2_inv->data;
  stride_0_0 = (r1->size[0] != 1);
  stride_0_1 = (r1->size[1] != 1);
  stride_1_0 = (X_hatX_hat->size[0] != 1);
  stride_1_1 = (X_hatX_hat->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (X_hatX_hat->size[1] == 1) {
    loop_ub = r1->size[1];
  } else {
    loop_ub = X_hatX_hat->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (X_hatX_hat->size[0] == 1) {
      b_loop_ub = r1->size[0];
    } else {
      b_loop_ub = X_hatX_hat->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_sig2_inv_data[i1 + b_sig2_inv->size[0] * i] = c_sig2_inv * (r[i1 *
        stride_0_0 + r1->size[0] * aux_0_1] + X_hatX_hat_data[i1 * stride_1_0 +
        X_hatX_hat->size[0] * aux_1_1]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = r1->size[0] * r1->size[1];
  r1->size[0] = b_sig2_inv->size[0];
  r1->size[1] = b_sig2_inv->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &ug_emlrtRTEI);
  r = r1->data;
  loop_ub = b_sig2_inv->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_sig2_inv->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r[i1 + r1->size[0] * i] = b_sig2_inv_data[i1 + b_sig2_inv->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_sig2_inv);
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

static void minus(const emlrtStack *sp, emxArray_real_T *b, const
                  emxArray_real_T *Y_p)
{
  emxArray_real_T *b_Y_p;
  const real_T *Y_p_data;
  real_T *b_Y_p_data;
  real_T *b_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  Y_p_data = Y_p->data;
  b_data = b->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y_p, 1, &fh_emlrtRTEI);
  i = b_Y_p->size[0];
  if (b->size[0] == 1) {
    b_Y_p->size[0] = Y_p->size[0];
  } else {
    b_Y_p->size[0] = b->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_Y_p, i, &fh_emlrtRTEI);
  b_Y_p_data = b_Y_p->data;
  stride_0_0 = (Y_p->size[0] != 1);
  stride_1_0 = (b->size[0] != 1);
  if (b->size[0] == 1) {
    loop_ub = Y_p->size[0];
  } else {
    loop_ub = b->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_Y_p_data[i] = Y_p_data[i * stride_0_0] - b_data[i * stride_1_0];
  }

  i = b->size[0];
  b->size[0] = b_Y_p->size[0];
  emxEnsureCapacity_real_T(sp, b, i, &fh_emlrtRTEI);
  b_data = b->data;
  loop_ub = b_Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = b_Y_p_data[i];
  }

  emxFree_real_T(sp, &b_Y_p);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T
  *Y_starY_star, emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *b)
{
  emlrtStack st;
  emxArray_real_T *b_b;
  const real_T *b_data;
  real_T *Y_starY_star_data;
  real_T *b_b_data;
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
  b_data = b->data;
  Y_starY_star_data = Y_starY_star->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b, 2, &ai_emlrtRTEI);
  i = b_b->size[0] * b_b->size[1];
  if (Y_starY_star->size[0] == 1) {
    b_b->size[0] = b->size[0];
  } else {
    b_b->size[0] = Y_starY_star->size[0];
  }

  if (Y_starY_star->size[1] == 1) {
    b_b->size[1] = b->size[1];
  } else {
    b_b->size[1] = Y_starY_star->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_b, i, &ai_emlrtRTEI);
  b_b_data = b_b->data;
  stride_0_0 = (b->size[0] != 1);
  stride_0_1 = (b->size[1] != 1);
  stride_1_0 = (Y_starY_star->size[0] != 1);
  stride_1_1 = (Y_starY_star->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Y_starY_star->size[1] == 1) {
    loop_ub = b->size[1];
  } else {
    loop_ub = Y_starY_star->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (Y_starY_star->size[0] == 1) {
      b_loop_ub = b->size[0];
    } else {
      b_loop_ub = Y_starY_star->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_data[i1 + b_b->size[0] * i] = b_data[i1 * stride_0_0 + b->size[0] *
        aux_0_1] - Y_starY_star_data[i1 * stride_1_0 + Y_starY_star->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &jm_emlrtRSI;
  inv(&st, b_b, Y_starY_star);
  emxFree_real_T(sp, &b_b);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *sig2, const
                 emxArray_real_T *e1)
{
  emxArray_real_T *b_sig2;
  const real_T *e1_data;
  real_T *b_sig2_data;
  real_T *sig2_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  e1_data = e1->data;
  sig2_data = sig2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_sig2, 1, &al_emlrtRTEI);
  i = b_sig2->size[0];
  if (e1->size[0] == 1) {
    b_sig2->size[0] = sig2->size[0];
  } else {
    b_sig2->size[0] = e1->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_sig2, i, &al_emlrtRTEI);
  b_sig2_data = b_sig2->data;
  stride_0_0 = (sig2->size[0] != 1);
  stride_1_0 = (e1->size[0] != 1);
  if (e1->size[0] == 1) {
    loop_ub = sig2->size[0];
  } else {
    loop_ub = e1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_sig2_data[i] = sig2_data[i * stride_0_0] + e1_data[i * stride_1_0];
  }

  i = sig2->size[0];
  sig2->size[0] = b_sig2->size[0];
  emxEnsureCapacity_real_T(sp, sig2, i, &al_emlrtRTEI);
  sig2_data = sig2->data;
  loop_ub = b_sig2->size[0];
  for (i = 0; i < loop_ub; i++) {
    sig2_data[i] = b_sig2_data[i];
  }

  emxFree_real_T(sp, &b_sig2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void q_binary_expand_op(const emlrtStack *sp, int32_T sizes[2], const
  emxArray_real_T *r3, const emxArray_real_T *absolute)
{
  emxArray_real_T *r1;
  const real_T *absolute_data;
  const real_T *r;
  real_T *r2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  absolute_data = absolute->data;
  r = r3->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r1, 2, &th_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  if (absolute->size[0] == 1) {
    r1->size[1] = r3->size[0];
  } else {
    r1->size[1] = absolute->size[0];
  }

  emxEnsureCapacity_real_T(sp, r1, i, &th_emlrtRTEI);
  r2 = r1->data;
  stride_0_1 = (r3->size[0] != 1);
  stride_1_1 = (absolute->size[0] != 1);
  if (absolute->size[0] == 1) {
    loop_ub = r3->size[0];
  } else {
    loop_ub = absolute->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    r2[i] = r[i * stride_0_1] + absolute_data[i * stride_1_1];
  }

  sizes[0] = 1;
  sizes[1] = r1->size[1];
  emxFree_real_T(sp, &r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void r_binary_expand_op(const emlrtStack *sp, emxArray_real_T *PHI_hat,
  emlrtRSInfo jm_emlrtRSI, const emxArray_real_T *center_hat, const
  emxArray_real_T *phi0, const emxArray_real_T *precphi0)
{
  emlrtStack st;
  emxArray_real_T *b_center_hat;
  const real_T *center_hat_data;
  const real_T *precphi0_data;
  real_T *b_center_hat_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T phi0_idx_0;
  int32_T phi0_idx_1;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  precphi0_data = precphi0->data;
  center_hat_data = center_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_center_hat, 2, &rh_emlrtRTEI);
  phi0_idx_0 = phi0->size[0];
  phi0_idx_1 = phi0->size[0];
  i = b_center_hat->size[0] * b_center_hat->size[1];
  if (precphi0->size[0] == 1) {
    b_center_hat->size[0] = phi0_idx_0;
  } else {
    b_center_hat->size[0] = precphi0->size[0];
  }

  if (precphi0->size[1] == 1) {
    b_center_hat->size[1] = phi0_idx_1;
  } else {
    b_center_hat->size[1] = precphi0->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_center_hat, i, &rh_emlrtRTEI);
  b_center_hat_data = b_center_hat->data;
  stride_0_0 = (phi0_idx_0 != 1);
  stride_0_1 = (phi0_idx_1 != 1);
  stride_1_0 = (precphi0->size[0] != 1);
  stride_1_1 = (precphi0->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (precphi0->size[1] != 1) {
    phi0_idx_1 = precphi0->size[1];
  }

  for (i = 0; i < phi0_idx_1; i++) {
    if (precphi0->size[0] == 1) {
      loop_ub = phi0_idx_0;
    } else {
      loop_ub = precphi0->size[0];
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      b_center_hat_data[i1 + b_center_hat->size[0] * i] = center_hat_data[i1 *
        stride_0_0 + phi0_idx_0 * aux_0_1] + precphi0_data[i1 * stride_1_0 +
        precphi0->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &jm_emlrtRSI;
  inv(&st, b_center_hat, PHI_hat);
  emxFree_real_T(sp, &b_center_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y_star,
  const emxArray_real_T *Y, const emxArray_real_T *r1)
{
  const real_T *Y_data;
  const real_T *r;
  real_T *y_star_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T unnamed_idx_0;
  r = r1->data;
  Y_data = Y->data;
  unnamed_idx_0 = r1->size[0];
  i = y_star->size[0] * y_star->size[1];
  if (unnamed_idx_0 == 1) {
    y_star->size[0] = Y->size[0];
  } else {
    y_star->size[0] = unnamed_idx_0;
  }

  y_star->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, y_star, i, &ih_emlrtRTEI);
  y_star_data = y_star->data;
  stride_0_0 = (Y->size[0] != 1);
  stride_1_0 = (unnamed_idx_0 != 1);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (unnamed_idx_0 == 1) {
      b_loop_ub = Y->size[0];
    } else {
      b_loop_ub = unnamed_idx_0;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      y_star_data[i1 + y_star->size[0] * i] = Y_data[i1 * stride_0_0 + Y->size[0]
        * i] - r[i1 * stride_1_0];
    }
  }
}

void Auto_Regression(const emlrtStack *sp, const emxArray_real_T *data, const
                     emxArray_real_T *xind, const emxArray_real_T *yind, const
                     emxArray_real_T *b0, const emxArray_real_T *B0, real_T a0,
                     real_T d0, const emxArray_real_T *phi0, const
                     emxArray_real_T *PHI0, real_T n0, real_T n1, char_T
                     forecast, const emxArray_real_T *x_f, char_T ML, struct0_T *
                     Output)
{
  static const char_T cv4[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  static const char_T cv3[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  static const char_T cv7[10] = { '[', 's', 'i', 'g', 'm', 'a', '2', ':', ' ',
    ']' };

  static const char_T cv5[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  static const char_T cv2[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T cv6[7] = { '[', 'p', 'h', 'i', ':', ' ', ']' };

  static const char_T b_cv[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emlrtStack *r;
  emxArray_real_T b_kron_G;
  emxArray_real_T *G;
  emxArray_real_T *Sigma;
  emxArray_real_T *Sigmam;
  emxArray_real_T *X;
  emxArray_real_T *X_hat;
  emxArray_real_T *X_p;
  emxArray_real_T *Y;
  emxArray_real_T *Y_hat;
  emxArray_real_T *b;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_b;
  emxArray_real_T *b_hat;
  emxArray_real_T *b_phi0;
  emxArray_real_T *c_b;
  emxArray_real_T *e1;
  emxArray_real_T *inv_Sigma;
  emxArray_real_T *kron_G;
  emxArray_real_T *phi;
  emxArray_real_T *phi_hat;
  emxArray_real_T *precb0;
  emxArray_real_T *precphi0;
  emxArray_real_T *result;
  emxArray_real_T *retf;
  emxArray_real_T *sig2;
  emxArray_real_T *sig2_inv;
  emxArray_real_T *y_tmp;
  const real_T *b0_data;
  const real_T *data_data;
  const real_T *phi0_data;
  const real_T *x_f_data;
  const real_T *xind_data;
  const real_T *yind_data;
  real_T beta_prior;
  real_T lnpost_hat;
  real_T n;
  real_T phi_prior;
  real_T sig2_hat_data;
  real_T sig2_prior_data;
  real_T sum_A;
  real_T sum_B;
  real_T *G_data;
  real_T *Sigma_data;
  real_T *Sigmam_data;
  real_T *X_data;
  real_T *X_p_data;
  real_T *Y_data;
  real_T *b_b_data;
  real_T *b_data;
  real_T *b_hat_data;
  real_T *b_phi0_data;
  real_T *kron_G_data;
  real_T *phi_data;
  real_T *phi_hat_data;
  real_T *retf_data;
  real_T *sig2_data;
  real_T *y_tmp_data;
  int32_T b_sizes[2];
  int32_T input_sizes[2];
  int32_T sizes[2];
  int32_T Is_forecasting;
  int32_T T;
  int32_T b_loop_ub;
  int32_T b_result;
  int32_T c_Y;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T g_loop_ub;
  int32_T h_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i_loop_ub;
  int32_T input_sizes_idx_1;
  int32_T iter;
  int32_T k;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T nx;
  int32_T p;
  int32_T result_idx_1;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  uint32_T b_i;
  char_T b_cv1[37];
  int8_T input_sizes_idx_0;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  x_f_data = x_f->data;
  phi0_data = phi0->data;
  b0_data = b0->data;
  yind_data = yind->data;
  xind_data = xind->data;
  data_data = data->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &fl_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);

  /*  number of columns */
  T = data->size[0];
  emxInit_real_T(sp, &Y, 2, &pb_emlrtRTEI);
  emxInit_real_T(sp, &X, 2, &rb_emlrtRTEI);
  if (data->size[1] == 1) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = data->size[0];
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Y, i, &pb_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = data->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = data_data[i];
    }

    i = X->size[0] * X->size[1];
    X->size[0] = data->size[0];
    X->size[1] = 1;
    emxEnsureCapacity_real_T(sp, X, i, &rb_emlrtRTEI);
    X_data = X->data;
    loop_ub = data->size[0];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = 1.0;
    }

    k = 1;
  } else {
    loop_ub = data->size[0];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = data->size[0];
    Y->size[1] = yind->size[1];
    emxEnsureCapacity_real_T(sp, Y, i, &qb_emlrtRTEI);
    Y_data = Y->data;
    b_loop_ub = yind->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (yind_data[i] != (int32_T)muDoubleScalarFloor(yind_data[i])) {
          emlrtIntegerCheckR2012b(yind_data[i], &i_emlrtDCI, (emlrtCTX)sp);
        }

        i2 = (int32_T)yind_data[i];
        if ((i2 < 1) || (i2 > data->size[1])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, data->size[1], &fb_emlrtBCI,
            (emlrtCTX)sp);
        }

        Y_data[i1 + Y->size[0] * i] = data_data[i1 + data->size[0] * (i2 - 1)];
      }
    }

    loop_ub = data->size[0];
    i = X->size[0] * X->size[1];
    X->size[0] = data->size[0];
    X->size[1] = xind->size[1];
    emxEnsureCapacity_real_T(sp, X, i, &sb_emlrtRTEI);
    X_data = X->data;
    b_loop_ub = xind->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (xind_data[i] != (int32_T)muDoubleScalarFloor(xind_data[i])) {
          emlrtIntegerCheckR2012b(xind_data[i], &j_emlrtDCI, (emlrtCTX)sp);
        }

        i2 = (int32_T)xind_data[i];
        if ((i2 < 1) || (i2 > data->size[1])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, data->size[1], &gb_emlrtBCI,
            (emlrtCTX)sp);
        }

        X_data[i1 + X->size[0] * i] = data_data[i1 + data->size[0] * (i2 - 1)];
      }
    }

    /*  number of columns */
    k = xind->size[1];
  }

  emxInit_real_T(sp, &precb0, 2, &fe_emlrtRTEI);
  emxInit_real_T(sp, &precphi0, 2, &ge_emlrtRTEI);
  p = phi0->size[0];
  st.site = &emlrtRSI;
  invpd(&st, B0, precb0);
  st.site = &b_emlrtRSI;
  invpd(&st, PHI0, precphi0);
  n = n0 + n1;
  Is_forecasting = (forecast == 'Y');
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &l_emlrtDCI, (emlrtCTX)sp);
  }

  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->yfm->size[0];
  loop_ub = (int32_T)n;
  Output->yfm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Output->yfm, i1, &tb_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->yfm->data[i1] = 0.0;
  }

  if (n != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub_tmp = (int32_T)n;
  i1 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = loop_ub_tmp;
  Output->betam->size[1] = k;
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &ub_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->sigma2m->size[0];
  Output->sigma2m->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->sigma2m, i1, &vb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Output->sigma2m->data[i1] = 0.0;
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &o_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &Sigmam, 2, &xb_emlrtRTEI);
  i1 = Output->phim->size[0] * Output->phim->size[1];
  Output->phim->size[0] = loop_ub_tmp;
  Output->phim->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Output->phim, i1, &wb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Sigmam->size[0] * Sigmam->size[1];
  Sigmam->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Sigmam, i1, &xb_emlrtRTEI);
  sum_B = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  if (sum_B != (int32_T)sum_B) {
    emlrtIntegerCheckR2012b(sum_B, &g_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Sigmam->size[0] * Sigmam->size[1];
  Sigmam->size[1] = (int32_T)sum_B;
  emxEnsureCapacity_real_T(sp, Sigmam, i1, &xb_emlrtRTEI);
  Sigmam_data = Sigmam->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &p_emlrtDCI, (emlrtCTX)sp);
  }

  sum_B = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  if (sum_B != (int32_T)sum_B) {
    emlrtIntegerCheckR2012b(sum_B, &p_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = loop_ub_tmp * (int32_T)sum_B;
  for (i = 0; i < loop_ub; i++) {
    Sigmam_data[i] = 0.0;
  }

  emxInit_real_T(sp, &sig2, 1, &yb_emlrtRTEI);
  emxInit_real_T(sp, &phi, 1, &cc_emlrtRTEI);
  emxInit_real_T(sp, &retf, 2, &le_emlrtRTEI);
  if (a0 * d0 > 0.0) {
    i = sig2->size[0];
    sig2->size[0] = 1;
    emxEnsureCapacity_real_T(sp, sig2, i, &yb_emlrtRTEI);
    sig2_data = sig2->data;
    sig2_data[0] = 0.5 * d0 / (0.5 * a0 - 1.0);
  } else {
    st.site = &c_emlrtRSI;

    /*  gauss function */
    b_st.site = &wd_emlrtRSI;
    b_std(&b_st, Y, retf);
    retf_data = retf->data;
    i = phi->size[0];
    phi->size[0] = retf->size[1];
    emxEnsureCapacity_real_T(sp, phi, i, &ac_emlrtRTEI);
    phi_data = phi->data;
    loop_ub = retf->size[1];
    for (i = 0; i < loop_ub; i++) {
      phi_data[i] = retf_data[i];
    }

    st.site = &c_emlrtRSI;
    mpower(&st, phi, sig2);
  }

  emxInit_real_T(sp, &sig2_inv, 2, &he_emlrtRTEI);
  st.site = &d_emlrtRSI;
  b_st.site = &qe_emlrtRSI;
  mrdiv(&b_st, sig2, sig2_inv);
  emxInit_real_T(sp, &G, 2, &bc_emlrtRTEI);
  emxInit_real_T(sp, &kron_G, 2, &ie_emlrtRTEI);
  emxInit_real_T(sp, &b_phi0, 2, &kc_emlrtRTEI);
  if (phi0->size[0] == 1) {
    i = G->size[0] * G->size[1];
    G->size[0] = 1;
    G->size[1] = 1;
    emxEnsureCapacity_real_T(sp, G, i, &bc_emlrtRTEI);
    G_data = G->data;
    G_data[0] = phi0_data[0];
  } else {
    emxInit_real_T(sp, &result, 2, &ke_emlrtRTEI);
    st.site = &e_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    eye(&b_st, (real_T)phi0->size[0] - 1.0, kron_G);
    kron_G_data = kron_G->data;
    if (!((real_T)phi0->size[0] - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(-1.0, &e_emlrtDCI, &st);
    }

    b_st.site = &kf_emlrtRSI;
    if ((kron_G->size[0] != 0) && (kron_G->size[1] != 0)) {
      b_result = kron_G->size[0];
    } else if (phi0->size[0] - 1 != 0) {
      b_result = phi0->size[0] - 1;
    } else {
      b_result = kron_G->size[0];
      if (phi0->size[0] - 1 > kron_G->size[0]) {
        b_result = phi0->size[0] - 1;
      }
    }

    c_st.site = &lf_emlrtRSI;
    if ((kron_G->size[0] != b_result) && ((kron_G->size[0] != 0) &&
         (kron_G->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((phi0->size[0] - 1 != b_result) && (phi0->size[0] - 1 != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (b_result == 0);
    if (empty_non_axis_sizes || ((kron_G->size[0] != 0) && (kron_G->size[1] != 0)))
    {
      input_sizes[1] = kron_G->size[1];
    } else {
      input_sizes[1] = 0;
    }

    if (empty_non_axis_sizes || (phi0->size[0] - 1 != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    result_idx_1 = input_sizes[1];
    i = result->size[0] * result->size[1];
    result->size[0] = b_result;
    result->size[1] = result_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, result, i, &gc_emlrtRTEI);
    X_p_data = result->data;
    for (i = 0; i < result_idx_1; i++) {
      for (i1 = 0; i1 < b_result; i1++) {
        X_p_data[i1 + result->size[0] * i] = kron_G_data[i1 + b_result * i];
      }
    }

    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < b_result; i1++) {
        X_p_data[i1 + result->size[0] * result_idx_1] = 0.0;
      }
    }

    st.site = &e_emlrtRSI;
    b_st.site = &kf_emlrtRSI;
    if (phi0->size[0] != 0) {
      b_result = phi0->size[0];
    } else if ((result->size[0] != 0) && (result->size[1] != 0)) {
      b_result = result->size[1];
    } else {
      if (phi0->size[0] > 0) {
        b_result = phi0->size[0];
      } else {
        b_result = 0;
      }

      if (result->size[1] > b_result) {
        b_result = result->size[1];
      }
    }

    c_st.site = &lf_emlrtRSI;
    if ((phi0->size[0] != b_result) && (phi0->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((result->size[1] != b_result) && ((result->size[0] != 0) &&
         (result->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (b_result == 0);
    if (empty_non_axis_sizes || (phi0->size[0] != 0)) {
      input_sizes_idx_0 = 1;
    } else {
      input_sizes_idx_0 = 0;
    }

    if (empty_non_axis_sizes || ((result->size[0] != 0) && (result->size[1] != 0)))
    {
      sizes_idx_0 = result->size[0];
    } else {
      sizes_idx_0 = 0;
    }

    i = b_phi0->size[0] * b_phi0->size[1];
    b_phi0->size[0] = 1;
    b_phi0->size[1] = phi0->size[0];
    emxEnsureCapacity_real_T(&b_st, b_phi0, i, &kc_emlrtRTEI);
    b_phi0_data = b_phi0->data;
    loop_ub = phi0->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_phi0_data[i] = phi0_data[i];
    }

    i = G->size[0] * G->size[1];
    G->size[0] = input_sizes_idx_0 + sizes_idx_0;
    G->size[1] = b_result;
    emxEnsureCapacity_real_T(&b_st, G, i, &lc_emlrtRTEI);
    G_data = G->data;
    for (i = 0; i < b_result; i++) {
      loop_ub = input_sizes_idx_0;
      for (i1 = 0; i1 < loop_ub; i1++) {
        G_data[G->size[0] * i] = b_phi0_data[input_sizes_idx_0 * i];
      }
    }

    for (i = 0; i < b_result; i++) {
      for (i1 = 0; i1 < sizes_idx_0; i1++) {
        G_data[(i1 + input_sizes_idx_0) + G->size[0] * i] = X_p_data[i1 +
          sizes_idx_0 * i];
      }
    }

    emxFree_real_T(&b_st, &result);
  }

  i = phi->size[0];
  phi->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phi, i, &cc_emlrtRTEI);
  phi_data = phi->data;
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    phi_data[i] = phi0_data[i];
  }

  emxInit_real_T(sp, &b, 1, &dc_emlrtRTEI);
  i = b->size[0];
  b->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b, i, &dc_emlrtRTEI);
  b_data = b->data;
  loop_ub = b0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = b0_data[i];
  }

  emxInit_real_T(sp, &e1, 1, &ec_emlrtRTEI);
  i = e1->size[0];
  e1->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, e1, i, &ec_emlrtRTEI);
  retf_data = e1->data;
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    retf_data[i] = 0.0;
  }

  if (1 > phi0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, phi0->size[0], &y_emlrtBCI, (emlrtCTX)sp);
  }

  retf_data[0] = 1.0;
  if (1 > phi0->size[0]) {
    loop_ub = 0;
  } else {
    if (1 > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, X->size[0], &eb_emlrtBCI, (emlrtCTX)sp);
    }

    if (phi0->size[0] > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, X->size[0], &db_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = phi0->size[0];
  }

  emxInit_real_T(sp, &X_p, 2, &fc_emlrtRTEI);
  b_loop_ub = X->size[1];
  i = X_p->size[0] * X_p->size[1];
  X_p->size[0] = loop_ub;
  X_p->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, X_p, i, &fc_emlrtRTEI);
  X_p_data = X_p->data;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      X_p_data[i1 + X_p->size[0] * i] = X_data[i1 + X->size[0] * i];
    }
  }

  if (1 > phi0->size[0]) {
    loop_ub = 0;
  } else {
    if (1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Y->size[0], &cb_emlrtBCI, (emlrtCTX)sp);
    }

    if (phi0->size[0] > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, Y->size[0], &bb_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = phi0->size[0];
  }

  if (1 > Y->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Y->size[1], &ab_emlrtBCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &b_b, 2, &jc_emlrtRTEI);
  st.site = &f_emlrtRSI;
  kron(&st, G, G, kron_G);
  kron_G_data = kron_G->data;
  st.site = &g_emlrtRSI;
  eye(&st, kron_G->size[0], b_b);
  b_b_data = b_b->data;
  if ((b_b->size[0] != kron_G->size[0]) && ((b_b->size[0] != 1) && (kron_G->
        size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_b->size[0], kron_G->size[0], &o_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((b_b->size[1] != kron_G->size[1]) && ((b_b->size[1] != 1) && (kron_G->
        size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_b->size[1], kron_G->size[1], &n_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &y_tmp, 2, &hc_emlrtRTEI);
  i = y_tmp->size[0] * y_tmp->size[1];
  y_tmp->size[0] = e1->size[0];
  y_tmp->size[1] = e1->size[0];
  emxEnsureCapacity_real_T(sp, y_tmp, i, &hc_emlrtRTEI);
  y_tmp_data = y_tmp->data;
  b_loop_ub = e1->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    nx = e1->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      y_tmp_data[i1 + y_tmp->size[0] * i] = retf_data[i1] * retf_data[i];
    }
  }

  st.site = &g_emlrtRSI;
  emxInit_real_T(&st, &Sigma, 2, &mc_emlrtRTEI);
  emxInit_real_T(&st, &c_b, 2, &ic_emlrtRTEI);
  if ((b_b->size[0] == kron_G->size[0]) && (b_b->size[1] == kron_G->size[1])) {
    i = c_b->size[0] * c_b->size[1];
    c_b->size[0] = b_b->size[0];
    c_b->size[1] = b_b->size[1];
    emxEnsureCapacity_real_T(&st, c_b, i, &ic_emlrtRTEI);
    X_p_data = c_b->data;
    b_loop_ub = b_b->size[0] * b_b->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      X_p_data[i] = b_b_data[i] - kron_G_data[i];
    }

    b_st.site = &g_emlrtRSI;
    inv(&b_st, c_b, Sigma);
  } else {
    b_st.site = &g_emlrtRSI;
    e_binary_expand_op(&b_st, Sigma, g_emlrtRSI, b_b, kron_G);
  }

  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = y_tmp->size[0];
  b_b->size[1] = y_tmp->size[1];
  emxEnsureCapacity_real_T(&st, b_b, i, &jc_emlrtRTEI);
  b_b_data = b_b->data;
  b_loop_ub = y_tmp->size[0] * y_tmp->size[1];
  for (i = 0; i < b_loop_ub; i++) {
    b_b_data[i] = y_tmp_data[i];
  }

  b_st.site = &g_emlrtRSI;
  vec(&b_st, b_b);
  b_st.site = &md_emlrtRSI;
  c_dynamic_size_checks(&b_st, Sigma, b_b, Sigma->size[1], b_b->size[0]);
  b_st.site = &od_emlrtRSI;
  c_mtimes(&b_st, Sigma, b_b, kron_G);
  kron_G_data = kron_G->data;
  st.site = &h_emlrtRSI;
  nx = kron_G->size[0] * kron_G->size[1];
  b_st.site = &mg_emlrtRSI;
  c_st.site = &lg_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  c_st.site = &lg_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  input_sizes_idx_1 = kron_G->size[0];
  if (kron_G->size[1] > kron_G->size[0]) {
    input_sizes_idx_1 = kron_G->size[1];
  }

  if (phi0->size[0] > muIntScalarMax_sint32(nx, input_sizes_idx_1)) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (phi0->size[0] * phi0->size[0] != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = phi0->size[0];
  Sigma->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Sigma, i, &mc_emlrtRTEI);
  Sigma_data = Sigma->data;
  b_loop_ub = phi0->size[0] * phi0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    Sigma_data[i] = kron_G_data[i];
  }

  emxInit_real_T(sp, &inv_Sigma, 2, &je_emlrtRTEI);
  emxInit_real_T(sp, &b_hat, 1, &nc_emlrtRTEI);
  sizes[0] = phi0->size[0];
  sizes[1] = phi0->size[0];
  b_kron_G = *kron_G;
  b_sizes[0] = sizes[0];
  b_sizes[1] = sizes[1];
  b_kron_G.size = &b_sizes[0];
  b_kron_G.numDimensions = 2;
  st.site = &i_emlrtRSI;
  inv(&st, &b_kron_G, inv_Sigma);
  lnpost_hat = -4.8516519540979028E+8;
  i = b_hat->size[0];
  b_hat->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b_hat, i, &nc_emlrtRTEI);
  b_hat_data = b_hat->data;
  b_loop_ub = b0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    b_hat_data[i] = b0_data[i];
  }

  emxInit_real_T(sp, &phi_hat, 1, &oc_emlrtRTEI);
  i = phi_hat->size[0];
  phi_hat->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phi_hat, i, &oc_emlrtRTEI);
  phi_hat_data = phi_hat->data;
  b_loop_ub = phi0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    phi_hat_data[i] = phi0_data[i];
  }

  sig2_hat_data = 0.5 * d0 / (0.5 * a0 - 1.0);
  if (ML == 'Y') {
    sizes_idx_1 = 5;
  } else {
    sizes_idx_1 = 100;
  }

  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &e_emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= n - 1.0) {
    c_loop_ub = k * k;
    d_loop_ub = k;
    i3 = data->size[0] + (int32_T)(1.0 - ((real_T)phi0->size[0] + 1.0));
    e_loop_ub = loop_ub;
    f_loop_ub = y_tmp->size[0] * y_tmp->size[1];
    result_idx_1 = phi0->size[0];
    sizes_idx_0 = phi0->size[0];
  }

  emxInit_real_T(sp, &X_hat, 2, &pc_emlrtRTEI);
  emxInit_real_T(sp, &Y_hat, 1, &sc_emlrtRTEI);
  emxInit_real_T(sp, &b_Y, 1, &ad_emlrtRTEI);
  if (0 <= loop_ub_tmp - 1) {
    g_loop_ub = T - p;
    h_loop_ub = g_loop_ub * k;
  }

  for (iter = 0; iter < loop_ub_tmp; iter++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if (((real_T)iter + 1.0) - muDoubleScalarFloor(((real_T)iter + 1.0) /
         (real_T)sizes_idx_1) * (real_T)sizes_idx_1 == 0.0) {
      st.site = &xl_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i = 0; i < 37; i++) {
        b_cv1[i] = '=';
      }

      st.site = &hl_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, b_cv1), &f_emlrtMCI);
      st.site = &j_emlrtRSI;
      b_st.site = &ng_emlrtRSI;
      c_st.site = &kl_emlrtRSI;
      d_st.site = &nl_emlrtRSI;
      c_emlrt_marshallIn(&c_st, feval(&c_st, e_emlrt_marshallOut(&c_st, cv2),
        j_emlrt_marshallOut(1.0), i_emlrt_marshallOut(&d_st, cv3),
        j_emlrt_marshallOut((real_T)iter + 1.0), &v_emlrtMCI),
                         "<output of feval>");
      for (i = 0; i < 37; i++) {
        b_cv1[i] = '=';
      }

      st.site = &gl_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, b_cv1), &g_emlrtMCI);
      st.site = &wl_emlrtRSI;
      disp(&st, m_emlrt_marshallOut(), &h_emlrtMCI);
      st.site = &il_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
      i = b_phi0->size[0] * b_phi0->size[1];
      b_phi0->size[0] = 1;
      b_loop_ub = b->size[0];
      b_phi0->size[1] = b->size[0];
      emxEnsureCapacity_real_T(sp, b_phi0, i, &tc_emlrtRTEI);
      b_phi0_data = b_phi0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_phi0_data[i] = b_data[i];
      }

      st.site = &vl_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(b_phi0), &j_emlrtMCI);
      st.site = &jl_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv6), &k_emlrtMCI);
      i = b_phi0->size[0] * b_phi0->size[1];
      b_phi0->size[0] = 1;
      b_loop_ub = phi->size[0];
      b_phi0->size[1] = phi->size[0];
      emxEnsureCapacity_real_T(sp, b_phi0, i, &wc_emlrtRTEI);
      b_phi0_data = b_phi0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_phi0_data[i] = phi_data[i];
      }

      st.site = &ul_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(b_phi0), &l_emlrtMCI);
      st.site = &ll_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, cv7), &m_emlrtMCI);
      st.site = &tl_emlrtRSI;
      disp(&st, g_emlrt_marshallOut(sig2), &n_emlrtMCI);
    }

    if (g_loop_ub < 0) {
      emlrtNonNegativeCheckR2012b(g_loop_ub, &h_emlrtDCI, (emlrtCTX)sp);
    }

    i = X_hat->size[0] * X_hat->size[1];
    X_hat->size[0] = g_loop_ub;
    X_hat->size[1] = k;
    emxEnsureCapacity_real_T(sp, X_hat, i, &pc_emlrtRTEI);
    X_p_data = X_hat->data;
    if (g_loop_ub < 0) {
      emlrtNonNegativeCheckR2012b(g_loop_ub, &q_emlrtDCI, (emlrtCTX)sp);
    }

    for (i = 0; i < h_loop_ub; i++) {
      X_p_data[i] = 0.0;
    }

    if (g_loop_ub < 0) {
      emlrtNonNegativeCheckR2012b(g_loop_ub, &r_emlrtDCI, (emlrtCTX)sp);
    }

    i = Y_hat->size[0];
    Y_hat->size[0] = g_loop_ub;
    emxEnsureCapacity_real_T(sp, Y_hat, i, &sc_emlrtRTEI);
    Sigma_data = Y_hat->data;
    if (g_loop_ub < 0) {
      emlrtNonNegativeCheckR2012b(g_loop_ub, &r_emlrtDCI, (emlrtCTX)sp);
    }

    for (i = 0; i < g_loop_ub; i++) {
      Sigma_data[i] = 0.0;
    }

    i = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = k;
    kron_G->size[1] = k;
    emxEnsureCapacity_real_T(sp, kron_G, i, &vc_emlrtRTEI);
    kron_G_data = kron_G->data;
    for (i = 0; i < c_loop_ub; i++) {
      kron_G_data[i] = 0.0;
    }

    i = sig2->size[0];
    sig2->size[0] = k;
    emxEnsureCapacity_real_T(sp, sig2, i, &xc_emlrtRTEI);
    sig2_data = sig2->data;
    for (i = 0; i < d_loop_ub; i++) {
      sig2_data[i] = 0.0;
    }

    emlrtForLoopVectorCheckR2021a((real_T)p + 1.0, 1.0, T, mxDOUBLE_CLASS, i3,
      &d_emlrtRTEI, (emlrtCTX)sp);
    if (0 <= i3 - 1) {
      i4 = 1 - p;
      i_loop_ub = p - 1;
      c_Y = Y->size[0];
    }

    for (b_result = 0; b_result < i3; b_result++) {
      b_i = ((uint32_T)p + b_result) + 1U;
      if (((int32_T)b_i < 1) || ((int32_T)b_i > X->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, X->size[0], &x_emlrtBCI,
          (emlrtCTX)sp);
      }

      st.site = &k_emlrtRSI;
      i = e1->size[0];
      e1->size[0] = 1 - i4;
      emxEnsureCapacity_real_T(&st, e1, i, &bd_emlrtRTEI);
      retf_data = e1->data;
      for (i = 0; i <= i_loop_ub; i++) {
        retf_data[i] = ((int32_T)b_i - i) - 1;
      }

      b_loop_ub = X->size[1];
      i = b_b->size[0] * b_b->size[1];
      b_b->size[0] = e1->size[0];
      b_b->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&st, b_b, i, &cd_emlrtRTEI);
      b_b_data = b_b->data;
      for (i = 0; i < b_loop_ub; i++) {
        nx = e1->size[0];
        for (i1 = 0; i1 < nx; i1++) {
          i2 = (int32_T)retf_data[i1];
          if ((i2 < 1) || (i2 > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)retf_data[i1], 1, X->size[0],
              &hb_emlrtBCI, &st);
          }

          b_b_data[i1 + b_b->size[0] * i] = X_data[(i2 + X->size[0] * i) - 1];
        }
      }

      b_st.site = &md_emlrtRSI;
      d_dynamic_size_checks(&b_st, phi, b_b, phi->size[0], e1->size[0]);
      b_st.site = &od_emlrtRSI;
      d_mtimes(&b_st, phi, b_b, b_phi0);
      b_loop_ub = X->size[1];
      if ((X->size[1] != b_phi0->size[1]) && ((X->size[1] != 1) && (b_phi0->
            size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(X->size[1], b_phi0->size[1], &m_emlrtECI,
          (emlrtCTX)sp);
      }

      input_sizes_idx_1 = (int32_T)b_i - p;
      if ((input_sizes_idx_1 < 1) || (input_sizes_idx_1 > X_hat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, X_hat->size[0],
          &v_emlrtBCI, (emlrtCTX)sp);
      }

      if (X->size[1] == b_phi0->size[1]) {
        i = b_phi0->size[0] * b_phi0->size[1];
        b_phi0->size[0] = 1;
        b_phi0->size[1] = X->size[1];
        emxEnsureCapacity_real_T(sp, b_phi0, i, &ed_emlrtRTEI);
        b_phi0_data = b_phi0->data;
        for (i = 0; i < b_loop_ub; i++) {
          b_phi0_data[i] = X_data[((int32_T)b_i + X->size[0] * i) - 1] -
            b_phi0_data[i];
        }
      } else {
        st.site = &k_emlrtRSI;
        binary_expand_op(&st, b_phi0, X, b_i);
        b_phi0_data = b_phi0->data;
      }

      sizes[0] = 1;
      sizes[1] = X_hat->size[1];
      emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &b_phi0->size[0], 2,
        &l_emlrtECI, (emlrtCTX)sp);
      b_loop_ub = b_phi0->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        X_p_data[(input_sizes_idx_1 + X_hat->size[0] * i) - 1] = b_phi0_data[i];
      }

      if (1 > Y->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Y->size[1], &w_emlrtBCI, (emlrtCTX)
          sp);
      }

      st.site = &l_emlrtRSI;
      i = b->size[0];
      b->size[0] = e1->size[0];
      emxEnsureCapacity_real_T(&st, b, i, &hd_emlrtRTEI);
      b_data = b->data;
      b_loop_ub = e1->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        i1 = (int32_T)retf_data[i];
        if ((i1 < 1) || (i1 > c_Y)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)retf_data[i], 1, c_Y,
            &jb_emlrtBCI, &st);
        }

        b_data[i] = Y_data[i1 - 1];
      }

      b_st.site = &md_emlrtRSI;
      e_dynamic_size_checks(&b_st, phi, b, phi->size[0], e1->size[0]);
      if (((int32_T)b_i < 1) || ((int32_T)b_i > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, Y->size[0], &kb_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (input_sizes_idx_1 > Y_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, Y_hat->size[0],
          &lb_emlrtBCI, (emlrtCTX)sp);
      }

      Sigma_data[input_sizes_idx_1 - 1] = Y_data[(int32_T)b_i - 1] - e_mtimes
        (phi, b);
      if (input_sizes_idx_1 > X_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, X_hat->size[0],
          &u_emlrtBCI, (emlrtCTX)sp);
      }

      b_loop_ub = X_hat->size[1];
      i = b_phi0->size[0] * b_phi0->size[1];
      b_phi0->size[0] = 1;
      b_phi0->size[1] = X_hat->size[1];
      emxEnsureCapacity_real_T(sp, b_phi0, i, &kd_emlrtRTEI);
      b_phi0_data = b_phi0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_phi0_data[i] = X_p_data[(input_sizes_idx_1 + X_hat->size[0] * i) - 1];
      }

      if (input_sizes_idx_1 > X_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, X_hat->size[0],
          &t_emlrtBCI, (emlrtCTX)sp);
      }

      b_loop_ub = X_hat->size[1];
      i = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = X_hat->size[1];
      emxEnsureCapacity_real_T(sp, retf, i, &md_emlrtRTEI);
      retf_data = retf->data;
      for (i = 0; i < b_loop_ub; i++) {
        retf_data[i] = X_p_data[(input_sizes_idx_1 + X_hat->size[0] * i) - 1];
      }

      i = b_b->size[0] * b_b->size[1];
      b_b->size[0] = b_phi0->size[1];
      b_b->size[1] = retf->size[1];
      emxEnsureCapacity_real_T(sp, b_b, i, &kd_emlrtRTEI);
      b_b_data = b_b->data;
      b_loop_ub = retf->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        nx = b_phi0->size[1];
        for (i1 = 0; i1 < nx; i1++) {
          b_b_data[i1 + b_b->size[0] * i] = b_phi0_data[i1] * retf_data[i];
        }
      }

      if ((kron_G->size[0] != b_b->size[0]) && ((kron_G->size[0] != 1) &&
           (b_b->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(kron_G->size[0], b_b->size[0], &k_emlrtECI,
          (emlrtCTX)sp);
      }

      if ((kron_G->size[1] != b_b->size[1]) && ((kron_G->size[1] != 1) &&
           (b_b->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(kron_G->size[1], b_b->size[1], &j_emlrtECI,
          (emlrtCTX)sp);
      }

      if ((kron_G->size[0] == b_b->size[0]) && (kron_G->size[1] == b_b->size[1]))
      {
        b_loop_ub = kron_G->size[0] * kron_G->size[1];
        for (i = 0; i < b_loop_ub; i++) {
          kron_G_data[i] += b_b_data[i];
        }
      } else {
        st.site = &fm_emlrtRSI;
        b_plus(&st, kron_G, b_b);
        kron_G_data = kron_G->data;
      }

      if (input_sizes_idx_1 > X_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, X_hat->size[0],
          &s_emlrtBCI, (emlrtCTX)sp);
      }

      b_loop_ub = X_hat->size[1];
      i = b_phi0->size[0] * b_phi0->size[1];
      b_phi0->size[0] = 1;
      b_phi0->size[1] = X_hat->size[1];
      emxEnsureCapacity_real_T(sp, b_phi0, i, &rd_emlrtRTEI);
      b_phi0_data = b_phi0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_phi0_data[i] = X_p_data[(input_sizes_idx_1 + X_hat->size[0] * i) - 1];
      }

      if (input_sizes_idx_1 > Y_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, Y_hat->size[0],
          &mb_emlrtBCI, (emlrtCTX)sp);
      }

      sum_B = Sigma_data[input_sizes_idx_1 - 1];
      i = e1->size[0];
      e1->size[0] = b_phi0->size[1];
      emxEnsureCapacity_real_T(sp, e1, i, &rd_emlrtRTEI);
      retf_data = e1->data;
      b_loop_ub = b_phi0->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        retf_data[i] = b_phi0_data[i] * sum_B;
      }

      b_loop_ub = sig2->size[0];
      if ((sig2->size[0] != e1->size[0]) && ((sig2->size[0] != 1) && (e1->size[0]
            != 1))) {
        emlrtDimSizeImpxCheckR2021b(sig2->size[0], e1->size[0], &i_emlrtECI,
          (emlrtCTX)sp);
      }

      if (sig2->size[0] == e1->size[0]) {
        for (i = 0; i < b_loop_ub; i++) {
          sig2_data[i] += retf_data[i];
        }
      } else {
        st.site = &dm_emlrtRSI;
        plus(&st, sig2, e1);
        sig2_data = sig2->data;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    i = b_Y->size[0];
    b_Y->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, b_Y, i, &ad_emlrtRTEI);
    X_p_data = b_Y->data;
    for (i = 0; i < e_loop_ub; i++) {
      X_p_data[i] = Y_data[i];
    }

    st.site = &m_emlrtRSI;
    Gen_beta(&st, X_p, b_Y, kron_G, sig2, inv_Sigma, b0, precb0, sig2_inv, b);
    b_data = b->data;
    if (iter + 1 > Output->betam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Output->betam->size[0],
        &f_emlrtBCI, (emlrtCTX)sp);
    }

    sizes[0] = 1;
    sizes[1] = Output->betam->size[1];
    input_sizes[0] = 1;
    b_loop_ub = b->size[0];
    input_sizes[1] = b->size[0];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &input_sizes[0], 2, &d_emlrtECI,
      (emlrtCTX)sp);
    for (i = 0; i < b_loop_ub; i++) {
      Output->betam->data[iter + Output->betam->size[0] * i] = b_data[i];
    }

    i = b_Y->size[0];
    b_Y->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, b_Y, i, &ad_emlrtRTEI);
    X_p_data = b_Y->data;
    for (i = 0; i < e_loop_ub; i++) {
      X_p_data[i] = Y_data[i];
    }

    st.site = &n_emlrtRSI;
    r = &st;
    sum_B = Gen_sig2(r, b_Y, X_p, X_hat, Y_hat, inv_Sigma, b, a0, d0);
    i = sig2->size[0];
    sig2->size[0] = 1;
    emxEnsureCapacity_real_T(&st, sig2, i, &dd_emlrtRTEI);
    sig2_data = sig2->data;
    sig2_data[0] = sum_B;
    i = sig2_inv->size[0] * sig2_inv->size[1];
    sig2_inv->size[0] = 1;
    sig2_inv->size[1] = 1;
    emxEnsureCapacity_real_T(&st, sig2_inv, i, &fd_emlrtRTEI);
    X_p_data = sig2_inv->data;
    X_p_data[0] = 1.0 / sig2_data[0];
    if ((int32_T)(iter + 1U) > Output->sigma2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, Output->
        sigma2m->size[0], &ib_emlrtBCI, &st);
    }

    Output->sigma2m->data[iter] = sig2_data[0];
    i = b_Y->size[0];
    b_Y->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, b_Y, i, &ad_emlrtRTEI);
    X_p_data = b_Y->data;
    for (i = 0; i < e_loop_ub; i++) {
      X_p_data[i] = Y_data[i];
    }

    i = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = G->size[0];
    kron_G->size[1] = G->size[1];
    emxEnsureCapacity_real_T(&st, kron_G, i, &id_emlrtRTEI);
    kron_G_data = kron_G->data;
    b_loop_ub = G->size[0] * G->size[1] - 1;
    for (i = 0; i <= b_loop_ub; i++) {
      kron_G_data[i] = G_data[i];
    }

    b_st.site = &o_emlrtRSI;
    Gen_G(&b_st, Y, X, b_Y, X_p, Sigma, inv_Sigma, b, (real_T *)sig2_inv->data,
          kron_G, phi0, precphi0, PHI0, G);
    G_data = G->data;
    if (1 > G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &r_emlrtBCI, &st);
    }

    b_loop_ub = G->size[1];
    i = phi->size[0];
    phi->size[0] = G->size[1];
    emxEnsureCapacity_real_T(&st, phi, i, &jd_emlrtRTEI);
    phi_data = phi->data;
    for (i = 0; i < b_loop_ub; i++) {
      phi_data[i] = G_data[G->size[0] * i];
    }

    if (iter + 1 > Output->phim->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Output->phim->size[0],
        &i_emlrtBCI, &st);
    }

    sizes[0] = 1;
    sizes[1] = Output->phim->size[1];
    input_sizes[0] = 1;
    b_loop_ub = phi->size[0];
    input_sizes[1] = phi->size[0];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &input_sizes[0], 2, &e_emlrtECI,
      &st);
    for (i = 0; i < b_loop_ub; i++) {
      Output->phim->data[iter + Output->phim->size[0] * i] = phi_data[i];
    }

    b_st.site = &p_emlrtRSI;
    kron(&b_st, G, G, kron_G);
    kron_G_data = kron_G->data;
    b_st.site = &q_emlrtRSI;
    eye(&b_st, kron_G->size[0], b_b);
    b_b_data = b_b->data;
    if ((b_b->size[0] != kron_G->size[0]) && ((b_b->size[0] != 1) &&
         (kron_G->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_b->size[0], kron_G->size[0], &h_emlrtECI,
        &st);
    }

    if ((b_b->size[1] != kron_G->size[1]) && ((b_b->size[1] != 1) &&
         (kron_G->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_b->size[1], kron_G->size[1], &g_emlrtECI,
        &st);
    }

    b_st.site = &q_emlrtRSI;
    if ((b_b->size[0] == kron_G->size[0]) && (b_b->size[1] == kron_G->size[1]))
    {
      i = c_b->size[0] * c_b->size[1];
      c_b->size[0] = b_b->size[0];
      c_b->size[1] = b_b->size[1];
      emxEnsureCapacity_real_T(&b_st, c_b, i, &pd_emlrtRTEI);
      X_p_data = c_b->data;
      b_loop_ub = b_b->size[0] * b_b->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        X_p_data[i] = b_b_data[i] - kron_G_data[i];
      }

      c_st.site = &q_emlrtRSI;
      inv(&c_st, c_b, Sigma);
    } else {
      c_st.site = &q_emlrtRSI;
      e_binary_expand_op(&c_st, Sigma, q_emlrtRSI, b_b, kron_G);
    }

    i = b_b->size[0] * b_b->size[1];
    b_b->size[0] = y_tmp->size[0];
    b_b->size[1] = y_tmp->size[1];
    emxEnsureCapacity_real_T(&b_st, b_b, i, &qd_emlrtRTEI);
    b_b_data = b_b->data;
    for (i = 0; i < f_loop_ub; i++) {
      b_b_data[i] = y_tmp_data[i];
    }

    c_st.site = &q_emlrtRSI;
    vec(&c_st, b_b);
    c_st.site = &md_emlrtRSI;
    c_dynamic_size_checks(&c_st, Sigma, b_b, Sigma->size[1], b_b->size[0]);
    c_st.site = &od_emlrtRSI;
    c_mtimes(&c_st, Sigma, b_b, kron_G);
    kron_G_data = kron_G->data;
    b_st.site = &r_emlrtRSI;
    nx = kron_G->size[0] * kron_G->size[1];
    c_st.site = &mg_emlrtRSI;
    e_st.site = &lg_emlrtRSI;
    assertValidSizeArg(&e_st, p);
    e_st.site = &lg_emlrtRSI;
    assertValidSizeArg(&e_st, p);
    input_sizes_idx_1 = kron_G->size[0];
    if (kron_G->size[1] > kron_G->size[0]) {
      input_sizes_idx_1 = kron_G->size[1];
    }

    if (p > muIntScalarMax_sint32(nx, input_sizes_idx_1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if (p * p != nx) {
      emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    if (sizes_idx_0 == result_idx_1) {
      i = Sigma->size[0] * Sigma->size[1];
      Sigma->size[0] = p;
      Sigma->size[1] = p;
      emxEnsureCapacity_real_T(&st, Sigma, i, &td_emlrtRTEI);
      Sigma_data = Sigma->data;
      for (i = 0; i < p; i++) {
        for (i1 = 0; i1 < p; i1++) {
          Sigma_data[i1 + Sigma->size[0] * i] = 0.5 * (kron_G_data[i1 + p * i] +
            kron_G_data[i + p * i1]);
        }
      }
    } else {
      b_st.site = &hm_emlrtRSI;
      d_binary_expand_op(&b_st, Sigma, kron_G, p);
      Sigma_data = Sigma->data;
    }

    b_st.site = &s_emlrtRSI;
    inv(&b_st, Sigma, inv_Sigma);
    i = b_b->size[0] * b_b->size[1];
    b_b->size[0] = Sigma->size[0];
    b_b->size[1] = Sigma->size[1];
    emxEnsureCapacity_real_T(&st, b_b, i, &sd_emlrtRTEI);
    b_b_data = b_b->data;
    b_loop_ub = Sigma->size[0] * Sigma->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      b_b_data[i] = Sigma_data[i];
    }

    b_st.site = &t_emlrtRSI;
    vec(&b_st, b_b);
    b_b_data = b_b->data;
    i = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = b_b->size[1];
    kron_G->size[1] = b_b->size[0];
    emxEnsureCapacity_real_T(&st, kron_G, i, &ud_emlrtRTEI);
    kron_G_data = kron_G->data;
    b_loop_ub = b_b->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      nx = b_b->size[1];
      for (i1 = 0; i1 < nx; i1++) {
        kron_G_data[i1 + kron_G->size[0] * i] = b_b_data[i + b_b->size[0] * i1];
      }
    }

    if (iter + 1 > Sigmam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Sigmam->size[0], &emlrtBCI, &st);
    }

    if (1 > kron_G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, kron_G->size[0], &q_emlrtBCI, &st);
    }

    b_loop_ub = kron_G->size[1];
    i = b_phi0->size[0] * b_phi0->size[1];
    b_phi0->size[0] = 1;
    b_phi0->size[1] = kron_G->size[1];
    emxEnsureCapacity_real_T(&st, b_phi0, i, &vd_emlrtRTEI);
    b_phi0_data = b_phi0->data;
    for (i = 0; i < b_loop_ub; i++) {
      b_phi0_data[i] = kron_G_data[kron_G->size[0] * i];
    }

    sizes[0] = 1;
    sizes[1] = Sigmam->size[1];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &b_phi0->size[0], 2, &emlrtECI,
      &st);
    b_loop_ub = kron_G->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      Sigmam_data[iter + Sigmam->size[0] * i] = kron_G_data[kron_G->size[0] * i];
    }

    if (Is_forecasting == 1) {
      sum_B = (real_T)(X->size[0] - p) + 1.0;
      if (sum_B > X->size[0]) {
        i = 0;
        i1 = 1;
        i2 = -1;
      } else {
        if (X->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(X->size[0], 1, X->size[0], &p_emlrtBCI,
            &st);
        }

        i = X->size[0] - 1;
        i1 = -1;
        i2 = (int32_T)sum_B;
        if ((sum_B < 1.0) || (i2 > X->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)sum_B, 1, X->size[0],
            &o_emlrtBCI, &st);
        }

        i2--;
      }

      b_st.site = &u_emlrtRSI;
      b_loop_ub = X->size[1];
      c_st.site = &u_emlrtRSI;
      nx = div_s32_floor(&c_st, i2 - i, i1);
      input_sizes_idx_1 = c_b->size[0] * c_b->size[1];
      c_b->size[0] = nx + 1;
      c_b->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&b_st, c_b, input_sizes_idx_1, &wd_emlrtRTEI);
      X_p_data = c_b->data;
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < b_loop_ub;
           input_sizes_idx_1++) {
        for (b_result = 0; b_result <= nx; b_result++) {
          X_p_data[b_result + c_b->size[0] * input_sizes_idx_1] = X_data[(i + i1
            * b_result) + X->size[0] * input_sizes_idx_1];
        }
      }

      c_st.site = &md_emlrtRSI;
      d_st.site = &u_emlrtRSI;
      d_dynamic_size_checks(&c_st, phi, c_b, phi->size[0], div_s32_floor(&d_st,
        i2 - i, i1) + 1);
      b_loop_ub = X->size[1];
      i2 = c_b->size[0] * c_b->size[1];
      c_b->size[0] = nx + 1;
      c_b->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&b_st, c_b, i2, &wd_emlrtRTEI);
      X_p_data = c_b->data;
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        for (input_sizes_idx_1 = 0; input_sizes_idx_1 <= nx; input_sizes_idx_1++)
        {
          X_p_data[input_sizes_idx_1 + c_b->size[0] * i2] = X_data[(i + i1 *
            input_sizes_idx_1) + X->size[0] * i2];
        }
      }

      c_st.site = &od_emlrtRSI;
      d_mtimes(&c_st, phi, c_b, b_phi0);
      b_phi0_data = b_phi0->data;
      b_loop_ub = x_f->size[0];
      if ((x_f->size[0] != b_phi0->size[1]) && ((x_f->size[0] != 1) &&
           (b_phi0->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(x_f->size[0], b_phi0->size[1], &f_emlrtECI,
          &st);
      }

      if (x_f->size[0] == b_phi0->size[1]) {
        i = retf->size[0] * retf->size[1];
        retf->size[0] = 1;
        retf->size[1] = x_f->size[0];
        emxEnsureCapacity_real_T(&st, retf, i, &ae_emlrtRTEI);
        retf_data = retf->data;
        for (i = 0; i < b_loop_ub; i++) {
          retf_data[i] = x_f_data[i] - b_phi0_data[i];
        }
      } else {
        b_st.site = &u_emlrtRSI;
        c_binary_expand_op(&b_st, retf, x_f, b_phi0);
      }

      b_st.site = &v_emlrtRSI;
      c_st.site = &md_emlrtRSI;
      dynamic_size_checks(&c_st, retf, b, retf->size[1], b->size[0]);
      i = e1->size[0];
      e1->size[0] = 1;
      emxEnsureCapacity_real_T(&st, e1, i, &be_emlrtRTEI);
      retf_data = e1->data;
      retf_data[0] = sig2_data[0];
      b_st.site = &v_emlrtRSI;
      b_sqrt(&b_st, e1);
      retf_data = e1->data;
      b_st.site = &v_emlrtRSI;
      beta_prior = b_randn();
      sum_B = (real_T)(Y->size[0] - p) + 1.0;
      if (sum_B > Y->size[0]) {
        i = 0;
        i1 = 1;
        i2 = -1;
      } else {
        if (Y->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(Y->size[0], 1, Y->size[0], &n_emlrtBCI,
            &st);
        }

        i = Y->size[0] - 1;
        i1 = -1;
        i2 = (int32_T)sum_B;
        if ((sum_B < 1.0) || (i2 > Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)sum_B, 1, Y->size[0],
            &m_emlrtBCI, &st);
        }

        i2--;
      }

      if (1 > Y->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Y->size[1], &l_emlrtBCI, &st);
      }

      b_st.site = &w_emlrtRSI;
      c_st.site = &w_emlrtRSI;
      b_loop_ub = div_s32_floor(&c_st, i2 - i, i1);
      input_sizes_idx_1 = b_Y->size[0];
      b_Y->size[0] = b_loop_ub + 1;
      emxEnsureCapacity_real_T(&b_st, b_Y, input_sizes_idx_1, &ee_emlrtRTEI);
      X_p_data = b_Y->data;
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 <= b_loop_ub;
           input_sizes_idx_1++) {
        X_p_data[input_sizes_idx_1] = Y_data[i + i1 * input_sizes_idx_1];
      }

      c_st.site = &md_emlrtRSI;
      d_st.site = &w_emlrtRSI;
      e_dynamic_size_checks(&c_st, phi, b_Y, phi->size[0], div_s32_floor(&d_st,
        i2 - i, i1) + 1);
      i2 = b_Y->size[0];
      b_Y->size[0] = b_loop_ub + 1;
      emxEnsureCapacity_real_T(&b_st, b_Y, i2, &ee_emlrtRTEI);
      X_p_data = b_Y->data;
      for (i2 = 0; i2 <= b_loop_ub; i2++) {
        X_p_data[i2] = Y_data[i + i1 * i2];
      }

      if ((int32_T)(iter + 1U) > Output->yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, Output->yfm->
          size[0], &nb_emlrtBCI, &st);
      }

      Output->yfm->data[iter] = (mtimes(retf, b) + retf_data[0] * beta_prior) +
        e_mtimes(phi, b_Y);
    }

    if ((ML == 'Y') && ((real_T)iter + 1.0 > n0)) {
      b_st.site = &x_emlrtRSI;
      c_st.site = &md_emlrtRSI;
      b_dynamic_size_checks(&c_st, X_p, b, X->size[1], b->size[0]);
      c_st.site = &od_emlrtRSI;
      b_mtimes(&c_st, X_p, b, e1);
      b_st.site = &x_emlrtRSI;
      if (1 == Sigma->size[0]) {
        i = b_Y->size[0];
        b_Y->size[0] = loop_ub;
        emxEnsureCapacity_real_T(&b_st, b_Y, i, &ad_emlrtRTEI);
        X_p_data = b_Y->data;
        for (i = 0; i < loop_ub; i++) {
          X_p_data[i] = Y_data[i];
        }

        i = c_b->size[0] * c_b->size[1];
        c_b->size[0] = 1;
        c_b->size[1] = Sigma->size[1];
        emxEnsureCapacity_real_T(&b_st, c_b, i, &xd_emlrtRTEI);
        X_p_data = c_b->data;
        b_loop_ub = Sigma->size[1];
        for (i = 0; i < b_loop_ub; i++) {
          X_p_data[c_b->size[0] * i] = sig2_data[0] * Sigma_data[Sigma->size[0] *
            i];
        }

        c_st.site = &x_emlrtRSI;
        sum_B = lnpdfmvn(&c_st, b_Y, e1, c_b);
      } else {
        c_st.site = &x_emlrtRSI;
        sum_B = b_binary_expand_op(&c_st, x_emlrtRSI, Y, loop_ub - 1, e1, sig2,
          Sigma);
      }

      /*  gauss function */
      c_st.site = &jk_emlrtRSI;
      sum_A = c_sum(sum_B);
      b_st.site = &y_emlrtRSI;
      c_st.site = &md_emlrtRSI;
      b_dynamic_size_checks(&c_st, X_hat, b, X_hat->size[1], b->size[0]);
      c_st.site = &od_emlrtRSI;
      b_mtimes(&c_st, X_hat, b, e1);
      b_st.site = &y_emlrtRSI;
      c_st.site = &y_emlrtRSI;
      eye(&c_st, T - p, b_b);
      b_b_data = b_b->data;
      i = c_b->size[0] * c_b->size[1];
      c_b->size[0] = b_b->size[0];
      c_b->size[1] = b_b->size[1];
      emxEnsureCapacity_real_T(&b_st, c_b, i, &yd_emlrtRTEI);
      X_p_data = c_b->data;
      b_loop_ub = b_b->size[0] * b_b->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        X_p_data[i] = sig2_data[0] * b_b_data[i];
      }

      c_st.site = &y_emlrtRSI;
      sum_B = lnpdfmvn(&c_st, Y_hat, e1, c_b);

      /*  gauss function */
      c_st.site = &jk_emlrtRSI;
      sum_B = c_sum(sum_B);
      b_st.site = &ab_emlrtRSI;
      beta_prior = lnpdfmvn(&b_st, b, b0, B0);
      b_st.site = &bb_emlrtRSI;
      phi_prior = lnpdfmvn(&b_st, phi, phi0, PHI0);
      b_st.site = &cb_emlrtRSI;
      lnpdfig(&b_st, (real_T *)sig2->data, a0 / 2.0, d0 / 2.0, (real_T *)
              &sig2_prior_data, &nx);
      sig2_prior_data = (sum_A + sum_B) + ((beta_prior + phi_prior) +
        sig2_prior_data);
      if (sig2_prior_data > lnpost_hat) {
        b_loop_ub = b->size[0];
        i = b_hat->size[0];
        b_hat->size[0] = b->size[0];
        emxEnsureCapacity_real_T(&st, b_hat, i, &ce_emlrtRTEI);
        b_hat_data = b_hat->data;
        for (i = 0; i < b_loop_ub; i++) {
          b_hat_data[i] = b_data[i];
        }

        b_loop_ub = phi->size[0];
        i = phi_hat->size[0];
        phi_hat->size[0] = phi->size[0];
        emxEnsureCapacity_real_T(&st, phi_hat, i, &de_emlrtRTEI);
        phi_hat_data = phi_hat->data;
        for (i = 0; i < b_loop_ub; i++) {
          phi_hat_data[i] = phi_data[i];
        }

        b_loop_ub = sig2->size[0];
        for (i = 0; i < b_loop_ub; i++) {
          sig2_hat_data = sig2_data[i];
        }

        lnpost_hat = sig2_prior_data;
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFree_real_T(sp, &b_Y);
  emxFree_real_T(sp, &b_phi0);
  emxFree_real_T(sp, &y_tmp);
  emxFree_real_T(sp, &Y_hat);
  emxFree_real_T(sp, &X_hat);
  emxFree_real_T(sp, &inv_Sigma);
  emxFree_real_T(sp, &X_p);
  emxFree_real_T(sp, &e1);
  emxFree_real_T(sp, &G);
  emxFree_real_T(sp, &sig2_inv);
  emxFree_real_T(sp, &sig2);
  emxFree_real_T(sp, &Sigmam);
  emxFree_real_T(sp, &precphi0);
  emxFree_real_T(sp, &precb0);
  emxFree_real_T(sp, &X);
  emxFree_real_T(sp, &Y);
  st.site = &sl_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &b_emlrtMCI);
  st.site = &ml_emlrtRSI;
  disp(&st, h_emlrt_marshallOut(&st, cv4), &c_emlrtMCI);
  st.site = &rl_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &d_emlrtMCI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->
         sigma2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->
        sigma2m->size[0], &k_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Output->sigma2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->sigma2m->size[0],
        &j_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp;
  }

  sizes[0] = 1;
  b_loop_ub = i1 - i;
  sizes[1] = b_loop_ub;
  st.site = &db_emlrtRSI;
  indexShapeCheck(&st, Output->sigma2m->size[0], sizes);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    Output->sigma2m->data[i1] = Output->sigma2m->data[i + i1];
  }

  i = Output->sigma2m->size[0];
  Output->sigma2m->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, Output->sigma2m, i, &qc_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->phim->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->phim->size[0],
        &h_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->phim->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->phim->size[0],
        &g_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp - 1;
  }

  sizes_idx_1 = Output->phim->size[1] - 1;
  for (i2 = 0; i2 <= sizes_idx_1; i2++) {
    nx = i1 - i;
    for (i3 = 0; i3 < nx; i3++) {
      Output->phim->data[i3 + nx * i2] = Output->phim->data[((i + i3) +
        Output->phim->size[0] * i2) + 1];
    }
  }

  i2 = Output->phim->size[0] * Output->phim->size[1];
  Output->phim->size[0] = i1 - i;
  Output->phim->size[1] = sizes_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, Output->phim, i2, &rc_emlrtRTEI);

  /*  Sigmam = Sigmam(n0+1:n,:); */
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->betam->size
         [0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->betam->size
        [0], &e_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->betam->size[0],
        &d_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)n - 1;
  }

  input_sizes_idx_1 = Output->betam->size[1] - 1;
  for (i2 = 0; i2 <= input_sizes_idx_1; i2++) {
    nx = i1 - i;
    for (i3 = 0; i3 < nx; i3++) {
      Output->betam->data[i3 + nx * i2] = Output->betam->data[((i + i3) +
        Output->betam->size[0] * i2) + 1];
    }
  }

  i2 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = i1 - i;
  Output->betam->size[1] = input_sizes_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, Output->betam, i2, &uc_emlrtRTEI);
  if (Is_forecasting == 1) {
    if (n0 + 1.0 > n) {
      i = 0;
      loop_ub_tmp = 0;
    } else {
      if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
        emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->yfm->size
           [0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->yfm->size
          [0], &c_emlrtBCI, (emlrtCTX)sp);
      }

      i = (int32_T)(n0 + 1.0) - 1;
      if ((n < 1.0) || (loop_ub_tmp > Output->yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->yfm->size[0],
          &b_emlrtBCI, (emlrtCTX)sp);
      }
    }

    loop_ub_tmp -= i;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      Output->yfm->data[i1] = Output->yfm->data[i + i1];
    }

    i = Output->yfm->size[0];
    Output->yfm->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, Output->yfm, i, &yc_emlrtRTEI);
  }

  Output->lnML = 0.0;
  if (ML == 'Y') {
    st.site = &eb_emlrtRSI;
    b_st.site = &kf_emlrtRSI;
    if ((Output->betam->size[0] != 0) && (input_sizes_idx_1 + 1 != 0)) {
      b_result = Output->betam->size[0];
    } else if ((Output->phim->size[0] != 0) && (sizes_idx_1 + 1 != 0)) {
      b_result = Output->phim->size[0];
    } else if (b_loop_ub != 0) {
      b_result = b_loop_ub;
    } else {
      b_result = Output->betam->size[0];
      if (Output->phim->size[0] > Output->betam->size[0]) {
        b_result = Output->phim->size[0];
      }
    }

    c_st.site = &lf_emlrtRSI;
    if ((Output->betam->size[0] != b_result) && ((Output->betam->size[0] != 0) &&
         (input_sizes_idx_1 + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Output->phim->size[0] != b_result) && ((Output->phim->size[0] != 0) &&
         (sizes_idx_1 + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((b_loop_ub != b_result) && (b_loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (b_result == 0);
    if (empty_non_axis_sizes || ((Output->betam->size[0] != 0) &&
         (input_sizes_idx_1 + 1 != 0))) {
      input_sizes_idx_1++;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((Output->phim->size[0] != 0) && (sizes_idx_1 +
          1 != 0))) {
      nx = sizes_idx_1 + 1;
    } else {
      nx = 0;
    }

    if (empty_non_axis_sizes || (b_loop_ub != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    i = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = b_result;
    i1 = input_sizes_idx_1 + nx;
    kron_G->size[1] = i1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, kron_G, i, &gd_emlrtRTEI);
    kron_G_data = kron_G->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i2 = 0; i2 < b_result; i2++) {
        kron_G_data[i2 + kron_G->size[0] * i] = Output->betam->data[i2 +
          b_result * i];
      }
    }

    for (i = 0; i < nx; i++) {
      for (i2 = 0; i2 < b_result; i2++) {
        kron_G_data[i2 + kron_G->size[0] * (i + input_sizes_idx_1)] =
          Output->phim->data[i2 + b_result * i];
      }
    }

    for (i = 0; i < sizes_idx_1; i++) {
      for (i2 = 0; i2 < b_result; i2++) {
        kron_G_data[i2 + kron_G->size[0] * i1] = Output->sigma2m->data[i2];
      }
    }

    st.site = &fb_emlrtRSI;
    b_st.site = &uk_emlrtRSI;
    mean(&b_st, kron_G, retf);
    retf_data = retf->data;
    st.site = &gb_emlrtRSI;
    cov(&st, kron_G, b_b);
    b_b_data = b_b->data;
    st.site = &gb_emlrtRSI;
    cov(&st, kron_G, Sigma);
    Sigma_data = Sigma->data;
    if ((b_b->size[0] != Sigma->size[1]) && ((b_b->size[0] != 1) && (Sigma->
          size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_b->size[0], Sigma->size[1], &c_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((Sigma->size[0] != b_b->size[1]) && ((b_b->size[1] != 1) && (Sigma->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_b->size[1], Sigma->size[0], &b_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((b_b->size[0] == Sigma->size[1]) && (Sigma->size[0] == b_b->size[1])) {
      i = b->size[0];
      b->size[0] = (b_hat->size[0] + phi_hat->size[0]) + 1;
      emxEnsureCapacity_real_T(sp, b, i, &ld_emlrtRTEI);
      b_data = b->data;
      loop_ub = b_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_data[i] = b_hat_data[i];
      }

      loop_ub = phi_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_data[i + b_hat->size[0]] = phi_hat_data[i];
      }

      b_data[b_hat->size[0] + phi_hat->size[0]] = sig2_hat_data;
      i = phi->size[0];
      phi->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, phi, i, &nd_emlrtRTEI);
      phi_data = phi->data;
      loop_ub = retf->size[1];
      for (i = 0; i < loop_ub; i++) {
        phi_data[i] = retf_data[i];
      }

      i = c_b->size[0] * c_b->size[1];
      c_b->size[0] = b_b->size[0];
      c_b->size[1] = b_b->size[1];
      emxEnsureCapacity_real_T(sp, c_b, i, &od_emlrtRTEI);
      X_p_data = c_b->data;
      loop_ub = b_b->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = b_b->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          X_p_data[i1 + c_b->size[0] * i] = 0.5 * (b_b_data[i1 + b_b->size[0] *
            i] + Sigma_data[i + Sigma->size[0] * i1]);
        }
      }

      st.site = &hb_emlrtRSI;
      sum_B = lnpdfmvn(&st, b, phi, c_b);
    } else {
      st.site = &hb_emlrtRSI;
      sum_B = f_binary_expand_op(&st, hb_emlrtRSI, b_hat, phi_hat, (real_T *)
        &sig2_hat_data, retf, b_b, Sigma);
    }

    Output->lnML = lnpost_hat - sum_B;
  }

  emxFree_real_T(sp, &c_b);
  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &b_b);
  emxFree_real_T(sp, &phi_hat);
  emxFree_real_T(sp, &b_hat);
  emxFree_real_T(sp, &Sigma);
  emxFree_real_T(sp, &kron_G);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &phi);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Auto_Regression.c) */

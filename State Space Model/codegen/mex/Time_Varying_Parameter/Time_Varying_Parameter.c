/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Time_Varying_Parameter.c
 *
 * Code generation for function 'Time_Varying_Parameter'
 *
 */

/* Include files */
#include "Time_Varying_Parameter.h"
#include "Time_Varying_Parameter_data.h"
#include "Time_Varying_Parameter_emxutil.h"
#include "Time_Varying_Parameter_mexutil.h"
#include "Time_Varying_Parameter_types.h"
#include "chol.h"
#include "cholmod.h"
#include "cov.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "gammaln.h"
#include "inv.h"
#include "invpd.h"
#include "lnpdfmvn.h"
#include "lnpdfwishart.h"
#include "mean.h"
#include "minc.h"
#include "mpower.h"
#include "mtimes.h"
#include "power.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "vec.h"
#include "warning.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 13,    /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 27,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 31,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 46,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 57,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 63,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 67,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 68,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 71,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 75,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 82,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 83,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 84,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 113, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 115, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 116, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 117, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 181,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 184,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 189,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 196,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 197,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 198,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 200,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 202,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 203,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 207,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 209,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 210,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 220,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 226,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 229,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 238,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 240,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 242,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 244,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 245,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 247,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 251,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 253,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 156,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 159,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 160,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 164,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 166,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 169,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 263,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 269,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 277,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 278,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 279,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 280,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 281,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 283,/* lineNo */
  "paramconst",                        /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 219,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 302,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 349,/* lineNo */
  "minOrMax1D",                        /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 4,  /* lineNo */
  "maxc",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/maxc.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 17, /* lineNo */
  "max",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/max.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 77, /* lineNo */
  "maximum",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 28, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 100,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 134,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 135,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 136,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 137,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 138,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 108,/* lineNo */
  "diff",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 106,/* lineNo */
  "diff",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 87, /* lineNo */
  "diff",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 7,  /* lineNo */
  "randwishart",                       /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 8,  /* lineNo */
  "randwishart",                       /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 9,  /* lineNo */
  "randwishart",                       /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 145,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 146,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 148,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 12, /* lineNo */
  "randig",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 18, /* lineNo */
  "randgam",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 11, /* lineNo */
  "gamrnd",                            /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 1,  /* lineNo */
  "rnd",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/rnd.p"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 1,  /* lineNo */
  "gamrnd",                            /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/gamrnd.p"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 1,  /* lineNo */
  "randg",                             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/randg.p"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 289,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 290,/* lineNo */
  "Gen_Forecast",                      /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 8,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 9,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 17, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 6,     /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 98,  /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 99,  /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 100, /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 44,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 45,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 47,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 48,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 49,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 50,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 51,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 52,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 53,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 54,  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 40,  /* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  32,                                  /* colNo */
  "vec_Omega",                         /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  47,                                  /* colNo */
  "beta1",                             /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  15,                                  /* colNo */
  "betam",                             /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  64,                                  /* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 102,   /* lineNo */
  15,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  15,                                  /* colNo */
  "betam",                             /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  20,                                  /* colNo */
  "betam",                             /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  12,                                  /* colNo */
  "Omegam",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  69,                                  /* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtDCInfo b_emlrtDCI = { 103, /* lineNo */
  17,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  17,                                  /* colNo */
  "Omegam",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  22,                                  /* colNo */
  "Omegam",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 104, /* lineNo */
  17,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  17,                                  /* colNo */
  "Sigmam",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  22,                                  /* colNo */
  "Sigmam",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  12,                                  /* colNo */
  "beta1m",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  58,                                  /* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtDCInfo d_emlrtDCI = { 105, /* lineNo */
  17,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  17,                                  /* colNo */
  "beta1m",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  22,                                  /* colNo */
  "beta1m",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 108, /* lineNo */
  15,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  15,                                  /* colNo */
  "Yfm",                               /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  20,                                  /* colNo */
  "Yfm",                               /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { 1,   /* nDims */
  116,                                 /* lineNo */
  22,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  116,                                 /* lineNo */
  22,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 275,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtDCInfo f_emlrtDCI = { 29,  /* lineNo */
  15,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 29,  /* lineNo */
  15,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 31,  /* lineNo */
  16,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 31,  /* lineNo */
  18,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 29,  /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 30,  /* lineNo */
  16,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 31,  /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 32,  /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 33,  /* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  12,                                  /* colNo */
  "Sigmam",                            /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  13,                                  /* colNo */
  "Yfm",                               /* aName */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 1,   /* nDims */
  181,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  195,                                 /* lineNo */
  12,                                  /* colNo */
  "H",                                 /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { 1,   /* nDims */
  196,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 1,   /* nDims */
  197,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  197,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { 1,   /* nDims */
  208,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 1,   /* nDims */
  209,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 2,   /* nDims */
  209,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  15,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  213,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  224,                                 /* lineNo */
  18,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { 1,   /* nDims */
  225,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { 2,   /* nDims */
  225,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  212,                                 /* lineNo */
  15,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  212,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  18,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { 1,   /* nDims */
  229,                                 /* lineNo */
  6,                                   /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  22,                                  /* colNo */
  "f_ttm",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  236,                                 /* lineNo */
  22,                                  /* colNo */
  "P_ttm",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { 1,   /* nDims */
  238,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  238,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 1,   /* nDims */
  239,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { 2,   /* nDims */
  239,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  230,                                 /* lineNo */
  7,                                   /* colNo */
  "beta1",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  230,                                 /* lineNo */
  1,                                   /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  18,                                  /* colNo */
  "beta1",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { 1,   /* nDims */
  242,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { 1,   /* nDims */
  245,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { 1,   /* nDims */
  248,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  248,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 1,  /* nDims */
  250,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  250,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 1,  /* nDims */
  253,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  11,                                  /* colNo */
  "beta1",                             /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { -1, /* nDims */
  254,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  24,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  16,                                  /* colNo */
  "likelihood",                        /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  206,                                 /* lineNo */
  19,                                  /* colNo */
  "Y_star",                            /* aName */
  "Gen_beta1",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { 1,  /* nDims */
  166,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { 1,  /* nDims */
  166,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { 2,  /* nDims */
  165,                                 /* lineNo */
  11,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo rb_emlrtECI = { 1,  /* nDims */
  165,                                 /* lineNo */
  11,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 2,  /* nDims */
  163,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { 1,  /* nDims */
  163,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { 2,  /* nDims */
  162,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { 1,  /* nDims */
  162,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { 1,  /* nDims */
  156,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { 2,  /* nDims */
  156,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { 1,  /* nDims */
  156,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtDCInfo q_emlrtDCI = { 277, /* lineNo */
  27,                                  /* colNo */
  "paramconst",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo ac_emlrtECI = { 1,  /* nDims */
  281,                                 /* lineNo */
  17,                                  /* colNo */
  "paramconst",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtDCInfo r_emlrtDCI = { 275, /* lineNo */
  12,                                  /* colNo */
  "paramconst",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  275,                                 /* lineNo */
  12,                                  /* colNo */
  "beta",                              /* aName */
  "paramconst",                        /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo q_emlrtRTEI = { 51,/* lineNo */
  19,                                  /* colNo */
  "diff",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pName */
};

static emlrtECInfo bc_emlrtECI = { 2,  /* nDims */
  135,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { 1,  /* nDims */
  135,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo dc_emlrtECI = { 1,  /* nDims */
  145,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo ec_emlrtECI = { 1,  /* nDims */
  145,                                 /* lineNo */
  25,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo fc_emlrtECI = { 2,  /* nDims */
  145,                                 /* lineNo */
  25,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtECInfo gc_emlrtECI = { 1,  /* nDims */
  289,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Forecast",                      /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 16,/* lineNo */
  4,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 29,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 30,/* lineNo */
  10,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 102,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 63,/* lineNo */
  33,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 61,/* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 50,/* lineNo */
  14,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 104,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 68,/* lineNo */
  17,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 127,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 68,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 108,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 69,/* lineNo */
  22,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 75,/* lineNo */
  41,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 113,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 89,/* lineNo */
  13,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 90,/* lineNo */
  13,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 295,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 4,/* lineNo */
  8,                                   /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 1,/* lineNo */
  10,                                  /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 181,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 186,/* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 187,/* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 188,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 191,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 222,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 195,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 196,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 225,/* lineNo */
  8,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 229,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 236,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 207,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 208,/* lineNo */
  19,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 239,/* lineNo */
  13,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 208,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 209,/* lineNo */
  23,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 239,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 242,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 208,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 235,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 215,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 245,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 248,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 250,/* lineNo */
  13,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 250,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 184,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 186,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 187,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 197,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 209,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 240,/* lineNo */
  5,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 197,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 198,/* lineNo */
  14,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 207,/* lineNo */
  15,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 156,/* lineNo */
  18,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 156,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 162,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 171,/* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 159,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 160,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 166,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 16,/* lineNo */
  13,                                  /* colNo */
  "isinf",                             /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/isinf.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 16,/* lineNo */
  13,                                  /* colNo */
  "isnan",                             /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/isnan.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 269,/* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 275,/* lineNo */
  7,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 279,/* lineNo */
  11,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 281,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 283,/* lineNo */
  14,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 278,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 279,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 280,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 277,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 263,/* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 78,/* lineNo */
  21,                                  /* colNo */
  "diff",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 135,/* lineNo */
  14,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 9,/* lineNo */
  5,                                   /* colNo */
  "randwishart",                       /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 9,/* lineNo */
  7,                                   /* colNo */
  "randwishart",                       /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 136,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 78,/* lineNo */
  1,                                   /* colNo */
  "diff",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/diff.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 145,/* lineNo */
  8,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 145,/* lineNo */
  25,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 145,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 143,/* lineNo */
  18,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 289,/* lineNo */
  1,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 287,/* lineNo */
  19,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 289,/* lineNo */
  31,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 209,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 196,/* lineNo */
  12,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 253,/* lineNo */
  10,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 248,/* lineNo */
  13,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 245,/* lineNo */
  13,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 229,/* lineNo */
  6,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 181,/* lineNo */
  10,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 162,/* lineNo */
  9,                                   /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 289,/* lineNo */
  10,                                  /* colNo */
  "Time_Varying_Parameter",            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pName */
};

static emlrtRSInfo kl_emlrtRSI = { 6,  /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 47, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 45, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 49, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 53, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 51, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 99, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 100,/* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 98, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 54, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 52, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 50, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 48, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 44, /* lineNo */
  "Time_Varying_Parameter",            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 208,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 250,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 239,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 248,/* lineNo */
  "Gen_beta1",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 76, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 162,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space Model/Time_Varying_Parameter.m"/* pathName */
};

/* Function Declarations */
static real_T Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *x0_f,
  const emxArray_real_T *x1_f, const emxArray_real_T *beta1, const
  emxArray_real_T *beta, real_T Sigma, const emxArray_real_T *Omega);
static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *beta1, real_T
                      nu, const emxArray_real_T *R0, real_T d, emxArray_real_T
                      *Omega);
static real_T Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y, const
  emxArray_real_T *Z, const emxArray_real_T *H, const emxArray_real_T *beta1,
  const emxArray_real_T *beta, real_T a0, real_T d0, real_T d);
static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y, const
                     emxArray_real_T *Z, const emxArray_real_T *H, const
                     emxArray_real_T *beta0, const emxArray_real_T *Betam, const
                     emxArray_real_T *b_, const emxArray_real_T *precb_, real_T
                     sig2, char_T restriction, const emxArray_real_T *res_x,
                     emxArray_real_T *beta);
static void Gen_beta1(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *Z, const emxArray_real_T *H, const
                      emxArray_real_T *beta, const emxArray_real_T *Omega,
                      real_T Sigma, emxArray_real_T *beta1, real_T
                      *loglikelihood);
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tt,
  const emxArray_real_T *f_tl);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37]);
static void b_minus(const emlrtStack *sp, emxArray_real_T *f_ll, const
                    emxArray_real_T *y);
static void b_plus(const emlrtStack *sp, emxArray_real_T *Y_star, const
                   emxArray_real_T *y);
static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo om_emlrtRSI,
  const emxArray_real_T *beta_hat, const int32_T input_sizes[2], const
  emxArray_real_T *Omega_hat, const int32_T b_input_sizes[2], real_T Sigma_hat,
  const emxArray_real_T *retf, const emxArray_real_T *r2, const emxArray_real_T *
  Omega);
static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tl,
  int32_T k_H);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8]);
static void c_minus(const emlrtStack *sp, emxArray_real_T *Y_star, const
                    emxArray_real_T *Y);
static void c_plus(const emlrtStack *sp, emxArray_real_T *XX, const
                   emxArray_real_T *precb_);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static void d_plus(const emlrtStack *sp, emxArray_real_T *beta1_, const
                   emxArray_real_T *beta1);
static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *GPG_Qinv,
  const emxArray_real_T *P_ttm, int32_T t);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[9]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6]);
static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y_star,
  const emxArray_real_T *f_ttm, int32_T t);
static const mxArray *f_emlrt_marshallOut(const real_T u);
static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);
static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_ll,
  const emxArray_real_T *beta1, int32_T t, int32_T k_H);
static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y_star,
  const emxArray_real_T *f_ttm, const emxArray_real_T *Y);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [38]);
static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *P_tt,
  emlrtRSInfo om_emlrtRSI, const emxArray_real_T *P_ttm, const emxArray_real_T
  *Y);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23]);
static const mxArray *m_emlrt_marshallOut(void);
static void minus(const emlrtStack *sp, emxArray_real_T *GPG_Qinv, const
                  emxArray_real_T *P_tt);
static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
  emlrtRSInfo om_emlrtRSI);
static void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y_star,
  emlrtRSInfo om_emlrtRSI, const emxArray_real_T *H, const emxArray_real_T
  *Betam);
static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Omega1,
  emlrtRSInfo om_emlrtRSI, const emxArray_real_T *r1);
static real_T paramconst(const emlrtStack *sp, const emxArray_real_T *beta,
  const emxArray_real_T *res_x);
static void plus(const emlrtStack *sp, emxArray_real_T *P_tl, const
                 emxArray_real_T *Omega);

/* Function Definitions */
static real_T Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *x0_f,
  const emxArray_real_T *x1_f, const emxArray_real_T *beta1, const
  emxArray_real_T *beta, real_T Sigma, const emxArray_real_T *Omega)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *b;
  emxArray_real_T *beta1_;
  emxArray_real_T *r;
  const real_T *Omega_data;
  const real_T *beta1_data;
  const real_T *beta_data;
  const real_T *x0_f_data;
  const real_T *x1_f_data;
  real_T b_y;
  real_T y;
  real_T y_pred;
  real_T *beta1__data;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  Omega_data = Omega->data;
  beta_data = beta->data;
  beta1_data = beta1->data;
  x1_f_data = x1_f->data;
  x0_f_data = x0_f->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &uh_emlrtRTEI);
  st.site = &cj_emlrtRSI;
  i = r->size[0] * r->size[1];
  r->size[0] = Omega->size[0];
  r->size[1] = Omega->size[1];
  emxEnsureCapacity_real_T(&st, r, i, &vf_emlrtRTEI);
  beta1__data = r->data;
  loop_ub = Omega->size[0] * Omega->size[1];
  for (i = 0; i < loop_ub; i++) {
    beta1__data[i] = Omega_data[i];
  }

  emxInit_real_T(&st, &b, 1, &vh_emlrtRTEI);
  b_st.site = &vf_emlrtRSI;
  cholesky(&b_st, r);
  st.site = &cj_emlrtRSI;
  b_st.site = &cj_emlrtRSI;
  randn(&b_st, beta1->size[0], b);
  b_st.site = &qc_emlrtRSI;
  if (r->size[0] != b->size[0]) {
    if (((r->size[0] == 1) && (r->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &beta1_, 1, &th_emlrtRTEI);
  b_st.site = &pc_emlrtRSI;
  f_mtimes(&b_st, r, b, beta1_);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &r);
  if ((beta1->size[0] != beta1_->size[0]) && ((beta1->size[0] != 1) &&
       (beta1_->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta1->size[0], beta1_->size[0], &gc_emlrtECI,
      (emlrtCTX)sp);
  }

  if (beta1->size[0] == beta1_->size[0]) {
    i = beta1_->size[0];
    beta1_->size[0] = beta1->size[0];
    emxEnsureCapacity_real_T(sp, beta1_, i, &th_emlrtRTEI);
    beta1__data = beta1_->data;
    loop_ub = beta1->size[0];
    for (i = 0; i < loop_ub; i++) {
      beta1__data[i] += beta1_data[i];
    }
  } else {
    st.site = &cj_emlrtRSI;
    d_plus(&st, beta1_, beta1);
    beta1__data = beta1_->data;
  }

  st.site = &dj_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  if (x0_f->size[0] != beta->size[0]) {
    if ((x0_f->size[0] == 1) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (x0_f->size[0] < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x0_f->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    y = ddot(&n_t, &x0_f_data[0], &incx_t, &beta_data[0], &incy_t);
  }

  st.site = &dj_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  if (x1_f->size[0] != beta1_->size[0]) {
    if ((x1_f->size[0] == 1) || (beta1_->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if (x1_f->size[0] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)x1_f->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &x1_f_data[0], &incx_t, &beta1__data[0], &incy_t);
  }

  emxFree_real_T(&st, &beta1_);
  st.site = &dj_emlrtRSI;
  if (Sigma < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  st.site = &dj_emlrtRSI;
  y_pred = (y + b_y) + muDoubleScalarSqrt(Sigma) * c_randn();

  /*  lnpredlik = lnpdfn(y_pred, x_f'*beta, volf^2); */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y_pred;
}

static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *beta1, real_T
                      nu, const emxArray_real_T *R0, real_T d, emxArray_real_T
                      *Omega)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *Omega1;
  emxArray_real_T *b_Omega1;
  emxArray_real_T *b_y1;
  emxArray_real_T *c_Omega1;
  const real_T *beta1_data;
  real_T b_d;
  real_T tmp1;
  real_T work_data;
  real_T *Omega1_data;
  real_T *b_Omega1_data;
  real_T *y1_data;
  int32_T dimSize;
  int32_T ixLead_tmp;
  int32_T iyStart;
  int32_T m;
  int32_T nHigh;
  int32_T r;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  beta1_data = beta1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &ei_emlrtRSI;
  dimSize = beta1->size[0];
  emxInit_real_T(&st, &b_y1, 2, &oh_emlrtRTEI);
  if (beta1->size[0] == 0) {
    b_y1->size[0] = 0;
    b_y1->size[1] = beta1->size[1];
  } else {
    nHigh = beta1->size[0] - 1;
    if (muIntScalarMin_sint32(nHigh, 1) < 1) {
      b_y1->size[0] = 0;
      b_y1->size[1] = beta1->size[1];
    } else {
      if (beta1->size[0] == 1) {
        emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      iyStart = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = beta1->size[0] - 1;
      b_y1->size[1] = beta1->size[1];
      emxEnsureCapacity_real_T(&st, b_y1, iyStart, &jh_emlrtRTEI);
      y1_data = b_y1->data;
      if (beta1->size[1] != 0) {
        nHigh = beta1->size[1];
        iyStart = 0;
        b_st.site = &li_emlrtRSI;
        if (beta1->size[1] > 2147483646) {
          c_st.site = &ib_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (r = 0; r < nHigh; r++) {
          ixLead_tmp = r * dimSize;
          work_data = beta1_data[ixLead_tmp];
          b_st.site = &ki_emlrtRSI;
          if ((2 <= dimSize) && (dimSize > 2147483646)) {
            c_st.site = &ib_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (m = 2; m <= dimSize; m++) {
            tmp1 = beta1_data[(ixLead_tmp + m) - 1];
            b_st.site = &ji_emlrtRSI;
            b_d = tmp1;
            tmp1 -= work_data;
            work_data = b_d;
            y1_data[(iyStart + m) - 2] = tmp1;
          }

          iyStart = (iyStart + dimSize) - 1;
        }
      }
    }
  }

  emxInit_real_T(&st, &Omega1, 2, &nh_emlrtRTEI);
  st.site = &fi_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  g_mtimes(&b_st, b_y1, b_y1, Omega1);
  y1_data = Omega1->data;
  nHigh = Omega1->size[0] * Omega1->size[1];
  emxFree_real_T(sp, &b_y1);
  for (iyStart = 0; iyStart < nHigh; iyStart++) {
    y1_data[iyStart] *= d;
  }

  emxInit_real_T(sp, &b_Omega1, 2, &mh_emlrtRTEI);
  st.site = &fi_emlrtRSI;
  b_invpd(&st, R0, b_Omega1);
  Omega1_data = b_Omega1->data;
  if ((Omega1->size[0] != b_Omega1->size[0]) && ((Omega1->size[0] != 1) &&
       (b_Omega1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Omega1->size[0], b_Omega1->size[0], &cc_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((Omega1->size[1] != b_Omega1->size[1]) && ((Omega1->size[1] != 1) &&
       (b_Omega1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Omega1->size[1], b_Omega1->size[1], &bc_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &c_Omega1, 2, &kh_emlrtRTEI);
  if ((Omega1->size[0] == b_Omega1->size[0]) && (Omega1->size[1] ==
       b_Omega1->size[1])) {
    iyStart = c_Omega1->size[0] * c_Omega1->size[1];
    c_Omega1->size[0] = Omega1->size[0];
    c_Omega1->size[1] = Omega1->size[1];
    emxEnsureCapacity_real_T(sp, c_Omega1, iyStart, &kh_emlrtRTEI);
    b_Omega1_data = c_Omega1->data;
    nHigh = Omega1->size[0] * Omega1->size[1];
    for (iyStart = 0; iyStart < nHigh; iyStart++) {
      b_Omega1_data[iyStart] = y1_data[iyStart] + Omega1_data[iyStart];
    }

    st.site = &gi_emlrtRSI;
    b_invpd(&st, c_Omega1, Omega1);
  } else {
    st.site = &gi_emlrtRSI;
    p_binary_expand_op(&st, Omega1, gi_emlrtRSI, b_Omega1);
  }

  st.site = &hi_emlrtRSI;

  /*  sampling Wishart dist */
  /*  E(V) = Omega*nu */
  /*  X ~ Wishart(R,nu) <=> inv(X) ~ IW(inv(R),nu);  */
  b_st.site = &mi_emlrtRSI;
  cholmod(&b_st, Omega1, b_Omega1);
  b_st.site = &ni_emlrtRSI;
  c_st.site = &ni_emlrtRSI;
  b_randn(&c_st, Omega1->size[0], nu + ((real_T)beta1->size[0] - 1.0), c_Omega1);
  c_st.site = &qc_emlrtRSI;
  if (b_Omega1->size[0] != c_Omega1->size[0]) {
    if (((b_Omega1->size[0] == 1) && (b_Omega1->size[1] == 1)) ||
        ((c_Omega1->size[0] == 1) && (c_Omega1->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  c_st.site = &pc_emlrtRSI;
  g_mtimes(&c_st, b_Omega1, c_Omega1, Omega1);
  y1_data = Omega1->data;

  /*  k by nu */
  b_st.site = &oi_emlrtRSI;
  iyStart = c_Omega1->size[0] * c_Omega1->size[1];
  c_Omega1->size[0] = Omega1->size[0];
  c_Omega1->size[1] = Omega1->size[1];
  emxEnsureCapacity_real_T(&b_st, c_Omega1, iyStart, &lh_emlrtRTEI);
  b_Omega1_data = c_Omega1->data;
  nHigh = Omega1->size[0] * Omega1->size[1] - 1;
  for (iyStart = 0; iyStart <= nHigh; iyStart++) {
    b_Omega1_data[iyStart] = y1_data[iyStart];
  }

  iyStart = b_Omega1->size[0] * b_Omega1->size[1];
  b_Omega1->size[0] = Omega1->size[0];
  b_Omega1->size[1] = Omega1->size[1];
  emxEnsureCapacity_real_T(&b_st, b_Omega1, iyStart, &mh_emlrtRTEI);
  Omega1_data = b_Omega1->data;
  nHigh = Omega1->size[0] * Omega1->size[1] - 1;
  for (iyStart = 0; iyStart <= nHigh; iyStart++) {
    Omega1_data[iyStart] = y1_data[iyStart];
  }

  c_st.site = &pc_emlrtRSI;
  c_mtimes(&c_st, c_Omega1, b_Omega1, Omega1);

  /*  k by k */
  st.site = &ii_emlrtRSI;
  b_invpd(&st, Omega1, Omega);
  y1_data = Omega->data;
  nHigh = Omega->size[0] * Omega->size[1];
  emxFree_real_T(sp, &b_Omega1);
  emxFree_real_T(sp, &c_Omega1);
  emxFree_real_T(sp, &Omega1);
  for (iyStart = 0; iyStart < nHigh; iyStart++) {
    y1_data[iyStart] /= d;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y, const
  emxArray_real_T *Z, const emxArray_real_T *H, const emxArray_real_T *beta1,
  const emxArray_real_T *beta, real_T a0, real_T d0, real_T d)
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
  emxArray_real_T *b_H;
  emxArray_real_T *ehat;
  emxArray_real_T *r;
  real_T ur[2];
  const real_T *H_data;
  const real_T *Y_data;
  const real_T *beta1_data;
  real_T Sigma;
  real_T b;
  real_T b_d;
  real_T c;
  real_T gam;
  real_T u;
  real_T v;
  real_T x;
  real_T *b_H_data;
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
  beta1_data = beta1->data;
  H_data = H->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &si_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  if (beta->size[0] != Z->size[1]) {
    if (((Z->size[0] == 1) && (Z->size[1] == 1)) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &ehat, 1, &rh_emlrtRTEI);
  b_st.site = &pc_emlrtRSI;
  mtimes(&b_st, Z, beta, ehat);
  if ((Y->size[0] != ehat->size[0]) && ((Y->size[0] != 1) && (ehat->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], ehat->size[0], &dc_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((H->size[0] != beta1->size[0]) && ((H->size[0] != 1) && (beta1->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(H->size[0], beta1->size[0], &ec_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((H->size[1] != beta1->size[1]) && ((H->size[1] != 1) && (beta1->size[1] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(H->size[1], beta1->size[1], &fc_emlrtECI,
      (emlrtCTX)sp);
  }

  if (Y->size[0] == ehat->size[0]) {
    i = ehat->size[0];
    ehat->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ehat, i, &ph_emlrtRTEI);
    ehat_data = ehat->data;
    iter = Y->size[0];
    for (i = 0; i < iter; i++) {
      ehat_data[i] = Y_data[i] - ehat_data[i];
    }
  } else {
    st.site = &si_emlrtRSI;
    c_minus(&st, ehat, Y);
    ehat_data = ehat->data;
  }

  emxInit_real_T(sp, &r, 1, &sh_emlrtRTEI);
  if ((H->size[0] == beta1->size[0]) && (H->size[1] == beta1->size[1])) {
    emxInit_real_T(sp, &b_H, 2, &qh_emlrtRTEI);
    i = b_H->size[0] * b_H->size[1];
    b_H->size[0] = H->size[0];
    b_H->size[1] = H->size[1];
    emxEnsureCapacity_real_T(sp, b_H, i, &qh_emlrtRTEI);
    b_H_data = b_H->data;
    iter = H->size[0] * H->size[1];
    for (i = 0; i < iter; i++) {
      b_H_data[i] = H_data[i] * beta1_data[i];
    }

    st.site = &si_emlrtRSI;
    d_sum(&st, b_H, r);
    b_H_data = r->data;
    emxFree_real_T(sp, &b_H);
  } else {
    st.site = &si_emlrtRSI;
    o_binary_expand_op(&st, r, si_emlrtRSI, H, beta1);
    b_H_data = r->data;
  }

  if ((ehat->size[0] != r->size[0]) && ((ehat->size[0] != 1) && (r->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(ehat->size[0], r->size[0], &dc_emlrtECI,
      (emlrtCTX)sp);
  }

  if (ehat->size[0] == r->size[0]) {
    iter = ehat->size[0];
    for (i = 0; i < iter; i++) {
      ehat_data[i] -= b_H_data[i];
    }
  } else {
    st.site = &si_emlrtRSI;
    b_minus(&st, ehat, r);
    ehat_data = ehat->data;
  }

  emxFree_real_T(sp, &r);
  st.site = &ti_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  if (ehat->size[0] < 1) {
    gam = 0.0;
  } else {
    n_t = (ptrdiff_t)ehat->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    gam = ddot(&n_t, &ehat_data[0], &incx_t, &ehat_data[0], &incy_t);
  }

  emxFree_real_T(&st, &ehat);
  st.site = &ui_emlrtRSI;
  c = (a0 + (real_T)Y->size[0]) / 2.0;

  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &vi_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b = 1.0 / ((d0 + d * gam) / 2.0);
  c_st.site = &wi_emlrtRSI;
  d_st.site = &xi_emlrtRSI;
  e_st.site = &yi_emlrtRSI;
  f_st.site = &aj_emlrtRSI;
  g_st.site = &bj_emlrtRSI;
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
        h_st.site = &bj_emlrtRSI;
        gam = mpower(&h_st, ur[1], 1.0 / c);
      }
    }

    c = 1.0 / muDoubleScalarSqrt(9.0 * b_d);
    iter = 0;
    x = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * x + 1.0) {
        x = c_randn();
      }

      v *= v * v;
      x *= x;
      if (u < 1.0 - 0.0331 * x * x) {
        exitg1 = 1;
      } else {
        h_st.site = &bj_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(&h_st, &r_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 3, "log");
        }

        if (muDoubleScalarLog(u) < 0.5 * x + b_d * ((1.0 - v) +
             muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            h_st.site = &bj_emlrtRSI;
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

  Sigma = 1.0 / gam / d;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return Sigma;
}

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y, const
                     emxArray_real_T *Z, const emxArray_real_T *H, const
                     emxArray_real_T *beta0, const emxArray_real_T *Betam, const
                     emxArray_real_T *b_, const emxArray_real_T *precb_, real_T
                     sig2, char_T restriction, const emxArray_real_T *res_x,
                     emxArray_real_T *beta)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *XX;
  emxArray_real_T *XY;
  emxArray_real_T *Y_star;
  emxArray_real_T *b;
  emxArray_real_T *r;
  const real_T *Betam_data;
  const real_T *H_data;
  const real_T *Y_data;
  const real_T *beta0_data;
  const real_T *precb__data;
  real_T sig2inv;
  real_T *XX_data;
  real_T *XY_data;
  real_T *Y_star_data;
  real_T *beta_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  precb__data = precb_->data;
  Betam_data = Betam->data;
  beta0_data = beta0->data;
  H_data = H->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  sig2inv = 1.0 / sig2;
  if ((H->size[0] != Betam->size[0]) && ((H->size[0] != 1) && (Betam->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(H->size[0], Betam->size[0], &yb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((H->size[1] != Betam->size[1]) && ((H->size[1] != 1) && (Betam->size[1] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(H->size[1], Betam->size[1], &xb_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &Y_star, 1, &sf_emlrtRTEI);
  emxInit_real_T(sp, &XX, 2, &xf_emlrtRTEI);
  if ((H->size[0] == Betam->size[0]) && (H->size[1] == Betam->size[1])) {
    i = XX->size[0] * XX->size[1];
    XX->size[0] = H->size[0];
    XX->size[1] = H->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &rf_emlrtRTEI);
    XX_data = XX->data;
    loop_ub = H->size[0] * H->size[1];
    for (i = 0; i < loop_ub; i++) {
      XX_data[i] = H_data[i] * Betam_data[i];
    }

    st.site = &gf_emlrtRSI;
    d_sum(&st, XX, Y_star);
  } else {
    st.site = &gf_emlrtRSI;
    o_binary_expand_op(&st, Y_star, gf_emlrtRSI, H, Betam);
  }

  if ((Y->size[0] != Y_star->size[0]) && ((Y->size[0] != 1) && (Y_star->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], Y_star->size[0], &wb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (Y->size[0] == Y_star->size[0]) {
    i = Y_star->size[0];
    Y_star->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, Y_star, i, &sf_emlrtRTEI);
    Y_star_data = Y_star->data;
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_star_data[i] = Y_data[i] - Y_star_data[i];
    }
  } else {
    st.site = &gf_emlrtRSI;
    c_minus(&st, Y_star, Y);
  }

  st.site = &hf_emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  g_mtimes(&b_st, Z, Z, XX);
  XX_data = XX->data;
  st.site = &if_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  if (Z->size[0] != Y_star->size[0]) {
    if (((Z->size[0] == 1) && (Z->size[1] == 1)) || (Y_star->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &XY, 1, &yf_emlrtRTEI);
  b_st.site = &pc_emlrtRSI;
  f_mtimes(&b_st, Z, Y_star, XY);
  XY_data = XY->data;
  loop_ub = XX->size[0] * XX->size[1];
  for (i = 0; i < loop_ub; i++) {
    XX_data[i] *= sig2inv;
  }

  if ((precb_->size[0] != XX->size[0]) && ((precb_->size[0] != 1) && (XX->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[0], XX->size[0], &vb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((precb_->size[1] != XX->size[1]) && ((precb_->size[1] != 1) && (XX->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[1], XX->size[1], &ub_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((precb_->size[0] == XX->size[0]) && (precb_->size[1] == XX->size[1])) {
    loop_ub = precb_->size[0] * precb_->size[1];
    i = XX->size[0] * XX->size[1];
    XX->size[0] = precb_->size[0];
    XX->size[1] = precb_->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &tf_emlrtRTEI);
    XX_data = XX->data;
    for (i = 0; i < loop_ub; i++) {
      XX_data[i] += precb__data[i];
    }
  } else {
    st.site = &nm_emlrtRSI;
    c_plus(&st, XX, precb_);
    XX_data = XX->data;
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[0] != 1) && (XX->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], XX->size[1], &tb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[1] != 1) && (XX->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], XX->size[0], &sb_emlrtECI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &r, 2, &kb_emlrtRTEI);
  if (XX->size[0] == XX->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = XX->size[0];
    r->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &kb_emlrtRTEI);
    beta_data = r->data;
    loop_ub = XX->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = XX->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        beta_data[i1 + r->size[0] * i] = 0.5 * (XX_data[i1 + XX->size[0] * i] +
          XX_data[i + XX->size[0] * i1]);
      }
    }

    st.site = &jf_emlrtRSI;
    b_invpd(&st, r, XX);
    XX_data = XX->data;
  } else {
    st.site = &jf_emlrtRSI;
    n_binary_expand_op(&st, XX, jf_emlrtRSI);
    XX_data = XX->data;
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[0] != 1) && (XX->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], XX->size[1], &rb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[1] != 1) && (XX->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], XX->size[0], &qb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (XX->size[0] == XX->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = XX->size[0];
    r->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &kb_emlrtRTEI);
    beta_data = r->data;
    loop_ub = XX->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = XX->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        beta_data[i1 + r->size[0] * i] = 0.5 * (XX_data[i1 + XX->size[0] * i] +
          XX_data[i + XX->size[0] * i1]);
      }
    }

    i = XX->size[0] * XX->size[1];
    XX->size[0] = r->size[0];
    XX->size[1] = r->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &uf_emlrtRTEI);
    XX_data = XX->data;
    loop_ub = r->size[0] * r->size[1];
    for (i = 0; i < loop_ub; i++) {
      XX_data[i] = beta_data[i];
    }
  } else {
    st.site = &mm_emlrtRSI;
    m_binary_expand_op(&st, XX);
    XX_data = XX->data;
  }

  st.site = &kf_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  if (b_->size[0] != precb_->size[1]) {
    if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) || (b_->size[0] == 1))
    {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &b, 1, &ag_emlrtRTEI);
  b_st.site = &pc_emlrtRSI;
  mtimes(&b_st, precb_, b_, b);
  Y_star_data = b->data;
  loop_ub = XY->size[0];
  for (i = 0; i < loop_ub; i++) {
    XY_data[i] *= sig2inv;
  }

  if ((b->size[0] != XY->size[0]) && ((b->size[0] != 1) && (XY->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(b->size[0], XY->size[0], &pb_emlrtECI, (emlrtCTX)
      sp);
  }

  st.site = &kf_emlrtRSI;
  i = r->size[0] * r->size[1];
  r->size[0] = XX->size[0];
  r->size[1] = XX->size[1];
  emxEnsureCapacity_real_T(&st, r, i, &vf_emlrtRTEI);
  beta_data = r->data;
  loop_ub = XX->size[0] * XX->size[1];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = XX_data[i];
  }

  b_st.site = &vf_emlrtRSI;
  cholesky(&b_st, r);
  st.site = &kf_emlrtRSI;
  if (b->size[0] == XY->size[0]) {
    loop_ub = b->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_star_data[i] += XY_data[i];
    }
  } else {
    b_st.site = &kf_emlrtRSI;
    b_plus(&b_st, b, XY);
  }

  emxFree_real_T(&st, &XY);
  b_st.site = &qc_emlrtRSI;
  if (b->size[0] != XX->size[1]) {
    if (((XX->size[0] == 1) && (XX->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &pc_emlrtRSI;
  mtimes(&b_st, XX, b, beta);
  beta_data = beta->data;
  st.site = &kf_emlrtRSI;
  b_st.site = &kf_emlrtRSI;
  randn(&b_st, b_->size[0], b);
  b_st.site = &qc_emlrtRSI;
  emxFree_real_T(&b_st, &XX);
  if (r->size[0] != b->size[0]) {
    if (((r->size[0] == 1) && (r->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &pc_emlrtRSI;
  f_mtimes(&b_st, r, b, Y_star);
  Y_star_data = Y_star->data;
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &b);
  if ((beta->size[0] != Y_star->size[0]) && ((beta->size[0] != 1) &&
       (Y_star->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], Y_star->size[0], &ob_emlrtECI,
      (emlrtCTX)sp);
  }

  if (beta->size[0] == Y_star->size[0]) {
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      beta_data[i] += Y_star_data[i];
    }
  } else {
    st.site = &kf_emlrtRSI;
    b_plus(&st, beta, Y_star);
  }

  emxFree_real_T(sp, &Y_star);
  if (restriction == 'Y') {
    st.site = &lf_emlrtRSI;
    sig2inv = paramconst(&st, beta, res_x);
    if (sig2inv == 0.0) {
      i = beta->size[0];
      beta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(sp, beta, i, &wf_emlrtRTEI);
      beta_data = beta->data;
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = beta0_data[i];
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_beta1(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *Z, const emxArray_real_T *H, const
                      emxArray_real_T *beta, const emxArray_real_T *Omega,
                      real_T Sigma, emxArray_real_T *beta1, real_T
                      *loglikelihood)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *G;
  emxArray_real_T *GPG_Qinv;
  emxArray_real_T *Ht;
  emxArray_real_T *Kalgain;
  emxArray_real_T *P_tl;
  emxArray_real_T *P_tt;
  emxArray_real_T *P_ttm;
  emxArray_real_T *Y_star;
  emxArray_real_T *b_f_tl;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *f_ll;
  emxArray_real_T *f_tl;
  emxArray_real_T *f_tt;
  emxArray_real_T *f_ttm;
  emxArray_real_T *likelihood;
  emxArray_real_T *y;
  const real_T *H_data;
  const real_T *Omega_data;
  const real_T *Y_data;
  real_T mean_tl;
  real_T var_tl;
  real_T var_tlinv_data;
  real_T *Ht_data;
  real_T *P_tt_data;
  real_T *P_ttm_data;
  real_T *Y_star_data;
  real_T *beta1_data;
  real_T *f_ll_data;
  real_T *f_tl_data;
  real_T *f_tt_data;
  real_T *f_ttm_data;
  real_T *likelihood_data;
  int32_T b_likelihood[2];
  int32_T iv[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k_H;
  int32_T loop_ub;
  int32_T t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  Omega_data = Omega->data;
  H_data = H->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Y_star, 1, &wc_emlrtRTEI);

  /*  number of columns */
  k_H = H->size[1];
  st.site = &rb_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  dynamic_size_checks(&b_st, Z, beta, Z->size[1], beta->size[0]);
  b_st.site = &pc_emlrtRSI;
  mtimes(&b_st, Z, beta, Y_star);
  if ((Y->size[0] != Y_star->size[0]) && ((Y->size[0] != 1) && (Y_star->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], Y_star->size[0], &f_emlrtECI,
      (emlrtCTX)sp);
  }

  if (Y->size[0] == Y_star->size[0]) {
    i = Y_star->size[0];
    Y_star->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, Y_star, i, &wc_emlrtRTEI);
    Y_star_data = Y_star->data;
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_star_data[i] = Y_data[i] - Y_star_data[i];
    }
  } else {
    st.site = &rb_emlrtRSI;
    c_minus(&st, Y_star, Y);
    Y_star_data = Y_star->data;
  }

  emxInit_real_T(sp, &G, 2, &wd_emlrtRTEI);
  emxInit_real_T(sp, &f_ttm, 3, &xd_emlrtRTEI);
  emxInit_real_T(sp, &P_ttm, 3, &yd_emlrtRTEI);
  emxInit_real_T(sp, &f_ll, 1, &ad_emlrtRTEI);
  st.site = &sb_emlrtRSI;
  eye(&st, H->size[1], G);
  i = f_ttm->size[0] * f_ttm->size[1] * f_ttm->size[2];
  f_ttm->size[0] = H->size[1];
  f_ttm->size[1] = 1;
  f_ttm->size[2] = Y->size[0];
  emxEnsureCapacity_real_T(sp, f_ttm, i, &xc_emlrtRTEI);
  f_ttm_data = f_ttm->data;
  i = P_ttm->size[0] * P_ttm->size[1] * P_ttm->size[2];
  P_ttm->size[0] = H->size[1];
  P_ttm->size[1] = H->size[1];
  P_ttm->size[2] = Y->size[0];
  emxEnsureCapacity_real_T(sp, P_ttm, i, &yc_emlrtRTEI);
  P_ttm_data = P_ttm->data;
  i = f_ll->size[0];
  f_ll->size[0] = H->size[1];
  emxEnsureCapacity_real_T(sp, f_ll, i, &ad_emlrtRTEI);
  f_ll_data = f_ll->data;
  loop_ub = H->size[1];
  for (i = 0; i < loop_ub; i++) {
    f_ll_data[i] = 0.0;
  }

  emxInit_real_T(sp, &P_tt, 2, &be_emlrtRTEI);
  st.site = &tb_emlrtRSI;
  eye(&st, H->size[1], P_tt);
  P_tt_data = P_tt->data;
  loop_ub = P_tt->size[0] * P_tt->size[1];
  for (i = 0; i < loop_ub; i++) {
    P_tt_data[i] *= 100.0;
  }

  emxInit_real_T(sp, &likelihood, 1, &bd_emlrtRTEI);
  i = likelihood->size[0];
  likelihood->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, likelihood, i, &bd_emlrtRTEI);
  likelihood_data = likelihood->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    likelihood_data[i] = 0.0;
  }

  i = Y->size[0];
  if (0 <= Y->size[0] - 1) {
    i1 = H->size[1];
    b_loop_ub = H->size[1];
  }

  emxInit_real_T(sp, &Ht, 1, &dd_emlrtRTEI);
  emxInit_real_T(sp, &f_tl, 1, &ed_emlrtRTEI);
  emxInit_real_T(sp, &P_tl, 2, &ae_emlrtRTEI);
  emxInit_real_T(sp, &Kalgain, 2, &id_emlrtRTEI);
  emxInit_real_T(sp, &f_tt, 2, &pd_emlrtRTEI);
  emxInit_real_T(sp, &GPG_Qinv, 2, &ce_emlrtRTEI);
  emxInit_real_T(sp, &y, 2, &de_emlrtRTEI);
  emxInit_real_T(sp, &b_y, 2, &ee_emlrtRTEI);
  emxInit_real_T(sp, &c_y, 1, &fe_emlrtRTEI);
  emxInit_real_T(sp, &b_f_tl, 2, &ld_emlrtRTEI);
  for (t = 0; t < i; t++) {
    if ((t + 1 < 1) || (t + 1 > H->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, H->size[0], &r_emlrtBCI, (emlrtCTX)
        sp);
    }

    i2 = Ht->size[0];
    Ht->size[0] = i1;
    emxEnsureCapacity_real_T(sp, Ht, i2, &dd_emlrtRTEI);
    Ht_data = Ht->data;
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      Ht_data[i2] = H_data[t + H->size[0] * i2];
    }

    st.site = &ub_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    dynamic_size_checks(&b_st, G, f_ll, G->size[1], f_ll->size[0]);
    b_st.site = &pc_emlrtRSI;
    mtimes(&b_st, G, f_ll, f_tl);
    if ((k_H != f_tl->size[0]) && ((k_H != 1) && (f_tl->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(k_H, f_tl->size[0], &g_emlrtECI, (emlrtCTX)sp);
    }

    if (k_H == f_tl->size[0]) {
      i2 = f_tl->size[0];
      f_tl->size[0] = k_H;
      emxEnsureCapacity_real_T(sp, f_tl, i2, &ed_emlrtRTEI);
      f_tl_data = f_tl->data;
    } else {
      st.site = &ub_emlrtRSI;
      c_binary_expand_op(&st, f_tl, k_H);
      f_tl_data = f_tl->data;
    }

    st.site = &vb_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, G, P_tt, G->size[1], P_tt->size[0]);
    b_st.site = &pc_emlrtRSI;
    b_mtimes(&b_st, G, P_tt, y);
    st.site = &vb_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, G, y->size[1], G->size[1]);
    b_st.site = &pc_emlrtRSI;
    c_mtimes(&b_st, y, G, P_tl);
    f_ll_data = P_tl->data;
    if ((P_tl->size[0] != Omega->size[0]) && ((P_tl->size[0] != 1) &&
         (Omega->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[0], Omega->size[0], &h_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[1] != Omega->size[1]) && ((P_tl->size[1] != 1) &&
         (Omega->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], Omega->size[1], &i_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tl->size[0] == Omega->size[0]) && (P_tl->size[1] == Omega->size[1]))
    {
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        f_ll_data[i2] += Omega_data[i2];
      }
    } else {
      st.site = &vb_emlrtRSI;
      plus(&st, P_tl, Omega);
    }

    st.site = &wb_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    if (Ht->size[0] != P_tl->size[0]) {
      if ((Ht->size[0] == 1) || ((P_tl->size[0] == 1) && (P_tl->size[1] == 1)))
      {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &pc_emlrtRSI;
    d_mtimes(&b_st, Ht, P_tl, b_y);
    P_tt_data = b_y->data;
    st.site = &wb_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    if (Ht->size[0] != b_y->size[1]) {
      if ((b_y->size[1] == 1) || (Ht->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if (b_y->size[1] < 1) {
      var_tl = 0.0;
    } else {
      n_t = (ptrdiff_t)b_y->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      var_tl = ddot(&n_t, &P_tt_data[0], &incx_t, &Ht_data[0], &incy_t);
    }

    var_tl += Sigma;
    var_tl = 0.5 * (var_tl + var_tl);
    st.site = &xb_emlrtRSI;
    invpd(&st, var_tl, (real_T *)&var_tlinv_data, b_likelihood);
    st.site = &yb_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    d_dynamic_size_checks(&b_st, Ht, f_tl, Ht->size[0], f_tl->size[0]);
    if (Ht->size[0] < 1) {
      mean_tl = 0.0;
    } else {
      n_t = (ptrdiff_t)Ht->size[0];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      mean_tl = ddot(&n_t, &Ht_data[0], &incx_t, &f_tl_data[0], &incy_t);
    }

    if ((t + 1 < 1) || (t + 1 > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, Y->size[0], &cb_emlrtBCI,
        (emlrtCTX)sp);
    }

    if ((t + 1 < 1) || (t + 1 > likelihood->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, likelihood->size[0], &db_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &ac_emlrtRSI;
    likelihood_data[t] = lnpdfmvn(Y_data[t], mean_tl, var_tl);
    if ((t + 1 < 1) || (t + 1 > Y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, Y_star->size[0], &eb_emlrtBCI,
        (emlrtCTX)sp);
    }

    var_tl = Y_star_data[t] - mean_tl;
    st.site = &bc_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    dynamic_size_checks(&b_st, P_tl, Ht, P_tl->size[1], Ht->size[0]);
    b_st.site = &pc_emlrtRSI;
    mtimes(&b_st, P_tl, Ht, c_y);
    P_tt_data = c_y->data;
    i2 = Kalgain->size[0] * Kalgain->size[1];
    Kalgain->size[0] = c_y->size[0];
    Kalgain->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Kalgain, i2, &id_emlrtRTEI);
    f_ll_data = Kalgain->data;
    loop_ub = c_y->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      f_ll_data[i2] = P_tt_data[i2] * var_tlinv_data;
    }

    i2 = f_tt->size[0] * f_tt->size[1];
    f_tt->size[0] = Kalgain->size[0];
    f_tt->size[1] = 1;
    emxEnsureCapacity_real_T(sp, f_tt, i2, &jd_emlrtRTEI);
    f_tt_data = f_tt->data;
    loop_ub = Kalgain->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      f_tt_data[i2] = f_ll_data[i2] * var_tl;
    }

    if ((f_tl->size[0] != f_tt->size[0]) && ((f_tl->size[0] != 1) && (f_tt->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tl->size[0], f_tt->size[0], &j_emlrtECI,
        (emlrtCTX)sp);
    }

    if (f_tl->size[0] == f_tt->size[0]) {
      i2 = b_f_tl->size[0] * b_f_tl->size[1];
      b_f_tl->size[0] = f_tl->size[0];
      b_f_tl->size[1] = 1;
      emxEnsureCapacity_real_T(sp, b_f_tl, i2, &ld_emlrtRTEI);
      beta1_data = b_f_tl->data;
      loop_ub = f_tl->size[0];
      for (i2 = 0; i2 < loop_ub; i2++) {
        beta1_data[i2] = f_tl_data[i2] + f_tt_data[i2];
      }

      i2 = f_tt->size[0] * f_tt->size[1];
      f_tt->size[0] = b_f_tl->size[0];
      f_tt->size[1] = 1;
      emxEnsureCapacity_real_T(sp, f_tt, i2, &pd_emlrtRTEI);
      f_tt_data = f_tt->data;
      loop_ub = b_f_tl->size[0];
      for (i2 = 0; i2 < loop_ub; i2++) {
        f_tt_data[i2] = beta1_data[i2];
      }
    } else {
      st.site = &hm_emlrtRSI;
      b_binary_expand_op(&st, f_tt, f_tl);
      f_tt_data = f_tt->data;
    }

    st.site = &cc_emlrtRSI;
    eye(&st, k_H, GPG_Qinv);
    f_tl_data = GPG_Qinv->data;
    i2 = P_tt->size[0] * P_tt->size[1];
    P_tt->size[0] = Kalgain->size[0];
    P_tt->size[1] = Ht->size[0];
    emxEnsureCapacity_real_T(sp, P_tt, i2, &md_emlrtRTEI);
    P_tt_data = P_tt->data;
    loop_ub = Ht->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      c_loop_ub = Kalgain->size[0];
      for (i3 = 0; i3 < c_loop_ub; i3++) {
        P_tt_data[i3 + P_tt->size[0] * i2] = f_ll_data[i3] * Ht_data[i2];
      }
    }

    if ((GPG_Qinv->size[0] != P_tt->size[0]) && ((GPG_Qinv->size[0] != 1) &&
         (P_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(GPG_Qinv->size[0], P_tt->size[0], &k_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((GPG_Qinv->size[1] != P_tt->size[1]) && ((GPG_Qinv->size[1] != 1) &&
         (P_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(GPG_Qinv->size[1], P_tt->size[1], &l_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((GPG_Qinv->size[0] == P_tt->size[0]) && (GPG_Qinv->size[1] == P_tt->
         size[1])) {
      loop_ub = GPG_Qinv->size[0] * GPG_Qinv->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        f_tl_data[i2] -= P_tt_data[i2];
      }
    } else {
      st.site = &cc_emlrtRSI;
      minus(&st, GPG_Qinv, P_tt);
    }

    st.site = &dc_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, GPG_Qinv, P_tl, GPG_Qinv->size[1], P_tl->size[0]);
    b_st.site = &pc_emlrtRSI;
    b_mtimes(&b_st, GPG_Qinv, P_tl, P_tt);
    P_tt_data = P_tt->data;
    if ((t + 1 < 1) || (t + 1 > f_ttm->size[2])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, f_ttm->size[2], &u_emlrtBCI,
        (emlrtCTX)sp);
    }

    emlrtSubAssignSizeCheckR2012b(&f_ttm->size[0], 1, &f_tt->size[0], 2,
      &p_emlrtECI, (emlrtCTX)sp);
    loop_ub = f_ttm->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      f_ttm_data[i2 + f_ttm->size[0] * t] = f_tt_data[i2];
    }

    if ((t + 1 < 1) || (t + 1 > P_ttm->size[2])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, P_ttm->size[2], &s_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_likelihood[0] = P_ttm->size[0];
    b_likelihood[1] = P_ttm->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_likelihood[0], 2, &P_tt->size[0], 2,
      &m_emlrtECI, (emlrtCTX)sp);
    loop_ub = P_tt->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      c_loop_ub = P_tt->size[0];
      for (i3 = 0; i3 < c_loop_ub; i3++) {
        P_ttm_data[(i3 + P_ttm->size[0] * i2) + P_ttm->size[0] * P_ttm->size[1] *
          t] = P_tt_data[i3 + P_tt->size[0] * i2];
      }
    }

    loop_ub = f_tt->size[0];
    i2 = f_ll->size[0];
    f_ll->size[0] = f_tt->size[0];
    emxEnsureCapacity_real_T(sp, f_ll, i2, &rd_emlrtRTEI);
    f_ll_data = f_ll->data;
    for (i2 = 0; i2 < loop_ub; i2++) {
      f_ll_data[i2] = f_tt_data[i2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_f_tl);
  emxFree_real_T(sp, &b_y);
  emxFree_real_T(sp, &f_tt);
  emxFree_real_T(sp, &Kalgain);
  emxFree_real_T(sp, &f_tl);
  emxFree_real_T(sp, &Ht);
  st.site = &ec_emlrtRSI;
  *loglikelihood = sum(&st, likelihood);
  i = beta1->size[0] * beta1->size[1];
  beta1->size[0] = Y->size[0];
  beta1->size[1] = H->size[1];
  emxEnsureCapacity_real_T(sp, beta1, i, &cd_emlrtRTEI);
  beta1_data = beta1->data;
  loop_ub = Y->size[0] * H->size[1];
  emxFree_real_T(sp, &likelihood);
  for (i = 0; i < loop_ub; i++) {
    beta1_data[i] = 0.0;
  }

  if ((Y->size[0] < 1) || (Y->size[0] > P_ttm->size[2])) {
    emlrtDynamicBoundsCheckR2012b(Y->size[0], 1, P_ttm->size[2], &t_emlrtBCI,
      (emlrtCTX)sp);
  }

  if ((P_ttm->size[0] != P_ttm->size[1]) && ((P_ttm->size[0] != 1) &&
       (P_ttm->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(P_ttm->size[0], P_ttm->size[1], &n_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((P_ttm->size[0] != P_ttm->size[1]) && ((P_ttm->size[1] != 1) &&
       (P_ttm->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(P_ttm->size[1], P_ttm->size[0], &o_emlrtECI,
      (emlrtCTX)sp);
  }

  if (P_ttm->size[0] == P_ttm->size[1]) {
    loop_ub = P_ttm->size[0];
    b_loop_ub = P_ttm->size[1];
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = P_ttm->size[0];
    P_tl->size[1] = P_ttm->size[1];
    emxEnsureCapacity_real_T(sp, P_tl, i, &fd_emlrtRTEI);
    f_ll_data = P_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_ll_data[i1 + P_tl->size[0] * i] = (P_ttm_data[(i1 + P_ttm->size[0] * i)
          + P_ttm->size[0] * P_ttm->size[1] * (Y->size[0] - 1)] + P_ttm_data[(i
          + P_ttm->size[0] * i1) + P_ttm->size[0] * P_ttm->size[1] * (Y->size[0]
          - 1)]) / 2.0;
      }
    }

    st.site = &fc_emlrtRSI;
    cholmod(&st, P_tl, P_tt);
  } else {
    st.site = &fc_emlrtRSI;
    i_binary_expand_op(&st, P_tt, fc_emlrtRSI, P_ttm, Y);
  }

  if ((Y->size[0] < 1) || (Y->size[0] > f_ttm->size[2])) {
    emlrtDynamicBoundsCheckR2012b(Y->size[0], 1, f_ttm->size[2], &v_emlrtBCI,
      (emlrtCTX)sp);
  }

  st.site = &gc_emlrtRSI;
  b_st.site = &gc_emlrtRSI;
  randn(&b_st, H->size[1], f_ll);
  b_st.site = &qc_emlrtRSI;
  dynamic_size_checks(&b_st, P_tt, f_ll, P_tt->size[0], f_ll->size[0]);
  b_st.site = &pc_emlrtRSI;
  f_mtimes(&b_st, P_tt, f_ll, Y_star);
  if ((f_ttm->size[0] != Y_star->size[0]) && ((f_ttm->size[0] != 1) &&
       (Y_star->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(f_ttm->size[0], Y_star->size[0], &q_emlrtECI,
      (emlrtCTX)sp);
  }

  if (f_ttm->size[0] == Y_star->size[0]) {
    loop_ub = f_ttm->size[0];
    i = Y_star->size[0];
    Y_star->size[0] = f_ttm->size[0];
    emxEnsureCapacity_real_T(sp, Y_star, i, &gd_emlrtRTEI);
    Y_star_data = Y_star->data;
    for (i = 0; i < loop_ub; i++) {
      Y_star_data[i] += f_ttm_data[i + f_ttm->size[0] * (Y->size[0] - 1)];
    }
  } else {
    st.site = &gc_emlrtRSI;
    h_binary_expand_op(&st, Y_star, f_ttm, Y);
    Y_star_data = Y_star->data;
  }

  if (Y->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(Y->size[0], 1, Y->size[0], &y_emlrtBCI,
      (emlrtCTX)sp);
  }

  b_likelihood[0] = 1;
  b_likelihood[1] = H->size[1];
  iv[0] = 1;
  iv[1] = Y_star->size[0];
  emlrtSubAssignSizeCheckR2012b(&b_likelihood[0], 2, &iv[0], 2, &v_emlrtECI,
    (emlrtCTX)sp);
  loop_ub = Y_star->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta1_data[(Y->size[0] + beta1->size[0] * i) - 1] = Y_star_data[i];
  }

  if (Y->size[0] - 1 >= 1) {
    b_likelihood[0] = 1;
    iv[0] = 1;
  }

  t = Y->size[0] - 2;
  while (t + 1 >= 1) {
    if ((t + 1 < 1) || (t + 1 > f_ttm->size[2])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, f_ttm->size[2], &w_emlrtBCI,
        (emlrtCTX)sp);
    }

    if ((t + 1 < 1) || (t + 1 > P_ttm->size[2])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, P_ttm->size[2], &x_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &hc_emlrtRSI;
    loop_ub = P_ttm->size[0];
    b_loop_ub = P_ttm->size[1];
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = P_ttm->size[0];
    P_tl->size[1] = P_ttm->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &hd_emlrtRTEI);
    f_ll_data = P_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_ll_data[i1 + P_tl->size[0] * i] = P_ttm_data[(i1 + P_ttm->size[0] * i)
          + P_ttm->size[0] * P_ttm->size[1] * t];
      }
    }

    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, G, P_tl, G->size[1], P_ttm->size[0]);
    loop_ub = P_ttm->size[0];
    b_loop_ub = P_ttm->size[1];
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = P_ttm->size[0];
    P_tl->size[1] = P_ttm->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &hd_emlrtRTEI);
    f_ll_data = P_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_ll_data[i1 + P_tl->size[0] * i] = P_ttm_data[(i1 + P_ttm->size[0] * i)
          + P_ttm->size[0] * P_ttm->size[1] * t];
      }
    }

    b_st.site = &pc_emlrtRSI;
    b_mtimes(&b_st, G, P_tl, y);
    st.site = &hc_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, G, y->size[1], G->size[1]);
    b_st.site = &pc_emlrtRSI;
    c_mtimes(&b_st, y, G, P_tt);
    P_tt_data = P_tt->data;
    if ((P_tt->size[0] != Omega->size[0]) && ((P_tt->size[0] != 1) &&
         (Omega->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tt->size[0], Omega->size[0], &r_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tt->size[1] != Omega->size[1]) && ((P_tt->size[1] != 1) &&
         (Omega->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tt->size[1], Omega->size[1], &s_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tt->size[0] == Omega->size[0]) && (P_tt->size[1] == Omega->size[1]))
    {
      loop_ub = P_tt->size[0] * P_tt->size[1];
      for (i = 0; i < loop_ub; i++) {
        P_tt_data[i] += Omega_data[i];
      }
    } else {
      st.site = &hc_emlrtRSI;
      plus(&st, P_tt, Omega);
      P_tt_data = P_tt->data;
    }

    if ((P_tt->size[0] != P_tt->size[1]) && ((P_tt->size[0] != 1) && (P_tt->
          size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tt->size[0], P_tt->size[1], &t_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_tt->size[0] != P_tt->size[1]) && ((P_tt->size[1] != 1) && (P_tt->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tt->size[1], P_tt->size[0], &u_emlrtECI,
        (emlrtCTX)sp);
    }

    if (P_tt->size[0] == P_tt->size[1]) {
      i = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = P_tt->size[0];
      P_tl->size[1] = P_tt->size[1];
      emxEnsureCapacity_real_T(sp, P_tl, i, &kd_emlrtRTEI);
      f_ll_data = P_tl->data;
      loop_ub = P_tt->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = P_tt->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          f_ll_data[i1 + P_tl->size[0] * i] = (P_tt_data[i1 + P_tt->size[0] * i]
            + P_tt_data[i + P_tt->size[0] * i1]) / 2.0;
        }
      }

      i = P_tt->size[0] * P_tt->size[1];
      P_tt->size[0] = P_tl->size[0];
      P_tt->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T(sp, P_tt, i, &nd_emlrtRTEI);
      P_tt_data = P_tt->data;
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i = 0; i < loop_ub; i++) {
        P_tt_data[i] = f_ll_data[i];
      }
    } else {
      st.site = &km_emlrtRSI;
      d_binary_expand_op(&st, P_tt);
    }

    st.site = &ic_emlrtRSI;
    b_invpd(&st, P_tt, GPG_Qinv);
    if ((t + 2 < 1) || (t + 2 > beta1->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 2, 1, beta1->size[0], &ab_emlrtBCI,
        (emlrtCTX)sp);
    }

    if ((beta1->size[1] != k_H) && ((beta1->size[1] != 1) && (k_H != 1))) {
      emlrtDimSizeImpxCheckR2021b(beta1->size[1], k_H, &w_emlrtECI, (emlrtCTX)sp);
    }

    if (beta1->size[1] == k_H) {
      loop_ub = beta1->size[1];
      i = f_ll->size[0];
      f_ll->size[0] = beta1->size[1];
      emxEnsureCapacity_real_T(sp, f_ll, i, &od_emlrtRTEI);
      f_ll_data = f_ll->data;
      for (i = 0; i < loop_ub; i++) {
        f_ll_data[i] = beta1_data[(t + beta1->size[0] * i) + 1];
      }
    } else {
      st.site = &jc_emlrtRSI;
      g_binary_expand_op(&st, f_ll, beta1, t, k_H);
      f_ll_data = f_ll->data;
    }

    st.site = &jc_emlrtRSI;
    loop_ub = f_ttm->size[0];
    i = Y_star->size[0];
    Y_star->size[0] = f_ttm->size[0];
    emxEnsureCapacity_real_T(&st, Y_star, i, &qd_emlrtRTEI);
    Y_star_data = Y_star->data;
    for (i = 0; i < loop_ub; i++) {
      Y_star_data[i] = f_ttm_data[i + f_ttm->size[0] * t];
    }

    b_st.site = &qc_emlrtRSI;
    dynamic_size_checks(&b_st, G, Y_star, G->size[1], f_ttm->size[0]);
    loop_ub = f_ttm->size[0];
    i = Y_star->size[0];
    Y_star->size[0] = f_ttm->size[0];
    emxEnsureCapacity_real_T(&st, Y_star, i, &qd_emlrtRTEI);
    Y_star_data = Y_star->data;
    for (i = 0; i < loop_ub; i++) {
      Y_star_data[i] = f_ttm_data[i + f_ttm->size[0] * t];
    }

    b_st.site = &pc_emlrtRSI;
    mtimes(&b_st, G, Y_star, c_y);
    P_tt_data = c_y->data;
    if ((f_ll->size[0] != c_y->size[0]) && ((f_ll->size[0] != 1) && (c_y->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_ll->size[0], c_y->size[0], &w_emlrtECI,
        (emlrtCTX)sp);
    }

    if (f_ll->size[0] == c_y->size[0]) {
      loop_ub = f_ll->size[0];
      for (i = 0; i < loop_ub; i++) {
        f_ll_data[i] -= P_tt_data[i];
      }
    } else {
      st.site = &jc_emlrtRSI;
      b_minus(&st, f_ll, c_y);
    }

    st.site = &kc_emlrtRSI;
    loop_ub = P_ttm->size[0];
    b_loop_ub = P_ttm->size[1];
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = P_ttm->size[0];
    P_tl->size[1] = P_ttm->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &hd_emlrtRTEI);
    f_ll_data = P_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_ll_data[i1 + P_tl->size[0] * i] = P_ttm_data[(i1 + P_ttm->size[0] * i)
          + P_ttm->size[0] * P_ttm->size[1] * t];
      }
    }

    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, P_tl, G, P_ttm->size[1], G->size[1]);
    loop_ub = P_ttm->size[0];
    b_loop_ub = P_ttm->size[1];
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = P_ttm->size[0];
    P_tl->size[1] = P_ttm->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &hd_emlrtRTEI);
    f_ll_data = P_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_ll_data[i1 + P_tl->size[0] * i] = P_ttm_data[(i1 + P_ttm->size[0] * i)
          + P_ttm->size[0] * P_ttm->size[1] * t];
      }
    }

    b_st.site = &pc_emlrtRSI;
    c_mtimes(&b_st, P_tl, G, y);
    st.site = &kc_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, GPG_Qinv, y->size[1], GPG_Qinv->size[0]);
    b_st.site = &pc_emlrtRSI;
    b_mtimes(&b_st, y, GPG_Qinv, P_tt);
    st.site = &lc_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    dynamic_size_checks(&b_st, P_tt, f_ll, P_tt->size[1], f_ll->size[0]);
    b_st.site = &pc_emlrtRSI;
    mtimes(&b_st, P_tt, f_ll, Y_star);
    if ((f_ttm->size[0] != Y_star->size[0]) && ((f_ttm->size[0] != 1) &&
         (Y_star->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_ttm->size[0], Y_star->size[0], &x_emlrtECI,
        (emlrtCTX)sp);
    }

    if (f_ttm->size[0] == Y_star->size[0]) {
      loop_ub = f_ttm->size[0];
      i = Y_star->size[0];
      Y_star->size[0] = f_ttm->size[0];
      emxEnsureCapacity_real_T(sp, Y_star, i, &sd_emlrtRTEI);
      Y_star_data = Y_star->data;
      for (i = 0; i < loop_ub; i++) {
        Y_star_data[i] += f_ttm_data[i + f_ttm->size[0] * t];
      }
    } else {
      st.site = &lc_emlrtRSI;
      f_binary_expand_op(&st, Y_star, f_ttm, t);
      Y_star_data = Y_star->data;
    }

    st.site = &mc_emlrtRSI;
    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, P_tt, G, P_tt->size[1], G->size[0]);
    b_st.site = &pc_emlrtRSI;
    b_mtimes(&b_st, P_tt, G, y);
    st.site = &mc_emlrtRSI;
    loop_ub = P_ttm->size[0];
    b_loop_ub = P_ttm->size[1];
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = P_ttm->size[0];
    P_tl->size[1] = P_ttm->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &hd_emlrtRTEI);
    f_ll_data = P_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_ll_data[i1 + P_tl->size[0] * i] = P_ttm_data[(i1 + P_ttm->size[0] * i)
          + P_ttm->size[0] * P_ttm->size[1] * t];
      }
    }

    b_st.site = &qc_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, P_tl, y->size[1], P_ttm->size[0]);
    loop_ub = P_ttm->size[0];
    b_loop_ub = P_ttm->size[1];
    i = P_tl->size[0] * P_tl->size[1];
    P_tl->size[0] = P_ttm->size[0];
    P_tl->size[1] = P_ttm->size[1];
    emxEnsureCapacity_real_T(&st, P_tl, i, &hd_emlrtRTEI);
    f_ll_data = P_tl->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_ll_data[i1 + P_tl->size[0] * i] = P_ttm_data[(i1 + P_ttm->size[0] * i)
          + P_ttm->size[0] * P_ttm->size[1] * t];
      }
    }

    b_st.site = &pc_emlrtRSI;
    b_mtimes(&b_st, y, P_tl, GPG_Qinv);
    if ((P_ttm->size[0] != GPG_Qinv->size[0]) && ((P_ttm->size[0] != 1) &&
         (GPG_Qinv->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_ttm->size[0], GPG_Qinv->size[0], &y_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((P_ttm->size[1] != GPG_Qinv->size[1]) && ((P_ttm->size[1] != 1) &&
         (GPG_Qinv->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_ttm->size[1], GPG_Qinv->size[1],
        &ab_emlrtECI, (emlrtCTX)sp);
    }

    if ((P_ttm->size[0] == GPG_Qinv->size[0]) && (P_ttm->size[1] ==
         GPG_Qinv->size[1])) {
      loop_ub = P_ttm->size[0];
      b_loop_ub = P_ttm->size[1];
      i = GPG_Qinv->size[0] * GPG_Qinv->size[1];
      GPG_Qinv->size[0] = P_ttm->size[0];
      GPG_Qinv->size[1] = P_ttm->size[1];
      emxEnsureCapacity_real_T(sp, GPG_Qinv, i, &td_emlrtRTEI);
      f_tl_data = GPG_Qinv->data;
      for (i = 0; i < b_loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          f_tl_data[i1 + GPG_Qinv->size[0] * i] = P_ttm_data[(i1 + P_ttm->size[0]
            * i) + P_ttm->size[0] * P_ttm->size[1] * t] - f_tl_data[i1 +
            GPG_Qinv->size[0] * i];
        }
      }
    } else {
      st.site = &lm_emlrtRSI;
      e_binary_expand_op(&st, GPG_Qinv, P_ttm, t);
      f_tl_data = GPG_Qinv->data;
    }

    if ((GPG_Qinv->size[0] != GPG_Qinv->size[1]) && ((GPG_Qinv->size[0] != 1) &&
         (GPG_Qinv->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(GPG_Qinv->size[0], GPG_Qinv->size[1],
        &bb_emlrtECI, (emlrtCTX)sp);
    }

    if ((GPG_Qinv->size[0] != GPG_Qinv->size[1]) && ((GPG_Qinv->size[1] != 1) &&
         (GPG_Qinv->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(GPG_Qinv->size[1], GPG_Qinv->size[0],
        &cb_emlrtECI, (emlrtCTX)sp);
    }

    if (GPG_Qinv->size[0] == GPG_Qinv->size[1]) {
      i = P_tl->size[0] * P_tl->size[1];
      P_tl->size[0] = GPG_Qinv->size[0];
      P_tl->size[1] = GPG_Qinv->size[1];
      emxEnsureCapacity_real_T(sp, P_tl, i, &ud_emlrtRTEI);
      f_ll_data = P_tl->data;
      loop_ub = GPG_Qinv->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = GPG_Qinv->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          f_ll_data[i1 + P_tl->size[0] * i] = (f_tl_data[i1 + GPG_Qinv->size[0] *
            i] + f_tl_data[i + GPG_Qinv->size[0] * i1]) / 2.0;
        }
      }

      i = GPG_Qinv->size[0] * GPG_Qinv->size[1];
      GPG_Qinv->size[0] = P_tl->size[0];
      GPG_Qinv->size[1] = P_tl->size[1];
      emxEnsureCapacity_real_T(sp, GPG_Qinv, i, &vd_emlrtRTEI);
      f_tl_data = GPG_Qinv->data;
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i = 0; i < loop_ub; i++) {
        f_tl_data[i] = f_ll_data[i];
      }
    } else {
      st.site = &jm_emlrtRSI;
      d_binary_expand_op(&st, GPG_Qinv);
    }

    st.site = &nc_emlrtRSI;
    cholmod(&st, GPG_Qinv, P_tt);
    st.site = &oc_emlrtRSI;
    b_st.site = &oc_emlrtRSI;
    randn(&b_st, k_H, f_ll);
    b_st.site = &qc_emlrtRSI;
    dynamic_size_checks(&b_st, P_tt, f_ll, P_tt->size[0], f_ll->size[0]);
    b_st.site = &pc_emlrtRSI;
    f_mtimes(&b_st, P_tt, f_ll, c_y);
    P_tt_data = c_y->data;
    if ((Y_star->size[0] != c_y->size[0]) && ((Y_star->size[0] != 1) &&
         (c_y->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Y_star->size[0], c_y->size[0], &db_emlrtECI,
        (emlrtCTX)sp);
    }

    if (Y_star->size[0] == c_y->size[0]) {
      loop_ub = Y_star->size[0];
      for (i = 0; i < loop_ub; i++) {
        Y_star_data[i] += P_tt_data[i];
      }
    } else {
      st.site = &oc_emlrtRSI;
      b_plus(&st, Y_star, c_y);
      Y_star_data = Y_star->data;
    }

    if ((t + 1 < 1) || (t + 1 > beta1->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, beta1->size[0], &bb_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_likelihood[1] = beta1->size[1];
    iv[1] = Y_star->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_likelihood[0], 2, &iv[0], 2, &eb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = Y_star->size[0];
    for (i = 0; i < loop_ub; i++) {
      beta1_data[t + beta1->size[0] * i] = Y_star_data[i];
    }

    t--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &c_y);
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &GPG_Qinv);
  emxFree_real_T(sp, &P_tt);
  emxFree_real_T(sp, &P_tl);
  emxFree_real_T(sp, &f_ll);
  emxFree_real_T(sp, &P_ttm);
  emxFree_real_T(sp, &f_ttm);
  emxFree_real_T(sp, &G);
  emxFree_real_T(sp, &Y_star);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tt,
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
  emxInit_real_T(sp, &b_f_tl, 2, &ld_emlrtRTEI);
  f_tl_idx_0 = f_tl->size[0];
  i = b_f_tl->size[0] * b_f_tl->size[1];
  if (f_tt->size[0] == 1) {
    b_f_tl->size[0] = f_tl_idx_0;
  } else {
    b_f_tl->size[0] = f_tt->size[0];
  }

  b_f_tl->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b_f_tl, i, &ld_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, f_tt, i, &ld_emlrtRTEI);
  f_tt_data = f_tt->data;
  f_tl_idx_0 = b_f_tl->size[0];
  for (i = 0; i < f_tl_idx_0; i++) {
    f_tt_data[i] = b_f_tl_data[i];
  }

  emxFree_real_T(sp, &b_f_tl);
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

static void b_minus(const emlrtStack *sp, emxArray_real_T *f_ll, const
                    emxArray_real_T *y)
{
  emxArray_real_T *b_f_ll;
  const real_T *y_data;
  real_T *b_f_ll_data;
  real_T *f_ll_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  y_data = y->data;
  f_ll_data = f_ll->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_ll, 1, &od_emlrtRTEI);
  i = b_f_ll->size[0];
  if (y->size[0] == 1) {
    b_f_ll->size[0] = f_ll->size[0];
  } else {
    b_f_ll->size[0] = y->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_f_ll, i, &od_emlrtRTEI);
  b_f_ll_data = b_f_ll->data;
  stride_0_0 = (f_ll->size[0] != 1);
  stride_1_0 = (y->size[0] != 1);
  if (y->size[0] == 1) {
    loop_ub = f_ll->size[0];
  } else {
    loop_ub = y->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_f_ll_data[i] = f_ll_data[i * stride_0_0] - y_data[i * stride_1_0];
  }

  i = f_ll->size[0];
  f_ll->size[0] = b_f_ll->size[0];
  emxEnsureCapacity_real_T(sp, f_ll, i, &od_emlrtRTEI);
  f_ll_data = f_ll->data;
  loop_ub = b_f_ll->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_ll_data[i] = b_f_ll_data[i];
  }

  emxFree_real_T(sp, &b_f_ll);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *Y_star, const
                   emxArray_real_T *y)
{
  emxArray_real_T *b_Y_star;
  const real_T *y_data;
  real_T *Y_star_data;
  real_T *b_Y_star_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  y_data = y->data;
  Y_star_data = Y_star->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y_star, 1, &tj_emlrtRTEI);
  i = b_Y_star->size[0];
  if (y->size[0] == 1) {
    b_Y_star->size[0] = Y_star->size[0];
  } else {
    b_Y_star->size[0] = y->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_Y_star, i, &tj_emlrtRTEI);
  b_Y_star_data = b_Y_star->data;
  stride_0_0 = (Y_star->size[0] != 1);
  stride_1_0 = (y->size[0] != 1);
  if (y->size[0] == 1) {
    loop_ub = Y_star->size[0];
  } else {
    loop_ub = y->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_Y_star_data[i] = Y_star_data[i * stride_0_0] + y_data[i * stride_1_0];
  }

  i = Y_star->size[0];
  Y_star->size[0] = b_Y_star->size[0];
  emxEnsureCapacity_real_T(sp, Y_star, i, &tj_emlrtRTEI);
  Y_star_data = Y_star->data;
  loop_ub = b_Y_star->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_star_data[i] = b_Y_star_data[i];
  }

  emxFree_real_T(sp, &b_Y_star);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo om_emlrtRSI,
  const emxArray_real_T *beta_hat, const int32_T input_sizes[2], const
  emxArray_real_T *Omega_hat, const int32_T b_input_sizes[2], real_T Sigma_hat,
  const emxArray_real_T *retf, const emxArray_real_T *r2, const emxArray_real_T *
  Omega)
{
  emlrtStack st;
  emxArray_real_T *b_beta_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r1;
  const real_T *Omega_data;
  const real_T *Omega_hat_data;
  const real_T *beta_hat_data;
  const real_T *r;
  const real_T *retf_data;
  real_T ln_joint_post;
  real_T *b_beta_hat_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_input_sizes_idx_0;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_0;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  Omega_data = Omega->data;
  r = r2->data;
  retf_data = retf->data;
  Omega_hat_data = Omega_hat->data;
  beta_hat_data = beta_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta_hat, 1, &ic_emlrtRTEI);
  input_sizes_idx_0 = input_sizes[0];
  b_input_sizes_idx_0 = b_input_sizes[0];
  i = input_sizes_idx_0 + b_input_sizes_idx_0;
  i1 = b_beta_hat->size[0];
  b_beta_hat->size[0] = i + 1;
  emxEnsureCapacity_real_T(sp, b_beta_hat, i1, &ic_emlrtRTEI);
  b_beta_hat_data = b_beta_hat->data;
  for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
    b_beta_hat_data[i1] = beta_hat_data[i1];
  }

  for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
    b_beta_hat_data[i1 + input_sizes_idx_0] = Omega_hat_data[i1];
  }

  emxInit_real_T(sp, &b_retf, 1, &jc_emlrtRTEI);
  b_beta_hat_data[i] = Sigma_hat;
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &jc_emlrtRTEI);
  b_beta_hat_data = b_retf->data;
  input_sizes_idx_0 = retf->size[1];
  for (i = 0; i < input_sizes_idx_0; i++) {
    b_beta_hat_data[i] = retf_data[i];
  }

  emxInit_real_T(sp, &r1, 2, &kb_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  if (Omega->size[1] == 1) {
    r1->size[0] = r2->size[0];
  } else {
    r1->size[0] = Omega->size[1];
  }

  if (Omega->size[0] == 1) {
    r1->size[1] = r2->size[1];
  } else {
    r1->size[1] = Omega->size[0];
  }

  emxEnsureCapacity_real_T(sp, r1, i, &kb_emlrtRTEI);
  b_beta_hat_data = r1->data;
  b_input_sizes_idx_0 = (r2->size[0] != 1);
  stride_0_1 = (r2->size[1] != 1);
  stride_1_0 = (Omega->size[1] != 1);
  stride_1_1 = (Omega->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Omega->size[0] == 1) {
    input_sizes_idx_0 = r2->size[1];
  } else {
    input_sizes_idx_0 = Omega->size[0];
  }

  for (i = 0; i < input_sizes_idx_0; i++) {
    if (Omega->size[1] == 1) {
      loop_ub = r2->size[0];
    } else {
      loop_ub = Omega->size[1];
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      b_beta_hat_data[i1 + r1->size[0] * i] = 0.5 * (r[i1 * b_input_sizes_idx_0
        + r2->size[0] * aux_0_1] + Omega_data[aux_1_1 + Omega->size[0] * (i1 *
        stride_1_0)]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &om_emlrtRSI;
  ln_joint_post = b_lnpdfmvn(&st, b_beta_hat, b_retf, r1);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_beta_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return ln_joint_post;
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_tl,
  int32_T k_H)
{
  emxArray_real_T *r;
  real_T *f_tl_data;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_1_0;
  f_tl_data = f_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 1, &sj_emlrtRTEI);
  i = r->size[0];
  if (f_tl->size[0] == 1) {
    r->size[0] = k_H;
  } else {
    r->size[0] = f_tl->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &sj_emlrtRTEI);
  r1 = r->data;
  stride_1_0 = (f_tl->size[0] != 1);
  if (f_tl->size[0] == 1) {
    loop_ub = k_H;
  } else {
    loop_ub = f_tl->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    r1[i] = f_tl_data[i * stride_1_0];
  }

  i = f_tl->size[0];
  f_tl->size[0] = r->size[0];
  emxEnsureCapacity_real_T(sp, f_tl, i, &sj_emlrtRTEI);
  f_tl_data = f_tl->data;
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_tl_data[i] = r1[i];
  }

  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
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

static void c_minus(const emlrtStack *sp, emxArray_real_T *Y_star, const
                    emxArray_real_T *Y)
{
  emxArray_real_T *b_Y;
  const real_T *Y_data;
  real_T *Y_star_data;
  real_T *b_Y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  Y_data = Y->data;
  Y_star_data = Y_star->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y, 1, &xj_emlrtRTEI);
  i = b_Y->size[0];
  if (Y_star->size[0] == 1) {
    b_Y->size[0] = Y->size[0];
  } else {
    b_Y->size[0] = Y_star->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_Y, i, &xj_emlrtRTEI);
  b_Y_data = b_Y->data;
  stride_0_0 = (Y->size[0] != 1);
  stride_1_0 = (Y_star->size[0] != 1);
  if (Y_star->size[0] == 1) {
    loop_ub = Y->size[0];
  } else {
    loop_ub = Y_star->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_Y_data[i] = Y_data[i * stride_0_0] - Y_star_data[i * stride_1_0];
  }

  i = Y_star->size[0];
  Y_star->size[0] = b_Y->size[0];
  emxEnsureCapacity_real_T(sp, Y_star, i, &xj_emlrtRTEI);
  Y_star_data = Y_star->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_star_data[i] = b_Y_data[i];
  }

  emxFree_real_T(sp, &b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_plus(const emlrtStack *sp, emxArray_real_T *XX, const
                   emxArray_real_T *precb_)
{
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
  precb__data = precb_->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_precb_, 2, &yj_emlrtRTEI);
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

  emxEnsureCapacity_real_T(sp, b_precb_, i, &yj_emlrtRTEI);
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

  i = XX->size[0] * XX->size[1];
  XX->size[0] = b_precb_->size[0];
  XX->size[1] = b_precb_->size[1];
  emxEnsureCapacity_real_T(sp, XX, i, &yj_emlrtRTEI);
  XX_data = XX->data;
  loop_ub = b_precb_->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_precb_->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      XX_data[i1 + XX->size[0] * i] = b_precb__data[i1 + b_precb_->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_precb_);
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

static void d_plus(const emlrtStack *sp, emxArray_real_T *beta1_, const
                   emxArray_real_T *beta1)
{
  emxArray_real_T *b_beta1;
  const real_T *beta1_data;
  real_T *b_beta1_data;
  real_T *beta1__data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  beta1_data = beta1->data;
  beta1__data = beta1_->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta1, 1, &ak_emlrtRTEI);
  i = b_beta1->size[0];
  if (beta1_->size[0] == 1) {
    b_beta1->size[0] = beta1->size[0];
  } else {
    b_beta1->size[0] = beta1_->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_beta1, i, &ak_emlrtRTEI);
  b_beta1_data = b_beta1->data;
  stride_0_0 = (beta1->size[0] != 1);
  stride_1_0 = (beta1_->size[0] != 1);
  if (beta1_->size[0] == 1) {
    loop_ub = beta1->size[0];
  } else {
    loop_ub = beta1_->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_beta1_data[i] = beta1_data[i * stride_0_0] + beta1__data[i * stride_1_0];
  }

  i = beta1_->size[0];
  beta1_->size[0] = b_beta1->size[0];
  emxEnsureCapacity_real_T(sp, beta1_, i, &ak_emlrtRTEI);
  beta1__data = beta1_->data;
  loop_ub = b_beta1->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta1__data[i] = b_beta1_data[i];
  }

  emxFree_real_T(sp, &b_beta1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *GPG_Qinv,
  const emxArray_real_T *P_ttm, int32_T t)
{
  emxArray_real_T *b_P_ttm;
  const real_T *P_ttm_data;
  real_T *GPG_Qinv_data;
  real_T *b_P_ttm_data;
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
  P_ttm_data = P_ttm->data;
  GPG_Qinv_data = GPG_Qinv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_ttm, 2, &uj_emlrtRTEI);
  i = P_ttm->size[0];
  i1 = P_ttm->size[1];
  i2 = b_P_ttm->size[0] * b_P_ttm->size[1];
  if (GPG_Qinv->size[0] == 1) {
    b_P_ttm->size[0] = i;
  } else {
    b_P_ttm->size[0] = GPG_Qinv->size[0];
  }

  if (GPG_Qinv->size[1] == 1) {
    b_P_ttm->size[1] = i1;
  } else {
    b_P_ttm->size[1] = GPG_Qinv->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_P_ttm, i2, &uj_emlrtRTEI);
  b_P_ttm_data = b_P_ttm->data;
  stride_0_0 = (i != 1);
  stride_0_1 = (i1 != 1);
  stride_1_0 = (GPG_Qinv->size[0] != 1);
  stride_1_1 = (GPG_Qinv->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (GPG_Qinv->size[1] == 1) {
    loop_ub = i1;
  } else {
    loop_ub = GPG_Qinv->size[1];
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    if (GPG_Qinv->size[0] == 1) {
      b_loop_ub = i;
    } else {
      b_loop_ub = GPG_Qinv->size[0];
    }

    for (i2 = 0; i2 < b_loop_ub; i2++) {
      b_P_ttm_data[i2 + b_P_ttm->size[0] * i1] = P_ttm_data[(i2 * stride_0_0 +
        P_ttm->size[0] * aux_0_1) + P_ttm->size[0] * P_ttm->size[1] * t] -
        GPG_Qinv_data[i2 * stride_1_0 + GPG_Qinv->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = GPG_Qinv->size[0] * GPG_Qinv->size[1];
  GPG_Qinv->size[0] = b_P_ttm->size[0];
  GPG_Qinv->size[1] = b_P_ttm->size[1];
  emxEnsureCapacity_real_T(sp, GPG_Qinv, i, &uj_emlrtRTEI);
  GPG_Qinv_data = GPG_Qinv->data;
  loop_ub = b_P_ttm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_P_ttm->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      GPG_Qinv_data[i1 + GPG_Qinv->size[0] * i] = b_P_ttm_data[i1 +
        b_P_ttm->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_P_ttm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[9])
{
  static const int32_T iv[2] = { 1, 9 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 9, m, &u[0]);
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

static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y_star,
  const emxArray_real_T *f_ttm, int32_T t)
{
  emxArray_real_T *b_f_ttm;
  const real_T *f_ttm_data;
  real_T *Y_star_data;
  real_T *b_f_ttm_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_ttm_data = f_ttm->data;
  Y_star_data = Y_star->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_ttm, 1, &vj_emlrtRTEI);
  i = f_ttm->size[0];
  stride_0_0 = b_f_ttm->size[0];
  if (Y_star->size[0] == 1) {
    b_f_ttm->size[0] = i;
  } else {
    b_f_ttm->size[0] = Y_star->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_f_ttm, stride_0_0, &vj_emlrtRTEI);
  b_f_ttm_data = b_f_ttm->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (Y_star->size[0] != 1);
  if (Y_star->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = Y_star->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_f_ttm_data[i] = f_ttm_data[i * stride_0_0 + f_ttm->size[0] * t] +
      Y_star_data[i * stride_1_0];
  }

  i = Y_star->size[0];
  Y_star->size[0] = b_f_ttm->size[0];
  emxEnsureCapacity_real_T(sp, Y_star, i, &vj_emlrtRTEI);
  Y_star_data = Y_star->data;
  loop_ub = b_f_ttm->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_star_data[i] = b_f_ttm_data[i];
  }

  emxFree_real_T(sp, &b_f_ttm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
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

static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *f_ll,
  const emxArray_real_T *beta1, int32_T t, int32_T k_H)
{
  const real_T *beta1_data;
  real_T *f_ll_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  beta1_data = beta1->data;
  i = beta1->size[1];
  stride_0_0 = f_ll->size[0];
  if (k_H == 1) {
    f_ll->size[0] = i;
  } else {
    f_ll->size[0] = k_H;
  }

  emxEnsureCapacity_real_T(sp, f_ll, stride_0_0, &od_emlrtRTEI);
  f_ll_data = f_ll->data;
  stride_0_0 = (i != 1);
  if (k_H == 1) {
    loop_ub = i;
  } else {
    loop_ub = k_H;
  }

  for (i = 0; i < loop_ub; i++) {
    f_ll_data[i] = beta1_data[(t + beta1->size[0] * (i * stride_0_0)) + 1];
  }
}

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y_star,
  const emxArray_real_T *f_ttm, const emxArray_real_T *Y)
{
  emxArray_real_T *b_f_ttm;
  const real_T *f_ttm_data;
  real_T *Y_star_data;
  real_T *b_f_ttm_data;
  int32_T b_Y;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_ttm_data = f_ttm->data;
  Y_star_data = Y_star->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_ttm, 1, &wj_emlrtRTEI);
  b_Y = Y->size[0];
  i = f_ttm->size[0];
  stride_0_0 = b_f_ttm->size[0];
  if (Y_star->size[0] == 1) {
    b_f_ttm->size[0] = i;
  } else {
    b_f_ttm->size[0] = Y_star->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_f_ttm, stride_0_0, &wj_emlrtRTEI);
  b_f_ttm_data = b_f_ttm->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (Y_star->size[0] != 1);
  if (Y_star->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = Y_star->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_f_ttm_data[i] = f_ttm_data[i * stride_0_0 + f_ttm->size[0] * (b_Y - 1)] +
      Y_star_data[i * stride_1_0];
  }

  i = Y_star->size[0];
  Y_star->size[0] = b_f_ttm->size[0];
  emxEnsureCapacity_real_T(sp, Y_star, i, &wj_emlrtRTEI);
  Y_star_data = Y_star->data;
  loop_ub = b_f_ttm->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_star_data[i] = b_f_ttm_data[i];
  }

  emxFree_real_T(sp, &b_f_ttm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
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

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *P_tt,
  emlrtRSInfo om_emlrtRSI, const emxArray_real_T *P_ttm, const emxArray_real_T
  *Y)
{
  emlrtStack st;
  emxArray_real_T *b_P_ttm;
  const real_T *P_ttm_data;
  real_T *b_P_ttm_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_Y;
  int32_T b_loop_ub;
  int32_T c_Y;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  P_ttm_data = P_ttm->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_ttm, 2, &fd_emlrtRTEI);
  b_Y = Y->size[0];
  c_Y = Y->size[0];
  i = P_ttm->size[0];
  i1 = P_ttm->size[1];
  i2 = P_ttm->size[0];
  i3 = P_ttm->size[1];
  stride_0_0 = b_P_ttm->size[0] * b_P_ttm->size[1];
  if (i3 == 1) {
    b_P_ttm->size[0] = i;
  } else {
    b_P_ttm->size[0] = i3;
  }

  if (i2 == 1) {
    b_P_ttm->size[1] = i1;
  } else {
    b_P_ttm->size[1] = i2;
  }

  emxEnsureCapacity_real_T(sp, b_P_ttm, stride_0_0, &fd_emlrtRTEI);
  b_P_ttm_data = b_P_ttm->data;
  stride_0_0 = (i != 1);
  stride_0_1 = (i1 != 1);
  stride_1_0 = (i3 != 1);
  stride_1_1 = (i2 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (i2 == 1) {
    loop_ub = i1;
  } else {
    loop_ub = i2;
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    if (i3 == 1) {
      b_loop_ub = i;
    } else {
      b_loop_ub = i3;
    }

    for (i2 = 0; i2 < b_loop_ub; i2++) {
      b_P_ttm_data[i2 + b_P_ttm->size[0] * i1] = (P_ttm_data[(i2 * stride_0_0 +
        P_ttm->size[0] * aux_0_1) + P_ttm->size[0] * P_ttm->size[1] * (b_Y - 1)]
        + P_ttm_data[(aux_1_1 + P_ttm->size[0] * (i2 * stride_1_0)) +
        P_ttm->size[0] * P_ttm->size[1] * (c_Y - 1)]) / 2.0;
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &om_emlrtRSI;
  cholmod(&st, b_P_ttm, P_tt);
  emxFree_real_T(sp, &b_P_ttm);
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

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *m_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  return y;
}

static void minus(const emlrtStack *sp, emxArray_real_T *GPG_Qinv, const
                  emxArray_real_T *P_tt)
{
  emxArray_real_T *b_GPG_Qinv;
  const real_T *P_tt_data;
  real_T *GPG_Qinv_data;
  real_T *b_GPG_Qinv_data;
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
  P_tt_data = P_tt->data;
  GPG_Qinv_data = GPG_Qinv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_GPG_Qinv, 2, &rj_emlrtRTEI);
  i = b_GPG_Qinv->size[0] * b_GPG_Qinv->size[1];
  if (P_tt->size[0] == 1) {
    b_GPG_Qinv->size[0] = GPG_Qinv->size[0];
  } else {
    b_GPG_Qinv->size[0] = P_tt->size[0];
  }

  if (P_tt->size[1] == 1) {
    b_GPG_Qinv->size[1] = GPG_Qinv->size[1];
  } else {
    b_GPG_Qinv->size[1] = P_tt->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_GPG_Qinv, i, &rj_emlrtRTEI);
  b_GPG_Qinv_data = b_GPG_Qinv->data;
  stride_0_0 = (GPG_Qinv->size[0] != 1);
  stride_0_1 = (GPG_Qinv->size[1] != 1);
  stride_1_0 = (P_tt->size[0] != 1);
  stride_1_1 = (P_tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (P_tt->size[1] == 1) {
    loop_ub = GPG_Qinv->size[1];
  } else {
    loop_ub = P_tt->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (P_tt->size[0] == 1) {
      b_loop_ub = GPG_Qinv->size[0];
    } else {
      b_loop_ub = P_tt->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_GPG_Qinv_data[i1 + b_GPG_Qinv->size[0] * i] = GPG_Qinv_data[i1 *
        stride_0_0 + GPG_Qinv->size[0] * aux_0_1] - P_tt_data[i1 * stride_1_0 +
        P_tt->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = GPG_Qinv->size[0] * GPG_Qinv->size[1];
  GPG_Qinv->size[0] = b_GPG_Qinv->size[0];
  GPG_Qinv->size[1] = b_GPG_Qinv->size[1];
  emxEnsureCapacity_real_T(sp, GPG_Qinv, i, &rj_emlrtRTEI);
  GPG_Qinv_data = GPG_Qinv->data;
  loop_ub = b_GPG_Qinv->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_GPG_Qinv->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      GPG_Qinv_data[i1 + GPG_Qinv->size[0] * i] = b_GPG_Qinv_data[i1 +
        b_GPG_Qinv->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_GPG_Qinv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
  emlrtRSInfo om_emlrtRSI)
{
  emlrtStack st;
  emxArray_real_T *r;
  real_T *XX_data;
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
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &kb_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (XX->size[1] == 1) {
    r->size[0] = XX->size[0];
  } else {
    r->size[0] = XX->size[1];
  }

  if (XX->size[0] == 1) {
    r->size[1] = XX->size[1];
  } else {
    r->size[1] = XX->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &kb_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (XX->size[1] != 1);
  stride_1_1 = (XX->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (XX->size[0] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = XX->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    if (XX->size[1] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = XX->size[1];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] = 0.5 * (XX_data[i1 * stride_0_0 + XX->size[0] *
        aux_0_1] + XX_data[aux_1_1 + XX->size[0] * (i1 * stride_1_0)]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &om_emlrtRSI;
  b_invpd(&st, r, XX);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y_star,
  emlrtRSInfo om_emlrtRSI, const emxArray_real_T *H, const emxArray_real_T
  *Betam)
{
  emlrtStack st;
  emxArray_real_T *b_H;
  const real_T *Betam_data;
  const real_T *H_data;
  real_T *b_H_data;
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
  Betam_data = Betam->data;
  H_data = H->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_H, 2, &rf_emlrtRTEI);
  i = b_H->size[0] * b_H->size[1];
  if (Betam->size[0] == 1) {
    b_H->size[0] = H->size[0];
  } else {
    b_H->size[0] = Betam->size[0];
  }

  if (Betam->size[1] == 1) {
    b_H->size[1] = H->size[1];
  } else {
    b_H->size[1] = Betam->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_H, i, &rf_emlrtRTEI);
  b_H_data = b_H->data;
  stride_0_0 = (H->size[0] != 1);
  stride_0_1 = (H->size[1] != 1);
  stride_1_0 = (Betam->size[0] != 1);
  stride_1_1 = (Betam->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Betam->size[1] == 1) {
    loop_ub = H->size[1];
  } else {
    loop_ub = Betam->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (Betam->size[0] == 1) {
      b_loop_ub = H->size[0];
    } else {
      b_loop_ub = Betam->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_H_data[i1 + b_H->size[0] * i] = H_data[i1 * stride_0_0 + H->size[0] *
        aux_0_1] * Betam_data[i1 * stride_1_0 + Betam->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &om_emlrtRSI;
  d_sum(&st, b_H, Y_star);
  emxFree_real_T(sp, &b_H);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Omega1,
  emlrtRSInfo om_emlrtRSI, const emxArray_real_T *r1)
{
  emlrtStack st;
  emxArray_real_T *b_Omega1;
  const real_T *r;
  real_T *Omega1_data;
  real_T *b_Omega1_data;
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
  r = r1->data;
  Omega1_data = Omega1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Omega1, 2, &kh_emlrtRTEI);
  i = b_Omega1->size[0] * b_Omega1->size[1];
  if (r1->size[0] == 1) {
    b_Omega1->size[0] = Omega1->size[0];
  } else {
    b_Omega1->size[0] = r1->size[0];
  }

  if (r1->size[1] == 1) {
    b_Omega1->size[1] = Omega1->size[1];
  } else {
    b_Omega1->size[1] = r1->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_Omega1, i, &kh_emlrtRTEI);
  b_Omega1_data = b_Omega1->data;
  stride_0_0 = (Omega1->size[0] != 1);
  stride_0_1 = (Omega1->size[1] != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = Omega1->size[1];
  } else {
    loop_ub = r1->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = Omega1->size[0];
    } else {
      b_loop_ub = r1->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Omega1_data[i1 + b_Omega1->size[0] * i] = Omega1_data[i1 * stride_0_0 +
        Omega1->size[0] * aux_0_1] + r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &om_emlrtRSI;
  b_invpd(&st, b_Omega1, Omega1);
  emxFree_real_T(sp, &b_Omega1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T paramconst(const emlrtStack *sp, const emxArray_real_T *beta,
  const emxArray_real_T *res_x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *validm_1;
  emxArray_boolean_T *x;
  emxArray_creal_T *test;
  emxArray_real_T *absolute;
  emxArray_real_T *b_beta;
  emxArray_real_T *b_test;
  emxArray_real_T *imagine;
  emxArray_real_T *result;
  emxArray_real_T *varargin_1;
  creal_T *test_data;
  const real_T *beta_data;
  const real_T *res_x_data;
  real_T valid;
  real_T *absolute_data;
  real_T *b_beta_data;
  real_T *imagine_data;
  int32_T b_result;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_1;
  int32_T sizes_idx_1;
  int8_T input_sizes_idx_0;
  boolean_T b_ex;
  boolean_T empty_non_axis_sizes;
  boolean_T ex;
  boolean_T *validm_1_data;
  boolean_T *x_data;
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
  res_x_data = res_x->data;
  beta_data = beta->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_boolean_T(sp, &x, &rg_emlrtRTEI);
  st.site = &cg_emlrtRSI;
  i = x->size[0];
  x->size[0] = beta->size[0];
  emxEnsureCapacity_boolean_T(&st, x, i, &fg_emlrtRTEI);
  x_data = x->data;
  input_sizes_idx_1 = beta->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    x_data[i] = muDoubleScalarIsInf(beta_data[i]);
  }

  emxInit_boolean_T(&st, &validm_1, &lg_emlrtRTEI);
  i = validm_1->size[0];
  validm_1->size[0] = beta->size[0];
  emxEnsureCapacity_boolean_T(&st, validm_1, i, &gg_emlrtRTEI);
  validm_1_data = validm_1->data;
  input_sizes_idx_1 = beta->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    validm_1_data[i] = muDoubleScalarIsNaN(beta_data[i]);
  }

  input_sizes_idx_1 = x->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    x_data[i] = ((!x_data[i]) && (!validm_1_data[i]));
  }

  /*  gauss function */
  b_st.site = &kg_emlrtRSI;
  c_st.site = &lg_emlrtRSI;
  d_st.site = &mg_emlrtRSI;
  e_st.site = &ng_emlrtRSI;
  if (x->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  f_st.site = &og_emlrtRSI;
  input_sizes_idx_1 = x->size[0];
  g_st.site = &pg_emlrtRSI;
  ex = x_data[0];
  h_st.site = &qg_emlrtRSI;
  if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
    i_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&i_st);
  }

  for (sizes_idx_1 = 2; sizes_idx_1 <= input_sizes_idx_1; sizes_idx_1++) {
    empty_non_axis_sizes = x_data[sizes_idx_1 - 1];
    ex = (((int32_T)ex <= (int32_T)empty_non_axis_sizes) && ex);
  }

  st.site = &dg_emlrtRSI;
  i = x->size[0];
  x->size[0] = beta->size[0];
  emxEnsureCapacity_boolean_T(&st, x, i, &hg_emlrtRTEI);
  x_data = x->data;
  input_sizes_idx_1 = beta->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    x_data[i] = muDoubleScalarIsNaN(beta_data[i]);
  }

  /*  function [mx,ind] = maxc(x) */
  b_st.site = &rg_emlrtRSI;
  c_st.site = &sg_emlrtRSI;
  d_st.site = &tg_emlrtRSI;
  e_st.site = &ug_emlrtRSI;
  if (x->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  f_st.site = &og_emlrtRSI;
  input_sizes_idx_1 = x->size[0];
  g_st.site = &pg_emlrtRSI;
  b_ex = x_data[0];
  h_st.site = &qg_emlrtRSI;
  if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
    i_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&i_st);
  }

  for (sizes_idx_1 = 2; sizes_idx_1 <= input_sizes_idx_1; sizes_idx_1++) {
    empty_non_axis_sizes = x_data[sizes_idx_1 - 1];
    b_ex = (((int32_T)b_ex < (int32_T)empty_non_axis_sizes) || b_ex);
  }

  emxFree_boolean_T(&g_st, &x);
  input_sizes_idx_1 = res_x->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    if (res_x_data[i] != (int32_T)muDoubleScalarFloor(res_x_data[i])) {
      emlrtIntegerCheckR2012b(res_x_data[i], &r_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)res_x_data[i];
    if ((i1 < 1) || (i1 > beta->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, beta->size[0], &sc_emlrtBCI,
        (emlrtCTX)sp);
    }
  }

  emxInit_real_T(sp, &result, 2, &qg_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 2, &qg_emlrtRTEI);
  st.site = &eg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  eye(&b_st, (real_T)res_x->size[0] - 1.0, varargin_1);
  absolute_data = varargin_1->data;
  if (!((real_T)res_x->size[0] - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(-1.0, &q_emlrtDCI, &st);
  }

  b_st.site = &vg_emlrtRSI;
  if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
    b_result = varargin_1->size[0];
  } else if (res_x->size[0] - 1 != 0) {
    b_result = res_x->size[0] - 1;
  } else {
    b_result = varargin_1->size[0];
    if (res_x->size[0] - 1 > varargin_1->size[0]) {
      b_result = res_x->size[0] - 1;
    }
  }

  c_st.site = &wg_emlrtRSI;
  if ((varargin_1->size[0] != b_result) && ((varargin_1->size[0] != 0) &&
       (varargin_1->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((res_x->size[0] - 1 != b_result) && (res_x->size[0] - 1 != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (b_result == 0);
  if (empty_non_axis_sizes || ((varargin_1->size[0] != 0) && (varargin_1->size[1]
        != 0))) {
    input_sizes_idx_1 = varargin_1->size[1];
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (res_x->size[0] - 1 != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  i = result->size[0] * result->size[1];
  result->size[0] = b_result;
  result->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, result, i, &ig_emlrtRTEI);
  imagine_data = result->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < b_result; i1++) {
      imagine_data[i1 + result->size[0] * i] = absolute_data[i1 + b_result * i];
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < b_result; i1++) {
      imagine_data[i1 + result->size[0] * input_sizes_idx_1] = 0.0;
    }
  }

  st.site = &eg_emlrtRSI;
  b_st.site = &vg_emlrtRSI;
  if (res_x->size[0] != 0) {
    b_result = res_x->size[0];
  } else if ((result->size[0] != 0) && (result->size[1] != 0)) {
    b_result = result->size[1];
  } else {
    b_result = 0;
    if (result->size[1] > 0) {
      b_result = result->size[1];
    }
  }

  c_st.site = &wg_emlrtRSI;
  if ((res_x->size[0] != b_result) && (res_x->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((result->size[1] != b_result) && ((result->size[0] != 0) && (result->size
        [1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (b_result == 0);
  if (empty_non_axis_sizes || (res_x->size[0] != 0)) {
    input_sizes_idx_0 = 1;
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || ((result->size[0] != 0) && (result->size[1] != 0)))
  {
    sizes_idx_1 = result->size[0];
  } else {
    sizes_idx_1 = 0;
  }

  emxInit_real_T(&b_st, &b_beta, 2, &jg_emlrtRTEI);
  i = b_beta->size[0] * b_beta->size[1];
  b_beta->size[0] = 1;
  b_beta->size[1] = res_x->size[0];
  emxEnsureCapacity_real_T(sp, b_beta, i, &jg_emlrtRTEI);
  b_beta_data = b_beta->data;
  input_sizes_idx_1 = res_x->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    b_beta_data[i] = beta_data[(int32_T)res_x_data[i] - 1];
  }

  input_sizes_idx_1 = input_sizes_idx_0;
  i = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = input_sizes_idx_0 + sizes_idx_1;
  varargin_1->size[1] = b_result;
  emxEnsureCapacity_real_T(sp, varargin_1, i, &ic_emlrtRTEI);
  absolute_data = varargin_1->data;
  for (i = 0; i < b_result; i++) {
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      absolute_data[varargin_1->size[0] * i] = b_beta_data[input_sizes_idx_0 * i];
    }
  }

  emxFree_real_T(sp, &b_beta);
  for (i = 0; i < b_result; i++) {
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      absolute_data[(i1 + input_sizes_idx_0) + varargin_1->size[0] * i] =
        imagine_data[i1 + sizes_idx_1 * i];
    }
  }

  emxFree_real_T(sp, &result);
  emxInit_creal_T(sp, &test, &ng_emlrtRTEI);
  emxInit_real_T(sp, &b_test, 1, &kg_emlrtRTEI);
  st.site = &fg_emlrtRSI;
  eig(&st, varargin_1, test);
  test_data = test->data;
  i = b_test->size[0];
  b_test->size[0] = test->size[0];
  emxEnsureCapacity_real_T(sp, b_test, i, &kg_emlrtRTEI);
  absolute_data = b_test->data;
  input_sizes_idx_1 = test->size[0];
  emxFree_real_T(sp, &varargin_1);
  for (i = 0; i < input_sizes_idx_1; i++) {
    absolute_data[i] = test_data[i].im;
  }

  emxInit_real_T(sp, &imagine, 1, &og_emlrtRTEI);
  st.site = &gg_emlrtRSI;
  power(&st, b_test, imagine);
  imagine_data = imagine->data;
  st.site = &hg_emlrtRSI;
  b_st.site = &ie_emlrtRSI;
  input_sizes_idx_1 = test->size[0];
  i = b_test->size[0];
  b_test->size[0] = test->size[0];
  emxEnsureCapacity_real_T(&b_st, b_test, i, &gf_emlrtRTEI);
  absolute_data = b_test->data;
  c_st.site = &je_emlrtRSI;
  if ((1 <= test->size[0]) && (test->size[0] > 2147483646)) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (sizes_idx_1 = 0; sizes_idx_1 < input_sizes_idx_1; sizes_idx_1++) {
    absolute_data[sizes_idx_1] = muDoubleScalarHypot(test_data[sizes_idx_1].re,
      test_data[sizes_idx_1].im);
  }

  emxFree_creal_T(&b_st, &test);
  emxInit_real_T(&b_st, &absolute, 1, &pg_emlrtRTEI);
  st.site = &hg_emlrtRSI;
  power(&st, b_test, absolute);
  absolute_data = absolute->data;
  if ((absolute->size[0] != imagine->size[0]) && ((absolute->size[0] != 1) &&
       (imagine->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(absolute->size[0], imagine->size[0],
      &ac_emlrtECI, (emlrtCTX)sp);
  }

  if (absolute->size[0] == imagine->size[0]) {
    input_sizes_idx_1 = absolute->size[0];
    for (i = 0; i < input_sizes_idx_1; i++) {
      absolute_data[i] += imagine_data[i];
    }
  } else {
    b_plus(sp, absolute, imagine);
  }

  emxFree_real_T(sp, &imagine);
  st.site = &ig_emlrtRSI;
  b_sqrt(&st, absolute);
  absolute_data = absolute->data;
  i = validm_1->size[0];
  validm_1->size[0] = absolute->size[0];
  emxEnsureCapacity_boolean_T(sp, validm_1, i, &lg_emlrtRTEI);
  validm_1_data = validm_1->data;
  input_sizes_idx_1 = absolute->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    validm_1_data[i] = (absolute_data[i] < 1.0);
  }

  emxFree_real_T(sp, &absolute);
  i = b_test->size[0];
  b_test->size[0] = validm_1->size[0] + 2;
  emxEnsureCapacity_real_T(sp, b_test, i, &mg_emlrtRTEI);
  absolute_data = b_test->data;
  absolute_data[0] = ex;
  absolute_data[1] = !b_ex;
  input_sizes_idx_1 = validm_1->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    absolute_data[i + 2] = validm_1_data[i];
  }

  emxFree_boolean_T(sp, &validm_1);
  st.site = &jg_emlrtRSI;
  valid = minc(&st, b_test);
  emxFree_real_T(sp, &b_test);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return valid;
}

static void plus(const emlrtStack *sp, emxArray_real_T *P_tl, const
                 emxArray_real_T *Omega)
{
  emxArray_real_T *b_P_tl;
  const real_T *Omega_data;
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
  Omega_data = Omega->data;
  P_tl_data = P_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_tl, 2, &de_emlrtRTEI);
  i = b_P_tl->size[0] * b_P_tl->size[1];
  if (Omega->size[0] == 1) {
    b_P_tl->size[0] = P_tl->size[0];
  } else {
    b_P_tl->size[0] = Omega->size[0];
  }

  if (Omega->size[1] == 1) {
    b_P_tl->size[1] = P_tl->size[1];
  } else {
    b_P_tl->size[1] = Omega->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_P_tl, i, &de_emlrtRTEI);
  b_P_tl_data = b_P_tl->data;
  stride_0_0 = (P_tl->size[0] != 1);
  stride_0_1 = (P_tl->size[1] != 1);
  stride_1_0 = (Omega->size[0] != 1);
  stride_1_1 = (Omega->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Omega->size[1] == 1) {
    loop_ub = P_tl->size[1];
  } else {
    loop_ub = Omega->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (Omega->size[0] == 1) {
      b_loop_ub = P_tl->size[0];
    } else {
      b_loop_ub = Omega->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_P_tl_data[i1 + b_P_tl->size[0] * i] = P_tl_data[i1 * stride_0_0 +
        P_tl->size[0] * aux_0_1] + Omega_data[i1 * stride_1_0 + Omega->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = b_P_tl->size[0];
  P_tl->size[1] = b_P_tl->size[1];
  emxEnsureCapacity_real_T(sp, P_tl, i, &de_emlrtRTEI);
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

void Time_Varying_Parameter(const emlrtStack *sp, const emxArray_real_T *Y,
  emxArray_real_T *Z, const emxArray_real_T *H, const emxArray_real_T *b_, const
  emxArray_real_T *var_, real_T nu, const emxArray_real_T *R0, real_T a0, real_T
  d0, real_T n0, real_T n1, char_T forecast, const emxArray_real_T *x0_f, const
  emxArray_real_T *x1_f, char_T ML, char_T restriction, const emxArray_real_T
  *res_x, real_T d, struct0_T *Output)
{
  static const char_T b_cv1[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  static const char_T cv4[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  static const char_T cv6[9] = { '[', 'S', 'i', 'g', 'm', 'a', ':', ' ', ']' };

  static const char_T cv7[9] = { '[', 'O', 'm', 'e', 'g', 'a', ':', ' ', ']' };

  static const char_T cv5[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  static const char_T cv3[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T b_cv[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *Omega;
  emxArray_real_T *Omega_hat;
  emxArray_real_T *Prec_var_;
  emxArray_real_T *b_beta;
  emxArray_real_T *beta;
  emxArray_real_T *beta1;
  emxArray_real_T *beta1m;
  emxArray_real_T *beta_hat;
  emxArray_real_T *r;
  emxArray_real_T *retf;
  emxArray_real_T *vec_Omega;
  const real_T *R0_data;
  const real_T *b__data;
  real_T Omega_prior;
  real_T Sigma;
  real_T Sigma_hat;
  real_T alpha;
  real_T b_prior;
  real_T c_beta;
  real_T lnpost1;
  real_T lnpost_hat;
  real_T n;
  real_T x;
  real_T *Omega_data;
  real_T *Omega_hat_data;
  real_T *Z_data;
  real_T *beta1m_data;
  real_T *beta_data;
  real_T *beta_hat_data;
  real_T *r1;
  real_T *retf_data;
  int32_T iv[3];
  int32_T b_Output[2];
  int32_T b_input_sizes[2];
  int32_T input_sizes[2];
  int32_T result[2];
  int32_T b_loop_ub;
  int32_T b_loop_ub_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T input_sizes_idx_1;
  int32_T isForecast;
  int32_T iter;
  int32_T k_Z;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  char_T b_cv2[37];
  int8_T sizes_idx_1;
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
  R0_data = R0->data;
  b__data = b_->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Prec_var_, 2, &kc_emlrtRTEI);
  st.site = &kl_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);

  /*  number of columns */
  k_Z = Z->size[1];
  n = n0 + n1;
  st.site = &emlrtRSI;
  inv(&st, var_, Prec_var_);
  if (Z->size[1] == 0) {
    i = Z->size[0] * Z->size[1];
    Z->size[0] = Y->size[0];
    Z->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Z, i, &ib_emlrtRTEI);
    Z_data = Z->data;
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Z_data[i] = 0.0;
    }
  }

  emxInit_real_T(sp, &beta, 1, &jb_emlrtRTEI);
  isForecast = (forecast == 'Y');
  i = beta->size[0];
  beta->size[0] = b_->size[0];
  emxEnsureCapacity_real_T(sp, beta, i, &jb_emlrtRTEI);
  beta_data = beta->data;
  loop_ub = b_->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = b__data[i];
  }

  emxInit_real_T(sp, &Omega_hat, 2, &rb_emlrtRTEI);
  Sigma = d0 / a0;
  i = Omega_hat->size[0] * Omega_hat->size[1];
  Omega_hat->size[0] = R0->size[0];
  Omega_hat->size[1] = R0->size[1];
  emxEnsureCapacity_real_T(sp, Omega_hat, i, &kb_emlrtRTEI);
  Omega_hat_data = Omega_hat->data;
  loop_ub = R0->size[0] * R0->size[1];
  for (i = 0; i < loop_ub; i++) {
    Omega_hat_data[i] = nu * R0_data[i];
  }

  emxInit_real_T(sp, &Omega, 2, &lc_emlrtRTEI);
  st.site = &b_emlrtRSI;
  inv(&st, Omega_hat, Omega);
  Omega_data = Omega->data;
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &g_emlrtDCI, (emlrtCTX)sp);
  }

  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = (int32_T)n;
  Output->betam->size[1] = k_Z;
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &lb_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = (int32_T)n * k_Z;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->betam->data[i1] = 0.0;
  }

  if (n != i) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &beta1m, 3, &mc_emlrtRTEI);
  loop_ub_tmp = (int32_T)n;
  i1 = beta1m->size[0] * beta1m->size[1] * beta1m->size[2];
  beta1m->size[0] = loop_ub_tmp;
  beta1m->size[1] = Y->size[0];
  beta1m->size[2] = H->size[1];
  emxEnsureCapacity_real_T(sp, beta1m, i1, &mb_emlrtRTEI);
  beta1m_data = beta1m->data;
  st.site = &c_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  lnpost1 = (real_T)H->size[1] * (real_T)H->size[1];
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Omegam->size[0] * Output->Omegam->size[1];
  Output->Omegam->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Omegam, i1, &nb_emlrtRTEI);
  if (lnpost1 != (int32_T)lnpost1) {
    emlrtIntegerCheckR2012b(lnpost1, &i_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Omegam->size[0] * Output->Omegam->size[1];
  Output->Omegam->size[1] = (int32_T)lnpost1;
  emxEnsureCapacity_real_T(sp, Output->Omegam, i1, &nb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, (emlrtCTX)sp);
  }

  if (lnpost1 != (int32_T)lnpost1) {
    emlrtIntegerCheckR2012b(lnpost1, &l_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = loop_ub_tmp * (int32_T)lnpost1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->Omegam->data[i1] = 0.0;
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Sigmam->size[0];
  Output->Sigmam->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Sigmam, i1, &ob_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Output->Sigmam->data[i1] = 0.0;
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Yfm->size[0];
  Output->Yfm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Yfm, i1, &pb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    Output->Yfm->data[i] = 0.0;
  }

  emxInit_real_T(sp, &beta_hat, 1, &qb_emlrtRTEI);
  lnpost_hat = -4.8516519540979028E+8;
  i = beta_hat->size[0];
  beta_hat->size[0] = b_->size[0];
  emxEnsureCapacity_real_T(sp, beta_hat, i, &qb_emlrtRTEI);
  beta_hat_data = beta_hat->data;
  loop_ub = b_->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_hat_data[i] = b__data[i];
  }

  i = Omega_hat->size[0] * Omega_hat->size[1];
  Omega_hat->size[0] = Omega->size[0];
  Omega_hat->size[1] = Omega->size[1];
  emxEnsureCapacity_real_T(sp, Omega_hat, i, &rb_emlrtRTEI);
  Omega_hat_data = Omega_hat->data;
  loop_ub = Omega->size[0] * Omega->size[1];
  for (i = 0; i < loop_ub; i++) {
    Omega_hat_data[i] = Omega_data[i];
  }

  Sigma_hat = Sigma;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &vec_Omega, 2, &bc_emlrtRTEI);
  emxInit_real_T(sp, &beta1, 2, &nc_emlrtRTEI);
  emxInit_real_T(sp, &retf, 2, &oc_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &yb_emlrtRTEI);
  emxInit_real_T(sp, &b_beta, 1, &ub_emlrtRTEI);
  for (iter = 0; iter < loop_ub_tmp; iter++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((iter - (int32_T)muDoubleScalarFloor(((real_T)iter + 1.0) / 100.0) * 100)
        + 1 == 0) {
      st.site = &dm_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i = 0; i < 37; i++) {
        b_cv2[i] = '=';
      }

      st.site = &ml_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, b_cv2), &f_emlrtMCI);
      st.site = &d_emlrtRSI;
      b_st.site = &qb_emlrtRSI;
      c_st.site = &rl_emlrtRSI;
      d_st.site = &sl_emlrtRSI;
      c_emlrt_marshallIn(&c_st, d_feval(&c_st, i_emlrt_marshallOut(&c_st, cv3),
        f_emlrt_marshallOut(1.0), j_emlrt_marshallOut(&d_st, cv4),
        f_emlrt_marshallOut((real_T)iter + 1.0), &r_emlrtMCI),
                         "<output of feval>");
      for (i = 0; i < 37; i++) {
        b_cv2[i] = '=';
      }

      st.site = &ll_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, b_cv2), &g_emlrtMCI);
      st.site = &cm_emlrtRSI;
      disp(&st, m_emlrt_marshallOut(), &h_emlrtMCI);
      st.site = &nl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
      i = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      loop_ub = beta->size[0];
      retf->size[1] = beta->size[0];
      emxEnsureCapacity_real_T(sp, retf, i, &wb_emlrtRTEI);
      retf_data = retf->data;
      for (i = 0; i < loop_ub; i++) {
        retf_data[i] = beta_data[i];
      }

      st.site = &bm_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(retf), &j_emlrtMCI);
      st.site = &pl_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv6), &k_emlrtMCI);
      st.site = &am_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(Sigma), &l_emlrtMCI);
      st.site = &ol_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv7), &m_emlrtMCI);
      st.site = &yl_emlrtRSI;
      disp(&st, g_emlrt_marshallOut(Omega), &n_emlrtMCI);
    }

    st.site = &e_emlrtRSI;
    Gen_beta1(&st, Y, Z, H, beta, Omega, Sigma, beta1, &lnpost1);
    Omega_hat_data = beta1->data;
    if (iter + 1 > beta1m->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, beta1m->size[0], &k_emlrtBCI,
        (emlrtCTX)sp);
    }

    iv[0] = 1;
    input_sizes_idx_1 = beta1m->size[1];
    iv[1] = beta1m->size[1];
    iv[2] = beta1m->size[2];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &beta1->size[0], 2, &c_emlrtECI,
      (emlrtCTX)sp);
    iv[1] = beta1m->size[1];
    loop_ub = beta1m->size[2];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        beta1m_data[(iter + beta1m->size[0] * i1) + beta1m->size[0] *
          beta1m->size[1] * i] = Omega_hat_data[i1 + iv[1] * i];
      }
    }

    if (k_Z == 0) {
      i = beta->size[0];
      beta->size[0] = 1;
      emxEnsureCapacity_real_T(sp, beta, i, &vb_emlrtRTEI);
      beta_data = beta->data;
      beta_data[0] = 0.0;
    } else {
      i = b_beta->size[0];
      b_beta->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(sp, b_beta, i, &ub_emlrtRTEI);
      Z_data = b_beta->data;
      loop_ub = beta->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        Z_data[i] = beta_data[i];
      }

      st.site = &f_emlrtRSI;
      Gen_beta(&st, Y, Z, H, b_beta, beta1, b_, Prec_var_, Sigma, restriction,
               res_x, beta);
      beta_data = beta->data;
      if (iter + 1 > Output->betam->size[0]) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Output->betam->size[0],
          &c_emlrtBCI, (emlrtCTX)sp);
      }

      b_Output[0] = 1;
      b_Output[1] = Output->betam->size[1];
      result[0] = 1;
      loop_ub = beta->size[0];
      result[1] = beta->size[0];
      emlrtSubAssignSizeCheckR2012b(&b_Output[0], 2, &result[0], 2, &emlrtECI,
        (emlrtCTX)sp);
      for (i = 0; i < loop_ub; i++) {
        Output->betam->data[iter + Output->betam->size[0] * i] = beta_data[i];
      }
    }

    st.site = &g_emlrtRSI;
    Gen_Omega(&st, beta1, nu, R0, d, Omega);
    Omega_data = Omega->data;
    i = r->size[0] * r->size[1];
    r->size[0] = Omega->size[0];
    r->size[1] = Omega->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &yb_emlrtRTEI);
    r1 = r->data;
    loop_ub = Omega->size[0] * Omega->size[1];
    for (i = 0; i < loop_ub; i++) {
      r1[i] = Omega_data[i];
    }

    st.site = &h_emlrtRSI;
    vec(&st, r);
    r1 = r->data;
    i = vec_Omega->size[0] * vec_Omega->size[1];
    vec_Omega->size[0] = r->size[1];
    vec_Omega->size[1] = r->size[0];
    emxEnsureCapacity_real_T(sp, vec_Omega, i, &bc_emlrtRTEI);
    Z_data = vec_Omega->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = r->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Z_data[i1 + vec_Omega->size[0] * i] = r1[i + r->size[0] * i1];
      }
    }

    if (iter + 1 > Output->Omegam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Output->Omegam->size[0],
        &f_emlrtBCI, (emlrtCTX)sp);
    }

    if (1 > vec_Omega->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_Omega->size[0], &emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = vec_Omega->size[1];
    i = retf->size[0] * retf->size[1];
    retf->size[0] = 1;
    retf->size[1] = vec_Omega->size[1];
    emxEnsureCapacity_real_T(sp, retf, i, &dc_emlrtRTEI);
    retf_data = retf->data;
    for (i = 0; i < loop_ub; i++) {
      retf_data[i] = Z_data[vec_Omega->size[0] * i];
    }

    b_Output[0] = 1;
    b_Output[1] = Output->Omegam->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_Output[0], 2, &retf->size[0], 2,
      &b_emlrtECI, (emlrtCTX)sp);
    loop_ub = vec_Omega->size[1];
    for (i = 0; i < loop_ub; i++) {
      Output->Omegam->data[iter + Output->Omegam->size[0] * i] =
        Z_data[vec_Omega->size[0] * i];
    }

    st.site = &i_emlrtRSI;
    Sigma = Gen_Sigma(&st, Y, Z, H, beta1, beta, a0, d0, d);
    if ((int32_T)(iter + 1U) > Output->Sigmam->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, Output->
        Sigmam->size[0], &p_emlrtBCI, (emlrtCTX)sp);
    }

    Output->Sigmam->data[iter] = Sigma;
    if (isForecast == 1) {
      if (beta1->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(beta1->size[0], 1, beta1->size[0],
          &b_emlrtBCI, (emlrtCTX)sp);
      }

      loop_ub = beta1->size[1];
      i = b_beta->size[0];
      b_beta->size[0] = beta1->size[1];
      emxEnsureCapacity_real_T(sp, b_beta, i, &ec_emlrtRTEI);
      Z_data = b_beta->data;
      for (i = 0; i < loop_ub; i++) {
        Z_data[i] = Omega_hat_data[(beta1->size[0] + beta1->size[0] * i) - 1];
      }

      if ((int32_T)(iter + 1U) > Output->Yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, Output->Yfm->
          size[0], &q_emlrtBCI, (emlrtCTX)sp);
      }

      st.site = &j_emlrtRSI;
      Output->Yfm->data[iter] = Gen_Forecast(&st, x0_f, x1_f, b_beta, beta,
        Sigma, Omega);
    }

    if ((ML == 'Y') && ((real_T)iter + 1.0 > n0)) {
      st.site = &k_emlrtRSI;
      b_prior = b_lnpdfmvn(&st, beta, b_, var_);
      st.site = &l_emlrtRSI;
      inv(&st, Omega, r);
      st.site = &l_emlrtRSI;
      Omega_prior = lnpdfwishart(&st, r, R0, nu);
      st.site = &m_emlrtRSI;
      alpha = a0 / 2.0;
      c_beta = d0 / 2.0;

      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &wk_emlrtRSI;
      c_st.site = &pk_emlrtRSI;
      x = alpha;
      e_st.site = &yk_emlrtRSI;
      scalar_gammaln(&e_st, &x);
      b_st.site = &wk_emlrtRSI;
      if (c_beta < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &r_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      b_st.site = &xk_emlrtRSI;
      if (Sigma < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &r_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      lnpost1 += (b_prior + Omega_prior) + (((alpha * muDoubleScalarLog(c_beta)
        - x) - (alpha + 1.0) * muDoubleScalarLog(Sigma)) - c_beta / Sigma);
      if (lnpost1 > lnpost_hat) {
        loop_ub = beta->size[0];
        i = beta_hat->size[0];
        beta_hat->size[0] = beta->size[0];
        emxEnsureCapacity_real_T(sp, beta_hat, i, &gc_emlrtRTEI);
        beta_hat_data = beta_hat->data;
        for (i = 0; i < loop_ub; i++) {
          beta_hat_data[i] = beta_data[i];
        }

        i = Omega_hat->size[0] * Omega_hat->size[1];
        Omega_hat->size[0] = Omega->size[0];
        Omega_hat->size[1] = Omega->size[1];
        emxEnsureCapacity_real_T(sp, Omega_hat, i, &hc_emlrtRTEI);
        Omega_hat_data = Omega_hat->data;
        loop_ub = Omega->size[0] * Omega->size[1];
        for (i = 0; i < loop_ub; i++) {
          Omega_hat_data[i] = Omega_data[i];
        }

        Sigma_hat = Sigma;
        lnpost_hat = lnpost1;
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &beta1);
  emxFree_real_T(sp, &vec_Omega);
  st.site = &xl_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &b_emlrtMCI);
  st.site = &ql_emlrtRSI;
  disp(&st, h_emlrt_marshallOut(&st, b_cv1), &c_emlrtMCI);
  st.site = &wl_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &d_emlrtMCI);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->betam->size
         [0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->betam->size
        [0], &d_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->betam->size[0],
        &e_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp - 1;
  }

  k_Z = Output->betam->size[1] - 1;
  for (i2 = 0; i2 <= k_Z; i2++) {
    b_loop_ub_tmp = i1 - i;
    for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
      Output->betam->data[i3 + b_loop_ub_tmp * i2] = Output->betam->data[((i +
        i3) + Output->betam->size[0] * i2) + 1];
    }
  }

  i2 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = i1 - i;
  Output->betam->size[1] = k_Z + 1;
  emxEnsureCapacity_real_T(sp, Output->betam, i2, &sb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->Omegam->
         size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->Omegam->
        size[0], &g_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->Omegam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Omegam->size[0],
        &h_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)n - 1;
  }

  iter = Output->Omegam->size[1] - 1;
  for (i2 = 0; i2 <= iter; i2++) {
    b_loop_ub_tmp = i1 - i;
    for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
      Output->Omegam->data[i3 + b_loop_ub_tmp * i2] = Output->Omegam->data[((i +
        i3) + Output->Omegam->size[0] * i2) + 1];
    }
  }

  i2 = Output->Omegam->size[0] * Output->Omegam->size[1];
  Output->Omegam->size[0] = i1 - i;
  Output->Omegam->size[1] = iter + 1;
  emxEnsureCapacity_real_T(sp, Output->Omegam, i2, &tb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->Sigmam->
         size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->Sigmam->
        size[0], &i_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Output->Sigmam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Sigmam->size[0],
        &j_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp;
  }

  b_loop_ub_tmp = i1 - i;
  for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
    Output->Sigmam->data[i1] = Output->Sigmam->data[i + i1];
  }

  i = Output->Sigmam->size[0];
  Output->Sigmam->size[0] = b_loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Sigmam, i, &xb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > beta1m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, beta1m->size[0],
        &l_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > beta1m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, beta1m->size[0], &m_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = loop_ub_tmp;
  }

  loop_ub = beta1m->size[1];
  b_loop_ub = beta1m->size[2];
  input_sizes_idx_1 = i1 - i;
  i1 = Output->beta1m->size[0] * Output->beta1m->size[1] * Output->beta1m->size
    [2];
  Output->beta1m->size[0] = input_sizes_idx_1;
  Output->beta1m->size[1] = beta1m->size[1];
  Output->beta1m->size[2] = beta1m->size[2];
  emxEnsureCapacity_real_T(sp, Output->beta1m, i1, &ac_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
        Output->beta1m->data[(i3 + Output->beta1m->size[0] * i2) +
          Output->beta1m->size[0] * Output->beta1m->size[1] * i1] = beta1m_data
          [((i + i3) + beta1m->size[0] * i2) + beta1m->size[0] * beta1m->size[1]
          * i1];
      }
    }
  }

  emxFree_real_T(sp, &beta1m);
  if (isForecast == 1) {
    if (n0 + 1.0 > n) {
      i = 0;
      loop_ub_tmp = 0;
    } else {
      if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
        emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->Yfm->size
           [0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->Yfm->size
          [0], &n_emlrtBCI, (emlrtCTX)sp);
      }

      i = (int32_T)(n0 + 1.0) - 1;
      if ((n < 1.0) || (loop_ub_tmp > Output->Yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Yfm->size[0],
          &o_emlrtBCI, (emlrtCTX)sp);
      }
    }

    loop_ub_tmp -= i;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      Output->Yfm->data[i1] = Output->Yfm->data[i + i1];
    }

    i = Output->Yfm->size[0];
    Output->Yfm->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, Output->Yfm, i, &cc_emlrtRTEI);
  }

  Output->lnML = 0.0;
  if (ML == 'Y') {
    st.site = &n_emlrtRSI;
    b_st.site = &vg_emlrtRSI;
    if ((Output->betam->size[0] != 0) && (k_Z + 1 != 0)) {
      b_loop_ub = Output->betam->size[0];
    } else if ((Output->Omegam->size[0] != 0) && (iter + 1 != 0)) {
      b_loop_ub = Output->Omegam->size[0];
    } else if (b_loop_ub_tmp != 0) {
      b_loop_ub = b_loop_ub_tmp;
    } else {
      b_loop_ub = Output->betam->size[0];
      if (Output->Omegam->size[0] > Output->betam->size[0]) {
        b_loop_ub = Output->Omegam->size[0];
      }
    }

    c_st.site = &wg_emlrtRSI;
    if ((Output->betam->size[0] != b_loop_ub) && ((Output->betam->size[0] != 0) &&
         (k_Z + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Output->Omegam->size[0] != b_loop_ub) && ((Output->Omegam->size[0] != 0)
         && (iter + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((b_loop_ub_tmp != b_loop_ub) && (b_loop_ub_tmp != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (b_loop_ub == 0);
    if (empty_non_axis_sizes || ((Output->betam->size[0] != 0) && (k_Z + 1 != 0)))
    {
      k_Z++;
    } else {
      k_Z = 0;
    }

    if (empty_non_axis_sizes || ((Output->Omegam->size[0] != 0) && (iter + 1 !=
          0))) {
      input_sizes_idx_1 = iter + 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (b_loop_ub_tmp != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    i = Prec_var_->size[0] * Prec_var_->size[1];
    Prec_var_->size[0] = b_loop_ub;
    i1 = k_Z + input_sizes_idx_1;
    Prec_var_->size[1] = i1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Prec_var_, i, &fc_emlrtRTEI);
    Z_data = Prec_var_->data;
    for (i = 0; i < k_Z; i++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        Z_data[i2 + Prec_var_->size[0] * i] = Output->betam->data[i2 + b_loop_ub
          * i];
      }
    }

    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        Z_data[i2 + Prec_var_->size[0] * (i + k_Z)] = Output->Omegam->data[i2 +
          b_loop_ub * i];
      }
    }

    loop_ub = sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        Z_data[i2 + Prec_var_->size[0] * i1] = Output->Sigmam->data[i2];
      }
    }

    st.site = &o_emlrtRSI;
    b_st.site = &al_emlrtRSI;
    mean(&b_st, Prec_var_, retf);
    retf_data = retf->data;
    st.site = &p_emlrtRSI;
    cov(&st, Prec_var_, r);
    r1 = r->data;
    st.site = &p_emlrtRSI;
    cov(&st, Prec_var_, Omega);
    Omega_data = Omega->data;
    if ((r->size[0] != Omega->size[1]) && ((r->size[0] != 1) && (Omega->size[1]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[0], Omega->size[1], &d_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((Omega->size[0] != r->size[1]) && ((r->size[1] != 1) && (Omega->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[1], Omega->size[0], &e_emlrtECI,
        (emlrtCTX)sp);
    }

    st.site = &q_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    vec(&b_st, Omega_hat);
    Omega_hat_data = Omega_hat->data;
    b_st.site = &vg_emlrtRSI;
    c_st.site = &wg_emlrtRSI;
    if ((Omega_hat->size[1] != 1) && ((Omega_hat->size[0] != 0) &&
         (Omega_hat->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (beta_hat->size[0] != 0) {
      input_sizes[0] = beta_hat->size[0];
    } else {
      input_sizes[0] = 0;
    }

    if ((Omega_hat->size[0] != 0) && (Omega_hat->size[1] != 0)) {
      b_input_sizes[0] = Omega_hat->size[0];
    } else {
      b_input_sizes[0] = 0;
    }

    if ((r->size[0] == Omega->size[1]) && (Omega->size[0] == r->size[1])) {
      i = input_sizes[0] + b_input_sizes[0];
      i1 = b_beta->size[0];
      b_beta->size[0] = i + 1;
      emxEnsureCapacity_real_T(sp, b_beta, i1, &ic_emlrtRTEI);
      Z_data = b_beta->data;
      loop_ub = input_sizes[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Z_data[i1] = beta_hat_data[i1];
      }

      loop_ub = b_input_sizes[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Z_data[i1 + input_sizes[0]] = Omega_hat_data[i1];
      }

      Z_data[i] = Sigma_hat;
      i = beta->size[0];
      beta->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, beta, i, &jc_emlrtRTEI);
      beta_data = beta->data;
      loop_ub = retf->size[1];
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = retf_data[i];
      }

      i = Omega_hat->size[0] * Omega_hat->size[1];
      Omega_hat->size[0] = r->size[0];
      Omega_hat->size[1] = r->size[1];
      emxEnsureCapacity_real_T(sp, Omega_hat, i, &kb_emlrtRTEI);
      Omega_hat_data = Omega_hat->data;
      loop_ub = r->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = r->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Omega_hat_data[i1 + Omega_hat->size[0] * i] = 0.5 * (r1[i1 + r->size[0]
            * i] + Omega_data[i + Omega->size[0] * i1]);
        }
      }

      st.site = &q_emlrtRSI;
      lnpost1 = b_lnpdfmvn(&st, b_beta, beta, Omega_hat);
    } else {
      st.site = &q_emlrtRSI;
      lnpost1 = binary_expand_op(&st, q_emlrtRSI, beta_hat, input_sizes,
        Omega_hat, b_input_sizes, Sigma_hat, retf, r, Omega);
    }

    Output->lnML = lnpost_hat - lnpost1;
  }

  emxFree_real_T(sp, &b_beta);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &Omega_hat);
  emxFree_real_T(sp, &beta_hat);
  emxFree_real_T(sp, &Omega);
  emxFree_real_T(sp, &beta);
  emxFree_real_T(sp, &Prec_var_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *GPG_Qinv)
{
  emxArray_real_T *b_GPG_Qinv;
  real_T *GPG_Qinv_data;
  real_T *b_GPG_Qinv_data;
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
  GPG_Qinv_data = GPG_Qinv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_GPG_Qinv, 2, &ud_emlrtRTEI);
  i = b_GPG_Qinv->size[0] * b_GPG_Qinv->size[1];
  if (GPG_Qinv->size[1] == 1) {
    b_GPG_Qinv->size[0] = GPG_Qinv->size[0];
  } else {
    b_GPG_Qinv->size[0] = GPG_Qinv->size[1];
  }

  if (GPG_Qinv->size[0] == 1) {
    b_GPG_Qinv->size[1] = GPG_Qinv->size[1];
  } else {
    b_GPG_Qinv->size[1] = GPG_Qinv->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_GPG_Qinv, i, &ud_emlrtRTEI);
  b_GPG_Qinv_data = b_GPG_Qinv->data;
  stride_0_0 = (GPG_Qinv->size[0] != 1);
  stride_0_1 = (GPG_Qinv->size[1] != 1);
  stride_1_0 = (GPG_Qinv->size[1] != 1);
  stride_1_1 = (GPG_Qinv->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (GPG_Qinv->size[0] == 1) {
    loop_ub = GPG_Qinv->size[1];
  } else {
    loop_ub = GPG_Qinv->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    if (GPG_Qinv->size[1] == 1) {
      b_loop_ub = GPG_Qinv->size[0];
    } else {
      b_loop_ub = GPG_Qinv->size[1];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_GPG_Qinv_data[i1 + b_GPG_Qinv->size[0] * i] = (GPG_Qinv_data[i1 *
        stride_0_0 + GPG_Qinv->size[0] * aux_0_1] + GPG_Qinv_data[aux_1_1 +
        GPG_Qinv->size[0] * (i1 * stride_1_0)]) / 2.0;
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = GPG_Qinv->size[0] * GPG_Qinv->size[1];
  GPG_Qinv->size[0] = b_GPG_Qinv->size[0];
  GPG_Qinv->size[1] = b_GPG_Qinv->size[1];
  emxEnsureCapacity_real_T(sp, GPG_Qinv, i, &vd_emlrtRTEI);
  GPG_Qinv_data = GPG_Qinv->data;
  loop_ub = b_GPG_Qinv->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_GPG_Qinv->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      GPG_Qinv_data[i1 + GPG_Qinv->size[0] * i] = b_GPG_Qinv_data[i1 +
        b_GPG_Qinv->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_GPG_Qinv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS, void
  *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (Time_Varying_Parameter.c) */

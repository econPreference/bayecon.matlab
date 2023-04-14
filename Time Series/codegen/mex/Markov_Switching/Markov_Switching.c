/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Markov_Switching.c
 *
 * Code generation for function 'Markov_Switching'
 *
 */

/* Include files */
#include "Markov_Switching.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_mexutil.h"
#include "Markov_Switching_types.h"
#include "assertCompatibleDims.h"
#include "chol.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "diag.h"
#include "diff.h"
#include "discret1.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "find.h"
#include "gammaln.h"
#include "gamrnd.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "kron.h"
#include "lnpdfmvn.h"
#include "logDirichlet.h"
#include "mean.h"
#include "median.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "power.h"
#include "quantile.h"
#include "randg.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "vec.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 297,   /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 296, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 295, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 293, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 292, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 289, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 288, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 253, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 232, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 229, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 227, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 222, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 219, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 216, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 213, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 205, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 202, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 198, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 197, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 191, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 190, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 182, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 174, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 172, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 168, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 166,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 162,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 158,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 152,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 145,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 138,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 135,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 130,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 108,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 97, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 95, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 77, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 75, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 71, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 61, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 59, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 48, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 34, /* lineNo */
  "rdivide_helper",                    /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/rdivide_helper.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 51, /* lineNo */
  "div",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/div.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 15, /* lineNo */
  "sum",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 368,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 379,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 380,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 381,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 382,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 387,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 398,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 399,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 404,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 405,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 407,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 408,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 409,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 410,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 15, /* lineNo */
  "min",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 46, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 92, /* lineNo */
  "minimum",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 221,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 308,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 455,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 456,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 458,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 463,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 475,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 477,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 480,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 12, /* lineNo */
  "randig",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 18, /* lineNo */
  "randgam",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 15, /* lineNo */
  "randgam",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 328,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 329,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 344,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 348,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 351,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 355,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 360,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 363,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 28, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 100,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 7,  /* lineNo */
  "lnpdfn",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 10, /* lineNo */
  "exp",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/exp.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 493,/* lineNo */
  "sgen",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 501,/* lineNo */
  "sgen",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 502,/* lineNo */
  "sgen",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 39, /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 418,/* lineNo */
  "Gen_P",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 424,/* lineNo */
  "Gen_P",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 425,/* lineNo */
  "Gen_P",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 428,/* lineNo */
  "Gen_P",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 439,/* lineNo */
  "Gen_P",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 308,/* lineNo */
  "CountTransitions",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 4,  /* lineNo */
  "maxc",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/maxc.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 169,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 54, /* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 62, /* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 103,/* lineNo */
  "findFirst",                         /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 120,/* lineNo */
  "minOrMaxRealVectorKernel",          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 4,  /* lineNo */
  "randDir",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randDir.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 5,  /* lineNo */
  "randDir",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randDir.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 8,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 9,  /* lineNo */
  "lnpdfig",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 17,    /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 44,  /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 45,  /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 46,  /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 248, /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 249, /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 128, /* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 129, /* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 131, /* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 132, /* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 134, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 141, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 135, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 148, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 142, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 136, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 149, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 143, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 150, /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 275,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  23,                                  /* colNo */
  "vec_P",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  22,                                  /* colNo */
  "Pm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 34,    /* lineNo */
  15,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 34,  /* lineNo */
  18,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 38,  /* lineNo */
  19,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 64,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo emlrtECI = { 1,     /* nDims */
  66,                                  /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 80,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 1,   /* nDims */
  82,                                  /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 86,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtDCInfo d_emlrtDCI = { 87,  /* lineNo */
  11,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  11,                                  /* colNo */
  "S",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 87,  /* lineNo */
  27,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  27,                                  /* colNo */
  "S",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 89,  /* lineNo */
  7,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  7,                                   /* colNo */
  "S",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  23,                                  /* colNo */
  "S",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 101, /* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 102,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 109,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  20,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  22,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  7,                                   /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  9,                                   /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  113,                                 /* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  7,                                   /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  114,                                 /* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 124,/* lineNo */
  12,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 137,/* lineNo */
  21,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 144,/* lineNo */
  21,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 151,/* lineNo */
  21,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 171,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  20,                                  /* colNo */
  "Sm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  186,                                 /* lineNo */
  8,                                   /* colNo */
  "Sm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  186,                                 /* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  31,                                  /* colNo */
  "S",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  33,                                  /* colNo */
  "S",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 1,   /* nDims */
  190,                                 /* lineNo */
  18,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  192,                                 /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  25,                                  /* colNo */
  "vec_P",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  33,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  29,                                  /* colNo */
  "b",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  30,                                  /* colNo */
  "sig2",                              /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  32,                                  /* colNo */
  "b",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  43,                                  /* colNo */
  "beta0",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  51,                                  /* colNo */
  "b",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  62,                                  /* colNo */
  "beta0",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  219,                                 /* lineNo */
  35,                                  /* colNo */
  "sig2",                              /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  219,                                 /* lineNo */
  47,                                  /* colNo */
  "alpha0",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  219,                                 /* lineNo */
  61,                                  /* colNo */
  "delta0",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  56,                                  /* colNo */
  "sig2",                              /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  39,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  41,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  46,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  48,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  61,                                  /* colNo */
  "P_para",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  63,                                  /* colNo */
  "P_para",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  73,                                  /* colNo */
  "P_para",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  75,                                  /* colNo */
  "P_para",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo o_emlrtRTEI = { 228,/* lineNo */
  21,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  159,                                 /* lineNo */
  11,                                  /* colNo */
  "betam",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  159,                                 /* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  20,                                  /* colNo */
  "betam",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo p_emlrtRTEI = { 252,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  32,                                  /* colNo */
  "betam",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 257, /* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  17,                                  /* colNo */
  "betam_",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  22,                                  /* colNo */
  "betam_",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  163,                                 /* lineNo */
  11,                                  /* colNo */
  "sig2m",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  163,                                 /* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtDCInfo i_emlrtDCI = { 258, /* lineNo */
  15,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  15,                                  /* colNo */
  "sig2m",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  20,                                  /* colNo */
  "sig2m",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  8,                                   /* colNo */
  "Pm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  199,                                 /* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtDCInfo j_emlrtDCI = { 259, /* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  9,                                   /* colNo */
  "Pm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  14,                                  /* colNo */
  "Pm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 260, /* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  9,                                   /* colNo */
  "Sm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  14,                                  /* colNo */
  "Sm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 263, /* lineNo */
  15,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  15,                                  /* colNo */
  "Yfm",                               /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  20,                                  /* colNo */
  "Yfm",                               /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  27,                                  /* colNo */
  "betam_",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  29,                                  /* colNo */
  "betam_",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  23,                                  /* colNo */
  "b_hat",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  25,                                  /* colNo */
  "b_hat",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  27,                                  /* colNo */
  "b_hat",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  25,                                  /* colNo */
  "sig2m",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  29,                                  /* colNo */
  "sig2_hat",                          /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  25,                                  /* colNo */
  "Pm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  36,                                  /* colNo */
  "Pm",                                /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { 2,   /* nDims */
  287,                                 /* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 2,   /* nDims */
  290,                                 /* lineNo */
  23,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  41,                                  /* colNo */
  "vec_P",                             /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { 1,   /* nDims */
  296,                                 /* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  296,                                 /* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtDCInfo m_emlrtDCI = { 32,  /* lineNo */
  12,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 33,  /* lineNo */
  15,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 33,  /* lineNo */
  21,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 33,  /* lineNo */
  21,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 35,  /* lineNo */
  12,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 35,  /* lineNo */
  15,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 41,  /* lineNo */
  11,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 41,  /* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 119, /* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 120, /* lineNo */
  15,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 120, /* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 32, /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 33, /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 35, /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 41, /* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 48, /* lineNo */
  21,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  27,                                  /* colNo */
  "quan",                              /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  30,                                  /* colNo */
  "quan",                              /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 95, /* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 119,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  11,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  13,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  11,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  13,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 120,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 121,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 170,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  16,                                  /* colNo */
  "ratioS",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  35,                                  /* colNo */
  "S",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  26,                                  /* colNo */
  "Changepointm",                      /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  46,                                  /* colNo */
  "Changepointm",                      /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  206,                                 /* lineNo */
  13,                                  /* colNo */
  "Yfm",                               /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  68,                                  /* colNo */
  "alpha0",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  82,                                  /* colNo */
  "delta0",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  51,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  58,                                  /* colNo */
  "P",                                 /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  70,                                  /* colNo */
  "P_para",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  82,                                  /* colNo */
  "P_para",                            /* aName */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  357,                                 /* lineNo */
  5,                                   /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  357,                                 /* lineNo */
  12,                                  /* colNo */
  "Filtpm",                            /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { 1,   /* nDims */
  353,                                 /* lineNo */
  13,                                  /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  326,                                 /* lineNo */
  12,                                  /* colNo */
  "prb_ll",                            /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  344,                                 /* lineNo */
  54,                                  /* colNo */
  "sig2",                              /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  344,                                 /* lineNo */
  45,                                  /* colNo */
  "beta",                              /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  342,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  341,                                 /* lineNo */
  16,                                  /* colNo */
  "Y",                                 /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo gb_emlrtRTEI = { 339,/* lineNo */
  13,                                  /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtDCInfo kb_emlrtDCI = { 328,/* lineNo */
  30,                                  /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { 2,   /* nDims */
  328,                                 /* lineNo */
  10,                                  /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { 1,   /* nDims */
  328,                                 /* lineNo */
  10,                                  /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtDCInfo lb_emlrtDCI = { 325,/* lineNo */
  5,                                   /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  344,                                 /* lineNo */
  16,                                  /* colNo */
  "lnpdfm",                            /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  361,                                 /* lineNo */
  14,                                  /* colNo */
  "logLikel",                          /* aName */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 329,/* lineNo */
  27,                                  /* colNo */
  "Filter",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  492,                                 /* lineNo */
  11,                                  /* colNo */
  "F",                                 /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  499,                                 /* lineNo */
  14,                                  /* colNo */
  "sm",                                /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  500,                                 /* lineNo */
  15,                                  /* colNo */
  "F",                                 /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  500,                                 /* lineNo */
  30,                                  /* colNo */
  "Pcap",                              /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  500,                                 /* lineNo */
  13,                                  /* colNo */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  495,                                 /* lineNo */
  5,                                   /* colNo */
  "psm",                               /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  495,                                 /* lineNo */
  1,                                   /* colNo */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  504,                                 /* lineNo */
  9,                                   /* colNo */
  "psm",                               /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  504,                                 /* lineNo */
  5,                                   /* colNo */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  493,                                 /* lineNo */
  4,                                   /* colNo */
  "sm",                                /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  494,                                 /* lineNo */
  5,                                   /* colNo */
  "stm",                               /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  494,                                 /* lineNo */
  7,                                   /* colNo */
  "stm",                               /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  494,                                 /* lineNo */
  10,                                  /* colNo */
  "sm",                                /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  502,                                 /* lineNo */
  8,                                   /* colNo */
  "sm",                                /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  503,                                 /* lineNo */
  9,                                   /* colNo */
  "stm",                               /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  503,                                 /* lineNo */
  11,                                  /* colNo */
  "stm",                               /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  503,                                 /* lineNo */
  14,                                  /* colNo */
  "sm",                                /* aName */
  "sgen",                              /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  13,                                  /* colNo */
  "sm",                                /* aName */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  313,                                 /* lineNo */
  13,                                  /* colNo */
  "sm",                                /* aName */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  439,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  439,                                 /* lineNo */
  11,                                  /* colNo */
  "P",                                 /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  7,                                   /* colNo */
  "P",                                 /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo x_emlrtECI = { 1,   /* nDims */
  438,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  438,                                 /* lineNo */
  20,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 436,/* lineNo */
  22,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo jb_emlrtRTEI = { 435,/* lineNo */
  13,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 427,/* lineNo */
  17,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  52,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  50,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  34,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  32,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  421,                                 /* lineNo */
  1,                                   /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  421,                                 /* lineNo */
  20,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  421,                                 /* lineNo */
  18,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  421,                                 /* lineNo */
  10,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  421,                                 /* lineNo */
  8,                                   /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 309,/* lineNo */
  16,                                  /* colNo */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 309,/* lineNo */
  16,                                  /* colNo */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 309,/* lineNo */
  21,                                  /* colNo */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 420,/* lineNo */
  16,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 420,/* lineNo */
  19,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 418,/* lineNo */
  1,                                   /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  28,                                  /* colNo */
  "countm",                            /* aName */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  31,                                  /* colNo */
  "countm",                            /* aName */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  12,                                  /* colNo */
  "countm",                            /* aName */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  15,                                  /* colNo */
  "countm",                            /* aName */
  "CountTransitions",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 420,/* lineNo */
  1,                                   /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 434,/* lineNo */
  15,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 434,/* lineNo */
  17,                                  /* colNo */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  437,                                 /* lineNo */
  12,                                  /* colNo */
  "N_",                                /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  428,                                 /* lineNo */
  26,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  428,                                 /* lineNo */
  44,                                  /* colNo */
  "countm",                            /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  429,                                 /* lineNo */
  15,                                  /* colNo */
  "P",                                 /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  429,                                 /* lineNo */
  17,                                  /* colNo */
  "P",                                 /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  15,                                  /* colNo */
  "P",                                 /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  17,                                  /* colNo */
  "P",                                 /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  5,                                   /* colNo */
  "P",                                 /* aName */
  "Gen_P",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo sb_emlrtRTEI = { 375,/* lineNo */
  13,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 1,  /* nDims */
  379,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  379,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  381,                                 /* lineNo */
  44,                                  /* colNo */
  "beta0",                             /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gb_emlrtECI = { 1,  /* nDims */
  381,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo hb_emlrtECI = { 1,  /* nDims */
  382,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  386,                                 /* lineNo */
  25,                                  /* colNo */
  "test_beta",                         /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  386,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { 1,  /* nDims */
  388,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  388,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  390,                                 /* lineNo */
  20,                                  /* colNo */
  "beta",                              /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lb_emlrtECI = { -1, /* nDims */
  390,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  397,                                 /* lineNo */
  26,                                  /* colNo */
  "sig2",                              /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo tb_emlrtRTEI = { 400,/* lineNo */
  13,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { 1,  /* nDims */
  404,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 2,  /* nDims */
  404,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo ob_emlrtECI = { 1,  /* nDims */
  405,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { 1,  /* nDims */
  407,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { 2,  /* nDims */
  407,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo rb_emlrtECI = { 1,  /* nDims */
  408,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 1,  /* nDims */
  409,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  395,                                 /* lineNo */
  16,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  376,                                 /* lineNo */
  16,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  396,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  377,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  378,                                 /* lineNo */
  26,                                  /* colNo */
  "sig2",                              /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  401,                                 /* lineNo */
  16,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  402,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  26,                                  /* colNo */
  "sig2",                              /* aName */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 410,/* lineNo */
  24,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo tb_emlrtECI = { 1,  /* nDims */
  475,                                 /* lineNo */
  39,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { 1,  /* nDims */
  475,                                 /* lineNo */
  22,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  474,                                 /* lineNo */
  24,                                  /* colNo */
  "beta",                              /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo wb_emlrtRTEI = { 471,/* lineNo */
  13,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { 1,  /* nDims */
  464,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  457,                                 /* lineNo */
  21,                                  /* colNo */
  "alpha0",                            /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  456,                                 /* lineNo */
  21,                                  /* colNo */
  "delta0",                            /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo wb_emlrtECI = { 1,  /* nDims */
  455,                                 /* lineNo */
  16,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  454,                                 /* lineNo */
  24,                                  /* colNo */
  "beta",                              /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo xb_emlrtRTEI = { 451,/* lineNo */
  13,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtDCInfo yb_emlrtDCI = { 470,/* lineNo */
  5,                                   /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  16,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  472,                                 /* lineNo */
  16,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  453,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  473,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 481,/* lineNo */
  24,                                  /* colNo */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  475,                                 /* lineNo */
  14,                                  /* colNo */
  "ehat",                              /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  466,                                 /* lineNo */
  18,                                  /* colNo */
  "sig2",                              /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  462,                                 /* lineNo */
  23,                                  /* colNo */
  "test_sig2",                         /* aName */
  "Gen_Sigma",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo yb_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 50,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 48,/* lineNo */
  14,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 56,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 72,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 91,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 61,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 59,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 77,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 75,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 65,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 95,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 81,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 52,/* lineNo */
  9,                                   /* colNo */
  "div",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/div.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 101,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 119,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 105,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 112,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 120,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 113,/* lineNo */
  18,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 121,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 114,/* lineNo */
  14,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 251,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 257,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 142,/* lineNo */
  18,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 258,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 152,/* lineNo */
  62,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 138,/* lineNo */
  62,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 145,/* lineNo */
  62,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 259,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 170,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 253,/* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 269,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 266,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 253,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 174,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 172,/* lineNo */
  27,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 267,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 263,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 301,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 282,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 277,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 287,/* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 282,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 278,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 287,/* lineNo */
  33,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 182,/* lineNo */
  31,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 180,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 283,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 278,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 183,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 198,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 198,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 292,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 199,/* lineNo */
  19,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 191,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 293,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 192,/* lineNo */
  26,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 202,/* lineNo */
  31,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 192,/* lineNo */
  33,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 213,/* lineNo */
  28,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 287,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 213,/* lineNo */
  35,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 203,/* lineNo */
  25,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 288,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 216,/* lineNo */
  46,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 289,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 216,/* lineNo */
  54,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 290,/* lineNo */
  23,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 295,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 290,/* lineNo */
  32,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 232,/* lineNo */
  45,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 4,/* lineNo */
  8,                                   /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 232,/* lineNo */
  49,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 76,/* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 290,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 239,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 290,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 240,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 241,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 71,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 95,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 1,/* lineNo */
  10,                                  /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 325,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 328,/* lineNo */
  10,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 333,/* lineNo */
  10,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 334,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 335,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 328,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 348,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 342,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 344,/* lineNo */
  38,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 90,/* lineNo */
  5,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 329,/* lineNo */
  27,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 356,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 320,/* lineNo */
  18,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 329,/* lineNo */
  18,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 488,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 489,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 490,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 493,/* lineNo */
  18,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 492,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 500,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 501,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 502,/* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 492,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 485,/* lineNo */
  15,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 418,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 420,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 434,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 436,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 438,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 366,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 396,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 377,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 74,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 379,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 407,/* lineNo */
  14,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 381,/* lineNo */
  36,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 408,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 402,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 408,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 410,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = { 409,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = { 385,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = { 387,/* lineNo */
  29,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = { 387,/* lineNo */
  24,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = { 388,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = { 368,/* lineNo */
  1,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo al_emlrtRTEI = { 376,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = { 380,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = { 398,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = { 399,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo el_emlrtRTEI = { 382,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo fl_emlrtRTEI = { 396,/* lineNo */
  16,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo gl_emlrtRTEI = { 402,/* lineNo */
  16,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo hl_emlrtRTEI = { 399,/* lineNo */
  14,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo il_emlrtRTEI = { 387,/* lineNo */
  30,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ml_emlrtRTEI = { 470,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo nl_emlrtRTEI = { 445,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ol_emlrtRTEI = { 480,/* lineNo */
  25,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo pl_emlrtRTEI = { 473,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ql_emlrtRTEI = { 453,/* lineNo */
  14,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo rl_emlrtRTEI = { 480,/* lineNo */
  20,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 454,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 481,/* lineNo */
  5,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = { 474,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = { 455,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = { 475,/* lineNo */
  22,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo xl_emlrtRTEI = { 475,/* lineNo */
  39,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo yl_emlrtRTEI = { 461,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo am_emlrtRTEI = { 463,/* lineNo */
  24,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo bm_emlrtRTEI = { 464,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo cm_emlrtRTEI = { 452,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo dm_emlrtRTEI = { 453,/* lineNo */
  9,                                   /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo em_emlrtRTEI = { 473,/* lineNo */
  16,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo fm_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "randgam",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m"/* pName */
};

static emlrtRTEInfo jm_emlrtRTEI = { 66,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo km_emlrtRTEI = { 353,/* lineNo */
  13,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo mm_emlrtRTEI = { 388,/* lineNo */
  20,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo nm_emlrtRTEI = { 382,/* lineNo */
  17,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo om_emlrtRTEI = { 404,/* lineNo */
  14,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo pm_emlrtRTEI = { 464,/* lineNo */
  20,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRTEInfo qm_emlrtRTEI = { 455,/* lineNo */
  16,                                  /* colNo */
  "Markov_Switching",                  /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pName */
};

static emlrtRSInfo tl_emlrtRSI = { 17, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 45, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 129,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 131,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 134,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 141,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 148,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 248,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 249,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 44, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 46, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 132,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 149,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 150,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 142,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 143,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 136,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 128,/* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 82, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 66, /* lineNo */
  "Markov_Switching",                  /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 353,/* lineNo */
  "Filter",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo um_emlrtRSI = { 388,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 464,/* lineNo */
  "Gen_Sigma",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo wm_emlrtRSI = { 438,/* lineNo */
  "Gen_P",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 500,/* lineNo */
  "sgen",                              /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Markov_Switching.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 52, /* lineNo */
  "div",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/div.m"/* pathName */
};

/* Function Declarations */
static void Filter(const emlrtStack *sp, const emxArray_real_T *Y, const
                   emxArray_real_T *X, const emxArray_real_T *beta, const
                   emxArray_real_T *sig2, const emxArray_real_T *P, real_T
                   idenind, real_T s, emxArray_real_T *Filtpm, real_T *logLikel);
static void Gen_P(const emlrtStack *sp, real_T s, const emxArray_real_T *S,
                  real_T a0, real_T a1, real_T idenind, emxArray_real_T *P);
static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *X, const emxArray_real_T *S, const
                      emxArray_real_T *beta, emxArray_real_T *sig20, const
                      emxArray_real_T *alpha0, const emxArray_real_T *delta0,
                      real_T switchingind, real_T idenind, real_T s);
static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y, const
                     emxArray_real_T *X, const emxArray_real_T *S, const
                     emxArray_real_T *sig2, const emxArray_real_T *beta0, const
                     emxArray_real_T *B0, emxArray_real_T *beforebeta, real_T
                     switchingind, real_T idenind, const emxArray_real_T
                     *betaiden, real_T s);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [38]);
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
  emlrtMCInfo *location);
static void b_minus(const emlrtStack *sp, emxArray_real_T *ehat, const
                    emxArray_real_T *Y_);
static void b_plus(const emlrtStack *sp, emxArray_real_T *beta_, const
                   emxArray_real_T *r1);
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *candidate_S,
  const emxArray_boolean_T *S_plus);
static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *absY,
  emlrtRSInfo an_emlrtRSI, const emxArray_real_T *b_hat, const int32_T
  input_sizes[2], const int32_T sizes[2], const emxArray_real_T *sig2_hat, const
  int32_T b_input_sizes[2], const emxArray_real_T *vec_P, const emxArray_real_T *
  retf, const emxArray_real_T *r2, const emxArray_real_T *betam_);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37]);
static void c_plus(const emlrtStack *sp, emxArray_real_T *XX, const
                   emxArray_real_T *y);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *sig2,
  emlrtRSInfo an_emlrtRSI, real_T s, const emxArray_real_T *delta0, const
  emxArray_real_T *alpha0);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [11]);
static void d_plus(const emlrtStack *sp, emxArray_real_T *sig20, const
                   emxArray_real_T *test_sig2);
static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);
static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
  const emxArray_real_T *y, const emxArray_real_T *P);
static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6]);
static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *pstyn,
  const emxArray_real_T *F, int32_T t, const emxArray_real_T *Pcap, const
  emxArray_real_T *sm);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8]);
static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23]);
static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *N, const
  emxArray_real_T *countm, int32_T i, const emxArray_real_T *N_);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [17]);
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [31]);
static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *l_emlrt_marshallOut(const real_T u);
static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [28]);
static void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo an_emlrtRSI, const emxArray_real_T *y, const emxArray_real_T
  *B0inv);
static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *beforebeta,
  emlrtRSInfo an_emlrtRSI, real_T s, const emxArray_real_T *XX, const
  emxArray_real_T *r2);
static const mxArray *p_emlrt_marshallOut(void);
static void plus(const emlrtStack *sp, emxArray_real_T *beforebeta, const
                 emxArray_real_T *XX);
static void q_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X_, const
  emxArray_real_T *XY);
static void sgen(const emlrtStack *sp, const emxArray_real_T *F, const
                 emxArray_real_T *Pcap, emxArray_real_T *sm);
static void times(const emlrtStack *sp, emxArray_real_T *xt, const
                  emxArray_real_T *pdfm);

/* Function Definitions */
static void Filter(const emlrtStack *sp, const emxArray_real_T *Y, const
                   emxArray_real_T *X, const emxArray_real_T *beta, const
                   emxArray_real_T *sig2, const emxArray_real_T *P, real_T
                   idenind, real_T s, emxArray_real_T *Filtpm, real_T *logLikel)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *b_logLikel;
  emxArray_real_T *lnpdfm;
  emxArray_real_T *pdfm;
  emxArray_real_T *prb_tt;
  emxArray_real_T *varargin_1;
  emxArray_real_T *xt;
  emxArray_real_T *y;
  const real_T *P_data;
  const real_T *X_data;
  const real_T *Y_data;
  const real_T *beta_data;
  const real_T *sig2_data;
  real_T alpha1;
  real_T beta1;
  real_T *A_data;
  real_T *Filtpm_data;
  real_T *lnpdfm_data;
  real_T *logLikel_data;
  real_T *xt_data;
  int32_T b_input_sizes[2];
  int32_T input_sizes[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T loop_ub;
  int32_T result;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T sizes_idx_0;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  P_data = P->data;
  sig2_data = sig2->data;
  beta_data = beta->data;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  무조건부 분포의 도출 */
  emxInit_real_T(sp, &pdfm, 1, &rh_emlrtRTEI);
  emxInit_real_T(sp, &prb_tt, 1, &wh_emlrtRTEI);
  if (idenind == 3.0) {
    i = (int32_T)muDoubleScalarFloor(s);
    if (s != i) {
      emlrtIntegerCheckR2012b(s, &lb_emlrtDCI, (emlrtCTX)sp);
    }

    loop_ub = (int32_T)s;
    i1 = prb_tt->size[0];
    prb_tt->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, prb_tt, i1, &lh_emlrtRTEI);
    A_data = prb_tt->data;
    if (loop_ub != i) {
      emlrtIntegerCheckR2012b(s, &lb_emlrtDCI, (emlrtCTX)sp);
    }

    for (i = 0; i < loop_ub; i++) {
      A_data[i] = 0.0;
    }

    if (1.0 > s) {
      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)s, &td_emlrtBCI, (emlrtCTX)sp);
    }

    A_data[0] = 1.0;
  } else {
    emxInit_real_T(sp, &y, 2, &yh_emlrtRTEI);
    st.site = &dh_emlrtRSI;
    eye(&st, s, y);
    Filtpm_data = y->data;
    if ((y->size[0] != P->size[1]) && ((y->size[0] != 1) && (P->size[1] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(y->size[0], P->size[1], &r_emlrtECI, (emlrtCTX)
        sp);
    }

    if ((P->size[0] != y->size[1]) && ((y->size[1] != 1) && (P->size[0] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(y->size[1], P->size[0], &q_emlrtECI, (emlrtCTX)
        sp);
    }

    st.site = &dh_emlrtRSI;
    emxInit_real_T(&st, &varargin_1, 2, &mh_emlrtRTEI);
    if ((y->size[0] == P->size[1]) && (P->size[0] == y->size[1])) {
      i = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = y->size[0];
      varargin_1->size[1] = y->size[1];
      emxEnsureCapacity_real_T(&st, varargin_1, i, &mh_emlrtRTEI);
      lnpdfm_data = varargin_1->data;
      b_loop_ub = y->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        loop_ub = y->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          lnpdfm_data[i1 + varargin_1->size[0] * i] = Filtpm_data[i1 + y->size[0]
            * i] - P_data[i + P->size[0] * i1];
        }
      }
    } else {
      b_st.site = &dh_emlrtRSI;
      e_binary_expand_op(&b_st, varargin_1, y, P);
      lnpdfm_data = varargin_1->data;
    }

    i = (int32_T)muDoubleScalarFloor(s);
    if (s != i) {
      emlrtIntegerCheckR2012b(s, &kb_emlrtDCI, &st);
    }

    b_st.site = &lh_emlrtRSI;
    if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
      result = varargin_1->size[1];
    } else if (s != 0.0) {
      result = (int32_T)s;
    } else {
      result = varargin_1->size[1];
      i1 = (int32_T)s;
      if (i1 > varargin_1->size[1]) {
        result = i1;
      }
    }

    c_st.site = &mh_emlrtRSI;
    if ((varargin_1->size[1] != result) && ((varargin_1->size[0] != 0) &&
         (varargin_1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    b_loop_ub = (int32_T)s;
    if ((b_loop_ub != result) && (!(s == 0.0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((varargin_1->size[0] != 0) && (varargin_1->
          size[1] != 0))) {
      input_sizes[0] = varargin_1->size[0];
    } else {
      input_sizes[0] = 0;
    }

    if (empty_non_axis_sizes || (s != 0.0)) {
      sizes_idx_0 = 1;
    } else {
      sizes_idx_0 = 0;
    }

    emxInit_real_T(&b_st, &A, 2, &qh_emlrtRTEI);
    b_input_sizes[0] = input_sizes[0];
    i1 = A->size[0] * A->size[1];
    A->size[0] = b_input_sizes[0] + sizes_idx_0;
    A->size[1] = result;
    emxEnsureCapacity_real_T(&b_st, A, i1, &qh_emlrtRTEI);
    A_data = A->data;
    for (i1 = 0; i1 < result; i1++) {
      loop_ub = b_input_sizes[0];
      for (i3 = 0; i3 < loop_ub; i3++) {
        A_data[i3 + A->size[0] * i1] = lnpdfm_data[i3 + b_input_sizes[0] * i1];
      }
    }

    for (i1 = 0; i1 < result; i1++) {
      loop_ub = sizes_idx_0;
      for (i3 = 0; i3 < loop_ub; i3++) {
        A_data[b_input_sizes[0] + A->size[0] * i1] = 1.0;
      }
    }

    st.site = &eh_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    b_st.site = &vc_emlrtRSI;
    b_mtimes(&b_st, A, A, y);
    st.site = &eh_emlrtRSI;
    b_st.site = &eh_emlrtRSI;
    inv(&b_st, y, varargin_1);
    lnpdfm_data = varargin_1->data;
    b_st.site = &wc_emlrtRSI;
    if (varargin_1->size[1] != A->size[1]) {
      if (((varargin_1->size[0] == 1) && (varargin_1->size[1] == 1)) ||
          ((A->size[0] == 1) && (A->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &vc_emlrtRSI;
    if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0) || (A->size[0] ==
         0) || (A->size[1] == 0)) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = varargin_1->size[0];
      y->size[1] = A->size[0];
      emxEnsureCapacity_real_T(&b_st, y, i1, &uh_emlrtRTEI);
      Filtpm_data = y->data;
      loop_ub = varargin_1->size[0] * A->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Filtpm_data[i1] = 0.0;
      }
    } else {
      c_st.site = &xc_emlrtRSI;
      d_st.site = &yc_emlrtRSI;
      TRANSB1 = 'T';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)varargin_1->size[0];
      n_t = (ptrdiff_t)A->size[0];
      k_t = (ptrdiff_t)varargin_1->size[1];
      lda_t = (ptrdiff_t)varargin_1->size[0];
      ldb_t = (ptrdiff_t)A->size[0];
      ldc_t = (ptrdiff_t)varargin_1->size[0];
      i1 = y->size[0] * y->size[1];
      y->size[0] = varargin_1->size[0];
      y->size[1] = A->size[0];
      emxEnsureCapacity_real_T(&d_st, y, i1, &pg_emlrtRTEI);
      Filtpm_data = y->data;
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &lnpdfm_data[0],
            &lda_t, &A_data[0], &ldb_t, &beta1, &Filtpm_data[0], &ldc_t);
    }

    emxFree_real_T(&b_st, &varargin_1);
    emxFree_real_T(&b_st, &A);
    st.site = &eh_emlrtRSI;
    if (b_loop_ub != i) {
      emlrtIntegerCheckR2012b(s, &mb_emlrtDCI, &st);
    }

    i1 = pdfm->size[0];
    pdfm->size[0] = b_loop_ub + 1;
    emxEnsureCapacity_real_T(&st, pdfm, i1, &vh_emlrtRTEI);
    A_data = pdfm->data;
    if (b_loop_ub != i) {
      emlrtIntegerCheckR2012b(s, &mb_emlrtDCI, &st);
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      A_data[i1] = 0.0;
    }

    if (b_loop_ub != i) {
      emlrtIntegerCheckR2012b(s, &mb_emlrtDCI, &st);
    }

    A_data[b_loop_ub] = 1.0;
    b_st.site = &wc_emlrtRSI;
    if (pdfm->size[0] != y->size[1]) {
      if (((y->size[0] == 1) && (y->size[1] == 1)) || (pdfm->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &vc_emlrtRSI;
    c_mtimes(&b_st, y, pdfm, prb_tt);
    emxFree_real_T(sp, &y);
  }

  i = Filtpm->size[0] * Filtpm->size[1];
  Filtpm->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, Filtpm, i, &nh_emlrtRTEI);
  b_loop_ub = (int32_T)s;
  emxInit_real_T(sp, &lnpdfm, 1, &oh_emlrtRTEI);
  i = Filtpm->size[0] * Filtpm->size[1];
  Filtpm->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, Filtpm, i, &nh_emlrtRTEI);
  Filtpm_data = Filtpm->data;
  i = lnpdfm->size[0];
  lnpdfm->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, lnpdfm, i, &oh_emlrtRTEI);
  lnpdfm_data = lnpdfm->data;
  for (i = 0; i < b_loop_ub; i++) {
    lnpdfm_data[i] = 0.0;
  }

  emxInit_real_T(sp, &b_logLikel, 1, &xh_emlrtRTEI);

  /*  y의 조건부 밀도 */
  i = b_logLikel->size[0];
  b_logLikel->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, b_logLikel, i, &ph_emlrtRTEI);
  logLikel_data = b_logLikel->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    logLikel_data[i] = 0.0;
  }

  i = Y->size[0];
  if (0 <= Y->size[0] - 1) {
    i2 = b_loop_ub;
    if (0.0 <= b_loop_ub - 1) {
      i4 = X->size[1];
      c_loop_ub = X->size[1];
      i5 = beta->size[0];
      d_loop_ub = beta->size[0];
      i6 = beta->size[0];
    }

    b_input_sizes[0] = 1;
  }

  emxInit_real_T(sp, &xt, 1, &sh_emlrtRTEI);
  if (0 <= i - 1) {
    input_sizes[0] = 1;
  }

  for (result = 0; result < i; result++) {
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
      &gb_emlrtRTEI, (emlrtCTX)sp);
    for (loop_ub = 0; loop_ub < i2; loop_ub++) {
      if (result + 1 > Y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(result + 1, 1, Y->size[0], &xd_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (result + 1 > X->size[0]) {
        emlrtDynamicBoundsCheckR2012b(result + 1, 1, X->size[0], &wd_emlrtBCI,
          (emlrtCTX)sp);
      }

      i1 = xt->size[0];
      xt->size[0] = i4;
      emxEnsureCapacity_real_T(sp, xt, i1, &sh_emlrtRTEI);
      xt_data = xt->data;
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        xt_data[i1] = X_data[result + X->size[0] * i1];
      }

      st.site = &fh_emlrtRSI;
      if (((int32_T)(loop_ub + 1U) < 1) || ((int32_T)(loop_ub + 1U) > beta->
           size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 1U), 1, beta->size[1],
          &vd_emlrtBCI, &st);
      }

      i1 = pdfm->size[0];
      pdfm->size[0] = i5;
      emxEnsureCapacity_real_T(&st, pdfm, i1, &th_emlrtRTEI);
      A_data = pdfm->data;
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        A_data[i1] = beta_data[i1 + beta->size[0] * loop_ub];
      }

      b_st.site = &wc_emlrtRSI;
      if (xt->size[0] != i6) {
        if ((xt->size[0] == 1) || (beta->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      if (xt->size[0] < 1) {
        alpha1 = 0.0;
      } else {
        n_t = (ptrdiff_t)xt->size[0];
        m_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)1;
        alpha1 = ddot(&n_t, &xt_data[0], &m_t, &A_data[0], &k_t);
      }

      st.site = &fh_emlrtRSI;
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > sig2->size[0])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, sig2->size[0],
          &ud_emlrtBCI, &st);
      }

      /*  log pdf of normal */
      /*  x = normal variates */
      /*  mu = vector of means */
      /*  sig2vec = vector of variances */
      b_st.site = &nh_emlrtRSI;
      beta1 = 2.0 * sig2_data[loop_ub] * 3.1415926535897931;
      if (beta1 < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      beta1 = muDoubleScalarLog(beta1);
      alpha1 = Y_data[result] - alpha1;
      if (((int32_T)(loop_ub + 1U) < 1) || ((int32_T)(loop_ub + 1U) >
           lnpdfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 1U), 1, lnpdfm->size[0],
          &yd_emlrtBCI, &st);
      }

      lnpdfm_data[loop_ub] = -0.5 * beta1 - 0.5 * (alpha1 * alpha1) /
        sig2_data[loop_ub];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    st.site = &gh_emlrtRSI;
    b_loop_ub = lnpdfm->size[0];
    i1 = pdfm->size[0];
    pdfm->size[0] = lnpdfm->size[0];
    emxEnsureCapacity_real_T(&st, pdfm, i1, &rh_emlrtRTEI);
    A_data = pdfm->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      A_data[i1] = lnpdfm_data[i1];
    }

    b_st.site = &oh_emlrtRSI;
    i1 = lnpdfm->size[0];
    c_st.site = &ph_emlrtRSI;
    if ((1 <= lnpdfm->size[0]) && (lnpdfm->size[0] > 2147483646)) {
      d_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      A_data[loop_ub] = muDoubleScalarExp(A_data[loop_ub]);
    }

    /*  s by 1 */
    /*  예상 확률 */
    st.site = &hh_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    if (P->size[0] != prb_tt->size[0]) {
      if (((P->size[0] == 1) && (P->size[1] == 1)) || (prb_tt->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &vc_emlrtRSI;
    d_mtimes(&b_st, P, prb_tt, xt);
    xt_data = xt->data;
    if ((xt->size[0] != pdfm->size[0]) && ((xt->size[0] != 1) && (pdfm->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(xt->size[0], pdfm->size[0], &p_emlrtECI,
        (emlrtCTX)sp);
    }

    if (xt->size[0] == pdfm->size[0]) {
      b_loop_ub = xt->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        xt_data[i1] *= A_data[i1];
      }
    } else {
      st.site = &sm_emlrtRSI;
      times(&st, xt, pdfm);
      xt_data = xt->data;
    }

    /*  s by 1 */
    st.site = &ih_emlrtRSI;
    alpha1 = sum(&st, xt);

    /*  1 by 1 */
    i1 = prb_tt->size[0];
    prb_tt->size[0] = xt->size[0];
    emxEnsureCapacity_real_T(sp, prb_tt, i1, &wh_emlrtRTEI);
    A_data = prb_tt->data;
    b_loop_ub = xt->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      A_data[i1] = xt_data[i1] / alpha1;
    }

    /*  필터드 확률 */
    if (result + 1 > Filtpm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, Filtpm->size[0], &sd_emlrtBCI,
        (emlrtCTX)sp);
    }

    input_sizes[1] = Filtpm->size[1];
    b_loop_ub = prb_tt->size[0];
    b_input_sizes[1] = prb_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_input_sizes[0], 2,
      &o_emlrtECI, (emlrtCTX)sp);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Filtpm_data[result + Filtpm->size[0] * i1] = A_data[i1];
    }

    st.site = &jh_emlrtRSI;
    if (alpha1 < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &bb_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        3, "log");
    }

    if (result + 1 > b_logLikel->size[0]) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, b_logLikel->size[0],
        &ae_emlrtBCI, &st);
    }

    logLikel_data[result] = muDoubleScalarLog(alpha1);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &prb_tt);
  emxFree_real_T(sp, &pdfm);
  emxFree_real_T(sp, &xt);
  emxFree_real_T(sp, &lnpdfm);
  st.site = &kh_emlrtRSI;
  *logLikel = sum(&st, b_logLikel);
  emxFree_real_T(sp, &b_logLikel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_P(const emlrtStack *sp, real_T s, const emxArray_real_T *S,
                  real_T a0, real_T a1, real_T idenind, emxArray_real_T *P)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  emxArray_real_T *N;
  emxArray_real_T *N_;
  emxArray_real_T *countm;
  emxArray_real_T *countm_;
  real_T p[2];
  const real_T *S_data;
  real_T nreg;
  real_T y;
  real_T *N__data;
  real_T *N_data;
  real_T *countm__data;
  real_T *countm_data;
  int32_T b_s[2];
  int32_T iv[2];
  int32_T a;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T loop_ub;
  boolean_T b_p;
  boolean_T exitg1;
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
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  S_data = S->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &qi_emlrtRSI;

  /*  Counting the # of Regime switches */
  b_st.site = &vi_emlrtRSI;

  /*  function [mx,ind] = maxc(x) */
  c_st.site = &wi_emlrtRSI;
  d_st.site = &gi_emlrtRSI;
  e_st.site = &hi_emlrtRSI;
  f_st.site = &ii_emlrtRSI;
  if (S->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  g_st.site = &xi_emlrtRSI;
  last = S->size[0];
  if (S->size[0] <= 2) {
    if (S->size[0] == 1) {
      nreg = S_data[0];
    } else if ((S_data[0] < S_data[1]) || (muDoubleScalarIsNaN(S_data[0]) &&
                (!muDoubleScalarIsNaN(S_data[1])))) {
      nreg = S_data[1];
    } else {
      nreg = S_data[0];
    }
  } else {
    h_st.site = &yi_emlrtRSI;
    if (!muDoubleScalarIsNaN(S_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      i_st.site = &bj_emlrtRSI;
      if (S->size[0] > 2147483646) {
        j_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&j_st);
      }

      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(S_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      nreg = S_data[0];
    } else {
      h_st.site = &aj_emlrtRSI;
      nreg = S_data[idx - 1];
      a = idx + 1;
      i_st.site = &cj_emlrtRSI;
      if ((idx + 1 <= S->size[0]) && (S->size[0] > 2147483646)) {
        j_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&j_st);
      }

      for (k = a; k <= last; k++) {
        y = S_data[k - 1];
        if (nreg < y) {
          nreg = y;
        }
      }
    }
  }

  emxInit_real_T(&g_st, &countm_, 2, &ri_emlrtRTEI);

  /*  레짐의 수 */
  if (!(nreg >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nreg, &pb_emlrtDCI, &st);
  }

  i = (int32_T)muDoubleScalarFloor(nreg);
  if (nreg != i) {
    emlrtIntegerCheckR2012b(nreg, &ob_emlrtDCI, &st);
  }

  a = countm_->size[0] * countm_->size[1];
  countm_->size[0] = (int32_T)nreg;
  emxEnsureCapacity_real_T(&st, countm_, a, &ri_emlrtRTEI);
  if (nreg != i) {
    emlrtIntegerCheckR2012b(nreg, &qb_emlrtDCI, &st);
  }

  a = countm_->size[0] * countm_->size[1];
  i1 = (int32_T)nreg;
  countm_->size[1] = i1;
  emxEnsureCapacity_real_T(&st, countm_, a, &ri_emlrtRTEI);
  countm__data = countm_->data;
  if (nreg != nreg) {
    emlrtIntegerCheckR2012b(nreg, &tb_emlrtDCI, &st);
  }

  if (i1 != i) {
    emlrtIntegerCheckR2012b(nreg, &tb_emlrtDCI, &st);
  }

  idx = i1 * i1;
  for (i = 0; i < idx; i++) {
    countm__data[i] = 0.0;
  }

  /*  count를 저장할 방 */
  i = S->size[0];
  for (last = 0; last <= i - 2; last++) {
    if (last + 1 > S->size[0]) {
      emlrtDynamicBoundsCheckR2012b(last + 1, 1, S->size[0], &se_emlrtBCI, &st);
    }

    if (last + 2 > S->size[0]) {
      emlrtDynamicBoundsCheckR2012b(last + 2, 1, S->size[0], &re_emlrtBCI, &st);
    }

    a = (int32_T)S_data[last];
    if ((a < 1) || (a > countm_->size[0])) {
      emlrtDynamicBoundsCheckR2012b(a, 1, countm_->size[0], &ff_emlrtBCI, &st);
    }

    i1 = (int32_T)S_data[last + 1];
    if ((i1 < 1) || (i1 > countm_->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, countm_->size[1], &gf_emlrtBCI, &st);
    }

    if (a > countm_->size[0]) {
      emlrtDynamicBoundsCheckR2012b(a, 1, countm_->size[0], &hf_emlrtBCI, &st);
    }

    if (i1 > countm_->size[1]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, countm_->size[1], &if_emlrtBCI, &st);
    }

    countm__data[(a + countm_->size[0] * (i1 - 1)) - 1]++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxInit_real_T(&st, &countm, 2, &si_emlrtRTEI);

  /*  countm(i,j) = 상태 i에서 상태 j로 간 횟수 */
  i = (int32_T)muDoubleScalarFloor(s);
  if (s != i) {
    emlrtIntegerCheckR2012b(s, &rb_emlrtDCI, (emlrtCTX)sp);
  }

  a = (int32_T)s;
  i1 = countm->size[0] * countm->size[1];
  countm->size[0] = a;
  emxEnsureCapacity_real_T(sp, countm, i1, &si_emlrtRTEI);
  if (a != i) {
    emlrtIntegerCheckR2012b(s, &sb_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = countm->size[0] * countm->size[1];
  countm->size[1] = a;
  emxEnsureCapacity_real_T(sp, countm, i1, &si_emlrtRTEI);
  countm_data = countm->data;
  if (a != i) {
    emlrtIntegerCheckR2012b(s, &ub_emlrtDCI, (emlrtCTX)sp);
  }

  idx = a * a;
  for (i1 = 0; i1 < idx; i1++) {
    countm_data[i1] = 0.0;
  }

  if (1 > countm_->size[0]) {
    i1 = 0;
    k = 0;
  } else {
    if (1.0 > s) {
      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)s, &ef_emlrtBCI, (emlrtCTX)sp);
    }

    if (countm_->size[0] > a) {
      emlrtDynamicBoundsCheckR2012b(countm_->size[0], 1, (int32_T)s,
        &df_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = countm_->size[0];
    if (1.0 > s) {
      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)s, &cf_emlrtBCI, (emlrtCTX)sp);
    }

    if (countm_->size[0] > a) {
      emlrtDynamicBoundsCheckR2012b(countm_->size[0], 1, (int32_T)s,
        &bf_emlrtBCI, (emlrtCTX)sp);
    }

    k = countm_->size[0];
  }

  b_s[0] = i1;
  b_s[1] = k;
  emlrtSubAssignSizeCheckR2012b(&b_s[0], 2, &countm_->size[0], 2, &y_emlrtECI,
    (emlrtCTX)sp);
  idx = countm_->size[1];
  for (i1 = 0; i1 < idx; i1++) {
    last = countm_->size[0];
    for (k = 0; k < last; k++) {
      countm_data[k + countm->size[0] * i1] = countm__data[k + countm_->size[0] *
        i1];
    }
  }

  emxFree_real_T(sp, &countm_);
  if (idenind == 3.0) {
    st.site = &ri_emlrtRSI;
    eye(&st, s, P);
    countm__data = P->data;
    if (1 > P->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, P->size[0], &ue_emlrtBCI, (emlrtCTX)sp);
    }

    if (1 > countm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, countm->size[0], &af_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (1 > countm->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, countm->size[1], &ye_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (1 > countm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, countm->size[0], &xe_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (2 > countm->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, countm->size[1], &we_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &si_emlrtRSI;

    /*  random number generator : Dirichlet Dis  */
    b_st.site = &dj_emlrtRSI;
    c_st.site = &mf_emlrtRSI;
    d_st.site = &nf_emlrtRSI;
    e_st.site = &of_emlrtRSI;
    f_st.site = &pf_emlrtRSI;
    p[0] = scalar_randg(&f_st, countm_data[0] + a1);
    f_st.site = &pf_emlrtRSI;
    p[1] = scalar_randg(&f_st, countm_data[countm->size[0]] + a0);
    b_st.site = &ej_emlrtRSI;
    c_st.site = &rf_emlrtRSI;
    d_st.site = &bd_emlrtRSI;
    e_st.site = &sf_emlrtRSI;
    f_st.site = &tf_emlrtRSI;
    g_st.site = &uf_emlrtRSI;
    h_st.site = &vf_emlrtRSI;
    y = e_sumColumnB(p);
    p[0] /= y;
    p[1] /= y;
    last = P->size[1];
    if (1 > P->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, P->size[1], &qf_emlrtBCI, (emlrtCTX)sp);
    }

    countm__data[0] = p[0];
    if (2 > last) {
      emlrtDynamicBoundsCheckR2012b(2, 1, last, &qf_emlrtBCI, (emlrtCTX)sp);
    }

    countm__data[P->size[0]] = p[1];
    if (s > 2.0) {
      i = a - 2;
      emlrtForLoopVectorCheckR2021a(2.0, 1.0, s - 1.0, mxDOUBLE_CLASS, (int32_T)
        s - 2, &kb_emlrtRTEI, (emlrtCTX)sp);
      for (b_i = 0; b_i < i; b_i++) {
        st.site = &ti_emlrtRSI;
        if ((int32_T)(b_i + 2U) > countm->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, countm->size[0],
            &kf_emlrtBCI, &st);
        }

        if ((int32_T)(b_i + 2U) > countm->size[1]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, countm->size[1],
            &kf_emlrtBCI, &st);
        }

        if ((int32_T)(b_i + 2U) > countm->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, countm->size[0],
            &lf_emlrtBCI, &st);
        }

        if ((int32_T)(b_i + 3U) > countm->size[1]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 3U), 1, countm->size[1],
            &lf_emlrtBCI, &st);
        }

        /*  random number generator : Dirichlet Dis  */
        b_st.site = &dj_emlrtRSI;
        c_st.site = &mf_emlrtRSI;
        d_st.site = &nf_emlrtRSI;
        e_st.site = &of_emlrtRSI;
        f_st.site = &pf_emlrtRSI;
        p[0] = scalar_randg(&f_st, countm_data[(b_i + countm->size[0] * (b_i + 1))
                            + 1] + a1);
        f_st.site = &pf_emlrtRSI;
        p[1] = scalar_randg(&f_st, countm_data[(b_i + countm->size[0] * (b_i + 2))
                            + 1] + a0);
        b_st.site = &ej_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        d_st.site = &bd_emlrtRSI;
        e_st.site = &sf_emlrtRSI;
        f_st.site = &tf_emlrtRSI;
        g_st.site = &uf_emlrtRSI;
        h_st.site = &vf_emlrtRSI;
        y = e_sumColumnB(p);
        p[0] /= y;
        p[1] /= y;
        if ((int32_T)(b_i + 2U) > P->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P->size[0],
            &mf_emlrtBCI, (emlrtCTX)sp);
        }

        if ((int32_T)(b_i + 2U) > P->size[1]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P->size[1],
            &nf_emlrtBCI, (emlrtCTX)sp);
        }

        countm__data[(b_i + P->size[0] * (b_i + 1)) + 1] = p[0];
        if ((int32_T)(b_i + 2U) > P->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P->size[0],
            &of_emlrtBCI, (emlrtCTX)sp);
        }

        if ((int32_T)(b_i + 3U) > P->size[1]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 3U), 1, P->size[1],
            &pf_emlrtBCI, (emlrtCTX)sp);
        }

        countm__data[(b_i + P->size[0] * (b_i + 2)) + 1] = p[1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    }
  } else {
    if (a != i) {
      emlrtIntegerCheckR2012b(s, &vb_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = P->size[0] * P->size[1];
    P->size[0] = a;
    emxEnsureCapacity_real_T(sp, P, i1, &ti_emlrtRTEI);
    if (a != i) {
      emlrtIntegerCheckR2012b(s, &wb_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = P->size[0] * P->size[1];
    P->size[1] = a;
    emxEnsureCapacity_real_T(sp, P, i1, &ti_emlrtRTEI);
    countm__data = P->data;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
      &jb_emlrtRTEI, (emlrtCTX)sp);
    if (0.0 <= a - 1) {
      loop_ub = a;
      b_s[0] = 1;
      iv[0] = 1;
    }

    emxInit_real_T(sp, &N_, 1, &ui_emlrtRTEI);
    emxInit_real_T(sp, &N, 1, &vi_emlrtRTEI);
    for (b_i = 0; b_i < a; b_i++) {
      if (a != i) {
        emlrtIntegerCheckR2012b(s, &nb_emlrtDCI, (emlrtCTX)sp);
      }

      i1 = N_->size[0];
      N_->size[0] = a;
      emxEnsureCapacity_real_T(sp, N_, i1, &ui_emlrtRTEI);
      N__data = N_->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        N__data[i1] = a0;
      }

      if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > a)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, (int32_T)s,
          &jf_emlrtBCI, (emlrtCTX)sp);
      }

      N__data[b_i] = a1;
      if ((b_i + 1 < 1) || (b_i + 1 > countm->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, countm->size[0], &ve_emlrtBCI,
          (emlrtCTX)sp);
      }

      idx = countm->size[1];
      if ((N_->size[0] != countm->size[1]) && ((countm->size[1] != 1) &&
           (N_->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(countm->size[1], N_->size[0], &x_emlrtECI,
          (emlrtCTX)sp);
      }

      if (N_->size[0] == countm->size[1]) {
        i1 = N->size[0];
        N->size[0] = countm->size[1];
        emxEnsureCapacity_real_T(sp, N, i1, &vi_emlrtRTEI);
        N_data = N->data;
        for (i1 = 0; i1 < idx; i1++) {
          N_data[i1] = countm_data[b_i + countm->size[0] * i1] + N__data[i1];
        }
      } else {
        st.site = &wm_emlrtRSI;
        h_binary_expand_op(&st, N, countm, b_i, N_);
        N_data = N->data;
      }

      /*  n(i,j) + hyperparameter = 사후분포의 hyperparameter */
      if ((b_i + 1 < 1) || (b_i + 1 > P->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, P->size[0], &te_emlrtBCI,
          (emlrtCTX)sp);
      }

      st.site = &ui_emlrtRSI;

      /*  random number generator : Dirichlet Dis  */
      b_st.site = &dj_emlrtRSI;
      c_st.site = &mf_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      e_st.site = &of_emlrtRSI;
      f_st.site = &pf_emlrtRSI;
      g_st.site = &bh_emlrtRSI;
      i1 = muIntScalarMin_sint32(N->size[0], N->size[0]);
      last = muIntScalarMin_sint32(N->size[0], N->size[0]);
      h_st.site = &ch_emlrtRSI;
      b_p = true;
      if (last == N->size[0]) {
        if (last != N->size[0]) {
          b_p = false;
        }
      } else {
        b_p = false;
      }

      if (!b_p) {
        emlrtErrorWithMessageIdR2018a(&h_st, &fb_emlrtRTEI, "MATLAB:dimagree",
          "MATLAB:dimagree", 0);
      }

      k = N_->size[0];
      N_->size[0] = i1;
      emxEnsureCapacity_real_T(&f_st, N_, k, &jh_emlrtRTEI);
      N__data = N_->data;
      for (k = 0; k < i1; k++) {
        f_st.site = &pf_emlrtRSI;
        N__data[k] = scalar_randg(&f_st, N_data[k]);
      }

      b_st.site = &ej_emlrtRSI;
      y = sum(&b_st, N_);
      idx = N_->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        N__data[i1] /= y;
      }

      b_s[1] = P->size[1];
      iv[1] = N_->size[0];
      emlrtSubAssignSizeCheckR2012b(&b_s[0], 2, &iv[0], 2, &w_emlrtECI,
        (emlrtCTX)sp);
      idx = N_->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        countm__data[b_i + P->size[0] * i1] = N__data[i1];
      }

      /*  P의 사후분포에서의 sampling */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    emxFree_real_T(sp, &N);
    emxFree_real_T(sp, &N_);
  }

  emxFree_real_T(sp, &countm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *X, const emxArray_real_T *S, const
                      emxArray_real_T *beta, emxArray_real_T *sig20, const
                      emxArray_real_T *alpha0, const emxArray_real_T *delta0,
                      real_T switchingind, real_T idenind, real_T s)
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
  emxArray_boolean_T *varargin_1;
  emxArray_int32_T *r1;
  emxArray_real_T *X_;
  emxArray_real_T *Y_;
  emxArray_real_T *b;
  emxArray_real_T *b_beta;
  emxArray_real_T *ehat;
  emxArray_real_T *r;
  emxArray_real_T *test_sig2;
  const real_T *S_data;
  const real_T *X_data;
  const real_T *Y_data;
  const real_T *alpha0_data;
  const real_T *beta_data;
  const real_T *delta0_data;
  real_T b_b;
  real_T b_ehat;
  real_T c_i;
  real_T *X__data;
  real_T *Y__data;
  real_T *ehat_data;
  real_T *sig20_data;
  real_T *test_sig2_data;
  int32_T b_i;
  int32_T d_i;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T loop_ub_tmp;
  int32_T trueCount;
  int32_T *r2;
  boolean_T c_b;
  boolean_T isOK;
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
  delta0_data = delta0->data;
  alpha0_data = alpha0->data;
  sig20_data = sig20->data;
  beta_data = beta->data;
  S_data = S->data;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Y_, 1, &cm_emlrtRTEI);
  emxInit_real_T(sp, &X_, 2, &dm_emlrtRTEI);
  emxInit_real_T(sp, &ehat, 1, &vl_emlrtRTEI);
  emxInit_real_T(sp, &test_sig2, 1, &yl_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &am_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 1, &em_emlrtRTEI);
  emxInit_boolean_T(sp, &varargin_1, 1, &am_emlrtRTEI);
  emxInit_real_T(sp, &b, 2, &fm_emlrtRTEI);
  emxInit_real_T(sp, &b_beta, 1, &ul_emlrtRTEI);
  if ((switchingind == 2.0) || (switchingind == 3.0)) {
    i = (int32_T)-((-1.0 - s) + 1.0);
    emlrtForLoopVectorCheckR2021a(s, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-((-1.0
      - s) + 1.0), &xb_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < i; b_i++) {
      c_i = s + -(real_T)b_i;
      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          trueCount++;
        }
      }

      i1 = Y_->size[0];
      Y_->size[0] = trueCount;
      emxEnsureCapacity_real_T(sp, Y_, i1, &nl_emlrtRTEI);
      Y__data = Y_->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          if (d_i + 1 > Y->size[0]) {
            emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, Y->size[0], &ig_emlrtBCI,
              (emlrtCTX)sp);
          }

          Y__data[trueCount] = Y_data[d_i];
          trueCount++;
        }
      }

      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          trueCount++;
        }
      }

      i1 = r1->size[0];
      r1->size[0] = trueCount;
      emxEnsureCapacity_int32_T(sp, r1, i1, &nl_emlrtRTEI);
      r2 = r1->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          r2[trueCount] = d_i + 1;
          trueCount++;
        }
      }

      trueCount = r1->size[0];
      for (i1 = 0; i1 < trueCount; i1++) {
        if (r2[i1] > X->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r2[i1], 1, X->size[0], &kg_emlrtBCI,
            (emlrtCTX)sp);
        }
      }

      if (((int32_T)c_i < 1) || ((int32_T)c_i > beta->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, beta->size[1],
          &hg_emlrtBCI, (emlrtCTX)sp);
      }

      st.site = &df_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      trueCount = X->size[1];
      if (beta->size[0] != X->size[1]) {
        if (((r1->size[0] == 1) && (X->size[1] == 1)) || (beta->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      i1 = X_->size[0] * X_->size[1];
      X_->size[0] = r1->size[0];
      X_->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&st, X_, i1, &ql_emlrtRTEI);
      X__data = X_->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        end = r1->size[0];
        for (d_i = 0; d_i < end; d_i++) {
          X__data[d_i + X_->size[0] * i1] = X_data[(r2[d_i] + X->size[0] * i1) -
            1];
        }
      }

      trueCount = beta->size[0];
      i1 = b_beta->size[0];
      b_beta->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(&st, b_beta, i1, &sl_emlrtRTEI);
      X__data = b_beta->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        X__data[i1] = beta_data[i1 + beta->size[0] * ((int32_T)c_i - 1)];
      }

      b_st.site = &vc_emlrtRSI;
      c_mtimes(&b_st, X_, b_beta, ehat);
      trueCount = Y_->size[0];
      if ((Y_->size[0] != ehat->size[0]) && ((Y_->size[0] != 1) && (ehat->size[0]
            != 1))) {
        emlrtDimSizeImpxCheckR2021b(Y_->size[0], ehat->size[0], &wb_emlrtECI,
          (emlrtCTX)sp);
      }

      if (Y_->size[0] == ehat->size[0]) {
        i1 = ehat->size[0];
        ehat->size[0] = Y_->size[0];
        emxEnsureCapacity_real_T(sp, ehat, i1, &vl_emlrtRTEI);
        ehat_data = ehat->data;
        for (i1 = 0; i1 < trueCount; i1++) {
          ehat_data[i1] = Y__data[i1] - ehat_data[i1];
        }
      } else {
        st.site = &df_emlrtRSI;
        b_minus(&st, ehat, Y_);
        ehat_data = ehat->data;
      }

      st.site = &ef_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      if (ehat->size[0] < 1) {
        b_ehat = 0.0;
      } else {
        n_t = (ptrdiff_t)ehat->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        b_ehat = ddot(&n_t, &ehat_data[0], &incx_t, &ehat_data[0], &incy_t);
      }

      if (((int32_T)c_i < 1) || ((int32_T)c_i > delta0->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, delta0->size[0],
          &gg_emlrtBCI, (emlrtCTX)sp);
      }

      if (((int32_T)c_i < 1) || ((int32_T)c_i > alpha0->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, alpha0->size[0],
          &fg_emlrtBCI, (emlrtCTX)sp);
      }

      st.site = &ff_emlrtRSI;

      /*  Note that */
      /*  Suppose that x = randig(alpha,beta,1,1) */
      /*  E(x) = beta/(alpha-1) */
      /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
      b_st.site = &kf_emlrtRSI;

      /*  Note that */
      /*  Suppose that x = randgam(alpha,beta,1,1) */
      /*  E(x) = alpha/beta */
      /*  Var(x) = alpha/(beta^2) */
      /*  Notice that in matlab alpha = a and beta = 1/b */
      b_b = 1.0 / ((delta0_data[(int32_T)c_i - 1] + b_ehat) / 2.0);
      c_st.site = &lf_emlrtRSI;
      d_st.site = &mf_emlrtRSI;
      e_st.site = &nf_emlrtRSI;
      f_st.site = &of_emlrtRSI;
      g_st.site = &pf_emlrtRSI;
      b_ehat = scalar_randg(&g_st, (alpha0_data[(int32_T)c_i - 1] + (real_T)
        r1->size[0]) / 2.0);
      b_ehat *= b_b;
      if (b_b < 0.0) {
        b_ehat = rtNaN;
      }

      b_ehat = 1.0 / b_ehat;
      if (idenind == 2.0) {
        i1 = test_sig2->size[0];
        test_sig2->size[0] = sig20->size[0];
        emxEnsureCapacity_real_T(sp, test_sig2, i1, &yl_emlrtRTEI);
        test_sig2_data = test_sig2->data;
        trueCount = sig20->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          test_sig2_data[i1] = sig20_data[i1];
        }

        i1 = sig20->size[0];
        if (((int32_T)c_i < 1) || ((int32_T)c_i > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &og_emlrtBCI,
            (emlrtCTX)sp);
        }

        test_sig2_data[(int32_T)c_i - 1] = b_ehat;
        st.site = &gf_emlrtRSI;
        b_st.site = &gf_emlrtRSI;
        diff(&b_st, test_sig2, r);
        X__data = r->data;
        i1 = varargin_1->size[0];
        varargin_1->size[0] = r->size[0];
        emxEnsureCapacity_boolean_T(&st, varargin_1, i1, &am_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        trueCount = r->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          varargin_1_data[i1] = (X__data[i1] >= 0.0);
        }

        b_st.site = &we_emlrtRSI;
        c_st.site = &xe_emlrtRSI;
        d_st.site = &ye_emlrtRSI;
        if (varargin_1->size[0] < 1) {
          emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        e_st.site = &af_emlrtRSI;
        trueCount = varargin_1->size[0];
        f_st.site = &bf_emlrtRSI;
        isOK = varargin_1_data[0];
        g_st.site = &cf_emlrtRSI;
        if ((2 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
          h_st.site = &ub_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (end = 2; end <= trueCount; end++) {
          c_b = varargin_1_data[end - 1];
          isOK = (((int32_T)isOK <= (int32_T)c_b) && isOK);
        }

        /*  1 이면 제약 만족, 0 이면 제약 불만족 */
        trueCount = test_sig2->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          test_sig2_data[i1] *= (real_T)isOK;
        }

        trueCount = sig20->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          sig20_data[i1] *= 1.0 - (real_T)isOK;
        }

        i1 = sig20->size[0];
        if ((test_sig2->size[0] != i1) && ((test_sig2->size[0] != 1) && (i1 != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(test_sig2->size[0], i1, &vb_emlrtECI,
            (emlrtCTX)sp);
        }

        if (test_sig2->size[0] == sig20->size[0]) {
          i1 = sig20->size[0];
          sig20->size[0] = test_sig2->size[0];
          emxEnsureCapacity_real_T(sp, sig20, i1, &bm_emlrtRTEI);
          sig20_data = sig20->data;
          trueCount = test_sig2->size[0];
          for (i1 = 0; i1 < trueCount; i1++) {
            sig20_data[i1] += test_sig2_data[i1];
          }
        } else {
          st.site = &vm_emlrtRSI;
          d_plus(&st, sig20, test_sig2);
          sig20_data = sig20->data;
        }

        /*  식별제약 만족여부 확인 */
      } else {
        i1 = sig20->size[0];
        if (((int32_T)c_i < 1) || ((int32_T)c_i > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &ng_emlrtBCI,
            (emlrtCTX)sp);
        }

        sig20_data[(int32_T)c_i - 1] = b_ehat;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  } else if (switchingind == 1.0) {
    i = (int32_T)muDoubleScalarFloor(s);
    if (s != i) {
      emlrtIntegerCheckR2012b(s, &yb_emlrtDCI, (emlrtCTX)sp);
    }

    loop_ub_tmp = (int32_T)s;
    i1 = ehat->size[0];
    ehat->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, ehat, i1, &ml_emlrtRTEI);
    ehat_data = ehat->data;
    if (loop_ub_tmp != i) {
      emlrtIntegerCheckR2012b(s, &yb_emlrtDCI, (emlrtCTX)sp);
    }

    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      ehat_data[i1] = 0.0;
    }

    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
      &wb_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 1.0) {
          trueCount++;
        }
      }

      i1 = Y_->size[0];
      Y_->size[0] = trueCount;
      emxEnsureCapacity_real_T(sp, Y_, i1, &nl_emlrtRTEI);
      Y__data = Y_->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 1.0) {
          if (d_i + 1 > Y->size[0]) {
            emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, Y->size[0], &jg_emlrtBCI,
              (emlrtCTX)sp);
          }

          Y__data[trueCount] = Y_data[d_i];
          trueCount++;
        }
      }

      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 1.0) {
          trueCount++;
        }
      }

      i1 = r1->size[0];
      r1->size[0] = trueCount;
      emxEnsureCapacity_int32_T(sp, r1, i1, &nl_emlrtRTEI);
      r2 = r1->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 1.0) {
          r2[trueCount] = d_i + 1;
          trueCount++;
        }
      }

      trueCount = X->size[1];
      i1 = X_->size[0] * X_->size[1];
      X_->size[0] = r1->size[0];
      X_->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, X_, i1, &pl_emlrtRTEI);
      X__data = X_->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        end = r1->size[0];
        for (d_i = 0; d_i < end; d_i++) {
          if (r2[d_i] > X->size[0]) {
            emlrtDynamicBoundsCheckR2012b(r2[d_i], 1, X->size[0], &lg_emlrtBCI,
              (emlrtCTX)sp);
          }

          X__data[d_i + X_->size[0] * i1] = X_data[(r2[d_i] + X->size[0] * i1) -
            1];
        }
      }

      if ((b_i + 1 < 1) || (b_i + 1 > beta->size[1])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, beta->size[1], &eg_emlrtBCI,
          (emlrtCTX)sp);
      }

      st.site = &hf_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      trueCount = beta->size[0];
      if (beta->size[0] != X->size[1]) {
        if (((r1->size[0] == 1) && (X->size[1] == 1)) || (beta->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      i1 = b_beta->size[0];
      b_beta->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(&st, b_beta, i1, &ul_emlrtRTEI);
      X__data = b_beta->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        X__data[i1] = beta_data[i1 + beta->size[0] * b_i];
      }

      b_st.site = &vc_emlrtRSI;
      c_mtimes(&b_st, X_, b_beta, r);
      if ((Y_->size[0] != r->size[0]) && ((Y_->size[0] != 1) && (r->size[0] != 1)))
      {
        emlrtDimSizeImpxCheckR2021b(Y_->size[0], r->size[0], &ub_emlrtECI,
          (emlrtCTX)sp);
      }

      st.site = &hf_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      trueCount = beta->size[0];
      if (beta->size[0] != X->size[1]) {
        if (((r1->size[0] == 1) && (X->size[1] == 1)) || (beta->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      i1 = b_beta->size[0];
      b_beta->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(&st, b_beta, i1, &ul_emlrtRTEI);
      X__data = b_beta->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        X__data[i1] = beta_data[i1 + beta->size[0] * b_i];
      }

      b_st.site = &vc_emlrtRSI;
      c_mtimes(&b_st, X_, b_beta, test_sig2);
      trueCount = Y_->size[0];
      if ((Y_->size[0] != test_sig2->size[0]) && ((Y_->size[0] != 1) &&
           (test_sig2->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(Y_->size[0], test_sig2->size[0],
          &tb_emlrtECI, (emlrtCTX)sp);
      }

      if (Y_->size[0] == r->size[0]) {
        i1 = r->size[0];
        r->size[0] = Y_->size[0];
        emxEnsureCapacity_real_T(sp, r, i1, &wl_emlrtRTEI);
        X__data = r->data;
        for (i1 = 0; i1 < trueCount; i1++) {
          X__data[i1] = Y__data[i1] - X__data[i1];
        }
      } else {
        st.site = &hf_emlrtRSI;
        b_minus(&st, r, Y_);
        X__data = r->data;
      }

      st.site = &hf_emlrtRSI;
      trueCount = Y_->size[0];
      if (Y_->size[0] == test_sig2->size[0]) {
        i1 = test_sig2->size[0];
        test_sig2->size[0] = Y_->size[0];
        emxEnsureCapacity_real_T(&st, test_sig2, i1, &xl_emlrtRTEI);
        test_sig2_data = test_sig2->data;
        for (i1 = 0; i1 < trueCount; i1++) {
          test_sig2_data[i1] = Y__data[i1] - test_sig2_data[i1];
        }
      } else {
        b_st.site = &hf_emlrtRSI;
        b_minus(&b_st, test_sig2, Y_);
        test_sig2_data = test_sig2->data;
      }

      b_st.site = &wc_emlrtRSI;
      if (r->size[0] != test_sig2->size[0]) {
        if ((r->size[0] == 1) || (test_sig2->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      if (r->size[0] < 1) {
        if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > ehat->size[0]))
        {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, ehat->size[0],
            &mg_emlrtBCI, &st);
        }

        ehat_data[b_i] = 0.0;
      } else {
        n_t = (ptrdiff_t)r->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > ehat->size[0]))
        {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, ehat->size[0],
            &mg_emlrtBCI, &st);
        }

        ehat_data[b_i] = ddot(&n_t, &X__data[0], &incx_t, &test_sig2_data[0],
                              &incy_t);
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    st.site = &if_emlrtRSI;
    b_ehat = sum(&st, ehat);
    st.site = &jf_emlrtRSI;

    /*  Note that */
    /*  Suppose that x = randig(alpha,beta,1,1) */
    /*  E(x) = beta/(alpha-1) */
    /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
    b_st.site = &kf_emlrtRSI;

    /*  Note that */
    /*  Suppose that x = randgam(alpha,beta,1,1) */
    /*  E(x) = alpha/beta */
    /*  Var(x) = alpha/(beta^2) */
    /*  Notice that in matlab alpha = a and beta = 1/b */
    c_st.site = &fg_emlrtRSI;
    i1 = ehat->size[0];
    ehat->size[0] = delta0->size[0];
    emxEnsureCapacity_real_T(&c_st, ehat, i1, &ol_emlrtRTEI);
    ehat_data = ehat->data;
    trueCount = delta0->size[0];
    for (i1 = 0; i1 < trueCount; i1++) {
      ehat_data[i1] = (delta0_data[i1] + b_ehat) / 2.0;
    }

    d_st.site = &gg_emlrtRSI;
    mrdiv(&d_st, ehat, b);
    i1 = ehat->size[0];
    ehat->size[0] = alpha0->size[0];
    emxEnsureCapacity_real_T(&b_st, ehat, i1, &rl_emlrtRTEI);
    ehat_data = ehat->data;
    trueCount = alpha0->size[0];
    for (i1 = 0; i1 < trueCount; i1++) {
      ehat_data[i1] = (alpha0_data[i1] + (real_T)Y->size[0]) / 2.0;
    }

    c_st.site = &lf_emlrtRSI;
    b_ehat = gamrnd(&c_st, ehat, b);
    b_ehat = 1.0 / b_ehat;
    if (loop_ub_tmp != i) {
      emlrtIntegerCheckR2012b(s, &ac_emlrtDCI, (emlrtCTX)sp);
    }

    i = sig20->size[0];
    sig20->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, sig20, i, &tl_emlrtRTEI);
    sig20_data = sig20->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      sig20_data[i] = b_ehat;
    }
  }

  emxFree_real_T(sp, &b_beta);
  emxFree_real_T(sp, &b);
  emxFree_boolean_T(sp, &varargin_1);
  emxFree_int32_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &test_sig2);
  emxFree_real_T(sp, &ehat);
  emxFree_real_T(sp, &X_);
  emxFree_real_T(sp, &Y_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y, const
                     emxArray_real_T *X, const emxArray_real_T *S, const
                     emxArray_real_T *sig2, const emxArray_real_T *beta0, const
                     emxArray_real_T *B0, emxArray_real_T *beforebeta, real_T
                     switchingind, real_T idenind, const emxArray_real_T
                     *betaiden, real_T s)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_boolean_T *varargin_1;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *B0inv;
  emxArray_real_T *B1;
  emxArray_real_T *XX;
  emxArray_real_T *XY;
  emxArray_real_T *X_;
  emxArray_real_T *Y_;
  emxArray_real_T *b_XX;
  emxArray_real_T *b_y;
  emxArray_real_T *beta_;
  emxArray_real_T *r;
  emxArray_real_T *y;
  const real_T *S_data;
  const real_T *X_data;
  const real_T *Y_data;
  const real_T *beta0_data;
  const real_T *sig2_data;
  real_T c_i;
  real_T sig2inv;
  real_T *B0inv_data;
  real_T *XX_data;
  real_T *XY_data;
  real_T *Y__data;
  real_T *b_XX_data;
  real_T *beforebeta_data;
  real_T *r4;
  real_T *y_data;
  int32_T b_i;
  int32_T d_i;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T trueCount;
  int32_T *r3;
  boolean_T b;
  boolean_T isOK;
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
  beforebeta_data = beforebeta->data;
  beta0_data = beta0->data;
  sig2_data = sig2->data;
  S_data = S->data;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &B0inv, 2, &yk_emlrtRTEI);
  st.site = &ed_emlrtRSI;
  inv(&st, B0, B0inv);
  B0inv_data = B0inv->data;

  /*  number of columns */
  emxInit_real_T(sp, &Y_, 1, &al_emlrtRTEI);
  emxInit_real_T(sp, &X_, 2, &jk_emlrtRTEI);
  emxInit_real_T(sp, &B1, 2, &bl_emlrtRTEI);
  emxInit_real_T(sp, &XX, 2, &cl_emlrtRTEI);
  emxInit_real_T(sp, &XY, 1, &dl_emlrtRTEI);
  emxInit_real_T(sp, &beta_, 1, &el_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &wk_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 1, &fl_emlrtRTEI);
  emxInit_int32_T(sp, &r2, 1, &gl_emlrtRTEI);
  emxInit_real_T(sp, &y, 2, &hl_emlrtRTEI);
  emxInit_real_T(sp, &b_y, 2, &il_emlrtRTEI);
  emxInit_boolean_T(sp, &varargin_1, 1, &wk_emlrtRTEI);
  emxInit_real_T(sp, &b_XX, 2, &mk_emlrtRTEI);
  if ((switchingind == 1.0) || (switchingind == 3.0)) {
    i = (int32_T)-((-1.0 - s) + 1.0);
    emlrtForLoopVectorCheckR2021a(s, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-((-1.0
      - s) + 1.0), &sb_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < i; b_i++) {
      c_i = s + -(real_T)b_i;
      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          trueCount++;
        }
      }

      i1 = Y_->size[0];
      Y_->size[0] = trueCount;
      emxEnsureCapacity_real_T(sp, Y_, i1, &hk_emlrtRTEI);
      Y__data = Y_->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          if (d_i + 1 > Y->size[0]) {
            emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, Y->size[0], &wf_emlrtBCI,
              (emlrtCTX)sp);
          }

          Y__data[trueCount] = Y_data[d_i];
          trueCount++;
        }
      }

      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          trueCount++;
        }
      }

      i1 = r1->size[0];
      r1->size[0] = trueCount;
      emxEnsureCapacity_int32_T(sp, r1, i1, &hk_emlrtRTEI);
      r3 = r1->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == c_i) {
          r3[trueCount] = d_i + 1;
          trueCount++;
        }
      }

      trueCount = X->size[1];
      i1 = X_->size[0] * X_->size[1];
      X_->size[0] = r1->size[0];
      X_->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, X_, i1, &jk_emlrtRTEI);
      Y__data = X_->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        end = r1->size[0];
        for (d_i = 0; d_i < end; d_i++) {
          if (r3[d_i] > X->size[0]) {
            emlrtDynamicBoundsCheckR2012b(r3[d_i], 1, X->size[0], &yf_emlrtBCI,
              (emlrtCTX)sp);
          }

          Y__data[d_i + X_->size[0] * i1] = X_data[(r3[d_i] + X->size[0] * i1) -
            1];
        }
      }

      if (((int32_T)c_i < 1) || ((int32_T)c_i > sig2->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, sig2->size[0],
          &ag_emlrtBCI, (emlrtCTX)sp);
      }

      sig2inv = 1.0 / sig2_data[(int32_T)c_i - 1];
      st.site = &fd_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      b_dynamic_size_checks(&b_st, X_, X_, r1->size[0], r1->size[0]);
      b_st.site = &vc_emlrtRSI;
      b_mtimes(&b_st, X_, X_, y);
      y_data = y->data;
      trueCount = y->size[0] * y->size[1];
      for (i1 = 0; i1 < trueCount; i1++) {
        y_data[i1] *= sig2inv;
      }

      if ((y->size[0] != B0inv->size[0]) && ((y->size[0] != 1) && (B0inv->size[0]
            != 1))) {
        emlrtDimSizeImpxCheckR2021b(y->size[0], B0inv->size[0], &eb_emlrtECI,
          (emlrtCTX)sp);
      }

      if ((y->size[1] != B0inv->size[1]) && ((y->size[1] != 1) && (B0inv->size[1]
            != 1))) {
        emlrtDimSizeImpxCheckR2021b(y->size[1], B0inv->size[1], &fb_emlrtECI,
          (emlrtCTX)sp);
      }

      if ((y->size[0] == B0inv->size[0]) && (y->size[1] == B0inv->size[1])) {
        i1 = b_XX->size[0] * b_XX->size[1];
        b_XX->size[0] = y->size[0];
        b_XX->size[1] = y->size[1];
        emxEnsureCapacity_real_T(sp, b_XX, i1, &lk_emlrtRTEI);
        b_XX_data = b_XX->data;
        trueCount = y->size[0] * y->size[1];
        for (i1 = 0; i1 < trueCount; i1++) {
          b_XX_data[i1] = y_data[i1] + B0inv_data[i1];
        }

        st.site = &gd_emlrtRSI;
        inv(&st, b_XX, B1);
        XX_data = B1->data;
      } else {
        st.site = &gd_emlrtRSI;
        o_binary_expand_op(&st, B1, gd_emlrtRSI, y, B0inv);
        XX_data = B1->data;
      }

      i1 = y->size[0] * y->size[1];
      y->size[0] = X_->size[1];
      y->size[1] = X_->size[0];
      emxEnsureCapacity_real_T(sp, y, i1, &kk_emlrtRTEI);
      y_data = y->data;
      trueCount = X_->size[0];
      for (i1 = 0; i1 < trueCount; i1++) {
        end = X_->size[1];
        for (d_i = 0; d_i < end; d_i++) {
          y_data[d_i + y->size[0] * i1] = sig2inv * Y__data[i1 + X_->size[0] *
            d_i];
        }
      }

      st.site = &hd_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      c_dynamic_size_checks(&b_st, y, Y_, y->size[1], Y_->size[0]);
      b_st.site = &vc_emlrtRSI;
      c_mtimes(&b_st, y, Y_, XY);
      XY_data = XY->data;
      st.site = &hd_emlrtRSI;
      if (((int32_T)c_i < 1) || ((int32_T)c_i > beta0->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, beta0->size[1],
          &rf_emlrtBCI, &st);
      }

      trueCount = beta0->size[0];
      i1 = beta_->size[0];
      beta_->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(&st, beta_, i1, &nk_emlrtRTEI);
      Y__data = beta_->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        Y__data[i1] = beta0_data[i1 + beta0->size[0] * ((int32_T)c_i - 1)];
      }

      b_st.site = &wc_emlrtRSI;
      c_dynamic_size_checks(&b_st, B0inv, beta_, B0inv->size[1], beta0->size[0]);
      trueCount = beta0->size[0];
      i1 = beta_->size[0];
      beta_->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(&st, beta_, i1, &nk_emlrtRTEI);
      Y__data = beta_->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        Y__data[i1] = beta0_data[i1 + beta0->size[0] * ((int32_T)c_i - 1)];
      }

      b_st.site = &vc_emlrtRSI;
      c_mtimes(&b_st, B0inv, beta_, r);
      r4 = r->data;
      if ((XY->size[0] != r->size[0]) && ((XY->size[0] != 1) && (r->size[0] != 1)))
      {
        emlrtDimSizeImpxCheckR2021b(XY->size[0], r->size[0], &gb_emlrtECI,
          (emlrtCTX)sp);
      }

      if (XY->size[0] == r->size[0]) {
        trueCount = XY->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          XY_data[i1] += r4[i1];
        }
      } else {
        st.site = &hd_emlrtRSI;
        b_plus(&st, XY, r);
      }

      st.site = &id_emlrtRSI;
      i1 = y->size[0] * y->size[1];
      y->size[0] = B1->size[0];
      y->size[1] = B1->size[1];
      emxEnsureCapacity_real_T(&st, y, i1, &pk_emlrtRTEI);
      y_data = y->data;
      trueCount = B1->size[0] * B1->size[1];
      for (i1 = 0; i1 < trueCount; i1++) {
        y_data[i1] = XX_data[i1];
      }

      b_st.site = &oe_emlrtRSI;
      cholesky(&b_st, y);
      st.site = &id_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      c_dynamic_size_checks(&b_st, B1, XY, B1->size[1], XY->size[0]);
      b_st.site = &vc_emlrtRSI;
      c_mtimes(&b_st, B1, XY, beta_);
      Y__data = beta_->data;
      st.site = &id_emlrtRSI;
      b_st.site = &id_emlrtRSI;
      randn(&b_st, X->size[1], XY);
      b_st.site = &wc_emlrtRSI;
      c_dynamic_size_checks(&b_st, y, XY, y->size[0], XY->size[0]);
      b_st.site = &vc_emlrtRSI;
      d_mtimes(&b_st, y, XY, r);
      r4 = r->data;
      if ((beta_->size[0] != r->size[0]) && ((beta_->size[0] != 1) && (r->size[0]
            != 1))) {
        emlrtDimSizeImpxCheckR2021b(beta_->size[0], r->size[0], &hb_emlrtECI,
          (emlrtCTX)sp);
      }

      if (beta_->size[0] == r->size[0]) {
        trueCount = beta_->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          Y__data[i1] += r4[i1];
        }
      } else {
        st.site = &id_emlrtRSI;
        b_plus(&st, beta_, r);
        Y__data = beta_->data;
      }

      if (idenind == 1.0) {
        i1 = XX->size[0] * XX->size[1];
        XX->size[0] = beforebeta->size[0];
        XX->size[1] = beforebeta->size[1];
        emxEnsureCapacity_real_T(sp, XX, i1, &uk_emlrtRTEI);
        XX_data = XX->data;
        trueCount = beforebeta->size[0] * beforebeta->size[1];
        for (i1 = 0; i1 < trueCount; i1++) {
          XX_data[i1] = beforebeta_data[i1];
        }

        i1 = beforebeta->size[1];
        if (((int32_T)c_i < 1) || ((int32_T)c_i > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &sf_emlrtBCI,
            (emlrtCTX)sp);
        }

        emlrtSubAssignSizeCheckR2012b(&beforebeta->size[0], 1, &beta_->size[0],
          1, &ib_emlrtECI, (emlrtCTX)sp);
        trueCount = beta_->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          XX_data[i1 + XX->size[0] * ((int32_T)c_i - 1)] = Y__data[i1];
        }

        st.site = &jd_emlrtRSI;
        b_st.site = &wc_emlrtRSI;
        dynamic_size_checks(&b_st, betaiden, XX, betaiden->size[1], XX->size[0]);
        b_st.site = &vc_emlrtRSI;
        mtimes(&b_st, betaiden, XX, b_y);
        y_data = b_y->data;
        st.site = &jd_emlrtRSI;
        i1 = beta_->size[0];
        beta_->size[0] = b_y->size[1];
        emxEnsureCapacity_real_T(&st, beta_, i1, &vk_emlrtRTEI);
        Y__data = beta_->data;
        trueCount = b_y->size[1];
        for (i1 = 0; i1 < trueCount; i1++) {
          Y__data[i1] = y_data[i1];
        }

        b_st.site = &jd_emlrtRSI;
        diff(&b_st, beta_, r);
        r4 = r->data;
        i1 = varargin_1->size[0];
        varargin_1->size[0] = r->size[0];
        emxEnsureCapacity_boolean_T(&st, varargin_1, i1, &wk_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        trueCount = r->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          varargin_1_data[i1] = (r4[i1] >= 0.0);
        }

        b_st.site = &we_emlrtRSI;
        c_st.site = &xe_emlrtRSI;
        d_st.site = &ye_emlrtRSI;
        if (varargin_1->size[0] < 1) {
          emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        e_st.site = &af_emlrtRSI;
        trueCount = varargin_1->size[0];
        f_st.site = &bf_emlrtRSI;
        isOK = varargin_1_data[0];
        g_st.site = &cf_emlrtRSI;
        if ((2 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
          h_st.site = &ub_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (end = 2; end <= trueCount; end++) {
          b = varargin_1_data[end - 1];
          isOK = (((int32_T)isOK <= (int32_T)b) && isOK);
        }

        /*  1 이면 제약 만족, 0 이면 제약 불만족 */
        trueCount = XX->size[0] * XX->size[1];
        for (i1 = 0; i1 < trueCount; i1++) {
          XX_data[i1] *= (real_T)isOK;
        }

        trueCount = beforebeta->size[1];
        for (i1 = 0; i1 < trueCount; i1++) {
          end = beforebeta->size[0];
          for (d_i = 0; d_i < end; d_i++) {
            beforebeta_data[d_i + beforebeta->size[0] * i1] *= 1.0 - (real_T)
              isOK;
          }
        }

        i1 = beforebeta->size[0];
        if ((XX->size[0] != i1) && ((XX->size[0] != 1) && (i1 != 1))) {
          emlrtDimSizeImpxCheckR2021b(XX->size[0], i1, &jb_emlrtECI, (emlrtCTX)
            sp);
        }

        i1 = beforebeta->size[1];
        if ((XX->size[1] != i1) && ((XX->size[1] != 1) && (i1 != 1))) {
          emlrtDimSizeImpxCheckR2021b(XX->size[1], i1, &kb_emlrtECI, (emlrtCTX)
            sp);
        }

        if ((XX->size[0] == beforebeta->size[0]) && (XX->size[1] ==
             beforebeta->size[1])) {
          i1 = beforebeta->size[0] * beforebeta->size[1];
          beforebeta->size[0] = XX->size[0];
          beforebeta->size[1] = XX->size[1];
          emxEnsureCapacity_real_T(sp, beforebeta, i1, &xk_emlrtRTEI);
          beforebeta_data = beforebeta->data;
          trueCount = XX->size[1];
          for (i1 = 0; i1 < trueCount; i1++) {
            end = XX->size[0];
            for (d_i = 0; d_i < end; d_i++) {
              beforebeta_data[d_i + beforebeta->size[0] * i1] += XX_data[d_i +
                XX->size[0] * i1];
            }
          }
        } else {
          st.site = &um_emlrtRSI;
          plus(&st, beforebeta, XX);
          beforebeta_data = beforebeta->data;
        }

        /*  식별제약 만족여부 확인 */
      } else {
        i1 = beforebeta->size[1];
        if (((int32_T)c_i < 1) || ((int32_T)c_i > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &tf_emlrtBCI,
            (emlrtCTX)sp);
        }

        emlrtSubAssignSizeCheckR2012b(&beforebeta->size[0], 1, &beta_->size[0],
          1, &lb_emlrtECI, (emlrtCTX)sp);
        trueCount = beta_->size[0];
        for (i1 = 0; i1 < trueCount; i1++) {
          beforebeta_data[i1 + beforebeta->size[0] * ((int32_T)c_i - 1)] =
            Y__data[i1];
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  } else if (switchingind == 2.0) {
    end = S->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (S_data[b_i] == 1.0) {
        trueCount++;
      }
    }

    i = Y_->size[0];
    Y_->size[0] = trueCount;
    emxEnsureCapacity_real_T(sp, Y_, i, &hk_emlrtRTEI);
    Y__data = Y_->data;
    trueCount = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (S_data[b_i] == 1.0) {
        if (b_i + 1 > Y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Y->size[0], &vf_emlrtBCI,
            (emlrtCTX)sp);
        }

        Y__data[trueCount] = Y_data[b_i];
        trueCount++;
      }
    }

    end = S->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (S_data[b_i] == 1.0) {
        trueCount++;
      }
    }

    i = r1->size[0];
    r1->size[0] = trueCount;
    emxEnsureCapacity_int32_T(sp, r1, i, &hk_emlrtRTEI);
    r3 = r1->data;
    trueCount = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (S_data[b_i] == 1.0) {
        r3[trueCount] = b_i + 1;
        trueCount++;
      }
    }

    trueCount = X->size[1];
    i = X_->size[0] * X_->size[1];
    X_->size[0] = r1->size[0];
    X_->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, X_, i, &ik_emlrtRTEI);
    Y__data = X_->data;
    for (i = 0; i < trueCount; i++) {
      end = r1->size[0];
      for (i1 = 0; i1 < end; i1++) {
        if (r3[i1] > X->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r3[i1], 1, X->size[0], &xf_emlrtBCI,
            (emlrtCTX)sp);
        }

        Y__data[i1 + X_->size[0] * i] = X_data[(r3[i1] + X->size[0] * i) - 1];
      }
    }

    if (1 > sig2->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, sig2->size[0], &uf_emlrtBCI, (emlrtCTX)
        sp);
    }

    sig2inv = 1.0 / sig2_data[0];
    st.site = &kd_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    b_dynamic_size_checks(&b_st, X_, X_, r1->size[0], r1->size[0]);
    b_st.site = &vc_emlrtRSI;
    b_mtimes(&b_st, X_, X_, XX);
    XX_data = XX->data;
    trueCount = XX->size[0] * XX->size[1];
    for (i = 0; i < trueCount; i++) {
      XX_data[i] *= sig2inv;
    }

    i = y->size[0] * y->size[1];
    y->size[0] = X_->size[1];
    y->size[1] = X_->size[0];
    emxEnsureCapacity_real_T(sp, y, i, &kk_emlrtRTEI);
    y_data = y->data;
    trueCount = X_->size[0];
    for (i = 0; i < trueCount; i++) {
      end = X_->size[1];
      for (i1 = 0; i1 < end; i1++) {
        y_data[i1 + y->size[0] * i] = sig2inv * Y__data[i + X_->size[0] * i1];
      }
    }

    st.site = &ld_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    c_dynamic_size_checks(&b_st, y, Y_, y->size[1], Y_->size[0]);
    b_st.site = &vc_emlrtRSI;
    c_mtimes(&b_st, y, Y_, XY);
    XY_data = XY->data;
    i = (int32_T)(s + -1.0);
    emlrtForLoopVectorCheckR2021a(2.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)(s +
      -1.0), &tb_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < i; b_i++) {
      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 2.0) {
          trueCount++;
        }
      }

      i1 = Y_->size[0];
      Y_->size[0] = trueCount;
      emxEnsureCapacity_real_T(sp, Y_, i1, &hk_emlrtRTEI);
      Y__data = Y_->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 2.0) {
          if (d_i + 1 > Y->size[0]) {
            emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, Y->size[0], &bg_emlrtBCI,
              (emlrtCTX)sp);
          }

          Y__data[trueCount] = Y_data[d_i];
          trueCount++;
        }
      }

      end = S->size[0] - 1;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 2.0) {
          trueCount++;
        }
      }

      i1 = r2->size[0];
      r2->size[0] = trueCount;
      emxEnsureCapacity_int32_T(sp, r2, i1, &hk_emlrtRTEI);
      r3 = r2->data;
      trueCount = 0;
      for (d_i = 0; d_i <= end; d_i++) {
        if (S_data[d_i] == (real_T)b_i + 2.0) {
          r3[trueCount] = d_i + 1;
          trueCount++;
        }
      }

      trueCount = X->size[1];
      i1 = X_->size[0] * X_->size[1];
      X_->size[0] = r2->size[0];
      X_->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, X_, i1, &qk_emlrtRTEI);
      Y__data = X_->data;
      for (i1 = 0; i1 < trueCount; i1++) {
        end = r2->size[0];
        for (d_i = 0; d_i < end; d_i++) {
          if (r3[d_i] > X->size[0]) {
            emlrtDynamicBoundsCheckR2012b(r3[d_i], 1, X->size[0], &cg_emlrtBCI,
              (emlrtCTX)sp);
          }

          Y__data[d_i + X_->size[0] * i1] = X_data[(r3[d_i] + X->size[0] * i1) -
            1];
        }
      }

      if (((int32_T)(b_i + 2U) < 1) || ((int32_T)(b_i + 2U) > sig2->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, sig2->size[0],
          &dg_emlrtBCI, (emlrtCTX)sp);
      }

      sig2inv = 1.0 / sig2_data[b_i + 1];
      st.site = &md_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      b_dynamic_size_checks(&b_st, X_, X_, r2->size[0], r2->size[0]);
      b_st.site = &vc_emlrtRSI;
      b_mtimes(&b_st, X_, X_, y);
      y_data = y->data;
      trueCount = y->size[0] * y->size[1];
      for (i1 = 0; i1 < trueCount; i1++) {
        y_data[i1] *= sig2inv;
      }

      if ((XX->size[0] != y->size[0]) && ((XX->size[0] != 1) && (y->size[0] != 1)))
      {
        emlrtDimSizeImpxCheckR2021b(XX->size[0], y->size[0], &mb_emlrtECI,
          (emlrtCTX)sp);
      }

      if ((XX->size[1] != y->size[1]) && ((XX->size[1] != 1) && (y->size[1] != 1)))
      {
        emlrtDimSizeImpxCheckR2021b(XX->size[1], y->size[1], &nb_emlrtECI,
          (emlrtCTX)sp);
      }

      if ((XX->size[0] == y->size[0]) && (XX->size[1] == y->size[1])) {
        trueCount = XX->size[0] * XX->size[1];
        for (i1 = 0; i1 < trueCount; i1++) {
          XX_data[i1] += y_data[i1];
        }
      } else {
        st.site = &md_emlrtRSI;
        c_plus(&st, XX, y);
        XX_data = XX->data;
      }

      i1 = y->size[0] * y->size[1];
      y->size[0] = X_->size[1];
      y->size[1] = X_->size[0];
      emxEnsureCapacity_real_T(sp, y, i1, &kk_emlrtRTEI);
      y_data = y->data;
      trueCount = X_->size[0];
      for (i1 = 0; i1 < trueCount; i1++) {
        end = X_->size[1];
        for (d_i = 0; d_i < end; d_i++) {
          y_data[d_i + y->size[0] * i1] = sig2inv * Y__data[i1 + X_->size[0] *
            d_i];
        }
      }

      st.site = &nd_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      c_dynamic_size_checks(&b_st, y, Y_, y->size[1], Y_->size[0]);
      b_st.site = &vc_emlrtRSI;
      c_mtimes(&b_st, y, Y_, r);
      r4 = r->data;
      trueCount = XY->size[0];
      if ((XY->size[0] != r->size[0]) && ((XY->size[0] != 1) && (r->size[0] != 1)))
      {
        emlrtDimSizeImpxCheckR2021b(XY->size[0], r->size[0], &ob_emlrtECI,
          (emlrtCTX)sp);
      }

      if (XY->size[0] == r->size[0]) {
        for (i1 = 0; i1 < trueCount; i1++) {
          XY_data[i1] += r4[i1];
        }
      } else {
        st.site = &nd_emlrtRSI;
        b_plus(&st, XY, r);
        XY_data = XY->data;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    if ((XX->size[0] != B0inv->size[0]) && ((XX->size[0] != 1) && (B0inv->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(XX->size[0], B0inv->size[0], &pb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((XX->size[1] != B0inv->size[1]) && ((XX->size[1] != 1) && (B0inv->size[1]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(XX->size[1], B0inv->size[1], &qb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((XX->size[0] == B0inv->size[0]) && (XX->size[1] == B0inv->size[1])) {
      i = b_XX->size[0] * b_XX->size[1];
      b_XX->size[0] = XX->size[0];
      b_XX->size[1] = XX->size[1];
      emxEnsureCapacity_real_T(sp, b_XX, i, &mk_emlrtRTEI);
      b_XX_data = b_XX->data;
      trueCount = XX->size[0] * XX->size[1];
      for (i = 0; i < trueCount; i++) {
        b_XX_data[i] = XX_data[i] + B0inv_data[i];
      }

      st.site = &od_emlrtRSI;
      inv(&st, b_XX, B1);
      XX_data = B1->data;
    } else {
      st.site = &od_emlrtRSI;
      o_binary_expand_op(&st, B1, od_emlrtRSI, XX, B0inv);
      XX_data = B1->data;
    }

    st.site = &pd_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    b_dynamic_size_checks(&b_st, B0inv, beta0, B0inv->size[1], beta0->size[0]);
    b_st.site = &vc_emlrtRSI;
    e_mtimes(&b_st, B0inv, beta0, X_);
    Y__data = X_->data;
    if ((XY->size[0] != X_->size[0]) && ((XY->size[0] != 1) && (X_->size[0] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(XY->size[0], X_->size[0], &rb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (XY->size[0] == X_->size[0]) {
      i = b_XX->size[0] * b_XX->size[1];
      b_XX->size[0] = XY->size[0];
      b_XX->size[1] = X_->size[1];
      emxEnsureCapacity_real_T(sp, b_XX, i, &ok_emlrtRTEI);
      b_XX_data = b_XX->data;
      trueCount = X_->size[1];
      for (i = 0; i < trueCount; i++) {
        end = XY->size[0];
        for (i1 = 0; i1 < end; i1++) {
          b_XX_data[i1 + b_XX->size[0] * i] = XY_data[i1] + Y__data[i1 +
            X_->size[0] * i];
        }
      }

      i = X_->size[0] * X_->size[1];
      X_->size[0] = b_XX->size[0];
      X_->size[1] = b_XX->size[1];
      emxEnsureCapacity_real_T(sp, X_, i, &rk_emlrtRTEI);
      Y__data = X_->data;
      trueCount = b_XX->size[0] * b_XX->size[1];
      for (i = 0; i < trueCount; i++) {
        Y__data[i] = b_XX_data[i];
      }
    } else {
      st.site = &pd_emlrtRSI;
      q_binary_expand_op(&st, X_, XY);
    }

    st.site = &qd_emlrtRSI;
    i = y->size[0] * y->size[1];
    y->size[0] = B1->size[0];
    y->size[1] = B1->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &pk_emlrtRTEI);
    y_data = y->data;
    trueCount = B1->size[0] * B1->size[1];
    for (i = 0; i < trueCount; i++) {
      y_data[i] = XX_data[i];
    }

    b_st.site = &oe_emlrtRSI;
    cholesky(&b_st, y);
    st.site = &qd_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    b_dynamic_size_checks(&b_st, B1, X_, B1->size[1], X_->size[0]);
    b_st.site = &vc_emlrtRSI;
    e_mtimes(&b_st, B1, X_, XX);
    XX_data = XX->data;
    st.site = &qd_emlrtRSI;
    b_st.site = &qd_emlrtRSI;
    randn(&b_st, X->size[1], XY);
    b_st.site = &wc_emlrtRSI;
    c_dynamic_size_checks(&b_st, y, XY, y->size[0], XY->size[0]);
    b_st.site = &vc_emlrtRSI;
    d_mtimes(&b_st, y, XY, r);
    r4 = r->data;
    if ((XX->size[0] != r->size[0]) && ((XX->size[0] != 1) && (r->size[0] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(XX->size[0], r->size[0], &sb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (XX->size[0] == r->size[0]) {
      if (s != (int32_T)muDoubleScalarFloor(s)) {
        emlrtIntegerCheckR2012b(s, &xb_emlrtDCI, (emlrtCTX)sp);
      }

      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      trueCount = (int32_T)s;
      b_y->size[1] = (int32_T)s;
      emxEnsureCapacity_real_T(sp, b_y, i, &sk_emlrtRTEI);
      y_data = b_y->data;
      for (i = 0; i < trueCount; i++) {
        y_data[i] = 1.0;
      }

      i = b_XX->size[0] * b_XX->size[1];
      b_XX->size[0] = XX->size[0];
      b_XX->size[1] = XX->size[1];
      emxEnsureCapacity_real_T(sp, b_XX, i, &tk_emlrtRTEI);
      b_XX_data = b_XX->data;
      trueCount = XX->size[1];
      for (i = 0; i < trueCount; i++) {
        end = XX->size[0];
        for (i1 = 0; i1 < end; i1++) {
          b_XX_data[i1 + b_XX->size[0] * i] = XX_data[i1 + XX->size[0] * i] +
            r4[i1];
        }
      }

      i = XX->size[0] * XX->size[1];
      XX->size[0] = b_XX->size[0];
      XX->size[1] = b_XX->size[1];
      emxEnsureCapacity_real_T(sp, XX, i, &tk_emlrtRTEI);
      XX_data = XX->data;
      trueCount = b_XX->size[1];
      for (i = 0; i < trueCount; i++) {
        end = b_XX->size[0];
        for (i1 = 0; i1 < end; i1++) {
          XX_data[i1 + XX->size[0] * i] = b_XX_data[i1 + b_XX->size[0] * i];
        }
      }

      st.site = &rd_emlrtRSI;
      kron(&st, b_y, XX, beforebeta);
    } else {
      st.site = &rd_emlrtRSI;
      p_binary_expand_op(&st, beforebeta, rd_emlrtRSI, s, XX, r);
    }
  }

  emxFree_real_T(sp, &b_XX);
  emxFree_boolean_T(sp, &varargin_1);
  emxFree_real_T(sp, &b_y);
  emxFree_real_T(sp, &y);
  emxFree_int32_T(sp, &r2);
  emxFree_int32_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &beta_);
  emxFree_real_T(sp, &XY);
  emxFree_real_T(sp, &XX);
  emxFree_real_T(sp, &B1);
  emxFree_real_T(sp, &X_);
  emxFree_real_T(sp, &Y_);
  emxFree_real_T(sp, &B0inv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 5, &pArrays[0], (const
    char_T *)"feval", true, location);
}

static void b_minus(const emlrtStack *sp, emxArray_real_T *ehat, const
                    emxArray_real_T *Y_)
{
  emxArray_real_T *b_Y_;
  const real_T *Y__data;
  real_T *b_Y__data;
  real_T *ehat_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  Y__data = Y_->data;
  ehat_data = ehat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y_, 1, &qm_emlrtRTEI);
  i = b_Y_->size[0];
  if (ehat->size[0] == 1) {
    b_Y_->size[0] = Y_->size[0];
  } else {
    b_Y_->size[0] = ehat->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_Y_, i, &qm_emlrtRTEI);
  b_Y__data = b_Y_->data;
  stride_0_0 = (Y_->size[0] != 1);
  stride_1_0 = (ehat->size[0] != 1);
  if (ehat->size[0] == 1) {
    loop_ub = Y_->size[0];
  } else {
    loop_ub = ehat->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_Y__data[i] = Y__data[i * stride_0_0] - ehat_data[i * stride_1_0];
  }

  i = ehat->size[0];
  ehat->size[0] = b_Y_->size[0];
  emxEnsureCapacity_real_T(sp, ehat, i, &qm_emlrtRTEI);
  ehat_data = ehat->data;
  loop_ub = b_Y_->size[0];
  for (i = 0; i < loop_ub; i++) {
    ehat_data[i] = b_Y__data[i];
  }

  emxFree_real_T(sp, &b_Y_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *beta_, const
                   emxArray_real_T *r1)
{
  emxArray_real_T *b_beta_;
  const real_T *r;
  real_T *b_beta__data;
  real_T *beta__data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  beta__data = beta_->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta_, 1, &nm_emlrtRTEI);
  i = b_beta_->size[0];
  if (r1->size[0] == 1) {
    b_beta_->size[0] = beta_->size[0];
  } else {
    b_beta_->size[0] = r1->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_beta_, i, &nm_emlrtRTEI);
  b_beta__data = b_beta_->data;
  stride_0_0 = (beta_->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = beta_->size[0];
  } else {
    loop_ub = r1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_beta__data[i] = beta__data[i * stride_0_0] + r[i * stride_1_0];
  }

  i = beta_->size[0];
  beta_->size[0] = b_beta_->size[0];
  emxEnsureCapacity_real_T(sp, beta_, i, &nm_emlrtRTEI);
  beta__data = beta_->data;
  loop_ub = b_beta_->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta__data[i] = b_beta__data[i];
  }

  emxFree_real_T(sp, &b_beta_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *candidate_S,
  const emxArray_boolean_T *S_plus)
{
  emxArray_real_T *b_candidate_S;
  real_T *b_candidate_S_data;
  real_T *candidate_S_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  const boolean_T *S_plus_data;
  S_plus_data = S_plus->data;
  candidate_S_data = candidate_S->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_candidate_S, 1, &jm_emlrtRTEI);
  i = b_candidate_S->size[0];
  if (S_plus->size[0] == 1) {
    b_candidate_S->size[0] = candidate_S->size[0];
  } else {
    b_candidate_S->size[0] = S_plus->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_candidate_S, i, &jm_emlrtRTEI);
  b_candidate_S_data = b_candidate_S->data;
  stride_0_0 = (candidate_S->size[0] != 1);
  stride_1_0 = (S_plus->size[0] != 1);
  if (S_plus->size[0] == 1) {
    loop_ub = candidate_S->size[0];
  } else {
    loop_ub = S_plus->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_candidate_S_data[i] = candidate_S_data[i * stride_0_0] + (real_T)
      S_plus_data[i * stride_1_0];
  }

  i = candidate_S->size[0];
  candidate_S->size[0] = b_candidate_S->size[0];
  emxEnsureCapacity_real_T(sp, candidate_S, i, &jm_emlrtRTEI);
  candidate_S_data = candidate_S->data;
  loop_ub = b_candidate_S->size[0];
  for (i = 0; i < loop_ub; i++) {
    candidate_S_data[i] = b_candidate_S_data[i];
  }

  emxFree_real_T(sp, &b_candidate_S);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *absY,
  emlrtRSInfo an_emlrtRSI, const emxArray_real_T *b_hat, const int32_T
  input_sizes[2], const int32_T sizes[2], const emxArray_real_T *sig2_hat, const
  int32_T b_input_sizes[2], const emxArray_real_T *vec_P, const emxArray_real_T *
  retf, const emxArray_real_T *r2, const emxArray_real_T *betam_)
{
  emlrtStack st;
  emxArray_real_T *b_b_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r1;
  const real_T *b_hat_data;
  const real_T *betam__data;
  const real_T *r;
  const real_T *retf_data;
  const real_T *sig2_hat_data;
  const real_T *vec_P_data;
  real_T *b_b_hat_data;
  int32_T aux_1_1;
  int32_T b_input_sizes_idx_0;
  int32_T b_input_sizes_idx_1;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_0;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  st.prev = sp;
  st.tls = sp->tls;
  betam__data = betam_->data;
  r = r2->data;
  retf_data = retf->data;
  vec_P_data = vec_P->data;
  sig2_hat_data = sig2_hat->data;
  b_hat_data = b_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b_hat, 2, &hf_emlrtRTEI);
  input_sizes_idx_0 = input_sizes[0];
  input_sizes_idx_1 = sizes[1];
  b_input_sizes_idx_0 = b_input_sizes[0];
  b_input_sizes_idx_1 = sizes[1];
  sizes_idx_0 = sizes[0];
  sizes_idx_1 = sizes[1];
  i = b_b_hat->size[0] * b_b_hat->size[1];
  b_b_hat->size[0] = (input_sizes_idx_0 + b_input_sizes_idx_0) + sizes_idx_0;
  b_b_hat->size[1] = input_sizes_idx_1;
  emxEnsureCapacity_real_T(sp, b_b_hat, i, &hf_emlrtRTEI);
  b_b_hat_data = b_b_hat->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      b_b_hat_data[i1 + b_b_hat->size[0] * i] = b_hat_data[i1 +
        input_sizes_idx_0 * i];
    }
  }

  for (i = 0; i < b_input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < b_input_sizes_idx_0; i1++) {
      b_b_hat_data[(i1 + input_sizes_idx_0) + b_b_hat->size[0] * i] =
        sig2_hat_data[i1 + b_input_sizes_idx_0 * i];
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      b_b_hat_data[((i1 + input_sizes_idx_0) + b_input_sizes_idx_0) +
        b_b_hat->size[0] * i] = vec_P_data[i1 + sizes_idx_0 * i];
    }
  }

  emxInit_real_T(sp, &b_retf, 1, &kf_emlrtRTEI);
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &kf_emlrtRTEI);
  b_b_hat_data = b_retf->data;
  input_sizes_idx_0 = retf->size[1];
  for (i = 0; i < input_sizes_idx_0; i++) {
    b_b_hat_data[i] = retf_data[i];
  }

  emxInit_real_T(sp, &r1, 2, &mf_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  if (betam_->size[1] == 1) {
    r1->size[0] = r2->size[0];
  } else {
    r1->size[0] = betam_->size[1];
  }

  if (betam_->size[0] == 1) {
    r1->size[1] = r2->size[1];
  } else {
    r1->size[1] = betam_->size[0];
  }

  emxEnsureCapacity_real_T(sp, r1, i, &mf_emlrtRTEI);
  b_b_hat_data = r1->data;
  input_sizes_idx_1 = (r2->size[0] != 1);
  b_input_sizes_idx_0 = (r2->size[1] != 1);
  b_input_sizes_idx_1 = (betam_->size[1] != 1);
  sizes_idx_0 = (betam_->size[0] != 1);
  sizes_idx_1 = 0;
  aux_1_1 = 0;
  if (betam_->size[0] == 1) {
    input_sizes_idx_0 = r2->size[1];
  } else {
    input_sizes_idx_0 = betam_->size[0];
  }

  for (i = 0; i < input_sizes_idx_0; i++) {
    if (betam_->size[1] == 1) {
      loop_ub = r2->size[0];
    } else {
      loop_ub = betam_->size[1];
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      b_b_hat_data[i1 + r1->size[0] * i] = 0.5 * (r[i1 * input_sizes_idx_1 +
        r2->size[0] * sizes_idx_1] + betam__data[aux_1_1 + betam_->size[0] * (i1
        * b_input_sizes_idx_1)]);
    }

    aux_1_1 += sizes_idx_0;
    sizes_idx_1 += b_input_sizes_idx_0;
  }

  st.site = &an_emlrtRSI;
  b_lnpdfmvn(&st, b_b_hat, b_retf, r1, absY);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_b_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static void c_plus(const emlrtStack *sp, emxArray_real_T *XX, const
                   emxArray_real_T *y)
{
  emxArray_real_T *b_XX;
  const real_T *y_data;
  real_T *XX_data;
  real_T *b_XX_data;
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
  y_data = y->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XX, 2, &om_emlrtRTEI);
  i = b_XX->size[0] * b_XX->size[1];
  if (y->size[0] == 1) {
    b_XX->size[0] = XX->size[0];
  } else {
    b_XX->size[0] = y->size[0];
  }

  if (y->size[1] == 1) {
    b_XX->size[1] = XX->size[1];
  } else {
    b_XX->size[1] = y->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_XX, i, &om_emlrtRTEI);
  b_XX_data = b_XX->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (y->size[0] != 1);
  stride_1_1 = (y->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (y->size[1] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = y->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (y->size[0] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = y->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_XX_data[i1 + b_XX->size[0] * i] = XX_data[i1 * stride_0_0 + XX->size[0] *
        aux_0_1] + y_data[i1 * stride_1_0 + y->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = XX->size[0] * XX->size[1];
  XX->size[0] = b_XX->size[0];
  XX->size[1] = b_XX->size[1];
  emxEnsureCapacity_real_T(sp, XX, i, &om_emlrtRTEI);
  XX_data = XX->data;
  loop_ub = b_XX->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_XX->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      XX_data[i1 + XX->size[0] * i] = b_XX_data[i1 + b_XX->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_XX);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *sig2,
  emlrtRSInfo an_emlrtRSI, real_T s, const emxArray_real_T *delta0, const
  emxArray_real_T *alpha0)
{
  emlrtStack st;
  emxArray_real_T *b_delta0;
  emxArray_real_T *r;
  const real_T *alpha0_data;
  const real_T *delta0_data;
  real_T *b_delta0_data;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  alpha0_data = alpha0->data;
  delta0_data = delta0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (s != (int32_T)muDoubleScalarFloor(s)) {
    emlrtIntegerCheckR2012b(s, &fb_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &r, 1, &wc_emlrtRTEI);
  loop_ub_tmp = (int32_T)s;
  i = r->size[0];
  r->size[0] = (int32_T)s;
  emxEnsureCapacity_real_T(sp, r, i, &wc_emlrtRTEI);
  b_delta0_data = r->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    b_delta0_data[i] = 1.0;
  }

  emxInit_real_T(sp, &b_delta0, 1, &yc_emlrtRTEI);
  i = b_delta0->size[0];
  if (alpha0->size[0] == 1) {
    b_delta0->size[0] = delta0->size[0];
  } else {
    b_delta0->size[0] = alpha0->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_delta0, i, &yc_emlrtRTEI);
  b_delta0_data = b_delta0->data;
  loop_ub_tmp = (delta0->size[0] != 1);
  stride_1_0 = (alpha0->size[0] != 1);
  if (alpha0->size[0] == 1) {
    loop_ub = delta0->size[0];
  } else {
    loop_ub = alpha0->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_delta0_data[i] = delta0_data[i * loop_ub_tmp] / alpha0_data[i * stride_1_0];
  }

  st.site = &an_emlrtRSI;
  b_kron(&st, r, b_delta0, sig2);
  emxFree_real_T(sp, &b_delta0);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [11])
{
  static const int32_T iv[2] = { 1, 11 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 11, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void d_plus(const emlrtStack *sp, emxArray_real_T *sig20, const
                   emxArray_real_T *test_sig2)
{
  emxArray_real_T *b_test_sig2;
  const real_T *test_sig2_data;
  real_T *b_test_sig2_data;
  real_T *sig20_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  test_sig2_data = test_sig2->data;
  sig20_data = sig20->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_test_sig2, 1, &pm_emlrtRTEI);
  i = b_test_sig2->size[0];
  if (sig20->size[0] == 1) {
    b_test_sig2->size[0] = test_sig2->size[0];
  } else {
    b_test_sig2->size[0] = sig20->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_test_sig2, i, &pm_emlrtRTEI);
  b_test_sig2_data = b_test_sig2->data;
  stride_0_0 = (test_sig2->size[0] != 1);
  stride_1_0 = (sig20->size[0] != 1);
  if (sig20->size[0] == 1) {
    loop_ub = test_sig2->size[0];
  } else {
    loop_ub = sig20->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_test_sig2_data[i] = test_sig2_data[i * stride_0_0] + sig20_data[i *
      stride_1_0];
  }

  i = sig20->size[0];
  sig20->size[0] = b_test_sig2->size[0];
  emxEnsureCapacity_real_T(sp, sig20, i, &pm_emlrtRTEI);
  sig20_data = sig20->data;
  loop_ub = b_test_sig2->size[0];
  for (i = 0; i < loop_ub; i++) {
    sig20_data[i] = b_test_sig2_data[i];
  }

  emxFree_real_T(sp, &b_test_sig2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray, (const char_T *)
                        "disp", true, location);
}

static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
  const emxArray_real_T *y, const emxArray_real_T *P)
{
  const real_T *P_data;
  const real_T *y_data;
  real_T *varargin_1_data;
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
  P_data = P->data;
  y_data = y->data;
  i = varargin_1->size[0] * varargin_1->size[1];
  if (P->size[1] == 1) {
    varargin_1->size[0] = y->size[0];
  } else {
    varargin_1->size[0] = P->size[1];
  }

  if (P->size[0] == 1) {
    varargin_1->size[1] = y->size[1];
  } else {
    varargin_1->size[1] = P->size[0];
  }

  emxEnsureCapacity_real_T(sp, varargin_1, i, &mh_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  stride_0_0 = (y->size[0] != 1);
  stride_0_1 = (y->size[1] != 1);
  stride_1_0 = (P->size[1] != 1);
  stride_1_1 = (P->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (P->size[0] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = P->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    if (P->size[1] == 1) {
      b_loop_ub = y->size[0];
    } else {
      b_loop_ub = P->size[1];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      varargin_1_data[i1 + varargin_1->size[0] * i] = y_data[i1 * stride_0_0 +
        y->size[0] * aux_0_1] - P_data[aux_1_1 + P->size[0] * (i1 * stride_1_0)];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
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

static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *pstyn,
  const emxArray_real_T *F, int32_T t, const emxArray_real_T *Pcap, const
  emxArray_real_T *sm)
{
  const real_T *F_data;
  const real_T *Pcap_data;
  const real_T *sm_data;
  real_T *pstyn_data;
  int32_T b_sm;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  sm_data = sm->data;
  Pcap_data = Pcap->data;
  F_data = F->data;
  b_sm = (int32_T)sm_data[t];
  i = F->size[1];
  i1 = Pcap->size[0];
  loop_ub = pstyn->size[0] * pstyn->size[1];
  pstyn->size[0] = 1;
  if (i1 == 1) {
    pstyn->size[1] = i;
  } else {
    pstyn->size[1] = i1;
  }

  emxEnsureCapacity_real_T(sp, pstyn, loop_ub, &fi_emlrtRTEI);
  pstyn_data = pstyn->data;
  stride_0_1 = (i != 1);
  stride_1_1 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }

  for (i = 0; i < loop_ub; i++) {
    pstyn_data[i] = F_data[(t + F->size[0] * (i * stride_0_1)) - 1] *
      Pcap_data[i * stride_1_1 + Pcap->size[0] * (b_sm - 1)];
  }
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8])
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

static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray, (const char_T *)
                        "format", true, location);
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *N, const
  emxArray_real_T *countm, int32_T i, const emxArray_real_T *N_)
{
  const real_T *N__data;
  const real_T *countm_data;
  real_T *N_data;
  int32_T b_i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  N__data = N_->data;
  countm_data = countm->data;
  b_i = countm->size[1];
  stride_0_0 = N->size[0];
  if (N_->size[0] == 1) {
    N->size[0] = b_i;
  } else {
    N->size[0] = N_->size[0];
  }

  emxEnsureCapacity_real_T(sp, N, stride_0_0, &vi_emlrtRTEI);
  N_data = N->data;
  stride_0_0 = (b_i != 1);
  stride_1_0 = (N_->size[0] != 1);
  if (N_->size[0] == 1) {
    loop_ub = b_i;
  } else {
    loop_ub = N_->size[0];
  }

  for (b_i = 0; b_i < loop_ub; b_i++) {
    N_data[b_i] = countm_data[i + countm->size[0] * (b_i * stride_0_0)] +
      N__data[b_i * stride_1_0];
  }
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [31])
{
  static const int32_T iv[2] = { 1, 31 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 31, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
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

static const mxArray *l_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [28])
{
  static const int32_T iv[2] = { 1, 28 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 28, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
  emlrtRSInfo an_emlrtRSI, const emxArray_real_T *y, const emxArray_real_T
  *B0inv)
{
  emlrtStack st;
  emxArray_real_T *b_y;
  const real_T *B0inv_data;
  const real_T *y_data;
  real_T *b_y_data;
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
  B0inv_data = B0inv->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &lk_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  if (B0inv->size[0] == 1) {
    b_y->size[0] = y->size[0];
  } else {
    b_y->size[0] = B0inv->size[0];
  }

  if (B0inv->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = B0inv->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_y, i, &lk_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_0 = (y->size[0] != 1);
  stride_0_1 = (y->size[1] != 1);
  stride_1_0 = (B0inv->size[0] != 1);
  stride_1_1 = (B0inv->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (B0inv->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = B0inv->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (B0inv->size[0] == 1) {
      b_loop_ub = y->size[0];
    } else {
      b_loop_ub = B0inv->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_y_data[i1 + b_y->size[0] * i] = y_data[i1 * stride_0_0 + y->size[0] *
        aux_0_1] + B0inv_data[i1 * stride_1_0 + B0inv->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &an_emlrtRSI;
  inv(&st, b_y, B1);
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *beforebeta,
  emlrtRSInfo an_emlrtRSI, real_T s, const emxArray_real_T *XX, const
  emxArray_real_T *r2)
{
  emlrtStack st;
  emxArray_real_T *b_XX;
  emxArray_real_T *r1;
  const real_T *XX_data;
  const real_T *r;
  real_T *b_XX_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T stride_1_0;
  int32_T unnamed_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  r = r2->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (s != (int32_T)muDoubleScalarFloor(s)) {
    emlrtIntegerCheckR2012b(s, &xb_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &r1, 2, &sk_emlrtRTEI);
  unnamed_idx_0 = r2->size[0];
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  loop_ub_tmp = (int32_T)s;
  r1->size[1] = (int32_T)s;
  emxEnsureCapacity_real_T(sp, r1, i, &sk_emlrtRTEI);
  b_XX_data = r1->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    b_XX_data[i] = 1.0;
  }

  emxInit_real_T(sp, &b_XX, 2, &tk_emlrtRTEI);
  i = b_XX->size[0] * b_XX->size[1];
  if (unnamed_idx_0 == 1) {
    b_XX->size[0] = XX->size[0];
  } else {
    b_XX->size[0] = unnamed_idx_0;
  }

  b_XX->size[1] = XX->size[1];
  emxEnsureCapacity_real_T(sp, b_XX, i, &tk_emlrtRTEI);
  b_XX_data = b_XX->data;
  loop_ub_tmp = (XX->size[0] != 1);
  stride_1_0 = (unnamed_idx_0 != 1);
  loop_ub = XX->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (unnamed_idx_0 == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = unnamed_idx_0;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_XX_data[i1 + b_XX->size[0] * i] = XX_data[i1 * loop_ub_tmp + XX->size[0]
        * i] + r[i1 * stride_1_0];
    }
  }

  st.site = &an_emlrtRSI;
  kron(&st, r1, b_XX, beforebeta);
  emxFree_real_T(sp, &b_XX);
  emxFree_real_T(sp, &r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *p_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  return y;
}

static void plus(const emlrtStack *sp, emxArray_real_T *beforebeta, const
                 emxArray_real_T *XX)
{
  emxArray_real_T *b_XX;
  const real_T *XX_data;
  real_T *b_XX_data;
  real_T *beforebeta_data;
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
  XX_data = XX->data;
  beforebeta_data = beforebeta->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XX, 2, &mm_emlrtRTEI);
  i = b_XX->size[0] * b_XX->size[1];
  if (beforebeta->size[0] == 1) {
    b_XX->size[0] = XX->size[0];
  } else {
    b_XX->size[0] = beforebeta->size[0];
  }

  if (beforebeta->size[1] == 1) {
    b_XX->size[1] = XX->size[1];
  } else {
    b_XX->size[1] = beforebeta->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_XX, i, &mm_emlrtRTEI);
  b_XX_data = b_XX->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (beforebeta->size[0] != 1);
  stride_1_1 = (beforebeta->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (beforebeta->size[1] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = beforebeta->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (beforebeta->size[0] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = beforebeta->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_XX_data[i1 + b_XX->size[0] * i] = XX_data[i1 * stride_0_0 + XX->size[0] *
        aux_0_1] + beforebeta_data[i1 * stride_1_0 + beforebeta->size[0] *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = beforebeta->size[0] * beforebeta->size[1];
  beforebeta->size[0] = b_XX->size[0];
  beforebeta->size[1] = b_XX->size[1];
  emxEnsureCapacity_real_T(sp, beforebeta, i, &mm_emlrtRTEI);
  beforebeta_data = beforebeta->data;
  loop_ub = b_XX->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_XX->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      beforebeta_data[i1 + beforebeta->size[0] * i] = b_XX_data[i1 + b_XX->size
        [0] * i];
    }
  }

  emxFree_real_T(sp, &b_XX);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void q_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X_, const
  emxArray_real_T *XY)
{
  emxArray_real_T *b_XY;
  const real_T *XY_data;
  real_T *X__data;
  real_T *b_XY_data;
  int32_T XY_idx_0;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  XY_data = XY->data;
  X__data = X_->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XY, 2, &ok_emlrtRTEI);
  XY_idx_0 = XY->size[0];
  i = b_XY->size[0] * b_XY->size[1];
  if (X_->size[0] == 1) {
    b_XY->size[0] = XY_idx_0;
  } else {
    b_XY->size[0] = X_->size[0];
  }

  b_XY->size[1] = X_->size[1];
  emxEnsureCapacity_real_T(sp, b_XY, i, &ok_emlrtRTEI);
  b_XY_data = b_XY->data;
  stride_0_0 = (XY_idx_0 != 1);
  stride_1_0 = (X_->size[0] != 1);
  loop_ub = X_->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (X_->size[0] == 1) {
      b_loop_ub = XY_idx_0;
    } else {
      b_loop_ub = X_->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_XY_data[i1 + b_XY->size[0] * i] = XY_data[i1 * stride_0_0] + X__data[i1 *
        stride_1_0 + X_->size[0] * i];
    }
  }

  i = X_->size[0] * X_->size[1];
  X_->size[0] = b_XY->size[0];
  X_->size[1] = b_XY->size[1];
  emxEnsureCapacity_real_T(sp, X_, i, &ok_emlrtRTEI);
  X__data = X_->data;
  loop_ub = b_XY->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_XY->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      X__data[i1 + X_->size[0] * i] = b_XY_data[i1 + b_XY->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_XY);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void sgen(const emlrtStack *sp, const emxArray_real_T *F, const
                 emxArray_real_T *Pcap, emxArray_real_T *sm)
{
  emlrtStack st;
  emxArray_int8_T *stm;
  emxArray_real_T *b_F;
  emxArray_real_T *c_F;
  emxArray_real_T *psm;
  emxArray_real_T *pstyn;
  const real_T *F_data;
  const real_T *Pcap_data;
  real_T d;
  real_T *b_F_data;
  real_T *psm_data;
  real_T *pstyn_data;
  real_T *sm_data;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T t;
  int8_T *stm_data;
  st.prev = sp;
  st.tls = sp->tls;
  Pcap_data = Pcap->data;
  F_data = F->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  number of columns */
  /*   # of regimes */
  i = sm->size[0];
  sm->size[0] = F->size[0];
  emxEnsureCapacity_real_T(sp, sm, i, &ai_emlrtRTEI);
  sm_data = sm->data;
  loop_ub = F->size[0];
  for (i = 0; i < loop_ub; i++) {
    sm_data[i] = 0.0;
  }

  emxInit_int8_T(sp, &stm, &ji_emlrtRTEI);

  /*   regime index */
  i = stm->size[0] * stm->size[1];
  stm->size[0] = F->size[0];
  stm->size[1] = F->size[1];
  emxEnsureCapacity_int8_T(sp, stm, i, &bi_emlrtRTEI);
  stm_data = stm->data;
  loop_ub = F->size[0] * F->size[1];
  for (i = 0; i < loop_ub; i++) {
    stm_data[i] = 0;
  }

  emxInit_real_T(sp, &psm, 2, &ci_emlrtRTEI);

  /*  regime dummy */
  i = psm->size[0] * psm->size[1];
  psm->size[0] = F->size[0];
  psm->size[1] = F->size[1];
  emxEnsureCapacity_real_T(sp, psm, i, &ci_emlrtRTEI);
  psm_data = psm->data;
  loop_ub = F->size[0] * F->size[1];
  for (i = 0; i < loop_ub; i++) {
    psm_data[i] = 0.0;
  }

  /*   storage for the probabilities */
  if (F->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(F->size[0], 1, F->size[0], &be_emlrtBCI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &b_F, 1, &di_emlrtRTEI);
  loop_ub = F->size[1];
  i = b_F->size[0];
  b_F->size[0] = F->size[1];
  emxEnsureCapacity_real_T(sp, b_F, i, &di_emlrtRTEI);
  b_F_data = b_F->data;
  for (i = 0; i < loop_ub; i++) {
    b_F_data[i] = F_data[(F->size[0] + F->size[0] * i) - 1];
  }

  if (F->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(F->size[0], 1, F->size[0], &he_emlrtBCI,
      (emlrtCTX)sp);
  }

  st.site = &qh_emlrtRSI;
  sm_data[F->size[0] - 1] = discret1(&st, b_F);
  if (F->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(F->size[0], 1, F->size[0], &ie_emlrtBCI,
      (emlrtCTX)sp);
  }

  if ((F->size[0] < 1) || (F->size[0] > sm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(F->size[0], 1, sm->size[0], &ke_emlrtBCI,
      (emlrtCTX)sp);
  }

  i = (int32_T)sm_data[F->size[0] - 1];
  if ((i < 1) || (i > F->size[1])) {
    emlrtDynamicBoundsCheckR2012b(i, 1, F->size[1], &je_emlrtBCI, (emlrtCTX)sp);
  }

  stm_data[(F->size[0] + stm->size[0] * (i - 1)) - 1] = 1;
  if (F->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(F->size[0], 1, F->size[0], &fe_emlrtBCI,
      (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &c_F, 2, &ei_emlrtRTEI);
  loop_ub = F->size[1];
  i = c_F->size[0] * c_F->size[1];
  c_F->size[0] = 1;
  c_F->size[1] = F->size[1];
  emxEnsureCapacity_real_T(sp, c_F, i, &ei_emlrtRTEI);
  b_F_data = c_F->data;
  for (i = 0; i < loop_ub; i++) {
    b_F_data[i] = F_data[(F->size[0] + F->size[0] * i) - 1];
  }

  iv[0] = 1;
  iv[1] = F->size[1];
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &c_F->size[0], 2, &t_emlrtECI,
    (emlrtCTX)sp);
  loop_ub = F->size[1];
  emxFree_real_T(sp, &c_F);
  for (i = 0; i < loop_ub; i++) {
    psm_data[(F->size[0] + psm->size[0] * i) - 1] = F_data[(F->size[0] + F->
      size[0] * i) - 1];
  }

  if (F->size[0] - 1 >= 1) {
    iv[0] = 1;
  }

  t = F->size[0] - 1;
  emxInit_real_T(sp, &pstyn, 2, &ii_emlrtRTEI);
  while (t >= 1) {
    if (t + 1 > sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, sm->size[0], &ce_emlrtBCI,
        (emlrtCTX)sp);
    }

    /*  value of the state at t+1 */
    if (t > F->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, F->size[0], &de_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)sm_data[t];
    if ((i < 1) || (i > Pcap->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, Pcap->size[1], &ee_emlrtBCI, (emlrtCTX)
        sp);
    }

    if ((Pcap->size[0] != F->size[1]) && ((F->size[1] != 1) && (Pcap->size[0] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(F->size[1], Pcap->size[0], &s_emlrtECI,
        (emlrtCTX)sp);
    }

    if (Pcap->size[0] == F->size[1]) {
      loop_ub = F->size[1];
      i1 = pstyn->size[0] * pstyn->size[1];
      pstyn->size[0] = 1;
      pstyn->size[1] = F->size[1];
      emxEnsureCapacity_real_T(sp, pstyn, i1, &fi_emlrtRTEI);
      pstyn_data = pstyn->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        pstyn_data[i1] = F_data[(t + F->size[0] * i1) - 1] * Pcap_data[i1 +
          Pcap->size[0] * (i - 1)];
      }
    } else {
      st.site = &xm_emlrtRSI;
      f_binary_expand_op(&st, pstyn, F, t, Pcap, sm);
    }

    /*  1 * m+1 row vector */
    st.site = &rh_emlrtRSI;
    d = b_sum(&st, pstyn);
    loop_ub = pstyn->size[1] - 1;
    i = pstyn->size[0] * pstyn->size[1];
    pstyn->size[0] = 1;
    emxEnsureCapacity_real_T(sp, pstyn, i, &gi_emlrtRTEI);
    pstyn_data = pstyn->data;
    for (i = 0; i <= loop_ub; i++) {
      pstyn_data[i] /= d;
    }

    /*  Pr(st|Yn) */
    i = b_F->size[0];
    b_F->size[0] = pstyn->size[1];
    emxEnsureCapacity_real_T(sp, b_F, i, &hi_emlrtRTEI);
    b_F_data = b_F->data;
    loop_ub = pstyn->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_F_data[i] = pstyn_data[i];
    }

    if (t > sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, sm->size[0], &le_emlrtBCI, (emlrtCTX)
        sp);
    }

    st.site = &sh_emlrtRSI;
    sm_data[t - 1] = discret1(&st, b_F);
    if (t > stm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, stm->size[0], &me_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (t > sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, sm->size[0], &oe_emlrtBCI, (emlrtCTX)
        sp);
    }

    i = (int32_T)sm_data[t - 1];
    if ((i < 1) || (i > stm->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, stm->size[1], &ne_emlrtBCI, (emlrtCTX)
        sp);
    }

    stm_data[(t + stm->size[0] * (i - 1)) - 1] = 1;
    if (t > psm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, psm->size[0], &ge_emlrtBCI, (emlrtCTX)
        sp);
    }

    iv[1] = psm->size[1];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &pstyn->size[0], 2, &u_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = pstyn->size[1];
    for (i = 0; i < loop_ub; i++) {
      psm_data[(t + psm->size[0] * i) - 1] = pstyn_data[i];
    }

    t--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_F);
  emxFree_int8_T(sp, &stm);
  emxFree_real_T(sp, &pstyn);
  emxFree_real_T(sp, &psm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void times(const emlrtStack *sp, emxArray_real_T *xt, const
                  emxArray_real_T *pdfm)
{
  emxArray_real_T *b_xt;
  const real_T *pdfm_data;
  real_T *b_xt_data;
  real_T *xt_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  pdfm_data = pdfm->data;
  xt_data = xt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_xt, 1, &km_emlrtRTEI);
  i = b_xt->size[0];
  if (pdfm->size[0] == 1) {
    b_xt->size[0] = xt->size[0];
  } else {
    b_xt->size[0] = pdfm->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_xt, i, &km_emlrtRTEI);
  b_xt_data = b_xt->data;
  stride_0_0 = (xt->size[0] != 1);
  stride_1_0 = (pdfm->size[0] != 1);
  if (pdfm->size[0] == 1) {
    loop_ub = xt->size[0];
  } else {
    loop_ub = pdfm->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_xt_data[i] = xt_data[i * stride_0_0] * pdfm_data[i * stride_1_0];
  }

  i = xt->size[0];
  xt->size[0] = b_xt->size[0];
  emxEnsureCapacity_real_T(sp, xt, i, &km_emlrtRTEI);
  xt_data = xt->data;
  loop_ub = b_xt->size[0];
  for (i = 0; i < loop_ub; i++) {
    xt_data[i] = b_xt_data[i];
  }

  emxFree_real_T(sp, &b_xt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Markov_Switching(const emlrtStack *sp, const emxArray_real_T *X, const
                      emxArray_real_T *Y, real_T s, real_T n0, real_T n1, const
                      emxArray_real_T *beta0, const emxArray_real_T *B0, const
                      emxArray_real_T *alpha0, const emxArray_real_T *delta0,
                      real_T a0, real_T a1, real_T switchingind, real_T idenind,
                      const emxArray_real_T *betaiden, real_T lowerbound, char_T
                      forecast, const emxArray_real_T *x_f, char_T ML, struct0_T
                      *Output)
{
  static const char_T b_cv1[38] = { 'S', 'e', 't', 't', 'i', 'n', 'g', ' ', 'i',
    'n', 'i', 't', 'i', 'a', 'l', ' ', 'V', 'a', 'l', 'u', 'e', '.', '.', '.',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  static const char_T cv3[31] = { 'R', 'e', 'a', 'd', 'i', 'n', 'g', ' ', 'R',
    'e', 's', 'u', 'l', 't', '.', '.', '.', 'P', 'l', 'e', 'a', 's', 'e', ' ',
    'w', 'a', 'i', 't', '.', '.', '.' };

  static const char_T cv10[28] = { 'T', 'h', 'e', ' ', 's', 'h', 'a', 'r', 'e',
    ' ', 'o', 'f', ' ', 's', 't', 'a', 't', 'e', ' ', '%', 'G', ' ', ':', ' ',
    '%', 'G', '\\', 'n' };

  static const char_T cv6[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  static const char_T cv9[23] = { '[', 'T', 'r', 'a', 'n', 's', 'i', 't', 'i',
    'o', 'n', ' ', 'M', 'a', 'r', 't', 'i', 'x', ' ', 'P', ':', ' ', ']' };

  static const char_T cv2[17] = { 'S', 'a', 'm', 'p', 'l', 'i', 'n', 'g', ' ',
    'C', 'o', 'm', 'p', 'l', 'e', 't', 'e' };

  static const char_T cv7[11] = { '[', 'L', 'C', '*', 'b', 'e', 't', 'a', ':',
    ' ', ']' };

  static const char_T cv8[8] = { '[', 's', 'i', 'g', '2', ':', ' ', ']' };

  static const char_T cv5[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T b_cv[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emlrtStack *r;
  emlrtStack *r1;
  emxArray_boolean_T *S_plus;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *r8;
  emxArray_boolean_T *r9;
  emxArray_int32_T *ii;
  emxArray_int32_T *r10;
  emxArray_int32_T *r7;
  emxArray_real_T *P;
  emxArray_real_T *P_hat;
  emxArray_real_T *P_para;
  emxArray_real_T *Sm;
  emxArray_real_T *absY;
  emxArray_real_T *b;
  emxArray_real_T *b_P_para;
  emxArray_real_T *b_delta0;
  emxArray_real_T *b_hat;
  emxArray_real_T *betam;
  emxArray_real_T *betam_;
  emxArray_real_T *candidate_S;
  emxArray_real_T *quan;
  emxArray_real_T *r2;
  emxArray_real_T *retf;
  emxArray_real_T *sig2;
  emxArray_real_T *sig2_hat;
  emxArray_real_T *sig2m;
  emxArray_real_T *vec_P;
  real_T b_P[2];
  real_T c_P[2];
  real_T c_P_para[2];
  const real_T *Y_data;
  const real_T *alpha0_data;
  const real_T *beta0_data;
  const real_T *delta0_data;
  real_T T_s;
  real_T b_prior;
  real_T beta;
  real_T d;
  real_T lnpost_hat;
  real_T logLikel;
  real_T n;
  real_T sig2_prior;
  real_T x;
  real_T *P_data;
  real_T *P_hat_data;
  real_T *P_para_data;
  real_T *Sm_data;
  real_T *absY_data;
  real_T *b_data;
  real_T *b_delta0_data;
  real_T *b_hat_data;
  real_T *betam_data;
  real_T *candidate_S_data;
  real_T *quan_data;
  real_T *r3;
  real_T *retf_data;
  real_T *sig2_data;
  real_T *sig2_hat_data;
  real_T *sig2m_data;
  real_T *vec_P_data;
  int32_T iv[3];
  int32_T b_candidate_S[2];
  int32_T b_input_sizes[2];
  int32_T input_sizes[2];
  int32_T sizes[2];
  int32_T T;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T input_sizes_idx_1;
  int32_T isForecast;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T nz;
  int32_T *ii_data;
  char_T cv4[37];
  boolean_T b_b;
  boolean_T guard1 = false;
  boolean_T testS;
  boolean_T *S_plus_data;
  boolean_T *r6;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  delta0_data = delta0->data;
  alpha0_data = alpha0->data;
  beta0_data = beta0->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  */
  /*  Markov-Switching Model */
  /*  */
  /*  s: number of state */
  /*  n0, n1: burn in size, effective sampling size */
  /*  Spec: It need Prior for */
  /*        beta;Normal(beta0, B0_), sig_2;IG(alpha/2, delta/2) P;Dirichlet(a0,a1) */
  /*        a1은 P의 대각원소와 관련된 하이퍼 파라미터이고 a0는 P의 비대각원소와 관련된 하이퍼 파라미터이다. */
  /*        Pss의 사전 평균 = a1/(a0*(s - 1) + a1) */
  /*  switchingind : 1이면 beta만 구조변화, 2이면 sig2만 구조변화, 3 이면 둘다 구조변화 */
  /*  idenind: 1이면 beta에 식별제약, 2이면 sig2에 식별제약, 3이면 P에 식별제약 */
  st.site = &tl_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);
  n = n0 + n1;
  if (forecast == 'Y') {
    isForecast = 1;

    /*   예측하기 */
  } else {
    isForecast = 0;

    /*  예측 안하기 */
  }

  /*  저장할 방 */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &y_emlrtDCI, (emlrtCTX)sp);
  }

  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &x_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Yfm->size[0];
  loop_ub = (int32_T)n;
  Output->Yfm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Output->Yfm, i1, &dc_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &x_emlrtDCI, (emlrtCTX)sp);
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->Yfm->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &Sm, 2, &ec_emlrtRTEI);
  T = X->size[0];

  /*  데이터의 수 */
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = (int32_T)n;
  i2 = Sm->size[0] * Sm->size[1];
  Sm->size[0] = i1;
  Sm->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, Sm, i2, &ec_emlrtRTEI);
  Sm_data = Sm->data;
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &ab_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = i1 * X->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Sm_data[i2] = 0.0;
  }

  emxInit_real_T(sp, &betam, 3, &fc_emlrtRTEI);

  /*  샘플링된 S 들을 저장 */
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }

  i2 = betam->size[0] * betam->size[1] * betam->size[2];
  betam->size[0] = i1;
  betam->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, betam, i2, &fc_emlrtRTEI);
  if (!(s >= 0.0)) {
    emlrtNonNegativeCheckR2012b(s, &p_emlrtDCI, (emlrtCTX)sp);
  }

  i2 = (int32_T)muDoubleScalarFloor(s);
  if (s != i2) {
    emlrtIntegerCheckR2012b(s, &o_emlrtDCI, (emlrtCTX)sp);
  }

  i3 = betam->size[0] * betam->size[1] * betam->size[2];
  betam->size[2] = (int32_T)s;
  emxEnsureCapacity_real_T(sp, betam, i3, &fc_emlrtRTEI);
  betam_data = betam->data;
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &bb_emlrtDCI, (emlrtCTX)sp);
  }

  if (s != i2) {
    emlrtIntegerCheckR2012b(s, &bb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = i1 * X->size[1] * (int32_T)s;
  for (i3 = 0; i3 < loop_ub; i3++) {
    betam_data[i3] = 0.0;
  }

  /*  i 번째 층에 i번째 상태에 대한 beta가 저장 */
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &emlrtDCI, (emlrtCTX)sp);
  }

  if (s != i2) {
    emlrtIntegerCheckR2012b(s, &b_emlrtDCI, (emlrtCTX)sp);
  }

  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &q_emlrtDCI, (emlrtCTX)sp);
  }

  i3 = Output->Pm->size[0] * Output->Pm->size[1];
  Output->Pm->size[0] = i1;
  emxEnsureCapacity_real_T(sp, Output->Pm, i3, &gc_emlrtRTEI);
  d = s * s;
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &r_emlrtDCI, (emlrtCTX)sp);
  }

  i3 = Output->Pm->size[0] * Output->Pm->size[1];
  Output->Pm->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, Output->Pm, i3, &gc_emlrtRTEI);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &cb_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = i1 * (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    Output->Pm->data[i] = 0.0;
  }

  /*  P 행렬 전체가 sampling 되어 벡터로 Pm에 저장됨 */
  i = Output->Changepointm->size[0];
  Output->Changepointm->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, Output->Changepointm, i, &hc_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    Output->Changepointm->data[i] = 0.0;
  }

  /*  logLik = zeros(n,1); */
  loop_ub = (int32_T)s;
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &c_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &P, 2, &ic_emlrtRTEI);

  /*  logLikel = zeros(T,1); */
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &s_emlrtDCI, (emlrtCTX)sp);
  }

  i = P->size[0] * P->size[1];
  P->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, P, i, &ic_emlrtRTEI);
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &t_emlrtDCI, (emlrtCTX)sp);
  }

  i = P->size[0] * P->size[1];
  P->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, P, i, &ic_emlrtRTEI);
  P_data = P->data;
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &db_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub_tmp = loop_ub * loop_ub;
  for (i = 0; i < loop_ub_tmp; i++) {
    P_data[i] = 0.0;
  }

  emxInit_real_T(sp, &P_para, 2, &jc_emlrtRTEI);
  i = P_para->size[0] * P_para->size[1];
  P_para->size[0] = loop_ub;
  P_para->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, P_para, i, &jc_emlrtRTEI);
  P_para_data = P_para->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    P_para_data[i] = 0.0;
  }

  /*  초기값 */
  st.site = &fm_emlrtRSI;
  disp(&st, p_emlrt_marshallOut(), &b_emlrtMCI);
  st.site = &ul_emlrtRSI;
  disp(&st, b_emlrt_marshallOut(&st, b_cv1), &c_emlrtMCI);
  st.site = &gm_emlrtRSI;
  disp(&st, p_emlrt_marshallOut(), &d_emlrtMCI);
  emxInit_real_T(sp, &b, 2, &uf_emlrtRTEI);
  emxInit_real_T(sp, &retf, 2, &yf_emlrtRTEI);
  if (switchingind == 2.0) {
    if (loop_ub != i2) {
      emlrtIntegerCheckR2012b(s, &eb_emlrtDCI, (emlrtCTX)sp);
    }

    i = retf->size[0] * retf->size[1];
    retf->size[0] = 1;
    retf->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, retf, i, &lc_emlrtRTEI);
    retf_data = retf->data;
    for (i = 0; i < loop_ub; i++) {
      retf_data[i] = 1.0;
    }

    st.site = &qb_emlrtRSI;
    kron(&st, retf, beta0, b);
  } else {
    i = b->size[0] * b->size[1];
    b->size[0] = beta0->size[0];
    b->size[1] = beta0->size[1];
    emxEnsureCapacity_real_T(sp, b, i, &kc_emlrtRTEI);
    b_data = b->data;
    b_loop_ub = beta0->size[0] * beta0->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      b_data[i] = beta0_data[i];
    }
  }

  emxInit_real_T(sp, &candidate_S, 1, &tf_emlrtRTEI);
  i = candidate_S->size[0];
  candidate_S->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, candidate_S, i, &mc_emlrtRTEI);
  candidate_S_data = candidate_S->data;
  b_loop_ub = X->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    candidate_S_data[i] = 0.0;
  }

  /*  Initial value for S */
  emxInit_real_T(sp, &quan, 1, &rc_emlrtRTEI);
  emxInit_boolean_T(sp, &S_plus, 1, &vc_emlrtRTEI);
  emxInit_real_T(sp, &absY, 1, &vf_emlrtRTEI);
  if (idenind == 1.0) {
    i = candidate_S->size[0];
    candidate_S->size[0] = X->size[0];
    emxEnsureCapacity_real_T(sp, candidate_S, i, &nc_emlrtRTEI);
    candidate_S_data = candidate_S->data;
    b_loop_ub = X->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      candidate_S_data[i] = 1.0;
    }

    if (s == 2.0) {
      st.site = &pb_emlrtRSI;
      r = &st;
      d = median(r, Y);
      i = quan->size[0];
      quan->size[0] = 1;
      emxEnsureCapacity_real_T(&st, quan, i, &rc_emlrtRTEI);
      quan_data = quan->data;
      quan_data[0] = d;
    } else {
      st.site = &ob_emlrtRSI;
      quantile(&st, Y, s - 1.0, retf);
      retf_data = retf->data;
      i = quan->size[0];
      quan->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, quan, i, &qc_emlrtRTEI);
      quan_data = quan->data;
      b_loop_ub = retf->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        quan_data[i] = retf_data[i];
      }
    }

    i = (int32_T)s - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s - 1.0, mxDOUBLE_CLASS, (int32_T)s
      - 1, &e_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < i; b_i++) {
      if ((int32_T)(b_i + 1U) > quan->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, quan->size[0],
          &kc_emlrtBCI, (emlrtCTX)sp);
      }

      b_loop_ub = Y->size[0];
      i3 = S_plus->size[0];
      S_plus->size[0] = Y->size[0];
      emxEnsureCapacity_boolean_T(sp, S_plus, i3, &vc_emlrtRTEI);
      S_plus_data = S_plus->data;
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        S_plus_data[i3] = (Y_data[i3] > quan_data[b_i]);
      }

      b_loop_ub = candidate_S->size[0];
      if ((candidate_S->size[0] != S_plus->size[0]) && ((candidate_S->size[0] !=
            1) && (S_plus->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(candidate_S->size[0], S_plus->size[0],
          &emlrtECI, (emlrtCTX)sp);
      }

      if (candidate_S->size[0] == S_plus->size[0]) {
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          candidate_S_data[i3] += (real_T)S_plus_data[i3];
        }
      } else {
        st.site = &rm_emlrtRSI;
        binary_expand_op(&st, candidate_S, S_plus);
        candidate_S_data = candidate_S->data;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  } else if (idenind == 2.0) {
    st.site = &nb_emlrtRSI;
    power(&st, Y, absY);
    absY_data = absY->data;
    i = candidate_S->size[0];
    candidate_S->size[0] = X->size[0];
    emxEnsureCapacity_real_T(sp, candidate_S, i, &oc_emlrtRTEI);
    candidate_S_data = candidate_S->data;
    b_loop_ub = X->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      candidate_S_data[i] = 1.0;
    }

    if (s == 2.0) {
      st.site = &mb_emlrtRSI;
      r1 = &st;
      d = median(r1, absY);
      i = quan->size[0];
      quan->size[0] = 1;
      emxEnsureCapacity_real_T(&st, quan, i, &tc_emlrtRTEI);
      quan_data = quan->data;
      quan_data[0] = d;
    } else {
      st.site = &lb_emlrtRSI;
      quantile(&st, absY, s - 1.0, retf);
      retf_data = retf->data;
      i = quan->size[0];
      quan->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, quan, i, &sc_emlrtRTEI);
      quan_data = quan->data;
      b_loop_ub = retf->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        quan_data[i] = retf_data[i];
      }
    }

    i = (int32_T)s - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s - 1.0, mxDOUBLE_CLASS, (int32_T)s
      - 1, &f_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < i; b_i++) {
      if ((int32_T)(b_i + 1U) > quan->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, quan->size[0],
          &lc_emlrtBCI, (emlrtCTX)sp);
      }

      b_loop_ub = absY->size[0];
      i3 = S_plus->size[0];
      S_plus->size[0] = absY->size[0];
      emxEnsureCapacity_boolean_T(sp, S_plus, i3, &xc_emlrtRTEI);
      S_plus_data = S_plus->data;
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        S_plus_data[i3] = (absY_data[i3] > quan_data[b_i]);
      }

      b_loop_ub = candidate_S->size[0];
      if ((candidate_S->size[0] != S_plus->size[0]) && ((candidate_S->size[0] !=
            1) && (S_plus->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(candidate_S->size[0], S_plus->size[0],
          &b_emlrtECI, (emlrtCTX)sp);
      }

      if (candidate_S->size[0] == S_plus->size[0]) {
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          candidate_S_data[i3] += (real_T)S_plus_data[i3];
        }
      } else {
        st.site = &qm_emlrtRSI;
        binary_expand_op(&st, candidate_S, S_plus);
        candidate_S_data = candidate_S->data;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  } else if (idenind == 3.0) {
    T_s = muDoubleScalarRound((real_T)X->size[0] / s);
    i = loop_ub - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s - 1.0, mxDOUBLE_CLASS, (int32_T)s
      - 1, &g_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < i; b_i++) {
      d = T_s * (((real_T)b_i + 1.0) - 1.0) + 1.0;
      beta = T_s * ((real_T)b_i + 1.0);
      if (d > beta) {
        i3 = 0;
        i4 = 0;
      } else {
        if (d != (int32_T)d) {
          emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)d < 1) || ((int32_T)d > candidate_S->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, candidate_S->size[0],
            &c_emlrtBCI, (emlrtCTX)sp);
        }

        i3 = (int32_T)d - 1;
        if (beta != (int32_T)beta) {
          emlrtIntegerCheckR2012b(beta, &e_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)beta < 1) || ((int32_T)beta > candidate_S->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)beta, 1, candidate_S->size[0],
            &d_emlrtBCI, (emlrtCTX)sp);
        }

        i4 = (int32_T)beta;
      }

      b_loop_ub = i4 - i3;
      for (i4 = 0; i4 < b_loop_ub; i4++) {
        candidate_S_data[i3 + i4] = (real_T)b_i + 1.0;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    d = T_s * (s - 1.0) + 1.0;
    if (d > X->size[0]) {
      i = 0;
      i3 = 0;
    } else {
      if (d != (int32_T)d) {
        emlrtIntegerCheckR2012b(d, &f_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > candidate_S->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, candidate_S->size[0],
          &e_emlrtBCI, (emlrtCTX)sp);
      }

      i = (int32_T)d - 1;
      if ((X->size[0] < 1) || (X->size[0] > candidate_S->size[0])) {
        emlrtDynamicBoundsCheckR2012b(X->size[0], 1, candidate_S->size[0],
          &f_emlrtBCI, (emlrtCTX)sp);
      }

      i3 = X->size[0];
    }

    b_loop_ub = i3 - i;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      candidate_S_data[i + i3] = s;
    }
  }

  i = quan->size[0];
  quan->size[0] = candidate_S->size[0];
  emxEnsureCapacity_real_T(sp, quan, i, &pc_emlrtRTEI);
  quan_data = quan->data;
  b_loop_ub = candidate_S->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    quan_data[i] = candidate_S_data[i];
  }

  /*  Initial value for sig2 */
  emxInit_real_T(sp, &sig2, 1, &wf_emlrtRTEI);
  emxInit_real_T(sp, &b_delta0, 1, &yc_emlrtRTEI);
  if (switchingind == 1.0) {
    st.site = &kb_emlrtRSI;
    b_st.site = &oc_emlrtRSI;
    c_st.site = &pc_emlrtRSI;
    assertCompatibleDims(&c_st, delta0, alpha0);
    if (delta0->size[0] == alpha0->size[0]) {
      if (loop_ub != i2) {
        emlrtIntegerCheckR2012b(s, &fb_emlrtDCI, (emlrtCTX)sp);
      }

      i = absY->size[0];
      absY->size[0] = loop_ub;
      emxEnsureCapacity_real_T(sp, absY, i, &wc_emlrtRTEI);
      absY_data = absY->data;
      for (i = 0; i < loop_ub; i++) {
        absY_data[i] = 1.0;
      }

      i = b_delta0->size[0];
      b_delta0->size[0] = delta0->size[0];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &yc_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      b_loop_ub = delta0->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        b_delta0_data[i] = delta0_data[i] / alpha0_data[i];
      }

      st.site = &kb_emlrtRSI;
      b_kron(&st, absY, b_delta0, sig2);
      sig2_data = sig2->data;
    } else {
      st.site = &kb_emlrtRSI;
      d_binary_expand_op(&st, sig2, kb_emlrtRSI, s, delta0, alpha0);
      sig2_data = sig2->data;
    }
  } else {
    st.site = &jb_emlrtRSI;
    b_st.site = &oc_emlrtRSI;
    c_st.site = &pc_emlrtRSI;
    assertCompatibleDims(&c_st, delta0, alpha0);
    if (delta0->size[0] == alpha0->size[0]) {
      i = sig2->size[0];
      sig2->size[0] = delta0->size[0];
      emxEnsureCapacity_real_T(&b_st, sig2, i, &uc_emlrtRTEI);
      sig2_data = sig2->data;
      b_loop_ub = delta0->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        sig2_data[i] = delta0_data[i] / alpha0_data[i];
      }
    } else {
      c_st.site = &ym_emlrtRSI;
      rdivide(&c_st, sig2, delta0, alpha0);
      sig2_data = sig2->data;
    }
  }

  /*  Initial value for P */
  emxInit_real_T(sp, &r2, 2, &ne_emlrtRTEI);
  if ((idenind == 1.0) || (idenind == 2.0)) {
    if (loop_ub != i2) {
      emlrtIntegerCheckR2012b(s, &g_emlrtDCI, (emlrtCTX)sp);
    }

    i = P->size[0] * P->size[1];
    P->size[0] = loop_ub;
    P->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, P, i, &ad_emlrtRTEI);
    P_data = P->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      P_data[i] = a0;
    }

    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
      &h_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if ((int32_T)(b_i + 1U) > P->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, P->size[0],
          &mc_emlrtBCI, (emlrtCTX)sp);
      }

      if ((int32_T)(b_i + 1U) > P->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, P->size[1],
          &nc_emlrtBCI, (emlrtCTX)sp);
      }

      P_data[b_i + P->size[0] * b_i] = a1;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    i = P_para->size[0] * P_para->size[1];
    P_para->size[0] = P->size[0];
    P_para->size[1] = P->size[1];
    emxEnsureCapacity_real_T(sp, P_para, i, &cd_emlrtRTEI);
    P_para_data = P_para->data;
    b_loop_ub = P->size[0] * P->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      P_para_data[i] = P_data[i];
    }

    b_loop_ub = P->size[0] * P->size[1];
    T_s = a0 * (s - 1.0) + a1;
    for (i = 0; i < b_loop_ub; i++) {
      P_data[i] /= T_s;
    }
  } else if (idenind == 3.0) {
    st.site = &ib_emlrtRSI;
    eye(&st, s, P);
    P_data = P->data;
    b_loop_ub = P->size[0] * P->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      P_data[i] *= a1;
    }

    input_sizes_idx_1 = (int32_T)s - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s - 1.0, mxDOUBLE_CLASS, (int32_T)s
      - 1, &i_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < input_sizes_idx_1; b_i++) {
      if ((int32_T)(b_i + 1U) > P->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, P->size[0],
          &oc_emlrtBCI, (emlrtCTX)sp);
      }

      if ((int32_T)(b_i + 2U) > P->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P->size[1],
          &pc_emlrtBCI, (emlrtCTX)sp);
      }

      P_data[b_i + P->size[0] * (b_i + 1)] = a0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    i = P_para->size[0] * P_para->size[1];
    P_para->size[0] = P->size[0];
    P_para->size[1] = P->size[1];
    emxEnsureCapacity_real_T(sp, P_para, i, &dd_emlrtRTEI);
    P_para_data = P_para->data;
    b_loop_ub = P->size[0] * P->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      P_para_data[i] = P_data[i];
    }

    if (1.0 > s - 1.0) {
      input_sizes_idx_1 = 0;
      i = 0;
    } else {
      if (1 > P->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, P->size[0], &g_emlrtBCI, (emlrtCTX)
          sp);
      }

      if ((s - 1.0 < 1.0) || (input_sizes_idx_1 > P->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)s - 1, 1, P->size[0], &h_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (1 > P->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, P->size[0], &i_emlrtBCI, (emlrtCTX)
          sp);
      }

      if ((s - 1.0 < 1.0) || (input_sizes_idx_1 > P->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)s - 1, 1, P->size[0], &j_emlrtBCI,
          (emlrtCTX)sp);
      }

      i = input_sizes_idx_1;
    }

    T_s = a0 + a1;
    b_loop_ub = P->size[1];
    i3 = r2->size[0] * r2->size[1];
    r2->size[0] = input_sizes_idx_1;
    r2->size[1] = P->size[1];
    emxEnsureCapacity_real_T(sp, r2, i3, &fd_emlrtRTEI);
    r3 = r2->data;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      for (i4 = 0; i4 < input_sizes_idx_1; i4++) {
        r3[i4 + r2->size[0] * i3] = P_data[i4 + P->size[0] * i3] / T_s;
      }
    }

    b_candidate_S[0] = i;
    b_candidate_S[1] = P->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_candidate_S[0], 2, &r2->size[0], 2,
      &c_emlrtECI, (emlrtCTX)sp);
    b_loop_ub = r2->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      input_sizes_idx_1 = r2->size[0];
      for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
        P_data[i3 + P->size[0] * i] = r3[i3 + r2->size[0] * i];
      }
    }

    if ((s < 1.0) || (loop_ub > P->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)s, 1, P->size[0], &k_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_loop_ub = P->size[1];
    i = retf->size[0] * retf->size[1];
    retf->size[0] = 1;
    retf->size[1] = P->size[1];
    emxEnsureCapacity_real_T(sp, retf, i, &id_emlrtRTEI);
    retf_data = retf->data;
    for (i = 0; i < b_loop_ub; i++) {
      retf_data[i] = P_data[(loop_ub + P->size[0] * i) - 1] / a1;
    }

    b_candidate_S[0] = 1;
    b_candidate_S[1] = P->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_candidate_S[0], 2, &retf->size[0], 2,
      &d_emlrtECI, (emlrtCTX)sp);
    b_loop_ub = retf->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      P_data[(loop_ub + P->size[0] * i) - 1] = retf_data[i];
    }
  }

  emxInit_real_T(sp, &b_hat, 2, &bd_emlrtRTEI);

  /*  MCMC 시작 */
  i = b_hat->size[0] * b_hat->size[1];
  b_hat->size[0] = X->size[1];
  emxEnsureCapacity_real_T(sp, b_hat, i, &bd_emlrtRTEI);
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &u_emlrtDCI, (emlrtCTX)sp);
  }

  i = b_hat->size[0] * b_hat->size[1];
  b_hat->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_hat, i, &bd_emlrtRTEI);
  b_hat_data = b_hat->data;
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &gb_emlrtDCI, (emlrtCTX)sp);
  }

  b_loop_ub = X->size[1] * loop_ub;
  for (i = 0; i < b_loop_ub; i++) {
    b_hat_data[i] = 0.0;
  }

  emxInit_real_T(sp, &P_hat, 2, &ed_emlrtRTEI);
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &v_emlrtDCI, (emlrtCTX)sp);
  }

  i = P_hat->size[0] * P_hat->size[1];
  P_hat->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, P_hat, i, &ed_emlrtRTEI);
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &w_emlrtDCI, (emlrtCTX)sp);
  }

  i = P_hat->size[0] * P_hat->size[1];
  P_hat->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, P_hat, i, &ed_emlrtRTEI);
  P_hat_data = P_hat->data;
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &hb_emlrtDCI, (emlrtCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    P_hat_data[i] = 0.0;
  }

  emxInit_real_T(sp, &sig2_hat, 1, &gd_emlrtRTEI);
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &ib_emlrtDCI, (emlrtCTX)sp);
  }

  i = sig2_hat->size[0];
  sig2_hat->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, sig2_hat, i, &gd_emlrtRTEI);
  sig2_hat_data = sig2_hat->data;
  if (loop_ub != i2) {
    emlrtIntegerCheckR2012b(s, &ib_emlrtDCI, (emlrtCTX)sp);
  }

  for (i = 0; i < loop_ub; i++) {
    sig2_hat_data[i] = 0.0;
  }

  emxInit_real_T(sp, &sig2m, 2, &sf_emlrtRTEI);
  lnpost_hat = -4.8516519540979028E+8;

  /*  임의로 값을 주고 시작함 */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &j_emlrtRTEI, (emlrtCTX)sp);
  i = sig2m->size[0] * sig2m->size[1];
  sig2m->size[0] = i1;
  sig2m->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, sig2m, i, &hd_emlrtRTEI);
  sig2m_data = sig2m->data;
  if (0.0 <= n - 1.0) {
    i5 = loop_ub;
  }

  emxInit_real_T(sp, &vec_P, 2, &oe_emlrtRTEI);
  emxInit_real_T(sp, &betam_, 2, &jd_emlrtRTEI);
  emxInit_int32_T(sp, &ii, 1, &xf_emlrtRTEI);
  emxInit_real_T(sp, &b_P_para, 2, &lf_emlrtRTEI);
  for (loop_ub_tmp = 0; loop_ub_tmp < i1; loop_ub_tmp++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((loop_ub_tmp - (int32_T)muDoubleScalarFloor(((real_T)loop_ub_tmp + 1.0) /
          100.0) * 100) + 1 == 0) {
      st.site = &nm_emlrtRSI;
      clc(&st, &g_emlrtMCI);
      for (i = 0; i < 37; i++) {
        cv4[i] = '=';
      }

      st.site = &vl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv4), &h_emlrtMCI);
      st.site = &hb_emlrtRSI;
      b_st.site = &uc_emlrtRSI;
      c_st.site = &em_emlrtRSI;
      d_st.site = &am_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, k_emlrt_marshallOut(&c_st, cv5),
        l_emlrt_marshallOut(1.0), g_emlrt_marshallOut(&d_st, cv6),
        l_emlrt_marshallOut((real_T)loop_ub_tmp + 1.0), &t_emlrtMCI),
                       "<output of feval>");
      for (i = 0; i < 37; i++) {
        cv4[i] = '=';
      }

      st.site = &wl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv4), &i_emlrtMCI);
      st.site = &hm_emlrtRSI;
      disp(&st, p_emlrt_marshallOut(), &j_emlrtMCI);
      if (idenind == 1.0) {
        st.site = &xl_emlrtRSI;
        disp(&st, d_emlrt_marshallOut(&st, cv7), &k_emlrtMCI);
        st.site = &gb_emlrtRSI;
        b_st.site = &wc_emlrtRSI;
        dynamic_size_checks(&b_st, betaiden, b, betaiden->size[1], b->size[0]);
        b_st.site = &vc_emlrtRSI;
        mtimes(&b_st, betaiden, b, retf);
        st.site = &gb_emlrtRSI;
        disp(&st, e_emlrt_marshallOut(retf), &m_emlrtMCI);
        st.site = &mm_emlrtRSI;
        disp(&st, p_emlrt_marshallOut(), &p_emlrtMCI);
        emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
          &k_emlrtRTEI, (emlrtCTX)sp);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          st.site = &fb_emlrtRSI;
          b_loop_ub = candidate_S->size[0];
          i = S_plus->size[0];
          S_plus->size[0] = candidate_S->size[0];
          emxEnsureCapacity_boolean_T(&st, S_plus, i, &od_emlrtRTEI);
          S_plus_data = S_plus->data;
          for (i = 0; i < b_loop_ub; i++) {
            S_plus_data[i] = (candidate_S_data[i] == (real_T)b_i + 1.0);
          }

          b_st.site = &ad_emlrtRSI;
          c_st.site = &bd_emlrtRSI;
          nz = combineVectorElements(&c_st, S_plus);
          st.site = &fb_emlrtRSI;
          b_st.site = &uc_emlrtRSI;
          c_st.site = &em_emlrtRSI;
          d_st.site = &am_emlrtRSI;
          emlrt_marshallIn(&c_st, b_feval(&c_st, k_emlrt_marshallOut(&c_st, cv5),
            l_emlrt_marshallOut(1.0), m_emlrt_marshallOut(&d_st, cv10),
            l_emlrt_marshallOut((real_T)b_i + 1.0), l_emlrt_marshallOut((real_T)
            nz / (real_T)T), &t_emlrtMCI), "<output of feval>");
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      } else if (idenind == 2.0) {
        st.site = &yl_emlrtRSI;
        disp(&st, f_emlrt_marshallOut(&st, cv8), &l_emlrtMCI);
        i = retf->size[0] * retf->size[1];
        retf->size[0] = 1;
        retf->size[1] = sig2->size[0];
        emxEnsureCapacity_real_T(sp, retf, i, &ld_emlrtRTEI);
        retf_data = retf->data;
        b_loop_ub = sig2->size[0];
        for (i = 0; i < b_loop_ub; i++) {
          retf_data[i] = sig2_data[i];
        }

        st.site = &km_emlrtRSI;
        disp(&st, e_emlrt_marshallOut(retf), &o_emlrtMCI);
        st.site = &lm_emlrtRSI;
        disp(&st, p_emlrt_marshallOut(), &r_emlrtMCI);
        emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
          &l_emlrtRTEI, (emlrtCTX)sp);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          st.site = &eb_emlrtRSI;
          b_loop_ub = candidate_S->size[0];
          i = S_plus->size[0];
          S_plus->size[0] = candidate_S->size[0];
          emxEnsureCapacity_boolean_T(&st, S_plus, i, &pd_emlrtRTEI);
          S_plus_data = S_plus->data;
          for (i = 0; i < b_loop_ub; i++) {
            S_plus_data[i] = (candidate_S_data[i] == (real_T)b_i + 1.0);
          }

          b_st.site = &ad_emlrtRSI;
          c_st.site = &bd_emlrtRSI;
          nz = combineVectorElements(&c_st, S_plus);
          st.site = &eb_emlrtRSI;
          b_st.site = &uc_emlrtRSI;
          c_st.site = &em_emlrtRSI;
          d_st.site = &am_emlrtRSI;
          emlrt_marshallIn(&c_st, b_feval(&c_st, k_emlrt_marshallOut(&c_st, cv5),
            l_emlrt_marshallOut(1.0), m_emlrt_marshallOut(&d_st, cv10),
            l_emlrt_marshallOut((real_T)b_i + 1.0), l_emlrt_marshallOut((real_T)
            nz / (real_T)T), &t_emlrtMCI), "<output of feval>");
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      } else if (idenind == 3.0) {
        st.site = &bm_emlrtRSI;
        disp(&st, g_emlrt_marshallOut(&st, cv9), &n_emlrtMCI);
        st.site = &im_emlrtRSI;
        disp(&st, h_emlrt_marshallOut(P), &q_emlrtMCI);
        st.site = &jm_emlrtRSI;
        disp(&st, p_emlrt_marshallOut(), &s_emlrtMCI);
        emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
          &m_emlrtRTEI, (emlrtCTX)sp);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          st.site = &db_emlrtRSI;
          b_loop_ub = candidate_S->size[0];
          i = S_plus->size[0];
          S_plus->size[0] = candidate_S->size[0];
          emxEnsureCapacity_boolean_T(&st, S_plus, i, &nd_emlrtRTEI);
          S_plus_data = S_plus->data;
          for (i = 0; i < b_loop_ub; i++) {
            S_plus_data[i] = (candidate_S_data[i] == (real_T)b_i + 1.0);
          }

          b_st.site = &ad_emlrtRSI;
          c_st.site = &bd_emlrtRSI;
          nz = combineVectorElements(&c_st, S_plus);
          st.site = &db_emlrtRSI;
          b_st.site = &uc_emlrtRSI;
          c_st.site = &em_emlrtRSI;
          d_st.site = &am_emlrtRSI;
          emlrt_marshallIn(&c_st, b_feval(&c_st, k_emlrt_marshallOut(&c_st, cv5),
            l_emlrt_marshallOut(1.0), m_emlrt_marshallOut(&d_st, cv10),
            l_emlrt_marshallOut((real_T)b_i + 1.0), l_emlrt_marshallOut((real_T)
            nz / (real_T)T), &t_emlrtMCI), "<output of feval>");
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }
    }

    /*   Step 1 : beta 샘플링 */
    st.site = &cb_emlrtRSI;
    Gen_beta(&st, Y, X, candidate_S, sig2, beta0, B0, b, switchingind, idenind,
             betaiden, s);
    b_data = b->data;
    if (loop_ub_tmp + 1 > betam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, betam->size[0],
        &kb_emlrtBCI, (emlrtCTX)sp);
    }

    iv[0] = 1;
    input_sizes_idx_1 = betam->size[1];
    iv[1] = betam->size[1];
    iv[2] = betam->size[2];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &b->size[0], 2, &h_emlrtECI,
      (emlrtCTX)sp);
    iv[1] = betam->size[1];
    b_loop_ub = betam->size[2];
    for (i = 0; i < b_loop_ub; i++) {
      for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
        betam_data[(loop_ub_tmp + betam->size[0] * i3) + betam->size[0] *
          betam->size[1] * i] = b_data[i3 + iv[1] * i];
      }
    }

    /*   Step 2 : sig2 샘플링 */
    st.site = &bb_emlrtRSI;
    Gen_Sigma(&st, Y, X, candidate_S, b, sig2, alpha0, delta0, switchingind,
              idenind, s);
    sig2_data = sig2->data;
    if (loop_ub_tmp + 1 > sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, sig2m->size[0],
        &pb_emlrtBCI, (emlrtCTX)sp);
    }

    b_candidate_S[0] = 1;
    b_candidate_S[1] = sig2m->size[1];
    sizes[0] = 1;
    sizes[1] = sig2->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_candidate_S[0], 2, &sizes[0], 2,
      &i_emlrtECI, (emlrtCTX)sp);
    b_loop_ub = sig2->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      sig2m_data[loop_ub_tmp + sig2m->size[0] * i] = sig2_data[i];
    }

    /*   Step 3 : S 샘플링 */
    st.site = &ab_emlrtRSI;
    Filter(&st, Y, X, b, sig2, P, idenind, s, betam_, &logLikel);

    /*      logLik(iter, :) = logLikel(1,1); */
    st.site = &y_emlrtRSI;
    sgen(&st, betam_, P, candidate_S);
    candidate_S_data = candidate_S->data;
    if (loop_ub != i2) {
      emlrtIntegerCheckR2012b(s, &jb_emlrtDCI, (emlrtCTX)sp);
    }

    i = absY->size[0];
    absY->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, absY, i, &rd_emlrtRTEI);
    absY_data = absY->data;
    if (loop_ub != i2) {
      emlrtIntegerCheckR2012b(s, &jb_emlrtDCI, (emlrtCTX)sp);
    }

    for (i = 0; i < loop_ub; i++) {
      absY_data[i] = 0.0;
    }

    emlrtForLoopVectorCheckR2021a(1.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s,
      &n_emlrtRTEI, (emlrtCTX)sp);
    if (0 <= i5 - 1) {
      c_loop_ub = candidate_S->size[0];
    }

    for (b_i = 0; b_i < i5; b_i++) {
      st.site = &x_emlrtRSI;
      i = S_plus->size[0];
      S_plus->size[0] = candidate_S->size[0];
      emxEnsureCapacity_boolean_T(&st, S_plus, i, &xd_emlrtRTEI);
      S_plus_data = S_plus->data;
      for (i = 0; i < c_loop_ub; i++) {
        S_plus_data[i] = (candidate_S_data[i] == (real_T)b_i + 1.0);
      }

      b_st.site = &ad_emlrtRSI;
      c_st.site = &bd_emlrtRSI;
      nz = combineVectorElements(&c_st, S_plus);
      if ((int32_T)(b_i + 1U) > absY->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, absY->size[0],
          &qc_emlrtBCI, (emlrtCTX)sp);
      }

      absY_data[b_i] = (real_T)nz / (real_T)T;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    st.site = &w_emlrtRSI;
    i = S_plus->size[0];
    S_plus->size[0] = absY->size[0];
    emxEnsureCapacity_boolean_T(&st, S_plus, i, &wd_emlrtRTEI);
    S_plus_data = S_plus->data;
    b_loop_ub = absY->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      S_plus_data[i] = (absY_data[i] >= lowerbound);
    }

    b_st.site = &we_emlrtRSI;
    c_st.site = &xe_emlrtRSI;
    e_st.site = &ye_emlrtRSI;
    if (S_plus->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&e_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    f_st.site = &af_emlrtRSI;
    input_sizes_idx_1 = S_plus->size[0];
    g_st.site = &bf_emlrtRSI;
    testS = S_plus_data[0];
    h_st.site = &cf_emlrtRSI;
    if ((2 <= S_plus->size[0]) && (S_plus->size[0] > 2147483646)) {
      i_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (nz = 2; nz <= input_sizes_idx_1; nz++) {
      b_b = S_plus_data[nz - 1];
      testS = (((int32_T)testS <= (int32_T)b_b) && testS);
    }

    if (!testS) {
      if (loop_ub_tmp + 1U < 10U) {
        b_loop_ub = quan->size[0];
        i = candidate_S->size[0];
        candidate_S->size[0] = quan->size[0];
        emxEnsureCapacity_real_T(sp, candidate_S, i, &je_emlrtRTEI);
        candidate_S_data = candidate_S->data;
        for (i = 0; i < b_loop_ub; i++) {
          candidate_S_data[i] = quan_data[i];
        }
      } else {
        i = absY->size[0];
        absY->size[0] = loop_ub_tmp;
        emxEnsureCapacity_real_T(sp, absY, i, &ie_emlrtRTEI);
        absY_data = absY->data;
        for (i = 0; i < loop_ub_tmp; i++) {
          absY_data[i] = 1.0 / ((real_T)loop_ub_tmp + 1.0) - 1.0;
        }

        st.site = &v_emlrtRSI;
        T_s = discret1(&st, absY);
        if (((int32_T)T_s < 1) || ((int32_T)T_s > Sm->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)T_s, 1, Sm->size[0],
            &l_emlrtBCI, (emlrtCTX)sp);
        }

        b_loop_ub = Sm->size[1];
        i = candidate_S->size[0];
        candidate_S->size[0] = Sm->size[1];
        emxEnsureCapacity_real_T(sp, candidate_S, i, &me_emlrtRTEI);
        candidate_S_data = candidate_S->data;
        for (i = 0; i < b_loop_ub; i++) {
          candidate_S_data[i] = Sm_data[((int32_T)T_s + Sm->size[0] * i) - 1];
        }
      }
    }

    if (loop_ub_tmp + 1 > Sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, Sm->size[0], &m_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_candidate_S[0] = 1;
    b_candidate_S[1] = Sm->size[1];
    sizes[0] = 1;
    sizes[1] = candidate_S->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_candidate_S[0], 2, &sizes[0], 2,
      &e_emlrtECI, (emlrtCTX)sp);
    b_loop_ub = candidate_S->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      Sm_data[loop_ub_tmp + Sm->size[0] * i] = candidate_S_data[i];
    }

    if ((idenind == 3.0) && ((real_T)loop_ub_tmp + 1.0 > n0)) {
      if (2 > candidate_S->size[0]) {
        i = -1;
        i3 = -1;
      } else {
        i = 0;
        i3 = candidate_S->size[0] - 1;
      }

      b_candidate_S[0] = 1;
      input_sizes_idx_1 = i3 - i;
      b_candidate_S[1] = input_sizes_idx_1;
      st.site = &u_emlrtRSI;
      indexShapeCheck(&st, candidate_S->size[0], b_candidate_S);
      if (1 > candidate_S->size[0] - 1) {
        i4 = 0;
      } else {
        if (1 > candidate_S->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, candidate_S->size[0], &n_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((candidate_S->size[0] - 1 < 1) || (candidate_S->size[0] - 1 >
             candidate_S->size[0])) {
          emlrtDynamicBoundsCheckR2012b(candidate_S->size[0] - 1, 1,
            candidate_S->size[0], &o_emlrtBCI, (emlrtCTX)sp);
        }

        i4 = candidate_S->size[0] - 1;
      }

      b_candidate_S[0] = 1;
      b_candidate_S[1] = i4;
      st.site = &u_emlrtRSI;
      indexShapeCheck(&st, candidate_S->size[0], b_candidate_S);
      if ((input_sizes_idx_1 != i4) && ((input_sizes_idx_1 != 1) && (i4 != 1)))
      {
        emlrtDimSizeImpxCheckR2021b(input_sizes_idx_1, i4, &f_emlrtECI,
          (emlrtCTX)sp);
      }

      /*  상태가 1에서 2로 변한 시점 찾기 */
      st.site = &t_emlrtRSI;
      if (input_sizes_idx_1 == i4) {
        i3 = S_plus->size[0];
        S_plus->size[0] = input_sizes_idx_1;
        emxEnsureCapacity_boolean_T(&st, S_plus, i3, &re_emlrtRTEI);
        S_plus_data = S_plus->data;
        for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
          S_plus_data[i3] = (candidate_S_data[(i + i3) + 1] -
                             candidate_S_data[i3] == 1.0);
        }

        b_st.site = &mi_emlrtRSI;
        eml_find(&b_st, S_plus, ii);
        ii_data = ii->data;
      } else {
        b_st.site = &mi_emlrtRSI;
        b_binary_expand_op(&b_st, ii, mi_emlrtRSI, candidate_S, i + 1, i3, i4 -
                           1);
        ii_data = ii->data;
      }

      i = absY->size[0];
      absY->size[0] = ii->size[0];
      emxEnsureCapacity_real_T(sp, absY, i, &se_emlrtRTEI);
      absY_data = absY->data;
      b_loop_ub = ii->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        absY_data[i] = (real_T)ii_data[i] + 1.0;
      }

      /*  구조변화시점 */
      i = ii->size[0];
      ii->size[0] = absY->size[0];
      emxEnsureCapacity_int32_T(sp, ii, i, &ue_emlrtRTEI);
      ii_data = ii->data;
      b_loop_ub = absY->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        i3 = (int32_T)absY_data[i];
        if ((i3 < 1) || (i3 > Output->Changepointm->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)absY_data[i], 1,
            Output->Changepointm->size[0], &sc_emlrtBCI, (emlrtCTX)sp);
        }

        ii_data[i] = i3;
      }

      b_loop_ub = absY->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        i3 = (int32_T)absY_data[i];
        if ((i3 < 1) || (i3 > Output->Changepointm->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, Output->Changepointm->size[0],
            &tc_emlrtBCI, (emlrtCTX)sp);
        }
      }

      if (ii->size[0] != absY->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(ii->size[0], absY->size[0], &g_emlrtECI,
          (emlrtCTX)sp);
      }

      i = b_delta0->size[0];
      b_delta0->size[0] = absY->size[0];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &we_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      b_loop_ub = absY->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        b_delta0_data[i] = Output->Changepointm->data[(int32_T)absY_data[i] - 1]
          + 1.0;
      }

      b_loop_ub = b_delta0->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        Output->Changepointm->data[ii_data[i] - 1] = b_delta0_data[i];
      }

      /*  구조변화시점 행에 횟수를 하나 추가 */
    }

    /*   Step 4 : P 샘플링 */
    st.site = &s_emlrtRSI;
    Gen_P(&st, s, candidate_S, a0, a1, idenind, P);
    P_data = P->data;
    i = r2->size[0] * r2->size[1];
    r2->size[0] = P->size[0];
    r2->size[1] = P->size[1];
    emxEnsureCapacity_real_T(sp, r2, i, &ne_emlrtRTEI);
    r3 = r2->data;
    b_loop_ub = P->size[0] * P->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      r3[i] = P_data[i];
    }

    st.site = &r_emlrtRSI;
    vec(&st, r2);
    r3 = r2->data;
    i = vec_P->size[0] * vec_P->size[1];
    vec_P->size[0] = r2->size[1];
    vec_P->size[1] = r2->size[0];
    emxEnsureCapacity_real_T(sp, vec_P, i, &oe_emlrtRTEI);
    vec_P_data = vec_P->data;
    b_loop_ub = r2->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      input_sizes_idx_1 = r2->size[1];
      for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
        vec_P_data[i3 + vec_P->size[0] * i] = r3[i + r2->size[0] * i3];
      }
    }

    if (loop_ub_tmp + 1 > Output->Pm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, Output->Pm->size[0],
        &sb_emlrtBCI, (emlrtCTX)sp);
    }

    if (1 > vec_P->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_P->size[0], &p_emlrtBCI, (emlrtCTX)
        sp);
    }

    b_loop_ub = vec_P->size[1];
    i = retf->size[0] * retf->size[1];
    retf->size[0] = 1;
    retf->size[1] = vec_P->size[1];
    emxEnsureCapacity_real_T(sp, retf, i, &qe_emlrtRTEI);
    retf_data = retf->data;
    for (i = 0; i < b_loop_ub; i++) {
      retf_data[i] = vec_P_data[vec_P->size[0] * i];
    }

    b_candidate_S[0] = 1;
    b_candidate_S[1] = Output->Pm->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_candidate_S[0], 2, &retf->size[0], 2,
      &j_emlrtECI, (emlrtCTX)sp);
    b_loop_ub = vec_P->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      Output->Pm->data[loop_ub_tmp + Output->Pm->size[0] * i] = vec_P_data
        [vec_P->size[0] * i];
    }

    if (isForecast == 1) {
      if ((T < 1) || (T > candidate_S->size[0])) {
        emlrtDynamicBoundsCheckR2012b(T, 1, candidate_S->size[0], &rc_emlrtBCI,
          (emlrtCTX)sp);
      }

      i = (int32_T)candidate_S_data[T - 1];
      if ((i < 1) || (i > P->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, P->size[0], &q_emlrtBCI, (emlrtCTX)
          sp);
      }

      b_loop_ub = P->size[1];
      i = b_delta0->size[0];
      b_delta0->size[0] = P->size[1];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &ve_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_delta0_data[i] = P_data[((int32_T)candidate_S_data[T - 1] + P->size[0]
          * i) - 1];
      }

      st.site = &q_emlrtRSI;
      T_s = discret1(&st, b_delta0);
      if (((int32_T)T_s < 1) || ((int32_T)T_s > b->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)T_s, 1, b->size[1], &r_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (((int32_T)T_s < 1) || ((int32_T)T_s > sig2->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)T_s, 1, sig2->size[0],
          &s_emlrtBCI, (emlrtCTX)sp);
      }

      st.site = &p_emlrtRSI;
      b_loop_ub = b->size[0];
      i = b_delta0->size[0];
      b_delta0->size[0] = b->size[0];
      emxEnsureCapacity_real_T(&st, b_delta0, i, &bf_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_delta0_data[i] = b_data[i + b->size[0] * ((int32_T)T_s - 1)];
      }

      b_st.site = &wc_emlrtRSI;
      d_dynamic_size_checks(&b_st, x_f, b_delta0, x_f->size[0], b->size[0]);
      d = sig2_data[(int32_T)T_s - 1];
      st.site = &p_emlrtRSI;
      if (d < 0.0) {
        emlrtErrorWithMessageIdR2018a(&st, &yb_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 4, "sqrt");
      }

      d = muDoubleScalarSqrt(d);
      b_loop_ub = b->size[0];
      i = b_delta0->size[0];
      b_delta0->size[0] = b->size[0];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &bf_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_delta0_data[i] = b_data[i + b->size[0] * ((int32_T)T_s - 1)];
      }

      if ((int32_T)(loop_ub_tmp + 1U) > Output->Yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub_tmp + 1U), 1,
          Output->Yfm->size[0], &uc_emlrtBCI, (emlrtCTX)sp);
      }

      st.site = &p_emlrtRSI;
      Output->Yfm->data[loop_ub_tmp] = f_mtimes(x_f, b_delta0) + d * b_randn();

      /*          PredLikm(iter, :) = lnpdfmvn(y_pred, x_f'*beta_forecast, sig2_forecast); */
    }

    if ((ML == 'Y') && ((real_T)loop_ub_tmp + 1.0 > n0)) {
      if (1 > b->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b->size[1], &t_emlrtBCI, (emlrtCTX)
          sp);
      }

      if (1 > beta0->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, beta0->size[1], &u_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_loop_ub = b->size[0];
      i = b_delta0->size[0];
      b_delta0->size[0] = b->size[0];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &xe_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      for (i = 0; i < b_loop_ub; i++) {
        b_delta0_data[i] = b_data[i];
      }

      b_loop_ub = beta0->size[0];
      i = absY->size[0];
      absY->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(sp, absY, i, &af_emlrtRTEI);
      absY_data = absY->data;
      for (i = 0; i < b_loop_ub; i++) {
        absY_data[i] = beta0_data[i];
      }

      st.site = &o_emlrtRSI;
      b_prior = lnpdfmvn(&st, b_delta0, absY, B0);

      /*  number of columns */
      if (beta0->size[1] > 1) {
        i = beta0->size[1];
        for (b_i = 0; b_i <= i - 2; b_i++) {
          if (b_i + 2 > b->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, b->size[1], &v_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (b_i + 2 > beta0->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, beta0->size[1],
              &w_emlrtBCI, (emlrtCTX)sp);
          }

          b_loop_ub = b->size[0];
          i3 = b_delta0->size[0];
          b_delta0->size[0] = b->size[0];
          emxEnsureCapacity_real_T(sp, b_delta0, i3, &df_emlrtRTEI);
          b_delta0_data = b_delta0->data;
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            b_delta0_data[i3] = b_data[i3 + b->size[0] * (b_i + 1)];
          }

          b_loop_ub = beta0->size[0];
          i3 = absY->size[0];
          absY->size[0] = beta0->size[0];
          emxEnsureCapacity_real_T(sp, absY, i3, &ff_emlrtRTEI);
          absY_data = absY->data;
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            absY_data[i3] = beta0_data[i3 + beta0->size[0] * (b_i + 1)];
          }

          st.site = &n_emlrtRSI;
          b_prior += lnpdfmvn(&st, b_delta0, absY, B0);
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }

      if (1 > sig2->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, sig2->size[0], &x_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (1 > alpha0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, alpha0->size[0], &y_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (1 > delta0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, delta0->size[0], &ab_emlrtBCI,
          (emlrtCTX)sp);
      }

      st.site = &m_emlrtRSI;
      T_s = alpha0_data[0] / 2.0;
      beta = delta0_data[0] / 2.0;

      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &wj_emlrtRSI;
      c_st.site = &yj_emlrtRSI;
      x = T_s;
      e_st.site = &ak_emlrtRSI;
      scalar_gammaln(&e_st, &x);
      b_st.site = &wj_emlrtRSI;
      if (beta < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      d = sig2_data[0];
      b_st.site = &xj_emlrtRSI;
      if (d < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 3, "log");
      }

      d = muDoubleScalarLog(d);
      sig2_prior = ((T_s * muDoubleScalarLog(beta) - x) - (T_s + 1.0) * d) -
        beta / sig2_data[0];
      if (alpha0->size[0] > 1) {
        i = alpha0->size[0];
        for (b_i = 0; b_i <= i - 2; b_i++) {
          st.site = &l_emlrtRSI;
          if (b_i + 2 > sig2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, sig2->size[0],
              &bb_emlrtBCI, &st);
          }

          if (b_i + 2 > alpha0->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, alpha0->size[0],
              &vc_emlrtBCI, &st);
          }

          T_s = alpha0_data[b_i + 1] / 2.0;
          if (b_i + 2 > delta0->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, delta0->size[0],
              &wc_emlrtBCI, &st);
          }

          beta = delta0_data[b_i + 1] / 2.0;

          /*  to compute the log inverted gamma density on a grid */
          /*  beta is also a vector  */
          /*  alpha = shape parameter */
          /*  beta = scale parameter */
          /*  mean = beta / (alpha - 1) */
          b_st.site = &wj_emlrtRSI;
          c_st.site = &yj_emlrtRSI;
          x = T_s;
          e_st.site = &ak_emlrtRSI;
          scalar_gammaln(&e_st, &x);
          b_st.site = &wj_emlrtRSI;
          if (beta < 0.0) {
            emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 3, "log");
          }

          d = sig2_data[b_i + 1];
          b_st.site = &xj_emlrtRSI;
          if (d < 0.0) {
            emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 3, "log");
          }

          sig2_prior += ((T_s * muDoubleScalarLog(beta) - x) - (T_s + 1.0) *
                         muDoubleScalarLog(d)) - beta / d;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }

      if (idenind == 3.0) {
        if (1 > P->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, P->size[0], &cb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (1 > P->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, P->size[1], &db_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (1 > P->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, P->size[0], &eb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (2 > P->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, P->size[1], &fb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (1 > P_para->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, P_para->size[0], &gb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (1 > P_para->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, P_para->size[1], &hb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (1 > P_para->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, P_para->size[0], &ib_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (2 > P_para->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, P_para->size[1], &jb_emlrtBCI,
            (emlrtCTX)sp);
        }

        b_P[0] = P_data[0];
        b_P[1] = P_data[P->size[0]];
        c_P_para[0] = P_para_data[0];
        c_P_para[1] = P_para_data[P_para->size[0]];
        c_P[0] = b_P[0];
        c_P[1] = b_P[1];
        st.site = &k_emlrtRSI;
        T_s = logDirichlet(&st, c_P, c_P_para);
        i = loop_ub - 2;
        emlrtForLoopVectorCheckR2021a(2.0, 1.0, s - 1.0, mxDOUBLE_CLASS,
          (int32_T)s - 2, &o_emlrtRTEI, (emlrtCTX)sp);
        for (b_i = 0; b_i < i; b_i++) {
          if ((int32_T)(b_i + 2U) > P->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P->size[0],
              &xc_emlrtBCI, (emlrtCTX)sp);
          }

          if ((int32_T)(b_i + 2U) > P->size[1]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P->size[1],
              &xc_emlrtBCI, (emlrtCTX)sp);
          }

          b_P[0] = P_data[(b_i + P->size[0] * (b_i + 1)) + 1];
          if ((int32_T)(b_i + 2U) > P->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P->size[0],
              &yc_emlrtBCI, (emlrtCTX)sp);
          }

          if ((int32_T)(b_i + 3U) > P->size[1]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 3U), 1, P->size[1],
              &yc_emlrtBCI, (emlrtCTX)sp);
          }

          b_P[1] = P_data[(b_i + P->size[0] * (b_i + 2)) + 1];
          if ((int32_T)(b_i + 2U) > P_para->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P_para->size[0],
              &ad_emlrtBCI, (emlrtCTX)sp);
          }

          if ((int32_T)(b_i + 2U) > P_para->size[1]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P_para->size[1],
              &ad_emlrtBCI, (emlrtCTX)sp);
          }

          c_P_para[0] = P_para_data[(b_i + P_para->size[0] * (b_i + 1)) + 1];
          if ((int32_T)(b_i + 2U) > P_para->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1, P_para->size[0],
              &bd_emlrtBCI, (emlrtCTX)sp);
          }

          if ((int32_T)(b_i + 3U) > P_para->size[1]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 3U), 1, P_para->size[1],
              &bd_emlrtBCI, (emlrtCTX)sp);
          }

          c_P_para[1] = P_para_data[(b_i + P_para->size[0] * (b_i + 2)) + 1];
          c_P[0] = b_P[0];
          c_P[1] = b_P[1];
          st.site = &j_emlrtRSI;
          T_s += logDirichlet(&st, c_P, c_P_para);
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      } else {
        i = vec_P->size[0] * vec_P->size[1];
        vec_P->size[0] = P->size[1];
        vec_P->size[1] = P->size[0];
        emxEnsureCapacity_real_T(sp, vec_P, i, &jf_emlrtRTEI);
        vec_P_data = vec_P->data;
        b_loop_ub = P->size[0];
        for (i = 0; i < b_loop_ub; i++) {
          input_sizes_idx_1 = P->size[1];
          for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
            vec_P_data[i3 + vec_P->size[0] * i] = P_data[i + P->size[0] * i3];
          }
        }

        i = b_P_para->size[0] * b_P_para->size[1];
        b_P_para->size[0] = P_para->size[1];
        b_loop_ub = P_para->size[0];
        b_P_para->size[1] = P_para->size[0];
        emxEnsureCapacity_real_T(sp, b_P_para, i, &lf_emlrtRTEI);
        b_delta0_data = b_P_para->data;
        for (i = 0; i < b_loop_ub; i++) {
          input_sizes_idx_1 = P_para->size[1];
          for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
            b_delta0_data[i3 + b_P_para->size[0] * i] = P_para_data[i +
              P_para->size[0] * i3];
          }
        }

        st.site = &i_emlrtRSI;
        b_logDirichlet(&st, vec_P, b_P_para, r2);
        st.site = &i_emlrtRSI;
        diag(&st, r2, absY);
        st.site = &i_emlrtRSI;
        T_s = sum(&st, absY);
      }

      T_s = logLikel + ((b_prior + sig2_prior) + T_s);
      if (T_s > lnpost_hat) {
        i = b_hat->size[0] * b_hat->size[1];
        b_hat->size[0] = b->size[0];
        b_hat->size[1] = b->size[1];
        emxEnsureCapacity_real_T(sp, b_hat, i, &of_emlrtRTEI);
        b_hat_data = b_hat->data;
        b_loop_ub = b->size[0] * b->size[1];
        for (i = 0; i < b_loop_ub; i++) {
          b_hat_data[i] = b_data[i];
        }

        i = P_hat->size[0] * P_hat->size[1];
        P_hat->size[0] = P->size[0];
        P_hat->size[1] = P->size[1];
        emxEnsureCapacity_real_T(sp, P_hat, i, &qf_emlrtRTEI);
        P_hat_data = P_hat->data;
        b_loop_ub = P->size[0] * P->size[1];
        for (i = 0; i < b_loop_ub; i++) {
          P_hat_data[i] = P_data[i];
        }

        i = sig2_hat->size[0];
        sig2_hat->size[0] = sig2->size[0];
        emxEnsureCapacity_real_T(sp, sig2_hat, i, &rf_emlrtRTEI);
        sig2_hat_data = sig2_hat->data;
        b_loop_ub = sig2->size[0];
        for (i = 0; i < b_loop_ub; i++) {
          sig2_hat_data[i] = sig2_data[i];
        }

        lnpost_hat = T_s;

        /*  최빈값 후보의 사후 커널값 */
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_int32_T(sp, &ii);
  emxFree_real_T(sp, &sig2);
  emxFree_boolean_T(sp, &S_plus);
  emxFree_real_T(sp, &quan);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &P_para);
  emxFree_real_T(sp, &candidate_S);
  st.site = &cm_emlrtRSI;
  disp(&st, i_emlrt_marshallOut(&st, cv2), &e_emlrtMCI);
  st.site = &dm_emlrtRSI;
  disp(&st, j_emlrt_marshallOut(&st, cv3), &f_emlrtMCI);
  if (1 > betam->size[2]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, betam->size[2], &lb_emlrtBCI, (emlrtCTX)
      sp);
  }

  b_loop_ub = betam->size[0];
  input_sizes_idx_1 = betam->size[1];
  i = betam_->size[0] * betam_->size[1];
  betam_->size[0] = betam->size[0];
  betam_->size[1] = betam->size[1];
  emxEnsureCapacity_real_T(sp, betam_, i, &jd_emlrtRTEI);
  absY_data = betam_->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      absY_data[i2 + betam_->size[0] * i] = betam_data[i2 + betam->size[0] * i];
    }
  }

  i = loop_ub + -1;
  emlrtForLoopVectorCheckR2021a(2.0, 1.0, s, mxDOUBLE_CLASS, (int32_T)s + -1,
    &p_emlrtRTEI, (emlrtCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    st.site = &h_emlrtRSI;
    if (b_i + 2 > betam->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, betam->size[2], &mb_emlrtBCI,
        &st);
    }

    b_st.site = &lh_emlrtRSI;
    if ((betam_->size[0] != 0) && (betam_->size[1] != 0)) {
      loop_ub_tmp = betam_->size[0];
    } else if ((betam->size[0] != 0) && (betam->size[1] != 0)) {
      loop_ub_tmp = betam->size[0];
    } else {
      loop_ub_tmp = betam_->size[0];
      if (betam->size[0] > betam_->size[0]) {
        loop_ub_tmp = betam->size[0];
      }
    }

    c_st.site = &mh_emlrtRSI;
    if ((betam_->size[0] != loop_ub_tmp) && ((betam_->size[0] != 0) &&
         (betam_->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    loop_ub = betam->size[0];
    if ((betam->size[0] != loop_ub_tmp) && ((betam->size[0] != 0) &&
         (betam->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    testS = (loop_ub_tmp == 0);
    if (testS || ((betam_->size[0] != 0) && (betam_->size[1] != 0))) {
      b_loop_ub = betam_->size[1];
    } else {
      b_loop_ub = 0;
    }

    guard1 = false;
    if (testS) {
      guard1 = true;
    } else {
      input_sizes_idx_1 = betam->size[1];
      if ((betam->size[0] != 0) && (betam->size[1] != 0)) {
        guard1 = true;
      } else {
        sizes[1] = 0;
      }
    }

    if (guard1) {
      input_sizes_idx_1 = betam->size[1];
      sizes[1] = betam->size[1];
    }

    i2 = vec_P->size[0] * vec_P->size[1];
    vec_P->size[0] = betam->size[0];
    vec_P->size[1] = input_sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, vec_P, i2, &sd_emlrtRTEI);
    vec_P_data = vec_P->data;
    for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
      for (i3 = 0; i3 < loop_ub; i3++) {
        vec_P_data[i3 + vec_P->size[0] * i2] = betam_data[(i3 + betam->size[0] *
          i2) + betam->size[0] * betam->size[1] * (b_i + 1)];
      }
    }

    for (i2 = 0; i2 < b_loop_ub; i2++) {
      for (i3 = 0; i3 < loop_ub_tmp; i3++) {
        absY_data[i3 + betam_->size[0] * i2] = absY_data[i3 + loop_ub_tmp * i2];
      }
    }

    i2 = betam_->size[0] * betam_->size[1];
    betam_->size[0] = loop_ub_tmp;
    betam_->size[1] = b_loop_ub + sizes[1];
    emxEnsureCapacity_real_T(&b_st, betam_, i2, &vd_emlrtRTEI);
    absY_data = betam_->data;
    loop_ub = sizes[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      for (i3 = 0; i3 < loop_ub_tmp; i3++) {
        absY_data[i3 + betam_->size[0] * (i2 + b_loop_ub)] = vec_P_data[i3 +
          loop_ub_tmp * i2];
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &betam);

  /*  logLik = logLik(n0+1:n,:); */
  if (n0 + 1.0 > n) {
    i = -1;
    i2 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &h_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > betam_->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, betam_->size[0],
        &nb_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (i1 > betam_->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, betam_->size[0], &ob_emlrtBCI,
        (emlrtCTX)sp);
    }

    i2 = i1 - 1;
  }

  input_sizes_idx_1 = betam_->size[1] - 1;
  for (i3 = 0; i3 <= input_sizes_idx_1; i3++) {
    loop_ub_tmp = i2 - i;
    for (i4 = 0; i4 < loop_ub_tmp; i4++) {
      absY_data[i4 + loop_ub_tmp * i3] = absY_data[((i + i4) + betam_->size[0] *
        i3) + 1];
    }
  }

  i3 = betam_->size[0] * betam_->size[1];
  betam_->size[0] = i2 - i;
  betam_->size[1] = input_sizes_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, betam_, i3, &kd_emlrtRTEI);
  absY_data = betam_->data;
  if (n0 + 1.0 > n) {
    i = -1;
    i2 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &i_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, sig2m->size[0],
        &qb_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (i1 > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2m->size[0], &rb_emlrtBCI,
        (emlrtCTX)sp);
    }

    i2 = (int32_T)n - 1;
  }

  nz = sig2m->size[1] - 1;
  for (i3 = 0; i3 <= nz; i3++) {
    loop_ub_tmp = i2 - i;
    for (i4 = 0; i4 < loop_ub_tmp; i4++) {
      sig2m_data[i4 + loop_ub_tmp * i3] = sig2m_data[((i + i4) + sig2m->size[0] *
        i3) + 1];
    }
  }

  i3 = sig2m->size[0] * sig2m->size[1];
  sig2m->size[0] = i2 - i;
  sig2m->size[1] = nz + 1;
  emxEnsureCapacity_real_T(sp, sig2m, i3, &md_emlrtRTEI);
  sig2m_data = sig2m->data;
  if (n0 + 1.0 > n) {
    i = -1;
    i2 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &j_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->Pm->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->Pm->size[0],
        &tb_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (i1 > Output->Pm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Pm->size[0],
        &ub_emlrtBCI, (emlrtCTX)sp);
    }

    i2 = (int32_T)n - 1;
  }

  T = Output->Pm->size[1] - 1;
  for (i3 = 0; i3 <= T; i3++) {
    loop_ub_tmp = i2 - i;
    for (i4 = 0; i4 < loop_ub_tmp; i4++) {
      Output->Pm->data[i4 + loop_ub_tmp * i3] = Output->Pm->data[((i + i4) +
        Output->Pm->size[0] * i3) + 1];
    }
  }

  i3 = Output->Pm->size[0] * Output->Pm->size[1];
  Output->Pm->size[0] = i2 - i;
  Output->Pm->size[1] = T + 1;
  emxEnsureCapacity_real_T(sp, Output->Pm, i3, &qd_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i2 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &k_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Sm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Sm->size[0],
        &vb_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (i1 > Sm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Sm->size[0], &wb_emlrtBCI,
        (emlrtCTX)sp);
    }

    i2 = i1;
  }

  loop_ub = Sm->size[1];
  b_loop_ub = i2 - i;
  i2 = Output->Sm->size[0] * Output->Sm->size[1];
  Output->Sm->size[0] = b_loop_ub;
  Output->Sm->size[1] = Sm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Sm, i2, &td_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      Output->Sm->data[i3 + Output->Sm->size[0] * i2] = Sm_data[(i + i3) +
        Sm->size[0] * i2];
    }
  }

  emxFree_real_T(sp, &Sm);

  /*  MHm = [betam_ sig2m Pm]; */
  if (isForecast == 1) {
    if (n0 + 1.0 > n) {
      i = 0;
      i1 = 0;
    } else {
      if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
        emlrtIntegerCheckR2012b(n0 + 1.0, &l_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Output->Yfm->size
           [0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->Yfm->size
          [0], &xb_emlrtBCI, (emlrtCTX)sp);
      }

      i = (int32_T)(n0 + 1.0) - 1;
      if ((n < 1.0) || (i1 > Output->Yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Yfm->size[0],
          &yb_emlrtBCI, (emlrtCTX)sp);
      }
    }

    loop_ub_tmp = i1 - i;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      Output->Yfm->data[i1] = Output->Yfm->data[i + i1];
    }

    i = Output->Yfm->size[0];
    Output->Yfm->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, Output->Yfm, i, &ae_emlrtRTEI);
  }

  i = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = betam_->size[0];
  Output->betam->size[1] = input_sizes_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, Output->betam, i, &ud_emlrtRTEI);
  loop_ub = betam_->size[0] * (input_sizes_idx_1 + 1);
  for (i = 0; i < loop_ub; i++) {
    Output->betam->data[i] = absY_data[i];
  }

  i = Output->sig2m->size[0] * Output->sig2m->size[1];
  Output->sig2m->size[0] = sig2m->size[0];
  Output->sig2m->size[1] = nz + 1;
  emxEnsureCapacity_real_T(sp, Output->sig2m, i, &yd_emlrtRTEI);
  loop_ub = sig2m->size[0] * (nz + 1);
  for (i = 0; i < loop_ub; i++) {
    Output->sig2m->data[i] = sig2m_data[i];
  }

  i = Output->lnML->size[0];
  Output->lnML->size[0] = 1;
  emxEnsureCapacity_real_T(sp, Output->lnML, i, &be_emlrtRTEI);
  Output->lnML->data[0] = 0.0;
  if (ML == 'Y') {
    /*  number of columns */
    if (beta0->size[1] == 1) {
      if (1 > X->size[1]) {
        loop_ub = 0;
      } else {
        if (1 > input_sizes_idx_1 + 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, input_sizes_idx_1 + 1,
            &ac_emlrtBCI, (emlrtCTX)sp);
        }

        if (X->size[1] > input_sizes_idx_1 + 1) {
          emlrtDynamicBoundsCheckR2012b(X->size[1], 1, input_sizes_idx_1 + 1,
            &bc_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = X->size[1];
      }

      input_sizes_idx_1 = betam_->size[0] - 1;
      b_loop_ub = betam_->size[0];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          absY_data[i1 + (input_sizes_idx_1 + 1) * i] = absY_data[i1 +
            betam_->size[0] * i];
        }
      }

      i = betam_->size[0] * betam_->size[1];
      betam_->size[0] = input_sizes_idx_1 + 1;
      betam_->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, betam_, i, &de_emlrtRTEI);
      absY_data = betam_->data;
      if (1 > X->size[1]) {
        loop_ub = 0;
      } else {
        if (1 > b_hat->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, b_hat->size[0], &cc_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (X->size[1] > b_hat->size[0]) {
          emlrtDynamicBoundsCheckR2012b(X->size[1], 1, b_hat->size[0],
            &dc_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = X->size[1];
      }

      if (1 > b_hat->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_hat->size[1], &ec_emlrtBCI,
          (emlrtCTX)sp);
      }

      i = b_delta0->size[0];
      b_delta0->size[0] = loop_ub;
      emxEnsureCapacity_real_T(sp, b_delta0, i, &ge_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      for (i = 0; i < loop_ub; i++) {
        b_delta0_data[i] = b_hat_data[i];
      }

      i = b_hat->size[0] * b_hat->size[1];
      b_hat->size[0] = loop_ub;
      b_hat->size[1] = 1;
      emxEnsureCapacity_real_T(sp, b_hat, i, &le_emlrtRTEI);
      b_hat_data = b_hat->data;
      for (i = 0; i < loop_ub; i++) {
        b_hat_data[i] = b_delta0_data[i];
      }
    }

    if (alpha0->size[0] == 1) {
      if (1 > nz + 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, nz + 1, &fc_emlrtBCI, (emlrtCTX)sp);
      }

      loop_ub = sig2m->size[0];
      nz = sig2m->size[0] - 1;
      i = b_delta0->size[0];
      b_delta0->size[0] = sig2m->size[0];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &ce_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      for (i = 0; i <= nz; i++) {
        b_delta0_data[i] = sig2m_data[i];
      }

      i = sig2m->size[0] * sig2m->size[1];
      sig2m->size[0] = loop_ub;
      sig2m->size[1] = 1;
      emxEnsureCapacity_real_T(sp, sig2m, i, &fe_emlrtRTEI);
      sig2m_data = sig2m->data;
      for (i = 0; i < loop_ub; i++) {
        sig2m_data[i] = b_delta0_data[i];
      }

      if (1 > sig2_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, sig2_hat->size[0], &gc_emlrtBCI,
          (emlrtCTX)sp);
      }

      T_s = sig2_hat_data[0];
      i = sig2_hat->size[0];
      sig2_hat->size[0] = 1;
      emxEnsureCapacity_real_T(sp, sig2_hat, i, &ke_emlrtRTEI);
      sig2_hat_data = sig2_hat->data;
      sig2_hat_data[0] = T_s;
    }

    if (idenind == 3.0) {
      if (1 > Output->Pm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Output->Pm->size[0], &hc_emlrtBCI,
          (emlrtCTX)sp);
      }

      emxInit_boolean_T(sp, &r4, 2, &hd_emlrtRTEI);
      loop_ub = T + 1;
      i = r4->size[0] * r4->size[1];
      r4->size[0] = 1;
      r4->size[1] = T + 1;
      emxEnsureCapacity_boolean_T(sp, r4, i, &ee_emlrtRTEI);
      S_plus_data = r4->data;
      for (i = 0; i < loop_ub; i++) {
        S_plus_data[i] = (Output->Pm->data[Output->Pm->size[0] * i] != 0.0);
      }

      if (1 > Output->Pm->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Output->Pm->size[0], &ic_emlrtBCI,
          (emlrtCTX)sp);
      }

      emxInit_boolean_T(sp, &r5, 2, &hd_emlrtRTEI);
      loop_ub = T + 1;
      i = r5->size[0] * r5->size[1];
      r5->size[0] = 1;
      r5->size[1] = T + 1;
      emxEnsureCapacity_boolean_T(sp, r5, i, &he_emlrtRTEI);
      r6 = r5->data;
      for (i = 0; i < loop_ub; i++) {
        r6[i] = (Output->Pm->data[Output->Pm->size[0] * i] != 1.0);
      }

      sizes[0] = (*(int32_T (*)[2])r4->size)[0];
      sizes[1] = (*(int32_T (*)[2])r4->size)[1];
      b_candidate_S[0] = (*(int32_T (*)[2])r5->size)[0];
      b_candidate_S[1] = (*(int32_T (*)[2])r5->size)[1];
      emlrtSizeEqCheckNDR2012b(&sizes[0], &b_candidate_S[0], &k_emlrtECI,
        (emlrtCTX)sp);
      input_sizes_idx_1 = r4->size[1];
      for (b_i = 0; b_i < input_sizes_idx_1; b_i++) {
        if (S_plus_data[b_i] && r6[b_i] && (b_i + 1 > T + 1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, T + 1, &b_emlrtBCI,
            (emlrtCTX)sp);
        }
      }

      input_sizes_idx_1 = r4->size[1] - 1;
      nz = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (S_plus_data[b_i] && r6[b_i]) {
          nz++;
        }
      }

      emxInit_int32_T(sp, &r7, 2, &ee_emlrtRTEI);
      i = r7->size[0] * r7->size[1];
      r7->size[0] = 1;
      r7->size[1] = nz;
      emxEnsureCapacity_int32_T(sp, r7, i, &hd_emlrtRTEI);
      ii_data = r7->data;
      nz = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (S_plus_data[b_i] && r6[b_i]) {
          ii_data[nz] = b_i + 1;
          nz++;
        }
      }

      emxFree_boolean_T(sp, &r5);
      emxFree_boolean_T(sp, &r4);
      st.site = &g_emlrtRSI;
      b_st.site = &lh_emlrtRSI;
      if ((betam_->size[0] != 0) && (betam_->size[1] != 0)) {
        loop_ub_tmp = betam_->size[0];
      } else if ((sig2m->size[0] != 0) && (sig2m->size[1] != 0)) {
        loop_ub_tmp = sig2m->size[0];
      } else if ((Output->Pm->size[0] != 0) && (r7->size[1] != 0)) {
        loop_ub_tmp = Output->Pm->size[0];
      } else {
        loop_ub_tmp = betam_->size[0];
        if (sig2m->size[0] > betam_->size[0]) {
          loop_ub_tmp = sig2m->size[0];
        }

        if (Output->Pm->size[0] > loop_ub_tmp) {
          loop_ub_tmp = Output->Pm->size[0];
        }
      }

      c_st.site = &mh_emlrtRSI;
      if ((betam_->size[0] != loop_ub_tmp) && ((betam_->size[0] != 0) &&
           (betam_->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((sig2m->size[0] != loop_ub_tmp) && ((sig2m->size[0] != 0) &&
           (sig2m->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Output->Pm->size[0] != loop_ub_tmp) && ((Output->Pm->size[0] != 0) &&
           (r7->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      testS = (loop_ub_tmp == 0);
      if (testS || ((betam_->size[0] != 0) && (betam_->size[1] != 0))) {
        nz = betam_->size[1];
      } else {
        nz = 0;
      }

      if (testS || ((sig2m->size[0] != 0) && (sig2m->size[1] != 0))) {
        input_sizes_idx_1 = sig2m->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (testS || ((Output->Pm->size[0] != 0) && (r7->size[1] != 0))) {
        sizes[1] = r7->size[1];
      } else {
        sizes[1] = 0;
      }

      loop_ub = Output->Pm->size[0];
      i = vec_P->size[0] * vec_P->size[1];
      vec_P->size[0] = Output->Pm->size[0];
      vec_P->size[1] = r7->size[1];
      emxEnsureCapacity_real_T(&b_st, vec_P, i, &ye_emlrtRTEI);
      vec_P_data = vec_P->data;
      b_loop_ub = r7->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          vec_P_data[i1 + vec_P->size[0] * i] = Output->Pm->data[i1 + Output->
            Pm->size[0] * (ii_data[i] - 1)];
        }
      }

      emxFree_int32_T(&b_st, &r7);
      i = P->size[0] * P->size[1];
      P->size[0] = loop_ub_tmp;
      P->size[1] = (nz + input_sizes_idx_1) + sizes[1];
      emxEnsureCapacity_real_T(&b_st, P, i, &cf_emlrtRTEI);
      P_data = P->data;
      for (i = 0; i < nz; i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          P_data[i1 + P->size[0] * i] = absY_data[i1 + loop_ub_tmp * i];
        }
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          P_data[i1 + P->size[0] * (i + nz)] = sig2m_data[i1 + loop_ub_tmp * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          P_data[i1 + P->size[0] * ((i + nz) + input_sizes_idx_1)] =
            vec_P_data[i1 + loop_ub_tmp * i];
        }
      }

      i = vec_P->size[0] * vec_P->size[1];
      vec_P->size[0] = P_hat->size[0];
      vec_P->size[1] = P_hat->size[1];
      emxEnsureCapacity_real_T(sp, vec_P, i, &ef_emlrtRTEI);
      vec_P_data = vec_P->data;
      loop_ub = P_hat->size[0] * P_hat->size[1];
      for (i = 0; i < loop_ub; i++) {
        vec_P_data[i] = P_hat_data[i];
      }

      emxInit_boolean_T(sp, &r8, 2, &hd_emlrtRTEI);
      st.site = &f_emlrtRSI;
      vec(&st, vec_P);
      vec_P_data = vec_P->data;
      i = r8->size[0] * r8->size[1];
      r8->size[0] = vec_P->size[0];
      r8->size[1] = vec_P->size[1];
      emxEnsureCapacity_boolean_T(sp, r8, i, &gf_emlrtRTEI);
      S_plus_data = r8->data;
      loop_ub = vec_P->size[0] * vec_P->size[1];
      for (i = 0; i < loop_ub; i++) {
        S_plus_data[i] = (vec_P_data[i] != 0.0);
      }

      emxInit_boolean_T(sp, &r9, 2, &hd_emlrtRTEI);
      i = r9->size[0] * r9->size[1];
      r9->size[0] = vec_P->size[0];
      r9->size[1] = vec_P->size[1];
      emxEnsureCapacity_boolean_T(sp, r9, i, &if_emlrtRTEI);
      r6 = r9->data;
      loop_ub = vec_P->size[0] * vec_P->size[1];
      for (i = 0; i < loop_ub; i++) {
        r6[i] = (vec_P_data[i] != 1.0);
      }

      sizes[0] = (*(int32_T (*)[2])r8->size)[0];
      sizes[1] = (*(int32_T (*)[2])r8->size)[1];
      b_candidate_S[0] = (*(int32_T (*)[2])r9->size)[0];
      b_candidate_S[1] = (*(int32_T (*)[2])r9->size)[1];
      emlrtSizeEqCheckNDR2012b(&sizes[0], &b_candidate_S[0], &l_emlrtECI,
        (emlrtCTX)sp);
      if (1 > vec_P->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, vec_P->size[1], &jc_emlrtBCI,
          (emlrtCTX)sp);
      }

      input_sizes_idx_1 = r8->size[0] * r8->size[1];
      for (b_i = 0; b_i < input_sizes_idx_1; b_i++) {
        if (S_plus_data[b_i] && r6[b_i] && ((b_i + 1 < 1) || (b_i + 1 >
              vec_P->size[0]))) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vec_P->size[0], &emlrtBCI,
            (emlrtCTX)sp);
        }
      }

      input_sizes_idx_1 = r8->size[0] * r8->size[1] - 1;
      nz = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (S_plus_data[b_i] && r6[b_i]) {
          nz++;
        }
      }

      emxInit_int32_T(sp, &r10, 1, &gf_emlrtRTEI);
      i = r10->size[0];
      r10->size[0] = nz;
      emxEnsureCapacity_int32_T(sp, r10, i, &hd_emlrtRTEI);
      ii_data = r10->data;
      nz = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (S_plus_data[b_i] && r6[b_i]) {
          ii_data[nz] = b_i + 1;
          nz++;
        }
      }

      emxFree_boolean_T(sp, &r9);
      emxFree_boolean_T(sp, &r8);
      i = b_delta0->size[0];
      b_delta0->size[0] = r10->size[0];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &nf_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      loop_ub = r10->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_delta0_data[i] = vec_P_data[ii_data[i] - 1];
      }

      i = vec_P->size[0] * vec_P->size[1];
      vec_P->size[0] = r10->size[0];
      vec_P->size[1] = 1;
      emxEnsureCapacity_real_T(sp, vec_P, i, &pf_emlrtRTEI);
      vec_P_data = vec_P->data;
      loop_ub = r10->size[0];
      emxFree_int32_T(sp, &r10);
      for (i = 0; i < loop_ub; i++) {
        vec_P_data[i] = b_delta0_data[i];
      }
    } else {
      st.site = &e_emlrtRSI;
      b_st.site = &lh_emlrtRSI;
      if ((betam_->size[0] != 0) && (betam_->size[1] != 0)) {
        loop_ub_tmp = betam_->size[0];
      } else if ((sig2m->size[0] != 0) && (sig2m->size[1] != 0)) {
        loop_ub_tmp = sig2m->size[0];
      } else if ((Output->Pm->size[0] != 0) && (T + 1 != 0)) {
        loop_ub_tmp = Output->Pm->size[0];
      } else {
        loop_ub_tmp = betam_->size[0];
        if (sig2m->size[0] > betam_->size[0]) {
          loop_ub_tmp = sig2m->size[0];
        }

        if (Output->Pm->size[0] > loop_ub_tmp) {
          loop_ub_tmp = Output->Pm->size[0];
        }
      }

      c_st.site = &mh_emlrtRSI;
      if ((betam_->size[0] != loop_ub_tmp) && ((betam_->size[0] != 0) &&
           (betam_->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((sig2m->size[0] != loop_ub_tmp) && ((sig2m->size[0] != 0) &&
           (sig2m->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Output->Pm->size[0] != loop_ub_tmp) && ((Output->Pm->size[0] != 0) &&
           (T + 1 != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      testS = (loop_ub_tmp == 0);
      if (testS || ((betam_->size[0] != 0) && (betam_->size[1] != 0))) {
        nz = betam_->size[1];
      } else {
        nz = 0;
      }

      if (testS || ((sig2m->size[0] != 0) && (sig2m->size[1] != 0))) {
        input_sizes_idx_1 = sig2m->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (testS || ((Output->Pm->size[0] != 0) && (T + 1 != 0))) {
        sizes[1] = T + 1;
      } else {
        sizes[1] = 0;
      }

      i = P->size[0] * P->size[1];
      P->size[0] = loop_ub_tmp;
      P->size[1] = (nz + input_sizes_idx_1) + sizes[1];
      emxEnsureCapacity_real_T(&b_st, P, i, &pe_emlrtRTEI);
      P_data = P->data;
      for (i = 0; i < nz; i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          P_data[i1 + P->size[0] * i] = absY_data[i1 + loop_ub_tmp * i];
        }
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          P_data[i1 + P->size[0] * (i + nz)] = sig2m_data[i1 + loop_ub_tmp * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          P_data[i1 + P->size[0] * ((i + nz) + input_sizes_idx_1)] = Output->
            Pm->data[i1 + loop_ub_tmp * i];
        }
      }

      i = vec_P->size[0] * vec_P->size[1];
      vec_P->size[0] = P_hat->size[0];
      vec_P->size[1] = P_hat->size[1];
      emxEnsureCapacity_real_T(sp, vec_P, i, &te_emlrtRTEI);
      vec_P_data = vec_P->data;
      loop_ub = P_hat->size[0] * P_hat->size[1];
      for (i = 0; i < loop_ub; i++) {
        vec_P_data[i] = P_hat_data[i];
      }

      st.site = &d_emlrtRSI;
      vec(&st, vec_P);
      vec_P_data = vec_P->data;
    }

    st.site = &c_emlrtRSI;
    b_st.site = &tk_emlrtRSI;
    mean(&b_st, P, retf);
    retf_data = retf->data;
    st.site = &b_emlrtRSI;
    cov(&st, P, r2);
    r3 = r2->data;
    st.site = &b_emlrtRSI;
    cov(&st, P, betam_);
    absY_data = betam_->data;
    if ((r2->size[0] != betam_->size[1]) && ((r2->size[0] != 1) && (betam_->
          size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r2->size[0], betam_->size[1], &m_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((betam_->size[0] != r2->size[1]) && ((r2->size[1] != 1) && (betam_->
          size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r2->size[1], betam_->size[0], &n_emlrtECI,
        (emlrtCTX)sp);
    }

    st.site = &emlrtRSI;
    b_st.site = &emlrtRSI;
    vec(&b_st, b_hat);
    b_hat_data = b_hat->data;
    b_st.site = &lh_emlrtRSI;
    if ((b_hat->size[0] != 0) && (b_hat->size[1] != 0)) {
      sizes[1] = b_hat->size[1];
    } else if (sig2_hat->size[0] != 0) {
      sizes[1] = 1;
    } else if ((vec_P->size[0] != 0) && (vec_P->size[1] != 0)) {
      sizes[1] = vec_P->size[1];
    } else {
      sizes[1] = 1;
    }

    c_st.site = &mh_emlrtRSI;
    if ((b_hat->size[1] != sizes[1]) && ((b_hat->size[0] != 0) && (b_hat->size[1]
          != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((1 != sizes[1]) && (sig2_hat->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((vec_P->size[1] != sizes[1]) && ((vec_P->size[0] != 0) && (vec_P->size[1]
          != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((b_hat->size[0] != 0) && (b_hat->size[1] != 0)) {
      input_sizes[0] = b_hat->size[0];
    } else {
      input_sizes[0] = 0;
    }

    if (sig2_hat->size[0] != 0) {
      b_input_sizes[0] = sig2_hat->size[0];
    } else {
      b_input_sizes[0] = 0;
    }

    if ((vec_P->size[0] != 0) && (vec_P->size[1] != 0)) {
      sizes[0] = vec_P->size[0];
    } else {
      sizes[0] = 0;
    }

    if ((r2->size[0] == betam_->size[1]) && (betam_->size[0] == r2->size[1])) {
      nz = input_sizes[0];
      input_sizes_idx_1 = b_input_sizes[0];
      b_candidate_S[0] = sizes[0];
      i = b_P_para->size[0] * b_P_para->size[1];
      b_P_para->size[0] = (input_sizes[0] + b_input_sizes[0]) + sizes[0];
      b_P_para->size[1] = sizes[1];
      emxEnsureCapacity_real_T(sp, b_P_para, i, &hf_emlrtRTEI);
      b_delta0_data = b_P_para->data;
      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < nz; i1++) {
          b_delta0_data[i1 + b_P_para->size[0] * i] = b_hat_data[i1 + nz * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          b_delta0_data[(i1 + nz) + b_P_para->size[0] * i] = sig2_hat_data[i1 +
            input_sizes_idx_1 * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = b_candidate_S[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          b_delta0_data[((i1 + nz) + input_sizes_idx_1) + b_P_para->size[0] * i]
            = vec_P_data[i1 + b_candidate_S[0] * i];
        }
      }

      i = b_delta0->size[0];
      b_delta0->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, b_delta0, i, &kf_emlrtRTEI);
      b_delta0_data = b_delta0->data;
      loop_ub = retf->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_delta0_data[i] = retf_data[i];
      }

      i = vec_P->size[0] * vec_P->size[1];
      vec_P->size[0] = r2->size[0];
      vec_P->size[1] = r2->size[1];
      emxEnsureCapacity_real_T(sp, vec_P, i, &mf_emlrtRTEI);
      vec_P_data = vec_P->data;
      loop_ub = r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = r2->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          vec_P_data[i1 + vec_P->size[0] * i] = 0.5 * (r3[i1 + r2->size[0] * i]
            + absY_data[i + betam_->size[0] * i1]);
        }
      }

      st.site = &emlrtRSI;
      b_lnpdfmvn(&st, b_P_para, b_delta0, vec_P, absY);
      absY_data = absY->data;
    } else {
      st.site = &emlrtRSI;
      c_binary_expand_op(&st, absY, emlrtRSI, b_hat, input_sizes, sizes,
                         sig2_hat, b_input_sizes, vec_P, retf, r2, betam_);
      absY_data = absY->data;
    }

    i = Output->lnML->size[0];
    Output->lnML->size[0] = absY->size[0];
    emxEnsureCapacity_real_T(sp, Output->lnML, i, &be_emlrtRTEI);
    loop_ub = absY->size[0];
    for (i = 0; i < loop_ub; i++) {
      Output->lnML->data[i] = lnpost_hat - absY_data[i];
    }
  }

  emxFree_real_T(sp, &b_P_para);
  emxFree_real_T(sp, &b_delta0);
  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &betam_);
  emxFree_real_T(sp, &vec_P);
  emxFree_real_T(sp, &sig2_hat);
  emxFree_real_T(sp, &P_hat);
  emxFree_real_T(sp, &b_hat);
  emxFree_real_T(sp, &absY);
  emxFree_real_T(sp, &P);
  emxFree_real_T(sp, &sig2m);
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

/* End of code generation (Markov_Switching.c) */

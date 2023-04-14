/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Structure_BVAR.c
 *
 * Code generation for function 'Structure_BVAR'
 *
 */

/* Include files */
#include "Structure_BVAR.h"
#include "Structure_BVAR_data.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_mexutil.h"
#include "Structure_BVAR_types.h"
#include "assertValidSizeArg.h"
#include "chol.h"
#include "cholmod.h"
#include "cov.h"
#include "demeanc.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "inv.h"
#include "invpd.h"
#include "lnpdfmvn.h"
#include "lnpdfwishart.h"
#include "mean.h"
#include "mtimes.h"
#include "power.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "vec.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 19,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 22,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 24,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 33,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 34,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 37,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 41,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 44,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 62,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 74,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 77,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 82,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 85,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 87,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 90,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 92,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 95,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 101, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 103, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 104, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 121, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 123, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 124, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 125, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 145,/* lineNo */
  "makeYX",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 146,/* lineNo */
  "makeYX",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 153,/* lineNo */
  "makeYX",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 154,/* lineNo */
  "makeYX",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 160,/* lineNo */
  "makeYX",                            /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 6,  /* lineNo */
  "demeanc",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 32, /* lineNo */
  "kron",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 33, /* lineNo */
  "kron",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 34, /* lineNo */
  "kron",                              /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 176,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 177,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 180,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 183,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 185,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 186,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 188,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 189,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 192,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 193,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 195,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 196,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 197,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 198,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 199,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 201,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 28, /* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 100,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 15, /* lineNo */
  "min",                               /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 46, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 92, /* lineNo */
  "minimum",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 308,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 349,/* lineNo */
  "minOrMax1D",                        /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 216,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 221,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 224,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 225,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 228,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 7,  /* lineNo */
  "randwishart",                       /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 8,  /* lineNo */
  "randwishart",                       /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 9,  /* lineNo */
  "randwishart",                       /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 240,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 247,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 251,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 257,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 260,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 266,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 273,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 274,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 275,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 282,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 283,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 286,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 294,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 7,     /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 114, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 115, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 116, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 60,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 61,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 63,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 64,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 65,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 66,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 67,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 68,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 69,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 70,  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 259, /* lineNo */
  12,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  30,                                  /* colNo */
  "chol_Omega0",                       /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  44,                                  /* colNo */
  "ind_chol",                          /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  11,                                  /* colNo */
  "BinvT",                             /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  26,                                  /* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 52,  /* lineNo */
  12,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 86,/* lineNo */
  19,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  57,                                  /* colNo */
  "Phi_sp",                            /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  73,                                  /* colNo */
  "Phi_sp",                            /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  31,                                  /* colNo */
  "vec_B",                             /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  21,                                  /* colNo */
  "Gamma",                             /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  37,                                  /* colNo */
  "Gamma",                             /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  87,                                  /* lineNo */
  13,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  39,                                  /* colNo */
  "vec_Gamma",                         /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  39,                                  /* colNo */
  "vec_Omega",                         /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  43,                                  /* colNo */
  "Y0",                                /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  57,                                  /* colNo */
  "YLm",                               /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 94,    /* lineNo */
  15,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  15,                                  /* colNo */
  "betam",                             /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  94,                                  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtDCInfo b_emlrtDCI = { 96,  /* lineNo */
  16,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  16,                                  /* colNo */
  "Omegam",                            /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  96,                                  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 1,   /* nDims */
  124,                                 /* lineNo */
  22,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  124,                                 /* lineNo */
  22,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 91,  /* lineNo */
  12,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  12,                                  /* colNo */
  "Bm",                                /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  91,                                  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtDCInfo d_emlrtDCI = { 93,  /* lineNo */
  16,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  16,                                  /* colNo */
  "Gammam",                            /* aName */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  93,                                  /* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 57,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 275,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 15,  /* lineNo */
  17,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 15,  /* lineNo */
  17,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 33,  /* lineNo */
  22,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 33,  /* lineNo */
  22,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 33,  /* lineNo */
  25,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 33,  /* lineNo */
  25,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 33,  /* lineNo */
  32,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 34,  /* lineNo */
  16,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 34,  /* lineNo */
  19,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 34,  /* lineNo */
  19,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 34,  /* lineNo */
  26,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 37,  /* lineNo */
  12,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 37,  /* lineNo */
  15,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 38,  /* lineNo */
  16,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 38,  /* lineNo */
  19,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 38,  /* lineNo */
  19,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 40,  /* lineNo */
  15,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 40,  /* lineNo */
  18,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 41,  /* lineNo */
  16,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 41,  /* lineNo */
  19,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 15,  /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 15, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 132,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 132,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 133,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 133,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 37, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 38, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 40, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 41, /* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 144,/* lineNo */
  8,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  8,                                   /* colNo */
  "Y",                                 /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = { 149,/* lineNo */
  9,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtDCInfo mb_emlrtDCI = { 150,/* lineNo */
  29,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  29,                                  /* colNo */
  "Y",                                 /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  37,                                  /* colNo */
  "Y",                                 /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  10,                                  /* colNo */
  "YL",                                /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  20,                                  /* colNo */
  "YL",                                /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  150,                                 /* lineNo */
  5,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 159,/* lineNo */
  9,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  160,                                 /* lineNo */
  26,                                  /* colNo */
  "YL",                                /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  13,                                  /* colNo */
  "YLm",                               /* aName */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  161,                                 /* lineNo */
  5,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 1,   /* nDims */
  8,                                   /* lineNo */
  5,                                   /* colNo */
  "demeanc",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { 2,   /* nDims */
  8,                                   /* lineNo */
  5,                                   /* colNo */
  "demeanc",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pName */
};

static emlrtDCInfo nb_emlrtDCI = { 148,/* lineNo */
  12,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 148,/* lineNo */
  12,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 148,/* lineNo */
  16,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 148,/* lineNo */
  16,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 158,/* lineNo */
  15,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 158,/* lineNo */
  15,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 158,/* lineNo */
  19,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 158,/* lineNo */
  19,                                  /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 148,/* lineNo */
  1,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 148,/* lineNo */
  1,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 158,/* lineNo */
  1,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 158,/* lineNo */
  1,                                   /* colNo */
  "makeYX",                            /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  175,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { 1,   /* nDims */
  176,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { 2,   /* nDims */
  176,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  32,                                  /* colNo */
  "Y0",                                /* aName */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo x_emlrtECI = { 1,   /* nDims */
  177,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { 1,   /* nDims */
  181,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  181,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 1,  /* nDims */
  182,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  182,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 1,  /* nDims */
  184,                                 /* lineNo */
  11,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 2,  /* nDims */
  184,                                 /* lineNo */
  11,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 1,  /* nDims */
  185,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { 1,  /* nDims */
  189,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtDCInfo ac_emlrtDCI = { 193,/* lineNo */
  33,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 193,/* lineNo */
  33,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { 1,  /* nDims */
  198,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtDCInfo cc_emlrtDCI = { 201,/* lineNo */
  37,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 201,/* lineNo */
  37,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 169,/* lineNo */
  12,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 169,/* lineNo */
  12,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 169,/* lineNo */
  18,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 169,/* lineNo */
  18,                                  /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 169,/* lineNo */
  1,                                   /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 169,/* lineNo */
  1,                                   /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 170,/* lineNo */
  1,                                   /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 170,/* lineNo */
  1,                                   /* colNo */
  "Gen_Phi",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { 2,  /* nDims */
  221,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { 1,  /* nDims */
  221,                                 /* lineNo */
  14,                                  /* colNo */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  217,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 1,  /* nDims */
  217,                                 /* lineNo */
  13,                                  /* colNo */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { 1,  /* nDims */
  216,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  14,                                  /* colNo */
  "Y",                                 /* aName */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  215,                                 /* lineNo */
  16,                                  /* colNo */
  "X",                                 /* aName */
  "Gen_Omega",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  33,                                  /* colNo */
  "chol_Omega",                        /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  47,                                  /* colNo */
  "ind_chol",                          /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  15,                                  /* colNo */
  "BinvT",                             /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  242,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo rb_emlrtECI = { 1,  /* nDims */
  247,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 2,  /* nDims */
  247,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  15,                                  /* colNo */
  "Psi",                               /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  17,                                  /* colNo */
  "Psi",                               /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  19,                                  /* colNo */
  "Psi",                               /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  21,                                  /* colNo */
  "Psi",                               /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  34,                                  /* colNo */
  "chol_THETA",                        /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  48,                                  /* colNo */
  "ind_chol",                          /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  16,                                  /* colNo */
  "THETAT",                            /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  253,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 270,/* lineNo */
  9,                                   /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  16,                                  /* colNo */
  "FF",                                /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  18,                                  /* colNo */
  "FF",                                /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  20,                                  /* colNo */
  "FF",                                /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  22,                                  /* colNo */
  "FF",                                /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ub_emlrtECI = { 1,  /* nDims */
  276,                                 /* lineNo */
  19,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { 2,  /* nDims */
  276,                                 /* lineNo */
  19,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { 1,  /* nDims */
  277,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  279,                                 /* lineNo */
  34,                                  /* colNo */
  "decom_numer",                       /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  279,                                 /* lineNo */
  15,                                  /* colNo */
  "decom",                             /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo xb_emlrtECI = { -1, /* nDims */
  279,                                 /* lineNo */
  9,                                   /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 286,/* lineNo */
  13,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  47,                                  /* colNo */
  "theta",                             /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  44,                                  /* colNo */
  "decomvec",                          /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  279,                                 /* lineNo */
  50,                                  /* colNo */
  "decom_deno",                        /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  45,                                  /* colNo */
  "theta",                             /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  22,                                  /* colNo */
  "ImpulseRespm",                      /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = { 287,/* lineNo */
  22,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  31,                                  /* colNo */
  "ImpulseRespm",                      /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  34,                                  /* colNo */
  "ImpulseRespm",                      /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  42,                                  /* colNo */
  "decomvec",                          /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  16,                                  /* colNo */
  "decomm",                            /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 288,/* lineNo */
  16,                                  /* colNo */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  25,                                  /* colNo */
  "decomm",                            /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  28,                                  /* colNo */
  "decomm",                            /* aName */
  "Gen_ImRes",                         /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ob_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 23,/* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 26,/* lineNo */
  18,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 132,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 133,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 38,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 47,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 48,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 134,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 74,/* lineNo */
  6,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 82,/* lineNo */
  23,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 66,/* lineNo */
  14,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 84,/* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 108,/* lineNo */
  13,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 101,/* lineNo */
  49,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 121,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 109,/* lineNo */
  13,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 90,/* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 101,/* lineNo */
  40,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 91,/* lineNo */
  25,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 87,/* lineNo */
  48,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 92,/* lineNo */
  21,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 92,/* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 295,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 93,/* lineNo */
  29,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 4,/* lineNo */
  8,                                   /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 95,/* lineNo */
  21,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 95,/* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 96,/* lineNo */
  29,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 24,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 1,/* lineNo */
  10,                                  /* colNo */
  "meanc",                             /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 144,/* lineNo */
  6,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 8,/* lineNo */
  9,                                   /* colNo */
  "demeanc",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 146,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 148,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 158,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 30,/* lineNo */
  20,                                  /* colNo */
  "kron",                              /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 160,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 139,/* lineNo */
  18,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 6,/* lineNo */
  1,                                   /* colNo */
  "demeanc",                           /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 160,/* lineNo */
  15,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 139,/* lineNo */
  40,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 169,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 170,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 181,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 175,/* lineNo */
  10,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 192,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 177,/* lineNo */
  29,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 193,/* lineNo */
  7,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 193,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 196,/* lineNo */
  11,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 197,/* lineNo */
  12,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 198,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 200,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 201,/* lineNo */
  11,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 201,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 180,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 195,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 197,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 212,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 221,/* lineNo */
  14,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 215,/* lineNo */
  10,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 216,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 217,/* lineNo */
  21,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 9,/* lineNo */
  5,                                   /* colNo */
  "randwishart",                       /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 9,/* lineNo */
  7,                                   /* colNo */
  "randwishart",                       /* fName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 207,/* lineNo */
  30,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 237,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 247,/* lineNo */
  15,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 267,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 236,/* lineNo */
  9,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 268,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 248,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 244,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 269,/* lineNo */
  1,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 242,/* lineNo */
  22,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 260,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 272,/* lineNo */
  13,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 253,/* lineNo */
  23,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 283,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 279,/* lineNo */
  22,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 294,/* lineNo */
  10,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 240,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 247,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 250,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 251,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 273,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 275,/* lineNo */
  5,                                   /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 233,/* lineNo */
  39,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 177,/* lineNo */
  10,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 176,/* lineNo */
  10,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 181,/* lineNo */
  10,                                  /* colNo */
  "Structure_BVAR",                    /* fName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pName */
};

static emlrtRSInfo yk_emlrtRSI = { 7,  /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 63, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 61, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 65, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 67, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 69, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 115,/* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 116,/* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 114,/* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 70, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 68, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 66, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 64, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 60, /* lineNo */
  "Structure_BVAR",                    /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 259,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 8,  /* lineNo */
  "demeanc",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 277,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 276,/* lineNo */
  "Gen_ImRes",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 217,/* lineNo */
  "Gen_Omega",                         /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 76, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 181,/* lineNo */
  "Gen_Phi",                           /* fcnName */
  "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/Structure_BVAR.m"/* pathName */
};

/* Function Declarations */
static void Gen_ImRes(const emlrtStack *sp, const emxArray_real_T *Omega, const
                      emxArray_real_T *F, real_T mlag, real_T n0,
                      emxArray_real_T *ImpulseRespm, real_T iter,
                      emxArray_real_T *decomm, real_T restriction, const
                      emxArray_real_T *Binv0, const emxArray_real_T *resindex,
                      real_T T, const emxArray_real_T *ind_chol, emxArray_real_T
                      *Binv);
static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *X, const emxArray_real_T *beta, real_T nu,
                      const emxArray_real_T *R0, emxArray_real_T *Omega,
                      emxArray_real_T *Omega_inv);
static void Gen_Phi(const emlrtStack *sp, const emxArray_real_T *Y0, const
                    emxArray_real_T *YLm, const emxArray_real_T *Phi0, real_T p,
                    const emxArray_real_T *b_, const emxArray_real_T *var_,
                    const emxArray_real_T *Omega_inv, emxArray_real_T *Phi,
                    emxArray_real_T *Fm, emxArray_real_T *beta);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37]);
static void b_plus(const emlrtStack *sp, emxArray_real_T *XX, const
                   emxArray_real_T *r1);
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *beta_hat,
  emlrtRSInfo em_emlrtRSI, const int32_T input_sizes[2], const int32_T sizes[2],
  const emxArray_real_T *Omega_hat, const emxArray_real_T *retf, const
  emxArray_real_T *Binv, const emxArray_real_T *chol_Omega0);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [29]);
static void c_plus(const emlrtStack *sp, emxArray_real_T *XX, const
                   emxArray_real_T *precb_);
static void clc(const emlrtStack *sp, emlrtMCInfo *location);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_optimization_, const char_T *identifier, emxArray_real_T *y);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [11]);
static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [38]);
static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
  emlrtRSInfo em_emlrtRSI);
static const mxArray *h_emlrt_marshallOut(const real_T u);
static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat,
  const emxArray_real_T *Y, int32_T t, const emxArray_real_T *r1);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23]);
static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat2,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *r1);
static const mxArray *m_emlrt_marshallOut(void);
static void makeYX(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                   emxArray_real_T *Y0, emxArray_real_T *YLm);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static const mxArray *optimization(const emlrtStack *sp, const mxArray *m1,
  const mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
  emlrtMCInfo *location);
static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Psi,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *chol_Omega, const
  emxArray_real_T *F);
static void plus(const emlrtStack *sp, emxArray_real_T *XY, const
                 emxArray_real_T *absolute);

/* Function Definitions */
static void Gen_ImRes(const emlrtStack *sp, const emxArray_real_T *Omega, const
                      emxArray_real_T *F, real_T mlag, real_T n0,
                      emxArray_real_T *ImpulseRespm, real_T iter,
                      emxArray_real_T *decomm, real_T restriction, const
                      emxArray_real_T *Binv0, const emxArray_real_T *resindex,
                      real_T T, const emxArray_real_T *ind_chol, emxArray_real_T
                      *Binv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *Psi;
  emxArray_real_T *THETAT;
  emxArray_real_T *chol_Omega;
  emxArray_real_T *chol_THETA;
  emxArray_real_T *decom;
  emxArray_real_T *decom_deno;
  emxArray_real_T *decom_deno_net;
  emxArray_real_T *r;
  emxArray_real_T *theta;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  const real_T *F_data;
  const real_T *Omega_data;
  const real_T *ind_chol_data;
  real_T d;
  real_T d1;
  real_T *Binv_data;
  real_T *ImpulseRespm_data;
  real_T *Psi_data;
  real_T *THETAT_data;
  real_T *chol_Omega_data;
  real_T *chol_THETA_data;
  real_T *decom_data;
  real_T *decom_deno_data;
  real_T *decomm_data;
  int32_T b_Omega[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  ind_chol_data = ind_chol->data;
  decomm_data = decomm->data;
  ImpulseRespm_data = ImpulseRespm->data;
  F_data = F->data;
  Omega_data = Omega->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  충격반응함수, 분산분해 계산하기 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  k = Omega->size[0];
  b_Omega[0] = Omega->size[0];
  i = Binv->size[0] * Binv->size[1];
  Binv->size[0] = Omega->size[0];
  Binv->size[1] = Omega->size[0];
  emxEnsureCapacity_real_T(sp, Binv, i, &ti_emlrtRTEI);
  Binv_data = Binv->data;
  loop_ub = Omega->size[0] * Omega->size[0];
  for (i = 0; i < loop_ub; i++) {
    Binv_data[i] = 0.0;
  }

  emxInit_real_T(sp, &chol_Omega, 2, &jj_emlrtRTEI);
  emxInit_real_T(sp, &Psi, 2, &kj_emlrtRTEI);
  emxInit_real_T(sp, &THETAT, 2, &lj_emlrtRTEI);
  emxInit_real_T(sp, &chol_THETA, 2, &mj_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &pj_emlrtRTEI);
  if (restriction == 1.0) {
    /*  B의 역행렬 계산하기 */
    st.site = &ph_emlrtRSI;
    i = chol_Omega->size[0] * chol_Omega->size[1];
    chol_Omega->size[0] = Omega->size[0];
    chol_Omega->size[1] = Omega->size[1];
    emxEnsureCapacity_real_T(&st, chol_Omega, i, &sb_emlrtRTEI);
    chol_Omega_data = chol_Omega->data;
    loop_ub = Omega->size[0] * Omega->size[1];
    for (i = 0; i < loop_ub; i++) {
      chol_Omega_data[i] = Omega_data[i];
    }

    b_st.site = &le_emlrtRSI;
    cholesky(&b_st, chol_Omega);
    chol_Omega_data = chol_Omega->data;
    i = Omega->size[0];
    i1 = chol_THETA->size[0] * chol_THETA->size[1];
    chol_THETA->size[0] = Omega->size[0];
    chol_THETA->size[1] = Omega->size[0];
    emxEnsureCapacity_real_T(sp, chol_THETA, i1, &wi_emlrtRTEI);
    chol_THETA_data = chol_THETA->data;
    if (0 <= Omega->size[0] - 1) {
      i2 = chol_Omega->size[1];
      b_loop_ub = chol_Omega->size[1];
      b_Omega[0] = 1;
    }

    for (b_i = 0; b_i < i; b_i++) {
      if (b_i + 1 > chol_THETA->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, chol_THETA->size[0],
          &sc_emlrtBCI, (emlrtCTX)sp);
      }

      if (b_i + 1 > chol_Omega->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, chol_Omega->size[0],
          &qc_emlrtBCI, (emlrtCTX)sp);
      }

      if (b_i + 1 > ind_chol->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ind_chol->size[0],
          &rc_emlrtBCI, (emlrtCTX)sp);
      }

      i1 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = i2;
      emxEnsureCapacity_real_T(sp, r, i1, &cj_emlrtRTEI);
      Binv_data = r->data;
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Binv_data[i1] = chol_Omega_data[b_i + chol_Omega->size[0] * i1] *
          ind_chol_data[b_i];
      }

      b_Omega[1] = chol_THETA->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Omega[0], 2, &r->size[0], 2, &qb_emlrtECI,
        (emlrtCTX)sp);
      loop_ub = r->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        chol_THETA_data[b_i + chol_THETA->size[0] * i1] = Binv_data[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    i = Binv->size[0] * Binv->size[1];
    Binv->size[0] = chol_THETA->size[1];
    Binv->size[1] = chol_THETA->size[0];
    emxEnsureCapacity_real_T(sp, Binv, i, &aj_emlrtRTEI);
    Binv_data = Binv->data;
    loop_ub = chol_THETA->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = chol_THETA->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Binv_data[i1 + Binv->size[0] * i] = chol_THETA_data[i + chol_THETA->
          size[0] * i1];
      }
    }

    /*  Matlab은 상방삼각행렬을 제공하므로 Lower triangular matrix로 만들어 주는 것 */
  } else if (restriction == 2.0) {
    st.site = &qh_emlrtRSI;
    eye(&st, F->size[0], chol_Omega);
    chol_Omega_data = chol_Omega->data;
    if ((chol_Omega->size[0] != F->size[0]) && ((chol_Omega->size[0] != 1) &&
         (F->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(chol_Omega->size[0], F->size[0], &rb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((chol_Omega->size[1] != F->size[1]) && ((chol_Omega->size[1] != 1) &&
         (F->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(chol_Omega->size[1], F->size[1], &sb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((chol_Omega->size[0] == F->size[0]) && (chol_Omega->size[1] == F->size[1]))
    {
      i = chol_THETA->size[0] * chol_THETA->size[1];
      chol_THETA->size[0] = chol_Omega->size[0];
      chol_THETA->size[1] = chol_Omega->size[1];
      emxEnsureCapacity_real_T(sp, chol_THETA, i, &ui_emlrtRTEI);
      chol_THETA_data = chol_THETA->data;
      loop_ub = chol_Omega->size[0] * chol_Omega->size[1];
      for (i = 0; i < loop_ub; i++) {
        chol_THETA_data[i] = chol_Omega_data[i] - F_data[i];
      }

      st.site = &qh_emlrtRSI;
      inv(&st, chol_THETA, Psi);
      Psi_data = Psi->data;
    } else {
      st.site = &qh_emlrtRSI;
      p_binary_expand_op(&st, Psi, qh_emlrtRSI, chol_Omega, F);
      Psi_data = Psi->data;
    }

    if (1 > Omega->size[0]) {
      loop_ub = 0;
      b_loop_ub = 0;
    } else {
      if (1 > Psi->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Psi->size[0], &tc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (Omega->size[0] > Psi->size[0]) {
        emlrtDynamicBoundsCheckR2012b(Omega->size[0], 1, Psi->size[0],
          &uc_emlrtBCI, (emlrtCTX)sp);
      }

      loop_ub = Omega->size[0];
      if (1 > Psi->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Psi->size[1], &vc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (Omega->size[0] > Psi->size[1]) {
        emlrtDynamicBoundsCheckR2012b(Omega->size[0], 1, Psi->size[1],
          &wc_emlrtBCI, (emlrtCTX)sp);
      }

      b_loop_ub = Omega->size[0];
    }

    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Psi_data[i1 + loop_ub * i] = Psi_data[i1 + Psi->size[0] * i];
      }
    }

    i = Psi->size[0] * Psi->size[1];
    Psi->size[0] = loop_ub;
    Psi->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(sp, Psi, i, &yi_emlrtRTEI);
    st.site = &rh_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    if (Omega->size[0] != b_loop_ub) {
      if (((loop_ub == 1) && (b_loop_ub == 1)) || ((Omega->size[0] == 1) &&
           (Omega->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &de_emlrtRSI;
    e_mtimes(&b_st, Psi, Omega, chol_Omega);
    st.site = &rh_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    if (chol_Omega->size[1] != b_loop_ub) {
      if (((chol_Omega->size[0] == 1) && (chol_Omega->size[1] == 1)) ||
          ((loop_ub == 1) && (b_loop_ub == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &de_emlrtRSI;
    c_mtimes(&b_st, chol_Omega, Psi, chol_THETA);
    st.site = &rh_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    cholesky(&b_st, chol_THETA);
    chol_THETA_data = chol_THETA->data;
    i = Omega->size[0];
    i1 = THETAT->size[0] * THETAT->size[1];
    THETAT->size[0] = Omega->size[0];
    THETAT->size[1] = Omega->size[0];
    emxEnsureCapacity_real_T(sp, THETAT, i1, &wi_emlrtRTEI);
    THETAT_data = THETAT->data;
    if (0 <= Omega->size[0] - 1) {
      i2 = chol_THETA->size[1];
      nx = chol_THETA->size[1];
      b_Omega[0] = 1;
    }

    for (b_i = 0; b_i < i; b_i++) {
      if (b_i + 1 > THETAT->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, THETAT->size[0], &ad_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (b_i + 1 > chol_THETA->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, chol_THETA->size[0],
          &xc_emlrtBCI, (emlrtCTX)sp);
      }

      if (b_i + 1 > ind_chol->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ind_chol->size[0],
          &yc_emlrtBCI, (emlrtCTX)sp);
      }

      i1 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = i2;
      emxEnsureCapacity_real_T(sp, r, i1, &fj_emlrtRTEI);
      Binv_data = r->data;
      for (i1 = 0; i1 < nx; i1++) {
        Binv_data[i1] = chol_THETA_data[b_i + chol_THETA->size[0] * i1] *
          ind_chol_data[b_i];
      }

      b_Omega[1] = THETAT->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Omega[0], 2, &r->size[0], 2, &tb_emlrtECI,
        (emlrtCTX)sp);
      loop_ub = r->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        THETAT_data[b_i + THETAT->size[0] * i1] = Binv_data[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    st.site = &sh_emlrtRSI;
    b_st.site = &sh_emlrtRSI;
    inv(&b_st, Psi, chol_Omega);
    b_st.site = &ce_emlrtRSI;
    if (chol_Omega->size[1] != THETAT->size[1]) {
      if (((chol_Omega->size[0] == 1) && (chol_Omega->size[1] == 1)) ||
          ((THETAT->size[0] == 1) && (THETAT->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &de_emlrtRSI;
    c_mtimes(&b_st, chol_Omega, THETAT, Binv);
  } else if (restriction == 3.0) {
    y = NULL;
    m = emlrtCreateDoubleScalar(T);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(Omega->size[0]);
    emlrtAssign(&b_y, m);
    st.site = &vl_emlrtRSI;
    e_emlrt_marshallIn(&st, optimization(&st, d_emlrt_marshallOut(Omega), y, b_y,
      d_emlrt_marshallOut(Binv0), j_emlrt_marshallOut(resindex), &w_emlrtMCI),
                       "<output of optimization>", Binv);
    st.site = &th_emlrtRSI;
    nx = Binv->size[0] * Binv->size[1];
    b_st.site = &wb_emlrtRSI;
    c_st.site = &xb_emlrtRSI;
    assertValidSizeArg(&c_st, Omega->size[0]);
    c_st.site = &xb_emlrtRSI;
    assertValidSizeArg(&c_st, Omega->size[0]);
    loop_ub = Binv->size[0];
    if (Binv->size[1] > Binv->size[0]) {
      loop_ub = Binv->size[1];
    }

    if (Omega->size[0] > muIntScalarMax_sint32(nx, loop_ub)) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if (Omega->size[0] * Omega->size[0] != nx) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_Omega[0] = Omega->size[0];
    i = Binv->size[0] * Binv->size[1];
    Binv->size[0] = Omega->size[0];
    Binv->size[1] = Omega->size[0];
    emxEnsureCapacity_real_T(sp, Binv, i, &dj_emlrtRTEI);
    Binv_data = Binv->data;
    loop_ub = Omega->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = b_Omega[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Binv_data[i1 + Binv->size[0] * i] = Binv_data[i1 + b_Omega[0] * i];
      }
    }
  }

  /*  각 j에 대해서 충격반응함수 계산해서 저장하기 */
  st.site = &uh_emlrtRSI;
  eye(&st, F->size[0], Psi);
  Psi_data = Psi->data;

  /*  F^0 = eye */
  i = THETAT->size[0] * THETAT->size[1];
  THETAT->size[0] = Omega->size[0];
  THETAT->size[1] = Omega->size[0];
  emxEnsureCapacity_real_T(sp, THETAT, i, &vi_emlrtRTEI);
  THETAT_data = THETAT->data;
  loop_ub = Omega->size[0] * Omega->size[0];
  for (i = 0; i < loop_ub; i++) {
    THETAT_data[i] = 0.0;
  }

  emxInit_real_T(sp, &decom_deno, 1, &xi_emlrtRTEI);
  i = decom_deno->size[0];
  decom_deno->size[0] = Omega->size[0];
  emxEnsureCapacity_real_T(sp, decom_deno, i, &xi_emlrtRTEI);
  decom_deno_data = decom_deno->data;
  loop_ub = Omega->size[0];
  for (i = 0; i < loop_ub; i++) {
    decom_deno_data[i] = 0.0;
  }

  emxInit_real_T(sp, &decom, 2, &bj_emlrtRTEI);
  i = decom->size[0] * decom->size[1];
  decom->size[0] = Omega->size[0];
  decom->size[1] = Omega->size[0];
  emxEnsureCapacity_real_T(sp, decom, i, &bj_emlrtRTEI);
  decom_data = decom->data;
  loop_ub = Omega->size[0] * Omega->size[0];
  for (i = 0; i < loop_ub; i++) {
    decom_data[i] = 0.0;
  }

  i = (int32_T)(mlag + 1.0);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, mlag + 1.0, mxDOUBLE_CLASS, (int32_T)
    (mlag + 1.0), &lb_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &theta, 2, &nj_emlrtRTEI);
  emxInit_real_T(sp, &decom_deno_net, 1, &oj_emlrtRTEI);
  for (nx = 0; nx < i; nx++) {
    if (1 > k) {
      loop_ub = 0;
      b_loop_ub = 0;
    } else {
      if (1 > Psi->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Psi->size[0], &bd_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (k > Psi->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Psi->size[0], &cd_emlrtBCI,
          (emlrtCTX)sp);
      }

      loop_ub = k;
      if (1 > Psi->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Psi->size[1], &dd_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (k > Psi->size[1]) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Psi->size[1], &ed_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_loop_ub = k;
    }

    /*  k by k */
    st.site = &vh_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    if (b_loop_ub != Binv->size[0]) {
      if (((loop_ub == 1) && (b_loop_ub == 1)) || ((Binv->size[0] == 1) &&
           (Binv->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    i1 = chol_THETA->size[0] * chol_THETA->size[1];
    chol_THETA->size[0] = loop_ub;
    chol_THETA->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(&st, chol_THETA, i1, &ej_emlrtRTEI);
    chol_THETA_data = chol_THETA->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        chol_THETA_data[i2 + chol_THETA->size[0] * i1] = Psi_data[i2 + Psi->
          size[0] * i1];
      }
    }

    b_st.site = &de_emlrtRSI;
    e_mtimes(&b_st, chol_THETA, Binv, theta);

    /*  k by k */
    st.site = &wh_emlrtRSI;
    b_power(&st, theta, chol_THETA);
    chol_THETA_data = chol_THETA->data;
    st.site = &xh_emlrtRSI;
    b_power(&st, theta, chol_Omega);
    st.site = &xh_emlrtRSI;
    c_sum(&st, chol_Omega, decom_deno_net);
    Binv_data = decom_deno_net->data;
    if ((THETAT->size[0] != chol_THETA->size[0]) && ((THETAT->size[0] != 1) &&
         (chol_THETA->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(THETAT->size[0], chol_THETA->size[0],
        &ub_emlrtECI, (emlrtCTX)sp);
    }

    if ((THETAT->size[1] != chol_THETA->size[1]) && ((THETAT->size[1] != 1) &&
         (chol_THETA->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(THETAT->size[1], chol_THETA->size[1],
        &vb_emlrtECI, (emlrtCTX)sp);
    }

    if ((THETAT->size[0] == chol_THETA->size[0]) && (THETAT->size[1] ==
         chol_THETA->size[1])) {
      loop_ub = THETAT->size[0] * THETAT->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        THETAT_data[i1] += chol_THETA_data[i1];
      }
    } else {
      st.site = &am_emlrtRSI;
      b_plus(&st, THETAT, chol_THETA);
      THETAT_data = THETAT->data;
    }

    loop_ub = decom_deno->size[0];
    if ((decom_deno->size[0] != decom_deno_net->size[0]) && ((decom_deno->size[0]
          != 1) && (decom_deno_net->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(decom_deno->size[0], decom_deno_net->size[0],
        &wb_emlrtECI, (emlrtCTX)sp);
    }

    if (decom_deno->size[0] == decom_deno_net->size[0]) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        decom_deno_data[i1] += Binv_data[i1];
      }
    } else {
      st.site = &yl_emlrtRSI;
      plus(&st, decom_deno, decom_deno_net);
      decom_deno_data = decom_deno->data;
    }

    i1 = decom_deno->size[0];
    if (0 <= decom_deno->size[0] - 1) {
      i3 = THETAT->size[1];
      c_loop_ub = THETAT->size[1];
      b_Omega[0] = 1;
    }

    for (b_i = 0; b_i < i1; b_i++) {
      if ((b_i + 1 < 1) || (b_i + 1 > decom->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, decom->size[0], &gd_emlrtBCI,
          (emlrtCTX)sp);
      }

      if ((b_i + 1 < 1) || (b_i + 1 > THETAT->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, THETAT->size[0], &fd_emlrtBCI,
          (emlrtCTX)sp);
      }

      if ((b_i + 1 < 1) || (b_i + 1 > decom_deno->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, decom_deno->size[0],
          &jd_emlrtBCI, (emlrtCTX)sp);
      }

      i2 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = i3;
      emxEnsureCapacity_real_T(sp, r, i2, &hj_emlrtRTEI);
      Binv_data = r->data;
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        Binv_data[i2] = THETAT_data[b_i + THETAT->size[0] * i2] /
          decom_deno_data[b_i];
      }

      b_Omega[1] = decom->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Omega[0], 2, &r->size[0], 2, &xb_emlrtECI,
        (emlrtCTX)sp);
      loop_ub = r->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        decom_data[b_i + decom->size[0] * i2] = Binv_data[i2];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    st.site = &yh_emlrtRSI;
    vec(&st, theta);
    Binv_data = theta->data;

    /*  k^2 by 1 로 길쭉하게 reshape */
    i1 = chol_Omega->size[0] * chol_Omega->size[1];
    chol_Omega->size[0] = decom->size[0];
    chol_Omega->size[1] = decom->size[1];
    emxEnsureCapacity_real_T(sp, chol_Omega, i1, &gj_emlrtRTEI);
    chol_Omega_data = chol_Omega->data;
    loop_ub = decom->size[0] * decom->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      chol_Omega_data[i1] = decom_data[i1];
    }

    st.site = &ai_emlrtRSI;
    vec(&st, chol_Omega);
    chol_Omega_data = chol_Omega->data;

    /*  저장하기 */
    st.site = &bi_emlrtRSI;
    b_st.site = &ge_emlrtRSI;
    d = (real_T)k * (real_T)k;
    i1 = (int32_T)d;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &mb_emlrtRTEI, (emlrtCTX)sp);
    for (b_i = 0; b_i < i1; b_i++) {
      if (1 > theta->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, theta->size[1], &hd_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > theta->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, theta->size[0],
          &kd_emlrtBCI, (emlrtCTX)sp);
      }

      i2 = ImpulseRespm->size[0];
      d = iter - n0;
      d1 = (int32_T)muDoubleScalarFloor(d);
      if (d != d1) {
        emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, i2, &ld_emlrtBCI, (emlrtCTX)
          sp);
      }

      i2 = ImpulseRespm->size[1];
      if (((int32_T)(nx + 1U) < 1) || ((int32_T)(nx + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(nx + 1U), 1, i2, &md_emlrtBCI,
          (emlrtCTX)sp);
      }

      i2 = ImpulseRespm->size[2];
      if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, i2, &nd_emlrtBCI,
          (emlrtCTX)sp);
      }

      ImpulseRespm_data[(((int32_T)d + ImpulseRespm->size[0] * nx) +
                         ImpulseRespm->size[0] * ImpulseRespm->size[1] * b_i) -
        1] = Binv_data[b_i];
      if (1 > chol_Omega->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chol_Omega->size[1], &id_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > chol_Omega->size[0]))
      {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, chol_Omega->size[0],
          &od_emlrtBCI, (emlrtCTX)sp);
      }

      i2 = decomm->size[0];
      if (d != d1) {
        emlrtIntegerCheckR2012b(d, &oc_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, i2, &pd_emlrtBCI, (emlrtCTX)
          sp);
      }

      i2 = decomm->size[1];
      if (((int32_T)(nx + 1U) < 1) || ((int32_T)(nx + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(nx + 1U), 1, i2, &qd_emlrtBCI,
          (emlrtCTX)sp);
      }

      i2 = decomm->size[2];
      if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, i2, &rd_emlrtBCI,
          (emlrtCTX)sp);
      }

      decomm_data[(((int32_T)d + decomm->size[0] * nx) + decomm->size[0] *
                   decomm->size[1] * b_i) - 1] = chol_Omega_data[b_i];

      /*  iter-n0 : sampling된 값들이 차곡차곡 쌓임 */
      /*  j번째 시차에 대한 iter-n0번째 샘플링 값이 theta인데 그 값이 (iter-n0, j) 좌표에 */
      /*  길쭉하게 저장됨 */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    st.site = &ci_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    if (F->size[0] != Psi->size[1]) {
      if (((Psi->size[0] == 1) && (Psi->size[1] == 1)) || ((F->size[0] == 1) &&
           (F->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    i1 = chol_Omega->size[0] * chol_Omega->size[1];
    chol_Omega->size[0] = Psi->size[0];
    chol_Omega->size[1] = Psi->size[1];
    emxEnsureCapacity_real_T(&st, chol_Omega, i1, &ij_emlrtRTEI);
    chol_Omega_data = chol_Omega->data;
    loop_ub = Psi->size[0] * Psi->size[1] - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      chol_Omega_data[i1] = Psi_data[i1];
    }

    b_st.site = &de_emlrtRSI;
    e_mtimes(&b_st, chol_Omega, F, Psi);
    Psi_data = Psi->data;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &decom_deno_net);
  emxFree_real_T(sp, &theta);
  emxFree_real_T(sp, &decom);
  emxFree_real_T(sp, &decom_deno);
  emxFree_real_T(sp, &chol_THETA);
  emxFree_real_T(sp, &THETAT);
  emxFree_real_T(sp, &Psi);
  emxFree_real_T(sp, &chol_Omega);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *Y, const
                      emxArray_real_T *X, const emxArray_real_T *beta, real_T nu,
                      const emxArray_real_T *R0, emxArray_real_T *Omega,
                      emxArray_real_T *Omega_inv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_X;
  emxArray_real_T *ehat;
  emxArray_real_T *ehat2;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  const real_T *X_data;
  const real_T *Y_data;
  real_T *b_X_data;
  real_T *ehat2_data;
  real_T *ehat_data;
  real_T *r2;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &ehat2, 2, &vg_emlrtRTEI);

  /*  Omega 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  i = ehat2->size[0] * ehat2->size[1];
  ehat2->size[0] = Y->size[1];
  ehat2->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, ehat2, i, &vg_emlrtRTEI);
  ehat2_data = ehat2->data;
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    ehat2_data[i] = 0.0;
  }

  /*  잔차항의 제곱의 합 */
  i = Y->size[0];
  emxInit_real_T(sp, &ehat, 1, &yg_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &dh_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &dh_emlrtRTEI);
  emxInit_real_T(sp, &b_X, 2, &xg_emlrtRTEI);
  for (t = 0; t < i; t++) {
    if (t + 1 > X->size[2]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, X->size[2], &pc_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (t + 1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, Y->size[0], &oc_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &hh_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    loop_ub = X->size[1];
    if (beta->size[0] != X->size[1]) {
      if (((X->size[0] == 1) && (X->size[1] == 1)) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_loop_ub = X->size[0];
    i1 = b_X->size[0] * b_X->size[1];
    b_X->size[0] = X->size[0];
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, b_X, i1, &xg_emlrtRTEI);
    b_X_data = b_X->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_X_data[i2 + b_X->size[0] * i1] = X_data[(i2 + X->size[0] * i1) +
          X->size[0] * X->size[1] * t];
      }
    }

    b_st.site = &de_emlrtRSI;
    b_mtimes(&b_st, b_X, beta, r);
    r2 = r->data;
    loop_ub = Y->size[1];
    if ((r->size[0] != Y->size[1]) && ((Y->size[1] != 1) && (r->size[0] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(Y->size[1], r->size[0], &mb_emlrtECI,
        (emlrtCTX)sp);
    }

    if (r->size[0] == Y->size[1]) {
      i1 = ehat->size[0];
      ehat->size[0] = Y->size[1];
      emxEnsureCapacity_real_T(sp, ehat, i1, &yg_emlrtRTEI);
      ehat_data = ehat->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        ehat_data[i1] = Y_data[t + Y->size[0] * i1] - r2[i1];
      }
    } else {
      st.site = &hh_emlrtRSI;
      i_binary_expand_op(&st, ehat, Y, t, r);
      ehat_data = ehat->data;
    }

    /*  잔차항 */
    i1 = r1->size[0] * r1->size[1];
    r1->size[0] = ehat->size[0];
    r1->size[1] = ehat->size[0];
    emxEnsureCapacity_real_T(sp, r1, i1, &ah_emlrtRTEI);
    r2 = r1->data;
    loop_ub = ehat->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = ehat->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        r2[i2 + r1->size[0] * i1] = ehat_data[i2] * ehat_data[i1];
      }
    }

    if ((ehat2->size[0] != r1->size[0]) && ((ehat2->size[0] != 1) && (r1->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(ehat2->size[0], r1->size[0], &lb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((ehat2->size[1] != r1->size[1]) && ((ehat2->size[1] != 1) && (r1->size[1]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(ehat2->size[1], r1->size[1], &kb_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((ehat2->size[0] == r1->size[0]) && (ehat2->size[1] == r1->size[1])) {
      loop_ub = ehat2->size[0] * ehat2->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        ehat2_data[i1] += r2[i1];
      }
    } else {
      st.site = &bm_emlrtRSI;
      b_plus(&st, ehat2, r1);
      ehat2_data = ehat2->data;
    }

    /*  k by k */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &ehat);

  /*  Wishart와 역Wishart의 관계를 이용 */
  st.site = &ih_emlrtRSI;
  invpd(&st, R0, r1);
  r2 = r1->data;
  if ((ehat2->size[0] != r1->size[0]) && ((ehat2->size[0] != 1) && (r1->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(ehat2->size[0], r1->size[0], &jb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((ehat2->size[1] != r1->size[1]) && ((ehat2->size[1] != 1) && (r1->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(ehat2->size[1], r1->size[1], &ib_emlrtECI,
      (emlrtCTX)sp);
  }

  /*  R0는 Wishart의 hyper-parameter이므로 invpd(R0)를 통해 */
  /*  Inverse-Wishart의 hyperparameter로 전환 */
  if ((ehat2->size[0] == r1->size[0]) && (ehat2->size[1] == r1->size[1])) {
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = ehat2->size[0];
    b_X->size[1] = ehat2->size[1];
    emxEnsureCapacity_real_T(sp, b_X, i, &wg_emlrtRTEI);
    b_X_data = b_X->data;
    loop_ub = ehat2->size[0] * ehat2->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_X_data[i] = ehat2_data[i] + r2[i];
    }

    st.site = &jh_emlrtRSI;
    invpd(&st, b_X, ehat2);
  } else {
    st.site = &jh_emlrtRSI;
    j_binary_expand_op(&st, ehat2, jh_emlrtRSI, r1);
  }

  /*  Wishart의 hyper-parameter로 전환 */
  st.site = &kh_emlrtRSI;

  /*  sampling Wishart dist */
  /*  E(V) = Omega*nu */
  /*  X ~ Wishart(R,nu) <=> inv(X) ~ IW(inv(R),nu);  */
  b_st.site = &mh_emlrtRSI;
  b_cholmod(&b_st, ehat2, r1);
  b_st.site = &nh_emlrtRSI;
  c_st.site = &nh_emlrtRSI;
  b_randn(&c_st, ehat2->size[0], (real_T)Y->size[0] + nu, b_X);
  c_st.site = &ce_emlrtRSI;
  if (r1->size[0] != b_X->size[0]) {
    if (((r1->size[0] == 1) && (r1->size[1] == 1)) || ((b_X->size[0] == 1) &&
         (b_X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &m_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &l_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  c_st.site = &de_emlrtRSI;
  d_mtimes(&c_st, r1, b_X, Omega_inv);
  ehat_data = Omega_inv->data;

  /*  k by nu */
  b_st.site = &oh_emlrtRSI;
  i = ehat2->size[0] * ehat2->size[1];
  ehat2->size[0] = Omega_inv->size[0];
  ehat2->size[1] = Omega_inv->size[1];
  emxEnsureCapacity_real_T(&b_st, ehat2, i, &bh_emlrtRTEI);
  ehat2_data = ehat2->data;
  loop_ub = Omega_inv->size[0] * Omega_inv->size[1] - 1;
  emxFree_real_T(&b_st, &r1);
  for (i = 0; i <= loop_ub; i++) {
    ehat2_data[i] = ehat_data[i];
  }

  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = Omega_inv->size[0];
  b_X->size[1] = Omega_inv->size[1];
  emxEnsureCapacity_real_T(&b_st, b_X, i, &ch_emlrtRTEI);
  b_X_data = b_X->data;
  loop_ub = Omega_inv->size[0] * Omega_inv->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_X_data[i] = ehat_data[i];
  }

  c_st.site = &de_emlrtRSI;
  c_mtimes(&c_st, ehat2, b_X, Omega_inv);

  /*  k by k */
  /*  nu(W,prior)-> nu+p+1(IW,prior) */
  /*  -> nu+p+1+T(IW,poster) -> nu+T(W,posterior) */
  st.site = &lh_emlrtRSI;
  invpd(&st, Omega_inv, Omega);
  emxFree_real_T(sp, &b_X);
  emxFree_real_T(sp, &ehat2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Phi(const emlrtStack *sp, const emxArray_real_T *Y0, const
                    emxArray_real_T *YLm, const emxArray_real_T *Phi0, real_T p,
                    const emxArray_real_T *b_, const emxArray_real_T *var_,
                    const emxArray_real_T *Omega_inv, emxArray_real_T *Phi,
                    emxArray_real_T *Fm, emxArray_real_T *beta)
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
  emxArray_creal_T *eigF;
  emxArray_real_T *XX;
  emxArray_real_T *XY;
  emxArray_real_T *absolute;
  emxArray_real_T *b_Y0;
  emxArray_real_T *b_YLm;
  emxArray_real_T *b_eigF;
  emxArray_real_T *precb_;
  emxArray_real_T *r;
  creal_T *eigF_data;
  const real_T *Phi0_data;
  const real_T *Y0_data;
  const real_T *YLm_data;
  real_T d;
  real_T varargin_1;
  real_T *XX_data;
  real_T *XY_data;
  real_T *absolute_data;
  real_T *precb__data;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T nx;
  int32_T sizes_idx_1;
  int32_T t;
  boolean_T b;
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
  Phi0_data = Phi0->data;
  YLm_data = YLm->data;
  Y0_data = Y0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &XX, 2, &kf_emlrtRTEI);

  /*  Phi 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  /*  설명변수, 3차원 */
  d = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &fc_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &ec_emlrtDCI, (emlrtCTX)sp);
  }

  i = XX->size[0] * XX->size[1];
  XX->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, XX, i, &kf_emlrtRTEI);
  d = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &hc_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &gc_emlrtDCI, (emlrtCTX)sp);
  }

  i = XX->size[0] * XX->size[1];
  XX->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, XX, i, &kf_emlrtRTEI);
  XX_data = XX->data;
  d = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &jc_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &ic_emlrtDCI, (emlrtCTX)sp);
  }

  varargin_1 = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &jc_emlrtDCI, (emlrtCTX)sp);
  }

  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &ic_emlrtDCI, (emlrtCTX)sp);
  }

  sizes_idx_1 = (int32_T)d * (int32_T)varargin_1;
  for (i = 0; i < sizes_idx_1; i++) {
    XX_data[i] = 0.0;
  }

  emxInit_real_T(sp, &XY, 1, &lf_emlrtRTEI);
  d = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &lc_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &kc_emlrtDCI, (emlrtCTX)sp);
  }

  i = XY->size[0];
  XY->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, XY, i, &lf_emlrtRTEI);
  XY_data = XY->data;
  d = p * (real_T)Y0->size[1] * (real_T)Y0->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &lc_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &kc_emlrtDCI, (emlrtCTX)sp);
  }

  sizes_idx_1 = (int32_T)d;
  for (i = 0; i < sizes_idx_1; i++) {
    XY_data[i] = 0.0;
  }

  /*  = T-p */
  i = Y0->size[0];
  emxInit_real_T(sp, &precb_, 2, &bg_emlrtRTEI);
  emxInit_real_T(sp, &absolute, 1, &dg_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &pb_emlrtRTEI);
  emxInit_real_T(sp, &b_YLm, 2, &nf_emlrtRTEI);
  emxInit_real_T(sp, &b_Y0, 2, &qf_emlrtRTEI);
  for (t = 0; t < i; t++) {
    if (t + 1 > YLm->size[2]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, YLm->size[2], &mc_emlrtBCI,
        (emlrtCTX)sp);
    }

    /*  x(t)' for SUR regressor */
    st.site = &ef_emlrtRSI;
    sizes_idx_1 = YLm->size[0];
    nx = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &nf_emlrtRTEI);
    absolute_data = b_YLm->data;
    for (i1 = 0; i1 < nx; i1++) {
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        absolute_data[i2 + b_YLm->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
          i1) + YLm->size[0] * YLm->size[1] * t];
      }
    }

    b_st.site = &ce_emlrtRSI;
    c_dynamic_size_checks(&b_st, b_YLm, Omega_inv, YLm->size[0], Omega_inv->
                          size[0]);
    sizes_idx_1 = YLm->size[0];
    nx = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &nf_emlrtRTEI);
    absolute_data = b_YLm->data;
    for (i1 = 0; i1 < nx; i1++) {
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        absolute_data[i2 + b_YLm->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
          i1) + YLm->size[0] * YLm->size[1] * t];
      }
    }

    b_st.site = &de_emlrtRSI;
    d_mtimes(&b_st, b_YLm, Omega_inv, precb_);
    st.site = &ef_emlrtRSI;
    sizes_idx_1 = YLm->size[0];
    nx = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &nf_emlrtRTEI);
    absolute_data = b_YLm->data;
    for (i1 = 0; i1 < nx; i1++) {
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        absolute_data[i2 + b_YLm->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
          i1) + YLm->size[0] * YLm->size[1] * t];
      }
    }

    b_st.site = &ce_emlrtRSI;
    c_dynamic_size_checks(&b_st, precb_, b_YLm, precb_->size[1], YLm->size[0]);
    sizes_idx_1 = YLm->size[0];
    nx = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &nf_emlrtRTEI);
    absolute_data = b_YLm->data;
    for (i1 = 0; i1 < nx; i1++) {
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        absolute_data[i2 + b_YLm->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
          i1) + YLm->size[0] * YLm->size[1] * t];
      }
    }

    b_st.site = &de_emlrtRSI;
    e_mtimes(&b_st, precb_, b_YLm, r);
    absolute_data = r->data;
    if ((XX->size[0] != r->size[0]) && ((XX->size[0] != 1) && (r->size[0] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(XX->size[0], r->size[0], &v_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((XX->size[1] != r->size[1]) && ((XX->size[1] != 1) && (r->size[1] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(XX->size[1], r->size[1], &w_emlrtECI,
        (emlrtCTX)sp);
    }

    if ((XX->size[0] == r->size[0]) && (XX->size[1] == r->size[1])) {
      sizes_idx_1 = XX->size[0] * XX->size[1];
      for (i1 = 0; i1 < sizes_idx_1; i1++) {
        XX_data[i1] += absolute_data[i1];
      }
    } else {
      st.site = &ef_emlrtRSI;
      b_plus(&st, XX, r);
      XX_data = XX->data;
    }

    /*  B1에서의 summation 부분 */
    if (t + 1 > Y0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, Y0->size[0], &nc_emlrtBCI,
        (emlrtCTX)sp);
    }

    st.site = &ff_emlrtRSI;
    sizes_idx_1 = YLm->size[0];
    nx = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &nf_emlrtRTEI);
    absolute_data = b_YLm->data;
    for (i1 = 0; i1 < nx; i1++) {
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        absolute_data[i2 + b_YLm->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
          i1) + YLm->size[0] * YLm->size[1] * t];
      }
    }

    b_st.site = &ce_emlrtRSI;
    c_dynamic_size_checks(&b_st, b_YLm, Omega_inv, YLm->size[0], Omega_inv->
                          size[0]);
    sizes_idx_1 = YLm->size[0];
    nx = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &nf_emlrtRTEI);
    absolute_data = b_YLm->data;
    for (i1 = 0; i1 < nx; i1++) {
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        absolute_data[i2 + b_YLm->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
          i1) + YLm->size[0] * YLm->size[1] * t];
      }
    }

    b_st.site = &de_emlrtRSI;
    d_mtimes(&b_st, b_YLm, Omega_inv, precb_);
    st.site = &ff_emlrtRSI;
    sizes_idx_1 = Y0->size[1];
    i1 = b_Y0->size[0] * b_Y0->size[1];
    b_Y0->size[0] = 1;
    b_Y0->size[1] = Y0->size[1];
    emxEnsureCapacity_real_T(&st, b_Y0, i1, &qf_emlrtRTEI);
    absolute_data = b_Y0->data;
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      absolute_data[i1] = Y0_data[t + Y0->size[0] * i1];
    }

    b_st.site = &ce_emlrtRSI;
    d_dynamic_size_checks(&b_st, precb_, b_Y0, precb_->size[1], Y0->size[1]);
    sizes_idx_1 = Y0->size[1];
    i1 = b_Y0->size[0] * b_Y0->size[1];
    b_Y0->size[0] = 1;
    b_Y0->size[1] = Y0->size[1];
    emxEnsureCapacity_real_T(&st, b_Y0, i1, &qf_emlrtRTEI);
    absolute_data = b_Y0->data;
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      absolute_data[i1] = Y0_data[t + Y0->size[0] * i1];
    }

    b_st.site = &de_emlrtRSI;
    f_mtimes(&b_st, precb_, b_Y0, absolute);
    absolute_data = absolute->data;
    sizes_idx_1 = XY->size[0];
    if ((XY->size[0] != absolute->size[0]) && ((XY->size[0] != 1) &&
         (absolute->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(XY->size[0], absolute->size[0], &x_emlrtECI,
        (emlrtCTX)sp);
    }

    if (XY->size[0] == absolute->size[0]) {
      for (i1 = 0; i1 < sizes_idx_1; i1++) {
        XY_data[i1] += absolute_data[i1];
      }
    } else {
      st.site = &ff_emlrtRSI;
      plus(&st, XY, absolute);
      XY_data = XY->data;
    }

    /*  A에서의 summation 부분 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_Y0);
  emxFree_real_T(sp, &b_YLm);
  st.site = &gf_emlrtRSI;
  invpd(&st, var_, precb_);
  precb__data = precb_->data;
  if ((precb_->size[0] != XX->size[0]) && ((precb_->size[0] != 1) && (XX->size[0]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[0], XX->size[0], &y_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((precb_->size[1] != XX->size[1]) && ((precb_->size[1] != 1) && (XX->size[1]
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[1], XX->size[1], &ab_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((precb_->size[0] == XX->size[0]) && (precb_->size[1] == XX->size[1])) {
    sizes_idx_1 = precb_->size[0] * precb_->size[1];
    i = XX->size[0] * XX->size[1];
    XX->size[0] = precb_->size[0];
    XX->size[1] = precb_->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &mf_emlrtRTEI);
    XX_data = XX->data;
    for (i = 0; i < sizes_idx_1; i++) {
      XX_data[i] += precb__data[i];
    }
  } else {
    st.site = &dm_emlrtRSI;
    c_plus(&st, XX, precb_);
    XX_data = XX->data;
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[0] != 1) && (XX->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], XX->size[1], &bb_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[1] != 1) && (XX->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], XX->size[0], &cb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (XX->size[0] == XX->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = XX->size[0];
    r->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &pb_emlrtRTEI);
    absolute_data = r->data;
    sizes_idx_1 = XX->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      nx = XX->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        absolute_data[i1 + r->size[0] * i] = 0.5 * (XX_data[i1 + XX->size[0] * i]
          + XX_data[i + XX->size[0] * i1]);
      }
    }

    st.site = &hf_emlrtRSI;
    invpd(&st, r, XX);
    XX_data = XX->data;
  } else {
    st.site = &hf_emlrtRSI;
    h_binary_expand_op(&st, XX, hf_emlrtRSI);
    XX_data = XX->data;
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[0] != 1) && (XX->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], XX->size[1], &db_emlrtECI,
      (emlrtCTX)sp);
  }

  if ((XX->size[0] != XX->size[1]) && ((XX->size[1] != 1) && (XX->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], XX->size[0], &eb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (XX->size[0] == XX->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = XX->size[0];
    r->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &pb_emlrtRTEI);
    absolute_data = r->data;
    sizes_idx_1 = XX->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      nx = XX->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        absolute_data[i1 + r->size[0] * i] = 0.5 * (XX_data[i1 + XX->size[0] * i]
          + XX_data[i + XX->size[0] * i1]);
      }
    }

    i = XX->size[0] * XX->size[1];
    XX->size[0] = r->size[0];
    XX->size[1] = r->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &of_emlrtRTEI);
    XX_data = XX->data;
    sizes_idx_1 = r->size[0] * r->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      XX_data[i] = absolute_data[i];
    }
  } else {
    st.site = &cm_emlrtRSI;
    g_binary_expand_op(&st, XX);
  }

  st.site = &if_emlrtRSI;
  b_st.site = &ce_emlrtRSI;
  b_dynamic_size_checks(&b_st, precb_, b_, precb_->size[1], b_->size[0]);
  b_st.site = &de_emlrtRSI;
  b_mtimes(&b_st, precb_, b_, absolute);
  absolute_data = absolute->data;
  if ((XY->size[0] != absolute->size[0]) && ((XY->size[0] != 1) &&
       (absolute->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XY->size[0], absolute->size[0], &fb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (XY->size[0] == absolute->size[0]) {
    sizes_idx_1 = XY->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      XY_data[i] += absolute_data[i];
    }
  } else {
    st.site = &if_emlrtRSI;
    plus(&st, XY, absolute);
  }

  /*  b_ = B0 */
  st.site = &jf_emlrtRSI;
  b_st.site = &ce_emlrtRSI;
  b_dynamic_size_checks(&b_st, XX, XY, XX->size[1], XY->size[0]);
  b_st.site = &de_emlrtRSI;
  b_mtimes(&b_st, XX, XY, beta);
  XY_data = beta->data;

  /*  full conditional mean */
  st.site = &kf_emlrtRSI;
  b_cholmod(&st, XX, r);
  st.site = &lf_emlrtRSI;
  b_st.site = &lf_emlrtRSI;
  randn(&b_st, p * (real_T)Y0->size[1] * (real_T)Y0->size[1], XY);
  b_st.site = &ce_emlrtRSI;
  b_dynamic_size_checks(&b_st, r, XY, r->size[0], XY->size[0]);
  b_st.site = &de_emlrtRSI;
  g_mtimes(&b_st, r, XY, absolute);
  absolute_data = absolute->data;
  emxFree_real_T(sp, &r);
  if ((beta->size[0] != absolute->size[0]) && ((beta->size[0] != 1) &&
       (absolute->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], absolute->size[0], &gb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (beta->size[0] == absolute->size[0]) {
    sizes_idx_1 = beta->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      XY_data[i] += absolute_data[i];
    }
  } else {
    st.site = &lf_emlrtRSI;
    plus(&st, beta, absolute);
    XY_data = beta->data;
  }

  /*  beta sampling 하기 */
  /*  F 행렬만들기 */
  st.site = &mf_emlrtRSI;
  varargin_1 = p * (real_T)Y0->size[1];
  nx = beta->size[0];
  b_st.site = &wb_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, varargin_1);
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, Y0->size[1]);
  sizes_idx_1 = beta->size[0];
  if (1 > beta->size[0]) {
    sizes_idx_1 = 1;
  }

  nx = muIntScalarMax_sint32(nx, sizes_idx_1);
  if ((int32_T)varargin_1 > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Y0->size[1] > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int32_T)varargin_1 < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if ((int32_T)varargin_1 * Y0->size[1] != beta->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  i = Phi->size[0] * Phi->size[1];
  Phi->size[0] = (int32_T)varargin_1;
  Phi->size[1] = Y0->size[1];
  emxEnsureCapacity_real_T(sp, Phi, i, &pf_emlrtRTEI);
  absolute_data = Phi->data;
  sizes_idx_1 = (int32_T)varargin_1 * Y0->size[1];
  for (i = 0; i < sizes_idx_1; i++) {
    absolute_data[i] = XY_data[i];
  }

  /*  p*k by k, F 행렬의 1행 Block의 전치 */
  st.site = &nf_emlrtRSI;
  b_st.site = &nf_emlrtRSI;
  eye(&b_st, (p - 1.0) * (real_T)Y0->size[1], XX);
  XX_data = XX->data;
  d = (real_T)Y0->size[1] * (p - 1.0);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ac_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &bc_emlrtDCI, &st);
  }

  b_st.site = &uf_emlrtRSI;
  if ((XX->size[0] != 0) && (XX->size[1] != 0)) {
    t = XX->size[0];
  } else if (((int32_T)((real_T)Y0->size[1] * (p - 1.0)) != 0) && (Y0->size[1]
              != 0)) {
    t = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
  } else {
    t = XX->size[0];
    if ((int32_T)((real_T)Y0->size[1] * (p - 1.0)) > XX->size[0]) {
      t = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
    }
  }

  c_st.site = &vf_emlrtRSI;
  if ((XX->size[0] != t) && ((XX->size[0] != 0) && (XX->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (((int32_T)((real_T)Y0->size[1] * (p - 1.0)) != t) && (((int32_T)((real_T)
         Y0->size[1] * (p - 1.0)) != 0) && (Y0->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (t == 0);
  if (empty_non_axis_sizes || ((XX->size[0] != 0) && (XX->size[1] != 0))) {
    nx = XX->size[1];
  } else {
    nx = 0;
  }

  if (empty_non_axis_sizes || (((int32_T)((real_T)Y0->size[1] * (p - 1.0)) != 0)
       && (Y0->size[1] != 0))) {
    sizes_idx_1 = Y0->size[1];
  } else {
    sizes_idx_1 = 0;
  }

  i = precb_->size[0] * precb_->size[1];
  precb_->size[0] = t;
  precb_->size[1] = nx + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, precb_, i, &rf_emlrtRTEI);
  precb__data = precb_->data;
  for (i = 0; i < nx; i++) {
    for (i1 = 0; i1 < t; i1++) {
      precb__data[i1 + precb_->size[0] * i] = XX_data[i1 + t * i];
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < t; i1++) {
      precb__data[i1 + precb_->size[0] * (i + nx)] = 0.0;
    }
  }

  st.site = &nf_emlrtRSI;
  nx = Y0->size[1];
  i = XX->size[0] * XX->size[1];
  XX->size[0] = Y0->size[1];
  XX->size[1] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T(&st, XX, i, &sf_emlrtRTEI);
  XX_data = XX->data;
  sizes_idx_1 = (int32_T)varargin_1;
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      XX_data[i1 + XX->size[0] * i] = XY_data[i + (int32_T)varargin_1 * i1];
    }
  }

  b_st.site = &uf_emlrtRSI;
  if ((XX->size[0] != 0) && (XX->size[1] != 0)) {
    t = XX->size[1];
  } else if ((precb_->size[0] != 0) && (precb_->size[1] != 0)) {
    t = precb_->size[1];
  } else {
    t = XX->size[1];
    if (precb_->size[1] > XX->size[1]) {
      t = precb_->size[1];
    }
  }

  c_st.site = &vf_emlrtRSI;
  if ((XX->size[1] != t) && ((XX->size[0] != 0) && (XX->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((precb_->size[1] != t) && ((precb_->size[0] != 0) && (precb_->size[1] != 0)))
  {
    emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (t == 0);
  if (empty_non_axis_sizes || ((XX->size[0] != 0) && (XX->size[1] != 0))) {
    nx = XX->size[0];
  } else {
    nx = 0;
  }

  if (empty_non_axis_sizes || ((precb_->size[0] != 0) && (precb_->size[1] != 0)))
  {
    sizes_idx_1 = precb_->size[0];
  } else {
    sizes_idx_1 = 0;
  }

  i = Fm->size[0] * Fm->size[1];
  Fm->size[0] = nx + sizes_idx_1;
  Fm->size[1] = t;
  emxEnsureCapacity_real_T(&b_st, Fm, i, &tf_emlrtRTEI);
  absolute_data = Fm->data;
  for (i = 0; i < t; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      absolute_data[i1 + Fm->size[0] * i] = XX_data[i1 + nx * i];
    }
  }

  for (i = 0; i < t; i++) {
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      absolute_data[(i1 + nx) + Fm->size[0] * i] = precb__data[i1 + sizes_idx_1 *
        i];
    }
  }

  emxInit_creal_T(&b_st, &eigF, &cg_emlrtRTEI);
  emxInit_real_T(&b_st, &b_eigF, 1, &uf_emlrtRTEI);

  /*  p*k by p*k */
  st.site = &of_emlrtRSI;
  eig(&st, Fm, eigF);
  eigF_data = eigF->data;
  i = b_eigF->size[0];
  b_eigF->size[0] = eigF->size[0];
  emxEnsureCapacity_real_T(sp, b_eigF, i, &uf_emlrtRTEI);
  absolute_data = b_eigF->data;
  sizes_idx_1 = eigF->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    absolute_data[i] = eigF_data[i].im;
  }

  st.site = &pf_emlrtRSI;
  power(&st, b_eigF, XY);
  XY_data = XY->data;
  i = b_eigF->size[0];
  b_eigF->size[0] = eigF->size[0];
  emxEnsureCapacity_real_T(sp, b_eigF, i, &vf_emlrtRTEI);
  absolute_data = b_eigF->data;
  sizes_idx_1 = eigF->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    absolute_data[i] = eigF_data[i].re;
  }

  emxFree_creal_T(sp, &eigF);
  st.site = &qf_emlrtRSI;
  power(&st, b_eigF, absolute);
  absolute_data = absolute->data;
  emxFree_real_T(sp, &b_eigF);
  if ((absolute->size[0] != XY->size[0]) && ((absolute->size[0] != 1) &&
       (XY->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(absolute->size[0], XY->size[0], &hb_emlrtECI,
      (emlrtCTX)sp);
  }

  if (absolute->size[0] == XY->size[0]) {
    sizes_idx_1 = absolute->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      absolute_data[i] += XY_data[i];
    }
  } else {
    plus(sp, absolute, XY);
  }

  emxFree_real_T(sp, &XY);
  emxInit_boolean_T(sp, &test, &wf_emlrtRTEI);
  st.site = &rf_emlrtRSI;
  b_sqrt(&st, absolute);
  absolute_data = absolute->data;
  i = test->size[0];
  test->size[0] = absolute->size[0];
  emxEnsureCapacity_boolean_T(sp, test, i, &wf_emlrtRTEI);
  test_data = test->data;
  sizes_idx_1 = absolute->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    test_data[i] = (absolute_data[i] < 1.0);
  }

  emxFree_real_T(sp, &absolute);
  st.site = &sf_emlrtRSI;
  b_st.site = &ch_emlrtRSI;
  c_st.site = &dh_emlrtRSI;
  d_st.site = &eh_emlrtRSI;
  if (test->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &o_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &td_emlrtRSI;
  nx = test->size[0];
  f_st.site = &fh_emlrtRSI;
  empty_non_axis_sizes = test_data[0];
  g_st.site = &gh_emlrtRSI;
  if ((2 <= test->size[0]) && (test->size[0] > 2147483646)) {
    h_st.site = &qb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }

  for (sizes_idx_1 = 2; sizes_idx_1 <= nx; sizes_idx_1++) {
    b = test_data[sizes_idx_1 - 1];
    empty_non_axis_sizes = (((int32_T)empty_non_axis_sizes <= (int32_T)b) &&
      empty_non_axis_sizes);
  }

  emxFree_boolean_T(&f_st, &test);
  if (!empty_non_axis_sizes) {
    i = Phi->size[0] * Phi->size[1];
    Phi->size[0] = Phi0->size[0];
    Phi->size[1] = Phi0->size[1];
    emxEnsureCapacity_real_T(sp, Phi, i, &xf_emlrtRTEI);
    absolute_data = Phi->data;
    sizes_idx_1 = Phi0->size[0] * Phi0->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      absolute_data[i] = Phi0_data[i];
    }

    /*  안정성 조건을 만족하지 못하면 지난 iteration 값을 저장 */
    st.site = &tf_emlrtRSI;
    b_st.site = &tf_emlrtRSI;
    eye(&b_st, (p - 1.0) * (real_T)Y0->size[1], XX);
    XX_data = XX->data;
    d = (real_T)Y0->size[1] * (p - 1.0);
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &cc_emlrtDCI, &st);
    }

    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &dc_emlrtDCI, &st);
    }

    b_st.site = &uf_emlrtRSI;
    if ((XX->size[0] != 0) && (XX->size[1] != 0)) {
      t = XX->size[0];
    } else if (((int32_T)((real_T)Y0->size[1] * (p - 1.0)) != 0) && (Y0->size[1]
                != 0)) {
      t = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
    } else {
      t = XX->size[0];
      if ((int32_T)((real_T)Y0->size[1] * (p - 1.0)) > XX->size[0]) {
        t = (int32_T)((real_T)Y0->size[1] * (p - 1.0));
      }
    }

    c_st.site = &vf_emlrtRSI;
    if ((XX->size[0] != t) && ((XX->size[0] != 0) && (XX->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (((int32_T)((real_T)Y0->size[1] * (p - 1.0)) != t) && (((int32_T)((real_T)
           Y0->size[1] * (p - 1.0)) != 0) && (Y0->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (t == 0);
    if (empty_non_axis_sizes || ((XX->size[0] != 0) && (XX->size[1] != 0))) {
      nx = XX->size[1];
    } else {
      nx = 0;
    }

    if (empty_non_axis_sizes || (((int32_T)((real_T)Y0->size[1] * (p - 1.0)) !=
          0) && (Y0->size[1] != 0))) {
      sizes_idx_1 = Y0->size[1];
    } else {
      sizes_idx_1 = 0;
    }

    i = precb_->size[0] * precb_->size[1];
    precb_->size[0] = t;
    precb_->size[1] = nx + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, precb_, i, &rf_emlrtRTEI);
    precb__data = precb_->data;
    for (i = 0; i < nx; i++) {
      for (i1 = 0; i1 < t; i1++) {
        precb__data[i1 + precb_->size[0] * i] = XX_data[i1 + t * i];
      }
    }

    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < t; i1++) {
        precb__data[i1 + precb_->size[0] * (i + nx)] = 0.0;
      }
    }

    st.site = &tf_emlrtRSI;
    i = XX->size[0] * XX->size[1];
    XX->size[0] = Phi0->size[1];
    XX->size[1] = Phi0->size[0];
    emxEnsureCapacity_real_T(&st, XX, i, &yf_emlrtRTEI);
    XX_data = XX->data;
    sizes_idx_1 = Phi0->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      nx = Phi0->size[1];
      for (i1 = 0; i1 < nx; i1++) {
        XX_data[i1 + XX->size[0] * i] = Phi0_data[i + Phi0->size[0] * i1];
      }
    }

    b_st.site = &uf_emlrtRSI;
    if ((XX->size[0] != 0) && (XX->size[1] != 0)) {
      t = XX->size[1];
    } else if ((precb_->size[0] != 0) && (precb_->size[1] != 0)) {
      t = precb_->size[1];
    } else {
      t = XX->size[1];
      if (precb_->size[1] > XX->size[1]) {
        t = precb_->size[1];
      }
    }

    c_st.site = &vf_emlrtRSI;
    if ((XX->size[1] != t) && ((XX->size[0] != 0) && (XX->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((precb_->size[1] != t) && ((precb_->size[0] != 0) && (precb_->size[1] !=
          0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (t == 0);
    if (empty_non_axis_sizes || ((XX->size[0] != 0) && (XX->size[1] != 0))) {
      nx = XX->size[0];
    } else {
      nx = 0;
    }

    if (empty_non_axis_sizes || ((precb_->size[0] != 0) && (precb_->size[1] != 0)))
    {
      sizes_idx_1 = precb_->size[0];
    } else {
      sizes_idx_1 = 0;
    }

    i = Fm->size[0] * Fm->size[1];
    Fm->size[0] = nx + sizes_idx_1;
    Fm->size[1] = t;
    emxEnsureCapacity_real_T(&b_st, Fm, i, &ag_emlrtRTEI);
    absolute_data = Fm->data;
    for (i = 0; i < t; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        absolute_data[i1 + Fm->size[0] * i] = XX_data[i1 + nx * i];
      }
    }

    for (i = 0; i < t; i++) {
      for (i1 = 0; i1 < sizes_idx_1; i1++) {
        absolute_data[(i1 + nx) + Fm->size[0] * i] = precb__data[i1 +
          sizes_idx_1 * i];
      }
    }
  }

  emxFree_real_T(sp, &precb_);
  emxFree_real_T(sp, &XX);
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

static void b_plus(const emlrtStack *sp, emxArray_real_T *XX, const
                   emxArray_real_T *r1)
{
  emxArray_real_T *b_XX;
  const real_T *r;
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
  r = r1->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XX, 2, &xj_emlrtRTEI);
  i = b_XX->size[0] * b_XX->size[1];
  if (r1->size[0] == 1) {
    b_XX->size[0] = XX->size[0];
  } else {
    b_XX->size[0] = r1->size[0];
  }

  if (r1->size[1] == 1) {
    b_XX->size[1] = XX->size[1];
  } else {
    b_XX->size[1] = r1->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_XX, i, &xj_emlrtRTEI);
  b_XX_data = b_XX->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = r1->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = r1->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_XX_data[i1 + b_XX->size[0] * i] = XX_data[i1 * stride_0_0 + XX->size[0] *
        aux_0_1] + r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = XX->size[0] * XX->size[1];
  XX->size[0] = b_XX->size[0];
  XX->size[1] = b_XX->size[1];
  emxEnsureCapacity_real_T(sp, XX, i, &xj_emlrtRTEI);
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

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *beta_hat,
  emlrtRSInfo em_emlrtRSI, const int32_T input_sizes[2], const int32_T sizes[2],
  const emxArray_real_T *Omega_hat, const emxArray_real_T *retf, const
  emxArray_real_T *Binv, const emxArray_real_T *chol_Omega0)
{
  emlrtStack st;
  emxArray_real_T *b_beta_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r;
  const real_T *Binv_data;
  const real_T *Omega_hat_data;
  const real_T *chol_Omega0_data;
  const real_T *retf_data;
  real_T *b_beta_hat_data;
  real_T *beta_hat_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_0;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  chol_Omega0_data = chol_Omega0->data;
  Binv_data = Binv->data;
  retf_data = retf->data;
  Omega_hat_data = Omega_hat->data;
  beta_hat_data = beta_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta_hat, 2, &tc_emlrtRTEI);
  input_sizes_idx_0 = input_sizes[0];
  input_sizes_idx_1 = sizes[1];
  sizes_idx_0 = sizes[0];
  sizes_idx_1 = sizes[1];
  i = b_beta_hat->size[0] * b_beta_hat->size[1];
  b_beta_hat->size[0] = input_sizes_idx_0 + sizes_idx_0;
  b_beta_hat->size[1] = input_sizes_idx_1;
  emxEnsureCapacity_real_T(sp, b_beta_hat, i, &tc_emlrtRTEI);
  b_beta_hat_data = b_beta_hat->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      b_beta_hat_data[i1 + b_beta_hat->size[0] * i] = beta_hat_data[i1 +
        input_sizes_idx_0 * i];
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      b_beta_hat_data[(i1 + input_sizes_idx_0) + b_beta_hat->size[0] * i] =
        Omega_hat_data[i1 + sizes_idx_0 * i];
    }
  }

  emxInit_real_T(sp, &b_retf, 1, &vc_emlrtRTEI);
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &vc_emlrtRTEI);
  beta_hat_data = b_retf->data;
  input_sizes_idx_0 = retf->size[1];
  for (i = 0; i < input_sizes_idx_0; i++) {
    beta_hat_data[i] = retf_data[i];
  }

  emxInit_real_T(sp, &r, 2, &pb_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (chol_Omega0->size[1] == 1) {
    r->size[0] = Binv->size[0];
  } else {
    r->size[0] = chol_Omega0->size[1];
  }

  if (chol_Omega0->size[0] == 1) {
    r->size[1] = Binv->size[1];
  } else {
    r->size[1] = chol_Omega0->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &pb_emlrtRTEI);
  beta_hat_data = r->data;
  input_sizes_idx_1 = (Binv->size[0] != 1);
  sizes_idx_0 = (Binv->size[1] != 1);
  sizes_idx_1 = (chol_Omega0->size[1] != 1);
  stride_1_1 = (chol_Omega0->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (chol_Omega0->size[0] == 1) {
    input_sizes_idx_0 = Binv->size[1];
  } else {
    input_sizes_idx_0 = chol_Omega0->size[0];
  }

  for (i = 0; i < input_sizes_idx_0; i++) {
    if (chol_Omega0->size[1] == 1) {
      loop_ub = Binv->size[0];
    } else {
      loop_ub = chol_Omega0->size[1];
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      beta_hat_data[i1 + r->size[0] * i] = 0.5 * (Binv_data[i1 *
        input_sizes_idx_1 + Binv->size[0] * aux_0_1] + chol_Omega0_data[aux_1_1
        + chol_Omega0->size[0] * (i1 * sizes_idx_1)]);
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += sizes_idx_0;
  }

  st.site = &em_emlrtRSI;
  b_lnpdfmvn(&st, b_beta_hat, b_retf, r, beta_hat);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_beta_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [29])
{
  static const int32_T iv[2] = { 1, 29 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 29, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
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

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_optimization_, const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(a__output_of_optimization_), &thisId, y);
  emlrtDestroyArray(&a__output_of_optimization_);
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

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static void format(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray, (const char_T *)
                        "format", true, location);
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

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
  emlrtRSInfo em_emlrtRSI)
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
  emxInit_real_T(sp, &r, 2, &pb_emlrtRTEI);
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

  emxEnsureCapacity_real_T(sp, r, i, &pb_emlrtRTEI);
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

  st.site = &em_emlrtRSI;
  invpd(&st, r, XX);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *h_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat,
  const emxArray_real_T *Y, int32_T t, const emxArray_real_T *r1)
{
  const real_T *Y_data;
  const real_T *r;
  real_T *ehat_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  Y_data = Y->data;
  i = Y->size[1];
  stride_0_0 = ehat->size[0];
  if (r1->size[0] == 1) {
    ehat->size[0] = i;
  } else {
    ehat->size[0] = r1->size[0];
  }

  emxEnsureCapacity_real_T(sp, ehat, stride_0_0, &yg_emlrtRTEI);
  ehat_data = ehat->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = r1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    ehat_data[i] = Y_data[t + Y->size[0] * (i * stride_0_0)] - r[i * stride_1_0];
  }
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

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat2,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *r1)
{
  emlrtStack st;
  emxArray_real_T *b_ehat2;
  const real_T *r;
  real_T *b_ehat2_data;
  real_T *ehat2_data;
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
  ehat2_data = ehat2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_ehat2, 2, &wg_emlrtRTEI);
  i = b_ehat2->size[0] * b_ehat2->size[1];
  if (r1->size[0] == 1) {
    b_ehat2->size[0] = ehat2->size[0];
  } else {
    b_ehat2->size[0] = r1->size[0];
  }

  if (r1->size[1] == 1) {
    b_ehat2->size[1] = ehat2->size[1];
  } else {
    b_ehat2->size[1] = r1->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_ehat2, i, &wg_emlrtRTEI);
  b_ehat2_data = b_ehat2->data;
  stride_0_0 = (ehat2->size[0] != 1);
  stride_0_1 = (ehat2->size[1] != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = ehat2->size[1];
  } else {
    loop_ub = r1->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = ehat2->size[0];
    } else {
      b_loop_ub = r1->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_ehat2_data[i1 + b_ehat2->size[0] * i] = ehat2_data[i1 * stride_0_0 +
        ehat2->size[0] * aux_0_1] + r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &em_emlrtRSI;
  invpd(&st, b_ehat2, ehat2);
  emxFree_real_T(sp, &b_ehat2);
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

static void makeYX(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                   emxArray_real_T *Y0, emxArray_real_T *YLm)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *YL;
  emxArray_real_T *em_emlrtRSI;
  emxArray_real_T *fm_emlrtRSI;
  emxArray_real_T *meanX;
  emxArray_real_T *xt;
  const real_T *Y_data;
  real_T d;
  real_T d1;
  real_T kki;
  real_T *A_data;
  real_T *Y0_data;
  real_T *YL_data;
  real_T *meanX_data;
  int32_T b_YL[2];
  int32_T iv[2];
  int32_T b_i1;
  int32_T i;
  int32_T i1;
  int32_T j2;
  int32_T k;
  int32_T kidx;
  int32_T loop_ub;
  int32_T ma;
  int32_T na;
  int32_T t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  종속, 설명변수 만들기 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  k = Y->size[1];

  /*  변수의 수 */
  /*  시계열의 크기 */
  if (p + 1.0 > Y->size[0]) {
    i = 0;
    i1 = -1;
  } else {
    if (p + 1.0 != (int32_T)muDoubleScalarFloor(p + 1.0)) {
      emlrtIntegerCheckR2012b(p + 1.0, &lb_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(p + 1.0) < 1) || ((int32_T)(p + 1.0) > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(p + 1.0), 1, Y->size[0],
        &ec_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(p + 1.0) - 1;
    if (Y->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(Y->size[0], 1, Y->size[0], &fc_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = Y->size[0] - 1;
  }

  emxInit_real_T(sp, &YL, 2, &ff_emlrtRTEI);

  /*  종속변수 */
  st.site = &re_emlrtRSI;
  loop_ub = Y->size[1];
  ma = i1 - i;
  kidx = ma + 1;
  b_i1 = YL->size[0] * YL->size[1];
  YL->size[0] = ma + 1;
  YL->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, YL, b_i1, &xe_emlrtRTEI);
  YL_data = YL->data;
  for (b_i1 = 0; b_i1 < loop_ub; b_i1++) {
    for (j2 = 0; j2 <= ma; j2++) {
      YL_data[j2 + YL->size[0] * b_i1] = Y_data[(i + j2) + Y->size[0] * b_i1];
    }
  }

  emxInit_real_T(&st, &em_emlrtRSI, 2, &if_emlrtRTEI);
  b_st.site = &we_emlrtRSI;
  mean(&b_st, YL, em_emlrtRSI);
  st.site = &se_emlrtRSI;

  /*  demeaning vectors */
  loop_ub = Y->size[1];
  b_i1 = YL->size[0] * YL->size[1];
  YL->size[0] = ma + 1;
  YL->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, YL, b_i1, &xe_emlrtRTEI);
  YL_data = YL->data;
  emxFree_real_T(&st, &em_emlrtRSI);
  for (b_i1 = 0; b_i1 < loop_ub; b_i1++) {
    for (j2 = 0; j2 <= ma; j2++) {
      YL_data[j2 + YL->size[0] * b_i1] = Y_data[(i + j2) + Y->size[0] * b_i1];
    }
  }

  emxInit_real_T(&st, &meanX, 2, &gf_emlrtRTEI);
  b_st.site = &ye_emlrtRSI;
  mean(&b_st, YL, meanX);
  meanX_data = meanX->data;
  b_i1 = Y0->size[0] * Y0->size[1];
  Y0->size[0] = ma + 1;
  Y0->size[1] = meanX->size[1];
  emxEnsureCapacity_real_T(&st, Y0, b_i1, &ye_emlrtRTEI);
  Y0_data = Y0->data;
  loop_ub = meanX->size[1];
  for (b_i1 = 0; b_i1 < loop_ub; b_i1++) {
    for (j2 = 0; j2 < kidx; j2++) {
      Y0_data[j2 + Y0->size[0] * b_i1] = meanX_data[b_i1];
    }
  }

  if ((ma + 1 != Y0->size[0]) && ((ma + 1 != 1) && (Y0->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(ma + 1, Y0->size[0], &t_emlrtECI, &st);
  }

  if ((Y->size[1] != Y0->size[1]) && ((Y->size[1] != 1) && (Y0->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Y->size[1], Y0->size[1], &u_emlrtECI, &st);
  }

  if ((ma + 1 == Y0->size[0]) && (Y->size[1] == Y0->size[1])) {
    loop_ub = Y->size[1];
    i1 = Y0->size[0] * Y0->size[1];
    Y0->size[0] = ma + 1;
    Y0->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&st, Y0, i1, &af_emlrtRTEI);
    Y0_data = Y0->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (b_i1 = 0; b_i1 <= ma; b_i1++) {
        Y0_data[b_i1 + Y0->size[0] * i1] = Y_data[(i + b_i1) + Y->size[0] * i1]
          - Y0_data[b_i1 + Y0->size[0] * i1];
      }
    }
  } else {
    b_st.site = &xl_emlrtRSI;
    f_binary_expand_op(&b_st, Y0, Y, i, i1);
  }

  /*  설명변수(=Y의 과거값) 만들기 */
  d = (real_T)Y->size[0] - p;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ob_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, (emlrtCTX)sp);
  }

  i = YL->size[0] * YL->size[1];
  YL->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, YL, i, &bf_emlrtRTEI);
  d = p * (real_T)Y->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &qb_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &pb_emlrtDCI, (emlrtCTX)sp);
  }

  i = YL->size[0] * YL->size[1];
  YL->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, YL, i, &bf_emlrtRTEI);
  YL_data = YL->data;
  d = (real_T)Y->size[0] - p;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &wb_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, (emlrtCTX)sp);
  }

  d1 = p * (real_T)Y->size[1];
  if (!(d1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d1, &wb_emlrtDCI, (emlrtCTX)sp);
  }

  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &vb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = (int32_T)d * (int32_T)d1;
  for (i = 0; i < loop_ub; i++) {
    YL_data[i] = 0.0;
  }

  i = (int32_T)p;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, p, mxDOUBLE_CLASS, (int32_T)p,
    &s_emlrtRTEI, (emlrtCTX)sp);
  if (0 <= (int32_T)p - 1) {
    iv[1] = Y->size[1];
    na = Y->size[1];
  }

  for (kidx = 0; kidx < i; kidx++) {
    d = (p + 1.0) - ((real_T)kidx + 1.0);
    i1 = (int32_T)((real_T)Y->size[0] - ((real_T)kidx + 1.0));
    if (d > i1) {
      b_i1 = 0;
      i1 = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &mb_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Y->size[0], &gc_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_i1 = (int32_T)d - 1;
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &hc_emlrtBCI, (emlrtCTX)
          sp);
      }
    }

    d = (real_T)k * (((real_T)kidx + 1.0) - 1.0) + 1.0;
    d1 = (real_T)k * ((real_T)kidx + 1.0);
    if (d > d1) {
      j2 = 0;
      ma = 0;
    } else {
      if (((int32_T)d < 1) || ((int32_T)d > YL->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, YL->size[1], &ic_emlrtBCI,
          (emlrtCTX)sp);
      }

      j2 = (int32_T)d - 1;
      if (((int32_T)d1 < 1) || ((int32_T)d1 > YL->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, YL->size[1], &jc_emlrtBCI,
          (emlrtCTX)sp);
      }

      ma = (int32_T)d1;
    }

    b_YL[0] = YL->size[0];
    b_YL[1] = ma - j2;
    loop_ub = i1 - b_i1;
    iv[0] = loop_ub;
    emlrtSubAssignSizeCheckR2012b(&b_YL[0], 2, &iv[0], 2, &r_emlrtECI, (emlrtCTX)
      sp);
    for (i1 = 0; i1 < na; i1++) {
      for (ma = 0; ma < loop_ub; ma++) {
        YL_data[ma + YL->size[0] * (j2 + i1)] = Y_data[(b_i1 + ma) + Y->size[0] *
          i1];
      }
    }

    /*  p 시차에 해당하는 전체 설명변수 데이터 블록을 YL의 (p-1) 시차 블록의 우측에 저장 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxInit_real_T(sp, &A, 2, &hf_emlrtRTEI);
  emxInit_real_T(sp, &fm_emlrtRSI, 2, &if_emlrtRTEI);
  st.site = &te_emlrtRSI;
  b_st.site = &we_emlrtRSI;
  mean(&b_st, YL, fm_emlrtRSI);
  st.site = &ue_emlrtRSI;

  /*  demeaning vectors */
  b_st.site = &ye_emlrtRSI;
  mean(&b_st, YL, meanX);
  meanX_data = meanX->data;
  i = A->size[0] * A->size[1];
  A->size[0] = YL->size[0];
  A->size[1] = meanX->size[1];
  emxEnsureCapacity_real_T(&st, A, i, &ye_emlrtRTEI);
  A_data = A->data;
  loop_ub = meanX->size[1];
  emxFree_real_T(&st, &fm_emlrtRSI);
  for (i = 0; i < loop_ub; i++) {
    ma = YL->size[0];
    for (i1 = 0; i1 < ma; i1++) {
      A_data[i1 + A->size[0] * i] = meanX_data[i];
    }
  }

  emxFree_real_T(&st, &meanX);
  if ((YL->size[0] != A->size[0]) && ((YL->size[0] != 1) && (A->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(YL->size[0], A->size[0], &t_emlrtECI, &st);
  }

  if ((YL->size[1] != A->size[1]) && ((YL->size[1] != 1) && (A->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(YL->size[1], A->size[1], &u_emlrtECI, &st);
  }

  if ((YL->size[0] == A->size[0]) && (YL->size[1] == A->size[1])) {
    loop_ub = YL->size[0] * YL->size[1];
    for (i = 0; i < loop_ub; i++) {
      YL_data[i] -= A_data[i];
    }
  } else {
    b_st.site = &xl_emlrtRSI;
    minus(&b_st, YL, A);
    YL_data = YL->data;
  }

  /*  각 식에 있는 설명변수의 수 */
  kki = (real_T)Y->size[1] * (p * (real_T)Y->size[1]);

  /*  축약형 VAR의 회귀계수의 수 */
  i = YLm->size[0] * YLm->size[1] * YLm->size[2];
  YLm->size[0] = Y->size[1];
  emxEnsureCapacity_real_T(sp, YLm, i, &cf_emlrtRTEI);
  if (!(kki >= 0.0)) {
    emlrtNonNegativeCheckR2012b(kki, &sb_emlrtDCI, (emlrtCTX)sp);
  }

  d = (int32_T)muDoubleScalarFloor(kki);
  if (kki != d) {
    emlrtIntegerCheckR2012b(kki, &rb_emlrtDCI, (emlrtCTX)sp);
  }

  i = YLm->size[0] * YLm->size[1] * YLm->size[2];
  YLm->size[1] = (int32_T)kki;
  emxEnsureCapacity_real_T(sp, YLm, i, &cf_emlrtRTEI);
  d1 = (real_T)Y->size[0] - p;
  if (!(d1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d1, &ub_emlrtDCI, (emlrtCTX)sp);
  }

  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &tb_emlrtDCI, (emlrtCTX)sp);
  }

  i = YLm->size[0] * YLm->size[1] * YLm->size[2];
  YLm->size[2] = (int32_T)d1;
  emxEnsureCapacity_real_T(sp, YLm, i, &cf_emlrtRTEI);
  Y0_data = YLm->data;
  if (kki != d) {
    emlrtIntegerCheckR2012b(kki, &xb_emlrtDCI, (emlrtCTX)sp);
  }

  d = (real_T)Y->size[0] - p;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &yb_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = Y->size[1] * (int32_T)kki * (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    Y0_data[i] = 0.0;
  }

  /*  설명변수를 3차원으로 새롭게 저장할 방 */
  d = (real_T)Y->size[0] - p;
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &t_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &xt, 2, &ef_emlrtRTEI);
  for (t = 0; t < i; t++) {
    st.site = &ve_emlrtRSI;
    b_st.site = &ve_emlrtRSI;
    eye(&b_st, k, A);
    A_data = A->data;
    if ((t + 1 < 1) || (t + 1 > YL->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, YL->size[0], &kc_emlrtBCI, &st);
    }

    ma = A->size[0];
    na = A->size[1];
    i1 = YL->size[1];
    b_i1 = xt->size[0] * xt->size[1];
    xt->size[0] = A->size[0];
    xt->size[1] = YL->size[1] * A->size[1];
    emxEnsureCapacity_real_T(&st, xt, b_i1, &df_emlrtRTEI);
    meanX_data = xt->data;
    kidx = -1;
    b_st.site = &af_emlrtRSI;
    if ((1 <= A->size[1]) && (A->size[1] > 2147483646)) {
      c_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (loop_ub = 0; loop_ub < na; loop_ub++) {
      b_st.site = &bf_emlrtRSI;
      if ((1 <= i1) && (i1 > 2147483646)) {
        c_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (j2 = 0; j2 < i1; j2++) {
        b_st.site = &cf_emlrtRSI;
        if ((1 <= ma) && (ma > 2147483646)) {
          c_st.site = &qb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (b_i1 = 0; b_i1 < ma; b_i1++) {
          meanX_data[(kidx + b_i1) + 1] = A_data[b_i1 + A->size[0] * loop_ub] *
            YL_data[t + YL->size[0] * j2];
        }

        kidx += ma;
      }
    }

    /*  x(t)' for regressor of SUR */
    if ((t + 1 < 1) || (t + 1 > YLm->size[2])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, YLm->size[2], &lc_emlrtBCI,
        (emlrtCTX)sp);
    }

    b_YL[0] = YLm->size[0];
    b_YL[1] = YLm->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_YL[0], 2, &xt->size[0], 2, &s_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = xt->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      ma = xt->size[0];
      for (b_i1 = 0; b_i1 < ma; b_i1++) {
        Y0_data[(b_i1 + YLm->size[0] * i1) + YLm->size[0] * YLm->size[1] * t] =
          meanX_data[b_i1 + xt->size[0] * i1];
      }
    }

    /*  p by k, x(t)'를 한층 한층 쌓는 것 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &A);
  emxFree_real_T(sp, &YL);
  emxFree_real_T(sp, &xt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  real_T *ret_data;
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
    false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static const mxArray *optimization(const emlrtStack *sp, const mxArray *m1,
  const mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
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
    char_T *)"optimization", true, location);
}

static void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Psi,
  emlrtRSInfo em_emlrtRSI, const emxArray_real_T *chol_Omega, const
  emxArray_real_T *F)
{
  emlrtStack st;
  emxArray_real_T *b_chol_Omega;
  const real_T *F_data;
  const real_T *chol_Omega_data;
  real_T *b_chol_Omega_data;
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
  F_data = F->data;
  chol_Omega_data = chol_Omega->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_chol_Omega, 2, &ui_emlrtRTEI);
  i = b_chol_Omega->size[0] * b_chol_Omega->size[1];
  if (F->size[0] == 1) {
    b_chol_Omega->size[0] = chol_Omega->size[0];
  } else {
    b_chol_Omega->size[0] = F->size[0];
  }

  if (F->size[1] == 1) {
    b_chol_Omega->size[1] = chol_Omega->size[1];
  } else {
    b_chol_Omega->size[1] = F->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_chol_Omega, i, &ui_emlrtRTEI);
  b_chol_Omega_data = b_chol_Omega->data;
  stride_0_0 = (chol_Omega->size[0] != 1);
  stride_0_1 = (chol_Omega->size[1] != 1);
  stride_1_0 = (F->size[0] != 1);
  stride_1_1 = (F->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (F->size[1] == 1) {
    loop_ub = chol_Omega->size[1];
  } else {
    loop_ub = F->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    if (F->size[0] == 1) {
      b_loop_ub = chol_Omega->size[0];
    } else {
      b_loop_ub = F->size[0];
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_chol_Omega_data[i1 + b_chol_Omega->size[0] * i] = chol_Omega_data[i1 *
        stride_0_0 + chol_Omega->size[0] * aux_0_1] - F_data[i1 * stride_1_0 +
        F->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  st.site = &em_emlrtRSI;
  inv(&st, b_chol_Omega, Psi);
  emxFree_real_T(sp, &b_chol_Omega);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *XY, const
                 emxArray_real_T *absolute)
{
  emxArray_real_T *b_XY;
  const real_T *absolute_data;
  real_T *XY_data;
  real_T *b_XY_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  absolute_data = absolute->data;
  XY_data = XY->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XY, 1, &wj_emlrtRTEI);
  i = b_XY->size[0];
  if (absolute->size[0] == 1) {
    b_XY->size[0] = XY->size[0];
  } else {
    b_XY->size[0] = absolute->size[0];
  }

  emxEnsureCapacity_real_T(sp, b_XY, i, &wj_emlrtRTEI);
  b_XY_data = b_XY->data;
  stride_0_0 = (XY->size[0] != 1);
  stride_1_0 = (absolute->size[0] != 1);
  if (absolute->size[0] == 1) {
    loop_ub = XY->size[0];
  } else {
    loop_ub = absolute->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_XY_data[i] = XY_data[i * stride_0_0] + absolute_data[i * stride_1_0];
  }

  i = XY->size[0];
  XY->size[0] = b_XY->size[0];
  emxEnsureCapacity_real_T(sp, XY, i, &wj_emlrtRTEI);
  XY_data = XY->data;
  loop_ub = b_XY->size[0];
  for (i = 0; i < loop_ub; i++) {
    XY_data[i] = b_XY_data[i];
  }

  emxFree_real_T(sp, &b_XY);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Structure_BVAR(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                    real_T n0, real_T n1, real_T mlag, real_T nu, const
                    emxArray_real_T *R0, const emxArray_real_T *b_, const
                    emxArray_real_T *var_, char_T ML, real_T restriction, const
                    emxArray_real_T *resindex, const emxArray_real_T *ind_chol,
                    struct0_T *Output)
{
  static const char_T cv1[38] = { 'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n',
    'g', ' ', 't', 'h', 'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ',
    'P', 'l', 'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.' };

  static const char_T cv5[29] = { '[', 'p', 'h', 'i', '(', '1', ')', ' ', 'p',
    'h', 'i', '(', '2', ')', ' ', '.', '.', '.', ' ', 'p', 'h', 'i', '(', 'p',
    ')', ']', ' ', '=', ' ' };

  static const char_T cv4[23] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'i',
    't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', '\\', 'n' };

  static const char_T cv7[11] = { 'B', ' ', 'i', 'n', 'v', 'e', 'r', 's', 'e',
    ':', ' ' };

  static const char_T cv3[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T cv6[7] = { 'O', 'm', 'e', 'g', 'a', ':', ' ' };

  static const char_T b_cv[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *Binv;
  emxArray_real_T *BinvT;
  emxArray_real_T *Gamma;
  emxArray_real_T *Omega0;
  emxArray_real_T *Omega_hat;
  emxArray_real_T *Omega_inv;
  emxArray_real_T *Omegam;
  emxArray_real_T *Phi;
  emxArray_real_T *Y0;
  emxArray_real_T *YLm;
  emxArray_real_T *b_Binv;
  emxArray_real_T *b_R0;
  emxArray_real_T *b_Y0;
  emxArray_real_T *beta;
  emxArray_real_T *beta_hat;
  emxArray_real_T *betam;
  emxArray_real_T *chol_Omega0;
  emxArray_real_T *retf;
  emxArray_real_T *y;
  const real_T *R0_data;
  const real_T *b__data;
  const real_T *ind_chol_data;
  real_T beta_prior;
  real_T d;
  real_T lnlik1;
  real_T lnpost_hat;
  real_T n;
  real_T pkk;
  real_T *BinvT_data;
  real_T *Binv_data;
  real_T *Gamma_data;
  real_T *Omega0_data;
  real_T *Omegam_data;
  real_T *Phi_data;
  real_T *Y0_data;
  real_T *YLm_data;
  real_T *b_Binv_data;
  real_T *beta_data;
  real_T *beta_hat_data;
  real_T *betam_data;
  real_T *chol_Omega0_data;
  real_T *retf_data;
  int32_T b_Gamma[2];
  int32_T input_sizes[2];
  int32_T sizes[2];
  int32_T T_tmp;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T idx;
  int32_T input_sizes_idx_1;
  int32_T iter;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
  char_T cv2[37];
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  ind_chol_data = ind_chol->data;
  b__data = b_->data;
  R0_data = R0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Gamma, 2, &ob_emlrtRTEI);

  /*  coder.extrinsic('eval') */
  st.site = &yk_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);

  /*  number of columns */
  k = Y->size[1];

  /*  변수의 개수 */
  pkk = p * (real_T)Y->size[1] * (real_T)Y->size[1];

  /*  모든 시차에 대한 축약형 방정식의 기울기 회귀계수의 총 개수 */
  n = n0 + n1;

  /*  sig2 = zeros(k,1); */
  /*  B = zeros(k,k); */
  i = Gamma->size[0] * Gamma->size[1];
  Gamma->size[0] = Y->size[1];
  emxEnsureCapacity_real_T(sp, Gamma, i, &ob_emlrtRTEI);
  d = p * (real_T)Y->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &f_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &e_emlrtDCI, (emlrtCTX)sp);
  }

  i = Gamma->size[0] * Gamma->size[1];
  Gamma->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, Gamma, i, &ob_emlrtRTEI);
  Gamma_data = Gamma->data;
  d = p * (real_T)Y->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ab_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &y_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = Y->size[1] * (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    Gamma_data[i] = 0.0;
  }

  emxInit_real_T(sp, &b_R0, 2, &pb_emlrtRTEI);

  /*  normalize = zeros(k,(p+2)*k+1); */
  i = b_R0->size[0] * b_R0->size[1];
  b_R0->size[0] = R0->size[0];
  b_R0->size[1] = R0->size[1];
  emxEnsureCapacity_real_T(sp, b_R0, i, &pb_emlrtRTEI);
  Binv_data = b_R0->data;
  loop_ub = R0->size[0] * R0->size[1];
  for (i = 0; i < loop_ub; i++) {
    Binv_data[i] = R0_data[i] * nu;
  }

  emxInit_real_T(sp, &Omega0, 2, &ad_emlrtRTEI);
  st.site = &emlrtRSI;
  inv(&st, b_R0, Omega0);
  Omega0_data = Omega0->data;

  /*  Note that E(inv(Omega)=precision matrix) = nu*R0 */
  st.site = &b_emlrtRSI;
  beta_prior = p * (real_T)Y->size[1];
  nx = b_->size[0];
  b_st.site = &wb_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, beta_prior);
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, Y->size[1]);
  input_sizes_idx_1 = b_->size[0];
  if (1 > b_->size[0]) {
    input_sizes_idx_1 = 1;
  }

  nx = muIntScalarMax_sint32(nx, input_sizes_idx_1);
  if ((int32_T)beta_prior > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (Y->size[1] > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int32_T)beta_prior < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if ((int32_T)beta_prior * Y->size[1] != b_->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emxInit_real_T(&st, &Phi, 2, &qb_emlrtRTEI);
  i = Phi->size[0] * Phi->size[1];
  Phi->size[0] = (int32_T)beta_prior;
  Phi->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, Phi, i, &qb_emlrtRTEI);
  Phi_data = Phi->data;
  loop_ub = (int32_T)beta_prior * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    Phi_data[i] = b__data[i];
  }

  emxInit_real_T(sp, &Omega_inv, 2, &bd_emlrtRTEI);
  emxInit_real_T(sp, &BinvT, 2, &cd_emlrtRTEI);
  emxInit_real_T(sp, &chol_Omega0, 2, &dd_emlrtRTEI);

  /*  F행렬의 1행 Block의 전치 */
  /*  F = [Phi' ; eye((p-1)*k), zeros(k*(p-1),k)]; */
  /*  beta = b_; */
  st.site = &c_emlrtRSI;
  invpd(&st, Omega0, Omega_inv);

  /*  축약형 방정식의 오차 분산행렬의 초기값의 역행렬 */
  i = BinvT->size[0] * BinvT->size[1];
  BinvT->size[0] = Y->size[1];
  BinvT->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, BinvT, i, &rb_emlrtRTEI);
  BinvT_data = BinvT->data;
  st.site = &d_emlrtRSI;
  i = chol_Omega0->size[0] * chol_Omega0->size[1];
  chol_Omega0->size[0] = Omega0->size[0];
  chol_Omega0->size[1] = Omega0->size[1];
  emxEnsureCapacity_real_T(&st, chol_Omega0, i, &sb_emlrtRTEI);
  chol_Omega0_data = chol_Omega0->data;
  loop_ub = Omega0->size[0] * Omega0->size[1];
  for (i = 0; i < loop_ub; i++) {
    chol_Omega0_data[i] = Omega0_data[i];
  }

  b_st.site = &le_emlrtRSI;
  cholesky(&b_st, chol_Omega0);
  chol_Omega0_data = chol_Omega0->data;
  i = Y->size[1];
  if (0 <= Y->size[1] - 1) {
    i1 = chol_Omega0->size[1];
    b_loop_ub = chol_Omega0->size[1];
    b_Gamma[0] = 1;
  }

  emxInit_real_T(sp, &retf, 2, &fd_emlrtRTEI);
  for (nx = 0; nx < i; nx++) {
    if (nx + 1 > BinvT->size[0]) {
      emlrtDynamicBoundsCheckR2012b(nx + 1, 1, BinvT->size[0], &c_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (nx + 1 > chol_Omega0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(nx + 1, 1, chol_Omega0->size[0], &emlrtBCI,
        (emlrtCTX)sp);
    }

    if (nx + 1 > ind_chol->size[0]) {
      emlrtDynamicBoundsCheckR2012b(nx + 1, 1, ind_chol->size[0], &b_emlrtBCI,
        (emlrtCTX)sp);
    }

    i2 = retf->size[0] * retf->size[1];
    retf->size[0] = 1;
    retf->size[1] = i1;
    emxEnsureCapacity_real_T(sp, retf, i2, &ub_emlrtRTEI);
    retf_data = retf->data;
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      retf_data[i2] = chol_Omega0_data[nx + chol_Omega0->size[0] * i2] *
        ind_chol_data[nx];
    }

    b_Gamma[1] = BinvT->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_Gamma[0], 2, &retf->size[0], 2, &emlrtECI,
      (emlrtCTX)sp);
    loop_ub = retf->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      BinvT_data[nx + BinvT->size[0] * i2] = retf_data[i2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxInit_real_T(sp, &Binv, 2, &tb_emlrtRTEI);
  i = Binv->size[0] * Binv->size[1];
  Binv->size[0] = BinvT->size[1];
  Binv->size[1] = BinvT->size[0];
  emxEnsureCapacity_real_T(sp, Binv, i, &tb_emlrtRTEI);
  Binv_data = Binv->data;
  loop_ub = BinvT->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = BinvT->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Binv_data[i1 + Binv->size[0] * i] = BinvT_data[i + BinvT->size[0] * i1];
    }
  }

  /*  축약형 방정식의 오차항의 precision matrix(공분산행렬의 역행렬)의 사전평균을 초기값으로 둔 것 */
  /*  충격반응함수를 저장할 방 */
  st.site = &e_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  beta_prior = (real_T)Y->size[1] * (real_T)Y->size[1];
  if (!(n1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n1, &h_emlrtDCI, (emlrtCTX)sp);
  }

  i = (int32_T)muDoubleScalarFloor(n1);
  if (n1 != i) {
    emlrtIntegerCheckR2012b(n1, &g_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->ImpulseRespm->size[0] * Output->ImpulseRespm->size[1] *
    Output->ImpulseRespm->size[2];
  Output->ImpulseRespm->size[0] = (int32_T)n1;
  emxEnsureCapacity_real_T(sp, Output->ImpulseRespm, i1, &vb_emlrtRTEI);
  if (!(mlag + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mlag + 1.0, &j_emlrtDCI, (emlrtCTX)sp);
  }

  d = (int32_T)muDoubleScalarFloor(mlag + 1.0);
  if (mlag + 1.0 != d) {
    emlrtIntegerCheckR2012b(mlag + 1.0, &i_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->ImpulseRespm->size[0] * Output->ImpulseRespm->size[1] *
    Output->ImpulseRespm->size[2];
  Output->ImpulseRespm->size[1] = (int32_T)(mlag + 1.0);
  emxEnsureCapacity_real_T(sp, Output->ImpulseRespm, i1, &vb_emlrtRTEI);
  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &k_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->ImpulseRespm->size[0] * Output->ImpulseRespm->size[1] *
    Output->ImpulseRespm->size[2];
  Output->ImpulseRespm->size[2] = (int32_T)beta_prior;
  emxEnsureCapacity_real_T(sp, Output->ImpulseRespm, i1, &vb_emlrtRTEI);
  if (n1 != i) {
    emlrtIntegerCheckR2012b(n1, &bb_emlrtDCI, (emlrtCTX)sp);
  }

  if (!(mlag + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mlag + 1.0, &cb_emlrtDCI, (emlrtCTX)sp);
  }

  if (mlag + 1.0 != d) {
    emlrtIntegerCheckR2012b(mlag + 1.0, &bb_emlrtDCI, (emlrtCTX)sp);
  }

  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &bb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)(mlag + 1.0) * (int32_T)beta_prior;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->ImpulseRespm->data[i1] = 0.0;
  }

  /*  (iter,j,1)은 변수 1이 변수1에 j기 이후 미치는 영향 */
  st.site = &f_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  beta_prior = (real_T)Y->size[1] * (real_T)Y->size[1];
  if (n1 != i) {
    emlrtIntegerCheckR2012b(n1, &l_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->decomm->size[0] * Output->decomm->size[1] * Output->decomm->size
    [2];
  i2 = (int32_T)n1;
  Output->decomm->size[0] = i2;
  emxEnsureCapacity_real_T(sp, Output->decomm, i1, &wb_emlrtRTEI);
  if (!(mlag + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mlag + 1.0, &n_emlrtDCI, (emlrtCTX)sp);
  }

  if (mlag + 1.0 != d) {
    emlrtIntegerCheckR2012b(mlag + 1.0, &m_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->decomm->size[0] * Output->decomm->size[1] * Output->decomm->size
    [2];
  Output->decomm->size[1] = (int32_T)(mlag + 1.0);
  emxEnsureCapacity_real_T(sp, Output->decomm, i1, &wb_emlrtRTEI);
  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &o_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->decomm->size[0] * Output->decomm->size[1] * Output->decomm->size
    [2];
  Output->decomm->size[2] = (int32_T)beta_prior;
  emxEnsureCapacity_real_T(sp, Output->decomm, i1, &wb_emlrtRTEI);
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &db_emlrtDCI, (emlrtCTX)sp);
  }

  if (!(mlag + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(mlag + 1.0, &eb_emlrtDCI, (emlrtCTX)sp);
  }

  if (mlag + 1.0 != d) {
    emlrtIntegerCheckR2012b(mlag + 1.0, &db_emlrtDCI, (emlrtCTX)sp);
  }

  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &db_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)(mlag + 1.0) * (int32_T)beta_prior;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->decomm->data[i1] = 0.0;
  }

  /*  축약형 모형계수를 저장할 방 */
  st.site = &g_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  beta_prior = (real_T)Y->size[1] * (real_T)Y->size[1];
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &p_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Bm->size[0] * Output->Bm->size[1];
  Output->Bm->size[0] = i2;
  emxEnsureCapacity_real_T(sp, Output->Bm, i1, &xb_emlrtRTEI);
  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &q_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Bm->size[0] * Output->Bm->size[1];
  Output->Bm->size[1] = (int32_T)beta_prior;
  emxEnsureCapacity_real_T(sp, Output->Bm, i1, &xb_emlrtRTEI);
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &fb_emlrtDCI, (emlrtCTX)sp);
  }

  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &fb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = i2 * (int32_T)beta_prior;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->Bm->data[i1] = 0.0;
  }

  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &r_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Output->Gammam->size[0] * Output->Gammam->size[1];
  Output->Gammam->size[0] = i2;
  emxEnsureCapacity_real_T(sp, Output->Gammam, i1, &yb_emlrtRTEI);
  if (!(pkk >= 0.0)) {
    emlrtNonNegativeCheckR2012b(pkk, &t_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = (int32_T)muDoubleScalarFloor(pkk);
  if (pkk != i1) {
    emlrtIntegerCheckR2012b(pkk, &s_emlrtDCI, (emlrtCTX)sp);
  }

  i3 = Output->Gammam->size[0] * Output->Gammam->size[1];
  Output->Gammam->size[1] = (int32_T)pkk;
  emxEnsureCapacity_real_T(sp, Output->Gammam, i3, &yb_emlrtRTEI);
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &gb_emlrtDCI, (emlrtCTX)sp);
  }

  if (pkk != i1) {
    emlrtIntegerCheckR2012b(pkk, &gb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = i2 * (int32_T)pkk;
  for (i3 = 0; i3 < loop_ub; i3++) {
    Output->Gammam->data[i3] = 0.0;
  }

  emxInit_real_T(sp, &betam, 2, &ac_emlrtRTEI);

  /*  sig2m = zeros(n1,k); */
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &u_emlrtDCI, (emlrtCTX)sp);
  }

  i3 = betam->size[0] * betam->size[1];
  betam->size[0] = i2;
  emxEnsureCapacity_real_T(sp, betam, i3, &ac_emlrtRTEI);
  if (pkk != i1) {
    emlrtIntegerCheckR2012b(pkk, &v_emlrtDCI, (emlrtCTX)sp);
  }

  i3 = betam->size[0] * betam->size[1];
  nx = (int32_T)pkk;
  betam->size[1] = nx;
  emxEnsureCapacity_real_T(sp, betam, i3, &ac_emlrtRTEI);
  betam_data = betam->data;
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &hb_emlrtDCI, (emlrtCTX)sp);
  }

  if (nx != i1) {
    emlrtIntegerCheckR2012b(pkk, &hb_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = (int32_T)n1 * (int32_T)pkk;
  for (i1 = 0; i1 < loop_ub; i1++) {
    betam_data[i1] = 0.0;
  }

  emxInit_real_T(sp, &Omegam, 2, &bc_emlrtRTEI);
  st.site = &h_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  beta_prior = (real_T)Y->size[1] * (real_T)Y->size[1];
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &w_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Omegam->size[0] * Omegam->size[1];
  Omegam->size[0] = i2;
  emxEnsureCapacity_real_T(sp, Omegam, i1, &bc_emlrtRTEI);
  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &x_emlrtDCI, (emlrtCTX)sp);
  }

  i1 = Omegam->size[0] * Omegam->size[1];
  Omegam->size[1] = (int32_T)beta_prior;
  emxEnsureCapacity_real_T(sp, Omegam, i1, &bc_emlrtRTEI);
  Omegam_data = Omegam->data;
  if (i2 != i) {
    emlrtIntegerCheckR2012b(n1, &ib_emlrtDCI, (emlrtCTX)sp);
  }

  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &ib_emlrtDCI, (emlrtCTX)sp);
  }

  loop_ub = i2 * (int32_T)beta_prior;
  for (i = 0; i < loop_ub; i++) {
    Omegam_data[i] = 0.0;
  }

  emxInit_real_T(sp, &beta_hat, 1, &cc_emlrtRTEI);
  emxInit_real_T(sp, &Y0, 2, &ed_emlrtRTEI);
  emxInit_real_T(sp, &YLm, 3, &ed_emlrtRTEI);

  /*  사후분포 추출하기 */
  st.site = &i_emlrtRSI;
  makeYX(&st, Y, p, Y0, YLm);
  YLm_data = YLm->data;
  Y0_data = Y0->data;

  /*  종속변수(Y0)와 설명변수(YLm) 만들기 */
  T_tmp = Y0->size[0];
  i = beta_hat->size[0];
  beta_hat->size[0] = b_->size[0];
  emxEnsureCapacity_real_T(sp, beta_hat, i, &cc_emlrtRTEI);
  beta_hat_data = beta_hat->data;
  loop_ub = b_->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_hat_data[i] = b__data[i];
  }

  emxInit_real_T(sp, &Omega_hat, 2, &dc_emlrtRTEI);
  i = Omega_hat->size[0] * Omega_hat->size[1];
  Omega_hat->size[0] = Omega0->size[0];
  Omega_hat->size[1] = Omega0->size[1];
  emxEnsureCapacity_real_T(sp, Omega_hat, i, &dc_emlrtRTEI);
  Binv_data = Omega_hat->data;
  loop_ub = Omega0->size[0] * Omega0->size[1];
  for (i = 0; i < loop_ub; i++) {
    Binv_data[i] = Omega0_data[i];
  }

  lnpost_hat = -4.8516519540979028E+8;

  /*  임의로 값을 주고 시작함 */
  lnlik1 = 0.0;
  i = (int32_T)n;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &beta, 1, &vc_emlrtRTEI);
  emxInit_real_T(sp, &b_Binv, 2, &rc_emlrtRTEI);
  emxInit_real_T(sp, &y, 1, &kc_emlrtRTEI);
  emxInit_real_T(sp, &b_Y0, 1, &oc_emlrtRTEI);
  for (iter = 0; iter < i; iter++) {
    if (restriction == 3.0) {
      nx = 1;
    } else {
      nx = 100;
    }

    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if (((real_T)iter + 1.0) - muDoubleScalarFloor(((real_T)iter + 1.0) /
         (real_T)nx) * (real_T)nx == 0.0) {
      st.site = &rl_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i1 = 0; i1 < 37; i1++) {
        cv2[i1] = '=';
      }

      st.site = &bl_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv2), &f_emlrtMCI);
      st.site = &j_emlrtRSI;
      b_st.site = &df_emlrtRSI;
      c_st.site = &el_emlrtRSI;
      d_st.site = &hl_emlrtRSI;
      c_emlrt_marshallIn(&c_st, d_feval(&c_st, e_emlrt_marshallOut(&c_st, cv3),
        h_emlrt_marshallOut(1.0), i_emlrt_marshallOut(&d_st, cv4),
        h_emlrt_marshallOut((real_T)iter + 1.0), &v_emlrtMCI),
                         "<output of feval>");
      for (i1 = 0; i1 < 37; i1++) {
        cv2[i1] = '=';
      }

      st.site = &al_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv2), &g_emlrtMCI);
      st.site = &ql_emlrtRSI;
      disp(&st, m_emlrt_marshallOut(), &h_emlrtMCI);
      st.site = &cl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
      i1 = b_R0->size[0] * b_R0->size[1];
      b_R0->size[0] = Phi->size[1];
      loop_ub = Phi->size[0];
      b_R0->size[1] = Phi->size[0];
      emxEnsureCapacity_real_T(sp, b_R0, i1, &hc_emlrtRTEI);
      Binv_data = b_R0->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = Phi->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          Binv_data[i2 + b_R0->size[0] * i1] = Phi_data[i1 + Phi->size[0] * i2];
        }
      }

      st.site = &pl_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(b_R0), &j_emlrtMCI);
      st.site = &dl_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv6), &k_emlrtMCI);
      st.site = &ol_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(Omega0), &l_emlrtMCI);
      st.site = &fl_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, cv7), &m_emlrtMCI);
      st.site = &nl_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(Binv), &n_emlrtMCI);
    }

    /*  Phi sampling 하기 */
    st.site = &k_emlrtRSI;
    Gen_Phi(&st, Y0, YLm, Phi, p, b_, var_, Omega_inv, BinvT, chol_Omega0, beta);
    beta_data = beta->data;
    BinvT_data = BinvT->data;
    i1 = Phi->size[0] * Phi->size[1];
    Phi->size[0] = BinvT->size[0];
    Phi->size[1] = BinvT->size[1];
    emxEnsureCapacity_real_T(sp, Phi, i1, &fc_emlrtRTEI);
    Phi_data = Phi->data;
    loop_ub = BinvT->size[0] * BinvT->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Phi_data[i1] = BinvT_data[i1];
    }

    /*  Omega sampling 하기 */
    st.site = &l_emlrtRSI;
    Gen_Omega(&st, Y0, YLm, beta, nu, R0, Omega0, Omega_inv);
    Omega0_data = Omega0->data;

    /*  충격반응함수 계산해서 저장하기 */
    if ((real_T)iter + 1.0 > n0) {
      /*  burn - in을 고려한 과정 */
      st.site = &m_emlrtRSI;
      Gen_ImRes(&st, Omega0, chol_Omega0, mlag, n0, Output->ImpulseRespm,
                (real_T)iter + 1.0, Output->decomm, restriction, Binv, resindex,
                T_tmp, ind_chol, b_Binv);
      b_Binv_data = b_Binv->data;
      i1 = Binv->size[0] * Binv->size[1];
      Binv->size[0] = b_Binv->size[0];
      Binv->size[1] = b_Binv->size[1];
      emxEnsureCapacity_real_T(sp, Binv, i1, &gc_emlrtRTEI);
      Binv_data = Binv->data;
      loop_ub = b_Binv->size[0] * b_Binv->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Binv_data[i1] = b_Binv_data[i1];
      }

      /*  기울기 계수행렬 sampling하기 */
      i1 = chol_Omega0->size[0] * chol_Omega0->size[1];
      chol_Omega0->size[0] = BinvT->size[1];
      loop_ub = BinvT->size[0];
      chol_Omega0->size[1] = BinvT->size[0];
      emxEnsureCapacity_real_T(sp, chol_Omega0, i1, &ic_emlrtRTEI);
      chol_Omega0_data = chol_Omega0->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = BinvT->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          chol_Omega0_data[i2 + chol_Omega0->size[0] * i1] = BinvT_data[i1 +
            BinvT->size[0] * i2];
        }
      }

      /*  축약형 기울기 계수행렬이 1시차부터 p시차까지 오른쪽으로 나열됨 */
      st.site = &n_emlrtRSI;
      inv(&st, b_Binv, BinvT);
      i1 = (int32_T)p;
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, p, mxDOUBLE_CLASS, (int32_T)p,
        &b_emlrtRTEI, (emlrtCTX)sp);
      for (idx = 0; idx < i1; idx++) {
        d = (((real_T)idx + 1.0) - 1.0) * (real_T)k + 1.0;
        beta_prior = ((real_T)idx + 1.0) * (real_T)k;
        if (d > beta_prior) {
          i2 = 0;
          i3 = 0;
          nx = 0;
          input_sizes_idx_1 = 0;
        } else {
          if (((int32_T)d < 1) || ((int32_T)d > chol_Omega0->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, chol_Omega0->size[1],
              &d_emlrtBCI, (emlrtCTX)sp);
          }

          i2 = (int32_T)d - 1;
          if (((int32_T)beta_prior < 1) || ((int32_T)beta_prior >
               chol_Omega0->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)beta_prior, 1,
              chol_Omega0->size[1], &e_emlrtBCI, (emlrtCTX)sp);
          }

          i3 = (int32_T)beta_prior;
          if (((int32_T)d < 1) || ((int32_T)d > Gamma->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Gamma->size[1],
              &g_emlrtBCI, (emlrtCTX)sp);
          }

          nx = (int32_T)d - 1;
          if (((int32_T)beta_prior < 1) || ((int32_T)beta_prior > Gamma->size[1]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)beta_prior, 1, Gamma->size[1],
              &h_emlrtBCI, (emlrtCTX)sp);
          }

          input_sizes_idx_1 = (int32_T)beta_prior;
        }

        st.site = &o_emlrtRSI;
        loop_ub = chol_Omega0->size[0];
        i4 = b_R0->size[0] * b_R0->size[1];
        b_R0->size[0] = chol_Omega0->size[0];
        b_loop_ub = i3 - i2;
        b_R0->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(&st, b_R0, i4, &qc_emlrtRTEI);
        Binv_data = b_R0->data;
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          for (i4 = 0; i4 < loop_ub; i4++) {
            Binv_data[i4 + b_R0->size[0] * i3] = chol_Omega0_data[i4 +
              chol_Omega0->size[0] * (i2 + i3)];
          }
        }

        b_st.site = &ce_emlrtRSI;
        c_dynamic_size_checks(&b_st, BinvT, b_R0, BinvT->size[1],
                              chol_Omega0->size[0]);
        loop_ub = chol_Omega0->size[0];
        i3 = b_R0->size[0] * b_R0->size[1];
        b_R0->size[0] = chol_Omega0->size[0];
        b_R0->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(&st, b_R0, i3, &qc_emlrtRTEI);
        Binv_data = b_R0->data;
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          for (i4 = 0; i4 < loop_ub; i4++) {
            Binv_data[i4 + b_R0->size[0] * i3] = chol_Omega0_data[i4 +
              chol_Omega0->size[0] * (i2 + i3)];
          }
        }

        b_st.site = &de_emlrtRSI;
        e_mtimes(&b_st, BinvT, b_R0, b_Binv);
        b_Binv_data = b_Binv->data;
        b_Gamma[0] = Gamma->size[0];
        b_Gamma[1] = input_sizes_idx_1 - nx;
        emlrtSubAssignSizeCheckR2012b(&b_Gamma[0], 2, &b_Binv->size[0], 2,
          &b_emlrtECI, (emlrtCTX)sp);
        loop_ub = b_Binv->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = b_Binv->size[0];
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            Gamma_data[i3 + Gamma->size[0] * (nx + i2)] = b_Binv_data[i3 +
              b_Binv->size[0] * i2];
          }
        }

        /*  구조형 기울기 계수행렬이 1시차부터 p시차까지 오른쪽으로 나열됨 */
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }

      st.site = &p_emlrtRSI;
      vec(&st, BinvT);
      BinvT_data = BinvT->data;
      i1 = chol_Omega0->size[0] * chol_Omega0->size[1];
      chol_Omega0->size[0] = BinvT->size[1];
      loop_ub = BinvT->size[0];
      chol_Omega0->size[1] = BinvT->size[0];
      emxEnsureCapacity_real_T(sp, chol_Omega0, i1, &nc_emlrtRTEI);
      chol_Omega0_data = chol_Omega0->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = BinvT->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          chol_Omega0_data[i2 + chol_Omega0->size[0] * i1] = BinvT_data[i1 +
            BinvT->size[0] * i2];
        }
      }

      d = ((real_T)iter + 1.0) - n0;
      beta_prior = (int32_T)muDoubleScalarFloor(d);
      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > Output->Bm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Output->Bm->size[0],
          &o_emlrtBCI, (emlrtCTX)sp);
      }

      if (1 > chol_Omega0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chol_Omega0->size[0], &f_emlrtBCI,
          (emlrtCTX)sp);
      }

      loop_ub = chol_Omega0->size[1];
      i1 = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = chol_Omega0->size[1];
      emxEnsureCapacity_real_T(sp, retf, i1, &pc_emlrtRTEI);
      retf_data = retf->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        retf_data[i1] = chol_Omega0_data[chol_Omega0->size[0] * i1];
      }

      b_Gamma[0] = 1;
      b_Gamma[1] = Output->Bm->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Gamma[0], 2, &retf->size[0], 2,
        &g_emlrtECI, (emlrtCTX)sp);
      loop_ub = chol_Omega0->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Output->Bm->data[((int32_T)d + Output->Bm->size[0] * i1) - 1] =
          chol_Omega0_data[chol_Omega0->size[0] * i1];
      }

      i1 = b_Binv->size[0] * b_Binv->size[1];
      b_Binv->size[0] = Gamma->size[0];
      b_Binv->size[1] = Gamma->size[1];
      emxEnsureCapacity_real_T(sp, b_Binv, i1, &rc_emlrtRTEI);
      b_Binv_data = b_Binv->data;
      loop_ub = Gamma->size[0] * Gamma->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Binv_data[i1] = Gamma_data[i1];
      }

      st.site = &q_emlrtRSI;
      vec(&st, b_Binv);
      b_Binv_data = b_Binv->data;
      i1 = chol_Omega0->size[0] * chol_Omega0->size[1];
      chol_Omega0->size[0] = b_Binv->size[1];
      chol_Omega0->size[1] = b_Binv->size[0];
      emxEnsureCapacity_real_T(sp, chol_Omega0, i1, &sc_emlrtRTEI);
      chol_Omega0_data = chol_Omega0->data;
      loop_ub = b_Binv->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = b_Binv->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          chol_Omega0_data[i2 + chol_Omega0->size[0] * i1] = b_Binv_data[i1 +
            b_Binv->size[0] * i2];
        }
      }

      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > Output->Gammam->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Output->Gammam->size[0],
          &p_emlrtBCI, (emlrtCTX)sp);
      }

      if (1 > chol_Omega0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chol_Omega0->size[0], &i_emlrtBCI,
          (emlrtCTX)sp);
      }

      loop_ub = chol_Omega0->size[1];
      i1 = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = chol_Omega0->size[1];
      emxEnsureCapacity_real_T(sp, retf, i1, &uc_emlrtRTEI);
      retf_data = retf->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        retf_data[i1] = chol_Omega0_data[chol_Omega0->size[0] * i1];
      }

      b_Gamma[0] = 1;
      b_Gamma[1] = Output->Gammam->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Gamma[0], 2, &retf->size[0], 2,
        &h_emlrtECI, (emlrtCTX)sp);
      loop_ub = chol_Omega0->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Output->Gammam->data[((int32_T)d + Output->Gammam->size[0] * i1) - 1] =
          chol_Omega0_data[chol_Omega0->size[0] * i1];
      }

      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > betam->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, betam->size[0], &m_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_Gamma[0] = 1;
      b_Gamma[1] = betam->size[1];
      sizes[0] = 1;
      sizes[1] = beta->size[0];
      emlrtSubAssignSizeCheckR2012b(&b_Gamma[0], 2, &sizes[0], 2, &c_emlrtECI,
        (emlrtCTX)sp);
      loop_ub = beta->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        betam_data[((int32_T)d + betam->size[0] * i1) - 1] = beta_data[i1];
      }

      i1 = b_Binv->size[0] * b_Binv->size[1];
      b_Binv->size[0] = Omega0->size[0];
      b_Binv->size[1] = Omega0->size[1];
      emxEnsureCapacity_real_T(sp, b_Binv, i1, &wc_emlrtRTEI);
      b_Binv_data = b_Binv->data;
      loop_ub = Omega0->size[0] * Omega0->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Binv_data[i1] = Omega0_data[i1];
      }

      st.site = &r_emlrtRSI;
      vec(&st, b_Binv);
      b_Binv_data = b_Binv->data;
      i1 = chol_Omega0->size[0] * chol_Omega0->size[1];
      chol_Omega0->size[0] = b_Binv->size[1];
      chol_Omega0->size[1] = b_Binv->size[0];
      emxEnsureCapacity_real_T(sp, chol_Omega0, i1, &xc_emlrtRTEI);
      chol_Omega0_data = chol_Omega0->data;
      loop_ub = b_Binv->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = b_Binv->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          chol_Omega0_data[i2 + chol_Omega0->size[0] * i1] = b_Binv_data[i1 +
            b_Binv->size[0] * i2];
        }
      }

      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > Omegam->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Omegam->size[0],
          &n_emlrtBCI, (emlrtCTX)sp);
      }

      if (1 > chol_Omega0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, chol_Omega0->size[0], &j_emlrtBCI,
          (emlrtCTX)sp);
      }

      loop_ub = chol_Omega0->size[1];
      i1 = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = chol_Omega0->size[1];
      emxEnsureCapacity_real_T(sp, retf, i1, &yc_emlrtRTEI);
      retf_data = retf->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        retf_data[i1] = chol_Omega0_data[chol_Omega0->size[0] * i1];
      }

      b_Gamma[0] = 1;
      b_Gamma[1] = Omegam->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Gamma[0], 2, &retf->size[0], 2,
        &d_emlrtECI, (emlrtCTX)sp);
      loop_ub = chol_Omega0->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Omegam_data[((int32_T)d + Omegam->size[0] * i1) - 1] =
          chol_Omega0_data[chol_Omega0->size[0] * i1];
      }
    }

    if ((ML == 'Y') && ((real_T)iter + 1.0 > n0)) {
      for (nx = 0; nx < T_tmp; nx++) {
        st.site = &s_emlrtRSI;
        if (nx + 1 > YLm->size[2]) {
          emlrtDynamicBoundsCheckR2012b(nx + 1, 1, YLm->size[2], &l_emlrtBCI,
            &st);
        }

        loop_ub = YLm->size[1];
        b_loop_ub = YLm->size[0];
        i1 = b_R0->size[0] * b_R0->size[1];
        b_R0->size[0] = YLm->size[0];
        b_R0->size[1] = YLm->size[1];
        emxEnsureCapacity_real_T(&st, b_R0, i1, &kc_emlrtRTEI);
        Binv_data = b_R0->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Binv_data[i2 + b_R0->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
              i1) + YLm->size[0] * YLm->size[1] * nx];
          }
        }

        b_st.site = &ce_emlrtRSI;
        b_dynamic_size_checks(&b_st, b_R0, beta, YLm->size[1], beta->size[0]);
        loop_ub = YLm->size[0];
        b_loop_ub = YLm->size[1];
        i1 = b_R0->size[0] * b_R0->size[1];
        b_R0->size[0] = YLm->size[0];
        b_R0->size[1] = YLm->size[1];
        emxEnsureCapacity_real_T(&st, b_R0, i1, &kc_emlrtRTEI);
        Binv_data = b_R0->data;
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            Binv_data[i2 + b_R0->size[0] * i1] = YLm_data[(i2 + YLm->size[0] *
              i1) + YLm->size[0] * YLm->size[1] * nx];
          }
        }

        b_st.site = &de_emlrtRSI;
        b_mtimes(&b_st, b_R0, beta, y);
        if (nx + 1 > Y0->size[0]) {
          emlrtDynamicBoundsCheckR2012b(nx + 1, 1, Y0->size[0], &k_emlrtBCI,
            (emlrtCTX)sp);
        }

        loop_ub = Y0->size[1];
        i1 = b_Y0->size[0];
        b_Y0->size[0] = Y0->size[1];
        emxEnsureCapacity_real_T(sp, b_Y0, i1, &oc_emlrtRTEI);
        Binv_data = b_Y0->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          Binv_data[i1] = Y0_data[nx + Y0->size[0] * i1];
        }

        st.site = &s_emlrtRSI;
        lnlik1 += lnpdfmvn(&st, b_Y0, y, Omega0);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }

      st.site = &t_emlrtRSI;
      beta_prior = lnpdfmvn(&st, beta, b_, var_);
      st.site = &u_emlrtRSI;
      inv(&st, Omega0, b_Binv);
      st.site = &u_emlrtRSI;
      pkk = lnpdfwishart(&st, b_Binv, R0, nu);

      /*  결합 사전밀도함수값 */
      beta_prior = lnlik1 + (beta_prior + pkk);

      /*  해당 파라미터의 사후 커널값 */
      if (beta_prior > lnpost_hat) {
        i1 = beta_hat->size[0];
        beta_hat->size[0] = beta->size[0];
        emxEnsureCapacity_real_T(sp, beta_hat, i1, &jc_emlrtRTEI);
        beta_hat_data = beta_hat->data;
        loop_ub = beta->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          beta_hat_data[i1] = beta_data[i1];
        }

        i1 = Omega_hat->size[0] * Omega_hat->size[1];
        Omega_hat->size[0] = Omega0->size[0];
        Omega_hat->size[1] = Omega0->size[1];
        emxEnsureCapacity_real_T(sp, Omega_hat, i1, &mc_emlrtRTEI);
        Binv_data = Omega_hat->data;
        loop_ub = Omega0->size[0] * Omega0->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          Binv_data[i1] = Omega0_data[i1];
        }

        lnpost_hat = beta_prior;

        /*  최빈값 후보의 사전밀도함수값 */
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_real_T(sp, &b_Y0);
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &YLm);
  emxFree_real_T(sp, &Y0);
  emxFree_real_T(sp, &Binv);
  emxFree_real_T(sp, &Omega_inv);
  emxFree_real_T(sp, &Phi);
  emxFree_real_T(sp, &Omega0);
  emxFree_real_T(sp, &Gamma);
  st.site = &ml_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &b_emlrtMCI);
  st.site = &gl_emlrtRSI;
  disp(&st, g_emlrt_marshallOut(&st, cv1), &c_emlrtMCI);
  st.site = &ll_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &d_emlrtMCI);
  i = Output->lnML->size[0];
  Output->lnML->size[0] = 1;
  emxEnsureCapacity_real_T(sp, Output->lnML, i, &ec_emlrtRTEI);
  Output->lnML->data[0] = 0.0;
  if (ML == 'Y') {
    st.site = &v_emlrtRSI;
    b_st.site = &uf_emlrtRSI;
    if ((betam->size[0] != 0) && (betam->size[1] != 0)) {
      nx = betam->size[0];
    } else if ((Omegam->size[0] != 0) && (Omegam->size[1] != 0)) {
      nx = Omegam->size[0];
    } else {
      nx = betam->size[0];
      if (Omegam->size[0] > betam->size[0]) {
        nx = Omegam->size[0];
      }
    }

    c_st.site = &vf_emlrtRSI;
    if ((betam->size[0] != nx) && ((betam->size[0] != 0) && (betam->size[1] != 0)))
    {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Omegam->size[0] != nx) && ((Omegam->size[0] != 0) && (Omegam->size[1]
          != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || ((betam->size[0] != 0) && (betam->size[1] != 0)))
    {
      input_sizes_idx_1 = betam->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((Omegam->size[0] != 0) && (Omegam->size[1] != 0)))
    {
      sizes[1] = Omegam->size[1];
    } else {
      sizes[1] = 0;
    }

    i = BinvT->size[0] * BinvT->size[1];
    BinvT->size[0] = nx;
    BinvT->size[1] = input_sizes_idx_1 + sizes[1];
    emxEnsureCapacity_real_T(&b_st, BinvT, i, &lc_emlrtRTEI);
    BinvT_data = BinvT->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        BinvT_data[i1 + BinvT->size[0] * i] = betam_data[i1 + nx * i];
      }
    }

    loop_ub = sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        BinvT_data[i1 + BinvT->size[0] * (i + input_sizes_idx_1)] =
          Omegam_data[i1 + nx * i];
      }
    }

    st.site = &w_emlrtRSI;
    b_st.site = &we_emlrtRSI;
    mean(&b_st, BinvT, retf);
    retf_data = retf->data;
    st.site = &x_emlrtRSI;
    cov(&st, BinvT, b_Binv);
    b_Binv_data = b_Binv->data;
    st.site = &x_emlrtRSI;
    cov(&st, BinvT, chol_Omega0);
    chol_Omega0_data = chol_Omega0->data;
    if ((b_Binv->size[0] != chol_Omega0->size[1]) && ((b_Binv->size[0] != 1) &&
         (chol_Omega0->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_Binv->size[0], chol_Omega0->size[1],
        &e_emlrtECI, (emlrtCTX)sp);
    }

    if ((chol_Omega0->size[0] != b_Binv->size[1]) && ((b_Binv->size[1] != 1) &&
         (chol_Omega0->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_Binv->size[1], chol_Omega0->size[0],
        &f_emlrtECI, (emlrtCTX)sp);
    }

    st.site = &y_emlrtRSI;
    b_st.site = &y_emlrtRSI;
    vec(&b_st, Omega_hat);
    Binv_data = Omega_hat->data;
    b_st.site = &uf_emlrtRSI;
    if (beta_hat->size[0] != 0) {
      sizes[1] = 1;
    } else if ((Omega_hat->size[0] != 0) && (Omega_hat->size[1] != 0)) {
      sizes[1] = Omega_hat->size[1];
    } else {
      sizes[1] = 1;
    }

    c_st.site = &vf_emlrtRSI;
    if ((1 != sizes[1]) && (beta_hat->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Omega_hat->size[1] != sizes[1]) && ((Omega_hat->size[0] != 0) &&
         (Omega_hat->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (beta_hat->size[0] != 0) {
      input_sizes[0] = beta_hat->size[0];
    } else {
      input_sizes[0] = 0;
    }

    if ((Omega_hat->size[0] != 0) && (Omega_hat->size[1] != 0)) {
      sizes[0] = Omega_hat->size[0];
    } else {
      sizes[0] = 0;
    }

    if ((b_Binv->size[0] == chol_Omega0->size[1]) && (chol_Omega0->size[0] ==
         b_Binv->size[1])) {
      nx = input_sizes[0];
      b_Gamma[0] = sizes[0];
      i = BinvT->size[0] * BinvT->size[1];
      BinvT->size[0] = input_sizes[0] + sizes[0];
      BinvT->size[1] = sizes[1];
      emxEnsureCapacity_real_T(sp, BinvT, i, &tc_emlrtRTEI);
      BinvT_data = BinvT->data;
      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < nx; i1++) {
          BinvT_data[i1 + BinvT->size[0] * i] = beta_hat_data[i1 + nx * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = b_Gamma[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          BinvT_data[(i1 + nx) + BinvT->size[0] * i] = Binv_data[i1 + b_Gamma[0]
            * i];
        }
      }

      i = beta->size[0];
      beta->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, beta, i, &vc_emlrtRTEI);
      beta_data = beta->data;
      loop_ub = retf->size[1];
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = retf_data[i];
      }

      i = b_R0->size[0] * b_R0->size[1];
      b_R0->size[0] = b_Binv->size[0];
      b_R0->size[1] = b_Binv->size[1];
      emxEnsureCapacity_real_T(sp, b_R0, i, &pb_emlrtRTEI);
      Binv_data = b_R0->data;
      loop_ub = b_Binv->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = b_Binv->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Binv_data[i1 + b_R0->size[0] * i] = 0.5 * (b_Binv_data[i1 +
            b_Binv->size[0] * i] + chol_Omega0_data[i + chol_Omega0->size[0] *
            i1]);
        }
      }

      st.site = &y_emlrtRSI;
      b_lnpdfmvn(&st, BinvT, beta, b_R0, beta_hat);
      beta_hat_data = beta_hat->data;
    } else {
      st.site = &y_emlrtRSI;
      binary_expand_op(&st, beta_hat, y_emlrtRSI, input_sizes, sizes, Omega_hat,
                       retf, b_Binv, chol_Omega0);
      beta_hat_data = beta_hat->data;
    }

    i = Output->lnML->size[0];
    Output->lnML->size[0] = beta_hat->size[0];
    emxEnsureCapacity_real_T(sp, Output->lnML, i, &ec_emlrtRTEI);
    loop_ub = beta_hat->size[0];
    for (i = 0; i < loop_ub; i++) {
      Output->lnML->data[i] = lnpost_hat - beta_hat_data[i];
    }
  }

  emxFree_real_T(sp, &b_R0);
  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &b_Binv);
  emxFree_real_T(sp, &beta);
  emxFree_real_T(sp, &Omega_hat);
  emxFree_real_T(sp, &beta_hat);
  emxFree_real_T(sp, &Omegam);
  emxFree_real_T(sp, &betam);
  emxFree_real_T(sp, &chol_Omega0);
  emxFree_real_T(sp, &BinvT);
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

/* End of code generation (Structure_BVAR.c) */

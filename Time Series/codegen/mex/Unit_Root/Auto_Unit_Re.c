/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Auto_Unit_Re.c
 *
 * Code generation for function 'Auto_Unit_Re'
 *
 */

/* Include files */
#include "Auto_Unit_Re.h"
#include "Auto_Unit.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "Unit_Root_mexutil.h"
#include "abs.h"
#include "assertValidSizeArg.h"
#include "blas.h"
#include "chol.h"
#include "det.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "invpd.h"
#include "kron.h"
#include "lnpdfig.h"
#include "lnpdfmvn.h"
#include "lnpdfmvn4.h"
#include "mtimes.h"
#include "mwmathutil.h"
#include "power.h"
#include "rand.h"
#include "randig.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "stdc.h"
#include "vec.h"

/* Variable Definitions */
static emlrtRSInfo i_emlrtRSI = { 19,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 26,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 27,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 39,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 46,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 60,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 63,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 64,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 65,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 75,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 90,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 91,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 92,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 97,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 100, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 104, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 108, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 111,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 112,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 114,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 115,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 120,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 122,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 127,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 129,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 131,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 143,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 260,/* lineNo */
  "Gen_c",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 261,/* lineNo */
  "Gen_c",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 262,/* lineNo */
  "Gen_c",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 263,/* lineNo */
  "Gen_c",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 241,/* lineNo */
  "Gen_sig2",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 243,/* lineNo */
  "Gen_sig2",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 245,/* lineNo */
  "Gen_sig2",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 163,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 170,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 172,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 173,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 176,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 177,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 182,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 186,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 187,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 188,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 189,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 190,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 191,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 192,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 201,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 203,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 204,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 205,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 209,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 211,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 212,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 216,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 218,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 219,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 221,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 222,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 225,/* lineNo */
  "Gen_G",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 14, /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 320,/* lineNo */
  "unaryMinOrMaxDispatch",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 361,/* lineNo */
  "minOrMax1D",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 8,   /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 138, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 139, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 140, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 72,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 73,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 74,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 76,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 77,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 78,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 79,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 80,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 81,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 82,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 83,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 84,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 85,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 86,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 87,  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  5,                                   /* colNo */
  "logpostm",                          /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  5,                                   /* colNo */
  "sig2m",                             /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  9,                                   /* colNo */
  "Y_hat",                             /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  28,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  42,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  45,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  9,                                   /* colNo */
  "X_hat",                             /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  28,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  42,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 59,    /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 58,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 57,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 34,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 33,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 32,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 31,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 30,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 58,  /* lineNo */
  16,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 33,  /* lineNo */
  18,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 33,  /* lineNo */
  16,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 32,  /* lineNo */
  14,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 30,  /* lineNo */
  12,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 30,  /* lineNo */
  12,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  116,                                 /* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  12,                                  /* colNo */
  "Sigmam",                            /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  26,                                  /* colNo */
  "logpostm",                          /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  21,                                  /* colNo */
  "logpostm",                          /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 146, /* lineNo */
  21,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  18,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  13,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 144, /* lineNo */
  13,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  106,                                 /* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  106,                                 /* lineNo */
  10,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  20,                                  /* colNo */
  "sig2m",                             /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  15,                                  /* colNo */
  "sig2m",                             /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 143, /* lineNo */
  15,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  14,                                  /* colNo */
  "cm",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  9,                                   /* colNo */
  "cm",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 142, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  98,                                  /* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  98,                                  /* lineNo */
  8,                                   /* colNo */
  "cm",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  32,                                  /* colNo */
  "vec_Sigma",                         /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  113,                                 /* lineNo */
  17,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  111,                                 /* lineNo */
  21,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  13,                                  /* colNo */
  "G",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  97,                                  /* lineNo */
  39,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  91,                                  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  16,                                  /* colNo */
  "X1_hat",                            /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  97,                                  /* lineNo */
  20,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  91,                                  /* lineNo */
  27,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  30,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 89,/* lineNo */
  13,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 68,/* lineNo */
  12,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  4,                                   /* colNo */
  "e1",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  63,                                  /* lineNo */
  17,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  11,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  9,                                   /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  13,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  11,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  19,                                  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  14,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  16,                                  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  6,                                   /* colNo */
  "X1",                                /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  11,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  9,                                   /* colNo */
  "X",                                 /* aName */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 46,  /* lineNo */
  31,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo u_emlrtRTEI = { 255,/* lineNo */
  9,                                   /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  256,                                 /* lineNo */
  37,                                  /* colNo */
  "X_hat",                             /* aName */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  256,                                 /* lineNo */
  54,                                  /* colNo */
  "X_hat",                             /* aName */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { 2,   /* nDims */
  256,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  37,                                  /* colNo */
  "X_hat",                             /* aName */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  257,                                 /* lineNo */
  18,                                  /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { 2,   /* nDims */
  260,                                 /* lineNo */
  26,                                  /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { 2,   /* nDims */
  260,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  262,                                 /* lineNo */
  21,                                  /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  262,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { -1, /* nDims */
  263,                                 /* lineNo */
  8,                                   /* colNo */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  54,                                  /* colNo */
  "Y_hat",                             /* aName */
  "Gen_c",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo v_emlrtRTEI = { 240,/* lineNo */
  9,                                   /* colNo */
  "Gen_sig2",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  39,                                  /* colNo */
  "X_hat",                             /* aName */
  "Gen_sig2",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  71,                                  /* colNo */
  "X_hat",                             /* aName */
  "Gen_sig2",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo cb_emlrtECI = { -1, /* nDims */
  243,                                 /* lineNo */
  12,                                  /* colNo */
  "Gen_sig2",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { -1, /* nDims */
  243,                                 /* lineNo */
  40,                                  /* colNo */
  "Gen_sig2",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  26,                                  /* colNo */
  "Y_hat",                             /* aName */
  "Gen_sig2",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { -1, /* nDims */
  163,                                 /* lineNo */
  10,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 166,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  167,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  63,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  168,                                 /* lineNo */
  20,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  15,                                  /* colNo */
  "vec_",                              /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo y_emlrtRTEI = { 173,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo hb_emlrtECI = { 2,  /* nDims */
  176,                                 /* lineNo */
  15,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  182,                                 /* lineNo */
  5,                                   /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  186,                                 /* lineNo */
  16,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtDCInfo u_emlrtDCI = { 187, /* lineNo */
  35,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo kb_emlrtECI = { -1, /* nDims */
  191,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 2,  /* nDims */
  203,                                 /* lineNo */
  17,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  4,                                   /* colNo */
  "e1",                                /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ab_emlrtRTEI = { 208,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  56,                                  /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  103,                                 /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { -1, /* nDims */
  211,                                 /* lineNo */
  44,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { -1, /* nDims */
  211,                                 /* lineNo */
  72,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  212,                                 /* lineNo */
  35,                                  /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo bb_emlrtRTEI = { 215,/* lineNo */
  9,                                   /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  57,                                  /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  105,                                 /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { -1, /* nDims */
  218,                                 /* lineNo */
  44,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  218,                                 /* lineNo */
  73,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  219,                                 /* lineNo */
  36,                                  /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { 2,  /* nDims */
  220,                                 /* lineNo */
  16,                                  /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  221,                                 /* lineNo */
  22,                                  /* colNo */
  "G0",                                /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  20,                                  /* colNo */
  "G",                                 /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  63,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  42,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 172, /* lineNo */
  1,                                   /* colNo */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  42,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  42,                                  /* colNo */
  "vec_",                              /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  5,                                   /* colNo */
  "center_hat",                        /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  180,                                 /* lineNo */
  50,                                  /* colNo */
  "Y_stary_star",                      /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  180,                                 /* lineNo */
  5,                                   /* colNo */
  "center_hat",                        /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  39,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  86,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  25,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  72,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  39,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  87,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  25,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  73,                                  /* colNo */
  "y_star",                            /* aName */
  "Gen_G",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo rb_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 49,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 50,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 54,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 57,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 58,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 59,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 46,/* lineNo */
  10,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 63,/* lineNo */
  17,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 63,/* lineNo */
  34,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 63,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 46,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 64,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 148,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 97,/* lineNo */
  20,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 97,/* lineNo */
  39,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 150,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 149,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 81,/* lineNo */
  14,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 91,/* lineNo */
  42,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 151,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 83,/* lineNo */
  14,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 91,/* lineNo */
  37,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 91,/* lineNo */
  27,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 100,/* lineNo */
  67,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 104,/* lineNo */
  55,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 104,/* lineNo */
  70,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 105,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 111,/* lineNo */
  21,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 111,/* lineNo */
  38,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 111,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 113,/* lineNo */
  24,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 113,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 115,/* lineNo */
  17,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 115,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 116,/* lineNo */
  22,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 120,/* lineNo */
  27,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 120,/* lineNo */
  38,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 122,/* lineNo */
  29,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 122,/* lineNo */
  44,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 26,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 60,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 65,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 46,/* lineNo */
  16,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 252,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 253,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 256,/* lineNo */
  31,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 260,/* lineNo */
  41,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 256,/* lineNo */
  48,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 260,/* lineNo */
  26,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 257,/* lineNo */
  31,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 260,/* lineNo */
  10,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 262,/* lineNo */
  21,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 262,/* lineNo */
  56,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 263,/* lineNo */
  8,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 263,/* lineNo */
  15,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 261,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 262,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 249,/* lineNo */
  17,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 243,/* lineNo */
  18,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 241,/* lineNo */
  33,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 243,/* lineNo */
  12,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 243,/* lineNo */
  46,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 241,/* lineNo */
  65,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 243,/* lineNo */
  40,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 160,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 163,/* lineNo */
  14,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 163,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 164,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 165,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 167,/* lineNo */
  56,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 155,/* lineNo */
  14,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 167,/* lineNo */
  35,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 172,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 176,/* lineNo */
  15,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 178,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 182,/* lineNo */
  18,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 186,/* lineNo */
  16,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 186,/* lineNo */
  28,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 186,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 187,/* lineNo */
  10,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 187,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 189,/* lineNo */
  15,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 191,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 196,/* lineNo */
  9,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 203,/* lineNo */
  17,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 203,/* lineNo */
  34,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 203,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 209,/* lineNo */
  32,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 211,/* lineNo */
  50,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 209,/* lineNo */
  79,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 211,/* lineNo */
  78,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 209,/* lineNo */
  54,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 209,/* lineNo */
  101,                                 /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 211,/* lineNo */
  72,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 212,/* lineNo */
  33,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 216,/* lineNo */
  32,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 218,/* lineNo */
  50,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 216,/* lineNo */
  80,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 218,/* lineNo */
  79,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 216,/* lineNo */
  54,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 216,/* lineNo */
  102,                                 /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 218,/* lineNo */
  73,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 219,/* lineNo */
  33,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 220,/* lineNo */
  26,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 99,/* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 220,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 221,/* lineNo */
  19,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 222,/* lineNo */
  18,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 228,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 177,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 188,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 190,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 190,/* lineNo */
  16,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 187,/* lineNo */
  20,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 211,/* lineNo */
  31,                                  /* colNo */
  "Auto_Unit_Re",                      /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pName */
};

static emlrtRSInfo fn_emlrtRSI = { 82, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo hn_emlrtRSI = { 8,  /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ln_emlrtRSI = { 76, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo mn_emlrtRSI = { 74, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo nn_emlrtRSI = { 73, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo pn_emlrtRSI = { 78, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo rn_emlrtRSI = { 80, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo tn_emlrtRSI = { 84, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo vn_emlrtRSI = { 86, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo xn_emlrtRSI = { 139,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo mo_emlrtRSI = { 140,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo no_emlrtRSI = { 138,/* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo oo_emlrtRSI = { 87, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo po_emlrtRSI = { 85, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo qo_emlrtRSI = { 83, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo ro_emlrtRSI = { 81, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo so_emlrtRSI = { 79, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo to_emlrtRSI = { 77, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

static emlrtRSInfo vo_emlrtRSI = { 72, /* lineNo */
  "Auto_Unit_Re",                      /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit_Re.m"/* pathName */
};

/* Function Declarations */
static void f_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
  const emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB);
static void g_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
  const emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB);

/* Function Definitions */
static void f_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
  const emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

static void g_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
  const emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

void Auto_Unit_Re(const emlrtStack *sp, const emxArray_real_T *data, real_T a0,
                  real_T d0, const emxArray_real_T *phi0, const emxArray_real_T *
                  PHI0, real_T n0, real_T n1, const emxArray_real_T *c0, const
                  emxArray_real_T *C0, emxArray_real_T *Output_cm,
                  emxArray_real_T *Output_phim, emxArray_real_T *Output_sigma2m,
                  emxArray_real_T *Output_logpostm)
{
  emxArray_real_T *Y;
  boolean_T b;
  boolean_T b1;
  static const char_T b_cv[6] = { 's', 'h', 'o', 'r', 't', 'G' };

  int32_T T;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *Xt;
  emxArray_real_T *b_Xt;
  emxArray_real_T *X1;
  int32_T b_data[1];
  int32_T c_data[1];
  emxArray_real_T *sig2m;
  int32_T nx;
  int32_T i1;
  emxArray_real_T *precphi0;
  emxArray_real_T *precC0;
  int32_T p;
  real_T n;
  emxArray_real_T *cm;
  int32_T b_loop_ub;
  emxArray_real_T *phim;
  emxArray_real_T *Sigmam;
  real_T logpost;
  int32_T i2;
  emxArray_real_T *logpostm;
  emxArray_real_T *d_data;
  real_T sig2;
  real_T sig2_inv;
  emxArray_real_T *G;
  emxArray_real_T *kron_G;
  emxArray_real_T *result;
  emxArray_real_T *phi;
  emxArray_real_T *c;
  boolean_T empty_non_axis_sizes;
  int32_T input_sizes[2];
  int8_T sizes_idx_1;
  emxArray_int8_T *e1;
  emxArray_real_T *X_p;
  int32_T c_loop_ub;
  emxArray_real_T *X1_p;
  int32_T d_loop_ub;
  cell_wrap_1 reshapes[2];
  emxArray_real_T *X_hat;
  int32_T sizes[2];
  emxArray_real_T *X1_hat;
  emxArray_real_T *Y_hat;
  emxArray_real_T *inv_Sigma;
  emxArray_real_T *b_b;
  int32_T e_loop_ub;
  emxArray_real_T *vec_Sigma;
  int32_T input_sizes_idx_1;
  int32_T i3;
  emxArray_real_T *Sigma;
  emxArray_real_T b_vec_Sigma;
  int32_T b_input_sizes[2];
  emxArray_real_T *b_Y;
  emxArray_real_T *b_X_p;
  int32_T i4;
  emxArray_real_T *y;
  int32_T f_loop_ub;
  cell_wrap_1 b_reshapes[2];
  emxArray_real_T *b_X1;
  int32_T b_result;
  int32_T iter;
  int32_T i5;
  int8_T b_input_sizes_idx_1;
  int32_T c_input_sizes_idx_1;
  int32_T i6;
  int32_T i7;
  int32_T c_result;
  char_T b_cv1[37];
  uint32_T b_i;
  static const char_T b_cv2[37] = { 'U', 'n', 'd', 'e', 'r', ' ', 'H', '0', ' ',
    ':', ' ', 'I', 't', ' ', 'i', 's', ' ', 'I', '(', '1', ')', ' ', 'p', 'r',
    'o', 'c', 'e', 's', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

  int8_T d_input_sizes_idx_1;
  const mxArray *b_y;
  const mxArray *m;
  int32_T e_input_sizes_idx_1;
  const mxArray *c_y;
  const mxArray *m1;
  int32_T g_loop_ub;
  static const char_T b_cv3[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  int32_T d_result;
  int8_T f_input_sizes_idx_1;
  char_T b_cv4[37];
  int32_T h_loop_ub;
  const mxArray *m2;
  const mxArray *m3;
  int32_T g_input_sizes_idx_1;
  static const char_T cv5[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  int32_T i_loop_ub;
  int32_T X_hat_tmp;
  int32_T j_loop_ub;
  const mxArray *m4;
  const mxArray *m5;
  static const char_T cv6[5] = { '[', 'c', ':', ' ', ']' };

  static const char_T cv7[7] = { '[', 'p', 'h', 'i', ':', ' ', ']' };

  int32_T i8;
  const mxArray *m6;
  const mxArray *m7;
  boolean_T guard1 = false;
  int8_T h_input_sizes_idx_1;
  real_T lik_2;
  real_T logprior_sig2;
  real_T logprior_phi;
  real_T logprior_c;
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
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &st;
  e_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Y, 1, &rb_emlrtRTEI, true);
  b = false;
  b1 = false;
  st.site = &hn_emlrtRSI;
  format(&st, e_emlrt_marshallOut(&st, b_cv), &c_emlrtMCI);
  T = data->size[0];
  loop_ub = data->size[0];
  i = Y->size[0];
  Y->size[0] = data->size[0];
  emxEnsureCapacity_real_T(sp, Y, i, &rb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    Y->data[i] = data->data[i];
  }

  emxInit_real_T(sp, &Xt, 2, &sb_emlrtRTEI, true);
  if (data->size[0] < 1) {
    Xt->size[0] = 1;
    Xt->size[1] = 0;
  } else {
    i = Xt->size[0] * Xt->size[1];
    Xt->size[0] = 1;
    Xt->size[1] = (int32_T)((real_T)data->size[0] - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, Xt, i, &sb_emlrtRTEI);
    loop_ub = (int32_T)((real_T)data->size[0] - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      Xt->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &b_Xt, 1, &sb_emlrtRTEI, true);
  i = b_Xt->size[0];
  b_Xt->size[0] = Xt->size[1];
  emxEnsureCapacity_real_T(sp, b_Xt, i, &tb_emlrtRTEI);
  loop_ub = Xt->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Xt->data[i] = Xt->data[i];
  }

  emxInit_real_T(sp, &X1, 2, &ub_emlrtRTEI, true);
  i = X1->size[0] * X1->size[1];
  X1->size[0] = data->size[0];
  X1->size[1] = c0->size[0];
  emxEnsureCapacity_real_T(sp, X1, i, &ub_emlrtRTEI);
  loop_ub = data->size[0] * c0->size[0];
  for (i = 0; i < loop_ub; i++) {
    X1->data[i] = 0.0;
  }

  if (1 > c0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, c0->size[0], &hb_emlrtBCI, sp);
  }

  b_data[0] = data->size[0];
  c_data[0] = data->size[0];
  emlrtSubAssignSizeCheckR2012b(&b_data[0], 1, &c_data[0], 1, &l_emlrtECI, sp);
  loop_ub = data->size[0];
  for (i = 0; i < loop_ub; i++) {
    X1->data[i] = 1.0;
  }

  emxInit_real_T(sp, &sig2m, 1, &xb_emlrtRTEI, true);
  if (c0->size[0] - 1 > 0) {
    i = c0->size[0];
    for (nx = 0; nx <= i - 2; nx++) {
      i1 = (int32_T)(((real_T)nx + 1.0) + 1.0);
      if ((i1 < 1) || (i1 > X1->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, X1->size[1], &gb_emlrtBCI, sp);
      }

      st.site = &i_emlrtRSI;
      power(&st, b_Xt, (real_T)nx + 1.0, sig2m);
      b_data[0] = X1->size[0];
      emlrtSubAssignSizeCheckR2012b(&b_data[0], 1, &sig2m->size[0], 1,
        &k_emlrtECI, sp);
      loop_ub = sig2m->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        X1->data[i1 + X1->size[0] * (nx + 1)] = sig2m->data[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  loop_ub = data->size[0];
  i = b_Xt->size[0];
  b_Xt->size[0] = data->size[0];
  emxEnsureCapacity_real_T(sp, b_Xt, i, &vb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b_Xt->data[i] = data->data[i + data->size[0]];
  }

  emxInit_real_T(sp, &precphi0, 2, &ae_emlrtRTEI, true);
  emxInit_real_T(sp, &precC0, 2, &be_emlrtRTEI, true);
  p = phi0->size[0];
  st.site = &j_emlrtRSI;
  invpd(&st, PHI0, precphi0);
  st.site = &k_emlrtRSI;
  invpd(&st, C0, precC0);
  n = n0 + n1;
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &m_emlrtDCI, sp);
  }

  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &cm, 2, &wb_emlrtRTEI, true);
  loop_ub = (int32_T)n;
  i1 = cm->size[0] * cm->size[1];
  cm->size[0] = (int32_T)n;
  cm->size[1] = c0->size[0];
  emxEnsureCapacity_real_T(sp, cm, i1, &wb_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, sp);
  }

  b_loop_ub = (int32_T)n * c0->size[0];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    cm->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &g_emlrtDCI, sp);
  }

  i1 = sig2m->size[0];
  sig2m->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, sig2m, i1, &xb_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &g_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    sig2m->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &phim, 2, &yb_emlrtRTEI, true);
  i1 = phim->size[0] * phim->size[1];
  phim->size[0] = (int32_T)n;
  phim->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phim, i1, &yb_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, sp);
  }

  b_loop_ub = (int32_T)n * phi0->size[0];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    phim->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &Sigmam, 2, &ac_emlrtRTEI, true);
  i1 = Sigmam->size[0] * Sigmam->size[1];
  Sigmam->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Sigmam, i1, &ac_emlrtRTEI);
  logpost = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  i1 = (int32_T)logpost;
  if (logpost != i1) {
    emlrtIntegerCheckR2012b(logpost, &j_emlrtDCI, sp);
  }

  i2 = Sigmam->size[0] * Sigmam->size[1];
  Sigmam->size[1] = i1;
  emxEnsureCapacity_real_T(sp, Sigmam, i2, &ac_emlrtRTEI);
  logpost = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  i1 = (int32_T)logpost;
  if (logpost != i1) {
    emlrtIntegerCheckR2012b(logpost, &e_emlrtDCI, sp);
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &e_emlrtDCI, sp);
  }

  b_loop_ub = (int32_T)n * i1;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    Sigmam->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &d_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &logpostm, 1, &bc_emlrtRTEI, true);
  i1 = logpostm->size[0];
  logpostm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, logpostm, i1, &bc_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &d_emlrtDCI, sp);
  }

  for (i = 0; i < loop_ub; i++) {
    logpostm->data[i] = 0.0;
  }

  emxInit_real_T(sp, &d_data, 1, &cc_emlrtRTEI, true);
  if (a0 * d0 > 0.0) {
    sig2 = 0.5 * d0 / (0.5 * a0 - 1.0);
  } else {
    st.site = &l_emlrtRSI;
    b_loop_ub = data->size[0];
    i = d_data->size[0];
    d_data->size[0] = data->size[0];
    emxEnsureCapacity_real_T(&st, d_data, i, &cc_emlrtRTEI);
    for (i = 0; i < b_loop_ub; i++) {
      d_data->data[i] = data->data[i];
    }

    b_st.site = &l_emlrtRSI;
    logpost = stdc(&b_st, d_data);
    b_st.site = &ud_emlrtRSI;
    sig2 = muDoubleScalarPower(logpost, 2.0);
  }

  sig2_inv = 1.0 / sig2;
  emxInit_real_T(sp, &G, 2, &dc_emlrtRTEI, true);
  emxInit_real_T(sp, &kron_G, 2, &ce_emlrtRTEI, true);
  emxInit_real_T(sp, &result, 2, &ee_emlrtRTEI, true);
  if (phi0->size[0] == 1) {
    i = G->size[0] * G->size[1];
    G->size[0] = 1;
    G->size[1] = 1;
    emxEnsureCapacity_real_T(sp, G, i, &dc_emlrtRTEI);
    G->data[0] = phi0->data[0];
  } else {
    st.site = &m_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    eye(&b_st, (real_T)phi0->size[0] - 1.0, kron_G);
    if (!((real_T)phi0->size[0] - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b((real_T)phi0->size[0] - 1.0, &s_emlrtDCI, &st);
    }

    b_st.site = &he_emlrtRSI;
    if ((kron_G->size[0] != 0) && (kron_G->size[1] != 0)) {
      nx = kron_G->size[0];
    } else if (phi0->size[0] - 1 != 0) {
      nx = phi0->size[0] - 1;
    } else {
      nx = muIntScalarMax_sint32(kron_G->size[0], 0);
      if (phi0->size[0] - 1 > nx) {
        nx = phi0->size[0] - 1;
      }
    }

    c_st.site = &h_emlrtRSI;
    if ((kron_G->size[0] != nx) && ((kron_G->size[0] != 0) && (kron_G->size[1]
          != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((phi0->size[0] - 1 != nx) && (phi0->size[0] - 1 != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (nx == 0);
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

    i = result->size[0] * result->size[1];
    result->size[0] = nx;
    result->size[1] = input_sizes[1] + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, result, i, &jc_emlrtRTEI);
    b_loop_ub = input_sizes[1];
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        result->data[i1 + result->size[0] * i] = kron_G->data[i1 + nx * i];
      }
    }

    b_loop_ub = sizes_idx_1;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        result->data[i1 + result->size[0] * input_sizes[1]] = 0.0;
      }
    }

    st.site = &m_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    if (phi0->size[0] != 0) {
      nx = phi0->size[0];
    } else if ((result->size[0] != 0) && (result->size[1] != 0)) {
      nx = result->size[1];
    } else {
      if (phi0->size[0] > 0) {
        nx = phi0->size[0];
      } else {
        nx = 0;
      }

      if (result->size[1] > nx) {
        nx = result->size[1];
      }
    }

    c_st.site = &h_emlrtRSI;
    if ((phi0->size[0] != nx) && (phi0->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((result->size[1] != nx) && ((result->size[0] != 0) && (result->size[1]
          != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || (phi0->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    i = Xt->size[0] * Xt->size[1];
    Xt->size[0] = 1;
    Xt->size[1] = phi0->size[0];
    emxEnsureCapacity_real_T(&b_st, Xt, i, &nc_emlrtRTEI);
    b_loop_ub = phi0->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      Xt->data[i] = phi0->data[i];
    }

    emxInitMatrix_cell_wrap_1(&b_st, reshapes, &fe_emlrtRTEI, true);
    i = reshapes[0].f1->size[0] * reshapes[0].f1->size[1];
    reshapes[0].f1->size[0] = sizes_idx_1;
    reshapes[0].f1->size[1] = nx;
    emxEnsureCapacity_real_T(&b_st, reshapes[0].f1, i, &qc_emlrtRTEI);
    b_loop_ub = sizes_idx_1 * nx;
    for (i = 0; i < b_loop_ub; i++) {
      reshapes[0].f1->data[i] = Xt->data[i];
    }

    if (empty_non_axis_sizes || ((result->size[0] != 0) && (result->size[1] != 0)))
    {
      sizes[0] = result->size[0];
    } else {
      sizes[0] = 0;
    }

    input_sizes[0] = sizes[0];
    i = G->size[0] * G->size[1];
    G->size[0] = reshapes[0].f1->size[0] + sizes[0];
    G->size[1] = reshapes[0].f1->size[1];
    emxEnsureCapacity_real_T(&b_st, G, i, &sc_emlrtRTEI);
    b_loop_ub = reshapes[0].f1->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      c_loop_ub = reshapes[0].f1->size[0];
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        G->data[i1 + G->size[0] * i] = reshapes[0].f1->data[i1 + reshapes[0].
          f1->size[0] * i];
      }
    }

    for (i = 0; i < nx; i++) {
      b_loop_ub = input_sizes[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        G->data[(i1 + reshapes[0].f1->size[0]) + G->size[0] * i] = result->
          data[i1 + input_sizes[0] * i];
      }
    }

    emxFreeMatrix_cell_wrap_1(reshapes);
  }

  emxInit_real_T(sp, &phi, 1, &ec_emlrtRTEI, true);
  i = phi->size[0];
  phi->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phi, i, &ec_emlrtRTEI);
  b_loop_ub = phi0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    phi->data[i] = phi0->data[i];
  }

  emxInit_real_T(sp, &c, 1, &fc_emlrtRTEI, true);
  i = c->size[0];
  c->size[0] = c0->size[0];
  emxEnsureCapacity_real_T(sp, c, i, &fc_emlrtRTEI);
  b_loop_ub = c0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    c->data[i] = c0->data[i];
  }

  emxInit_int8_T(sp, &e1, 1, &gc_emlrtRTEI, true);
  i = e1->size[0];
  e1->size[0] = phi0->size[0];
  emxEnsureCapacity_int8_T(sp, e1, i, &gc_emlrtRTEI);
  b_loop_ub = phi0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    e1->data[i] = 0;
  }

  if (1 > phi0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, phi0->size[0], &bb_emlrtBCI, sp);
  }

  e1->data[0] = 1;
  if (1 > phi0->size[0]) {
    b_loop_ub = 0;
  } else {
    if (1 > data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data->size[0], &jb_emlrtBCI, sp);
    }

    if ((phi0->size[0] < 1) || (phi0->size[0] > data->size[0])) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, data->size[0],
        &ib_emlrtBCI, sp);
    }

    b_loop_ub = phi0->size[0];
  }

  emxInit_real_T(sp, &X_p, 1, &hc_emlrtRTEI, true);
  i = X_p->size[0];
  X_p->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, X_p, i, &hc_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    X_p->data[i] = data->data[i + data->size[0]];
  }

  if (1 > phi0->size[0]) {
    c_loop_ub = 0;
  } else {
    if (1 > X1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, X1->size[0], &fb_emlrtBCI, sp);
    }

    if ((phi0->size[0] < 1) || (phi0->size[0] > X1->size[0])) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, X1->size[0], &eb_emlrtBCI,
        sp);
    }

    c_loop_ub = phi0->size[0];
  }

  emxInit_real_T(sp, &X1_p, 2, &ic_emlrtRTEI, true);
  d_loop_ub = X1->size[1];
  i = X1_p->size[0] * X1_p->size[1];
  X1_p->size[0] = c_loop_ub;
  X1_p->size[1] = X1->size[1];
  emxEnsureCapacity_real_T(sp, X1_p, i, &ic_emlrtRTEI);
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      X1_p->data[i1 + X1_p->size[0] * i] = X1->data[i1 + X1->size[0] * i];
    }
  }

  if (1 > phi0->size[0]) {
    i = 0;
  } else {
    if (1 > data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data->size[0], &db_emlrtBCI, sp);
    }

    if ((phi0->size[0] < 1) || (phi0->size[0] > data->size[0])) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, data->size[0],
        &cb_emlrtBCI, sp);
    }

    i = phi0->size[0];
  }

  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &c_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &X_hat, 1, &kc_emlrtRTEI, true);
  i2 = X_hat->size[0];
  X_hat->size[0] = i1;
  emxEnsureCapacity_real_T(sp, X_hat, i2, &kc_emlrtRTEI);
  d_loop_ub = data->size[0] - phi0->size[0];
  if (d_loop_ub < 0) {
    emlrtNonNegativeCheckR2012b(d_loop_ub, &c_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < d_loop_ub; i1++) {
    X_hat->data[i1] = 0.0;
  }

  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &i_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &X1_hat, 2, &lc_emlrtRTEI, true);
  i2 = X1_hat->size[0] * X1_hat->size[1];
  X1_hat->size[0] = i1;
  X1_hat->size[1] = c0->size[0];
  emxEnsureCapacity_real_T(sp, X1_hat, i2, &lc_emlrtRTEI);
  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &b_emlrtDCI, sp);
  }

  d_loop_ub = i1 * c0->size[0];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    X1_hat->data[i1] = 0.0;
  }

  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &emlrtDCI, sp);
  }

  emxInit_real_T(sp, &Y_hat, 1, &mc_emlrtRTEI, true);
  i2 = Y_hat->size[0];
  Y_hat->size[0] = i1;
  emxEnsureCapacity_real_T(sp, Y_hat, i2, &mc_emlrtRTEI);
  d_loop_ub = data->size[0] - phi0->size[0];
  if (d_loop_ub < 0) {
    emlrtNonNegativeCheckR2012b(d_loop_ub, &emlrtDCI, sp);
  }

  for (i1 = 0; i1 < d_loop_ub; i1++) {
    Y_hat->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &inv_Sigma, 2, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &b_b, 2, &pc_emlrtRTEI, true);
  st.site = &n_emlrtRSI;
  kron(&st, G, G, kron_G);
  st.site = &o_emlrtRSI;
  eye(&st, kron_G->size[0], b_b);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])b_b->size, *(int32_T (*)[2])
    kron_G->size, &j_emlrtECI, sp);
  st.site = &o_emlrtRSI;
  i1 = inv_Sigma->size[0] * inv_Sigma->size[1];
  inv_Sigma->size[0] = b_b->size[0];
  inv_Sigma->size[1] = b_b->size[1];
  emxEnsureCapacity_real_T(&st, inv_Sigma, i1, &oc_emlrtRTEI);
  d_loop_ub = b_b->size[0] * b_b->size[1];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    inv_Sigma->data[i1] = b_b->data[i1] - kron_G->data[i1];
  }

  b_st.site = &o_emlrtRSI;
  inv(&b_st, inv_Sigma, kron_G);
  i1 = b_b->size[0] * b_b->size[1];
  b_b->size[0] = e1->size[0];
  b_b->size[1] = e1->size[0];
  emxEnsureCapacity_real_T(&st, b_b, i1, &pc_emlrtRTEI);
  d_loop_ub = e1->size[0];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    e_loop_ub = e1->size[0];
    for (i2 = 0; i2 < e_loop_ub; i2++) {
      b_b->data[i2 + b_b->size[0] * i1] = e1->data[i2] * e1->data[i1];
    }
  }

  b_st.site = &o_emlrtRSI;
  vec(&b_st, b_b);
  b_st.site = &nd_emlrtRSI;
  c_dynamic_size_checks(&b_st, kron_G, b_b, kron_G->size[1], b_b->size[0]);
  emxInit_real_T(&st, &vec_Sigma, 2, &rc_emlrtRTEI, true);
  if ((kron_G->size[1] == 1) || (b_b->size[0] == 1)) {
    i1 = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = kron_G->size[0];
    vec_Sigma->size[1] = b_b->size[1];
    emxEnsureCapacity_real_T(&st, vec_Sigma, i1, &rc_emlrtRTEI);
    d_loop_ub = kron_G->size[0];
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      e_loop_ub = b_b->size[1];
      for (i2 = 0; i2 < e_loop_ub; i2++) {
        vec_Sigma->data[i1 + vec_Sigma->size[0] * i2] = 0.0;
        input_sizes_idx_1 = kron_G->size[1];
        for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
          vec_Sigma->data[i1 + vec_Sigma->size[0] * i2] += kron_G->data[i1 +
            kron_G->size[0] * i3] * b_b->data[i3 + b_b->size[0] * i2];
        }
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    c_mtimes(&b_st, kron_G, b_b, vec_Sigma);
  }

  st.site = &p_emlrtRSI;
  nx = vec_Sigma->size[0] * vec_Sigma->size[1];
  b_st.site = &qf_emlrtRSI;
  c_st.site = &pf_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  c_st.site = &pf_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  input_sizes_idx_1 = vec_Sigma->size[0];
  if (vec_Sigma->size[1] > vec_Sigma->size[0]) {
    input_sizes_idx_1 = vec_Sigma->size[1];
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

  emxInit_real_T(&st, &Sigma, 2, &tc_emlrtRTEI, true);
  i1 = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = phi0->size[0];
  Sigma->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Sigma, i1, &tc_emlrtRTEI);
  d_loop_ub = phi0->size[0] * phi0->size[0];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    Sigma->data[i1] = vec_Sigma->data[i1];
  }

  input_sizes[0] = phi0->size[0];
  input_sizes[1] = phi0->size[0];
  b_vec_Sigma = *vec_Sigma;
  b_input_sizes[0] = input_sizes[0];
  b_input_sizes[1] = input_sizes[1];
  b_vec_Sigma.size = &b_input_sizes[0];
  b_vec_Sigma.numDimensions = 2;
  st.site = &q_emlrtRSI;
  inv(&st, &b_vec_Sigma, inv_Sigma);
  logpost = 0.0;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &e_emlrtRTEI, sp);
  emxInit_real_T(sp, &b_Y, 1, &vc_emlrtRTEI, true);
  emxInit_real_T(sp, &b_X_p, 2, &pb_emlrtRTEI, true);
  if (0 <= (int32_T)n - 1) {
    i4 = data->size[0] + (int32_T)(1.0 - ((real_T)phi0->size[0] + 1.0));
    f_loop_ub = i;
    if (b_loop_ub != 0) {
      b_result = b_loop_ub;
    } else if ((c_loop_ub != 0) && (X1->size[1] != 0)) {
      b_result = c_loop_ub;
    } else {
      b_result = 0;
      if (c_loop_ub > 0) {
        b_result = c_loop_ub;
      }
    }

    i5 = c_loop_ub;
    empty_non_axis_sizes = (b_result == 0);
    if (empty_non_axis_sizes || (b_loop_ub != 0)) {
      b_input_sizes_idx_1 = 1;
    } else {
      b_input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      c_input_sizes_idx_1 = X1->size[1];
    } else {
      c_input_sizes_idx_1 = 0;
    }

    i6 = data->size[0];
    i7 = data->size[0];
    if (b_loop_ub != 0) {
      c_result = b_loop_ub;
    } else if ((c_loop_ub != 0) && (X1->size[1] != 0)) {
      c_result = c_loop_ub;
    } else {
      c_result = 0;
      if (c_loop_ub > 0) {
        c_result = c_loop_ub;
      }
    }

    empty_non_axis_sizes = (c_result == 0);
    if (empty_non_axis_sizes || (b_loop_ub != 0)) {
      d_input_sizes_idx_1 = 1;
    } else {
      d_input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      e_input_sizes_idx_1 = X1->size[1];
    } else {
      e_input_sizes_idx_1 = 0;
    }

    g_loop_ub = e1->size[0];
    if (b_loop_ub != 0) {
      d_result = b_loop_ub;
    } else if ((c_loop_ub != 0) && (X1->size[1] != 0)) {
      d_result = c_loop_ub;
    } else {
      d_result = 0;
      if (c_loop_ub > 0) {
        d_result = c_loop_ub;
      }
    }

    empty_non_axis_sizes = (d_result == 0);
    if (empty_non_axis_sizes || (b_loop_ub != 0)) {
      f_input_sizes_idx_1 = 1;
    } else {
      f_input_sizes_idx_1 = 0;
    }

    h_loop_ub = d_result * f_input_sizes_idx_1;
    if (empty_non_axis_sizes || ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      g_input_sizes_idx_1 = X1->size[1];
    } else {
      g_input_sizes_idx_1 = 0;
    }

    i_loop_ub = PHI0->size[0] * PHI0->size[1];
    j_loop_ub = C0->size[0] * C0->size[1];
  }

  emxInit_real_T(sp, &y, 1, &td_emlrtRTEI, true);
  emxInitMatrix_cell_wrap_1(sp, b_reshapes, &fe_emlrtRTEI, true);
  emxInit_real_T(sp, &b_X1, 2, &gd_emlrtRTEI, true);
  for (iter = 0; iter < loop_ub; iter++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*  몫 x와 나머지 resid를 산출 */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((iter - (int32_T)muDoubleScalarFloor(((real_T)iter + 1.0) / 100.0) * 100)
        + 1 == 0) {
      st.site = &vo_emlrtRSI;
      clc(&st, &g_emlrtMCI);
      if (!b1) {
        for (i1 = 0; i1 < 37; i1++) {
          b_cv1[i1] = '=';
        }

        b1 = true;
      }

      st.site = &nn_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, b_cv1), &h_emlrtMCI);
      st.site = &mn_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, b_cv2), &i_emlrtMCI);
      st.site = &r_emlrtRSI;
      b_st.site = &rf_emlrtRSI;
      b_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m1 = emlrtCreateDoubleScalar((real_T)iter + 1.0);
      emlrtAssign(&c_y, m1);
      c_st.site = &en_emlrtRSI;
      d_st.site = &cn_emlrtRSI;
      c_emlrt_marshallIn(&c_st, d_feval(&c_st, d_emlrt_marshallOut(&c_st, b_cv3),
        b_y, c_emlrt_marshallOut(&d_st, cv), c_y, &db_emlrtMCI),
                         "<output of feval>");
      if (!b) {
        for (i1 = 0; i1 < 37; i1++) {
          b_cv4[i1] = '=';
        }

        b = true;
      }

      st.site = &ln_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, b_cv4), &j_emlrtMCI);
      b_y = NULL;
      m2 = emlrtCreateString1(' ');
      emlrtAssign(&b_y, m2);
      st.site = &to_emlrtRSI;
      disp(&st, b_y, &k_emlrtMCI);
      st.site = &pn_emlrtRSI;
      disp(&st, g_emlrt_marshallOut(&st, cv5), &l_emlrtMCI);
      b_y = NULL;
      m4 = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m4);
      st.site = &so_emlrtRSI;
      disp(&st, b_y, &m_emlrtMCI);
      st.site = &rn_emlrtRSI;
      disp(&st, h_emlrt_marshallOut(&st, cv6), &n_emlrtMCI);
      i1 = Xt->size[0] * Xt->size[1];
      Xt->size[0] = 1;
      d_loop_ub = c->size[0];
      Xt->size[1] = c->size[0];
      emxEnsureCapacity_real_T(sp, Xt, i1, &bd_emlrtRTEI);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        Xt->data[i1] = c->data[i1];
      }

      st.site = &ro_emlrtRSI;
      disp(&st, i_emlrt_marshallOut(Xt), &o_emlrtMCI);
      st.site = &fn_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(&st, cv7), &p_emlrtMCI);
      i1 = Xt->size[0] * Xt->size[1];
      Xt->size[0] = 1;
      d_loop_ub = phi->size[0];
      Xt->size[1] = phi->size[0];
      emxEnsureCapacity_real_T(sp, Xt, i1, &ed_emlrtRTEI);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        Xt->data[i1] = phi->data[i1];
      }

      st.site = &qo_emlrtRSI;
      disp(&st, i_emlrt_marshallOut(Xt), &q_emlrtMCI);
      st.site = &tn_emlrtRSI;
      disp(&st, j_emlrt_marshallOut(&st, cv2), &r_emlrtMCI);
      b_y = NULL;
      m6 = emlrtCreateDoubleScalar(sig2);
      emlrtAssign(&b_y, m6);
      st.site = &po_emlrtRSI;
      disp(&st, b_y, &s_emlrtMCI);
      st.site = &vn_emlrtRSI;
      disp(&st, k_emlrt_marshallOut(&st, cv3), &t_emlrtMCI);
      b_y = NULL;
      m7 = emlrtCreateDoubleScalar(logpost);
      emlrtAssign(&b_y, m7);
      st.site = &oo_emlrtRSI;
      disp(&st, b_y, &u_emlrtMCI);
    }

    emlrtForLoopVectorCheckR2012b((real_T)p + 1.0, 1.0, T, mxDOUBLE_CLASS, i4,
      &d_emlrtRTEI, sp);
    for (nx = 0; nx < i4; nx++) {
      b_i = ((uint32_T)p + nx) + 1U;
      st.site = &s_emlrtRSI;
      d_loop_ub = (int32_T)-((0.0 - (real_T)p) - -1.0);
      i1 = d_loop_ub + 1;
      i2 = d_data->size[0];
      d_data->size[0] = i1;
      emxEnsureCapacity_real_T(&st, d_data, i2, &wc_emlrtRTEI);
      for (i2 = 0; i2 <= d_loop_ub; i2++) {
        i3 = (int32_T)((real_T)b_i + (-1.0 - (real_T)i2));
        if ((i3 < 1) || (i3 > data->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, data->size[0], &k_emlrtBCI, &st);
        }

        d_data->data[i2] = b_Xt->data[i3 - 1];
      }

      b_st.site = &nd_emlrtRSI;
      d_dynamic_size_checks(&b_st, phi, d_data, phi->size[0], (int32_T)-((0.0 -
        (real_T)p) - -1.0) + 1);
      d_loop_ub = phi->size[0];
      if ((phi->size[0] == 1) || (i1 == 1)) {
        logpost = 0.0;
        for (i1 = 0; i1 < d_loop_ub; i1++) {
          logpost += phi->data[i1] * d_data->data[i1];
        }
      } else {
        b_st.site = &md_emlrtRSI;
        logpost = d_mtimes(&b_st, phi, d_data);
      }

      i1 = (int32_T)((real_T)b_i - (real_T)p);
      if ((i1 < 1) || (i1 > X_hat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, X_hat->size[0], &i_emlrtBCI, sp);
      }

      if (((int32_T)b_i < 1) || ((int32_T)b_i > data->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, data->size[0],
          &j_emlrtBCI, sp);
      }

      X_hat_tmp = (int32_T)b_i - 1;
      X_hat->data[i1 - 1] = data->data[X_hat_tmp + data->size[0]] - logpost;
      i1 = (int32_T)b_i;
      if ((i1 < 1) || (i1 > X1->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, X1->size[0], &ab_emlrtBCI, sp);
      }

      st.site = &t_emlrtRSI;
      d_loop_ub = X1->size[1];
      b_st.site = &t_emlrtRSI;
      e_loop_ub = div_s32_floor(&b_st, 1 - p, -1);
      i1 = e_loop_ub + 1;
      i2 = b_b->size[0] * b_b->size[1];
      b_b->size[0] = i1;
      b_b->size[1] = X1->size[1];
      emxEnsureCapacity_real_T(&st, b_b, i2, &cd_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        for (i3 = 0; i3 <= e_loop_ub; i3++) {
          i8 = ((int32_T)b_i - i3) - 1;
          if ((i8 < 1) || (i8 > X1->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i8, 1, X1->size[0], &h_emlrtBCI, &st);
          }

          b_b->data[i3 + b_b->size[0] * i2] = X1->data[(i8 + X1->size[0] * i2) -
            1];
        }
      }

      b_st.site = &nd_emlrtRSI;
      e_st.site = &t_emlrtRSI;
      e_dynamic_size_checks(&b_st, phi, b_b, phi->size[0], div_s32_floor(&e_st,
        1 - p, -1) + 1);
      if ((phi->size[0] == 1) || (i1 == 1)) {
        i2 = Xt->size[0] * Xt->size[1];
        Xt->size[0] = 1;
        d_loop_ub = b_b->size[1];
        Xt->size[1] = b_b->size[1];
        emxEnsureCapacity_real_T(&st, Xt, i2, &fd_emlrtRTEI);
        for (i2 = 0; i2 < d_loop_ub; i2++) {
          Xt->data[i2] = 0.0;
          input_sizes_idx_1 = phi->size[0];
          for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
            Xt->data[i2] += phi->data[i3] * b_b->data[i3 + b_b->size[0] * i2];
          }
        }
      } else {
        b_st.site = &md_emlrtRSI;
        e_mtimes(&b_st, phi, b_b, Xt);
      }

      d_loop_ub = X1->size[1];
      i2 = b_X1->size[0] * b_X1->size[1];
      b_X1->size[0] = 1;
      b_X1->size[1] = X1->size[1];
      emxEnsureCapacity_real_T(sp, b_X1, i2, &gd_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        b_X1->data[i2] = X1->data[X_hat_tmp + X1->size[0] * i2];
      }

      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])b_X1->size, *(int32_T (*)[2])
        Xt->size, &i_emlrtECI, sp);
      i2 = (int32_T)b_i - p;
      if ((i2 < 1) || (i2 > X1_hat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, X1_hat->size[0], &y_emlrtBCI, sp);
      }

      i3 = i2 - 1;
      d_loop_ub = X1->size[1];
      i8 = b_X1->size[0] * b_X1->size[1];
      b_X1->size[0] = 1;
      b_X1->size[1] = X1->size[1];
      emxEnsureCapacity_real_T(sp, b_X1, i8, &gd_emlrtRTEI);
      for (i8 = 0; i8 < d_loop_ub; i8++) {
        b_X1->data[i8] = X1->data[X_hat_tmp + X1->size[0] * i8];
      }

      input_sizes[0] = 1;
      input_sizes[1] = X1_hat->size[1];
      emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_X1->size[0], 2,
        &g_emlrtECI, sp);
      d_loop_ub = X1->size[1];
      for (i8 = 0; i8 < d_loop_ub; i8++) {
        X1_hat->data[i3 + X1_hat->size[0] * i8] = X1->data[X_hat_tmp + X1->size
          [0] * i8] - Xt->data[i8];
      }

      st.site = &u_emlrtRSI;
      i3 = d_data->size[0];
      d_data->size[0] = i1;
      emxEnsureCapacity_real_T(&st, d_data, i3, &wc_emlrtRTEI);
      for (i3 = 0; i3 <= e_loop_ub; i3++) {
        i8 = ((int32_T)b_i - i3) - 1;
        if ((i8 < 1) || (i8 > data->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, data->size[0], &g_emlrtBCI, &st);
        }

        d_data->data[i3] = Y->data[i8 - 1];
      }

      b_st.site = &nd_emlrtRSI;
      e_st.site = &u_emlrtRSI;
      d_dynamic_size_checks(&b_st, phi, d_data, phi->size[0], div_s32_floor
                            (&e_st, 1 - p, -1) + 1);
      d_loop_ub = phi->size[0];
      if ((phi->size[0] == 1) || (i1 == 1)) {
        logpost = 0.0;
        for (i1 = 0; i1 < d_loop_ub; i1++) {
          logpost += phi->data[i1] * d_data->data[i1];
        }
      } else {
        b_st.site = &md_emlrtRSI;
        logpost = d_mtimes(&b_st, phi, d_data);
      }

      if (i2 > Y_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, Y_hat->size[0], &e_emlrtBCI, sp);
      }

      if (((int32_T)b_i < 1) || ((int32_T)b_i > data->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, data->size[0],
          &f_emlrtBCI, sp);
      }

      Y_hat->data[i2 - 1] = data->data[X_hat_tmp] - logpost;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (i != b_loop_ub) {
      emlrtSizeEqCheck1DR2012b(i, b_loop_ub, &h_emlrtECI, sp);
    }

    if (Y_hat->size[0] != X_hat->size[0]) {
      emlrtSizeEqCheck1DR2012b(Y_hat->size[0], X_hat->size[0], &f_emlrtECI, sp);
    }

    i1 = b_Y->size[0];
    b_Y->size[0] = i;
    emxEnsureCapacity_real_T(sp, b_Y, i1, &vc_emlrtRTEI);
    for (i1 = 0; i1 < f_loop_ub; i1++) {
      b_Y->data[i1] = Y->data[i1] - b_Xt->data[i1];
    }

    d_loop_ub = Y_hat->size[0];
    i1 = d_data->size[0];
    d_data->size[0] = Y_hat->size[0];
    emxEnsureCapacity_real_T(sp, d_data, i1, &xc_emlrtRTEI);
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      d_data->data[i1] = Y_hat->data[i1] - X_hat->data[i1];
    }

    st.site = &v_emlrtRSI;
    Gen_c(&st, X1_p, b_Y, X1_hat, d_data, inv_Sigma, c0, precC0, sig2_inv, p, T,
          c);
    i1 = iter + 1;
    if (i1 > cm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, cm->size[0], &v_emlrtBCI, sp);
    }

    input_sizes[0] = 1;
    input_sizes[1] = cm->size[1];
    sizes[0] = 1;
    d_loop_ub = c->size[0];
    sizes[1] = c->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &sizes[0], 2, &c_emlrtECI,
      sp);
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      cm->data[iter + cm->size[0] * i1] = c->data[i1];
    }

    st.site = &w_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    if ((b_loop_ub != b_result) && (b_loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i5 != b_result) && ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    st.site = &w_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    if (X_hat->size[0] != 0) {
      nx = X_hat->size[0];
    } else if ((X1_hat->size[0] != 0) && (X1_hat->size[1] != 0)) {
      nx = X1_hat->size[0];
    } else {
      nx = 0;
      if (X1_hat->size[0] > 0) {
        nx = X1_hat->size[0];
      }
    }

    c_st.site = &h_emlrtRSI;
    if ((X_hat->size[0] != nx) && (X_hat->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((X1_hat->size[0] != nx) && ((X1_hat->size[0] != 0) && (X1_hat->size[1]
          != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || (X_hat->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((X1_hat->size[0] != 0) && (X1_hat->size[1] != 0)))
    {
      d_loop_ub = X1_hat->size[1];
    } else {
      d_loop_ub = 0;
    }

    i1 = b_Y->size[0];
    b_Y->size[0] = i;
    emxEnsureCapacity_real_T(sp, b_Y, i1, &wc_emlrtRTEI);
    for (i1 = 0; i1 < f_loop_ub; i1++) {
      b_Y->data[i1] = Y->data[i1];
    }

    i1 = b_X_p->size[0] * b_X_p->size[1];
    b_X_p->size[0] = b_result;
    e_loop_ub = b_input_sizes_idx_1;
    b_X_p->size[1] = b_input_sizes_idx_1 + c_input_sizes_idx_1;
    emxEnsureCapacity_real_T(sp, b_X_p, i1, &pb_emlrtRTEI);
    for (i1 = 0; i1 < e_loop_ub; i1++) {
      for (i2 = 0; i2 < b_result; i2++) {
        b_X_p->data[i2] = X_p->data[i2];
      }
    }

    for (i1 = 0; i1 < c_input_sizes_idx_1; i1++) {
      for (i2 = 0; i2 < b_result; i2++) {
        b_X_p->data[i2 + b_X_p->size[0] * (i1 + b_input_sizes_idx_1)] =
          X1_p->data[i2 + b_result * i1];
      }
    }

    i1 = result->size[0] * result->size[1];
    result->size[0] = nx;
    e_loop_ub = sizes_idx_1;
    result->size[1] = sizes_idx_1 + d_loop_ub;
    emxEnsureCapacity_real_T(sp, result, i1, &pb_emlrtRTEI);
    for (i1 = 0; i1 < e_loop_ub; i1++) {
      for (i2 = 0; i2 < nx; i2++) {
        result->data[i2] = X_hat->data[i2];
      }
    }

    for (i1 = 0; i1 < d_loop_ub; i1++) {
      for (i2 = 0; i2 < nx; i2++) {
        result->data[i2 + result->size[0] * (i1 + sizes_idx_1)] = X1_hat->
          data[i2 + nx * i1];
      }
    }

    d_loop_ub = c->size[0];
    i1 = d_data->size[0];
    d_data->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(sp, d_data, i1, &hd_emlrtRTEI);
    d_data->data[0] = 1.0;
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      d_data->data[i1 + 1] = c->data[i1];
    }

    st.site = &w_emlrtRSI;
    sig2 = Gen_sig2(&st, b_Y, b_X_p, result, Y_hat, inv_Sigma, d_data, a0, d0);
    sig2_inv = 1.0 / sig2;
    i1 = (int32_T)(iter + 1U);
    if (i1 > sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, sig2m->size[0], &d_emlrtBCI, sp);
    }

    sig2m->data[i1 - 1] = sig2;
    st.site = &x_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    if (i6 != 0) {
      nx = data->size[0];
    } else if ((X1->size[0] != 0) && (X1->size[1] != 0)) {
      nx = X1->size[0];
    } else {
      if (data->size[0] > 0) {
        nx = data->size[0];
      } else {
        nx = 0;
      }

      if (X1->size[0] > nx) {
        nx = X1->size[0];
      }
    }

    c_st.site = &h_emlrtRSI;
    if ((i7 != nx) && (data->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((X1->size[0] != nx) && ((X1->size[0] != 0) && (X1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || (data->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    guard1 = false;
    if (empty_non_axis_sizes) {
      guard1 = true;
    } else {
      i2 = X1->size[1];
      if ((X1->size[0] != 0) && (X1->size[1] != 0)) {
        guard1 = true;
      } else {
        d_loop_ub = 0;
      }
    }

    if (guard1) {
      i2 = X1->size[1];
      d_loop_ub = X1->size[1];
    }

    st.site = &x_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    if ((b_loop_ub != c_result) && (b_loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i5 != c_result) && ((c_loop_ub != 0) && (i2 != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    e_loop_ub = sizes_idx_1;
    i2 = result->size[0] * result->size[1];
    result->size[0] = nx;
    result->size[1] = sizes_idx_1 + d_loop_ub;
    emxEnsureCapacity_real_T(sp, result, i2, &pb_emlrtRTEI);
    for (i2 = 0; i2 < e_loop_ub; i2++) {
      for (i3 = 0; i3 < nx; i3++) {
        result->data[i3] = b_Xt->data[i3];
      }
    }

    for (i2 = 0; i2 < d_loop_ub; i2++) {
      for (i3 = 0; i3 < nx; i3++) {
        result->data[i3 + result->size[0] * (i2 + sizes_idx_1)] = X1->data[i3 +
          nx * i2];
      }
    }

    i2 = b_Y->size[0];
    b_Y->size[0] = i;
    emxEnsureCapacity_real_T(sp, b_Y, i2, &wc_emlrtRTEI);
    for (i2 = 0; i2 < f_loop_ub; i2++) {
      b_Y->data[i2] = Y->data[i2];
    }

    i2 = b_X_p->size[0] * b_X_p->size[1];
    b_X_p->size[0] = c_result;
    d_loop_ub = d_input_sizes_idx_1;
    b_X_p->size[1] = d_input_sizes_idx_1 + e_input_sizes_idx_1;
    emxEnsureCapacity_real_T(sp, b_X_p, i2, &pb_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      for (i3 = 0; i3 < c_result; i3++) {
        b_X_p->data[i3] = X_p->data[i3];
      }
    }

    for (i2 = 0; i2 < e_input_sizes_idx_1; i2++) {
      for (i3 = 0; i3 < c_result; i3++) {
        b_X_p->data[i3 + b_X_p->size[0] * (i2 + d_input_sizes_idx_1)] =
          X1_p->data[i3 + c_result * i2];
      }
    }

    d_loop_ub = c->size[0];
    i2 = d_data->size[0];
    d_data->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(sp, d_data, i2, &id_emlrtRTEI);
    d_data->data[0] = 1.0;
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      d_data->data[i2 + 1] = c->data[i2];
    }

    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = G->size[0];
    kron_G->size[1] = G->size[1];
    emxEnsureCapacity_real_T(sp, kron_G, i2, &jd_emlrtRTEI);
    d_loop_ub = G->size[0] * G->size[1] - 1;
    for (i2 = 0; i2 <= d_loop_ub; i2++) {
      kron_G->data[i2] = G->data[i2];
    }

    st.site = &x_emlrtRSI;
    Gen_G(&st, Y, result, b_Y, b_X_p, Sigma, inv_Sigma, d_data, sig2_inv, kron_G,
          phi0, precphi0, PHI0, G);
    if (1 > G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &x_emlrtBCI, sp);
    }

    d_loop_ub = G->size[1];
    i2 = phi->size[0];
    phi->size[0] = G->size[1];
    emxEnsureCapacity_real_T(sp, phi, i2, &kd_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      phi->data[i2] = G->data[G->size[0] * i2];
    }

    i2 = iter + 1;
    if (i2 > phim->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, phim->size[0], &q_emlrtBCI, sp);
    }

    input_sizes[0] = 1;
    input_sizes[1] = phim->size[1];
    sizes[0] = 1;
    d_loop_ub = phi->size[0];
    sizes[1] = phi->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &sizes[0], 2, &b_emlrtECI,
      sp);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      phim->data[iter + phim->size[0] * i2] = phi->data[i2];
    }

    st.site = &y_emlrtRSI;
    kron(&st, G, G, kron_G);
    st.site = &ab_emlrtRSI;
    eye(&st, kron_G->size[0], b_b);
    emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])b_b->size, *(int32_T (*)[2])
      kron_G->size, &e_emlrtECI, sp);
    st.site = &ab_emlrtRSI;
    i2 = inv_Sigma->size[0] * inv_Sigma->size[1];
    inv_Sigma->size[0] = b_b->size[0];
    inv_Sigma->size[1] = b_b->size[1];
    emxEnsureCapacity_real_T(&st, inv_Sigma, i2, &ld_emlrtRTEI);
    d_loop_ub = b_b->size[0] * b_b->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      inv_Sigma->data[i2] = b_b->data[i2] - kron_G->data[i2];
    }

    b_st.site = &ab_emlrtRSI;
    inv(&b_st, inv_Sigma, kron_G);
    i2 = b_b->size[0] * b_b->size[1];
    b_b->size[0] = e1->size[0];
    b_b->size[1] = e1->size[0];
    emxEnsureCapacity_real_T(&st, b_b, i2, &md_emlrtRTEI);
    for (i2 = 0; i2 < g_loop_ub; i2++) {
      d_loop_ub = e1->size[0];
      for (i3 = 0; i3 < d_loop_ub; i3++) {
        b_b->data[i3 + b_b->size[0] * i2] = e1->data[i3] * e1->data[i2];
      }
    }

    b_st.site = &ab_emlrtRSI;
    vec(&b_st, b_b);
    b_st.site = &nd_emlrtRSI;
    c_dynamic_size_checks(&b_st, kron_G, b_b, kron_G->size[1], b_b->size[0]);
    if ((kron_G->size[1] == 1) || (b_b->size[0] == 1)) {
      i2 = vec_Sigma->size[0] * vec_Sigma->size[1];
      vec_Sigma->size[0] = kron_G->size[0];
      vec_Sigma->size[1] = b_b->size[1];
      emxEnsureCapacity_real_T(&st, vec_Sigma, i2, &nd_emlrtRTEI);
      d_loop_ub = kron_G->size[0];
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        e_loop_ub = b_b->size[1];
        for (i3 = 0; i3 < e_loop_ub; i3++) {
          vec_Sigma->data[i2 + vec_Sigma->size[0] * i3] = 0.0;
          input_sizes_idx_1 = kron_G->size[1];
          for (i8 = 0; i8 < input_sizes_idx_1; i8++) {
            vec_Sigma->data[i2 + vec_Sigma->size[0] * i3] += kron_G->data[i2 +
              kron_G->size[0] * i8] * b_b->data[i8 + b_b->size[0] * i3];
          }
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      c_mtimes(&b_st, kron_G, b_b, vec_Sigma);
    }

    st.site = &bb_emlrtRSI;
    nx = vec_Sigma->size[0] * vec_Sigma->size[1];
    b_st.site = &qf_emlrtRSI;
    c_st.site = &pf_emlrtRSI;
    assertValidSizeArg(&c_st, p);
    c_st.site = &pf_emlrtRSI;
    assertValidSizeArg(&c_st, p);
    input_sizes_idx_1 = vec_Sigma->size[0];
    if (vec_Sigma->size[1] > vec_Sigma->size[0]) {
      input_sizes_idx_1 = vec_Sigma->size[1];
    }

    if (p > muIntScalarMax_sint32(nx, input_sizes_idx_1)) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if (p * p != nx) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    i2 = inv_Sigma->size[0] * inv_Sigma->size[1];
    inv_Sigma->size[0] = p;
    inv_Sigma->size[1] = p;
    emxEnsureCapacity_real_T(sp, inv_Sigma, i2, &od_emlrtRTEI);
    for (i2 = 0; i2 < p; i2++) {
      for (i3 = 0; i3 < p; i3++) {
        inv_Sigma->data[i3 + inv_Sigma->size[0] * i2] = vec_Sigma->data[i2 + p *
          i3];
      }
    }

    input_sizes[0] = p;
    input_sizes[1] = p;
    emlrtSizeEqCheckNDR2012b(input_sizes, *(int32_T (*)[2])inv_Sigma->size,
      &d_emlrtECI, sp);
    i2 = Sigma->size[0] * Sigma->size[1];
    Sigma->size[0] = p;
    Sigma->size[1] = p;
    emxEnsureCapacity_real_T(sp, Sigma, i2, &pd_emlrtRTEI);
    for (i2 = 0; i2 < p; i2++) {
      for (i3 = 0; i3 < p; i3++) {
        Sigma->data[i3 + Sigma->size[0] * i2] = 0.5 * (vec_Sigma->data[i3 + p *
          i2] + vec_Sigma->data[i2 + p * i3]);
      }
    }

    st.site = &cb_emlrtRSI;
    inv(&st, Sigma, inv_Sigma);
    i2 = b_b->size[0] * b_b->size[1];
    b_b->size[0] = Sigma->size[0];
    b_b->size[1] = Sigma->size[1];
    emxEnsureCapacity_real_T(sp, b_b, i2, &qd_emlrtRTEI);
    d_loop_ub = Sigma->size[0] * Sigma->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_b->data[i2] = Sigma->data[i2];
    }

    st.site = &db_emlrtRSI;
    vec(&st, b_b);
    i2 = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = b_b->size[1];
    d_loop_ub = b_b->size[0];
    vec_Sigma->size[1] = b_b->size[0];
    emxEnsureCapacity_real_T(sp, vec_Sigma, i2, &rd_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      e_loop_ub = b_b->size[1];
      for (i3 = 0; i3 < e_loop_ub; i3++) {
        vec_Sigma->data[i3 + vec_Sigma->size[0] * i2] = b_b->data[i2 + b_b->
          size[0] * i3];
      }
    }

    i2 = iter + 1;
    if (i2 > Sigmam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, Sigmam->size[0], &l_emlrtBCI, sp);
    }

    if (1 > vec_Sigma->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_Sigma->size[0], &w_emlrtBCI, sp);
    }

    d_loop_ub = vec_Sigma->size[1];
    i2 = Xt->size[0] * Xt->size[1];
    Xt->size[0] = 1;
    Xt->size[1] = vec_Sigma->size[1];
    emxEnsureCapacity_real_T(sp, Xt, i2, &sd_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      Xt->data[i2] = vec_Sigma->data[vec_Sigma->size[0] * i2];
    }

    input_sizes[0] = 1;
    input_sizes[1] = Sigmam->size[1];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &Xt->size[0], 2, &emlrtECI,
      sp);
    d_loop_ub = vec_Sigma->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      Sigmam->data[iter + Sigmam->size[0] * i2] = vec_Sigma->data
        [vec_Sigma->size[0] * i2];
    }

    /*  likelihood */
    st.site = &eb_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    if ((b_loop_ub != d_result) && (b_loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i5 != d_result) && ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    i2 = b_reshapes[0].f1->size[0] * b_reshapes[0].f1->size[1];
    b_reshapes[0].f1->size[0] = d_result;
    b_reshapes[0].f1->size[1] = f_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, b_reshapes[0].f1, i2, &qc_emlrtRTEI);
    for (i2 = 0; i2 < h_loop_ub; i2++) {
      b_reshapes[0].f1->data[i2] = b_Xt->data[i2];
    }

    i2 = result->size[0] * result->size[1];
    result->size[0] = b_reshapes[0].f1->size[0];
    d_loop_ub = b_reshapes[0].f1->size[1];
    result->size[1] = b_reshapes[0].f1->size[1] + g_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, result, i2, &jc_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      e_loop_ub = b_reshapes[0].f1->size[0];
      for (i3 = 0; i3 < e_loop_ub; i3++) {
        result->data[i3 + result->size[0] * i2] = b_reshapes[0].f1->data[i3 +
          b_reshapes[0].f1->size[0] * i2];
      }
    }

    for (i2 = 0; i2 < g_input_sizes_idx_1; i2++) {
      for (i3 = 0; i3 < d_result; i3++) {
        result->data[i3 + result->size[0] * (i2 + b_reshapes[0].f1->size[1])] =
          X1_p->data[i3 + d_result * i2];
      }
    }

    st.site = &eb_emlrtRSI;
    d_loop_ub = f_input_sizes_idx_1;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = d_result;
    kron_G->size[1] = f_input_sizes_idx_1 + g_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, kron_G, i2, &td_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      for (i3 = 0; i3 < d_result; i3++) {
        kron_G->data[i3] = X_p->data[i3];
      }
    }

    for (i2 = 0; i2 < g_input_sizes_idx_1; i2++) {
      for (i3 = 0; i3 < d_result; i3++) {
        kron_G->data[i3 + kron_G->size[0] * (i2 + f_input_sizes_idx_1)] =
          X1_p->data[i3 + d_result * i2];
      }
    }

    d_loop_ub = c->size[0];
    i2 = d_data->size[0];
    d_data->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(&st, d_data, i2, &ud_emlrtRTEI);
    d_data->data[0] = 1.0;
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      d_data->data[i2 + 1] = c->data[i2];
    }

    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, result, d_data, kron_G->size[1], d_data->size[0]);
    if ((kron_G->size[1] == 1) || (d_data->size[0] == 1)) {
      d_loop_ub = result->size[0];
      i2 = y->size[0];
      y->size[0] = result->size[0];
      emxEnsureCapacity_real_T(&st, y, i2, &vd_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        y->data[i2] = 0.0;
        e_loop_ub = result->size[1];
        for (i3 = 0; i3 < e_loop_ub; i3++) {
          y->data[i2] += result->data[i2 + result->size[0] * i3] * d_data->
            data[i3];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      b_mtimes(&b_st, result, d_data, y);
    }

    st.site = &eb_emlrtRSI;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = Sigma->size[0];
    kron_G->size[1] = Sigma->size[1];
    emxEnsureCapacity_real_T(&st, kron_G, i2, &wd_emlrtRTEI);
    d_loop_ub = Sigma->size[0] * Sigma->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      kron_G->data[i2] = sig2 * Sigma->data[i2];
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, kron_G);
    i2 = b_Y->size[0];
    b_Y->size[0] = i;
    emxEnsureCapacity_real_T(sp, b_Y, i2, &wc_emlrtRTEI);
    for (i2 = 0; i2 < f_loop_ub; i2++) {
      b_Y->data[i2] = Y->data[i2];
    }

    st.site = &eb_emlrtRSI;
    logpost = lnpdfmvn4(&st, b_Y, y, kron_G);
    st.site = &fb_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    if (X_hat->size[0] != 0) {
      nx = X_hat->size[0];
    } else if ((X1_hat->size[0] != 0) && (X1_hat->size[1] != 0)) {
      nx = X1_hat->size[0];
    } else {
      nx = 0;
      if (X1_hat->size[0] > 0) {
        nx = X1_hat->size[0];
      }
    }

    c_st.site = &h_emlrtRSI;
    if ((X_hat->size[0] != nx) && (X_hat->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((X1_hat->size[0] != nx) && ((X1_hat->size[0] != 0) && (X1_hat->size[1]
          != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || (X_hat->size[0] != 0)) {
      sizes_idx_1 = 1;
      h_input_sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
      h_input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((X1_hat->size[0] != 0) && (X1_hat->size[1] != 0)))
    {
      d_loop_ub = X1_hat->size[1];
      input_sizes_idx_1 = X1_hat->size[1];
    } else {
      d_loop_ub = 0;
      input_sizes_idx_1 = 0;
    }

    e_loop_ub = sizes_idx_1;
    i2 = result->size[0] * result->size[1];
    result->size[0] = nx;
    result->size[1] = sizes_idx_1 + d_loop_ub;
    emxEnsureCapacity_real_T(&b_st, result, i2, &jc_emlrtRTEI);
    for (i2 = 0; i2 < e_loop_ub; i2++) {
      for (i3 = 0; i3 < nx; i3++) {
        result->data[i3] = X_hat->data[i3];
      }
    }

    for (i2 = 0; i2 < d_loop_ub; i2++) {
      for (i3 = 0; i3 < nx; i3++) {
        result->data[i3 + result->size[0] * (i2 + sizes_idx_1)] = X1_hat->
          data[i3 + nx * i2];
      }
    }

    st.site = &fb_emlrtRSI;
    d_loop_ub = h_input_sizes_idx_1;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = nx;
    kron_G->size[1] = h_input_sizes_idx_1 + input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, kron_G, i2, &xd_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      for (i3 = 0; i3 < nx; i3++) {
        kron_G->data[i3] = X_hat->data[i3];
      }
    }

    for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
      for (i3 = 0; i3 < nx; i3++) {
        kron_G->data[i3 + kron_G->size[0] * (i2 + h_input_sizes_idx_1)] =
          X1_hat->data[i3 + nx * i2];
      }
    }

    d_loop_ub = c->size[0];
    i2 = d_data->size[0];
    d_data->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(&st, d_data, i2, &yd_emlrtRTEI);
    d_data->data[0] = 1.0;
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      d_data->data[i2 + 1] = c->data[i2];
    }

    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, result, d_data, kron_G->size[1], d_data->size[0]);
    if ((kron_G->size[1] == 1) || (d_data->size[0] == 1)) {
      d_loop_ub = result->size[0];
      i2 = y->size[0];
      y->size[0] = result->size[0];
      emxEnsureCapacity_real_T(&st, y, i2, &vd_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        y->data[i2] = 0.0;
        e_loop_ub = result->size[1];
        for (i3 = 0; i3 < e_loop_ub; i3++) {
          y->data[i2] += result->data[i2 + result->size[0] * i3] * d_data->
            data[i3];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      b_mtimes(&b_st, result, d_data, y);
    }

    st.site = &fb_emlrtRSI;
    eye(&st, T - p, b_b);
    st.site = &fb_emlrtRSI;
    d_loop_ub = b_b->size[0] * b_b->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_b->data[i2] *= sig2;
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, b_b);
    st.site = &fb_emlrtRSI;
    lik_2 = lnpdfmvn4(&st, Y_hat, y, b_b);

    /*  prior */
    st.site = &gb_emlrtRSI;
    logprior_sig2 = lnpdfig(&st, sig2, a0 / 2.0, d0 / 2.0);
    st.site = &hb_emlrtRSI;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = PHI0->size[0];
    kron_G->size[1] = PHI0->size[1];
    emxEnsureCapacity_real_T(&st, kron_G, i2, &wd_emlrtRTEI);
    for (i2 = 0; i2 < i_loop_ub; i2++) {
      kron_G->data[i2] = PHI0->data[i2];
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, kron_G);
    st.site = &hb_emlrtRSI;
    logprior_phi = lnpdfmvn4(&st, phi, phi0, kron_G);
    st.site = &ib_emlrtRSI;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = C0->size[0];
    kron_G->size[1] = C0->size[1];
    emxEnsureCapacity_real_T(&st, kron_G, i2, &wd_emlrtRTEI);
    for (i2 = 0; i2 < j_loop_ub; i2++) {
      kron_G->data[i2] = C0->data[i2];
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, kron_G);
    st.site = &ib_emlrtRSI;
    logprior_c = lnpdfmvn4(&st, c, c0, kron_G);
    logpost = (logpost + lik_2) + ((logprior_sig2 + logprior_phi) + logprior_c);
    if (i1 > logpostm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, logpostm->size[0], &c_emlrtBCI, sp);
    }

    logpostm->data[i1 - 1] = logpost;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_X_p);
  emxFree_real_T(&b_X1);
  emxFree_real_T(&b_Y);
  emxFree_real_T(&d_data);
  emxFreeMatrix_cell_wrap_1(b_reshapes);
  emxFree_real_T(&y);
  emxFree_real_T(&b_b);
  emxFree_real_T(&result);
  emxFree_real_T(&b_Xt);
  emxFree_real_T(&inv_Sigma);
  emxFree_real_T(&Sigma);
  emxFree_real_T(&vec_Sigma);
  emxFree_real_T(&kron_G);
  emxFree_real_T(&Y_hat);
  emxFree_real_T(&X1_hat);
  emxFree_real_T(&X_hat);
  emxFree_real_T(&X1_p);
  emxFree_real_T(&X_p);
  emxFree_int8_T(&e1);
  emxFree_real_T(&c);
  emxFree_real_T(&phi);
  emxFree_real_T(&G);
  emxFree_real_T(&Sigmam);
  emxFree_real_T(&precC0);
  emxFree_real_T(&precphi0);
  emxFree_real_T(&X1);
  emxFree_real_T(&Xt);
  emxFree_real_T(&Y);
  b_y = NULL;
  m3 = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m3);
  st.site = &no_emlrtRSI;
  disp(&st, b_y, &d_emlrtMCI);
  st.site = &xn_emlrtRSI;
  disp(&st, l_emlrt_marshallOut(&st, cv1), &e_emlrtMCI);
  b_y = NULL;
  m5 = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m5);
  st.site = &mo_emlrtRSI;
  disp(&st, b_y, &f_emlrtMCI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &r_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > cm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, cm->size[0], &u_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > cm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, cm->size[0], &t_emlrtBCI, sp);
    }

    i1 = (int32_T)n;
  }

  loop_ub = cm->size[1];
  b_loop_ub = i1 - i;
  i1 = Output_cm->size[0] * Output_cm->size[1];
  Output_cm->size[0] = b_loop_ub;
  Output_cm->size[1] = cm->size[1];
  emxEnsureCapacity_real_T(sp, Output_cm, i1, &uc_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      Output_cm->data[i2 + Output_cm->size[0] * i1] = cm->data[(i + i2) +
        cm->size[0] * i1];
    }
  }

  emxFree_real_T(&cm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &q_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, sig2m->size[0], &s_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2m->size[0], &r_emlrtBCI,
        sp);
    }

    i1 = (int32_T)n;
  }

  input_sizes[0] = 1;
  nx = i1 - i;
  input_sizes[1] = nx;
  st.site = &jb_emlrtRSI;
  indexShapeCheck(&st, sig2m->size[0], input_sizes);
  i1 = Output_sigma2m->size[0];
  Output_sigma2m->size[0] = nx;
  emxEnsureCapacity_real_T(sp, Output_sigma2m, i1, &yc_emlrtRTEI);
  for (i1 = 0; i1 < nx; i1++) {
    Output_sigma2m->data[i1] = sig2m->data[i + i1];
  }

  emxFree_real_T(&sig2m);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &p_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > phim->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, phim->size[0], &p_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > phim->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, phim->size[0], &o_emlrtBCI,
        sp);
    }

    i1 = (int32_T)n;
  }

  loop_ub = phim->size[1];
  b_loop_ub = i1 - i;
  i1 = Output_phim->size[0] * Output_phim->size[1];
  Output_phim->size[0] = b_loop_ub;
  Output_phim->size[1] = phim->size[1];
  emxEnsureCapacity_real_T(sp, Output_phim, i1, &ad_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      Output_phim->data[i2 + Output_phim->size[0] * i1] = phim->data[(i + i2) +
        phim->size[0] * i1];
    }
  }

  emxFree_real_T(&phim);

  /*  Sigmam = Sigmam(n0+1:n,:); */
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &o_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > logpostm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, logpostm->size[0], &n_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > logpostm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, logpostm->size[0],
        &m_emlrtBCI, sp);
    }

    i1 = (int32_T)n;
  }

  loop_ub = i1 - i;
  i1 = Output_logpostm->size[0];
  Output_logpostm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output_logpostm, i1, &dd_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output_logpostm->data[i1] = logpostm->data[i + i1];
  }

  emxFree_real_T(&logpostm);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void Gen_G(const emlrtStack *sp, const emxArray_real_T *Y, const emxArray_real_T
           *X, const emxArray_real_T *Y_p, const emxArray_real_T *X_p, const
           emxArray_real_T *Sigma0, const emxArray_real_T *inv_Sigma0, const
           emxArray_real_T *beta, real_T sig2_inv, const emxArray_real_T *G0,
           const emxArray_real_T *phi0, const emxArray_real_T *precphi0, const
           emxArray_real_T *PHI0, emxArray_real_T *G)
{
  emxArray_int8_T *e1;
  int32_T p;
  int32_T i;
  int32_T loop_ub;
  emxArray_real_T *y_star;
  int32_T b_loop_ub;
  int32_T i1;
  emxArray_real_T *Y_starY_star;
  emxArray_real_T *Y_stary_star;
  emxArray_real_T *absolute;
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  int32_T iter;
  uint32_T t;
  int32_T i2;
  real_T deno1;
  int32_T n;
  emxArray_real_T *center_hat;
  int32_T nx;
  real_T d;
  emxArray_real_T *vec_Sigma;
  int32_T b_center_hat[2];
  emxArray_real_T *PHI_hat;
  emxArray_real_T *r;
  emxArray_creal_T *eigen;
  emxArray_boolean_T *test;
  emxArray_real_T *result;
  emxArray_real_T *varargin_1;
  cell_wrap_1 reshapes[2];
  int32_T exitg1;
  boolean_T empty_non_axis_sizes;
  int8_T input_sizes_idx_1;
  boolean_T c_b;
  emxArray_real_T b_vec_Sigma;
  int32_T c_center_hat[2];
  real_T rss;
  emxArray_real_T *y;
  boolean_T guard1 = false;
  real_T numer2;
  int32_T d_center_hat[2];
  real_T numer1;
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
  emxInit_int8_T(sp, &e1, 1, &lh_emlrtRTEI, true);
  p = phi0->size[0];
  i = e1->size[0];
  e1->size[0] = phi0->size[0];
  emxEnsureCapacity_int8_T(sp, e1, i, &lh_emlrtRTEI);
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    e1->data[i] = 0;
  }

  if (1 > phi0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, phi0->size[0], &cd_emlrtBCI, sp);
  }

  e1->data[0] = 1;
  st.site = &rg_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X, beta, X->size[1], beta->size[0]);
  emxInit_real_T(&st, &y_star, 1, &nh_emlrtRTEI, true);
  if ((X->size[1] == 1) || (beta->size[0] == 1)) {
    i = y_star->size[0];
    y_star->size[0] = X->size[0];
    emxEnsureCapacity_real_T(&st, y_star, i, &mh_emlrtRTEI);
    loop_ub = X->size[0];
    for (i = 0; i < loop_ub; i++) {
      y_star->data[i] = 0.0;
      b_loop_ub = X->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        y_star->data[i] += X->data[i + X->size[0] * i1] * beta->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, X, beta, y_star);
  }

  if (Y->size[0] != y_star->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y->size[0], y_star->size[0], &eb_emlrtECI, sp);
  }

  i = y_star->size[0];
  y_star->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, y_star, i, &nh_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    y_star->data[i] = Y->data[i] - y_star->data[i];
  }

  emxInit_real_T(sp, &Y_starY_star, 2, &oh_emlrtRTEI, true);
  i = Y_starY_star->size[0] * Y_starY_star->size[1];
  Y_starY_star->size[0] = phi0->size[0];
  Y_starY_star->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Y_starY_star, i, &oh_emlrtRTEI);
  loop_ub = phi0->size[0] * phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_starY_star->data[i] = 0.0;
  }

  emxInit_real_T(sp, &Y_stary_star, 1, &ph_emlrtRTEI, true);
  i = Y_stary_star->size[0];
  Y_stary_star->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Y_stary_star, i, &ph_emlrtRTEI);
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_stary_star->data[i] = 0.0;
  }

  i = X->size[0] - phi0->size[0];
  emlrtForLoopVectorCheckR2012b((real_T)phi0->size[0] + 1.0, 1.0, X->size[0],
    mxDOUBLE_CLASS, i, &x_emlrtRTEI, sp);
  emxInit_real_T(sp, &absolute, 1, &ij_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 1, &qh_emlrtRTEI, true);
  emxInit_real_T(sp, &b_b, 2, &hi_emlrtRTEI, true);
  for (iter = 0; iter < i; iter++) {
    t = ((uint32_T)p + iter) + 1U;
    i1 = b->size[0];
    loop_ub = (int32_T)-((0.0 - (real_T)p) - -1.0);
    i2 = loop_ub + 1;
    b->size[0] = i2;
    emxEnsureCapacity_real_T(sp, b, i1, &qh_emlrtRTEI);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      n = (int32_T)((real_T)t + (-1.0 - (real_T)i1));
      if ((n < 1) || (n > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(n, 1, y_star->size[0], &ld_emlrtBCI, sp);
      }

      b->data[i1] = y_star->data[n - 1];
    }

    i1 = absolute->size[0];
    absolute->size[0] = i2;
    emxEnsureCapacity_real_T(sp, absolute, i1, &rh_emlrtRTEI);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      n = (int32_T)((real_T)t + (-1.0 - (real_T)i1));
      if ((n < 1) || (n > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(n, 1, y_star->size[0], &md_emlrtBCI, sp);
      }

      absolute->data[i1] = y_star->data[n - 1];
    }

    i1 = b_b->size[0] * b_b->size[1];
    b_b->size[0] = absolute->size[0];
    b_loop_ub = b->size[0];
    b_b->size[1] = b->size[0];
    emxEnsureCapacity_real_T(sp, b_b, i1, &sh_emlrtRTEI);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      nx = absolute->size[0];
      for (n = 0; n < nx; n++) {
        b_b->data[n + b_b->size[0] * i1] = absolute->data[n] * b->data[i1];
      }
    }

    emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])Y_starY_star->size, *(int32_T (*)
      [2])b_b->size, &fb_emlrtECI, sp);
    b_loop_ub = Y_starY_star->size[0] * Y_starY_star->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Y_starY_star->data[i1] += b_b->data[i1];
    }

    i1 = absolute->size[0];
    absolute->size[0] = i2;
    emxEnsureCapacity_real_T(sp, absolute, i1, &rh_emlrtRTEI);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      i2 = (int32_T)((real_T)t + (-1.0 - (real_T)i1));
      if ((i2 < 1) || (i2 > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, y_star->size[0], &nd_emlrtBCI, sp);
      }

      absolute->data[i1] = y_star->data[i2 - 1];
    }

    i1 = (int32_T)t;
    if ((i1 < 1) || (i1 > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, y_star->size[0], &ad_emlrtBCI, sp);
    }

    loop_ub = absolute->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      absolute->data[i1] *= y_star->data[(int32_T)t - 1];
    }

    loop_ub = Y_stary_star->size[0];
    if (Y_stary_star->size[0] != absolute->size[0]) {
      emlrtSizeEqCheck1DR2012b(Y_stary_star->size[0], absolute->size[0],
        &gb_emlrtECI, sp);
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      Y_stary_star->data[i1] += absolute->data[i1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &sg_emlrtRSI;
  vec(&st, Y_starY_star);
  if (1 > Y_starY_star->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Y_starY_star->size[1], &bd_emlrtBCI, sp);
  }

  st.site = &tg_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  deno1 = muDoubleScalarPower(phi0->size[0], 2.0);
  i = (int32_T)muDoubleScalarFloor(deno1);
  if (deno1 != i) {
    emlrtIntegerCheckR2012b(deno1, &v_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &center_hat, 1, &th_emlrtRTEI, true);
  loop_ub = (int32_T)deno1;
  i1 = center_hat->size[0];
  center_hat->size[0] = (int32_T)deno1;
  emxEnsureCapacity_real_T(sp, center_hat, i1, &th_emlrtRTEI);
  if ((int32_T)deno1 != i) {
    emlrtIntegerCheckR2012b(deno1, &v_emlrtDCI, sp);
  }

  for (i = 0; i < loop_ub; i++) {
    center_hat->data[i] = 0.0;
  }

  st.site = &ug_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  d = muDoubleScalarPower(phi0->size[0], 2.0);
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &y_emlrtRTEI, sp);
  for (nx = 0; nx < i; nx++) {
    i1 = (int32_T)(nx + 1U);
    if ((i1 < 1) || (i1 > Y_starY_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Y_starY_star->size[0], &od_emlrtBCI,
        sp);
    }

    if (i1 > center_hat->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, center_hat->size[0], &pd_emlrtBCI, sp);
    }

    center_hat->data[i1 - 1] = sig2_inv * Y_starY_star->data[i1 - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &vg_emlrtRSI;
  nx = center_hat->size[0];
  b_st.site = &qf_emlrtRSI;
  c_st.site = &pf_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  c_st.site = &pf_emlrtRSI;
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

  emxInit_real_T(&st, &vec_Sigma, 2, &ii_emlrtRTEI, true);
  b_center_hat[0] = phi0->size[0];
  b_center_hat[1] = phi0->size[0];
  emlrtSizeEqCheckNDR2012b(b_center_hat, *(int32_T (*)[2])precphi0->size,
    &hb_emlrtECI, sp);
  i = vec_Sigma->size[0] * vec_Sigma->size[1];
  vec_Sigma->size[0] = phi0->size[0];
  vec_Sigma->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, vec_Sigma, i, &uh_emlrtRTEI);
  loop_ub = phi0->size[0] * phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    vec_Sigma->data[i] = center_hat->data[i] + precphi0->data[i];
  }

  emxInit_real_T(sp, &PHI_hat, 2, &gj_emlrtRTEI, true);
  st.site = &wg_emlrtRSI;
  inv(&st, vec_Sigma, PHI_hat);
  i = center_hat->size[0];
  center_hat->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, center_hat, i, &vh_emlrtRTEI);
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    center_hat->data[i] = 0.0;
  }

  i = phi0->size[0];
  for (nx = 0; nx < i; nx++) {
    i1 = nx + 1;
    if ((i1 < 1) || (i1 > Y_stary_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Y_stary_star->size[0], &qd_emlrtBCI,
        sp);
    }

    i2 = nx + 1;
    if ((i2 < 1) || (i2 > center_hat->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, center_hat->size[0], &rd_emlrtBCI, sp);
    }

    center_hat->data[i2 - 1] = sig2_inv * Y_stary_star->data[i1 - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &xg_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, precphi0, phi0, precphi0->size[1], phi0->size[0]);
  emxInit_real_T(&st, &r, 1, &jj_emlrtRTEI, true);
  if ((precphi0->size[1] == 1) || (phi0->size[0] == 1)) {
    i = r->size[0];
    r->size[0] = precphi0->size[0];
    emxEnsureCapacity_real_T(&st, r, i, &wh_emlrtRTEI);
    loop_ub = precphi0->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = 0.0;
      b_loop_ub = precphi0->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        r->data[i] += precphi0->data[i + precphi0->size[0] * i1] * phi0->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, precphi0, phi0, r);
  }

  if (center_hat->size[0] != r->size[0]) {
    emlrtSizeEqCheck1DR2012b(center_hat->size[0], r->size[0], &ib_emlrtECI, sp);
  }

  loop_ub = center_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    center_hat->data[i] += r->data[i];
  }

  iter = 0;
  emxInit_creal_T(sp, &eigen, 1, &hj_emlrtRTEI, true);
  emxInit_boolean_T(sp, &test, 1, &ei_emlrtRTEI, true);
  emxInit_real_T(sp, &result, 2, &kj_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &bi_emlrtRTEI, true);
  emxInitMatrix_cell_wrap_1(sp, reshapes, &fe_emlrtRTEI, true);
  do {
    exitg1 = 0;
    st.site = &yg_emlrtRSI;
    i = Y_starY_star->size[0] * Y_starY_star->size[1];
    Y_starY_star->size[0] = PHI_hat->size[0];
    Y_starY_star->size[1] = PHI_hat->size[1];
    emxEnsureCapacity_real_T(&st, Y_starY_star, i, &wd_emlrtRTEI);
    loop_ub = PHI_hat->size[0] * PHI_hat->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_starY_star->data[i] = PHI_hat->data[i];
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, Y_starY_star);
    st.site = &yg_emlrtRSI;
    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, PHI_hat, center_hat, PHI_hat->size[1],
                          center_hat->size[0]);
    if ((PHI_hat->size[1] == 1) || (center_hat->size[0] == 1)) {
      i = r->size[0];
      r->size[0] = PHI_hat->size[0];
      emxEnsureCapacity_real_T(&st, r, i, &xh_emlrtRTEI);
      loop_ub = PHI_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = 0.0;
        b_loop_ub = PHI_hat->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          r->data[i] += PHI_hat->data[i + PHI_hat->size[0] * i1] *
            center_hat->data[i1];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      b_mtimes(&b_st, PHI_hat, center_hat, r);
    }

    st.site = &yg_emlrtRSI;
    b_st.site = &yg_emlrtRSI;
    randn(&b_st, p, b);
    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, Y_starY_star, b, Y_starY_star->size[0], b->
                          size[0]);
    if ((Y_starY_star->size[0] == 1) || (b->size[0] == 1)) {
      i = absolute->size[0];
      absolute->size[0] = Y_starY_star->size[1];
      emxEnsureCapacity_real_T(&st, absolute, i, &yh_emlrtRTEI);
      loop_ub = Y_starY_star->size[1];
      for (i = 0; i < loop_ub; i++) {
        absolute->data[i] = 0.0;
        b_loop_ub = Y_starY_star->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          absolute->data[i] += Y_starY_star->data[i1 + Y_starY_star->size[0] * i]
            * b->data[i1];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      g_mtimes(&b_st, Y_starY_star, b, absolute);
    }

    if (r->size[0] != absolute->size[0]) {
      emlrtSizeEqCheck1DR2012b(r->size[0], absolute->size[0], &jb_emlrtECI, sp);
    }

    i = Y_stary_star->size[0];
    Y_stary_star->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, Y_stary_star, i, &ai_emlrtRTEI);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_stary_star->data[i] = r->data[i] + absolute->data[i];
    }

    st.site = &ah_emlrtRSI;
    b_st.site = &ah_emlrtRSI;
    eye(&b_st, (real_T)p - 1.0, Y_starY_star);
    if (!((real_T)p - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b((real_T)p - 1.0, &u_emlrtDCI, &st);
    }

    b_st.site = &he_emlrtRSI;
    if ((Y_starY_star->size[0] != 0) && (Y_starY_star->size[1] != 0)) {
      n = Y_starY_star->size[0];
    } else if (p - 1 != 0) {
      n = p - 1;
    } else {
      n = muIntScalarMax_sint32(Y_starY_star->size[0], 0);
      if (p - 1 > n) {
        n = p - 1;
      }
    }

    c_st.site = &h_emlrtRSI;
    if ((Y_starY_star->size[0] != n) && ((Y_starY_star->size[0] != 0) &&
         (Y_starY_star->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((p - 1 != n) && (p - 1 != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (n == 0);
    if (empty_non_axis_sizes || ((Y_starY_star->size[0] != 0) &&
         (Y_starY_star->size[1] != 0))) {
      nx = Y_starY_star->size[1];
    } else {
      nx = 0;
    }

    if (empty_non_axis_sizes || (p - 1 != 0)) {
      input_sizes_idx_1 = 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    i = result->size[0] * result->size[1];
    result->size[0] = n;
    result->size[1] = nx + input_sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, result, i, &jc_emlrtRTEI);
    for (i = 0; i < nx; i++) {
      for (i1 = 0; i1 < n; i1++) {
        result->data[i1 + result->size[0] * i] = Y_starY_star->data[i1 + n * i];
      }
    }

    loop_ub = input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < n; i1++) {
        result->data[i1 + result->size[0] * nx] = 0.0;
      }
    }

    st.site = &ah_emlrtRSI;
    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = r->size[0];
    emxEnsureCapacity_real_T(&st, varargin_1, i, &bi_emlrtRTEI);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargin_1->data[i] = r->data[i] + absolute->data[i];
    }

    b_st.site = &he_emlrtRSI;
    if (varargin_1->size[1] != 0) {
      n = Y_stary_star->size[0];
    } else if ((result->size[0] != 0) && (result->size[1] != 0)) {
      n = result->size[1];
    } else {
      if (Y_stary_star->size[0] > 0) {
        n = Y_stary_star->size[0];
      } else {
        n = 0;
      }

      if (result->size[1] > n) {
        n = result->size[1];
      }
    }

    c_st.site = &h_emlrtRSI;
    if ((Y_stary_star->size[0] != n) && (varargin_1->size[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((result->size[1] != n) && ((result->size[0] != 0) && (result->size[1] !=
          0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (n == 0);
    if (empty_non_axis_sizes || (varargin_1->size[1] != 0)) {
      input_sizes_idx_1 = 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = Y_stary_star->size[0];
    emxEnsureCapacity_real_T(&b_st, varargin_1, i, &bi_emlrtRTEI);
    loop_ub = Y_stary_star->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargin_1->data[i] = Y_stary_star->data[i];
    }

    i = reshapes[0].f1->size[0] * reshapes[0].f1->size[1];
    reshapes[0].f1->size[0] = input_sizes_idx_1;
    reshapes[0].f1->size[1] = n;
    emxEnsureCapacity_real_T(&b_st, reshapes[0].f1, i, &qc_emlrtRTEI);
    loop_ub = input_sizes_idx_1 * n;
    for (i = 0; i < loop_ub; i++) {
      reshapes[0].f1->data[i] = varargin_1->data[i];
    }

    if (empty_non_axis_sizes || ((result->size[0] != 0) && (result->size[1] != 0)))
    {
      nx = result->size[0];
    } else {
      nx = 0;
    }

    i = G->size[0] * G->size[1];
    G->size[0] = reshapes[0].f1->size[0] + nx;
    G->size[1] = reshapes[0].f1->size[1];
    emxEnsureCapacity_real_T(&b_st, G, i, &ci_emlrtRTEI);
    loop_ub = reshapes[0].f1->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = reshapes[0].f1->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        G->data[i1 + G->size[0] * i] = reshapes[0].f1->data[i1 + reshapes[0].
          f1->size[0] * i];
      }
    }

    for (i = 0; i < n; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        G->data[(i1 + reshapes[0].f1->size[0]) + G->size[0] * i] = result->
          data[i1 + nx * i];
      }
    }

    st.site = &bh_emlrtRSI;
    eig(&st, G, eigen);
    i = b->size[0];
    b->size[0] = eigen->size[0];
    emxEnsureCapacity_real_T(sp, b, i, &di_emlrtRTEI);
    loop_ub = eigen->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = eigen->data[i].im;
    }

    st.site = &ch_emlrtRSI;
    b_power(&st, b, Y_stary_star);
    st.site = &dh_emlrtRSI;
    d_abs(&st, eigen, r);
    st.site = &dh_emlrtRSI;
    b_power(&st, r, absolute);
    if (absolute->size[0] != Y_stary_star->size[0]) {
      emlrtSizeEqCheck1DR2012b(absolute->size[0], Y_stary_star->size[0],
        &kb_emlrtECI, sp);
    }

    loop_ub = absolute->size[0];
    for (i = 0; i < loop_ub; i++) {
      absolute->data[i] += Y_stary_star->data[i];
    }

    st.site = &eh_emlrtRSI;
    b_sqrt(&st, absolute);
    i = test->size[0];
    test->size[0] = absolute->size[0];
    emxEnsureCapacity_boolean_T(sp, test, i, &ei_emlrtRTEI);
    loop_ub = absolute->size[0];
    for (i = 0; i < loop_ub; i++) {
      test->data[i] = (absolute->data[i] < 1.0);
    }

    st.site = &fh_emlrtRSI;
    b_st.site = &dj_emlrtRSI;
    c_st.site = &uc_emlrtRSI;
    d_st.site = &vc_emlrtRSI;
    if (test->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &ed_emlrtRSI;
    nx = test->size[0];
    f_st.site = &ej_emlrtRSI;
    empty_non_axis_sizes = test->data[0];
    g_st.site = &fj_emlrtRSI;
    if ((2 <= test->size[0]) && (test->size[0] > 2147483646)) {
      h_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (n = 2; n <= nx; n++) {
      c_b = test->data[n - 1];
      empty_non_axis_sizes = (((int32_T)empty_non_axis_sizes <= (int32_T)c_b) &&
        empty_non_axis_sizes);
    }

    if (empty_non_axis_sizes) {
      exitg1 = 1;
    } else {
      iter++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      if (iter > 1000) {
        i = G->size[0] * G->size[1];
        G->size[0] = G0->size[0];
        G->size[1] = G0->size[1];
        emxEnsureCapacity_real_T(sp, G, i, &fi_emlrtRTEI);
        loop_ub = G0->size[0] * G0->size[1];
        for (i = 0; i < loop_ub; i++) {
          G->data[i] = G0->data[i];
        }

        exitg1 = 1;
      }
    }
  } while (exitg1 == 0);

  emxFreeMatrix_cell_wrap_1(reshapes);
  emxFree_real_T(&result);
  emxFree_boolean_T(&test);
  emxFree_creal_T(&eigen);
  st.site = &gh_emlrtRSI;
  kron(&st, G, G, Y_starY_star);
  st.site = &hh_emlrtRSI;
  eye(&st, Y_starY_star->size[0], b_b);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])b_b->size, *(int32_T (*)[2])
    Y_starY_star->size, &lb_emlrtECI, sp);
  st.site = &hh_emlrtRSI;
  i = vec_Sigma->size[0] * vec_Sigma->size[1];
  vec_Sigma->size[0] = b_b->size[0];
  vec_Sigma->size[1] = b_b->size[1];
  emxEnsureCapacity_real_T(&st, vec_Sigma, i, &gi_emlrtRTEI);
  loop_ub = b_b->size[0] * b_b->size[1];
  for (i = 0; i < loop_ub; i++) {
    vec_Sigma->data[i] = b_b->data[i] - Y_starY_star->data[i];
  }

  b_st.site = &hh_emlrtRSI;
  inv(&b_st, vec_Sigma, Y_starY_star);
  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = e1->size[0];
  b_b->size[1] = e1->size[0];
  emxEnsureCapacity_real_T(&st, b_b, i, &hi_emlrtRTEI);
  loop_ub = e1->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = e1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b->data[i1 + b_b->size[0] * i] = e1->data[i1] * e1->data[i];
    }
  }

  emxFree_int8_T(&e1);
  b_st.site = &hh_emlrtRSI;
  vec(&b_st, b_b);
  b_st.site = &nd_emlrtRSI;
  c_dynamic_size_checks(&b_st, Y_starY_star, b_b, Y_starY_star->size[1],
                        b_b->size[0]);
  if ((Y_starY_star->size[1] == 1) || (b_b->size[0] == 1)) {
    i = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = Y_starY_star->size[0];
    vec_Sigma->size[1] = b_b->size[1];
    emxEnsureCapacity_real_T(&st, vec_Sigma, i, &ii_emlrtRTEI);
    loop_ub = Y_starY_star->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = b_b->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        vec_Sigma->data[i + vec_Sigma->size[0] * i1] = 0.0;
        nx = Y_starY_star->size[1];
        for (i2 = 0; i2 < nx; i2++) {
          vec_Sigma->data[i + vec_Sigma->size[0] * i1] += Y_starY_star->data[i +
            Y_starY_star->size[0] * i2] * b_b->data[i2 + b_b->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    c_mtimes(&b_st, Y_starY_star, b_b, vec_Sigma);
  }

  emxFree_real_T(&b_b);
  st.site = &ih_emlrtRSI;
  nx = vec_Sigma->size[0] * vec_Sigma->size[1];
  b_st.site = &qf_emlrtRSI;
  c_st.site = &pf_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  c_st.site = &pf_emlrtRSI;
  assertValidSizeArg(&c_st, phi0->size[0]);
  n = vec_Sigma->size[0];
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

  b_center_hat[0] = phi0->size[0];
  b_center_hat[1] = phi0->size[0];
  b_vec_Sigma = *vec_Sigma;
  c_center_hat[0] = b_center_hat[0];
  c_center_hat[1] = b_center_hat[1];
  b_vec_Sigma.size = &c_center_hat[0];
  b_vec_Sigma.numDimensions = 2;
  st.site = &jh_emlrtRSI;
  inv(&st, &b_vec_Sigma, Y_starY_star);
  rss = 0.0;
  i = X->size[0] - phi0->size[0];
  emlrtForLoopVectorCheckR2012b((real_T)phi0->size[0] + 1.0, 1.0, X->size[0],
    mxDOUBLE_CLASS, i, &ab_emlrtRTEI, sp);
  for (iter = 0; iter < i; iter++) {
    t = ((uint32_T)p + iter) + 1U;
    i1 = absolute->size[0];
    i2 = (int32_T)-((0.0 - (real_T)p) - -1.0) + 1;
    absolute->size[0] = i2;
    emxEnsureCapacity_real_T(sp, absolute, i1, &ji_emlrtRTEI);
    nx = (int32_T)-((0.0 - (real_T)p) - -1.0);
    for (i1 = 0; i1 <= nx; i1++) {
      n = (int32_T)((real_T)t + (-1.0 - (real_T)i1));
      if ((n < 1) || (n > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(n, 1, y_star->size[0], &sd_emlrtBCI, sp);
      }

      absolute->data[i1] = y_star->data[n - 1];
    }

    if (1 > G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &dd_emlrtBCI, sp);
    }

    i1 = Y_stary_star->size[0];
    Y_stary_star->size[0] = i2;
    emxEnsureCapacity_real_T(sp, Y_stary_star, i1, &li_emlrtRTEI);
    for (i1 = 0; i1 <= nx; i1++) {
      n = (int32_T)((real_T)t + (-1.0 - (real_T)i1));
      if ((n < 1) || (n > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(n, 1, y_star->size[0], &td_emlrtBCI, sp);
      }

      Y_stary_star->data[i1] = y_star->data[n - 1];
    }

    if (1 > G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &ed_emlrtBCI, sp);
    }

    st.site = &kh_emlrtRSI;
    loop_ub = G->size[1];
    i1 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = G->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, i1, &ni_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargin_1->data[i1] = G->data[G->size[0] * i1];
    }

    b_st.site = &nd_emlrtRSI;
    f_dynamic_size_checks(&b_st, absolute, varargin_1, (int32_T)-((0.0 - (real_T)
      p) - -1.0) + 1, G->size[1]);
    guard1 = false;
    if (i2 == 1) {
      guard1 = true;
    } else {
      loop_ub = G->size[1];
      if (G->size[1] == 1) {
        guard1 = true;
      } else {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = G->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &ni_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          varargin_1->data[i1] = G->data[G->size[0] * i1];
        }

        b_st.site = &md_emlrtRSI;
        deno1 = h_mtimes(&b_st, absolute, varargin_1);
      }
    }

    if (guard1) {
      deno1 = 0.0;
      loop_ub = absolute->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        deno1 += absolute->data[i1] * G->data[G->size[0] * i1];
      }
    }

    st.site = &kh_emlrtRSI;
    loop_ub = G->size[1];
    i1 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = G->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, i1, &oi_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargin_1->data[i1] = G->data[G->size[0] * i1];
    }

    b_st.site = &nd_emlrtRSI;
    f_dynamic_size_checks(&b_st, Y_stary_star, varargin_1, (int32_T)-((0.0 -
      (real_T)p) - -1.0) + 1, G->size[1]);
    guard1 = false;
    if (i2 == 1) {
      guard1 = true;
    } else {
      loop_ub = G->size[1];
      if (G->size[1] == 1) {
        guard1 = true;
      } else {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = G->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &oi_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          varargin_1->data[i1] = G->data[G->size[0] * i1];
        }

        b_st.site = &md_emlrtRSI;
        numer2 = h_mtimes(&b_st, Y_stary_star, varargin_1);
      }
    }

    if (guard1) {
      numer2 = 0.0;
      loop_ub = Y_stary_star->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        numer2 += Y_stary_star->data[i1] * G->data[G->size[0] * i1];
      }
    }

    if (((int32_T)t < 1) || ((int32_T)t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)t, 1, y_star->size[0], &ud_emlrtBCI,
        sp);
    }

    if (((int32_T)t < 1) || ((int32_T)t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)t, 1, y_star->size[0], &vd_emlrtBCI,
        sp);
    }

    nx = (int32_T)t - 1;
    rss += (y_star->data[nx] - deno1) * (y_star->data[nx] - numer2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &lh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  if ((X_p->size[1] == 1) || (beta->size[0] == 1)) {
    i = r->size[0];
    r->size[0] = X_p->size[0];
    emxEnsureCapacity_real_T(&st, r, i, &ki_emlrtRTEI);
    loop_ub = X_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = 0.0;
      b_loop_ub = X_p->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        r->data[i] += X_p->data[i + X_p->size[0] * i1] * beta->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, X_p, beta, r);
  }

  if (Y_p->size[0] != r->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], r->size[0], &mb_emlrtECI, sp);
  }

  st.site = &lh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  if ((X_p->size[1] == 1) || (beta->size[0] == 1)) {
    i = b->size[0];
    b->size[0] = X_p->size[0];
    emxEnsureCapacity_real_T(&st, b, i, &mi_emlrtRTEI);
    loop_ub = X_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = 0.0;
      b_loop_ub = X_p->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b->data[i] += X_p->data[i + X_p->size[0] * i1] * beta->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, X_p, beta, b);
  }

  if (Y_p->size[0] != b->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], b->size[0], &nb_emlrtECI, sp);
  }

  if (1 > G->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &fd_emlrtBCI, sp);
  }

  deno1 = 0.5 * sig2_inv;
  i = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = Y_p->size[0];
  emxEnsureCapacity_real_T(sp, varargin_1, i, &pg_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1->data[i] = deno1 * (Y_p->data[i] - r->data[i]);
  }

  emxInit_real_T(sp, &y, 2, &lj_emlrtRTEI, true);
  st.site = &lh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  g_dynamic_size_checks(&b_st, varargin_1, Y_starY_star, varargin_1->size[1],
                        Y_starY_star->size[0]);
  if ((varargin_1->size[1] == 1) || (Y_starY_star->size[0] == 1)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = Y_starY_star->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &vd_emlrtRTEI);
    loop_ub = Y_starY_star->size[1];
    for (i = 0; i < loop_ub; i++) {
      y->data[i] = 0.0;
      b_loop_ub = varargin_1->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        y->data[i] += varargin_1->data[i1] * Y_starY_star->data[i1 +
          Y_starY_star->size[0] * i];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    i_mtimes(&b_st, varargin_1, Y_starY_star, y);
  }

  emxFree_real_T(&Y_starY_star);
  st.site = &lh_emlrtRSI;
  i = b->size[0];
  b->size[0] = Y_p->size[0];
  emxEnsureCapacity_real_T(&st, b, i, &pi_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = Y_p->data[i] - b->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  dynamic_size_checks(&b_st, y, b, y->size[1], b->size[0]);
  if ((y->size[1] == 1) || (b->size[0] == 1)) {
    deno1 = 0.0;
    loop_ub = y->size[1];
    for (i = 0; i < loop_ub; i++) {
      deno1 += y->data[i] * b->data[i];
    }
  } else {
    b_st.site = &md_emlrtRSI;
    deno1 = mtimes(y, b);
  }

  b_center_hat[0] = phi0->size[0];
  b_center_hat[1] = phi0->size[0];
  b_vec_Sigma = *vec_Sigma;
  d_center_hat[0] = b_center_hat[0];
  d_center_hat[1] = b_center_hat[1];
  b_vec_Sigma.size = &d_center_hat[0];
  b_vec_Sigma.numDimensions = 2;
  st.site = &lh_emlrtRSI;
  d = det(&st, &b_vec_Sigma);
  st.site = &lh_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  d = muDoubleScalarLog(d);
  loop_ub = G->size[1];
  i = b->size[0];
  b->size[0] = G->size[1];
  emxEnsureCapacity_real_T(sp, b, i, &qi_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = G->data[G->size[0] * i];
  }

  st.site = &mh_emlrtRSI;
  numer1 = ((-0.5 * d - deno1) - 0.5 * sig2_inv * rss) + lnpdfmvn(&st, b, phi0,
    PHI0);
  rss = 0.0;
  i = X->size[0] - phi0->size[0];
  emlrtForLoopVectorCheckR2012b((real_T)phi0->size[0] + 1.0, 1.0, X->size[0],
    mxDOUBLE_CLASS, i, &bb_emlrtRTEI, sp);
  for (iter = 0; iter < i; iter++) {
    t = ((uint32_T)p + iter) + 1U;
    i1 = absolute->size[0];
    i2 = (int32_T)-((0.0 - (real_T)p) - -1.0) + 1;
    absolute->size[0] = i2;
    emxEnsureCapacity_real_T(sp, absolute, i1, &ri_emlrtRTEI);
    nx = (int32_T)-((0.0 - (real_T)p) - -1.0);
    for (i1 = 0; i1 <= nx; i1++) {
      n = (int32_T)((real_T)t + (-1.0 - (real_T)i1));
      if ((n < 1) || (n > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(n, 1, y_star->size[0], &wd_emlrtBCI, sp);
      }

      absolute->data[i1] = y_star->data[n - 1];
    }

    if (1 > G0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &gd_emlrtBCI, sp);
    }

    i1 = Y_stary_star->size[0];
    Y_stary_star->size[0] = i2;
    emxEnsureCapacity_real_T(sp, Y_stary_star, i1, &ti_emlrtRTEI);
    for (i1 = 0; i1 <= nx; i1++) {
      n = (int32_T)((real_T)t + (-1.0 - (real_T)i1));
      if ((n < 1) || (n > y_star->size[0])) {
        emlrtDynamicBoundsCheckR2012b(n, 1, y_star->size[0], &xd_emlrtBCI, sp);
      }

      Y_stary_star->data[i1] = y_star->data[n - 1];
    }

    if (1 > G0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &hd_emlrtBCI, sp);
    }

    st.site = &nh_emlrtRSI;
    loop_ub = G0->size[1];
    i1 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, i1, &vi_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargin_1->data[i1] = G0->data[G0->size[0] * i1];
    }

    b_st.site = &nd_emlrtRSI;
    f_dynamic_size_checks(&b_st, absolute, varargin_1, (int32_T)-((0.0 - (real_T)
      p) - -1.0) + 1, G0->size[1]);
    guard1 = false;
    if (i2 == 1) {
      guard1 = true;
    } else {
      loop_ub = G0->size[1];
      if (G0->size[1] == 1) {
        guard1 = true;
      } else {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = G0->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &vi_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          varargin_1->data[i1] = G0->data[G0->size[0] * i1];
        }

        b_st.site = &md_emlrtRSI;
        deno1 = h_mtimes(&b_st, absolute, varargin_1);
      }
    }

    if (guard1) {
      deno1 = 0.0;
      loop_ub = absolute->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        deno1 += absolute->data[i1] * G0->data[G0->size[0] * i1];
      }
    }

    st.site = &nh_emlrtRSI;
    loop_ub = G0->size[1];
    i1 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, i1, &wi_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargin_1->data[i1] = G0->data[G0->size[0] * i1];
    }

    b_st.site = &nd_emlrtRSI;
    f_dynamic_size_checks(&b_st, Y_stary_star, varargin_1, (int32_T)-((0.0 -
      (real_T)p) - -1.0) + 1, G0->size[1]);
    guard1 = false;
    if (i2 == 1) {
      guard1 = true;
    } else {
      loop_ub = G0->size[1];
      if (G0->size[1] == 1) {
        guard1 = true;
      } else {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = G0->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &wi_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          varargin_1->data[i1] = G0->data[G0->size[0] * i1];
        }

        b_st.site = &md_emlrtRSI;
        numer2 = h_mtimes(&b_st, Y_stary_star, varargin_1);
      }
    }

    if (guard1) {
      numer2 = 0.0;
      loop_ub = Y_stary_star->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        numer2 += Y_stary_star->data[i1] * G0->data[G0->size[0] * i1];
      }
    }

    if (((int32_T)t < 1) || ((int32_T)t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)t, 1, y_star->size[0], &yd_emlrtBCI,
        sp);
    }

    if (((int32_T)t < 1) || ((int32_T)t > y_star->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)t, 1, y_star->size[0], &ae_emlrtBCI,
        sp);
    }

    nx = (int32_T)t - 1;
    rss += (y_star->data[nx] - deno1) * (y_star->data[nx] - numer2);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&absolute);
  emxFree_real_T(&y_star);
  st.site = &oh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  if ((X_p->size[1] == 1) || (beta->size[0] == 1)) {
    i = r->size[0];
    r->size[0] = X_p->size[0];
    emxEnsureCapacity_real_T(&st, r, i, &si_emlrtRTEI);
    loop_ub = X_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = 0.0;
      b_loop_ub = X_p->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        r->data[i] += X_p->data[i + X_p->size[0] * i1] * beta->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, X_p, beta, r);
  }

  if (Y_p->size[0] != r->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], r->size[0], &ob_emlrtECI, sp);
  }

  st.site = &oh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  if ((X_p->size[1] == 1) || (beta->size[0] == 1)) {
    i = b->size[0];
    b->size[0] = X_p->size[0];
    emxEnsureCapacity_real_T(&st, b, i, &ui_emlrtRTEI);
    loop_ub = X_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = 0.0;
      b_loop_ub = X_p->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b->data[i] += X_p->data[i + X_p->size[0] * i1] * beta->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, X_p, beta, b);
  }

  if (Y_p->size[0] != b->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], b->size[0], &pb_emlrtECI, sp);
  }

  if (1 > G0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &id_emlrtBCI, sp);
  }

  deno1 = 0.5 * sig2_inv;
  i = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = Y_p->size[0];
  emxEnsureCapacity_real_T(sp, varargin_1, i, &pg_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1->data[i] = deno1 * (Y_p->data[i] - r->data[i]);
  }

  emxFree_real_T(&r);
  st.site = &oh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  g_dynamic_size_checks(&b_st, varargin_1, inv_Sigma0, varargin_1->size[1],
                        inv_Sigma0->size[0]);
  if ((varargin_1->size[1] == 1) || (inv_Sigma0->size[0] == 1)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = inv_Sigma0->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &vd_emlrtRTEI);
    loop_ub = inv_Sigma0->size[1];
    for (i = 0; i < loop_ub; i++) {
      y->data[i] = 0.0;
      b_loop_ub = varargin_1->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        y->data[i] += varargin_1->data[i1] * inv_Sigma0->data[i1 +
          inv_Sigma0->size[0] * i];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    i_mtimes(&b_st, varargin_1, inv_Sigma0, y);
  }

  emxFree_real_T(&varargin_1);
  st.site = &oh_emlrtRSI;
  i = b->size[0];
  b->size[0] = Y_p->size[0];
  emxEnsureCapacity_real_T(&st, b, i, &xi_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = Y_p->data[i] - b->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  dynamic_size_checks(&b_st, y, b, y->size[1], b->size[0]);
  if ((y->size[1] == 1) || (b->size[0] == 1)) {
    deno1 = 0.0;
    loop_ub = y->size[1];
    for (i = 0; i < loop_ub; i++) {
      deno1 += y->data[i] * b->data[i];
    }
  } else {
    b_st.site = &md_emlrtRSI;
    deno1 = mtimes(y, b);
  }

  emxFree_real_T(&y);
  st.site = &oh_emlrtRSI;
  d = det(&st, Sigma0);
  st.site = &oh_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  d = muDoubleScalarLog(d);
  loop_ub = G0->size[1];
  i = b->size[0];
  b->size[0] = G0->size[1];
  emxEnsureCapacity_real_T(sp, b, i, &yi_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = G0->data[G0->size[0] * i];
  }

  st.site = &ph_emlrtRSI;
  deno1 = ((-0.5 * d - deno1) - 0.5 * sig2_inv * rss) + lnpdfmvn(&st, b, phi0,
    PHI0);
  i = vec_Sigma->size[0] * vec_Sigma->size[1];
  vec_Sigma->size[0] = PHI_hat->size[1];
  vec_Sigma->size[1] = PHI_hat->size[0];
  emxEnsureCapacity_real_T(sp, vec_Sigma, i, &aj_emlrtRTEI);
  loop_ub = PHI_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = PHI_hat->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      vec_Sigma->data[i1 + vec_Sigma->size[0] * i] = PHI_hat->data[i +
        PHI_hat->size[0] * i1];
    }
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])PHI_hat->size, *(int32_T (*)[2])
    vec_Sigma->size, &qb_emlrtECI, sp);
  i = vec_Sigma->size[0] * vec_Sigma->size[1];
  vec_Sigma->size[0] = PHI_hat->size[0];
  vec_Sigma->size[1] = PHI_hat->size[1];
  emxEnsureCapacity_real_T(sp, vec_Sigma, i, &bj_emlrtRTEI);
  loop_ub = PHI_hat->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = PHI_hat->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      vec_Sigma->data[i1 + vec_Sigma->size[0] * i] = 0.5 * (PHI_hat->data[i1 +
        PHI_hat->size[0] * i] + PHI_hat->data[i + PHI_hat->size[0] * i1]);
    }
  }

  i = PHI_hat->size[0] * PHI_hat->size[1];
  PHI_hat->size[0] = vec_Sigma->size[0];
  PHI_hat->size[1] = vec_Sigma->size[1];
  emxEnsureCapacity_real_T(sp, PHI_hat, i, &cj_emlrtRTEI);
  loop_ub = vec_Sigma->size[0] * vec_Sigma->size[1];
  for (i = 0; i < loop_ub; i++) {
    PHI_hat->data[i] = vec_Sigma->data[i];
  }

  emxFree_real_T(&vec_Sigma);
  if (1 > G0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G0->size[0], &jd_emlrtBCI, sp);
  }

  st.site = &qh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, PHI_hat, center_hat, PHI_hat->size[1],
                        center_hat->size[0]);
  if ((PHI_hat->size[1] == 1) || (center_hat->size[0] == 1)) {
    i = Y_stary_star->size[0];
    Y_stary_star->size[0] = PHI_hat->size[0];
    emxEnsureCapacity_real_T(&st, Y_stary_star, i, &vd_emlrtRTEI);
    loop_ub = PHI_hat->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_stary_star->data[i] = 0.0;
      b_loop_ub = PHI_hat->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Y_stary_star->data[i] += PHI_hat->data[i + PHI_hat->size[0] * i1] *
          center_hat->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, PHI_hat, center_hat, Y_stary_star);
  }

  loop_ub = G0->size[1];
  i = b->size[0];
  b->size[0] = G0->size[1];
  emxEnsureCapacity_real_T(sp, b, i, &dj_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = G0->data[G0->size[0] * i];
  }

  st.site = &qh_emlrtRSI;
  numer2 = lnpdfmvn(&st, b, Y_stary_star, PHI_hat);
  if (1 > G->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &kd_emlrtBCI, sp);
  }

  st.site = &rh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, PHI_hat, center_hat, PHI_hat->size[1],
                        center_hat->size[0]);
  if ((PHI_hat->size[1] == 1) || (center_hat->size[0] == 1)) {
    i = Y_stary_star->size[0];
    Y_stary_star->size[0] = PHI_hat->size[0];
    emxEnsureCapacity_real_T(&st, Y_stary_star, i, &vd_emlrtRTEI);
    loop_ub = PHI_hat->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_stary_star->data[i] = 0.0;
      b_loop_ub = PHI_hat->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Y_stary_star->data[i] += PHI_hat->data[i + PHI_hat->size[0] * i1] *
          center_hat->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    b_mtimes(&b_st, PHI_hat, center_hat, Y_stary_star);
  }

  emxFree_real_T(&center_hat);
  loop_ub = G->size[1];
  i = b->size[0];
  b->size[0] = G->size[1];
  emxEnsureCapacity_real_T(sp, b, i, &ej_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = G->data[G->size[0] * i];
  }

  st.site = &rh_emlrtRSI;
  rss = lnpdfmvn(&st, b, Y_stary_star, PHI_hat);
  st.site = &sh_emlrtRSI;
  d = b_rand();
  st.site = &sh_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  d = muDoubleScalarLog(d);
  emxFree_real_T(&b);
  emxFree_real_T(&PHI_hat);
  emxFree_real_T(&Y_stary_star);
  if (!(d < muDoubleScalarMin(((numer1 + numer2) - deno1) - rss, 0.0))) {
    i = G->size[0] * G->size[1];
    G->size[0] = G0->size[0];
    G->size[1] = G0->size[1];
    emxEnsureCapacity_real_T(sp, G, i, &fj_emlrtRTEI);
    loop_ub = G0->size[0] * G0->size[1];
    for (i = 0; i < loop_ub; i++) {
      G->data[i] = G0->data[i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void Gen_c(const emlrtStack *sp, const emxArray_real_T *X_p, const
           emxArray_real_T *Y_p, const emxArray_real_T *X_hat, const
           emxArray_real_T *Y_hat, const emxArray_real_T *inv_Sigma, const
           emxArray_real_T *b0, const emxArray_real_T *precb0, real_T sig2_inv,
           real_T p, real_T T, emxArray_real_T *beta)
{
  emxArray_real_T *X_hatX_hat;
  int32_T i;
  int32_T loop_ub;
  emxArray_real_T *X_hatY_hat;
  emxArray_real_T *B1;
  emxArray_real_T *r;
  emxArray_real_T *a;
  emxArray_real_T *b;
  int32_T b_i;
  int32_T c_i;
  emxArray_real_T *y;
  int32_T i1;
  emxArray_real_T *b_b;
  int32_T b_loop_ub;
  int32_T i2;
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *A;
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
  emxInit_real_T(sp, &X_hatX_hat, 2, &mg_emlrtRTEI, true);

  /*  number of columns */
  i = X_hatX_hat->size[0] * X_hatX_hat->size[1];
  X_hatX_hat->size[0] = X_hat->size[1];
  X_hatX_hat->size[1] = X_hat->size[1];
  emxEnsureCapacity_real_T(sp, X_hatX_hat, i, &mg_emlrtRTEI);
  loop_ub = X_hat->size[1] * X_hat->size[1];
  for (i = 0; i < loop_ub; i++) {
    X_hatX_hat->data[i] = 0.0;
  }

  emxInit_real_T(sp, &X_hatY_hat, 1, &ng_emlrtRTEI, true);
  i = X_hatY_hat->size[0];
  X_hatY_hat->size[0] = X_hat->size[1];
  emxEnsureCapacity_real_T(sp, X_hatY_hat, i, &ng_emlrtRTEI);
  loop_ub = X_hat->size[1];
  for (i = 0; i < loop_ub; i++) {
    X_hatY_hat->data[i] = 0.0;
  }

  i = (int32_T)(T + (1.0 - (p + 1.0)));
  emlrtForLoopVectorCheckR2012b(p + 1.0, 1.0, T, mxDOUBLE_CLASS, i, &u_emlrtRTEI,
    sp);
  emxInit_real_T(sp, &B1, 2, &ah_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 1, &ch_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &og_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &rg_emlrtRTEI, true);
  for (b_i = 0; b_i < i; b_i++) {
    loop_ub = X_hat->size[1];
    c_i = (int32_T)(((p + 1.0) + (real_T)b_i) - p);
    if ((c_i < 1) || (c_i > X_hat->size[0])) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, X_hat->size[0], &sc_emlrtBCI, sp);
    }

    i1 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X_hat->size[1];
    emxEnsureCapacity_real_T(sp, a, i1, &og_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      a->data[i1] = X_hat->data[(c_i + X_hat->size[0] * i1) - 1];
    }

    loop_ub = X_hat->size[1];
    if (c_i > X_hat->size[0]) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, X_hat->size[0], &tc_emlrtBCI, sp);
    }

    i1 = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = X_hat->size[1];
    emxEnsureCapacity_real_T(sp, b, i1, &rg_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b->data[i1] = X_hat->data[(c_i + X_hat->size[0] * i1) - 1];
    }

    i1 = B1->size[0] * B1->size[1];
    B1->size[0] = a->size[1];
    loop_ub = b->size[1];
    B1->size[1] = b->size[1];
    emxEnsureCapacity_real_T(sp, B1, i1, &og_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = a->size[1];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        B1->data[i2 + B1->size[0] * i1] = a->data[i2] * b->data[i1];
      }
    }

    emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])X_hatX_hat->size, *(int32_T (*)[2])
      B1->size, &u_emlrtECI, sp);
    loop_ub = X_hatX_hat->size[0] * X_hatX_hat->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      X_hatX_hat->data[i1] += B1->data[i1];
    }

    loop_ub = X_hat->size[1];
    if (c_i > X_hat->size[0]) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, X_hat->size[0], &uc_emlrtBCI, sp);
    }

    i1 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X_hat->size[1];
    emxEnsureCapacity_real_T(sp, a, i1, &tg_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      a->data[i1] = X_hat->data[(c_i + X_hat->size[0] * i1) - 1];
    }

    if (c_i > Y_hat->size[0]) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, Y_hat->size[0], &vc_emlrtBCI, sp);
    }

    alpha1 = Y_hat->data[c_i - 1];
    loop_ub = a->size[1];
    i1 = r->size[0];
    r->size[0] = a->size[1];
    emxEnsureCapacity_real_T(sp, r, i1, &tg_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r->data[i1] = a->data[i1] * alpha1;
    }

    loop_ub = X_hatY_hat->size[0];
    if (X_hatY_hat->size[0] != r->size[0]) {
      emlrtSizeEqCheck1DR2012b(X_hatY_hat->size[0], r->size[0], &v_emlrtECI, sp);
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      X_hatY_hat->data[i1] += r->data[i1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b);
  emxFree_real_T(&a);
  emxInit_real_T(sp, &y, 2, &sg_emlrtRTEI, true);
  st.site = &tf_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  c_dynamic_size_checks(&b_st, X_p, inv_Sigma, X_p->size[0], inv_Sigma->size[0]);
  if ((X_p->size[0] == 1) || (inv_Sigma->size[0] == 1)) {
    i = y->size[0] * y->size[1];
    y->size[0] = X_p->size[1];
    y->size[1] = inv_Sigma->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &pg_emlrtRTEI);
    loop_ub = X_p->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = inv_Sigma->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        y->data[i + y->size[0] * i1] = 0.0;
        b_i = X_p->size[0];
        for (i2 = 0; i2 < b_i; i2++) {
          y->data[i + y->size[0] * i1] += X_p->data[i2 + X_p->size[0] * i] *
            inv_Sigma->data[i2 + inv_Sigma->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    f_mtimes(&b_st, X_p, inv_Sigma, y);
  }

  emxInit_real_T(&st, &b_b, 2, &qg_emlrtRTEI, true);
  st.site = &tf_emlrtRSI;
  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = X_p->size[0];
  b_b->size[1] = X_p->size[1];
  emxEnsureCapacity_real_T(&st, b_b, i, &qg_emlrtRTEI);
  loop_ub = X_p->size[0] * X_p->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = X_p->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  c_dynamic_size_checks(&b_st, y, X_p, y->size[1], X_p->size[0]);
  if ((y->size[1] == 1) || (X_p->size[0] == 1)) {
    i = B1->size[0] * B1->size[1];
    B1->size[0] = y->size[0];
    B1->size[1] = X_p->size[1];
    emxEnsureCapacity_real_T(&st, B1, i, &sg_emlrtRTEI);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = X_p->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        B1->data[i + B1->size[0] * i1] = 0.0;
        b_i = y->size[1];
        for (i2 = 0; i2 < b_i; i2++) {
          B1->data[i + B1->size[0] * i1] += y->data[i + y->size[0] * i2] *
            X_p->data[i2 + X_p->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((y->size[0] == 0) || (y->size[1] == 0) || (X_p->size[0] == 0) ||
        (X_p->size[1] == 0)) {
      i = B1->size[0] * B1->size[1];
      B1->size[0] = y->size[0];
      B1->size[1] = X_p->size[1];
      emxEnsureCapacity_real_T(&b_st, B1, i, &sg_emlrtRTEI);
      loop_ub = y->size[0] * X_p->size[1];
      for (i = 0; i < loop_ub; i++) {
        B1->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)y->size[0];
      n_t = (ptrdiff_t)X_p->size[1];
      k_t = (ptrdiff_t)y->size[1];
      lda_t = (ptrdiff_t)y->size[0];
      ldb_t = (ptrdiff_t)X_p->size[0];
      ldc_t = (ptrdiff_t)y->size[0];
      i = B1->size[0] * B1->size[1];
      B1->size[0] = y->size[0];
      B1->size[1] = X_p->size[1];
      emxEnsureCapacity_real_T(&c_st, B1, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y->data[0], &lda_t,
            &b_b->data[0], &ldb_t, &beta1, &B1->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b_b);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])B1->size, *(int32_T (*)[2])
    X_hatX_hat->size, &w_emlrtECI, sp);
  loop_ub = B1->size[0] * B1->size[1];
  for (i = 0; i < loop_ub; i++) {
    B1->data[i] = sig2_inv * (B1->data[i] + X_hatX_hat->data[i]);
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])B1->size, *(int32_T (*)[2])
    precb0->size, &x_emlrtECI, sp);
  i = y->size[0] * y->size[1];
  y->size[0] = B1->size[0];
  y->size[1] = B1->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &ug_emlrtRTEI);
  loop_ub = B1->size[0] * B1->size[1];
  for (i = 0; i < loop_ub; i++) {
    y->data[i] = B1->data[i] + precb0->data[i];
  }

  st.site = &uf_emlrtRSI;
  inv(&st, y, B1);
  st.site = &vf_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  c_dynamic_size_checks(&b_st, X_p, inv_Sigma, X_p->size[0], inv_Sigma->size[0]);
  if ((X_p->size[0] == 1) || (inv_Sigma->size[0] == 1)) {
    i = y->size[0] * y->size[1];
    y->size[0] = X_p->size[1];
    y->size[1] = inv_Sigma->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &pg_emlrtRTEI);
    loop_ub = X_p->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = inv_Sigma->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        y->data[i + y->size[0] * i1] = 0.0;
        b_i = X_p->size[0];
        for (i2 = 0; i2 < b_i; i2++) {
          y->data[i + y->size[0] * i1] += X_p->data[i2 + X_p->size[0] * i] *
            inv_Sigma->data[i2 + inv_Sigma->size[0] * i1];
        }
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    f_mtimes(&b_st, X_p, inv_Sigma, y);
  }

  st.site = &vf_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, y, Y_p, y->size[1], Y_p->size[0]);
  emxInit_real_T(&st, &A, 1, &bh_emlrtRTEI, true);
  if ((y->size[1] == 1) || (Y_p->size[0] == 1)) {
    i = A->size[0];
    A->size[0] = y->size[0];
    emxEnsureCapacity_real_T(&st, A, i, &vg_emlrtRTEI);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      A->data[i] = 0.0;
      b_loop_ub = y->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        A->data[i] += y->data[i + y->size[0] * i1] * Y_p->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((y->size[0] == 0) || (y->size[1] == 0) || (Y_p->size[0] == 0)) {
      i = A->size[0];
      A->size[0] = y->size[0];
      emxEnsureCapacity_real_T(&b_st, A, i, &vg_emlrtRTEI);
      loop_ub = y->size[0];
      for (i = 0; i < loop_ub; i++) {
        A->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)y->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)y->size[1];
      lda_t = (ptrdiff_t)y->size[0];
      ldb_t = (ptrdiff_t)Y_p->size[0];
      ldc_t = (ptrdiff_t)y->size[0];
      i = A->size[0];
      A->size[0] = y->size[0];
      emxEnsureCapacity_real_T(&c_st, A, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y->data[0], &lda_t,
            &Y_p->data[0], &ldb_t, &beta1, &A->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&y);
  if (A->size[0] != X_hatY_hat->size[0]) {
    emlrtSizeEqCheck1DR2012b(A->size[0], X_hatY_hat->size[0], &y_emlrtECI, sp);
  }

  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    A->data[i] = sig2_inv * (A->data[i] + X_hatY_hat->data[i]);
  }

  st.site = &vf_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, precb0, b0, precb0->size[1], b0->size[0]);
  if ((precb0->size[1] == 1) || (b0->size[0] == 1)) {
    i = r->size[0];
    r->size[0] = precb0->size[0];
    emxEnsureCapacity_real_T(&st, r, i, &wg_emlrtRTEI);
    loop_ub = precb0->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = 0.0;
      b_loop_ub = precb0->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        r->data[i] += precb0->data[i + precb0->size[0] * i1] * b0->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((precb0->size[0] == 0) || (precb0->size[1] == 0) || (b0->size[0] == 0))
    {
      i = r->size[0];
      r->size[0] = precb0->size[0];
      emxEnsureCapacity_real_T(&b_st, r, i, &wg_emlrtRTEI);
      loop_ub = precb0->size[0];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)precb0->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)precb0->size[1];
      lda_t = (ptrdiff_t)precb0->size[0];
      ldb_t = (ptrdiff_t)b0->size[0];
      ldc_t = (ptrdiff_t)precb0->size[0];
      i = r->size[0];
      r->size[0] = precb0->size[0];
      emxEnsureCapacity_real_T(&c_st, r, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &precb0->data[0],
            &lda_t, &b0->data[0], &ldb_t, &beta1, &r->data[0], &ldc_t);
    }
  }

  if (A->size[0] != r->size[0]) {
    emlrtSizeEqCheck1DR2012b(A->size[0], r->size[0], &ab_emlrtECI, sp);
  }

  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    A->data[i] += r->data[i];
  }

  st.site = &wf_emlrtRSI;
  i = X_hatX_hat->size[0] * X_hatX_hat->size[1];
  X_hatX_hat->size[0] = B1->size[0];
  X_hatX_hat->size[1] = B1->size[1];
  emxEnsureCapacity_real_T(&st, X_hatX_hat, i, &wd_emlrtRTEI);
  loop_ub = B1->size[0] * B1->size[1];
  for (i = 0; i < loop_ub; i++) {
    X_hatX_hat->data[i] = B1->data[i];
  }

  b_st.site = &xf_emlrtRSI;
  cholesky(&b_st, X_hatX_hat);
  st.site = &wf_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, B1, A, B1->size[1], A->size[0]);
  if ((B1->size[1] == 1) || (A->size[0] == 1)) {
    i = beta->size[0];
    beta->size[0] = B1->size[0];
    emxEnsureCapacity_real_T(&st, beta, i, &xg_emlrtRTEI);
    loop_ub = B1->size[0];
    for (i = 0; i < loop_ub; i++) {
      beta->data[i] = 0.0;
      b_loop_ub = B1->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        beta->data[i] += B1->data[i + B1->size[0] * i1] * A->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((B1->size[0] == 0) || (B1->size[1] == 0) || (A->size[0] == 0)) {
      i = beta->size[0];
      beta->size[0] = B1->size[0];
      emxEnsureCapacity_real_T(&b_st, beta, i, &xg_emlrtRTEI);
      loop_ub = B1->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)B1->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)B1->size[1];
      lda_t = (ptrdiff_t)B1->size[0];
      ldb_t = (ptrdiff_t)A->size[0];
      ldc_t = (ptrdiff_t)B1->size[0];
      i = beta->size[0];
      beta->size[0] = B1->size[0];
      emxEnsureCapacity_real_T(&c_st, beta, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &B1->data[0], &lda_t,
            &A->data[0], &ldb_t, &beta1, &beta->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&A);
  emxFree_real_T(&B1);
  st.site = &wf_emlrtRSI;

  /*  number of columns */
  b_st.site = &wf_emlrtRSI;
  randn(&b_st, X_p->size[1], X_hatY_hat);
  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_hatX_hat, X_hatY_hat, X_hatX_hat->size[0],
                        X_hatY_hat->size[0]);
  if ((X_hatX_hat->size[0] == 1) || (X_hatY_hat->size[0] == 1)) {
    i = r->size[0];
    r->size[0] = X_hatX_hat->size[1];
    emxEnsureCapacity_real_T(&st, r, i, &yg_emlrtRTEI);
    loop_ub = X_hatX_hat->size[1];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = 0.0;
      b_loop_ub = X_hatX_hat->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        r->data[i] += X_hatX_hat->data[i1 + X_hatX_hat->size[0] * i] *
          X_hatY_hat->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((X_hatX_hat->size[0] == 0) || (X_hatX_hat->size[1] == 0) ||
        (X_hatY_hat->size[0] == 0)) {
      i = r->size[0];
      r->size[0] = X_hatX_hat->size[1];
      emxEnsureCapacity_real_T(&b_st, r, i, &yg_emlrtRTEI);
      loop_ub = X_hatX_hat->size[1];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'T';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)X_hatX_hat->size[1];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)X_hatX_hat->size[0];
      lda_t = (ptrdiff_t)X_hatX_hat->size[0];
      ldb_t = (ptrdiff_t)X_hatY_hat->size[0];
      ldc_t = (ptrdiff_t)X_hatX_hat->size[1];
      i = r->size[0];
      r->size[0] = X_hatX_hat->size[1];
      emxEnsureCapacity_real_T(&c_st, r, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &X_hatX_hat->data[0],
            &lda_t, &X_hatY_hat->data[0], &ldb_t, &beta1, &r->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&X_hatY_hat);
  emxFree_real_T(&X_hatX_hat);
  if (beta->size[0] != r->size[0]) {
    emlrtSizeEqCheck1DR2012b(beta->size[0], r->size[0], &bb_emlrtECI, sp);
  }

  loop_ub = beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta->data[i] += r->data[i];
  }

  emxFree_real_T(&r);

  /*  beta sampling 하기 */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y_p, const
                emxArray_real_T *X_p, const emxArray_real_T *X_hat, const
                emxArray_real_T *Y_hat, const emxArray_real_T *inv_Sigma, const
                emxArray_real_T *beta, real_T a0, real_T d0)
{
  real_T sig2;
  uint32_T T;
  real_T ehat;
  real_T alpha1;
  int32_T i;
  emxArray_real_T *a;
  int32_T b_i;
  emxArray_real_T *b_a;
  int32_T loop_ub;
  int32_T i1;
  int32_T i2;
  emxArray_real_T *c_a;
  char_T TRANSB1;
  char_T TRANSA1;
  real_T beta1;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *b;
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
  T = (uint32_T)X_p->size[0] + X_hat->size[0];
  ehat = 0.0;
  alpha1 = (real_T)T - (real_T)inv_Sigma->size[0];
  i = (int32_T)alpha1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, alpha1, mxDOUBLE_CLASS, (int32_T)
    alpha1, &v_emlrtRTEI, sp);
  emxInit_real_T(sp, &a, 2, &fh_emlrtRTEI, true);
  for (b_i = 0; b_i < i; b_i++) {
    st.site = &ig_emlrtRSI;
    loop_ub = X_hat->size[1];
    i1 = (int32_T)(b_i + 1U);
    if ((i1 < 1) || (i1 > X_hat->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, X_hat->size[0], &wc_emlrtBCI, &st);
    }

    i2 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X_hat->size[1];
    emxEnsureCapacity_real_T(&st, a, i2, &fh_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      a->data[i2] = X_hat->data[b_i + X_hat->size[0] * i2];
    }

    b_st.site = &nd_emlrtRSI;
    loop_ub = X_hat->size[1];
    if (X_hat->size[1] != beta->size[0]) {
      if ((X_hat->size[1] == 1) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((X_hat->size[1] == 1) || (beta->size[0] == 1)) {
      alpha1 = 0.0;
      for (i2 = 0; i2 < loop_ub; i2++) {
        alpha1 += X_hat->data[b_i + X_hat->size[0] * i2] * beta->data[i2];
      }
    } else {
      b_st.site = &md_emlrtRSI;
      if (X_hat->size[1] < 1) {
        alpha1 = 0.0;
      } else {
        n_t = (ptrdiff_t)X_hat->size[1];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        alpha1 = ddot(&n_t, &a->data[0], &incx_t, &beta->data[0], &incy_t);
      }
    }

    st.site = &ig_emlrtRSI;
    loop_ub = X_hat->size[1];
    if (i1 > X_hat->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, X_hat->size[0], &xc_emlrtBCI, &st);
    }

    i2 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X_hat->size[1];
    emxEnsureCapacity_real_T(&st, a, i2, &ih_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      a->data[i2] = X_hat->data[b_i + X_hat->size[0] * i2];
    }

    b_st.site = &nd_emlrtRSI;
    loop_ub = X_hat->size[1];
    if (X_hat->size[1] != beta->size[0]) {
      if ((X_hat->size[1] == 1) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    if ((X_hat->size[1] == 1) || (beta->size[0] == 1)) {
      beta1 = 0.0;
      for (i2 = 0; i2 < loop_ub; i2++) {
        beta1 += X_hat->data[b_i + X_hat->size[0] * i2] * beta->data[i2];
      }
    } else {
      b_st.site = &md_emlrtRSI;
      if (X_hat->size[1] < 1) {
        beta1 = 0.0;
      } else {
        n_t = (ptrdiff_t)X_hat->size[1];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        beta1 = ddot(&n_t, &a->data[0], &incx_t, &beta->data[0], &incy_t);
      }
    }

    if (i1 > Y_hat->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Y_hat->size[0], &yc_emlrtBCI, sp);
    }

    ehat += (Y_hat->data[i1 - 1] - alpha1) * (Y_hat->data[i1 - 1] - beta1);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &b_a, 2, &eh_emlrtRTEI, true);
  st.site = &jg_emlrtRSI;
  i = b_a->size[0] * b_a->size[1];
  b_a->size[0] = X_p->size[0];
  b_a->size[1] = X_p->size[1];
  emxEnsureCapacity_real_T(&st, b_a, i, &eh_emlrtRTEI);
  loop_ub = X_p->size[0] * X_p->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_a->data[i] = X_p->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  emxInit_real_T(&st, &c_a, 1, &gh_emlrtRTEI, true);
  if ((X_p->size[1] == 1) || (beta->size[0] == 1)) {
    i = c_a->size[0];
    c_a->size[0] = X_p->size[0];
    emxEnsureCapacity_real_T(&st, c_a, i, &eh_emlrtRTEI);
    loop_ub = X_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      c_a->data[i] = 0.0;
      b_i = X_p->size[1];
      for (i1 = 0; i1 < b_i; i1++) {
        c_a->data[i] += X_p->data[i + X_p->size[0] * i1] * beta->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((X_p->size[0] == 0) || (X_p->size[1] == 0) || (beta->size[0] == 0)) {
      i = c_a->size[0];
      c_a->size[0] = X_p->size[0];
      emxEnsureCapacity_real_T(&b_st, c_a, i, &eh_emlrtRTEI);
      loop_ub = X_p->size[0];
      for (i = 0; i < loop_ub; i++) {
        c_a->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      incx_t = (ptrdiff_t)X_p->size[0];
      n_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)X_p->size[1];
      lda_t = (ptrdiff_t)X_p->size[0];
      ldb_t = (ptrdiff_t)beta->size[0];
      ldc_t = (ptrdiff_t)X_p->size[0];
      i = c_a->size[0];
      c_a->size[0] = X_p->size[0];
      emxEnsureCapacity_real_T(&c_st, c_a, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &alpha1, &b_a->data[0],
            &lda_t, &beta->data[0], &ldb_t, &beta1, &c_a->data[0], &ldc_t);
    }
  }

  if (Y_p->size[0] != c_a->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], c_a->size[0], &cb_emlrtECI, sp);
  }

  i = c_a->size[0];
  c_a->size[0] = Y_p->size[0];
  emxEnsureCapacity_real_T(sp, c_a, i, &gh_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    c_a->data[i] = Y_p->data[i] - c_a->data[i];
  }

  st.site = &jg_emlrtRSI;
  i = b_a->size[0] * b_a->size[1];
  b_a->size[0] = X_p->size[0];
  b_a->size[1] = X_p->size[1];
  emxEnsureCapacity_real_T(&st, b_a, i, &hh_emlrtRTEI);
  loop_ub = X_p->size[0] * X_p->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_a->data[i] = X_p->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X_p, beta, X_p->size[1], beta->size[0]);
  emxInit_real_T(&st, &b, 1, &kh_emlrtRTEI, true);
  if ((X_p->size[1] == 1) || (beta->size[0] == 1)) {
    i = b->size[0];
    b->size[0] = X_p->size[0];
    emxEnsureCapacity_real_T(&st, b, i, &hh_emlrtRTEI);
    loop_ub = X_p->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = 0.0;
      b_i = X_p->size[1];
      for (i1 = 0; i1 < b_i; i1++) {
        b->data[i] += X_p->data[i + X_p->size[0] * i1] * beta->data[i1];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((X_p->size[0] == 0) || (X_p->size[1] == 0) || (beta->size[0] == 0)) {
      i = b->size[0];
      b->size[0] = X_p->size[0];
      emxEnsureCapacity_real_T(&b_st, b, i, &hh_emlrtRTEI);
      loop_ub = X_p->size[0];
      for (i = 0; i < loop_ub; i++) {
        b->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      incx_t = (ptrdiff_t)X_p->size[0];
      n_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)X_p->size[1];
      lda_t = (ptrdiff_t)X_p->size[0];
      ldb_t = (ptrdiff_t)beta->size[0];
      ldc_t = (ptrdiff_t)X_p->size[0];
      i = b->size[0];
      b->size[0] = X_p->size[0];
      emxEnsureCapacity_real_T(&c_st, b, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &alpha1, &b_a->data[0],
            &lda_t, &beta->data[0], &ldb_t, &beta1, &b->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b_a);
  if (Y_p->size[0] != b->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], b->size[0], &db_emlrtECI, sp);
  }

  st.site = &jg_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  if (c_a->size[0] != inv_Sigma->size[0]) {
    if ((c_a->size[0] == 1) || ((inv_Sigma->size[0] == 1) && (inv_Sigma->size[1]
          == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if ((c_a->size[0] == 1) || (inv_Sigma->size[0] == 1)) {
    i = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = inv_Sigma->size[1];
    emxEnsureCapacity_real_T(&st, a, i, &pg_emlrtRTEI);
    loop_ub = inv_Sigma->size[1];
    for (i = 0; i < loop_ub; i++) {
      a->data[i] = 0.0;
      b_i = c_a->size[0];
      for (i1 = 0; i1 < b_i; i1++) {
        a->data[i] += c_a->data[i1] * inv_Sigma->data[i1 + inv_Sigma->size[0] *
          i];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((c_a->size[0] == 0) || (inv_Sigma->size[0] == 0) || (inv_Sigma->size[1] ==
         0)) {
      i = a->size[0] * a->size[1];
      a->size[0] = 1;
      a->size[1] = inv_Sigma->size[1];
      emxEnsureCapacity_real_T(&b_st, a, i, &jh_emlrtRTEI);
      loop_ub = inv_Sigma->size[1];
      for (i = 0; i < loop_ub; i++) {
        a->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'T';
      alpha1 = 1.0;
      beta1 = 0.0;
      incx_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)inv_Sigma->size[1];
      incy_t = (ptrdiff_t)c_a->size[0];
      lda_t = (ptrdiff_t)c_a->size[0];
      ldb_t = (ptrdiff_t)inv_Sigma->size[0];
      ldc_t = (ptrdiff_t)1;
      i = a->size[0] * a->size[1];
      a->size[0] = 1;
      a->size[1] = inv_Sigma->size[1];
      emxEnsureCapacity_real_T(&c_st, a, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &alpha1, &c_a->data[0],
            &lda_t, &inv_Sigma->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&c_a);
  st.site = &jg_emlrtRSI;
  i = b->size[0];
  b->size[0] = Y_p->size[0];
  emxEnsureCapacity_real_T(&st, b, i, &kh_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = Y_p->data[i] - b->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  if (a->size[1] != b->size[0]) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    alpha1 = 0.0;
    loop_ub = a->size[1];
    for (i = 0; i < loop_ub; i++) {
      alpha1 += a->data[i] * b->data[i];
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if (a->size[1] < 1) {
      alpha1 = 0.0;
    } else {
      n_t = (ptrdiff_t)a->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      alpha1 = ddot(&n_t, &a->data[0], &incx_t, &b->data[0], &incy_t);
    }
  }

  emxFree_real_T(&b);
  emxFree_real_T(&a);
  st.site = &kg_emlrtRSI;
  sig2 = randig(&st, (a0 + (real_T)T) / 2.0, ((d0 + alpha1) + ehat) / 2.0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return sig2;
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (Auto_Unit_Re.c) */

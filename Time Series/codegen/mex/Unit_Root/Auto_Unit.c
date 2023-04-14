/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Auto_Unit.c
 *
 * Code generation for function 'Auto_Unit'
 *
 */

/* Include files */
#include "Auto_Unit.h"
#include "Auto_Unit_Re.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "Unit_Root_mexutil.h"
#include "assertValidSizeArg.h"
#include "blas.h"
#include "chol.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "invpd.h"
#include "kron.h"
#include "lnpdfig.h"
#include "lnpdfmvn4.h"
#include "mpower.h"
#include "mtimes.h"
#include "mwmathutil.h"
#include "power.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "stdc.h"
#include "vec.h"

/* Variable Definitions */
static emlrtRSInfo ll_emlrtRSI = { 19, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 26, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 27, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 40, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 47, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 61, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 64, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 65, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 66, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 76, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 91, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 92, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 93, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 95, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 98, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 101,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 105,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 109,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 112,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 113,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 115,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 116,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 121,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 123,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 128,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 130,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 132,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 144,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 310,/* lineNo */
  "tausetter",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 164,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 171,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 172,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 178,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo um_emlrtRSI = { 179,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 186,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo wm_emlrtRSI = { 292,/* lineNo */
  "loglik_kernel",                     /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 293,/* lineNo */
  "loglik_kernel",                     /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 299,/* lineNo */
  "logprior_kernel",                   /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo bn_emlrtRSI = { 301,/* lineNo */
  "logprior_kernel",                   /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtMCInfo eb_emlrtMCI = { 8,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo fb_emlrtMCI = { 139,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo gb_emlrtMCI = { 140,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo hb_emlrtMCI = { 141,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo ib_emlrtMCI = { 73, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo jb_emlrtMCI = { 74, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo kb_emlrtMCI = { 75, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo lb_emlrtMCI = { 77, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo mb_emlrtMCI = { 78, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo nb_emlrtMCI = { 79, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo ob_emlrtMCI = { 80, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo pb_emlrtMCI = { 81, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo qb_emlrtMCI = { 82, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo rb_emlrtMCI = { 83, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo sb_emlrtMCI = { 84, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo tb_emlrtMCI = { 85, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo ub_emlrtMCI = { 86, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo vb_emlrtMCI = { 87, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo wb_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo xb_emlrtMCI = { 165,/* lineNo */
  6,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo yb_emlrtMCI = { 166,/* lineNo */
  7,                                   /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo ac_emlrtMCI = { 170,/* lineNo */
  12,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo bc_emlrtMCI = { 174,/* lineNo */
  17,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo cc_emlrtMCI = { 175,/* lineNo */
  16,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo dc_emlrtMCI = { 181,/* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo ec_emlrtMCI = { 182,/* lineNo */
  15,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo fc_emlrtMCI = { 185,/* lineNo */
  14,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtMCInfo gc_emlrtMCI = { 185,/* lineNo */
  10,                                  /* colNo */
  "Gen_beta",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  136,                                 /* lineNo */
  5,                                   /* colNo */
  "logpostm",                          /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  5,                                   /* colNo */
  "sig2m",                             /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  9,                                   /* colNo */
  "Y_hat",                             /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  28,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  42,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  5,                                   /* colNo */
  "bm",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  45,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  9,                                   /* colNo */
  "X_hat",                             /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  28,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  42,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 60,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 59,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 58,  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 35, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 34, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 33, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 32, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 31, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 30, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 30, /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 59, /* lineNo */
  16,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 34, /* lineNo */
  18,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 34, /* lineNo */
  16,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 33, /* lineNo */
  14,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 31, /* lineNo */
  12,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  117,                                 /* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  12,                                  /* colNo */
  "Sigmam",                            /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  148,                                 /* lineNo */
  26,                                  /* colNo */
  "logpostm",                          /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  148,                                 /* lineNo */
  21,                                  /* colNo */
  "logpostm",                          /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 148,/* lineNo */
  21,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  14,                                  /* colNo */
  "bm",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  9,                                   /* colNo */
  "bm",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 147,/* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  18,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  13,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 145,/* lineNo */
  13,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo wb_emlrtECI = { -1, /* nDims */
  107,                                 /* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  10,                                  /* colNo */
  "phim",                              /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  20,                                  /* colNo */
  "sig2m",                             /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  15,                                  /* colNo */
  "sig2m",                             /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 144,/* lineNo */
  15,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  14,                                  /* colNo */
  "cm",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  9,                                   /* colNo */
  "cm",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 143,/* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo xb_emlrtECI = { -1, /* nDims */
  99,                                  /* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  8,                                   /* colNo */
  "cm",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  32,                                  /* colNo */
  "vec_Sigma",                         /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo yb_emlrtECI = { 2,  /* nDims */
  114,                                 /* lineNo */
  17,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { 2,  /* nDims */
  112,                                 /* lineNo */
  21,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  106,                                 /* lineNo */
  13,                                  /* colNo */
  "G",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bc_emlrtECI = { -1, /* nDims */
  98,                                  /* lineNo */
  39,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { -1, /* nDims */
  98,                                  /* lineNo */
  20,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo dc_emlrtECI = { -1, /* nDims */
  95,                                  /* lineNo */
  62,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo ec_emlrtECI = { -1, /* nDims */
  95,                                  /* lineNo */
  41,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo fc_emlrtECI = { -1, /* nDims */
  92,                                  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  16,                                  /* colNo */
  "X1_hat",                            /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gc_emlrtECI = { 2,  /* nDims */
  92,                                  /* lineNo */
  27,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  30,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo jb_emlrtRTEI = { 90,/* lineNo */
  13,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 69,/* lineNo */
  12,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  4,                                   /* colNo */
  "e1",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hc_emlrtECI = { 2,  /* nDims */
  64,                                  /* lineNo */
  17,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  11,                                  /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  9,                                   /* colNo */
  "Y",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  13,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  11,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ic_emlrtECI = { -1, /* nDims */
  19,                                  /* lineNo */
  9,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  14,                                  /* colNo */
  "X1",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jc_emlrtECI = { -1, /* nDims */
  16,                                  /* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  6,                                   /* colNo */
  "X1",                                /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  11,                                  /* colNo */
  "X",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  9,                                   /* colNo */
  "X",                                 /* aName */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 47, /* lineNo */
  31,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo kc_emlrtECI = { -1, /* nDims */
  292,                                 /* lineNo */
  25,                                  /* colNo */
  "loglik_kernel",                     /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo lc_emlrtECI = { -1, /* nDims */
  292,                                 /* lineNo */
  53,                                  /* colNo */
  "loglik_kernel",                     /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo mc_emlrtECI = { -1, /* nDims */
  293,                                 /* lineNo */
  23,                                  /* colNo */
  "loglik_kernel",                     /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtECInfo nc_emlrtECI = { -1, /* nDims */
  293,                                 /* lineNo */
  45,                                  /* colNo */
  "loglik_kernel",                     /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo al_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = { 50,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo el_emlrtRTEI = { 51,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo fl_emlrtRTEI = { 53,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo gl_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo hl_emlrtRTEI = { 56,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo il_emlrtRTEI = { 58,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo jl_emlrtRTEI = { 59,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo kl_emlrtRTEI = { 60,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo ll_emlrtRTEI = { 47,/* lineNo */
  10,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo ml_emlrtRTEI = { 64,/* lineNo */
  17,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo nl_emlrtRTEI = { 64,/* lineNo */
  34,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo ol_emlrtRTEI = { 64,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo pl_emlrtRTEI = { 47,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo ql_emlrtRTEI = { 65,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo rl_emlrtRTEI = { 151,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 95,/* lineNo */
  49,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = { 95,/* lineNo */
  68,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = { 153,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = { 95,/* lineNo */
  41,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo xl_emlrtRTEI = { 95,/* lineNo */
  62,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo yl_emlrtRTEI = { 152,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo am_emlrtRTEI = { 82,/* lineNo */
  14,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo bm_emlrtRTEI = { 92,/* lineNo */
  42,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo cm_emlrtRTEI = { 150,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo dm_emlrtRTEI = { 84,/* lineNo */
  14,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo em_emlrtRTEI = { 98,/* lineNo */
  26,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo fm_emlrtRTEI = { 92,/* lineNo */
  37,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo gm_emlrtRTEI = { 98,/* lineNo */
  47,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo hm_emlrtRTEI = { 92,/* lineNo */
  27,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo im_emlrtRTEI = { 154,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo jm_emlrtRTEI = { 98,/* lineNo */
  20,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo km_emlrtRTEI = { 98,/* lineNo */
  39,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo lm_emlrtRTEI = { 101,/* lineNo */
  67,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo mm_emlrtRTEI = { 105,/* lineNo */
  55,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo nm_emlrtRTEI = { 105,/* lineNo */
  70,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo om_emlrtRTEI = { 106,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo pm_emlrtRTEI = { 112,/* lineNo */
  21,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo qm_emlrtRTEI = { 112,/* lineNo */
  38,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo rm_emlrtRTEI = { 112,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo sm_emlrtRTEI = { 114,/* lineNo */
  24,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo tm_emlrtRTEI = { 114,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo um_emlrtRTEI = { 116,/* lineNo */
  17,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo vm_emlrtRTEI = { 116,/* lineNo */
  5,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo wm_emlrtRTEI = { 117,/* lineNo */
  22,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo xm_emlrtRTEI = { 121,/* lineNo */
  27,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo ym_emlrtRTEI = { 121,/* lineNo */
  38,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo an_emlrtRTEI = { 123,/* lineNo */
  29,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo bn_emlrtRTEI = { 123,/* lineNo */
  44,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo cn_emlrtRTEI = { 26,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo dn_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo en_emlrtRTEI = { 61,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo fn_emlrtRTEI = { 66,/* lineNo */
  1,                                   /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo gn_emlrtRTEI = { 47,/* lineNo */
  16,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo hn_emlrtRTEI = { 97,/* lineNo */
  45,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo in_emlrtRTEI = { 292,/* lineNo */
  31,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo jn_emlrtRTEI = { 293,/* lineNo */
  31,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo kn_emlrtRTEI = { 292,/* lineNo */
  53,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo ln_emlrtRTEI = { 293,/* lineNo */
  45,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRTEInfo mn_emlrtRTEI = { 292,/* lineNo */
  10,                                  /* colNo */
  "Auto_Unit",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pName */
};

static emlrtRSInfo dn_emlrtRSI = { 83, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo gn_emlrtRSI = { 8,  /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo in_emlrtRSI = { 77, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo jn_emlrtRSI = { 75, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo kn_emlrtRSI = { 74, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo on_emlrtRSI = { 79, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo qn_emlrtRSI = { 81, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo sn_emlrtRSI = { 85, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo un_emlrtRSI = { 87, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo wn_emlrtRSI = { 140,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo bo_emlrtRSI = { 141,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo co_emlrtRSI = { 139,/* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo do_emlrtRSI = { 88, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo eo_emlrtRSI = { 86, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo fo_emlrtRSI = { 84, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo go_emlrtRSI = { 82, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ho_emlrtRSI = { 80, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo io_emlrtRSI = { 78, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo uo_emlrtRSI = { 73, /* lineNo */
  "Auto_Unit",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ap_emlrtRSI = { 165,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo bp_emlrtRSI = { 166,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo cp_emlrtRSI = { 170,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo dp_emlrtRSI = { 181,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo ep_emlrtRSI = { 174,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo fp_emlrtRSI = { 185,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo gp_emlrtRSI = { 182,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

static emlrtRSInfo hp_emlrtRSI = { 175,/* lineNo */
  "Gen_beta",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Auto_Unit.m"/* pathName */
};

/* Function Declarations */
static void Gen_beta(const emlrtStack *sp, real_T beta0, const emxArray_real_T
                     *X_hat, const emxArray_real_T *Y_hat, const emxArray_real_T
                     *X_p, const emxArray_real_T *Y_p, real_T k, real_T v, const
                     emxArray_real_T *inv_Sigma, real_T sig2_inv, real_T mode,
                     real_T aa, real_T bb, real_T *beta1, real_T *logprior);
static const mxArray *b_min(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *b_random(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static real_T loglik_kernel(const emlrtStack *sp, real_T beta, const
  emxArray_real_T *X_p, const emxArray_real_T *Y_p, const emxArray_real_T *X_hat,
  const emxArray_real_T *Y_hat, real_T sig2_inv, const emxArray_real_T
  *inv_Sigma);
static real_T logprior_kernel(const emlrtStack *sp, real_T theta, real_T k,
  real_T v, real_T tau);
static const mxArray *makedist(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location);
static const mxArray *mrdivide(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *pdf(const emlrtStack *sp, const mxArray *b, const mxArray *
  c, emlrtMCInfo *location);
static const mxArray *truncate(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static void Gen_beta(const emlrtStack *sp, real_T beta0, const emxArray_real_T
                     *X_hat, const emxArray_real_T *Y_hat, const emxArray_real_T
                     *X_p, const emxArray_real_T *Y_p, real_T k, real_T v, const
                     emxArray_real_T *inv_Sigma, real_T sig2_inv, real_T mode,
                     real_T aa, real_T bb, real_T *beta1, real_T *logprior)
{
  const mxArray *pd;
  const mxArray *pdt;
  const mxArray *proposal_deno;
  const mxArray *weight_numer;
  const mxArray *beta0_deno;
  const mxArray *weight_deno;
  real_T deno;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  static const char_T u[6] = { 'N', 'o', 'r', 'm', 'a', 'l' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 2 };

  static const char_T b_u[2] = { 'm', 'u' };

  const mxArray *c_y;
  const mxArray *m2;
  const mxArray *d_y;
  const mxArray *m3;
  static const int32_T iv2[2] = { 1, 5 };

  static const char_T c_u[5] = { 's', 'i', 'g', 'm', 'a' };

  const mxArray *e_y;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  real_T loglik;
  real_T logprior_proposal;
  const mxArray *m7;
  const mxArray *m8;
  const mxArray *m9;
  const mxArray *m10;
  const mxArray *m11;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  pd = NULL;
  pdt = NULL;
  proposal_deno = NULL;
  weight_numer = NULL;
  beta0_deno = NULL;
  weight_deno = NULL;
  st.site = &qm_emlrtRSI;
  b_st.site = &pm_emlrtRSI;
  deno = mpower(&b_st, 2.0 * k / (v + 1.0), 0.5 * k);
  deno = muDoubleScalarPower(mode - 1.0, 2.0) / deno;
  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 6, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 2, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateDoubleScalar(mode);
  emlrtAssign(&c_y, m2);
  d_y = NULL;
  m3 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 5, m3, &c_u[0]);
  emlrtAssign(&d_y, m3);
  e_y = NULL;
  m4 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&e_y, m4);
  st.site = &ap_emlrtRSI;
  emlrtAssign(&pd, makedist(&st, y, b_y, c_y, d_y, e_y, &xb_emlrtMCI));
  y = NULL;
  m5 = emlrtCreateDoubleScalar(aa);
  emlrtAssign(&y, m5);
  b_y = NULL;
  m6 = emlrtCreateDoubleScalar(bb);
  emlrtAssign(&b_y, m6);
  st.site = &bp_emlrtRSI;
  emlrtAssign(&pdt, truncate(&st, emlrtAlias(pd), y, b_y, &yb_emlrtMCI));

  /*  weight with proposal */
  st.site = &cp_emlrtRSI;
  *beta1 = c_emlrt_marshallIn(&st, b_random(&st, emlrtAlias(pdt), &ac_emlrtMCI),
    "<output of random>");
  st.site = &rm_emlrtRSI;
  loglik = loglik_kernel(&st, *beta1, X_p, Y_p, X_hat, Y_hat, sig2_inv,
    inv_Sigma);
  st.site = &sm_emlrtRSI;
  logprior_proposal = logprior_kernel(&st, *beta1, k, v, deno);
  y = NULL;
  m7 = emlrtCreateDoubleScalar(*beta1);
  emlrtAssign(&y, m7);
  st.site = &ep_emlrtRSI;
  emlrtAssign(&proposal_deno, pdf(&st, emlrtAlias(pdt), y, &bc_emlrtMCI));
  y = NULL;
  m8 = emlrtCreateDoubleScalar(muDoubleScalarExp(loglik + logprior_proposal));
  emlrtAssign(&y, m8);
  st.site = &hp_emlrtRSI;
  emlrtAssign(&weight_numer, mrdivide(&st, y, emlrtAlias(proposal_deno),
    &cc_emlrtMCI));

  /*  weight with beta0 */
  st.site = &tm_emlrtRSI;
  loglik = loglik_kernel(&st, beta0, X_p, Y_p, X_hat, Y_hat, sig2_inv, inv_Sigma);
  st.site = &um_emlrtRSI;
  *logprior = logprior_kernel(&st, beta0, k, v, deno);
  y = NULL;
  m9 = emlrtCreateDoubleScalar(beta0);
  emlrtAssign(&y, m9);
  st.site = &dp_emlrtRSI;
  emlrtAssign(&beta0_deno, pdf(&st, emlrtAlias(pdt), y, &dc_emlrtMCI));
  y = NULL;
  m10 = emlrtCreateDoubleScalar(muDoubleScalarExp(loglik + *logprior));
  emlrtAssign(&y, m10);
  st.site = &gp_emlrtRSI;
  emlrtAssign(&weight_deno, mrdivide(&st, y, emlrtAlias(beta0_deno),
    &ec_emlrtMCI));
  y = NULL;
  m11 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&y, m11);
  st.site = &fp_emlrtRSI;
  deno = c_emlrt_marshallIn(&st, b_min(&st, mrdivide(&st, emlrtAlias
    (weight_numer), emlrtAlias(weight_deno), &fc_emlrtMCI), y, &gc_emlrtMCI),
    "<output of min>");
  st.site = &vm_emlrtRSI;
  if (b_rand() < deno) {
    *logprior = logprior_proposal;
  } else {
    *beta1 = beta0;
  }

  emlrtDestroyArray(&pd);
  emlrtDestroyArray(&pdt);
  emlrtDestroyArray(&proposal_deno);
  emlrtDestroyArray(&weight_numer);
  emlrtDestroyArray(&beta0_deno);
  emlrtDestroyArray(&weight_deno);
}

static const mxArray *b_min(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "min", true, location);
}

static const mxArray *b_random(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "random", true, location);
}

static real_T loglik_kernel(const emlrtStack *sp, real_T beta, const
  emxArray_real_T *X_p, const emxArray_real_T *Y_p, const emxArray_real_T *X_hat,
  const emxArray_real_T *Y_hat, real_T sig2_inv, const emxArray_real_T
  *inv_Sigma)
{
  real_T loglik;
  emxArray_real_T *b;
  int32_T i;
  int32_T loop_ub;
  emxArray_real_T *b_b;
  emxArray_real_T *y;
  real_T alpha1;
  emxArray_real_T *b_y;
  char_T TRANSB1;
  char_T TRANSA1;
  int32_T b_loop_ub;
  real_T beta1;
  int32_T i1;
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
  emxInit_real_T(sp, &b, 1, &kn_emlrtRTEI, true);
  i = b->size[0];
  b->size[0] = X_p->size[0];
  emxEnsureCapacity_real_T(sp, b, i, &in_emlrtRTEI);
  loop_ub = X_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = X_p->data[i] * beta;
  }

  if (Y_p->size[0] != b->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], b->size[0], &kc_emlrtECI, sp);
  }

  if (Y_p->size[0] != b->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_p->size[0], b->size[0], &lc_emlrtECI, sp);
  }

  emxInit_real_T(sp, &b_b, 1, &ln_emlrtRTEI, true);
  i = b_b->size[0];
  b_b->size[0] = X_hat->size[0];
  emxEnsureCapacity_real_T(sp, b_b, i, &jn_emlrtRTEI);
  loop_ub = X_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = X_hat->data[i] * beta;
  }

  if (Y_hat->size[0] != b_b->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_hat->size[0], b_b->size[0], &mc_emlrtECI, sp);
  }

  if (Y_hat->size[0] != b_b->size[0]) {
    emlrtSizeEqCheck1DR2012b(Y_hat->size[0], b_b->size[0], &nc_emlrtECI, sp);
  }

  emxInit_real_T(sp, &y, 2, &mn_emlrtRTEI, true);
  alpha1 = -0.5 * sig2_inv;
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = Y_p->size[0];
  emxEnsureCapacity_real_T(sp, y, i, &pg_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    y->data[i] = alpha1 * (Y_p->data[i] - b->data[i]);
  }

  emxInit_real_T(sp, &b_y, 2, &mn_emlrtRTEI, true);
  st.site = &wm_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  if (y->size[1] != inv_Sigma->size[0]) {
    if ((y->size[1] == 1) || ((inv_Sigma->size[0] == 1) && (inv_Sigma->size[1] ==
          1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if ((y->size[1] == 1) || (inv_Sigma->size[0] == 1)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = inv_Sigma->size[1];
    emxEnsureCapacity_real_T(&st, b_y, i, &vd_emlrtRTEI);
    loop_ub = inv_Sigma->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_y->data[i] = 0.0;
      b_loop_ub = y->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_y->data[i] += y->data[i1] * inv_Sigma->data[i1 + inv_Sigma->size[0] *
          i];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((y->size[1] == 0) || (inv_Sigma->size[0] == 0) || (inv_Sigma->size[1] ==
         0)) {
      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = inv_Sigma->size[1];
      emxEnsureCapacity_real_T(&b_st, b_y, i, &jh_emlrtRTEI);
      loop_ub = inv_Sigma->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_y->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)inv_Sigma->size[1];
      k_t = (ptrdiff_t)y->size[1];
      lda_t = (ptrdiff_t)1;
      ldb_t = (ptrdiff_t)inv_Sigma->size[0];
      ldc_t = (ptrdiff_t)1;
      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = inv_Sigma->size[1];
      emxEnsureCapacity_real_T(&c_st, b_y, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y->data[0], &lda_t,
            &inv_Sigma->data[0], &ldb_t, &beta1, &b_y->data[0], &ldc_t);
    }
  }

  st.site = &wm_emlrtRSI;
  i = b->size[0];
  b->size[0] = Y_p->size[0];
  emxEnsureCapacity_real_T(&st, b, i, &kn_emlrtRTEI);
  loop_ub = Y_p->size[0];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = Y_p->data[i] - b->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  if (b_y->size[1] != b->size[0]) {
    if ((b_y->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if ((b_y->size[1] == 1) || (b->size[0] == 1)) {
    alpha1 = 0.0;
    loop_ub = b_y->size[1];
    for (i = 0; i < loop_ub; i++) {
      alpha1 += b_y->data[i] * b->data[i];
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if (b_y->size[1] < 1) {
      alpha1 = 0.0;
    } else {
      n_t = (ptrdiff_t)b_y->size[1];
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      alpha1 = ddot(&n_t, &b_y->data[0], &m_t, &b->data[0], &k_t);
    }
  }

  emxFree_real_T(&b);
  emxFree_real_T(&b_y);
  beta1 = -0.5 * sig2_inv;
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = Y_hat->size[0];
  emxEnsureCapacity_real_T(sp, y, i, &pg_emlrtRTEI);
  loop_ub = Y_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    y->data[i] = beta1 * (Y_hat->data[i] - b_b->data[i]);
  }

  st.site = &xm_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = Y_hat->size[0];
  emxEnsureCapacity_real_T(&st, b_b, i, &ln_emlrtRTEI);
  loop_ub = Y_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = Y_hat->data[i] - b_b->data[i];
  }

  b_st.site = &nd_emlrtRSI;
  if (y->size[1] != b_b->size[0]) {
    if ((y->size[1] == 1) || (b_b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  if ((y->size[1] == 1) || (b_b->size[0] == 1)) {
    beta1 = 0.0;
    loop_ub = y->size[1];
    for (i = 0; i < loop_ub; i++) {
      beta1 += y->data[i] * b_b->data[i];
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if (y->size[1] < 1) {
      beta1 = 0.0;
    } else {
      n_t = (ptrdiff_t)y->size[1];
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      beta1 = ddot(&n_t, &y->data[0], &m_t, &b_b->data[0], &k_t);
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&y);
  loglik = alpha1 + beta1;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return loglik;
}

static real_T logprior_kernel(const emlrtStack *sp, real_T theta, real_T k,
  real_T v, real_T tau)
{
  real_T x;
  real_T b_x;
  real_T r;
  static const real_T gam[23] = { 1.0, 1.0, 2.0, 6.0, 24.0, 120.0, 720.0, 5040.0,
    40320.0, 362880.0, 3.6288E+6, 3.99168E+7, 4.790016E+8, 6.2270208E+9,
    8.71782912E+10, 1.307674368E+12, 2.0922789888E+13, 3.55687428096E+14,
    6.402373705728E+15, 1.21645100408832E+17, 2.43290200817664E+18,
    5.109094217170944E+19, 1.1240007277776077E+21 };

  real_T fact;
  int32_T n;
  boolean_T parity;
  real_T yint;
  real_T xkold;
  int32_T i;
  boolean_T negateSinpi;
  real_T xden;
  static const real_T p[8] = { -1.716185138865495, 24.76565080557592,
    -379.80425647094563, 629.3311553128184, 866.96620279041326,
    -31451.272968848367, -36144.413418691176, 66456.143820240541 };

  static const real_T q[8] = { -30.840230011973897, 315.35062697960416,
    -1015.1563674902192, -3107.7716715723109, 22538.11842098015,
    4755.8462775278813, -134659.95986496931, -115132.25967555349 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ym_emlrtRSI;
  x = k * tau;
  if (x < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  x = muDoubleScalarLog(x);
  b_x = v / (2.0 * k);
  if ((b_x >= 1.0) && (b_x <= 23.0) && (b_x == muDoubleScalarFloor(b_x))) {
    r = gam[(int32_T)b_x - 1];
  } else if ((b_x < 1.0) && (b_x == muDoubleScalarFloor(b_x))) {
    r = rtInf;
  } else if (muDoubleScalarIsNaN(b_x)) {
    r = rtNaN;
  } else if (muDoubleScalarIsInf(b_x)) {
    r = rtInf;
  } else {
    fact = 1.0;
    n = -1;
    parity = false;
    if (b_x <= 0.0) {
      yint = muDoubleScalarFloor(-b_x);
      parity = (yint != muDoubleScalarFloor(-b_x / 2.0) * 2.0);
      yint = -b_x - yint;
      if (yint < 0.0) {
        yint = -yint;
        negateSinpi = true;
      } else {
        negateSinpi = false;
      }

      if (yint < 0.25) {
        yint = muDoubleScalarSin(yint * 3.1415926535897931);
      } else {
        r = yint - 2.0 * muDoubleScalarFloor(yint / 2.0);
        if (r < 0.25) {
          yint = muDoubleScalarSin(r * 3.1415926535897931);
        } else if (r < 0.75) {
          r = 0.5 - r;
          yint = muDoubleScalarCos(r * 3.1415926535897931);
        } else if (r < 1.25) {
          r = 1.0 - r;
          yint = muDoubleScalarSin(r * 3.1415926535897931);
        } else if (r < 1.75) {
          r -= 1.5;
          yint = -muDoubleScalarCos(r * 3.1415926535897931);
        } else {
          r -= 2.0;
          yint = muDoubleScalarSin(r * 3.1415926535897931);
        }
      }

      if (negateSinpi) {
        yint = -yint;
      }

      fact = -3.1415926535897931 / yint;
      b_x = -b_x + 1.0;
    }

    if (b_x < 12.0) {
      xkold = b_x;
      if (b_x < 1.0) {
        yint = b_x;
        b_x++;
      } else {
        i = (int32_T)muDoubleScalarFloor(b_x);
        n = i - 2;
        b_x -= (real_T)i - 1.0;
        yint = b_x - 1.0;
      }

      r = 0.0 * yint;
      xden = 1.0;
      for (i = 0; i < 8; i++) {
        r = (r + p[i]) * yint;
        xden = xden * yint + q[i];
      }

      r = r / xden + 1.0;
      if (xkold < b_x) {
        r /= xkold;
      } else {
        if (xkold > b_x) {
          for (i = 0; i <= n; i++) {
            r *= b_x;
            b_x++;
          }
        }
      }
    } else {
      yint = b_x * b_x;
      r = 0.0057083835261;
      for (i = 0; i < 6; i++) {
        r = r / yint + dv[i];
      }

      r = (r / b_x - b_x) + 0.91893853320467278;
      r += (b_x - 0.5) * muDoubleScalarLog(b_x);
      r = muDoubleScalarExp(r);
    }

    if (parity) {
      r = -r;
    }

    if (fact != 1.0) {
      r = fact / r;
    }
  }

  st.site = &ym_emlrtRSI;
  if (r < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  r = muDoubleScalarLog(r);
  st.site = &bn_emlrtRSI;
  yint = -mpower(&st, muDoubleScalarPower(theta - 1.0, 2.0) / tau, -k);
  return ((v / 2.0 * x - r) + -(v + 1.0) * muDoubleScalarLog(muDoubleScalarAbs
           (theta - 1.0))) + yint;
}

static const mxArray *makedist(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m, 5, pArrays, "makedist", true, location);
}

static const mxArray *mrdivide(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "mrdivide", true, location);
}

static const mxArray *pdf(const emlrtStack *sp, const mxArray *b, const mxArray *
  c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "pdf", true, location);
}

static const mxArray *truncate(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "truncate", true, location);
}

void Auto_Unit(const emlrtStack *sp, const emxArray_real_T *data, real_T kk,
               real_T vv, real_T a0, real_T d0, const emxArray_real_T *phi0,
               const emxArray_real_T *PHI0, real_T n0, real_T n1, real_T mode,
               real_T aa, real_T bb, const emxArray_real_T *c0, const
               emxArray_real_T *C0, struct0_T *Output)
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
  emxArray_real_T *b_b;
  emxArray_real_T *X;
  int32_T nx;
  int32_T i1;
  emxArray_real_T *precphi0;
  emxArray_real_T *precC0;
  int32_T p;
  real_T n;
  emxArray_real_T *bm;
  emxArray_real_T *cm;
  int32_T b_loop_ub;
  emxArray_real_T *sig2m;
  emxArray_real_T *phim;
  emxArray_real_T *Sigmam;
  real_T logpost;
  int32_T i2;
  emxArray_real_T *logpostm;
  emxArray_real_T *c;
  real_T sig2;
  real_T sig2_inv;
  emxArray_real_T *G;
  emxArray_real_T *kron_G;
  emxArray_real_T *result;
  boolean_T empty_non_axis_sizes;
  int32_T input_sizes[2];
  emxArray_int8_T *e1;
  int8_T sizes_idx_1;
  real_T c_b;
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
  emxArray_real_T *d_b;
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
  int32_T i5;
  cell_wrap_1 b_reshapes[2];
  int32_T i6;
  emxArray_real_T *b_X1;
  int32_T f_loop_ub;
  int32_T iter;
  int32_T g_loop_ub;
  int32_T b_result;
  int32_T i7;
  int8_T b_input_sizes_idx_1;
  int32_T c_input_sizes_idx_1;
  int32_T i8;
  char_T b_cv1[37];
  int32_T i9;
  uint32_T b_i;
  static const char_T b_cv2[37] = { 'U', 'n', 'd', 'e', 'r', ' ', 'H', '1', ' ',
    ':', ' ', 'I', 't', ' ', 'i', 's', ' ', 'I', '(', '0', ')', ' ', 'p', 'r',
    'o', 'c', 'e', 's', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

  int32_T c_result;
  const mxArray *b_y;
  const mxArray *m;
  int8_T d_input_sizes_idx_1;
  const mxArray *c_y;
  const mxArray *m1;
  int32_T e_input_sizes_idx_1;
  static const char_T b_cv3[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  int32_T h_loop_ub;
  int32_T d_result;
  char_T b_cv4[37];
  const mxArray *m2;
  int8_T f_input_sizes_idx_1;
  const mxArray *m3;
  int32_T i_loop_ub;
  static const char_T cv5[8] = { '[', 'b', 'e', 't', 'a', ':', ' ', ']' };

  int32_T X_hat_tmp;
  int32_T g_input_sizes_idx_1;
  const mxArray *m4;
  const mxArray *m5;
  int32_T j_loop_ub;
  int32_T k_loop_ub;
  static const char_T cv6[5] = { '[', 'c', ':', ' ', ']' };

  real_T logprior_b;
  static const char_T cv7[7] = { '[', 'p', 'h', 'i', ':', ' ', ']' };

  int32_T i10;
  const mxArray *m6;
  const mxArray *m7;
  boolean_T guard1 = false;
  real_T lik_1;
  int8_T h_input_sizes_idx_1;
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
  emxInit_real_T(sp, &Y, 1, &pk_emlrtRTEI, true);
  b = false;
  b1 = false;
  st.site = &gn_emlrtRSI;
  format(&st, e_emlrt_marshallOut(&st, b_cv), &eb_emlrtMCI);
  T = data->size[0];
  loop_ub = data->size[0];
  i = Y->size[0];
  Y->size[0] = data->size[0];
  emxEnsureCapacity_real_T(sp, Y, i, &pk_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    Y->data[i] = data->data[i];
  }

  emxInit_real_T(sp, &Xt, 2, &qk_emlrtRTEI, true);
  if (data->size[0] < 1) {
    Xt->size[0] = 1;
    Xt->size[1] = 0;
  } else {
    i = Xt->size[0] * Xt->size[1];
    Xt->size[0] = 1;
    Xt->size[1] = (int32_T)((real_T)data->size[0] - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, Xt, i, &qk_emlrtRTEI);
    loop_ub = (int32_T)((real_T)data->size[0] - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      Xt->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &b_Xt, 1, &qk_emlrtRTEI, true);
  i = b_Xt->size[0];
  b_Xt->size[0] = Xt->size[1];
  emxEnsureCapacity_real_T(sp, b_Xt, i, &rk_emlrtRTEI);
  loop_ub = Xt->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Xt->data[i] = Xt->data[i];
  }

  emxInit_real_T(sp, &X1, 2, &sk_emlrtRTEI, true);
  i = X1->size[0] * X1->size[1];
  X1->size[0] = data->size[0];
  X1->size[1] = c0->size[0];
  emxEnsureCapacity_real_T(sp, X1, i, &sk_emlrtRTEI);
  loop_ub = data->size[0] * c0->size[0];
  for (i = 0; i < loop_ub; i++) {
    X1->data[i] = 0.0;
  }

  if (1 > c0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, c0->size[0], &jf_emlrtBCI, sp);
  }

  b_data[0] = data->size[0];
  c_data[0] = data->size[0];
  emlrtSubAssignSizeCheckR2012b(&b_data[0], 1, &c_data[0], 1, &jc_emlrtECI, sp);
  loop_ub = data->size[0];
  for (i = 0; i < loop_ub; i++) {
    X1->data[i] = 1.0;
  }

  emxInit_real_T(sp, &b_b, 1, &hn_emlrtRTEI, true);
  if (c0->size[0] - 1 > 0) {
    i = c0->size[0];
    for (nx = 0; nx <= i - 2; nx++) {
      i1 = (int32_T)(((real_T)nx + 1.0) + 1.0);
      if ((i1 < 1) || (i1 > X1->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, X1->size[1], &if_emlrtBCI, sp);
      }

      st.site = &ll_emlrtRSI;
      power(&st, b_Xt, (real_T)nx + 1.0, b_b);
      b_data[0] = X1->size[0];
      emlrtSubAssignSizeCheckR2012b(&b_data[0], 1, &b_b->size[0], 1,
        &ic_emlrtECI, sp);
      loop_ub = b_b->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        X1->data[i1 + X1->size[0] * (nx + 1)] = b_b->data[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  emxInit_real_T(sp, &X, 1, &tk_emlrtRTEI, true);
  loop_ub = data->size[0];
  i = X->size[0];
  X->size[0] = data->size[0];
  emxEnsureCapacity_real_T(sp, X, i, &tk_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    X->data[i] = data->data[i + data->size[0]];
  }

  emxInit_real_T(sp, &precphi0, 2, &cn_emlrtRTEI, true);
  emxInit_real_T(sp, &precC0, 2, &dn_emlrtRTEI, true);
  p = phi0->size[0];
  st.site = &ml_emlrtRSI;
  invpd(&st, PHI0, precphi0);
  st.site = &nl_emlrtRSI;
  invpd(&st, C0, precC0);
  n = n0 + n1;
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &fb_emlrtDCI, sp);
  }

  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &gb_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &bm, 1, &uk_emlrtRTEI, true);
  loop_ub = (int32_T)n;
  i1 = bm->size[0];
  bm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, bm, i1, &uk_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &gb_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    bm->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &lb_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &cm, 2, &vk_emlrtRTEI, true);
  i1 = cm->size[0] * cm->size[1];
  cm->size[0] = (int32_T)n;
  cm->size[1] = c0->size[0];
  emxEnsureCapacity_real_T(sp, cm, i1, &vk_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &eb_emlrtDCI, sp);
  }

  b_loop_ub = (int32_T)n * c0->size[0];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    cm->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &db_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &sig2m, 1, &wk_emlrtRTEI, true);
  i1 = sig2m->size[0];
  sig2m->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, sig2m, i1, &wk_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &db_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    sig2m->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &kb_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &phim, 2, &xk_emlrtRTEI, true);
  i1 = phim->size[0] * phim->size[1];
  phim->size[0] = (int32_T)n;
  phim->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phim, i1, &xk_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &cb_emlrtDCI, sp);
  }

  b_loop_ub = (int32_T)n * phi0->size[0];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    phim->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &jb_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &Sigmam, 2, &yk_emlrtRTEI, true);
  i1 = Sigmam->size[0] * Sigmam->size[1];
  Sigmam->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Sigmam, i1, &yk_emlrtRTEI);
  logpost = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  i1 = (int32_T)logpost;
  if (logpost != i1) {
    emlrtIntegerCheckR2012b(logpost, &ib_emlrtDCI, sp);
  }

  i2 = Sigmam->size[0] * Sigmam->size[1];
  Sigmam->size[1] = i1;
  emxEnsureCapacity_real_T(sp, Sigmam, i2, &yk_emlrtRTEI);
  logpost = (real_T)phi0->size[0] * (real_T)phi0->size[0];
  i1 = (int32_T)logpost;
  if (logpost != i1) {
    emlrtIntegerCheckR2012b(logpost, &bb_emlrtDCI, sp);
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &bb_emlrtDCI, sp);
  }

  b_loop_ub = (int32_T)n * i1;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    Sigmam->data[i1] = 0.0;
  }

  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &ab_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &logpostm, 1, &al_emlrtRTEI, true);
  i1 = logpostm->size[0];
  logpostm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, logpostm, i1, &al_emlrtRTEI);
  if ((int32_T)n != i) {
    emlrtIntegerCheckR2012b(n, &ab_emlrtDCI, sp);
  }

  for (i = 0; i < loop_ub; i++) {
    logpostm->data[i] = 0.0;
  }

  emxInit_real_T(sp, &c, 1, &el_emlrtRTEI, true);
  if (a0 * d0 > 0.0) {
    sig2 = 0.5 * d0 / (0.5 * a0 - 1.0);
  } else {
    st.site = &ol_emlrtRSI;
    b_loop_ub = data->size[0];
    i = c->size[0];
    c->size[0] = data->size[0];
    emxEnsureCapacity_real_T(&st, c, i, &bl_emlrtRTEI);
    for (i = 0; i < b_loop_ub; i++) {
      c->data[i] = data->data[i];
    }

    b_st.site = &ol_emlrtRSI;
    logpost = stdc(&b_st, c);
    b_st.site = &ud_emlrtRSI;
    sig2 = muDoubleScalarPower(logpost, 2.0);
  }

  sig2_inv = 1.0 / sig2;
  emxInit_real_T(sp, &G, 2, &cl_emlrtRTEI, true);
  emxInit_real_T(sp, &kron_G, 2, &en_emlrtRTEI, true);
  emxInit_real_T(sp, &result, 2, &gn_emlrtRTEI, true);
  if (phi0->size[0] == 1) {
    i = G->size[0] * G->size[1];
    G->size[0] = 1;
    G->size[1] = 1;
    emxEnsureCapacity_real_T(sp, G, i, &cl_emlrtRTEI);
    G->data[0] = phi0->data[0];
  } else {
    st.site = &pl_emlrtRSI;
    b_st.site = &pl_emlrtRSI;
    eye(&b_st, (real_T)phi0->size[0] - 1.0, kron_G);
    if (!((real_T)phi0->size[0] - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b((real_T)phi0->size[0] - 1.0, &rb_emlrtDCI, &st);
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

    st.site = &pl_emlrtRSI;
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
    emxEnsureCapacity_real_T(&b_st, Xt, i, &ll_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&b_st, G, i, &pl_emlrtRTEI);
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

  i = b_Xt->size[0];
  b_Xt->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, b_Xt, i, &dl_emlrtRTEI);
  b_loop_ub = phi0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    b_Xt->data[i] = phi0->data[i];
  }

  i = c->size[0];
  c->size[0] = c0->size[0];
  emxEnsureCapacity_real_T(sp, c, i, &el_emlrtRTEI);
  b_loop_ub = c0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    c->data[i] = c0->data[i];
  }

  emxInit_int8_T(sp, &e1, 1, &fl_emlrtRTEI, true);
  c_b = 1.0;
  i = e1->size[0];
  e1->size[0] = phi0->size[0];
  emxEnsureCapacity_int8_T(sp, e1, i, &fl_emlrtRTEI);
  b_loop_ub = phi0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    e1->data[i] = 0;
  }

  if (1 > phi0->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, phi0->size[0], &df_emlrtBCI, sp);
  }

  e1->data[0] = 1;
  if (1 > phi0->size[0]) {
    b_loop_ub = 0;
  } else {
    if (1 > data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data->size[0], &lf_emlrtBCI, sp);
    }

    if ((phi0->size[0] < 1) || (phi0->size[0] > data->size[0])) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, data->size[0],
        &kf_emlrtBCI, sp);
    }

    b_loop_ub = phi0->size[0];
  }

  emxInit_real_T(sp, &X_p, 1, &gl_emlrtRTEI, true);
  i = X_p->size[0];
  X_p->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, X_p, i, &gl_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    X_p->data[i] = data->data[i + data->size[0]];
  }

  if (1 > phi0->size[0]) {
    c_loop_ub = 0;
  } else {
    if (1 > X1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, X1->size[0], &hf_emlrtBCI, sp);
    }

    if ((phi0->size[0] < 1) || (phi0->size[0] > X1->size[0])) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, X1->size[0], &gf_emlrtBCI,
        sp);
    }

    c_loop_ub = phi0->size[0];
  }

  emxInit_real_T(sp, &X1_p, 2, &hl_emlrtRTEI, true);
  d_loop_ub = X1->size[1];
  i = X1_p->size[0] * X1_p->size[1];
  X1_p->size[0] = c_loop_ub;
  X1_p->size[1] = X1->size[1];
  emxEnsureCapacity_real_T(sp, X1_p, i, &hl_emlrtRTEI);
  for (i = 0; i < d_loop_ub; i++) {
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      X1_p->data[i1 + X1_p->size[0] * i] = X1->data[i1 + X1->size[0] * i];
    }
  }

  if (1 > phi0->size[0]) {
    i = 0;
  } else {
    if (1 > data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data->size[0], &ff_emlrtBCI, sp);
    }

    if ((phi0->size[0] < 1) || (phi0->size[0] > data->size[0])) {
      emlrtDynamicBoundsCheckR2012b(phi0->size[0], 1, data->size[0],
        &ef_emlrtBCI, sp);
    }

    i = phi0->size[0];
  }

  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &y_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &X_hat, 1, &il_emlrtRTEI, true);
  i2 = X_hat->size[0];
  X_hat->size[0] = i1;
  emxEnsureCapacity_real_T(sp, X_hat, i2, &il_emlrtRTEI);
  d_loop_ub = data->size[0] - phi0->size[0];
  if (d_loop_ub < 0) {
    emlrtNonNegativeCheckR2012b(d_loop_ub, &y_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < d_loop_ub; i1++) {
    X_hat->data[i1] = 0.0;
  }

  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &hb_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &X1_hat, 2, &jl_emlrtRTEI, true);
  i2 = X1_hat->size[0] * X1_hat->size[1];
  X1_hat->size[0] = i1;
  X1_hat->size[1] = c0->size[0];
  emxEnsureCapacity_real_T(sp, X1_hat, i2, &jl_emlrtRTEI);
  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &x_emlrtDCI, sp);
  }

  d_loop_ub = i1 * c0->size[0];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    X1_hat->data[i1] = 0.0;
  }

  i1 = data->size[0] - phi0->size[0];
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(i1, &w_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &Y_hat, 1, &kl_emlrtRTEI, true);
  i2 = Y_hat->size[0];
  Y_hat->size[0] = i1;
  emxEnsureCapacity_real_T(sp, Y_hat, i2, &kl_emlrtRTEI);
  d_loop_ub = data->size[0] - phi0->size[0];
  if (d_loop_ub < 0) {
    emlrtNonNegativeCheckR2012b(d_loop_ub, &w_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < d_loop_ub; i1++) {
    Y_hat->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &inv_Sigma, 2, &fn_emlrtRTEI, true);
  emxInit_real_T(sp, &d_b, 2, &nl_emlrtRTEI, true);
  st.site = &ql_emlrtRSI;
  kron(&st, G, G, kron_G);
  st.site = &rl_emlrtRSI;
  eye(&st, kron_G->size[0], d_b);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])d_b->size, *(int32_T (*)[2])
    kron_G->size, &hc_emlrtECI, sp);
  st.site = &rl_emlrtRSI;
  i1 = inv_Sigma->size[0] * inv_Sigma->size[1];
  inv_Sigma->size[0] = d_b->size[0];
  inv_Sigma->size[1] = d_b->size[1];
  emxEnsureCapacity_real_T(&st, inv_Sigma, i1, &ml_emlrtRTEI);
  d_loop_ub = d_b->size[0] * d_b->size[1];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    inv_Sigma->data[i1] = d_b->data[i1] - kron_G->data[i1];
  }

  b_st.site = &rl_emlrtRSI;
  inv(&b_st, inv_Sigma, kron_G);
  i1 = d_b->size[0] * d_b->size[1];
  d_b->size[0] = e1->size[0];
  d_b->size[1] = e1->size[0];
  emxEnsureCapacity_real_T(&st, d_b, i1, &nl_emlrtRTEI);
  d_loop_ub = e1->size[0];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    e_loop_ub = e1->size[0];
    for (i2 = 0; i2 < e_loop_ub; i2++) {
      d_b->data[i2 + d_b->size[0] * i1] = e1->data[i2] * e1->data[i1];
    }
  }

  b_st.site = &rl_emlrtRSI;
  vec(&b_st, d_b);
  b_st.site = &nd_emlrtRSI;
  c_dynamic_size_checks(&b_st, kron_G, d_b, kron_G->size[1], d_b->size[0]);
  emxInit_real_T(&st, &vec_Sigma, 2, &ol_emlrtRTEI, true);
  if ((kron_G->size[1] == 1) || (d_b->size[0] == 1)) {
    i1 = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = kron_G->size[0];
    vec_Sigma->size[1] = d_b->size[1];
    emxEnsureCapacity_real_T(&st, vec_Sigma, i1, &ol_emlrtRTEI);
    d_loop_ub = kron_G->size[0];
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      e_loop_ub = d_b->size[1];
      for (i2 = 0; i2 < e_loop_ub; i2++) {
        vec_Sigma->data[i1 + vec_Sigma->size[0] * i2] = 0.0;
        input_sizes_idx_1 = kron_G->size[1];
        for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
          vec_Sigma->data[i1 + vec_Sigma->size[0] * i2] += kron_G->data[i1 +
            kron_G->size[0] * i3] * d_b->data[i3 + d_b->size[0] * i2];
        }
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    c_mtimes(&b_st, kron_G, d_b, vec_Sigma);
  }

  st.site = &sl_emlrtRSI;
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

  emxInit_real_T(&st, &Sigma, 2, &ql_emlrtRTEI, true);
  i1 = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = phi0->size[0];
  Sigma->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, Sigma, i1, &ql_emlrtRTEI);
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
  st.site = &tl_emlrtRSI;
  inv(&st, &b_vec_Sigma, inv_Sigma);
  logpost = 0.0;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &kb_emlrtRTEI, sp);
  emxInit_real_T(sp, &b_Y, 1, &sl_emlrtRTEI, true);
  emxInit_real_T(sp, &b_X_p, 2, &pb_emlrtRTEI, true);
  if (0 <= (int32_T)n - 1) {
    i4 = data->size[0] + (int32_T)(1.0 - ((real_T)phi0->size[0] + 1.0));
    i5 = X1->size[1];
    i6 = X1->size[1];
    f_loop_ub = b_loop_ub;
    g_loop_ub = i;
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

    i7 = c_loop_ub;
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

    i8 = data->size[0];
    i9 = data->size[0];
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

    h_loop_ub = e1->size[0];
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

    i_loop_ub = d_result * f_input_sizes_idx_1;
    if (empty_non_axis_sizes || ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      g_input_sizes_idx_1 = X1->size[1];
    } else {
      g_input_sizes_idx_1 = 0;
    }

    j_loop_ub = PHI0->size[0] * PHI0->size[1];
    k_loop_ub = C0->size[0] * C0->size[1];
  }

  emxInit_real_T(sp, &y, 1, &xm_emlrtRTEI, true);
  emxInitMatrix_cell_wrap_1(sp, b_reshapes, &fe_emlrtRTEI, true);
  emxInit_real_T(sp, &b_X1, 2, &hm_emlrtRTEI, true);
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
      st.site = &uo_emlrtRSI;
      clc(&st, &ib_emlrtMCI);
      if (!b1) {
        for (i1 = 0; i1 < 37; i1++) {
          b_cv1[i1] = '=';
        }

        b1 = true;
      }

      st.site = &kn_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, b_cv1), &jb_emlrtMCI);
      st.site = &jn_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, b_cv2), &kb_emlrtMCI);
      st.site = &ul_emlrtRSI;
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

      st.site = &in_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, b_cv4), &lb_emlrtMCI);
      b_y = NULL;
      m2 = emlrtCreateString1(' ');
      emlrtAssign(&b_y, m2);
      st.site = &io_emlrtRSI;
      disp(&st, b_y, &mb_emlrtMCI);
      st.site = &on_emlrtRSI;
      disp(&st, g_emlrt_marshallOut(&st, cv5), &nb_emlrtMCI);
      b_y = NULL;
      m4 = emlrtCreateDoubleScalar(c_b);
      emlrtAssign(&b_y, m4);
      st.site = &ho_emlrtRSI;
      disp(&st, b_y, &ob_emlrtMCI);
      st.site = &qn_emlrtRSI;
      disp(&st, h_emlrt_marshallOut(&st, cv6), &pb_emlrtMCI);
      i1 = Xt->size[0] * Xt->size[1];
      Xt->size[0] = 1;
      d_loop_ub = c->size[0];
      Xt->size[1] = c->size[0];
      emxEnsureCapacity_real_T(sp, Xt, i1, &am_emlrtRTEI);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        Xt->data[i1] = c->data[i1];
      }

      st.site = &go_emlrtRSI;
      disp(&st, i_emlrt_marshallOut(Xt), &qb_emlrtMCI);
      st.site = &dn_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(&st, cv7), &rb_emlrtMCI);
      i1 = Xt->size[0] * Xt->size[1];
      Xt->size[0] = 1;
      d_loop_ub = b_Xt->size[0];
      Xt->size[1] = b_Xt->size[0];
      emxEnsureCapacity_real_T(sp, Xt, i1, &dm_emlrtRTEI);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        Xt->data[i1] = b_Xt->data[i1];
      }

      st.site = &fo_emlrtRSI;
      disp(&st, i_emlrt_marshallOut(Xt), &sb_emlrtMCI);
      st.site = &sn_emlrtRSI;
      disp(&st, j_emlrt_marshallOut(&st, cv2), &tb_emlrtMCI);
      b_y = NULL;
      m6 = emlrtCreateDoubleScalar(sig2);
      emlrtAssign(&b_y, m6);
      st.site = &eo_emlrtRSI;
      disp(&st, b_y, &ub_emlrtMCI);
      st.site = &un_emlrtRSI;
      disp(&st, k_emlrt_marshallOut(&st, cv3), &vb_emlrtMCI);
      b_y = NULL;
      m7 = emlrtCreateDoubleScalar(logpost);
      emlrtAssign(&b_y, m7);
      st.site = &do_emlrtRSI;
      disp(&st, b_y, &wb_emlrtMCI);
    }

    emlrtForLoopVectorCheckR2012b((real_T)p + 1.0, 1.0, T, mxDOUBLE_CLASS, i4,
      &jb_emlrtRTEI, sp);
    for (nx = 0; nx < i4; nx++) {
      b_i = ((uint32_T)p + nx) + 1U;
      st.site = &vl_emlrtRSI;
      d_loop_ub = (int32_T)-((0.0 - (real_T)p) - -1.0);
      i1 = d_loop_ub + 1;
      i2 = b_b->size[0];
      b_b->size[0] = i1;
      emxEnsureCapacity_real_T(&st, b_b, i2, &sl_emlrtRTEI);
      for (i2 = 0; i2 <= d_loop_ub; i2++) {
        i3 = (int32_T)((real_T)b_i + (-1.0 - (real_T)i2));
        if ((i3 < 1) || (i3 > data->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, data->size[0], &ke_emlrtBCI, &st);
        }

        b_b->data[i2] = X->data[i3 - 1];
      }

      b_st.site = &nd_emlrtRSI;
      d_dynamic_size_checks(&b_st, b_Xt, b_b, b_Xt->size[0], (int32_T)-((0.0 -
        (real_T)p) - -1.0) + 1);
      d_loop_ub = b_Xt->size[0];
      if ((b_Xt->size[0] == 1) || (i1 == 1)) {
        logpost = 0.0;
        for (i1 = 0; i1 < d_loop_ub; i1++) {
          logpost += b_Xt->data[i1] * b_b->data[i1];
        }
      } else {
        b_st.site = &md_emlrtRSI;
        logpost = d_mtimes(&b_st, b_Xt, b_b);
      }

      i1 = (int32_T)((real_T)b_i - (real_T)p);
      if ((i1 < 1) || (i1 > X_hat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, X_hat->size[0], &ie_emlrtBCI, sp);
      }

      if (((int32_T)b_i < 1) || ((int32_T)b_i > data->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, data->size[0],
          &je_emlrtBCI, sp);
      }

      X_hat_tmp = (int32_T)b_i - 1;
      X_hat->data[i1 - 1] = data->data[X_hat_tmp + data->size[0]] - logpost;
      i1 = (int32_T)b_i;
      if ((i1 < 1) || (i1 > X1->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, X1->size[0], &cf_emlrtBCI, sp);
      }

      st.site = &wl_emlrtRSI;
      d_loop_ub = X1->size[1];
      b_st.site = &wl_emlrtRSI;
      e_loop_ub = div_s32_floor(&b_st, 1 - p, -1);
      i1 = e_loop_ub + 1;
      i2 = d_b->size[0] * d_b->size[1];
      d_b->size[0] = i1;
      d_b->size[1] = X1->size[1];
      emxEnsureCapacity_real_T(&st, d_b, i2, &bm_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        for (i3 = 0; i3 <= e_loop_ub; i3++) {
          i10 = ((int32_T)b_i - i3) - 1;
          if ((i10 < 1) || (i10 > X1->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i10, 1, X1->size[0], &he_emlrtBCI, &st);
          }

          d_b->data[i3 + d_b->size[0] * i2] = X1->data[(i10 + X1->size[0] * i2)
            - 1];
        }
      }

      b_st.site = &nd_emlrtRSI;
      e_st.site = &wl_emlrtRSI;
      e_dynamic_size_checks(&b_st, b_Xt, d_b, b_Xt->size[0], div_s32_floor(&e_st,
        1 - p, -1) + 1);
      if ((b_Xt->size[0] == 1) || (i1 == 1)) {
        i2 = Xt->size[0] * Xt->size[1];
        Xt->size[0] = 1;
        d_loop_ub = d_b->size[1];
        Xt->size[1] = d_b->size[1];
        emxEnsureCapacity_real_T(&st, Xt, i2, &fm_emlrtRTEI);
        for (i2 = 0; i2 < d_loop_ub; i2++) {
          Xt->data[i2] = 0.0;
          input_sizes_idx_1 = b_Xt->size[0];
          for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
            Xt->data[i2] += b_Xt->data[i3] * d_b->data[i3 + d_b->size[0] * i2];
          }
        }
      } else {
        b_st.site = &md_emlrtRSI;
        e_mtimes(&b_st, b_Xt, d_b, Xt);
      }

      d_loop_ub = X1->size[1];
      i2 = b_X1->size[0] * b_X1->size[1];
      b_X1->size[0] = 1;
      b_X1->size[1] = X1->size[1];
      emxEnsureCapacity_real_T(sp, b_X1, i2, &hm_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        b_X1->data[i2] = X1->data[X_hat_tmp + X1->size[0] * i2];
      }

      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])b_X1->size, *(int32_T (*)[2])
        Xt->size, &gc_emlrtECI, sp);
      i2 = (int32_T)b_i - p;
      if ((i2 < 1) || (i2 > X1_hat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, X1_hat->size[0], &bf_emlrtBCI, sp);
      }

      i3 = i2 - 1;
      d_loop_ub = X1->size[1];
      i10 = b_X1->size[0] * b_X1->size[1];
      b_X1->size[0] = 1;
      b_X1->size[1] = X1->size[1];
      emxEnsureCapacity_real_T(sp, b_X1, i10, &hm_emlrtRTEI);
      for (i10 = 0; i10 < d_loop_ub; i10++) {
        b_X1->data[i10] = X1->data[X_hat_tmp + X1->size[0] * i10];
      }

      input_sizes[0] = 1;
      input_sizes[1] = X1_hat->size[1];
      emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_X1->size[0], 2,
        &fc_emlrtECI, sp);
      d_loop_ub = X1->size[1];
      for (i10 = 0; i10 < d_loop_ub; i10++) {
        X1_hat->data[i3 + X1_hat->size[0] * i10] = X1->data[X_hat_tmp + X1->
          size[0] * i10] - Xt->data[i10];
      }

      st.site = &xl_emlrtRSI;
      i3 = b_b->size[0];
      b_b->size[0] = i1;
      emxEnsureCapacity_real_T(&st, b_b, i3, &sl_emlrtRTEI);
      for (i3 = 0; i3 <= e_loop_ub; i3++) {
        i10 = ((int32_T)b_i - i3) - 1;
        if ((i10 < 1) || (i10 > data->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i10, 1, data->size[0], &fe_emlrtBCI, &st);
        }

        b_b->data[i3] = Y->data[i10 - 1];
      }

      b_st.site = &nd_emlrtRSI;
      e_st.site = &xl_emlrtRSI;
      d_dynamic_size_checks(&b_st, b_Xt, b_b, b_Xt->size[0], div_s32_floor(&e_st,
        1 - p, -1) + 1);
      d_loop_ub = b_Xt->size[0];
      if ((b_Xt->size[0] == 1) || (i1 == 1)) {
        logpost = 0.0;
        for (i1 = 0; i1 < d_loop_ub; i1++) {
          logpost += b_Xt->data[i1] * b_b->data[i1];
        }
      } else {
        b_st.site = &md_emlrtRSI;
        logpost = d_mtimes(&b_st, b_Xt, b_b);
      }

      if (i2 > Y_hat->size[0]) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, Y_hat->size[0], &de_emlrtBCI, sp);
      }

      if (((int32_T)b_i < 1) || ((int32_T)b_i > data->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, data->size[0],
          &ee_emlrtBCI, sp);
      }

      Y_hat->data[i2 - 1] = data->data[X_hat_tmp] - logpost;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    st.site = &yl_emlrtRSI;
    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, X1_hat, c, X1_hat->size[1], c->size[0]);
    if ((X1_hat->size[1] == 1) || (c->size[0] == 1)) {
      d_loop_ub = X1_hat->size[0];
      i1 = b_b->size[0];
      b_b->size[0] = X1_hat->size[0];
      emxEnsureCapacity_real_T(&st, b_b, i1, &tl_emlrtRTEI);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        b_b->data[i1] = 0.0;
        e_loop_ub = X1_hat->size[1];
        for (i2 = 0; i2 < e_loop_ub; i2++) {
          b_b->data[i1] += X1_hat->data[i1 + X1_hat->size[0] * i2] * c->data[i2];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      b_mtimes(&b_st, X1_hat, c, b_b);
    }

    if (Y_hat->size[0] != b_b->size[0]) {
      emlrtSizeEqCheck1DR2012b(Y_hat->size[0], b_b->size[0], &ec_emlrtECI, sp);
    }

    st.site = &yl_emlrtRSI;
    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, X1_p, c, i5, c->size[0]);
    if ((i6 == 1) || (c->size[0] == 1)) {
      i1 = b_Xt->size[0];
      b_Xt->size[0] = X1_p->size[0];
      emxEnsureCapacity_real_T(&st, b_Xt, i1, &ul_emlrtRTEI);
      d_loop_ub = X1_p->size[0];
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        b_Xt->data[i1] = 0.0;
        e_loop_ub = X1_p->size[1];
        for (i2 = 0; i2 < e_loop_ub; i2++) {
          b_Xt->data[i1] += X1_p->data[i1 + X1_p->size[0] * i2] * c->data[i2];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      b_mtimes(&b_st, X1_p, c, b_Xt);
    }

    if (i != b_Xt->size[0]) {
      emlrtSizeEqCheck1DR2012b(i, b_Xt->size[0], &dc_emlrtECI, sp);
    }

    d_loop_ub = Y_hat->size[0];
    i1 = b_b->size[0];
    b_b->size[0] = Y_hat->size[0];
    emxEnsureCapacity_real_T(sp, b_b, i1, &wl_emlrtRTEI);
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      b_b->data[i1] = Y_hat->data[i1] - b_b->data[i1];
    }

    i1 = c->size[0];
    c->size[0] = f_loop_ub;
    emxEnsureCapacity_real_T(sp, c, i1, &sl_emlrtRTEI);
    for (i1 = 0; i1 < f_loop_ub; i1++) {
      c->data[i1] = X->data[i1];
    }

    i1 = b_Xt->size[0];
    b_Xt->size[0] = i;
    emxEnsureCapacity_real_T(sp, b_Xt, i1, &xl_emlrtRTEI);
    for (i1 = 0; i1 < g_loop_ub; i1++) {
      b_Xt->data[i1] = Y->data[i1] - b_Xt->data[i1];
    }

    st.site = &yl_emlrtRSI;
    Gen_beta(&st, c_b, X_hat, b_b, c, b_Xt, kk, vv, inv_Sigma, sig2_inv, mode,
             aa, bb, &logpost, &logprior_b);
    c_b = logpost;
    i1 = (int32_T)(iter + 1U);
    if (i1 > bm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, bm->size[0], &ge_emlrtBCI, sp);
    }

    bm->data[i1 - 1] = logpost;
    i2 = b_b->size[0];
    b_b->size[0] = f_loop_ub;
    emxEnsureCapacity_real_T(sp, b_b, i2, &em_emlrtRTEI);
    for (i2 = 0; i2 < f_loop_ub; i2++) {
      b_b->data[i2] = X->data[i2] * logpost;
    }

    if (i != b_b->size[0]) {
      emlrtSizeEqCheck1DR2012b(i, b_b->size[0], &cc_emlrtECI, sp);
    }

    i2 = b_Xt->size[0];
    b_Xt->size[0] = X_hat->size[0];
    emxEnsureCapacity_real_T(sp, b_Xt, i2, &gm_emlrtRTEI);
    d_loop_ub = X_hat->size[0];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_Xt->data[i2] = X_hat->data[i2] * logpost;
    }

    if (Y_hat->size[0] != b_Xt->size[0]) {
      emlrtSizeEqCheck1DR2012b(Y_hat->size[0], b_Xt->size[0], &bc_emlrtECI, sp);
    }

    i2 = b_b->size[0];
    b_b->size[0] = i;
    emxEnsureCapacity_real_T(sp, b_b, i2, &jm_emlrtRTEI);
    for (i2 = 0; i2 < g_loop_ub; i2++) {
      b_b->data[i2] = Y->data[i2] - b_b->data[i2];
    }

    d_loop_ub = Y_hat->size[0];
    i2 = b_Xt->size[0];
    b_Xt->size[0] = Y_hat->size[0];
    emxEnsureCapacity_real_T(sp, b_Xt, i2, &km_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_Xt->data[i2] = Y_hat->data[i2] - b_Xt->data[i2];
    }

    st.site = &am_emlrtRSI;
    Gen_c(&st, X1_p, b_b, X1_hat, b_Xt, inv_Sigma, c0, precC0, sig2_inv, p, T, c);
    i2 = iter + 1;
    if (i2 > cm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, cm->size[0], &xe_emlrtBCI, sp);
    }

    input_sizes[0] = 1;
    input_sizes[1] = cm->size[1];
    sizes[0] = 1;
    d_loop_ub = c->size[0];
    sizes[1] = c->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &sizes[0], 2, &xb_emlrtECI,
      sp);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      cm->data[iter + cm->size[0] * i2] = c->data[i2];
    }

    st.site = &bm_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    if ((b_loop_ub != b_result) && (b_loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i7 != b_result) && ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    st.site = &bm_emlrtRSI;
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

    i2 = b_Y->size[0];
    b_Y->size[0] = i;
    emxEnsureCapacity_real_T(sp, b_Y, i2, &sl_emlrtRTEI);
    for (i2 = 0; i2 < g_loop_ub; i2++) {
      b_Y->data[i2] = Y->data[i2];
    }

    i2 = b_X_p->size[0] * b_X_p->size[1];
    b_X_p->size[0] = b_result;
    e_loop_ub = b_input_sizes_idx_1;
    b_X_p->size[1] = b_input_sizes_idx_1 + c_input_sizes_idx_1;
    emxEnsureCapacity_real_T(sp, b_X_p, i2, &pb_emlrtRTEI);
    for (i2 = 0; i2 < e_loop_ub; i2++) {
      for (i3 = 0; i3 < b_result; i3++) {
        b_X_p->data[i3] = X_p->data[i3];
      }
    }

    for (i2 = 0; i2 < c_input_sizes_idx_1; i2++) {
      for (i3 = 0; i3 < b_result; i3++) {
        b_X_p->data[i3 + b_X_p->size[0] * (i2 + b_input_sizes_idx_1)] =
          X1_p->data[i3 + b_result * i2];
      }
    }

    i2 = result->size[0] * result->size[1];
    result->size[0] = nx;
    e_loop_ub = sizes_idx_1;
    result->size[1] = sizes_idx_1 + d_loop_ub;
    emxEnsureCapacity_real_T(sp, result, i2, &pb_emlrtRTEI);
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

    d_loop_ub = c->size[0];
    i2 = b_b->size[0];
    b_b->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(sp, b_b, i2, &lm_emlrtRTEI);
    b_b->data[0] = logpost;
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_b->data[i2 + 1] = c->data[i2];
    }

    st.site = &bm_emlrtRSI;
    sig2 = Gen_sig2(&st, b_Y, b_X_p, result, Y_hat, inv_Sigma, b_b, a0, d0);
    sig2_inv = 1.0 / sig2;
    if (i1 > sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, sig2m->size[0], &ce_emlrtBCI, sp);
    }

    sig2m->data[i1 - 1] = sig2;
    st.site = &cm_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    if (i8 != 0) {
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
    if ((i9 != nx) && (data->size[0] != 0)) {
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

    st.site = &cm_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    if ((b_loop_ub != c_result) && (b_loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i7 != c_result) && ((c_loop_ub != 0) && (i2 != 0))) {
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
        result->data[i3] = X->data[i3];
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
    emxEnsureCapacity_real_T(sp, b_Y, i2, &sl_emlrtRTEI);
    for (i2 = 0; i2 < g_loop_ub; i2++) {
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
    i2 = b_b->size[0];
    b_b->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(sp, b_b, i2, &mm_emlrtRTEI);
    b_b->data[0] = logpost;
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_b->data[i2 + 1] = c->data[i2];
    }

    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = G->size[0];
    kron_G->size[1] = G->size[1];
    emxEnsureCapacity_real_T(sp, kron_G, i2, &nm_emlrtRTEI);
    d_loop_ub = G->size[0] * G->size[1] - 1;
    for (i2 = 0; i2 <= d_loop_ub; i2++) {
      kron_G->data[i2] = G->data[i2];
    }

    st.site = &cm_emlrtRSI;
    Gen_G(&st, Y, result, b_Y, b_X_p, Sigma, inv_Sigma, b_b, sig2_inv, kron_G,
          phi0, precphi0, PHI0, G);
    if (1 > G->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, G->size[0], &af_emlrtBCI, sp);
    }

    d_loop_ub = G->size[1];
    i2 = b_Xt->size[0];
    b_Xt->size[0] = G->size[1];
    emxEnsureCapacity_real_T(sp, b_Xt, i2, &om_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_Xt->data[i2] = G->data[G->size[0] * i2];
    }

    i2 = iter + 1;
    if (i2 > phim->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, phim->size[0], &se_emlrtBCI, sp);
    }

    input_sizes[0] = 1;
    input_sizes[1] = phim->size[1];
    sizes[0] = 1;
    d_loop_ub = b_Xt->size[0];
    sizes[1] = b_Xt->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &sizes[0], 2, &wb_emlrtECI,
      sp);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      phim->data[iter + phim->size[0] * i2] = b_Xt->data[i2];
    }

    st.site = &dm_emlrtRSI;
    kron(&st, G, G, kron_G);
    st.site = &em_emlrtRSI;
    eye(&st, kron_G->size[0], d_b);
    emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])d_b->size, *(int32_T (*)[2])
      kron_G->size, &ac_emlrtECI, sp);
    st.site = &em_emlrtRSI;
    i2 = inv_Sigma->size[0] * inv_Sigma->size[1];
    inv_Sigma->size[0] = d_b->size[0];
    inv_Sigma->size[1] = d_b->size[1];
    emxEnsureCapacity_real_T(&st, inv_Sigma, i2, &pm_emlrtRTEI);
    d_loop_ub = d_b->size[0] * d_b->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      inv_Sigma->data[i2] = d_b->data[i2] - kron_G->data[i2];
    }

    b_st.site = &em_emlrtRSI;
    inv(&b_st, inv_Sigma, kron_G);
    i2 = d_b->size[0] * d_b->size[1];
    d_b->size[0] = e1->size[0];
    d_b->size[1] = e1->size[0];
    emxEnsureCapacity_real_T(&st, d_b, i2, &qm_emlrtRTEI);
    for (i2 = 0; i2 < h_loop_ub; i2++) {
      d_loop_ub = e1->size[0];
      for (i3 = 0; i3 < d_loop_ub; i3++) {
        d_b->data[i3 + d_b->size[0] * i2] = e1->data[i3] * e1->data[i2];
      }
    }

    b_st.site = &em_emlrtRSI;
    vec(&b_st, d_b);
    b_st.site = &nd_emlrtRSI;
    c_dynamic_size_checks(&b_st, kron_G, d_b, kron_G->size[1], d_b->size[0]);
    if ((kron_G->size[1] == 1) || (d_b->size[0] == 1)) {
      i2 = vec_Sigma->size[0] * vec_Sigma->size[1];
      vec_Sigma->size[0] = kron_G->size[0];
      vec_Sigma->size[1] = d_b->size[1];
      emxEnsureCapacity_real_T(&st, vec_Sigma, i2, &rm_emlrtRTEI);
      d_loop_ub = kron_G->size[0];
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        e_loop_ub = d_b->size[1];
        for (i3 = 0; i3 < e_loop_ub; i3++) {
          vec_Sigma->data[i2 + vec_Sigma->size[0] * i3] = 0.0;
          input_sizes_idx_1 = kron_G->size[1];
          for (i10 = 0; i10 < input_sizes_idx_1; i10++) {
            vec_Sigma->data[i2 + vec_Sigma->size[0] * i3] += kron_G->data[i2 +
              kron_G->size[0] * i10] * d_b->data[i10 + d_b->size[0] * i3];
          }
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      c_mtimes(&b_st, kron_G, d_b, vec_Sigma);
    }

    st.site = &fm_emlrtRSI;
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
    emxEnsureCapacity_real_T(sp, inv_Sigma, i2, &sm_emlrtRTEI);
    for (i2 = 0; i2 < p; i2++) {
      for (i3 = 0; i3 < p; i3++) {
        inv_Sigma->data[i3 + inv_Sigma->size[0] * i2] = vec_Sigma->data[i2 + p *
          i3];
      }
    }

    input_sizes[0] = p;
    input_sizes[1] = p;
    emlrtSizeEqCheckNDR2012b(input_sizes, *(int32_T (*)[2])inv_Sigma->size,
      &yb_emlrtECI, sp);
    i2 = Sigma->size[0] * Sigma->size[1];
    Sigma->size[0] = p;
    Sigma->size[1] = p;
    emxEnsureCapacity_real_T(sp, Sigma, i2, &tm_emlrtRTEI);
    for (i2 = 0; i2 < p; i2++) {
      for (i3 = 0; i3 < p; i3++) {
        Sigma->data[i3 + Sigma->size[0] * i2] = 0.5 * (vec_Sigma->data[i3 + p *
          i2] + vec_Sigma->data[i2 + p * i3]);
      }
    }

    st.site = &gm_emlrtRSI;
    inv(&st, Sigma, inv_Sigma);
    i2 = d_b->size[0] * d_b->size[1];
    d_b->size[0] = Sigma->size[0];
    d_b->size[1] = Sigma->size[1];
    emxEnsureCapacity_real_T(sp, d_b, i2, &um_emlrtRTEI);
    d_loop_ub = Sigma->size[0] * Sigma->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      d_b->data[i2] = Sigma->data[i2];
    }

    st.site = &hm_emlrtRSI;
    vec(&st, d_b);
    i2 = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = d_b->size[1];
    d_loop_ub = d_b->size[0];
    vec_Sigma->size[1] = d_b->size[0];
    emxEnsureCapacity_real_T(sp, vec_Sigma, i2, &vm_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      e_loop_ub = d_b->size[1];
      for (i3 = 0; i3 < e_loop_ub; i3++) {
        vec_Sigma->data[i3 + vec_Sigma->size[0] * i2] = d_b->data[i2 + d_b->
          size[0] * i3];
      }
    }

    i2 = iter + 1;
    if (i2 > Sigmam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, Sigmam->size[0], &le_emlrtBCI, sp);
    }

    if (1 > vec_Sigma->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_Sigma->size[0], &ye_emlrtBCI, sp);
    }

    d_loop_ub = vec_Sigma->size[1];
    i2 = Xt->size[0] * Xt->size[1];
    Xt->size[0] = 1;
    Xt->size[1] = vec_Sigma->size[1];
    emxEnsureCapacity_real_T(sp, Xt, i2, &wm_emlrtRTEI);
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      Xt->data[i2] = vec_Sigma->data[vec_Sigma->size[0] * i2];
    }

    input_sizes[0] = 1;
    input_sizes[1] = Sigmam->size[1];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &Xt->size[0], 2,
      &vb_emlrtECI, sp);
    d_loop_ub = vec_Sigma->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      Sigmam->data[iter + Sigmam->size[0] * i2] = vec_Sigma->data
        [vec_Sigma->size[0] * i2];
    }

    /*  likelihood */
    st.site = &im_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    if ((b_loop_ub != d_result) && (b_loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((i7 != d_result) && ((c_loop_ub != 0) && (X1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    i2 = b_reshapes[0].f1->size[0] * b_reshapes[0].f1->size[1];
    b_reshapes[0].f1->size[0] = d_result;
    b_reshapes[0].f1->size[1] = f_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, b_reshapes[0].f1, i2, &qc_emlrtRTEI);
    for (i2 = 0; i2 < i_loop_ub; i2++) {
      b_reshapes[0].f1->data[i2] = X->data[i2];
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

    st.site = &im_emlrtRSI;
    d_loop_ub = f_input_sizes_idx_1;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = d_result;
    kron_G->size[1] = f_input_sizes_idx_1 + g_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, kron_G, i2, &xm_emlrtRTEI);
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
    i2 = b_b->size[0];
    b_b->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(&st, b_b, i2, &ym_emlrtRTEI);
    b_b->data[0] = logpost;
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_b->data[i2 + 1] = c->data[i2];
    }

    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, result, b_b, kron_G->size[1], b_b->size[0]);
    if ((kron_G->size[1] == 1) || (b_b->size[0] == 1)) {
      d_loop_ub = result->size[0];
      i2 = y->size[0];
      y->size[0] = result->size[0];
      emxEnsureCapacity_real_T(&st, y, i2, &vd_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        y->data[i2] = 0.0;
        e_loop_ub = result->size[1];
        for (i3 = 0; i3 < e_loop_ub; i3++) {
          y->data[i2] += result->data[i2 + result->size[0] * i3] * b_b->data[i3];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      b_mtimes(&b_st, result, b_b, y);
    }

    st.site = &im_emlrtRSI;
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
    emxEnsureCapacity_real_T(sp, b_Y, i2, &sl_emlrtRTEI);
    for (i2 = 0; i2 < g_loop_ub; i2++) {
      b_Y->data[i2] = Y->data[i2];
    }

    st.site = &im_emlrtRSI;
    lik_1 = lnpdfmvn4(&st, b_Y, y, kron_G);
    st.site = &jm_emlrtRSI;
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

    st.site = &jm_emlrtRSI;
    d_loop_ub = h_input_sizes_idx_1;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = nx;
    kron_G->size[1] = h_input_sizes_idx_1 + input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, kron_G, i2, &an_emlrtRTEI);
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
    i2 = b_b->size[0];
    b_b->size[0] = c->size[0] + 1;
    emxEnsureCapacity_real_T(&st, b_b, i2, &bn_emlrtRTEI);
    b_b->data[0] = logpost;
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      b_b->data[i2 + 1] = c->data[i2];
    }

    b_st.site = &nd_emlrtRSI;
    b_dynamic_size_checks(&b_st, result, b_b, kron_G->size[1], b_b->size[0]);
    if ((kron_G->size[1] == 1) || (b_b->size[0] == 1)) {
      d_loop_ub = result->size[0];
      i2 = y->size[0];
      y->size[0] = result->size[0];
      emxEnsureCapacity_real_T(&st, y, i2, &vd_emlrtRTEI);
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        y->data[i2] = 0.0;
        e_loop_ub = result->size[1];
        for (i3 = 0; i3 < e_loop_ub; i3++) {
          y->data[i2] += result->data[i2 + result->size[0] * i3] * b_b->data[i3];
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      b_mtimes(&b_st, result, b_b, y);
    }

    st.site = &jm_emlrtRSI;
    eye(&st, T - p, d_b);
    st.site = &jm_emlrtRSI;
    d_loop_ub = d_b->size[0] * d_b->size[1];
    for (i2 = 0; i2 < d_loop_ub; i2++) {
      d_b->data[i2] *= sig2;
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, d_b);
    st.site = &jm_emlrtRSI;
    logpost = lnpdfmvn4(&st, Y_hat, y, d_b);

    /*  prior */
    st.site = &km_emlrtRSI;
    logprior_sig2 = lnpdfig(&st, sig2, a0 / 2.0, d0 / 2.0);
    st.site = &lm_emlrtRSI;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = PHI0->size[0];
    kron_G->size[1] = PHI0->size[1];
    emxEnsureCapacity_real_T(&st, kron_G, i2, &wd_emlrtRTEI);
    for (i2 = 0; i2 < j_loop_ub; i2++) {
      kron_G->data[i2] = PHI0->data[i2];
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, kron_G);
    st.site = &lm_emlrtRSI;
    logprior_phi = lnpdfmvn4(&st, b_Xt, phi0, kron_G);
    st.site = &mm_emlrtRSI;
    i2 = kron_G->size[0] * kron_G->size[1];
    kron_G->size[0] = C0->size[0];
    kron_G->size[1] = C0->size[1];
    emxEnsureCapacity_real_T(&st, kron_G, i2, &wd_emlrtRTEI);
    for (i2 = 0; i2 < k_loop_ub; i2++) {
      kron_G->data[i2] = C0->data[i2];
    }

    b_st.site = &xf_emlrtRSI;
    cholesky(&b_st, kron_G);
    st.site = &mm_emlrtRSI;
    logprior_c = lnpdfmvn4(&st, c, c0, kron_G);
    logpost = (lik_1 + logpost) + (((logprior_b + logprior_sig2) + logprior_phi)
      + logprior_c);
    if (i1 > logpostm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, logpostm->size[0], &be_emlrtBCI, sp);
    }

    logpostm->data[i1 - 1] = logpost;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_X_p);
  emxFree_real_T(&b_Y);
  emxFree_real_T(&b_X1);
  emxFreeMatrix_cell_wrap_1(b_reshapes);
  emxFree_real_T(&y);
  emxFree_real_T(&b_b);
  emxFree_real_T(&d_b);
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
  emxFree_real_T(&G);
  emxFree_real_T(&Sigmam);
  emxFree_real_T(&precC0);
  emxFree_real_T(&precphi0);
  emxFree_real_T(&X);
  emxFree_real_T(&X1);
  emxFree_real_T(&Xt);
  emxFree_real_T(&Y);
  b_y = NULL;
  m3 = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m3);
  st.site = &co_emlrtRSI;
  disp(&st, b_y, &fb_emlrtMCI);
  st.site = &wn_emlrtRSI;
  disp(&st, l_emlrt_marshallOut(&st, cv1), &gb_emlrtMCI);
  b_y = NULL;
  m5 = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m5);
  st.site = &bo_emlrtRSI;
  disp(&st, b_y, &hb_emlrtMCI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &qb_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > cm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, cm->size[0], &we_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > cm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, cm->size[0], &ve_emlrtBCI, sp);
    }

    i1 = (int32_T)n;
  }

  loop_ub = cm->size[1];
  b_loop_ub = i1 - i;
  i1 = Output->cm->size[0] * Output->cm->size[1];
  Output->cm->size[0] = b_loop_ub;
  Output->cm->size[1] = cm->size[1];
  emxEnsureCapacity_real_T(sp, Output->cm, i1, &rl_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      Output->cm->data[i2 + Output->cm->size[0] * i1] = cm->data[(i + i2) +
        cm->size[0] * i1];
    }
  }

  emxFree_real_T(&cm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &pb_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, sig2m->size[0], &ue_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2m->size[0], &te_emlrtBCI,
        sp);
    }

    i1 = (int32_T)n;
  }

  input_sizes[0] = 1;
  nx = i1 - i;
  input_sizes[1] = nx;
  st.site = &nm_emlrtRSI;
  indexShapeCheck(&st, sig2m->size[0], input_sizes);
  i1 = Output->sigma2m->size[0];
  Output->sigma2m->size[0] = nx;
  emxEnsureCapacity_real_T(sp, Output->sigma2m, i1, &vl_emlrtRTEI);
  for (i1 = 0; i1 < nx; i1++) {
    Output->sigma2m->data[i1] = sig2m->data[i + i1];
  }

  emxFree_real_T(&sig2m);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &ob_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > phim->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, phim->size[0], &re_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > phim->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, phim->size[0], &qe_emlrtBCI,
        sp);
    }

    i1 = (int32_T)n;
  }

  loop_ub = phim->size[1];
  b_loop_ub = i1 - i;
  i1 = Output->phim->size[0] * Output->phim->size[1];
  Output->phim->size[0] = b_loop_ub;
  Output->phim->size[1] = phim->size[1];
  emxEnsureCapacity_real_T(sp, Output->phim, i1, &yl_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      Output->phim->data[i2 + Output->phim->size[0] * i1] = phim->data[(i + i2)
        + phim->size[0] * i1];
    }
  }

  emxFree_real_T(&phim);

  /*  Sigmam = Sigmam(n0+1:n,:); */
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &nb_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > bm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, bm->size[0], &pe_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > bm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, bm->size[0], &oe_emlrtBCI, sp);
    }

    i1 = (int32_T)n;
  }

  loop_ub = i1 - i;
  i1 = Output->betam->size[0];
  Output->betam->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &cm_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->betam->data[i1] = bm->data[i + i1];
  }

  emxFree_real_T(&bm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &mb_emlrtDCI, sp);
    }

    i = (int32_T)(n0 + 1.0);
    if ((i < 1) || (i > logpostm->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, logpostm->size[0], &ne_emlrtBCI, sp);
    }

    i--;
    if (((int32_T)n < 1) || ((int32_T)n > logpostm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, logpostm->size[0],
        &me_emlrtBCI, sp);
    }

    i1 = (int32_T)n;
  }

  loop_ub = i1 - i;
  i1 = Output->logpostm->size[0];
  Output->logpostm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->logpostm, i1, &im_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->logpostm->data[i1] = logpostm->data[i + i1];
  }

  emxFree_real_T(&logpostm);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

void d_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

void e_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (Auto_Unit.c) */

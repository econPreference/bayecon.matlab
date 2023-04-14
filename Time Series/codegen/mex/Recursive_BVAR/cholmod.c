/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cholmod.c
 *
 * Code generation for function 'cholmod'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "cholmod.h"
#include "Recursive_BVAR_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "abs.h"
#include "error.h"
#include "eye.h"
#include "sqrt.h"
#include "diag.h"
#include "error1.h"
#include "sum.h"
#include "Recursive_BVAR_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo yc_emlrtRSI = { 29, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 31, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 37, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 38, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 39, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 41, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 50, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 59, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 61, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 62, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 63, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 66, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 77, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 13, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 114,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 852,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 844,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 894,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 910,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 259,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 325,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 404,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 402,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 88, /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 32, /* lineNo */
  "xdotu",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdotu.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 49, /* lineNo */
  "xdot",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdot.m"/* pathName */
};

static emlrtRTEInfo od_emlrtRTEI = { 29,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 29,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 39,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 325,/* lineNo */
  14,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 79,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 77,/* lineNo */
  7,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 59,/* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 59,/* lineNo */
  39,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 77,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 59,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 59,/* lineNo */
  23,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 59,/* lineNo */
  27,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 61,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 62,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 62,/* lineNo */
  41,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 62,/* lineNo */
  35,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 62,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 62,/* lineNo */
  25,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 62,/* lineNo */
  29,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 62,/* lineNo */
  27,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 62,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 62,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 67,/* lineNo */
  11,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 67,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 2,/* lineNo */
  21,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 38,/* lineNo */
  13,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 39,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  77,                                  /* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  9,                                   /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  28,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  18,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  10,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  67,                                  /* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  13,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  25,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  20,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  59,                                  /* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  41,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  25,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { 2,   /* nDims */
  39,                                  /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { 2,   /* nDims */
  29,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m"/* pName */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  33,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 59, /* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  35,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  45,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  18,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 62, /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  29,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  11,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void b_cholmod(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T
               *R)
{
  int32_T i23;
  emxArray_real_T *L;
  int32_T b_A[2];
  int32_T loop_ub;
  int32_T idx;
  int32_T i24;
  int32_T c_A[2];
  emxArray_real_T *I;
  emxArray_real_T *varargin_1;
  int32_T n;
  emxArray_real_T *diagA;
  emxArray_real_T *b_varargin_1;
  real_T b_gamma;
  boolean_T overflow;
  int32_T m;
  boolean_T exitg1;
  uint32_T unnamed_idx_1;
  int32_T j;
  real_T xi;
  real_T beta1;
  real_T delta;
  real_T c_varargin_1[3];
  emxArray_real_T *d;
  emxArray_real_T *K;
  emxArray_real_T *Ccol;
  emxArray_int32_T *r7;
  emxArray_real_T *b_K;
  int32_T i25;
  int32_T iv29[1];
  real_T djtemp;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  int32_T b_L;
  int32_T i26;
  boolean_T guard1 = false;
  char_T TRANSA;
  char_T TRANSB;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
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

  /*  function [R, indef, E, err] = cholmod(A) */
  /*  CHOLMOD Modified Cholesky factorization */
  /*   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL) */
  /*   if A is (sufficiently) positive definite, and otherwise returns a  */
  /*   modified factor R with diagonal enries >= sqrt(delta) and */
  /*   offdiagonal entries <= beta in absolute value, */
  /*   where delta and beta are defined in terms of size of diagonal and */
  /*   offdiagonal entries of A and the machine precision; see below. */
  /*   The idea is to ensure that E = A - R'*R is reasonably small if A is  */
  /*   not too far from being indefinite.  If A is sparse, so is R. */
  /*   The output parameter indef is set to 0 if A is sufficiently positive */
  /*   definite and to 1 if the factorization is modified. */
  /*  */
  /*   The point of modified Cholesky is to avoid computing eigenvalues,  */
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in  */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  for (i23 = 0; i23 < 2; i23++) {
    b_A[i23] = A->size[i23];
  }

  emxInit_real_T(sp, &L, 2, &qe_emlrtRTEI, true);
  i23 = L->size[0] * L->size[1];
  L->size[0] = A->size[1];
  L->size[1] = A->size[0];
  emxEnsureCapacity_real_T(sp, L, i23, &od_emlrtRTEI);
  loop_ub = A->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    idx = A->size[1];
    for (i24 = 0; i24 < idx; i24++) {
      L->data[i24 + L->size[0] * i23] = A->data[i23 + A->size[0] * i24];
    }
  }

  for (i23 = 0; i23 < 2; i23++) {
    c_A[i23] = L->size[i23];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &r_emlrtECI, sp);
  }

  i23 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i23, &pd_emlrtRTEI);
  loop_ub = A->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    idx = A->size[0];
    for (i24 = 0; i24 < idx; i24++) {
      L->data[i24 + L->size[0] * i23] = A->data[i24 + A->size[0] * i23] -
        A->data[i23 + A->size[0] * i24];
    }
  }

  emxInit_real_T(sp, &I, 2, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &te_emlrtRTEI, true);
  st.site = &yc_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &yc_emlrtRSI;
  sum(&st, varargin_1, I);
  st.site = &yc_emlrtRSI;
  if (b_sum(&st, I) > 0.0) {
    st.site = &ad_emlrtRSI;
    d_error(&st);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }

  emxInit_real_T1(sp, &diagA, 1, &pe_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_varargin_1, 1, &se_emlrtRTEI, true);
  st.site = &bd_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &cd_emlrtRSI;
  c_abs(&st, diagA, b_varargin_1);
  st.site = &cd_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &xd_emlrtRSI;
  if (b_varargin_1->size[0] <= 2) {
    if (b_varargin_1->size[0] == 1) {
      b_gamma = b_varargin_1->data[0];
    } else if ((b_varargin_1->data[0] < b_varargin_1->data[1]) ||
               (muDoubleScalarIsNaN(b_varargin_1->data[0]) &&
                (!muDoubleScalarIsNaN(b_varargin_1->data[1])))) {
      b_gamma = b_varargin_1->data[1];
    } else {
      b_gamma = b_varargin_1->data[0];
    }
  } else {
    f_st.site = &ae_emlrtRSI;
    if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &be_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      m = 2;
      exitg1 = false;
      while ((!exitg1) && (m <= b_varargin_1->size[0])) {
        if (!muDoubleScalarIsNaN(b_varargin_1->data[m - 1])) {
          idx = m;
          exitg1 = true;
        } else {
          m++;
        }
      }
    }

    if (idx == 0) {
      b_gamma = b_varargin_1->data[0];
    } else {
      f_st.site = &yd_emlrtRSI;
      b_gamma = b_varargin_1->data[idx - 1];
      g_st.site = &ce_emlrtRSI;
      overflow = ((!(idx + 1 > b_varargin_1->size[0])) && (b_varargin_1->size[0]
        > 2147483646));
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      while (idx + 1 <= b_varargin_1->size[0]) {
        if (b_gamma < b_varargin_1->data[idx]) {
          b_gamma = b_varargin_1->data[idx];
        }

        idx++;
      }
    }
  }

  /*  max diagonal entry */
  st.site = &dd_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  for (i23 = 0; i23 < 2; i23++) {
    b_A[i23] = A->size[i23];
    c_A[i23] = varargin_1->size[i23];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &q_emlrtECI, sp);
  }

  i23 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i23, &qd_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    L->data[i23] = A->data[i23] - varargin_1->data[i23];
  }

  st.site = &dd_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &dd_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  if (((varargin_1->size[0] == 1) && (varargin_1->size[1] == 1)) ||
      (varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ee_emlrtRSI;
  f_st.site = &fe_emlrtRSI;
  g_st.site = &ge_emlrtRSI;
  m = varargin_1->size[0];
  unnamed_idx_1 = (uint32_T)varargin_1->size[1];
  i23 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T(&g_st, I, i23, &rd_emlrtRTEI);
  if (varargin_1->size[1] >= 1) {
    h_st.site = &ie_emlrtRSI;
    overflow = (varargin_1->size[1] > 2147483646);
    if (overflow) {
      i_st.site = &dc_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = varargin_1->data[varargin_1->size[0] * j];
      h_st.site = &he_emlrtRSI;
      if ((!(2 > m)) && (m > 2147483646)) {
        i_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (idx = 1; idx < m; idx++) {
        overflow = ((!muDoubleScalarIsNaN(varargin_1->data[idx +
          varargin_1->size[0] * j])) && (muDoubleScalarIsNaN(I->data[I->size[0] *
          j]) || (I->data[I->size[0] * j] < varargin_1->data[idx +
                  varargin_1->size[0] * j])));
        if (overflow) {
          I->data[I->size[0] * j] = varargin_1->data[idx + varargin_1->size[0] *
            j];
        }
      }
    }
  }

  st.site = &dd_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  if ((I->size[1] == 1) || (I->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(I->size[1] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &xd_emlrtRSI;
  if (I->size[1] <= 2) {
    if (I->size[1] == 1) {
      xi = I->data[0];
    } else if ((I->data[0] < I->data[1]) || (muDoubleScalarIsNaN(I->data[0]) &&
                (!muDoubleScalarIsNaN(I->data[1])))) {
      xi = I->data[1];
    } else {
      xi = I->data[0];
    }
  } else {
    f_st.site = &ae_emlrtRSI;
    if (!muDoubleScalarIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &be_emlrtRSI;
      overflow = (I->size[1] > 2147483646);
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      m = 2;
      exitg1 = false;
      while ((!exitg1) && (m <= I->size[1])) {
        if (!muDoubleScalarIsNaN(I->data[m - 1])) {
          idx = m;
          exitg1 = true;
        } else {
          m++;
        }
      }
    }

    if (idx == 0) {
      xi = I->data[0];
    } else {
      f_st.site = &yd_emlrtRSI;
      xi = I->data[idx - 1];
      g_st.site = &ce_emlrtRSI;
      overflow = ((!(idx + 1 > I->size[1])) && (I->size[1] > 2147483646));
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      while (idx + 1 <= I->size[1]) {
        if (xi < I->data[idx]) {
          xi = I->data[idx];
        }

        idx++;
      }
    }
  }

  /*  max off-diagonal entry */
  beta1 = b_gamma + xi;
  if ((beta1 < 1.0) || muDoubleScalarIsNaN(beta1)) {
    beta1 = 1.0;
  }

  delta = 2.2204460492503131E-16 * beta1;
  c_varargin_1[0] = b_gamma;
  c_varargin_1[1] = xi / (real_T)n;
  c_varargin_1[2] = 2.2204460492503131E-16;
  if (!muDoubleScalarIsNaN(b_gamma)) {
    idx = 1;
  } else {
    idx = 0;
    m = 2;
    exitg1 = false;
    while ((!exitg1) && (m < 4)) {
      if (!muDoubleScalarIsNaN(c_varargin_1[m - 1])) {
        idx = m;
        exitg1 = true;
      } else {
        m++;
      }
    }
  }

  if (idx != 0) {
    b_gamma = c_varargin_1[idx - 1];
    while (idx + 1 < 4) {
      if (b_gamma < c_varargin_1[idx]) {
        b_gamma = c_varargin_1[idx];
      }

      idx++;
    }
  }

  emxInit_real_T1(sp, &d, 1, &sd_emlrtRTEI, true);
  st.site = &ed_emlrtRSI;
  b_sqrt(&st, &b_gamma);

  /*  initialize d and L */
  i23 = d->size[0];
  d->size[0] = n;
  emxEnsureCapacity_real_T2(sp, d, i23, &sd_emlrtRTEI);
  for (i23 = 0; i23 < n; i23++) {
    d->data[i23] = 0.0;
  }

  st.site = &fd_emlrtRSI;
  eye(&st, n, L);

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_real_T(sp, &K, 2, &td_emlrtRTEI, true);
  emxInit_real_T1(sp, &Ccol, 1, &me_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &re_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_K, 1, &ae_emlrtRTEI, true);
  while (j <= n - 1) {
    if (j < 1) {
      i23 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_real_T(sp, K, i23, &td_emlrtRTEI);
    } else {
      i23 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T(sp, K, i23, &td_emlrtRTEI);
      loop_ub = j - 1;
      for (i23 = 0; i23 <= loop_ub; i23++) {
        K->data[K->size[0] * i23] = 1.0 + (real_T)i23;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    idx = d->size[0];
    i23 = b_varargin_1->size[0];
    b_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(sp, b_varargin_1, i23, &wd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      xi = K->data[K->size[0] * i23];
      if (xi != (int32_T)muDoubleScalarFloor(xi)) {
        emlrtIntegerCheckR2012b(xi, &qb_emlrtDCI, sp);
      }

      i24 = (int32_T)xi;
      if (!((i24 >= 1) && (i24 <= idx))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, idx, &ec_emlrtBCI, sp);
      }

      b_varargin_1->data[i23] = d->data[i24 - 1];
    }

    m = L->size[1];
    i23 = L->size[0];
    i24 = 1 + j;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &cc_emlrtBCI, sp);
    }

    i23 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(sp, diagA, i23, &xd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      i25 = (int32_T)K->data[K->size[0] * i23];
      if (!((i25 >= 1) && (i25 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, m, &fc_emlrtBCI, sp);
      }

      diagA->data[i23] = L->data[(i24 + L->size[0] * (i25 - 1)) - 1];
    }

    i23 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(sp, b_K, i23, &ae_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_K->data[i23] = K->data[K->size[0] * i23];
    }

    i23 = b_K->size[0];
    i24 = diagA->size[0];
    if (i23 != i24) {
      emlrtSizeEqCheck1DR2012b(i23, i24, &p_emlrtECI, sp);
    }

    st.site = &gd_emlrtRSI;
    m = L->size[1];
    i23 = L->size[0];
    i24 = 1 + j;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &dc_emlrtBCI, &st);
    }

    i23 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T(&st, I, i23, &be_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      i25 = (int32_T)K->data[K->size[0] * i23];
      if (!((i25 >= 1) && (i25 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, m, &gc_emlrtBCI, &st);
      }

      I->data[I->size[0] * i23] = L->data[(i24 + L->size[0] * (i25 - 1)) - 1];
    }

    i23 = b_varargin_1->size[0];
    emxEnsureCapacity_real_T2(&st, b_varargin_1, i23, &wd_emlrtRTEI);
    loop_ub = b_varargin_1->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_varargin_1->data[i23] *= diagA->data[i23];
    }

    b_st.site = &le_emlrtRSI;
    i23 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(&b_st, b_K, i23, &ce_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_K->data[i23] = K->data[K->size[0] * i23];
    }

    if (!(b_K->size[0] == b_varargin_1->size[0])) {
      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&b_st, b_K, i23, &ce_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    i23 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(&st, b_K, i23, &ce_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_K->data[i23] = K->data[K->size[0] * i23];
    }

    if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
      xi = 0.0;
      for (i23 = 0; i23 < I->size[1]; i23++) {
        xi += I->data[I->size[0] * i23] * b_varargin_1->data[i23];
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      c_st.site = &me_emlrtRSI;
      d_st.site = &ne_emlrtRSI;
      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&d_st, b_K, i23, &ce_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      if (b_K->size[0] < 1) {
        xi = 0.0;
      } else {
        e_st.site = &oe_emlrtRSI;
        i23 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T2(&d_st, b_K, i23, &ce_emlrtRTEI);
        loop_ub = K->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_K->data[i23] = K->data[K->size[0] * i23];
        }

        n_t = (ptrdiff_t)b_K->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        i23 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T2(&d_st, b_K, i23, &ce_emlrtRTEI);
        loop_ub = K->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_K->data[i23] = K->data[K->size[0] * i23];
        }

        xi = ddot(&n_t, &I->data[0], &incx_t, &b_varargin_1->data[0], &incy_t);
      }
    }

    i23 = A->size[0];
    i24 = 1 + j;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &hc_emlrtBCI, sp);
    }

    i23 = A->size[1];
    i25 = 1 + j;
    if (!((i25 >= 1) && (i25 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i25, 1, i23, &hc_emlrtBCI, sp);
    }

    djtemp = A->data[(i24 + A->size[0] * (i25 - 1)) - 1] - xi;

    /*  C(j,j) in book */
    if (1 + j < n) {
      st.site = &hd_emlrtRSI;
      b_st.site = &ec_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        i23 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T(&b_st, I, i23, &de_emlrtRTEI);
      } else {
        i23 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (n - j) - 1;
        emxEnsureCapacity_real_T(&b_st, I, i23, &de_emlrtRTEI);
        loop_ub = (n - j) - 2;
        for (i23 = 0; i23 <= loop_ub; i23++) {
          I->data[I->size[0] * i23] = ((uint32_T)j + i23) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      idx = d->size[0];
      i23 = b_varargin_1->size[0];
      b_varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(sp, b_varargin_1, i23, &ee_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        i24 = (int32_T)K->data[K->size[0] * i23];
        if (!((i24 >= 1) && (i24 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, idx, &jc_emlrtBCI, sp);
        }

        b_varargin_1->data[i23] = d->data[i24 - 1];
      }

      m = L->size[1];
      i23 = L->size[0];
      i24 = 1 + j;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ac_emlrtBCI, sp);
      }

      i23 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(sp, diagA, i23, &fe_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        i25 = (int32_T)K->data[K->size[0] * i23];
        if (!((i25 >= 1) && (i25 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, m, &kc_emlrtBCI, sp);
        }

        diagA->data[i23] = L->data[(i24 + L->size[0] * (i25 - 1)) - 1];
      }

      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(sp, b_K, i23, &ge_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      i23 = b_K->size[0];
      i24 = diagA->size[0];
      if (i23 != i24) {
        emlrtSizeEqCheck1DR2012b(i23, i24, &o_emlrtECI, sp);
      }

      idx = A->size[0];
      i23 = A->size[1];
      i24 = 1 + j;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &bc_emlrtBCI, sp);
      }

      i23 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T2(sp, Ccol, i23, &he_emlrtRTEI);
      loop_ub = I->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        xi = I->data[I->size[0] * i23];
        if (xi != (int32_T)muDoubleScalarFloor(xi)) {
          emlrtIntegerCheckR2012b(xi, &rb_emlrtDCI, sp);
        }

        i25 = (int32_T)xi;
        if (!((i25 >= 1) && (i25 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, idx, &lc_emlrtBCI, sp);
        }

        Ccol->data[i23] = A->data[(i25 + A->size[0] * (i24 - 1)) - 1];
      }

      st.site = &id_emlrtRSI;
      m = L->size[0];
      b_L = L->size[1];
      i23 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = I->size[1];
      varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T(&st, varargin_1, i23, &ie_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        idx = I->size[1];
        for (i24 = 0; i24 < idx; i24++) {
          i25 = (int32_T)I->data[I->size[0] * i24];
          if (!((i25 >= 1) && (i25 <= m))) {
            emlrtDynamicBoundsCheckR2012b(i25, 1, m, &mc_emlrtBCI, &st);
          }

          i26 = (int32_T)K->data[K->size[0] * i23];
          if (!((i26 >= 1) && (i26 <= b_L))) {
            emlrtDynamicBoundsCheckR2012b(i26, 1, b_L, &nc_emlrtBCI, &st);
          }

          varargin_1->data[i24 + varargin_1->size[0] * i23] = L->data[(i25 +
            L->size[0] * (i26 - 1)) - 1];
        }
      }

      i23 = b_varargin_1->size[0];
      emxEnsureCapacity_real_T2(&st, b_varargin_1, i23, &ee_emlrtRTEI);
      loop_ub = b_varargin_1->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_varargin_1->data[i23] *= diagA->data[i23];
      }

      b_st.site = &le_emlrtRSI;
      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&b_st, b_K, i23, &je_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      idx = b_K->size[0];
      if (!(idx == b_varargin_1->size[0])) {
        i23 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(&b_st, b_K, i23, &ke_emlrtRTEI);
        loop_ub = I->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_K->data[i23] = I->data[I->size[0] * i23];
        }

        m = b_K->size[0];
        i23 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T2(&b_st, b_K, i23, &je_emlrtRTEI);
        loop_ub = K->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_K->data[i23] = K->data[K->size[0] * i23];
        }

        idx = b_K->size[0];
        if (((m == 1) && (idx == 1)) || (b_varargin_1->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&st, b_K, i23, &je_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      idx = b_K->size[0];
      if ((idx == 1) || (b_varargin_1->size[0] == 1)) {
        i23 = diagA->size[0];
        diagA->size[0] = varargin_1->size[0];
        emxEnsureCapacity_real_T2(&st, diagA, i23, &ie_emlrtRTEI);
        loop_ub = varargin_1->size[0];
        for (i23 = 0; i23 < loop_ub; i23++) {
          diagA->data[i23] = 0.0;
          idx = varargin_1->size[1];
          for (i24 = 0; i24 < idx; i24++) {
            diagA->data[i23] += varargin_1->data[i23 + varargin_1->size[0] * i24]
              * b_varargin_1->data[i24];
          }
        }
      } else {
        b_st.site = &ke_emlrtRSI;
        i23 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(&b_st, b_K, i23, &ke_emlrtRTEI);
        loop_ub = I->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_K->data[i23] = I->data[I->size[0] * i23];
        }

        m = b_K->size[0];
        guard1 = false;
        if (m == 0) {
          guard1 = true;
        } else {
          i23 = b_K->size[0];
          b_K->size[0] = K->size[1];
          emxEnsureCapacity_real_T2(&b_st, b_K, i23, &je_emlrtRTEI);
          loop_ub = K->size[1];
          for (i23 = 0; i23 < loop_ub; i23++) {
            b_K->data[i23] = K->data[K->size[0] * i23];
          }

          idx = b_K->size[0];
          if ((idx == 0) || (b_varargin_1->size[0] == 0)) {
            guard1 = true;
          } else {
            c_st.site = &pe_emlrtRSI;
            c_st.site = &qe_emlrtRSI;
            TRANSA = 'N';
            TRANSB = 'N';
            xi = 1.0;
            beta1 = 0.0;
            i23 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_K->size[0];
            incx_t = (ptrdiff_t)m;
            n_t = (ptrdiff_t)1;
            i23 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &je_emlrtRTEI);
            loop_ub = K->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = K->data[K->size[0] * i23];
            }

            idx = b_K->size[0];
            incy_t = (ptrdiff_t)idx;
            i23 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_K->size[0];
            lda_t = (ptrdiff_t)m;
            i23 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &je_emlrtRTEI);
            loop_ub = K->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = K->data[K->size[0] * i23];
            }

            idx = b_K->size[0];
            ldb_t = (ptrdiff_t)idx;
            i23 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_K->size[0];
            ldc_t = (ptrdiff_t)m;
            i23 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_K->size[0];
            i23 = diagA->size[0];
            diagA->size[0] = m;
            emxEnsureCapacity_real_T2(&c_st, diagA, i23, &mb_emlrtRTEI);
            i23 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = I->data[I->size[0] * i23];
            }

            i23 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i23, &je_emlrtRTEI);
            loop_ub = K->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = K->data[K->size[0] * i23];
            }

            dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &xi,
                  &varargin_1->data[0], &lda_t, &b_varargin_1->data[0], &ldb_t,
                  &beta1, &diagA->data[0], &ldc_t);
          }
        }

        if (guard1) {
          i23 = b_K->size[0];
          b_K->size[0] = I->size[1];
          emxEnsureCapacity_real_T2(&b_st, b_K, i23, &ke_emlrtRTEI);
          loop_ub = I->size[1];
          for (i23 = 0; i23 < loop_ub; i23++) {
            b_K->data[i23] = I->data[I->size[0] * i23];
          }

          m = b_K->size[0];
          i23 = diagA->size[0];
          diagA->size[0] = m;
          emxEnsureCapacity_real_T2(&b_st, diagA, i23, &ie_emlrtRTEI);
          for (i23 = 0; i23 < m; i23++) {
            diagA->data[i23] = 0.0;
          }
        }
      }

      i23 = b_K->size[0];
      b_K->size[0] = I->size[1];
      emxEnsureCapacity_real_T2(sp, b_K, i23, &le_emlrtRTEI);
      loop_ub = I->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = I->data[I->size[0] * i23];
      }

      i23 = b_K->size[0];
      i24 = diagA->size[0];
      if (i23 != i24) {
        emlrtSizeEqCheck1DR2012b(i23, i24, &n_emlrtECI, sp);
      }

      i23 = Ccol->size[0];
      emxEnsureCapacity_real_T2(sp, Ccol, i23, &me_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        Ccol->data[i23] -= diagA->data[i23];
      }

      /*  C(I,j) in book */
      st.site = &jd_emlrtRSI;
      c_abs(&st, Ccol, b_varargin_1);
      st.site = &jd_emlrtRSI;
      b_st.site = &ud_emlrtRSI;
      c_st.site = &vd_emlrtRSI;
      d_st.site = &wd_emlrtRSI;
      if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      if (!(b_varargin_1->size[0] >= 1)) {
        emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      e_st.site = &xd_emlrtRSI;
      if (b_varargin_1->size[0] <= 2) {
        if (b_varargin_1->size[0] == 1) {
          xi = b_varargin_1->data[0];
        } else if ((b_varargin_1->data[0] < b_varargin_1->data[1]) ||
                   (muDoubleScalarIsNaN(b_varargin_1->data[0]) &&
                    (!muDoubleScalarIsNaN(b_varargin_1->data[1])))) {
          xi = b_varargin_1->data[1];
        } else {
          xi = b_varargin_1->data[0];
        }
      } else {
        f_st.site = &ae_emlrtRSI;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          g_st.site = &be_emlrtRSI;
          overflow = (b_varargin_1->size[0] > 2147483646);
          if (overflow) {
            h_st.site = &dc_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          m = 2;
          exitg1 = false;
          while ((!exitg1) && (m <= b_varargin_1->size[0])) {
            if (!muDoubleScalarIsNaN(b_varargin_1->data[m - 1])) {
              idx = m;
              exitg1 = true;
            } else {
              m++;
            }
          }
        }

        if (idx == 0) {
          xi = b_varargin_1->data[0];
        } else {
          f_st.site = &yd_emlrtRSI;
          xi = b_varargin_1->data[idx - 1];
          g_st.site = &ce_emlrtRSI;
          overflow = ((!(idx + 1 > b_varargin_1->size[0])) &&
                      (b_varargin_1->size[0] > 2147483646));
          if (overflow) {
            h_st.site = &dc_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          while (idx + 1 <= b_varargin_1->size[0]) {
            if (xi < b_varargin_1->data[idx]) {
              xi = b_varargin_1->data[idx];
            }

            idx++;
          }
        }
      }

      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      xi /= b_gamma;
      st.site = &kd_emlrtRSI;
      b_st.site = &re_emlrtRSI;
      c_st.site = &se_emlrtRSI;
      c_varargin_1[0] = muDoubleScalarAbs(djtemp);
      c_varargin_1[1] = xi * xi;
      c_varargin_1[2] = delta;
      if (!muDoubleScalarIsNaN(c_varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        m = 2;
        exitg1 = false;
        while ((!exitg1) && (m < 4)) {
          if (!muDoubleScalarIsNaN(c_varargin_1[m - 1])) {
            idx = m;
            exitg1 = true;
          } else {
            m++;
          }
        }
      }

      if (idx == 0) {
        xi = c_varargin_1[0];
      } else {
        xi = c_varargin_1[idx - 1];
        while (idx + 1 < 4) {
          if (xi < c_varargin_1[idx]) {
            xi = c_varargin_1[idx];
          }

          idx++;
        }
      }

      i23 = d->size[0];
      i24 = 1 + j;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &oc_emlrtBCI, sp);
      }

      d->data[i24 - 1] = xi;
      m = L->size[0];
      i23 = r7->size[0];
      r7->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(sp, r7, i23, &ne_emlrtRTEI);
      loop_ub = I->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        i24 = (int32_T)I->data[I->size[0] * i23];
        if (!((i24 >= 1) && (i24 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, m, &pc_emlrtBCI, sp);
        }

        r7->data[i23] = i24 - 1;
      }

      i23 = L->size[1];
      i24 = j + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &xb_emlrtBCI, sp);
      }

      i23 = d->size[0];
      i24 = j + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &yb_emlrtBCI, sp);
      }

      xi = d->data[j];
      i23 = Ccol->size[0];
      emxEnsureCapacity_real_T2(sp, Ccol, i23, &oe_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        Ccol->data[i23] /= xi;
      }

      iv29[0] = r7->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv29[0], 1, &(*(int32_T (*)[1])Ccol->size)
        [0], 1, &m_emlrtECI, sp);
      loop_ub = Ccol->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        L->data[r7->data[i23] + L->size[0] * j] = Ccol->data[i23];
      }
    } else {
      beta1 = muDoubleScalarAbs(djtemp);
      if ((beta1 < delta) || (muDoubleScalarIsNaN(beta1) &&
                              (!muDoubleScalarIsNaN(delta)))) {
        beta1 = delta;
      }

      i23 = d->size[0];
      i24 = 1 + j;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ic_emlrtBCI, sp);
      }

      d->data[i24 - 1] = beta1;
    }

    i23 = d->size[0];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &wb_emlrtBCI, sp);
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_K);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&b_varargin_1);
  emxFree_real_T(&Ccol);
  emxFree_real_T(&I);
  emxFree_real_T(&K);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  j = 0;
  while (j <= n - 1) {
    loop_ub = L->size[0];
    i23 = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r7, i23, &vd_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      r7->data[i23] = i23;
    }

    i23 = L->size[1];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &tb_emlrtBCI, sp);
    }

    st.site = &ld_emlrtRSI;
    i23 = d->size[0];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ub_emlrtBCI, &st);
    }

    overflow = (d->data[j] < 0.0);
    if (overflow) {
      b_st.site = &je_emlrtRSI;
      e_error(&b_st);
    }

    xi = muDoubleScalarSqrt(d->data[j]);
    i23 = L->size[1];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &vb_emlrtBCI, sp);
    }

    loop_ub = L->size[0];
    i23 = diagA->size[0];
    diagA->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(sp, diagA, i23, &yd_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      diagA->data[i23] = L->data[i23 + L->size[0] * j] * xi;
    }

    iv29[0] = r7->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv29[0], 1, &(*(int32_T (*)[1])diagA->size)[0],
      1, &l_emlrtECI, sp);
    loop_ub = diagA->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      L->data[r7->data[i23] + L->size[0] * j] = diagA->data[i23];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&r7);
  emxFree_real_T(&d);
  emxFree_real_T(&diagA);
  i23 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(sp, R, i23, &ud_emlrtRTEI);
  loop_ub = L->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    idx = L->size[1];
    for (i24 = 0; i24 < idx; i24++) {
      R->data[i24 + R->size[0] * i23] = L->data[i23 + L->size[0] * i24];
    }
  }

  emxFree_real_T(&L);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void cholmod(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *R,
             real_T *err)
{
  int32_T i10;
  emxArray_real_T *L;
  int32_T b_A[2];
  int32_T loop_ub;
  int32_T idx;
  int32_T i11;
  int32_T c_A[2];
  emxArray_real_T *I;
  emxArray_real_T *varargin_1;
  int32_T n;
  emxArray_real_T *diagA;
  emxArray_real_T *b_varargin_1;
  real_T b_gamma;
  boolean_T overflow;
  int32_T m;
  boolean_T exitg1;
  uint32_T unnamed_idx_1;
  int32_T j;
  real_T xi;
  real_T beta1;
  real_T delta;
  real_T c_varargin_1[3];
  emxArray_real_T *d;
  emxArray_real_T *K;
  emxArray_real_T *Ccol;
  emxArray_int32_T *r4;
  emxArray_real_T *b_K;
  int32_T i12;
  int32_T iv25[1];
  real_T djtemp;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  int32_T b_L;
  int32_T i13;
  boolean_T guard1 = false;
  char_T TRANSA;
  char_T TRANSB;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
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

  /*  function [R, indef, E, err] = cholmod(A) */
  /*  CHOLMOD Modified Cholesky factorization */
  /*   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL) */
  /*   if A is (sufficiently) positive definite, and otherwise returns a  */
  /*   modified factor R with diagonal enries >= sqrt(delta) and */
  /*   offdiagonal entries <= beta in absolute value, */
  /*   where delta and beta are defined in terms of size of diagonal and */
  /*   offdiagonal entries of A and the machine precision; see below. */
  /*   The idea is to ensure that E = A - R'*R is reasonably small if A is  */
  /*   not too far from being indefinite.  If A is sparse, so is R. */
  /*   The output parameter indef is set to 0 if A is sufficiently positive */
  /*   definite and to 1 if the factorization is modified. */
  /*  */
  /*   The point of modified Cholesky is to avoid computing eigenvalues,  */
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in  */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  for (i10 = 0; i10 < 2; i10++) {
    b_A[i10] = A->size[i10];
  }

  emxInit_real_T(sp, &L, 2, &qe_emlrtRTEI, true);
  i10 = L->size[0] * L->size[1];
  L->size[0] = A->size[1];
  L->size[1] = A->size[0];
  emxEnsureCapacity_real_T(sp, L, i10, &od_emlrtRTEI);
  loop_ub = A->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    idx = A->size[1];
    for (i11 = 0; i11 < idx; i11++) {
      L->data[i11 + L->size[0] * i10] = A->data[i10 + A->size[0] * i11];
    }
  }

  for (i10 = 0; i10 < 2; i10++) {
    c_A[i10] = L->size[i10];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &r_emlrtECI, sp);
  }

  i10 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i10, &pd_emlrtRTEI);
  loop_ub = A->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    idx = A->size[0];
    for (i11 = 0; i11 < idx; i11++) {
      L->data[i11 + L->size[0] * i10] = A->data[i11 + A->size[0] * i10] -
        A->data[i10 + A->size[0] * i11];
    }
  }

  emxInit_real_T(sp, &I, 2, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &te_emlrtRTEI, true);
  st.site = &yc_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &yc_emlrtRSI;
  sum(&st, varargin_1, I);
  st.site = &yc_emlrtRSI;
  if (b_sum(&st, I) > 0.0) {
    st.site = &ad_emlrtRSI;
    d_error(&st);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }

  emxInit_real_T1(sp, &diagA, 1, &pe_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_varargin_1, 1, &se_emlrtRTEI, true);
  st.site = &bd_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &cd_emlrtRSI;
  c_abs(&st, diagA, b_varargin_1);
  st.site = &cd_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &xd_emlrtRSI;
  if (b_varargin_1->size[0] <= 2) {
    if (b_varargin_1->size[0] == 1) {
      b_gamma = b_varargin_1->data[0];
    } else if ((b_varargin_1->data[0] < b_varargin_1->data[1]) ||
               (muDoubleScalarIsNaN(b_varargin_1->data[0]) &&
                (!muDoubleScalarIsNaN(b_varargin_1->data[1])))) {
      b_gamma = b_varargin_1->data[1];
    } else {
      b_gamma = b_varargin_1->data[0];
    }
  } else {
    f_st.site = &ae_emlrtRSI;
    if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &be_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      m = 2;
      exitg1 = false;
      while ((!exitg1) && (m <= b_varargin_1->size[0])) {
        if (!muDoubleScalarIsNaN(b_varargin_1->data[m - 1])) {
          idx = m;
          exitg1 = true;
        } else {
          m++;
        }
      }
    }

    if (idx == 0) {
      b_gamma = b_varargin_1->data[0];
    } else {
      f_st.site = &yd_emlrtRSI;
      b_gamma = b_varargin_1->data[idx - 1];
      g_st.site = &ce_emlrtRSI;
      overflow = ((!(idx + 1 > b_varargin_1->size[0])) && (b_varargin_1->size[0]
        > 2147483646));
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      while (idx + 1 <= b_varargin_1->size[0]) {
        if (b_gamma < b_varargin_1->data[idx]) {
          b_gamma = b_varargin_1->data[idx];
        }

        idx++;
      }
    }
  }

  /*  max diagonal entry */
  st.site = &dd_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  for (i10 = 0; i10 < 2; i10++) {
    b_A[i10] = A->size[i10];
    c_A[i10] = varargin_1->size[i10];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &q_emlrtECI, sp);
  }

  i10 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i10, &qd_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    L->data[i10] = A->data[i10] - varargin_1->data[i10];
  }

  st.site = &dd_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &dd_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  if (((varargin_1->size[0] == 1) && (varargin_1->size[1] == 1)) ||
      (varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ee_emlrtRSI;
  f_st.site = &fe_emlrtRSI;
  g_st.site = &ge_emlrtRSI;
  m = varargin_1->size[0];
  unnamed_idx_1 = (uint32_T)varargin_1->size[1];
  i10 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T(&g_st, I, i10, &rd_emlrtRTEI);
  if (varargin_1->size[1] >= 1) {
    h_st.site = &ie_emlrtRSI;
    overflow = (varargin_1->size[1] > 2147483646);
    if (overflow) {
      i_st.site = &dc_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = varargin_1->data[varargin_1->size[0] * j];
      h_st.site = &he_emlrtRSI;
      if ((!(2 > m)) && (m > 2147483646)) {
        i_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (idx = 1; idx < m; idx++) {
        overflow = ((!muDoubleScalarIsNaN(varargin_1->data[idx +
          varargin_1->size[0] * j])) && (muDoubleScalarIsNaN(I->data[I->size[0] *
          j]) || (I->data[I->size[0] * j] < varargin_1->data[idx +
                  varargin_1->size[0] * j])));
        if (overflow) {
          I->data[I->size[0] * j] = varargin_1->data[idx + varargin_1->size[0] *
            j];
        }
      }
    }
  }

  st.site = &dd_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  if ((I->size[1] == 1) || (I->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(I->size[1] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &xd_emlrtRSI;
  if (I->size[1] <= 2) {
    if (I->size[1] == 1) {
      xi = I->data[0];
    } else if ((I->data[0] < I->data[1]) || (muDoubleScalarIsNaN(I->data[0]) &&
                (!muDoubleScalarIsNaN(I->data[1])))) {
      xi = I->data[1];
    } else {
      xi = I->data[0];
    }
  } else {
    f_st.site = &ae_emlrtRSI;
    if (!muDoubleScalarIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &be_emlrtRSI;
      overflow = (I->size[1] > 2147483646);
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      m = 2;
      exitg1 = false;
      while ((!exitg1) && (m <= I->size[1])) {
        if (!muDoubleScalarIsNaN(I->data[m - 1])) {
          idx = m;
          exitg1 = true;
        } else {
          m++;
        }
      }
    }

    if (idx == 0) {
      xi = I->data[0];
    } else {
      f_st.site = &yd_emlrtRSI;
      xi = I->data[idx - 1];
      g_st.site = &ce_emlrtRSI;
      overflow = ((!(idx + 1 > I->size[1])) && (I->size[1] > 2147483646));
      if (overflow) {
        h_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      while (idx + 1 <= I->size[1]) {
        if (xi < I->data[idx]) {
          xi = I->data[idx];
        }

        idx++;
      }
    }
  }

  /*  max off-diagonal entry */
  beta1 = b_gamma + xi;
  if ((beta1 < 1.0) || muDoubleScalarIsNaN(beta1)) {
    beta1 = 1.0;
  }

  delta = 2.2204460492503131E-16 * beta1;
  c_varargin_1[0] = b_gamma;
  c_varargin_1[1] = xi / (real_T)n;
  c_varargin_1[2] = 2.2204460492503131E-16;
  if (!muDoubleScalarIsNaN(b_gamma)) {
    idx = 1;
  } else {
    idx = 0;
    m = 2;
    exitg1 = false;
    while ((!exitg1) && (m < 4)) {
      if (!muDoubleScalarIsNaN(c_varargin_1[m - 1])) {
        idx = m;
        exitg1 = true;
      } else {
        m++;
      }
    }
  }

  if (idx != 0) {
    b_gamma = c_varargin_1[idx - 1];
    while (idx + 1 < 4) {
      if (b_gamma < c_varargin_1[idx]) {
        b_gamma = c_varargin_1[idx];
      }

      idx++;
    }
  }

  emxInit_real_T1(sp, &d, 1, &sd_emlrtRTEI, true);
  st.site = &ed_emlrtRSI;
  b_sqrt(&st, &b_gamma);

  /*  initialize d and L */
  i10 = d->size[0];
  d->size[0] = n;
  emxEnsureCapacity_real_T2(sp, d, i10, &sd_emlrtRTEI);
  for (i10 = 0; i10 < n; i10++) {
    d->data[i10] = 0.0;
  }

  st.site = &fd_emlrtRSI;
  eye(&st, n, L);

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_real_T(sp, &K, 2, &td_emlrtRTEI, true);
  emxInit_real_T1(sp, &Ccol, 1, &me_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &re_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_K, 1, &ae_emlrtRTEI, true);
  while (j <= n - 1) {
    if (j < 1) {
      i10 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_real_T(sp, K, i10, &td_emlrtRTEI);
    } else {
      i10 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T(sp, K, i10, &td_emlrtRTEI);
      loop_ub = j - 1;
      for (i10 = 0; i10 <= loop_ub; i10++) {
        K->data[K->size[0] * i10] = 1.0 + (real_T)i10;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    idx = d->size[0];
    i10 = b_varargin_1->size[0];
    b_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(sp, b_varargin_1, i10, &wd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      xi = K->data[K->size[0] * i10];
      if (xi != (int32_T)muDoubleScalarFloor(xi)) {
        emlrtIntegerCheckR2012b(xi, &qb_emlrtDCI, sp);
      }

      i11 = (int32_T)xi;
      if (!((i11 >= 1) && (i11 <= idx))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, idx, &ec_emlrtBCI, sp);
      }

      b_varargin_1->data[i10] = d->data[i11 - 1];
    }

    m = L->size[1];
    i10 = L->size[0];
    i11 = 1 + j;
    if (!((i11 >= 1) && (i11 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &cc_emlrtBCI, sp);
    }

    i10 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(sp, diagA, i10, &xd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      i12 = (int32_T)K->data[K->size[0] * i10];
      if (!((i12 >= 1) && (i12 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i12, 1, m, &fc_emlrtBCI, sp);
      }

      diagA->data[i10] = L->data[(i11 + L->size[0] * (i12 - 1)) - 1];
    }

    i10 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(sp, b_K, i10, &ae_emlrtRTEI);
    loop_ub = K->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      b_K->data[i10] = K->data[K->size[0] * i10];
    }

    i10 = b_K->size[0];
    i11 = diagA->size[0];
    if (i10 != i11) {
      emlrtSizeEqCheck1DR2012b(i10, i11, &p_emlrtECI, sp);
    }

    st.site = &gd_emlrtRSI;
    m = L->size[1];
    i10 = L->size[0];
    i11 = 1 + j;
    if (!((i11 >= 1) && (i11 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &dc_emlrtBCI, &st);
    }

    i10 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T(&st, I, i10, &be_emlrtRTEI);
    loop_ub = K->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      i12 = (int32_T)K->data[K->size[0] * i10];
      if (!((i12 >= 1) && (i12 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i12, 1, m, &gc_emlrtBCI, &st);
      }

      I->data[I->size[0] * i10] = L->data[(i11 + L->size[0] * (i12 - 1)) - 1];
    }

    i10 = b_varargin_1->size[0];
    emxEnsureCapacity_real_T2(&st, b_varargin_1, i10, &wd_emlrtRTEI);
    loop_ub = b_varargin_1->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      b_varargin_1->data[i10] *= diagA->data[i10];
    }

    b_st.site = &le_emlrtRSI;
    i10 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(&b_st, b_K, i10, &ce_emlrtRTEI);
    loop_ub = K->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      b_K->data[i10] = K->data[K->size[0] * i10];
    }

    if (!(b_K->size[0] == b_varargin_1->size[0])) {
      i10 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&b_st, b_K, i10, &ce_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_K->data[i10] = K->data[K->size[0] * i10];
      }

      if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    i10 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(&st, b_K, i10, &ce_emlrtRTEI);
    loop_ub = K->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      b_K->data[i10] = K->data[K->size[0] * i10];
    }

    if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
      xi = 0.0;
      for (i10 = 0; i10 < I->size[1]; i10++) {
        xi += I->data[I->size[0] * i10] * b_varargin_1->data[i10];
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      c_st.site = &me_emlrtRSI;
      d_st.site = &ne_emlrtRSI;
      i10 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&d_st, b_K, i10, &ce_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_K->data[i10] = K->data[K->size[0] * i10];
      }

      if (b_K->size[0] < 1) {
        xi = 0.0;
      } else {
        e_st.site = &oe_emlrtRSI;
        i10 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T2(&d_st, b_K, i10, &ce_emlrtRTEI);
        loop_ub = K->size[1];
        for (i10 = 0; i10 < loop_ub; i10++) {
          b_K->data[i10] = K->data[K->size[0] * i10];
        }

        n_t = (ptrdiff_t)b_K->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        i10 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T2(&d_st, b_K, i10, &ce_emlrtRTEI);
        loop_ub = K->size[1];
        for (i10 = 0; i10 < loop_ub; i10++) {
          b_K->data[i10] = K->data[K->size[0] * i10];
        }

        xi = ddot(&n_t, &I->data[0], &incx_t, &b_varargin_1->data[0], &incy_t);
      }
    }

    i10 = A->size[0];
    i11 = 1 + j;
    if (!((i11 >= 1) && (i11 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &hc_emlrtBCI, sp);
    }

    i10 = A->size[1];
    i12 = 1 + j;
    if (!((i12 >= 1) && (i12 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i12, 1, i10, &hc_emlrtBCI, sp);
    }

    djtemp = A->data[(i11 + A->size[0] * (i12 - 1)) - 1] - xi;

    /*  C(j,j) in book */
    if (1 + j < n) {
      st.site = &hd_emlrtRSI;
      b_st.site = &ec_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        i10 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T(&b_st, I, i10, &de_emlrtRTEI);
      } else {
        i10 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (n - j) - 1;
        emxEnsureCapacity_real_T(&b_st, I, i10, &de_emlrtRTEI);
        loop_ub = (n - j) - 2;
        for (i10 = 0; i10 <= loop_ub; i10++) {
          I->data[I->size[0] * i10] = ((uint32_T)j + i10) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      idx = d->size[0];
      i10 = b_varargin_1->size[0];
      b_varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(sp, b_varargin_1, i10, &ee_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        i11 = (int32_T)K->data[K->size[0] * i10];
        if (!((i11 >= 1) && (i11 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i11, 1, idx, &jc_emlrtBCI, sp);
        }

        b_varargin_1->data[i10] = d->data[i11 - 1];
      }

      m = L->size[1];
      i10 = L->size[0];
      i11 = 1 + j;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &ac_emlrtBCI, sp);
      }

      i10 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(sp, diagA, i10, &fe_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        i12 = (int32_T)K->data[K->size[0] * i10];
        if (!((i12 >= 1) && (i12 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i12, 1, m, &kc_emlrtBCI, sp);
        }

        diagA->data[i10] = L->data[(i11 + L->size[0] * (i12 - 1)) - 1];
      }

      i10 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(sp, b_K, i10, &ge_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_K->data[i10] = K->data[K->size[0] * i10];
      }

      i10 = b_K->size[0];
      i11 = diagA->size[0];
      if (i10 != i11) {
        emlrtSizeEqCheck1DR2012b(i10, i11, &o_emlrtECI, sp);
      }

      idx = A->size[0];
      i10 = A->size[1];
      i11 = 1 + j;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &bc_emlrtBCI, sp);
      }

      i10 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T2(sp, Ccol, i10, &he_emlrtRTEI);
      loop_ub = I->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        xi = I->data[I->size[0] * i10];
        if (xi != (int32_T)muDoubleScalarFloor(xi)) {
          emlrtIntegerCheckR2012b(xi, &rb_emlrtDCI, sp);
        }

        i12 = (int32_T)xi;
        if (!((i12 >= 1) && (i12 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i12, 1, idx, &lc_emlrtBCI, sp);
        }

        Ccol->data[i10] = A->data[(i12 + A->size[0] * (i11 - 1)) - 1];
      }

      st.site = &id_emlrtRSI;
      m = L->size[0];
      b_L = L->size[1];
      i10 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = I->size[1];
      varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T(&st, varargin_1, i10, &ie_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        idx = I->size[1];
        for (i11 = 0; i11 < idx; i11++) {
          i12 = (int32_T)I->data[I->size[0] * i11];
          if (!((i12 >= 1) && (i12 <= m))) {
            emlrtDynamicBoundsCheckR2012b(i12, 1, m, &mc_emlrtBCI, &st);
          }

          i13 = (int32_T)K->data[K->size[0] * i10];
          if (!((i13 >= 1) && (i13 <= b_L))) {
            emlrtDynamicBoundsCheckR2012b(i13, 1, b_L, &nc_emlrtBCI, &st);
          }

          varargin_1->data[i11 + varargin_1->size[0] * i10] = L->data[(i12 +
            L->size[0] * (i13 - 1)) - 1];
        }
      }

      i10 = b_varargin_1->size[0];
      emxEnsureCapacity_real_T2(&st, b_varargin_1, i10, &ee_emlrtRTEI);
      loop_ub = b_varargin_1->size[0];
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_varargin_1->data[i10] *= diagA->data[i10];
      }

      b_st.site = &le_emlrtRSI;
      i10 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&b_st, b_K, i10, &je_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_K->data[i10] = K->data[K->size[0] * i10];
      }

      idx = b_K->size[0];
      if (!(idx == b_varargin_1->size[0])) {
        i10 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(&b_st, b_K, i10, &ke_emlrtRTEI);
        loop_ub = I->size[1];
        for (i10 = 0; i10 < loop_ub; i10++) {
          b_K->data[i10] = I->data[I->size[0] * i10];
        }

        m = b_K->size[0];
        i10 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T2(&b_st, b_K, i10, &je_emlrtRTEI);
        loop_ub = K->size[1];
        for (i10 = 0; i10 < loop_ub; i10++) {
          b_K->data[i10] = K->data[K->size[0] * i10];
        }

        idx = b_K->size[0];
        if (((m == 1) && (idx == 1)) || (b_varargin_1->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      i10 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(&st, b_K, i10, &je_emlrtRTEI);
      loop_ub = K->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_K->data[i10] = K->data[K->size[0] * i10];
      }

      idx = b_K->size[0];
      if ((idx == 1) || (b_varargin_1->size[0] == 1)) {
        i10 = diagA->size[0];
        diagA->size[0] = varargin_1->size[0];
        emxEnsureCapacity_real_T2(&st, diagA, i10, &ie_emlrtRTEI);
        loop_ub = varargin_1->size[0];
        for (i10 = 0; i10 < loop_ub; i10++) {
          diagA->data[i10] = 0.0;
          idx = varargin_1->size[1];
          for (i11 = 0; i11 < idx; i11++) {
            diagA->data[i10] += varargin_1->data[i10 + varargin_1->size[0] * i11]
              * b_varargin_1->data[i11];
          }
        }
      } else {
        b_st.site = &ke_emlrtRSI;
        i10 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(&b_st, b_K, i10, &ke_emlrtRTEI);
        loop_ub = I->size[1];
        for (i10 = 0; i10 < loop_ub; i10++) {
          b_K->data[i10] = I->data[I->size[0] * i10];
        }

        m = b_K->size[0];
        guard1 = false;
        if (m == 0) {
          guard1 = true;
        } else {
          i10 = b_K->size[0];
          b_K->size[0] = K->size[1];
          emxEnsureCapacity_real_T2(&b_st, b_K, i10, &je_emlrtRTEI);
          loop_ub = K->size[1];
          for (i10 = 0; i10 < loop_ub; i10++) {
            b_K->data[i10] = K->data[K->size[0] * i10];
          }

          idx = b_K->size[0];
          if ((idx == 0) || (b_varargin_1->size[0] == 0)) {
            guard1 = true;
          } else {
            c_st.site = &pe_emlrtRSI;
            c_st.site = &qe_emlrtRSI;
            TRANSA = 'N';
            TRANSB = 'N';
            xi = 1.0;
            beta1 = 0.0;
            i10 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = I->data[I->size[0] * i10];
            }

            m = b_K->size[0];
            incx_t = (ptrdiff_t)m;
            n_t = (ptrdiff_t)1;
            i10 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &je_emlrtRTEI);
            loop_ub = K->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = K->data[K->size[0] * i10];
            }

            idx = b_K->size[0];
            incy_t = (ptrdiff_t)idx;
            i10 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = I->data[I->size[0] * i10];
            }

            m = b_K->size[0];
            lda_t = (ptrdiff_t)m;
            i10 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &je_emlrtRTEI);
            loop_ub = K->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = K->data[K->size[0] * i10];
            }

            idx = b_K->size[0];
            ldb_t = (ptrdiff_t)idx;
            i10 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = I->data[I->size[0] * i10];
            }

            m = b_K->size[0];
            ldc_t = (ptrdiff_t)m;
            i10 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = I->data[I->size[0] * i10];
            }

            m = b_K->size[0];
            i10 = diagA->size[0];
            diagA->size[0] = m;
            emxEnsureCapacity_real_T2(&c_st, diagA, i10, &mb_emlrtRTEI);
            i10 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &ke_emlrtRTEI);
            loop_ub = I->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = I->data[I->size[0] * i10];
            }

            i10 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T2(&c_st, b_K, i10, &je_emlrtRTEI);
            loop_ub = K->size[1];
            for (i10 = 0; i10 < loop_ub; i10++) {
              b_K->data[i10] = K->data[K->size[0] * i10];
            }

            dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &xi,
                  &varargin_1->data[0], &lda_t, &b_varargin_1->data[0], &ldb_t,
                  &beta1, &diagA->data[0], &ldc_t);
          }
        }

        if (guard1) {
          i10 = b_K->size[0];
          b_K->size[0] = I->size[1];
          emxEnsureCapacity_real_T2(&b_st, b_K, i10, &ke_emlrtRTEI);
          loop_ub = I->size[1];
          for (i10 = 0; i10 < loop_ub; i10++) {
            b_K->data[i10] = I->data[I->size[0] * i10];
          }

          m = b_K->size[0];
          i10 = diagA->size[0];
          diagA->size[0] = m;
          emxEnsureCapacity_real_T2(&b_st, diagA, i10, &ie_emlrtRTEI);
          for (i10 = 0; i10 < m; i10++) {
            diagA->data[i10] = 0.0;
          }
        }
      }

      i10 = b_K->size[0];
      b_K->size[0] = I->size[1];
      emxEnsureCapacity_real_T2(sp, b_K, i10, &le_emlrtRTEI);
      loop_ub = I->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_K->data[i10] = I->data[I->size[0] * i10];
      }

      i10 = b_K->size[0];
      i11 = diagA->size[0];
      if (i10 != i11) {
        emlrtSizeEqCheck1DR2012b(i10, i11, &n_emlrtECI, sp);
      }

      i10 = Ccol->size[0];
      emxEnsureCapacity_real_T2(sp, Ccol, i10, &me_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i10 = 0; i10 < loop_ub; i10++) {
        Ccol->data[i10] -= diagA->data[i10];
      }

      /*  C(I,j) in book */
      st.site = &jd_emlrtRSI;
      c_abs(&st, Ccol, b_varargin_1);
      st.site = &jd_emlrtRSI;
      b_st.site = &ud_emlrtRSI;
      c_st.site = &vd_emlrtRSI;
      d_st.site = &wd_emlrtRSI;
      if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &qk_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      if (!(b_varargin_1->size[0] >= 1)) {
        emlrtErrorWithMessageIdR2018a(&d_st, &pk_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      e_st.site = &xd_emlrtRSI;
      if (b_varargin_1->size[0] <= 2) {
        if (b_varargin_1->size[0] == 1) {
          xi = b_varargin_1->data[0];
        } else if ((b_varargin_1->data[0] < b_varargin_1->data[1]) ||
                   (muDoubleScalarIsNaN(b_varargin_1->data[0]) &&
                    (!muDoubleScalarIsNaN(b_varargin_1->data[1])))) {
          xi = b_varargin_1->data[1];
        } else {
          xi = b_varargin_1->data[0];
        }
      } else {
        f_st.site = &ae_emlrtRSI;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          g_st.site = &be_emlrtRSI;
          overflow = (b_varargin_1->size[0] > 2147483646);
          if (overflow) {
            h_st.site = &dc_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          m = 2;
          exitg1 = false;
          while ((!exitg1) && (m <= b_varargin_1->size[0])) {
            if (!muDoubleScalarIsNaN(b_varargin_1->data[m - 1])) {
              idx = m;
              exitg1 = true;
            } else {
              m++;
            }
          }
        }

        if (idx == 0) {
          xi = b_varargin_1->data[0];
        } else {
          f_st.site = &yd_emlrtRSI;
          xi = b_varargin_1->data[idx - 1];
          g_st.site = &ce_emlrtRSI;
          overflow = ((!(idx + 1 > b_varargin_1->size[0])) &&
                      (b_varargin_1->size[0] > 2147483646));
          if (overflow) {
            h_st.site = &dc_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          while (idx + 1 <= b_varargin_1->size[0]) {
            if (xi < b_varargin_1->data[idx]) {
              xi = b_varargin_1->data[idx];
            }

            idx++;
          }
        }
      }

      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      xi /= b_gamma;
      st.site = &kd_emlrtRSI;
      b_st.site = &re_emlrtRSI;
      c_st.site = &se_emlrtRSI;
      c_varargin_1[0] = muDoubleScalarAbs(djtemp);
      c_varargin_1[1] = xi * xi;
      c_varargin_1[2] = delta;
      if (!muDoubleScalarIsNaN(c_varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        m = 2;
        exitg1 = false;
        while ((!exitg1) && (m < 4)) {
          if (!muDoubleScalarIsNaN(c_varargin_1[m - 1])) {
            idx = m;
            exitg1 = true;
          } else {
            m++;
          }
        }
      }

      if (idx == 0) {
        xi = c_varargin_1[0];
      } else {
        xi = c_varargin_1[idx - 1];
        while (idx + 1 < 4) {
          if (xi < c_varargin_1[idx]) {
            xi = c_varargin_1[idx];
          }

          idx++;
        }
      }

      i10 = d->size[0];
      i11 = 1 + j;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &oc_emlrtBCI, sp);
      }

      d->data[i11 - 1] = xi;
      m = L->size[0];
      i10 = r4->size[0];
      r4->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(sp, r4, i10, &ne_emlrtRTEI);
      loop_ub = I->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        i11 = (int32_T)I->data[I->size[0] * i10];
        if (!((i11 >= 1) && (i11 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i11, 1, m, &pc_emlrtBCI, sp);
        }

        r4->data[i10] = i11 - 1;
      }

      i10 = L->size[1];
      i11 = j + 1;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &xb_emlrtBCI, sp);
      }

      i10 = d->size[0];
      i11 = j + 1;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &yb_emlrtBCI, sp);
      }

      xi = d->data[j];
      i10 = Ccol->size[0];
      emxEnsureCapacity_real_T2(sp, Ccol, i10, &oe_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i10 = 0; i10 < loop_ub; i10++) {
        Ccol->data[i10] /= xi;
      }

      iv25[0] = r4->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv25[0], 1, &(*(int32_T (*)[1])Ccol->size)
        [0], 1, &m_emlrtECI, sp);
      loop_ub = Ccol->size[0];
      for (i10 = 0; i10 < loop_ub; i10++) {
        L->data[r4->data[i10] + L->size[0] * j] = Ccol->data[i10];
      }
    } else {
      beta1 = muDoubleScalarAbs(djtemp);
      if ((beta1 < delta) || (muDoubleScalarIsNaN(beta1) &&
                              (!muDoubleScalarIsNaN(delta)))) {
        beta1 = delta;
      }

      i10 = d->size[0];
      i11 = 1 + j;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &ic_emlrtBCI, sp);
      }

      d->data[i11 - 1] = beta1;
    }

    i10 = d->size[0];
    i11 = j + 1;
    if (!((i11 >= 1) && (i11 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &wb_emlrtBCI, sp);
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_K);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&b_varargin_1);
  emxFree_real_T(&Ccol);
  emxFree_real_T(&I);
  emxFree_real_T(&K);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  j = 0;
  while (j <= n - 1) {
    loop_ub = L->size[0];
    i10 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r4, i10, &vd_emlrtRTEI);
    for (i10 = 0; i10 < loop_ub; i10++) {
      r4->data[i10] = i10;
    }

    i10 = L->size[1];
    i11 = j + 1;
    if (!((i11 >= 1) && (i11 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &tb_emlrtBCI, sp);
    }

    st.site = &ld_emlrtRSI;
    i10 = d->size[0];
    i11 = j + 1;
    if (!((i11 >= 1) && (i11 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &ub_emlrtBCI, &st);
    }

    overflow = (d->data[j] < 0.0);
    if (overflow) {
      b_st.site = &je_emlrtRSI;
      e_error(&b_st);
    }

    xi = muDoubleScalarSqrt(d->data[j]);
    i10 = L->size[1];
    i11 = j + 1;
    if (!((i11 >= 1) && (i11 <= i10))) {
      emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &vb_emlrtBCI, sp);
    }

    loop_ub = L->size[0];
    i10 = diagA->size[0];
    diagA->size[0] = loop_ub;
    emxEnsureCapacity_real_T2(sp, diagA, i10, &yd_emlrtRTEI);
    for (i10 = 0; i10 < loop_ub; i10++) {
      diagA->data[i10] = L->data[i10 + L->size[0] * j] * xi;
    }

    iv25[0] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv25[0], 1, &(*(int32_T (*)[1])diagA->size)[0],
      1, &l_emlrtECI, sp);
    loop_ub = diagA->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      L->data[r4->data[i10] + L->size[0] * j] = diagA->data[i10];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&r4);
  emxFree_real_T(&d);
  emxFree_real_T(&diagA);
  i10 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(sp, R, i10, &ud_emlrtRTEI);
  loop_ub = L->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    idx = L->size[1];
    for (i11 = 0; i11 < idx; i11++) {
      R->data[i11 + R->size[0] * i10] = L->data[i10 + L->size[0] * i11];
    }
  }

  emxFree_real_T(&L);
  *err = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cholmod.c) */

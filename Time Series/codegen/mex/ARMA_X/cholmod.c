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
#include "ARMA_X.h"
#include "cholmod.h"
#include "ARMA_X_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "abs.h"
#include "error1.h"
#include "eye.h"
#include "sqrt.h"
#include "diag.h"
#include "error.h"
#include "sum.h"
#include "ARMA_X_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 29, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 37, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 38, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 39, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 50, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 59, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 61, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 62, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 63, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 66, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 13, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 114,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 852,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 844,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 894,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 910,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 259,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 325,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 404,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 402,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 29,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 29,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 39,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 325,/* lineNo */
  14,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 79,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 77,/* lineNo */
  7,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 59,/* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 59,/* lineNo */
  39,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 77,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 59,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 59,/* lineNo */
  23,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 59,/* lineNo */
  27,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 61,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 62,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 62,/* lineNo */
  41,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 62,/* lineNo */
  35,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 62,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 62,/* lineNo */
  25,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 62,/* lineNo */
  29,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 62,/* lineNo */
  27,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 62,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 62,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 67,/* lineNo */
  11,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 67,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 2,/* lineNo */
  21,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 38,/* lineNo */
  13,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 39,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  77,                                  /* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  9,                                   /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  28,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  18,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  10,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  67,                                  /* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  13,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  25,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  20,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  59,                                  /* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  41,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  25,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { 2,   /* nDims */
  39,                                  /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtECInfo q_emlrtECI = { 2,   /* nDims */
  29,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m"/* pName */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  33,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  35,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  45,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  18,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 62,  /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  29,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  11,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\cholmod.m",/* pName */
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
  emxArray_int32_T *K;
  emxArray_real_T *Ccol;
  emxArray_int32_T *r4;
  emxArray_int32_T *b_K;
  emxArray_real_T *b_I;
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

  emxInit_real_T(sp, &L, 2, &ne_emlrtRTEI, true);
  i23 = L->size[0] * L->size[1];
  L->size[0] = A->size[1];
  L->size[1] = A->size[0];
  emxEnsureCapacity_real_T(sp, L, i23, &ld_emlrtRTEI);
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
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &q_emlrtECI, sp);
  }

  i23 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i23, &md_emlrtRTEI);
  loop_ub = A->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    idx = A->size[0];
    for (i24 = 0; i24 < idx; i24++) {
      L->data[i24 + L->size[0] * i23] = A->data[i24 + A->size[0] * i23] -
        A->data[i23 + A->size[0] * i24];
    }
  }

  emxInit_real_T(sp, &I, 2, &ae_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &qe_emlrtRTEI, true);
  st.site = &hb_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &hb_emlrtRSI;
  sum(&st, varargin_1, I);
  st.site = &hb_emlrtRSI;
  if (b_sum(&st, I) > 0.0) {
    st.site = &ib_emlrtRSI;
    error(&st);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }

  emxInit_real_T1(sp, &diagA, 1, &me_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_varargin_1, 1, &pe_emlrtRTEI, true);
  st.site = &jb_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &kb_emlrtRSI;
  c_abs(&st, diagA, b_varargin_1);
  st.site = &kb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
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

  e_st.site = &dc_emlrtRSI;
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
    f_st.site = &fc_emlrtRSI;
    if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &gc_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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
      f_st.site = &ec_emlrtRSI;
      b_gamma = b_varargin_1->data[idx - 1];
      g_st.site = &hc_emlrtRSI;
      overflow = ((!(idx + 1 > b_varargin_1->size[0])) && (b_varargin_1->size[0]
        > 2147483646));
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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
  st.site = &lb_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  for (i23 = 0; i23 < 2; i23++) {
    b_A[i23] = A->size[i23];
    c_A[i23] = varargin_1->size[i23];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &p_emlrtECI, sp);
  }

  i23 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i23, &nd_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    L->data[i23] = A->data[i23] - varargin_1->data[i23];
  }

  st.site = &lb_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &lb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &bc_emlrtRSI;
  d_st.site = &cc_emlrtRSI;
  if (((varargin_1->size[0] == 1) && (varargin_1->size[1] == 1)) ||
      (varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &ko_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &jo_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &jc_emlrtRSI;
  f_st.site = &kc_emlrtRSI;
  g_st.site = &lc_emlrtRSI;
  m = varargin_1->size[0];
  unnamed_idx_1 = (uint32_T)varargin_1->size[1];
  i23 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T(&g_st, I, i23, &od_emlrtRTEI);
  if (varargin_1->size[1] >= 1) {
    h_st.site = &nc_emlrtRSI;
    overflow = (varargin_1->size[1] > 2147483646);
    if (overflow) {
      i_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = varargin_1->data[varargin_1->size[0] * j];
      h_st.site = &mc_emlrtRSI;
      if ((!(2 > m)) && (m > 2147483646)) {
        i_st.site = &cb_emlrtRSI;
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

  st.site = &lb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &bc_emlrtRSI;
  d_st.site = &cc_emlrtRSI;
  if ((I->size[1] == 1) || (I->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &ko_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(I->size[1] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &jo_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &dc_emlrtRSI;
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
    f_st.site = &fc_emlrtRSI;
    if (!muDoubleScalarIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &gc_emlrtRSI;
      overflow = (I->size[1] > 2147483646);
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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
      f_st.site = &ec_emlrtRSI;
      xi = I->data[idx - 1];
      g_st.site = &hc_emlrtRSI;
      overflow = ((!(idx + 1 > I->size[1])) && (I->size[1] > 2147483646));
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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

  emxInit_real_T1(sp, &d, 1, &pd_emlrtRTEI, true);
  st.site = &mb_emlrtRSI;
  b_sqrt(&st, &b_gamma);

  /*  initialize d and L */
  i23 = d->size[0];
  d->size[0] = n;
  emxEnsureCapacity_real_T1(sp, d, i23, &pd_emlrtRTEI);
  for (i23 = 0; i23 < n; i23++) {
    d->data[i23] = 0.0;
  }

  st.site = &nb_emlrtRSI;
  eye(&st, n, L);

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_int32_T1(sp, &K, 2, &qd_emlrtRTEI, true);
  emxInit_real_T1(sp, &Ccol, 1, &je_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &oe_emlrtRTEI, true);
  emxInit_int32_T(sp, &b_K, 1, &wd_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_I, 1, &he_emlrtRTEI, true);
  while (j <= n - 1) {
    if (j < 1) {
      i23 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_int32_T1(sp, K, i23, &qd_emlrtRTEI);
    } else {
      i23 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_int32_T1(sp, K, i23, &qd_emlrtRTEI);
      for (i23 = 0; i23 < j; i23++) {
        K->data[K->size[0] * i23] = 1 + i23;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    idx = d->size[0];
    i23 = b_varargin_1->size[0];
    b_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T1(sp, b_varargin_1, i23, &td_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      i24 = K->data[K->size[0] * i23];
      if (!((i24 >= 1) && (i24 <= idx))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, idx, &fc_emlrtBCI, sp);
      }

      b_varargin_1->data[i23] = d->data[i24 - 1];
    }

    m = L->size[1];
    i23 = L->size[0];
    i24 = 1 + j;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &dc_emlrtBCI, sp);
    }

    i23 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T1(sp, diagA, i23, &ud_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      i25 = K->data[K->size[0] * i23];
      if (!((i25 >= 1) && (i25 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, m, &gc_emlrtBCI, sp);
      }

      diagA->data[i23] = L->data[(i24 + L->size[0] * (i25 - 1)) - 1];
    }

    i23 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(sp, b_K, i23, &wd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_K->data[i23] = K->data[K->size[0] * i23];
    }

    i23 = b_K->size[0];
    i24 = diagA->size[0];
    if (i23 != i24) {
      emlrtSizeEqCheck1DR2012b(i23, i24, &o_emlrtECI, sp);
    }

    st.site = &ob_emlrtRSI;
    m = L->size[1];
    i23 = L->size[0];
    i24 = 1 + j;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ec_emlrtBCI, &st);
    }

    i23 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T(&st, I, i23, &xd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      i25 = K->data[K->size[0] * i23];
      if (!((i25 >= 1) && (i25 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, m, &hc_emlrtBCI, &st);
      }

      I->data[I->size[0] * i23] = L->data[(i24 + L->size[0] * (i25 - 1)) - 1];
    }

    i23 = b_varargin_1->size[0];
    emxEnsureCapacity_real_T1(&st, b_varargin_1, i23, &td_emlrtRTEI);
    loop_ub = b_varargin_1->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_varargin_1->data[i23] *= diagA->data[i23];
    }

    b_st.site = &tc_emlrtRSI;
    i23 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(&b_st, b_K, i23, &yd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i23 = 0; i23 < loop_ub; i23++) {
      b_K->data[i23] = K->data[K->size[0] * i23];
    }

    if (!(b_K->size[0] == b_varargin_1->size[0])) {
      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&b_st, b_K, i23, &yd_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    i23 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(&st, b_K, i23, &yd_emlrtRTEI);
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
      b_st.site = &sc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&d_st, b_K, i23, &yd_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      if (b_K->size[0] < 1) {
        xi = 0.0;
      } else {
        e_st.site = &wc_emlrtRSI;
        i23 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_int32_T(&d_st, b_K, i23, &yd_emlrtRTEI);
        loop_ub = K->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_K->data[i23] = K->data[K->size[0] * i23];
        }

        n_t = (ptrdiff_t)b_K->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        i23 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_int32_T(&d_st, b_K, i23, &yd_emlrtRTEI);
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
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ic_emlrtBCI, sp);
    }

    i23 = A->size[1];
    i25 = 1 + j;
    if (!((i25 >= 1) && (i25 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i25, 1, i23, &ic_emlrtBCI, sp);
    }

    djtemp = A->data[(i24 + A->size[0] * (i25 - 1)) - 1] - xi;

    /*  C(j,j) in book */
    if (1 + j < n) {
      st.site = &pb_emlrtRSI;
      b_st.site = &xc_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        i23 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T(&b_st, I, i23, &ae_emlrtRTEI);
      } else {
        i23 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (n - j) - 1;
        emxEnsureCapacity_real_T(&b_st, I, i23, &ae_emlrtRTEI);
        loop_ub = (n - j) - 2;
        for (i23 = 0; i23 <= loop_ub; i23++) {
          I->data[I->size[0] * i23] = ((uint32_T)j + i23) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      idx = d->size[0];
      i23 = b_varargin_1->size[0];
      b_varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T1(sp, b_varargin_1, i23, &be_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        i24 = K->data[K->size[0] * i23];
        if (!((i24 >= 1) && (i24 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, idx, &kc_emlrtBCI, sp);
        }

        b_varargin_1->data[i23] = d->data[i24 - 1];
      }

      m = L->size[1];
      i23 = L->size[0];
      i24 = 1 + j;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &bc_emlrtBCI, sp);
      }

      i23 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T1(sp, diagA, i23, &ce_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        i25 = K->data[K->size[0] * i23];
        if (!((i25 >= 1) && (i25 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, m, &lc_emlrtBCI, sp);
        }

        diagA->data[i23] = L->data[(i24 + L->size[0] * (i25 - 1)) - 1];
      }

      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(sp, b_K, i23, &de_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      i23 = b_K->size[0];
      i24 = diagA->size[0];
      if (i23 != i24) {
        emlrtSizeEqCheck1DR2012b(i23, i24, &n_emlrtECI, sp);
      }

      idx = A->size[0];
      i23 = A->size[1];
      i24 = 1 + j;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &cc_emlrtBCI, sp);
      }

      i23 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T1(sp, Ccol, i23, &ee_emlrtRTEI);
      loop_ub = I->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        xi = I->data[I->size[0] * i23];
        if (xi != (int32_T)muDoubleScalarFloor(xi)) {
          emlrtIntegerCheckR2012b(xi, &v_emlrtDCI, sp);
        }

        i25 = (int32_T)xi;
        if (!((i25 >= 1) && (i25 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, idx, &mc_emlrtBCI, sp);
        }

        Ccol->data[i23] = A->data[(i25 + A->size[0] * (i24 - 1)) - 1];
      }

      st.site = &qb_emlrtRSI;
      m = L->size[0];
      b_L = L->size[1];
      i23 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = I->size[1];
      varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T(&st, varargin_1, i23, &fe_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        idx = I->size[1];
        for (i24 = 0; i24 < idx; i24++) {
          i25 = (int32_T)I->data[I->size[0] * i24];
          if (!((i25 >= 1) && (i25 <= m))) {
            emlrtDynamicBoundsCheckR2012b(i25, 1, m, &nc_emlrtBCI, &st);
          }

          i26 = K->data[K->size[0] * i23];
          if (!((i26 >= 1) && (i26 <= b_L))) {
            emlrtDynamicBoundsCheckR2012b(i26, 1, b_L, &oc_emlrtBCI, &st);
          }

          varargin_1->data[i24 + varargin_1->size[0] * i23] = L->data[(i25 +
            L->size[0] * (i26 - 1)) - 1];
        }
      }

      i23 = b_varargin_1->size[0];
      emxEnsureCapacity_real_T1(&st, b_varargin_1, i23, &be_emlrtRTEI);
      loop_ub = b_varargin_1->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_varargin_1->data[i23] *= diagA->data[i23];
      }

      b_st.site = &tc_emlrtRSI;
      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&b_st, b_K, i23, &ge_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      idx = b_K->size[0];
      if (!(idx == b_varargin_1->size[0])) {
        i23 = b_I->size[0];
        b_I->size[0] = I->size[1];
        emxEnsureCapacity_real_T1(&b_st, b_I, i23, &he_emlrtRTEI);
        loop_ub = I->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_I->data[i23] = I->data[I->size[0] * i23];
        }

        m = b_I->size[0];
        i23 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_int32_T(&b_st, b_K, i23, &ge_emlrtRTEI);
        loop_ub = K->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_K->data[i23] = K->data[K->size[0] * i23];
        }

        idx = b_K->size[0];
        if (((m == 1) && (idx == 1)) || (b_varargin_1->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      i23 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&st, b_K, i23, &ge_emlrtRTEI);
      loop_ub = K->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_K->data[i23] = K->data[K->size[0] * i23];
      }

      idx = b_K->size[0];
      if ((idx == 1) || (b_varargin_1->size[0] == 1)) {
        i23 = diagA->size[0];
        diagA->size[0] = varargin_1->size[0];
        emxEnsureCapacity_real_T1(&st, diagA, i23, &fe_emlrtRTEI);
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
        b_st.site = &sc_emlrtRSI;
        i23 = b_I->size[0];
        b_I->size[0] = I->size[1];
        emxEnsureCapacity_real_T1(&b_st, b_I, i23, &he_emlrtRTEI);
        loop_ub = I->size[1];
        for (i23 = 0; i23 < loop_ub; i23++) {
          b_I->data[i23] = I->data[I->size[0] * i23];
        }

        m = b_I->size[0];
        guard1 = false;
        if (m == 0) {
          guard1 = true;
        } else {
          i23 = b_K->size[0];
          b_K->size[0] = K->size[1];
          emxEnsureCapacity_int32_T(&b_st, b_K, i23, &ge_emlrtRTEI);
          loop_ub = K->size[1];
          for (i23 = 0; i23 < loop_ub; i23++) {
            b_K->data[i23] = K->data[K->size[0] * i23];
          }

          idx = b_K->size[0];
          if ((idx == 0) || (b_varargin_1->size[0] == 0)) {
            guard1 = true;
          } else {
            c_st.site = &yc_emlrtRSI;
            c_st.site = &ad_emlrtRSI;
            TRANSA = 'N';
            TRANSB = 'N';
            xi = 1.0;
            beta1 = 0.0;
            i23 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i23, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_I->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_I->size[0];
            incx_t = (ptrdiff_t)m;
            n_t = (ptrdiff_t)1;
            i23 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_K, i23, &ge_emlrtRTEI);
            loop_ub = K->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = K->data[K->size[0] * i23];
            }

            idx = b_K->size[0];
            incy_t = (ptrdiff_t)idx;
            i23 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i23, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_I->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_I->size[0];
            lda_t = (ptrdiff_t)m;
            i23 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_K, i23, &ge_emlrtRTEI);
            loop_ub = K->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_K->data[i23] = K->data[K->size[0] * i23];
            }

            idx = b_K->size[0];
            ldb_t = (ptrdiff_t)idx;
            i23 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i23, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_I->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_I->size[0];
            ldc_t = (ptrdiff_t)m;
            i23 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i23, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_I->data[i23] = I->data[I->size[0] * i23];
            }

            m = b_I->size[0];
            i23 = diagA->size[0];
            diagA->size[0] = m;
            emxEnsureCapacity_real_T1(&c_st, diagA, i23, &j_emlrtRTEI);
            i23 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i23, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i23 = 0; i23 < loop_ub; i23++) {
              b_I->data[i23] = I->data[I->size[0] * i23];
            }

            i23 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_K, i23, &ge_emlrtRTEI);
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
          i23 = b_I->size[0];
          b_I->size[0] = I->size[1];
          emxEnsureCapacity_real_T1(&b_st, b_I, i23, &he_emlrtRTEI);
          loop_ub = I->size[1];
          for (i23 = 0; i23 < loop_ub; i23++) {
            b_I->data[i23] = I->data[I->size[0] * i23];
          }

          m = b_I->size[0];
          i23 = diagA->size[0];
          diagA->size[0] = m;
          emxEnsureCapacity_real_T1(&b_st, diagA, i23, &fe_emlrtRTEI);
          for (i23 = 0; i23 < m; i23++) {
            diagA->data[i23] = 0.0;
          }
        }
      }

      i23 = b_I->size[0];
      b_I->size[0] = I->size[1];
      emxEnsureCapacity_real_T1(sp, b_I, i23, &ie_emlrtRTEI);
      loop_ub = I->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_I->data[i23] = I->data[I->size[0] * i23];
      }

      i23 = b_I->size[0];
      i24 = diagA->size[0];
      if (i23 != i24) {
        emlrtSizeEqCheck1DR2012b(i23, i24, &m_emlrtECI, sp);
      }

      i23 = Ccol->size[0];
      emxEnsureCapacity_real_T1(sp, Ccol, i23, &je_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        Ccol->data[i23] -= diagA->data[i23];
      }

      /*  C(I,j) in book */
      st.site = &rb_emlrtRSI;
      c_abs(&st, Ccol, b_varargin_1);
      st.site = &rb_emlrtRSI;
      b_st.site = &ac_emlrtRSI;
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

      e_st.site = &dc_emlrtRSI;
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
        f_st.site = &fc_emlrtRSI;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          g_st.site = &gc_emlrtRSI;
          overflow = (b_varargin_1->size[0] > 2147483646);
          if (overflow) {
            h_st.site = &cb_emlrtRSI;
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
          f_st.site = &ec_emlrtRSI;
          xi = b_varargin_1->data[idx - 1];
          g_st.site = &hc_emlrtRSI;
          overflow = ((!(idx + 1 > b_varargin_1->size[0])) &&
                      (b_varargin_1->size[0] > 2147483646));
          if (overflow) {
            h_st.site = &cb_emlrtRSI;
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
      st.site = &sb_emlrtRSI;
      b_st.site = &bd_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
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
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &pc_emlrtBCI, sp);
      }

      d->data[i24 - 1] = xi;
      m = L->size[0];
      i23 = r4->size[0];
      r4->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(sp, r4, i23, &ke_emlrtRTEI);
      loop_ub = I->size[1];
      for (i23 = 0; i23 < loop_ub; i23++) {
        i24 = (int32_T)I->data[I->size[0] * i23];
        if (!((i24 >= 1) && (i24 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, m, &qc_emlrtBCI, sp);
        }

        r4->data[i23] = i24 - 1;
      }

      i23 = L->size[1];
      i24 = j + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &yb_emlrtBCI, sp);
      }

      i23 = d->size[0];
      i24 = j + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ac_emlrtBCI, sp);
      }

      xi = d->data[j];
      i23 = Ccol->size[0];
      emxEnsureCapacity_real_T1(sp, Ccol, i23, &le_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        Ccol->data[i23] /= xi;
      }

      iv29[0] = r4->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv29[0], 1, &(*(int32_T (*)[1])Ccol->size)
        [0], 1, &l_emlrtECI, sp);
      loop_ub = Ccol->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        L->data[r4->data[i23] + L->size[0] * j] = Ccol->data[i23];
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
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &jc_emlrtBCI, sp);
      }

      d->data[i24 - 1] = beta1;
    }

    i23 = d->size[0];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &xb_emlrtBCI, sp);
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_I);
  emxFree_int32_T(&b_K);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&b_varargin_1);
  emxFree_real_T(&Ccol);
  emxFree_real_T(&I);
  emxFree_int32_T(&K);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  j = 0;
  while (j <= n - 1) {
    loop_ub = L->size[0];
    i23 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r4, i23, &sd_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      r4->data[i23] = i23;
    }

    i23 = L->size[1];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ub_emlrtBCI, sp);
    }

    st.site = &tb_emlrtRSI;
    i23 = d->size[0];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &vb_emlrtBCI, &st);
    }

    overflow = (d->data[j] < 0.0);
    if (overflow) {
      b_st.site = &oc_emlrtRSI;
      b_error(&b_st);
    }

    xi = muDoubleScalarSqrt(d->data[j]);
    i23 = L->size[1];
    i24 = j + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &wb_emlrtBCI, sp);
    }

    loop_ub = L->size[0];
    i23 = diagA->size[0];
    diagA->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(sp, diagA, i23, &vd_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      diagA->data[i23] = L->data[i23 + L->size[0] * j] * xi;
    }

    iv29[0] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv29[0], 1, &(*(int32_T (*)[1])diagA->size)[0],
      1, &k_emlrtECI, sp);
    loop_ub = diagA->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      L->data[r4->data[i23] + L->size[0] * j] = diagA->data[i23];
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
  i23 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(sp, R, i23, &rd_emlrtRTEI);
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
  int32_T i12;
  emxArray_real_T *L;
  int32_T b_A[2];
  int32_T loop_ub;
  int32_T idx;
  int32_T i13;
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
  emxArray_int32_T *K;
  emxArray_real_T *Ccol;
  emxArray_int32_T *r2;
  emxArray_int32_T *b_K;
  emxArray_real_T *b_I;
  int32_T i14;
  int32_T iv17[1];
  real_T djtemp;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  int32_T b_L;
  int32_T i15;
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
  for (i12 = 0; i12 < 2; i12++) {
    b_A[i12] = A->size[i12];
  }

  emxInit_real_T(sp, &L, 2, &ne_emlrtRTEI, true);
  i12 = L->size[0] * L->size[1];
  L->size[0] = A->size[1];
  L->size[1] = A->size[0];
  emxEnsureCapacity_real_T(sp, L, i12, &ld_emlrtRTEI);
  loop_ub = A->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    idx = A->size[1];
    for (i13 = 0; i13 < idx; i13++) {
      L->data[i13 + L->size[0] * i12] = A->data[i12 + A->size[0] * i13];
    }
  }

  for (i12 = 0; i12 < 2; i12++) {
    c_A[i12] = L->size[i12];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &q_emlrtECI, sp);
  }

  i12 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i12, &md_emlrtRTEI);
  loop_ub = A->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    idx = A->size[0];
    for (i13 = 0; i13 < idx; i13++) {
      L->data[i13 + L->size[0] * i12] = A->data[i13 + A->size[0] * i12] -
        A->data[i12 + A->size[0] * i13];
    }
  }

  emxInit_real_T(sp, &I, 2, &ae_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &qe_emlrtRTEI, true);
  st.site = &hb_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &hb_emlrtRSI;
  sum(&st, varargin_1, I);
  st.site = &hb_emlrtRSI;
  if (b_sum(&st, I) > 0.0) {
    st.site = &ib_emlrtRSI;
    error(&st);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }

  emxInit_real_T1(sp, &diagA, 1, &me_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_varargin_1, 1, &pe_emlrtRTEI, true);
  st.site = &jb_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &kb_emlrtRSI;
  c_abs(&st, diagA, b_varargin_1);
  st.site = &kb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
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

  e_st.site = &dc_emlrtRSI;
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
    f_st.site = &fc_emlrtRSI;
    if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &gc_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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
      f_st.site = &ec_emlrtRSI;
      b_gamma = b_varargin_1->data[idx - 1];
      g_st.site = &hc_emlrtRSI;
      overflow = ((!(idx + 1 > b_varargin_1->size[0])) && (b_varargin_1->size[0]
        > 2147483646));
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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
  st.site = &lb_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  for (i12 = 0; i12 < 2; i12++) {
    b_A[i12] = A->size[i12];
    c_A[i12] = varargin_1->size[i12];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &p_emlrtECI, sp);
  }

  i12 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, L, i12, &nd_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    L->data[i12] = A->data[i12] - varargin_1->data[i12];
  }

  st.site = &lb_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &lb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &bc_emlrtRSI;
  d_st.site = &cc_emlrtRSI;
  if (((varargin_1->size[0] == 1) && (varargin_1->size[1] == 1)) ||
      (varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &ko_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &jo_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &jc_emlrtRSI;
  f_st.site = &kc_emlrtRSI;
  g_st.site = &lc_emlrtRSI;
  m = varargin_1->size[0];
  unnamed_idx_1 = (uint32_T)varargin_1->size[1];
  i12 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T(&g_st, I, i12, &od_emlrtRTEI);
  if (varargin_1->size[1] >= 1) {
    h_st.site = &nc_emlrtRSI;
    overflow = (varargin_1->size[1] > 2147483646);
    if (overflow) {
      i_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = varargin_1->data[varargin_1->size[0] * j];
      h_st.site = &mc_emlrtRSI;
      if ((!(2 > m)) && (m > 2147483646)) {
        i_st.site = &cb_emlrtRSI;
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

  st.site = &lb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &bc_emlrtRSI;
  d_st.site = &cc_emlrtRSI;
  if ((I->size[1] == 1) || (I->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &ko_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(I->size[1] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &jo_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &dc_emlrtRSI;
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
    f_st.site = &fc_emlrtRSI;
    if (!muDoubleScalarIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &gc_emlrtRSI;
      overflow = (I->size[1] > 2147483646);
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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
      f_st.site = &ec_emlrtRSI;
      xi = I->data[idx - 1];
      g_st.site = &hc_emlrtRSI;
      overflow = ((!(idx + 1 > I->size[1])) && (I->size[1] > 2147483646));
      if (overflow) {
        h_st.site = &cb_emlrtRSI;
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

  emxInit_real_T1(sp, &d, 1, &pd_emlrtRTEI, true);
  st.site = &mb_emlrtRSI;
  b_sqrt(&st, &b_gamma);

  /*  initialize d and L */
  i12 = d->size[0];
  d->size[0] = n;
  emxEnsureCapacity_real_T1(sp, d, i12, &pd_emlrtRTEI);
  for (i12 = 0; i12 < n; i12++) {
    d->data[i12] = 0.0;
  }

  st.site = &nb_emlrtRSI;
  eye(&st, n, L);

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_int32_T1(sp, &K, 2, &qd_emlrtRTEI, true);
  emxInit_real_T1(sp, &Ccol, 1, &je_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &oe_emlrtRTEI, true);
  emxInit_int32_T(sp, &b_K, 1, &wd_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_I, 1, &he_emlrtRTEI, true);
  while (j <= n - 1) {
    if (j < 1) {
      i12 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_int32_T1(sp, K, i12, &qd_emlrtRTEI);
    } else {
      i12 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_int32_T1(sp, K, i12, &qd_emlrtRTEI);
      for (i12 = 0; i12 < j; i12++) {
        K->data[K->size[0] * i12] = 1 + i12;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    idx = d->size[0];
    i12 = b_varargin_1->size[0];
    b_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T1(sp, b_varargin_1, i12, &td_emlrtRTEI);
    loop_ub = K->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      i13 = K->data[K->size[0] * i12];
      if (!((i13 >= 1) && (i13 <= idx))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, idx, &fc_emlrtBCI, sp);
      }

      b_varargin_1->data[i12] = d->data[i13 - 1];
    }

    m = L->size[1];
    i12 = L->size[0];
    i13 = 1 + j;
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &dc_emlrtBCI, sp);
    }

    i12 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T1(sp, diagA, i12, &ud_emlrtRTEI);
    loop_ub = K->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      i14 = K->data[K->size[0] * i12];
      if (!((i14 >= 1) && (i14 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, m, &gc_emlrtBCI, sp);
      }

      diagA->data[i12] = L->data[(i13 + L->size[0] * (i14 - 1)) - 1];
    }

    i12 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(sp, b_K, i12, &wd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_K->data[i12] = K->data[K->size[0] * i12];
    }

    i12 = b_K->size[0];
    i13 = diagA->size[0];
    if (i12 != i13) {
      emlrtSizeEqCheck1DR2012b(i12, i13, &o_emlrtECI, sp);
    }

    st.site = &ob_emlrtRSI;
    m = L->size[1];
    i12 = L->size[0];
    i13 = 1 + j;
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &ec_emlrtBCI, &st);
    }

    i12 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T(&st, I, i12, &xd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      i14 = K->data[K->size[0] * i12];
      if (!((i14 >= 1) && (i14 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, m, &hc_emlrtBCI, &st);
      }

      I->data[I->size[0] * i12] = L->data[(i13 + L->size[0] * (i14 - 1)) - 1];
    }

    i12 = b_varargin_1->size[0];
    emxEnsureCapacity_real_T1(&st, b_varargin_1, i12, &td_emlrtRTEI);
    loop_ub = b_varargin_1->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_varargin_1->data[i12] *= diagA->data[i12];
    }

    b_st.site = &tc_emlrtRSI;
    i12 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(&b_st, b_K, i12, &yd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_K->data[i12] = K->data[K->size[0] * i12];
    }

    if (!(b_K->size[0] == b_varargin_1->size[0])) {
      i12 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&b_st, b_K, i12, &yd_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_K->data[i12] = K->data[K->size[0] * i12];
      }

      if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    i12 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_int32_T(&st, b_K, i12, &yd_emlrtRTEI);
    loop_ub = K->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_K->data[i12] = K->data[K->size[0] * i12];
    }

    if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
      xi = 0.0;
      for (i12 = 0; i12 < I->size[1]; i12++) {
        xi += I->data[I->size[0] * i12] * b_varargin_1->data[i12];
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      i12 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&d_st, b_K, i12, &yd_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_K->data[i12] = K->data[K->size[0] * i12];
      }

      if (b_K->size[0] < 1) {
        xi = 0.0;
      } else {
        e_st.site = &wc_emlrtRSI;
        i12 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_int32_T(&d_st, b_K, i12, &yd_emlrtRTEI);
        loop_ub = K->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          b_K->data[i12] = K->data[K->size[0] * i12];
        }

        n_t = (ptrdiff_t)b_K->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        i12 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_int32_T(&d_st, b_K, i12, &yd_emlrtRTEI);
        loop_ub = K->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          b_K->data[i12] = K->data[K->size[0] * i12];
        }

        xi = ddot(&n_t, &I->data[0], &incx_t, &b_varargin_1->data[0], &incy_t);
      }
    }

    i12 = A->size[0];
    i13 = 1 + j;
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &ic_emlrtBCI, sp);
    }

    i12 = A->size[1];
    i14 = 1 + j;
    if (!((i14 >= 1) && (i14 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i14, 1, i12, &ic_emlrtBCI, sp);
    }

    djtemp = A->data[(i13 + A->size[0] * (i14 - 1)) - 1] - xi;

    /*  C(j,j) in book */
    if (1 + j < n) {
      st.site = &pb_emlrtRSI;
      b_st.site = &xc_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        i12 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T(&b_st, I, i12, &ae_emlrtRTEI);
      } else {
        i12 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (n - j) - 1;
        emxEnsureCapacity_real_T(&b_st, I, i12, &ae_emlrtRTEI);
        loop_ub = (n - j) - 2;
        for (i12 = 0; i12 <= loop_ub; i12++) {
          I->data[I->size[0] * i12] = ((uint32_T)j + i12) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      idx = d->size[0];
      i12 = b_varargin_1->size[0];
      b_varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T1(sp, b_varargin_1, i12, &be_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        i13 = K->data[K->size[0] * i12];
        if (!((i13 >= 1) && (i13 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i13, 1, idx, &kc_emlrtBCI, sp);
        }

        b_varargin_1->data[i12] = d->data[i13 - 1];
      }

      m = L->size[1];
      i12 = L->size[0];
      i13 = 1 + j;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &bc_emlrtBCI, sp);
      }

      i12 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T1(sp, diagA, i12, &ce_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        i14 = K->data[K->size[0] * i12];
        if (!((i14 >= 1) && (i14 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i14, 1, m, &lc_emlrtBCI, sp);
        }

        diagA->data[i12] = L->data[(i13 + L->size[0] * (i14 - 1)) - 1];
      }

      i12 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(sp, b_K, i12, &de_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_K->data[i12] = K->data[K->size[0] * i12];
      }

      i12 = b_K->size[0];
      i13 = diagA->size[0];
      if (i12 != i13) {
        emlrtSizeEqCheck1DR2012b(i12, i13, &n_emlrtECI, sp);
      }

      idx = A->size[0];
      i12 = A->size[1];
      i13 = 1 + j;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &cc_emlrtBCI, sp);
      }

      i12 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T1(sp, Ccol, i12, &ee_emlrtRTEI);
      loop_ub = I->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        xi = I->data[I->size[0] * i12];
        if (xi != (int32_T)muDoubleScalarFloor(xi)) {
          emlrtIntegerCheckR2012b(xi, &v_emlrtDCI, sp);
        }

        i14 = (int32_T)xi;
        if (!((i14 >= 1) && (i14 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i14, 1, idx, &mc_emlrtBCI, sp);
        }

        Ccol->data[i12] = A->data[(i14 + A->size[0] * (i13 - 1)) - 1];
      }

      st.site = &qb_emlrtRSI;
      m = L->size[0];
      b_L = L->size[1];
      i12 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = I->size[1];
      varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T(&st, varargin_1, i12, &fe_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        idx = I->size[1];
        for (i13 = 0; i13 < idx; i13++) {
          i14 = (int32_T)I->data[I->size[0] * i13];
          if (!((i14 >= 1) && (i14 <= m))) {
            emlrtDynamicBoundsCheckR2012b(i14, 1, m, &nc_emlrtBCI, &st);
          }

          i15 = K->data[K->size[0] * i12];
          if (!((i15 >= 1) && (i15 <= b_L))) {
            emlrtDynamicBoundsCheckR2012b(i15, 1, b_L, &oc_emlrtBCI, &st);
          }

          varargin_1->data[i13 + varargin_1->size[0] * i12] = L->data[(i14 +
            L->size[0] * (i15 - 1)) - 1];
        }
      }

      i12 = b_varargin_1->size[0];
      emxEnsureCapacity_real_T1(&st, b_varargin_1, i12, &be_emlrtRTEI);
      loop_ub = b_varargin_1->size[0];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_varargin_1->data[i12] *= diagA->data[i12];
      }

      b_st.site = &tc_emlrtRSI;
      i12 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&b_st, b_K, i12, &ge_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_K->data[i12] = K->data[K->size[0] * i12];
      }

      idx = b_K->size[0];
      if (!(idx == b_varargin_1->size[0])) {
        i12 = b_I->size[0];
        b_I->size[0] = I->size[1];
        emxEnsureCapacity_real_T1(&b_st, b_I, i12, &he_emlrtRTEI);
        loop_ub = I->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          b_I->data[i12] = I->data[I->size[0] * i12];
        }

        m = b_I->size[0];
        i12 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_int32_T(&b_st, b_K, i12, &ge_emlrtRTEI);
        loop_ub = K->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          b_K->data[i12] = K->data[K->size[0] * i12];
        }

        idx = b_K->size[0];
        if (((m == 1) && (idx == 1)) || (b_varargin_1->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      i12 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_int32_T(&st, b_K, i12, &ge_emlrtRTEI);
      loop_ub = K->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_K->data[i12] = K->data[K->size[0] * i12];
      }

      idx = b_K->size[0];
      if ((idx == 1) || (b_varargin_1->size[0] == 1)) {
        i12 = diagA->size[0];
        diagA->size[0] = varargin_1->size[0];
        emxEnsureCapacity_real_T1(&st, diagA, i12, &fe_emlrtRTEI);
        loop_ub = varargin_1->size[0];
        for (i12 = 0; i12 < loop_ub; i12++) {
          diagA->data[i12] = 0.0;
          idx = varargin_1->size[1];
          for (i13 = 0; i13 < idx; i13++) {
            diagA->data[i12] += varargin_1->data[i12 + varargin_1->size[0] * i13]
              * b_varargin_1->data[i13];
          }
        }
      } else {
        b_st.site = &sc_emlrtRSI;
        i12 = b_I->size[0];
        b_I->size[0] = I->size[1];
        emxEnsureCapacity_real_T1(&b_st, b_I, i12, &he_emlrtRTEI);
        loop_ub = I->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          b_I->data[i12] = I->data[I->size[0] * i12];
        }

        m = b_I->size[0];
        guard1 = false;
        if (m == 0) {
          guard1 = true;
        } else {
          i12 = b_K->size[0];
          b_K->size[0] = K->size[1];
          emxEnsureCapacity_int32_T(&b_st, b_K, i12, &ge_emlrtRTEI);
          loop_ub = K->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            b_K->data[i12] = K->data[K->size[0] * i12];
          }

          idx = b_K->size[0];
          if ((idx == 0) || (b_varargin_1->size[0] == 0)) {
            guard1 = true;
          } else {
            c_st.site = &yc_emlrtRSI;
            c_st.site = &ad_emlrtRSI;
            TRANSA = 'N';
            TRANSB = 'N';
            xi = 1.0;
            beta1 = 0.0;
            i12 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i12, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_I->data[i12] = I->data[I->size[0] * i12];
            }

            m = b_I->size[0];
            incx_t = (ptrdiff_t)m;
            n_t = (ptrdiff_t)1;
            i12 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_K, i12, &ge_emlrtRTEI);
            loop_ub = K->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_K->data[i12] = K->data[K->size[0] * i12];
            }

            idx = b_K->size[0];
            incy_t = (ptrdiff_t)idx;
            i12 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i12, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_I->data[i12] = I->data[I->size[0] * i12];
            }

            m = b_I->size[0];
            lda_t = (ptrdiff_t)m;
            i12 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_K, i12, &ge_emlrtRTEI);
            loop_ub = K->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_K->data[i12] = K->data[K->size[0] * i12];
            }

            idx = b_K->size[0];
            ldb_t = (ptrdiff_t)idx;
            i12 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i12, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_I->data[i12] = I->data[I->size[0] * i12];
            }

            m = b_I->size[0];
            ldc_t = (ptrdiff_t)m;
            i12 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i12, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_I->data[i12] = I->data[I->size[0] * i12];
            }

            m = b_I->size[0];
            i12 = diagA->size[0];
            diagA->size[0] = m;
            emxEnsureCapacity_real_T1(&c_st, diagA, i12, &j_emlrtRTEI);
            i12 = b_I->size[0];
            b_I->size[0] = I->size[1];
            emxEnsureCapacity_real_T1(&c_st, b_I, i12, &he_emlrtRTEI);
            loop_ub = I->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_I->data[i12] = I->data[I->size[0] * i12];
            }

            i12 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_K, i12, &ge_emlrtRTEI);
            loop_ub = K->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              b_K->data[i12] = K->data[K->size[0] * i12];
            }

            dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &xi,
                  &varargin_1->data[0], &lda_t, &b_varargin_1->data[0], &ldb_t,
                  &beta1, &diagA->data[0], &ldc_t);
          }
        }

        if (guard1) {
          i12 = b_I->size[0];
          b_I->size[0] = I->size[1];
          emxEnsureCapacity_real_T1(&b_st, b_I, i12, &he_emlrtRTEI);
          loop_ub = I->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            b_I->data[i12] = I->data[I->size[0] * i12];
          }

          m = b_I->size[0];
          i12 = diagA->size[0];
          diagA->size[0] = m;
          emxEnsureCapacity_real_T1(&b_st, diagA, i12, &fe_emlrtRTEI);
          for (i12 = 0; i12 < m; i12++) {
            diagA->data[i12] = 0.0;
          }
        }
      }

      i12 = b_I->size[0];
      b_I->size[0] = I->size[1];
      emxEnsureCapacity_real_T1(sp, b_I, i12, &ie_emlrtRTEI);
      loop_ub = I->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_I->data[i12] = I->data[I->size[0] * i12];
      }

      i12 = b_I->size[0];
      i13 = diagA->size[0];
      if (i12 != i13) {
        emlrtSizeEqCheck1DR2012b(i12, i13, &m_emlrtECI, sp);
      }

      i12 = Ccol->size[0];
      emxEnsureCapacity_real_T1(sp, Ccol, i12, &je_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i12 = 0; i12 < loop_ub; i12++) {
        Ccol->data[i12] -= diagA->data[i12];
      }

      /*  C(I,j) in book */
      st.site = &rb_emlrtRSI;
      c_abs(&st, Ccol, b_varargin_1);
      st.site = &rb_emlrtRSI;
      b_st.site = &ac_emlrtRSI;
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

      e_st.site = &dc_emlrtRSI;
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
        f_st.site = &fc_emlrtRSI;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          g_st.site = &gc_emlrtRSI;
          overflow = (b_varargin_1->size[0] > 2147483646);
          if (overflow) {
            h_st.site = &cb_emlrtRSI;
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
          f_st.site = &ec_emlrtRSI;
          xi = b_varargin_1->data[idx - 1];
          g_st.site = &hc_emlrtRSI;
          overflow = ((!(idx + 1 > b_varargin_1->size[0])) &&
                      (b_varargin_1->size[0] > 2147483646));
          if (overflow) {
            h_st.site = &cb_emlrtRSI;
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
      st.site = &sb_emlrtRSI;
      b_st.site = &bd_emlrtRSI;
      c_st.site = &cd_emlrtRSI;
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

      i12 = d->size[0];
      i13 = 1 + j;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &pc_emlrtBCI, sp);
      }

      d->data[i13 - 1] = xi;
      m = L->size[0];
      i12 = r2->size[0];
      r2->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(sp, r2, i12, &ke_emlrtRTEI);
      loop_ub = I->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        i13 = (int32_T)I->data[I->size[0] * i12];
        if (!((i13 >= 1) && (i13 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i13, 1, m, &qc_emlrtBCI, sp);
        }

        r2->data[i12] = i13 - 1;
      }

      i12 = L->size[1];
      i13 = j + 1;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &yb_emlrtBCI, sp);
      }

      i12 = d->size[0];
      i13 = j + 1;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &ac_emlrtBCI, sp);
      }

      xi = d->data[j];
      i12 = Ccol->size[0];
      emxEnsureCapacity_real_T1(sp, Ccol, i12, &le_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i12 = 0; i12 < loop_ub; i12++) {
        Ccol->data[i12] /= xi;
      }

      iv17[0] = r2->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv17[0], 1, &(*(int32_T (*)[1])Ccol->size)
        [0], 1, &l_emlrtECI, sp);
      loop_ub = Ccol->size[0];
      for (i12 = 0; i12 < loop_ub; i12++) {
        L->data[r2->data[i12] + L->size[0] * j] = Ccol->data[i12];
      }
    } else {
      beta1 = muDoubleScalarAbs(djtemp);
      if ((beta1 < delta) || (muDoubleScalarIsNaN(beta1) &&
                              (!muDoubleScalarIsNaN(delta)))) {
        beta1 = delta;
      }

      i12 = d->size[0];
      i13 = 1 + j;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &jc_emlrtBCI, sp);
      }

      d->data[i13 - 1] = beta1;
    }

    i12 = d->size[0];
    i13 = j + 1;
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &xb_emlrtBCI, sp);
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_I);
  emxFree_int32_T(&b_K);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&b_varargin_1);
  emxFree_real_T(&Ccol);
  emxFree_real_T(&I);
  emxFree_int32_T(&K);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  j = 0;
  while (j <= n - 1) {
    loop_ub = L->size[0];
    i12 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r2, i12, &sd_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      r2->data[i12] = i12;
    }

    i12 = L->size[1];
    i13 = j + 1;
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &ub_emlrtBCI, sp);
    }

    st.site = &tb_emlrtRSI;
    i12 = d->size[0];
    i13 = j + 1;
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &vb_emlrtBCI, &st);
    }

    overflow = (d->data[j] < 0.0);
    if (overflow) {
      b_st.site = &oc_emlrtRSI;
      b_error(&b_st);
    }

    xi = muDoubleScalarSqrt(d->data[j]);
    i12 = L->size[1];
    i13 = j + 1;
    if (!((i13 >= 1) && (i13 <= i12))) {
      emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &wb_emlrtBCI, sp);
    }

    loop_ub = L->size[0];
    i12 = diagA->size[0];
    diagA->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(sp, diagA, i12, &vd_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      diagA->data[i12] = L->data[i12 + L->size[0] * j] * xi;
    }

    iv17[0] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv17[0], 1, &(*(int32_T (*)[1])diagA->size)[0],
      1, &k_emlrtECI, sp);
    loop_ub = diagA->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      L->data[r2->data[i12] + L->size[0] * j] = diagA->data[i12];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&r2);
  emxFree_real_T(&d);
  emxFree_real_T(&diagA);
  i12 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(sp, R, i12, &rd_emlrtRTEI);
  loop_ub = L->size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    idx = L->size[1];
    for (i13 = 0; i13 < idx; i13++) {
      R->data[i13 + R->size[0] * i12] = L->data[i12 + L->size[0] * i13];
    }
  }

  emxFree_real_T(&L);
  *err = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cholmod.c) */

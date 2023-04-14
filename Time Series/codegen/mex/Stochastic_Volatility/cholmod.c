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
#include "Stochastic_Volatility.h"
#include "cholmod.h"
#include "Stochastic_Volatility_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "abs.h"
#include "error.h"
#include "eye.h"
#include "sqrt.h"
#include "diag.h"
#include "error1.h"
#include "sum.h"
#include "Stochastic_Volatility_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo vd_emlrtRSI = { 29, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 37, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 38, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 39, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 50, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 59, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 61, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 62, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 63, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 66, /* lineNo */
  "cholmod",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 13, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 114,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 852,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 844,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 894,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 910,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 259,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 325,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 404,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 402,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo af_emlrtRTEI = { 29,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 29,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 39,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 325,/* lineNo */
  14,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 79,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 77,/* lineNo */
  7,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 59,/* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 59,/* lineNo */
  39,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 77,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 59,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 59,/* lineNo */
  23,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 59,/* lineNo */
  27,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 61,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 62,/* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 62,/* lineNo */
  41,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 62,/* lineNo */
  35,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 62,/* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 62,/* lineNo */
  25,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 62,/* lineNo */
  29,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 62,/* lineNo */
  27,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 62,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 62,/* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 67,/* lineNo */
  11,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 67,/* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 2,/* lineNo */
  21,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 38,/* lineNo */
  13,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 39,/* lineNo */
  14,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  77,                                  /* lineNo */
  5,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  9,                                   /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  28,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  18,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  10,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  67,                                  /* lineNo */
  9,                                   /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  13,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  25,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  20,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  59,                                  /* lineNo */
  31,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  41,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  25,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  39,                                  /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 2,  /* nDims */
  29,                                  /* lineNo */
  16,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m"/* pName */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  33,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 59,  /* lineNo */
  33,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  43,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  35,                                  /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  45,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  18,                                  /* colNo */
  "A",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 62,  /* lineNo */
  18,                                  /* colNo */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  27,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  29,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  9,                                   /* colNo */
  "d",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  11,                                  /* colNo */
  "L",                                 /* aName */
  "cholmod",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\cholmod.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void b_cholmod(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T
               *R)
{
  int32_T i32;
  emxArray_real_T *L;
  int32_T b_A[2];
  int32_T loop_ub;
  int32_T idx;
  int32_T i33;
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
  emxArray_int32_T *r8;
  emxArray_real_T *b_K;
  int32_T i34;
  int32_T iv40[1];
  real_T djtemp;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  int32_T b_L;
  int32_T i35;
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
  for (i32 = 0; i32 < 2; i32++) {
    b_A[i32] = A->size[i32];
  }

  emxInit_real_T1(sp, &L, 2, &cg_emlrtRTEI, true);
  i32 = L->size[0] * L->size[1];
  L->size[0] = A->size[1];
  L->size[1] = A->size[0];
  emxEnsureCapacity_real_T1(sp, L, i32, &af_emlrtRTEI);
  loop_ub = A->size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    idx = A->size[1];
    for (i33 = 0; i33 < idx; i33++) {
      L->data[i33 + L->size[0] * i32] = A->data[i32 + A->size[0] * i33];
    }
  }

  for (i32 = 0; i32 < 2; i32++) {
    c_A[i32] = L->size[i32];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &bb_emlrtECI, sp);
  }

  i32 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T1(sp, L, i32, &bf_emlrtRTEI);
  loop_ub = A->size[1];
  for (i32 = 0; i32 < loop_ub; i32++) {
    idx = A->size[0];
    for (i33 = 0; i33 < idx; i33++) {
      L->data[i33 + L->size[0] * i32] = A->data[i33 + A->size[0] * i32] -
        A->data[i32 + A->size[0] * i33];
    }
  }

  emxInit_real_T1(sp, &I, 2, &of_emlrtRTEI, true);
  emxInit_real_T1(sp, &varargin_1, 2, &fg_emlrtRTEI, true);
  st.site = &vd_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &vd_emlrtRSI;
  sum(&st, varargin_1, I);
  st.site = &vd_emlrtRSI;
  if (b_sum(&st, I) > 0.0) {
    st.site = &wd_emlrtRSI;
    e_error(&st);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }

  emxInit_real_T(sp, &diagA, 1, &bg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_varargin_1, 1, &eg_emlrtRTEI, true);
  st.site = &xd_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &yd_emlrtRSI;
  c_abs(&st, diagA, b_varargin_1);
  st.site = &yd_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ue_emlrtRSI;
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
    f_st.site = &we_emlrtRSI;
    if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &xe_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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
      f_st.site = &ve_emlrtRSI;
      b_gamma = b_varargin_1->data[idx - 1];
      g_st.site = &ye_emlrtRSI;
      overflow = ((!(idx + 1 > b_varargin_1->size[0])) && (b_varargin_1->size[0]
        > 2147483646));
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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
  st.site = &ae_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  for (i32 = 0; i32 < 2; i32++) {
    b_A[i32] = A->size[i32];
    c_A[i32] = varargin_1->size[i32];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &ab_emlrtECI, sp);
  }

  i32 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T1(sp, L, i32, &cf_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i32 = 0; i32 < loop_ub; i32++) {
    L->data[i32] = A->data[i32] - varargin_1->data[i32];
  }

  st.site = &ae_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &ae_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  if (((varargin_1->size[0] == 1) && (varargin_1->size[1] == 1)) ||
      (varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &bf_emlrtRSI;
  f_st.site = &cf_emlrtRSI;
  g_st.site = &df_emlrtRSI;
  m = varargin_1->size[0];
  unnamed_idx_1 = (uint32_T)varargin_1->size[1];
  i32 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T1(&g_st, I, i32, &df_emlrtRTEI);
  if (varargin_1->size[1] >= 1) {
    h_st.site = &ff_emlrtRSI;
    overflow = (varargin_1->size[1] > 2147483646);
    if (overflow) {
      i_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = varargin_1->data[varargin_1->size[0] * j];
      h_st.site = &ef_emlrtRSI;
      if ((!(2 > m)) && (m > 2147483646)) {
        i_st.site = &sb_emlrtRSI;
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

  st.site = &ae_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  if ((I->size[1] == 1) || (I->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(I->size[1] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ue_emlrtRSI;
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
    f_st.site = &we_emlrtRSI;
    if (!muDoubleScalarIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &xe_emlrtRSI;
      overflow = (I->size[1] > 2147483646);
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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
      f_st.site = &ve_emlrtRSI;
      xi = I->data[idx - 1];
      g_st.site = &ye_emlrtRSI;
      overflow = ((!(idx + 1 > I->size[1])) && (I->size[1] > 2147483646));
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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

  emxInit_real_T(sp, &d, 1, &ef_emlrtRTEI, true);
  st.site = &be_emlrtRSI;
  b_sqrt(&st, &b_gamma);

  /*  initialize d and L */
  i32 = d->size[0];
  d->size[0] = n;
  emxEnsureCapacity_real_T(sp, d, i32, &ef_emlrtRTEI);
  for (i32 = 0; i32 < n; i32++) {
    d->data[i32] = 0.0;
  }

  st.site = &ce_emlrtRSI;
  eye(&st, n, L);

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_real_T1(sp, &K, 2, &ff_emlrtRTEI, true);
  emxInit_real_T(sp, &Ccol, 1, &xf_emlrtRTEI, true);
  emxInit_int32_T(sp, &r8, 1, &dg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_K, 1, &lf_emlrtRTEI, true);
  while (j <= n - 1) {
    if (j < 1) {
      i32 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_real_T1(sp, K, i32, &ff_emlrtRTEI);
    } else {
      i32 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T1(sp, K, i32, &ff_emlrtRTEI);
      loop_ub = j - 1;
      for (i32 = 0; i32 <= loop_ub; i32++) {
        K->data[K->size[0] * i32] = 1.0 + (real_T)i32;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    idx = d->size[0];
    i32 = b_varargin_1->size[0];
    b_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, b_varargin_1, i32, &if_emlrtRTEI);
    loop_ub = K->size[1];
    for (i32 = 0; i32 < loop_ub; i32++) {
      xi = K->data[K->size[0] * i32];
      if (xi != (int32_T)muDoubleScalarFloor(xi)) {
        emlrtIntegerCheckR2012b(xi, &t_emlrtDCI, sp);
      }

      i33 = (int32_T)xi;
      if (!((i33 >= 1) && (i33 <= idx))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, idx, &ec_emlrtBCI, sp);
      }

      b_varargin_1->data[i32] = d->data[i33 - 1];
    }

    m = L->size[1];
    i32 = L->size[0];
    i33 = 1 + j;
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &cc_emlrtBCI, sp);
    }

    i32 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, diagA, i32, &jf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i32 = 0; i32 < loop_ub; i32++) {
      i34 = (int32_T)K->data[K->size[0] * i32];
      if (!((i34 >= 1) && (i34 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i34, 1, m, &fc_emlrtBCI, sp);
      }

      diagA->data[i32] = L->data[(i33 + L->size[0] * (i34 - 1)) - 1];
    }

    i32 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, b_K, i32, &lf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i32 = 0; i32 < loop_ub; i32++) {
      b_K->data[i32] = K->data[K->size[0] * i32];
    }

    i32 = b_K->size[0];
    i33 = diagA->size[0];
    if (i32 != i33) {
      emlrtSizeEqCheck1DR2012b(i32, i33, &y_emlrtECI, sp);
    }

    st.site = &de_emlrtRSI;
    m = L->size[1];
    i32 = L->size[0];
    i33 = 1 + j;
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &dc_emlrtBCI, &st);
    }

    i32 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T1(&st, I, i32, &mf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i32 = 0; i32 < loop_ub; i32++) {
      i34 = (int32_T)K->data[K->size[0] * i32];
      if (!((i34 >= 1) && (i34 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i34, 1, m, &gc_emlrtBCI, &st);
      }

      I->data[I->size[0] * i32] = L->data[(i33 + L->size[0] * (i34 - 1)) - 1];
    }

    i32 = b_varargin_1->size[0];
    emxEnsureCapacity_real_T(&st, b_varargin_1, i32, &if_emlrtRTEI);
    loop_ub = b_varargin_1->size[0];
    for (i32 = 0; i32 < loop_ub; i32++) {
      b_varargin_1->data[i32] *= diagA->data[i32];
    }

    b_st.site = &ec_emlrtRSI;
    i32 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T(&b_st, b_K, i32, &nf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i32 = 0; i32 < loop_ub; i32++) {
      b_K->data[i32] = K->data[K->size[0] * i32];
    }

    if (!(b_K->size[0] == b_varargin_1->size[0])) {
      i32 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&b_st, b_K, i32, &nf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_K->data[i32] = K->data[K->size[0] * i32];
      }

      if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    i32 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T(&st, b_K, i32, &nf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i32 = 0; i32 < loop_ub; i32++) {
      b_K->data[i32] = K->data[K->size[0] * i32];
    }

    if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
      xi = 0.0;
      for (i32 = 0; i32 < I->size[1]; i32++) {
        xi += I->data[I->size[0] * i32] * b_varargin_1->data[i32];
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      c_st.site = &kf_emlrtRSI;
      d_st.site = &lf_emlrtRSI;
      i32 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&d_st, b_K, i32, &nf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_K->data[i32] = K->data[K->size[0] * i32];
      }

      if (b_K->size[0] < 1) {
        xi = 0.0;
      } else {
        e_st.site = &ad_emlrtRSI;
        i32 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T(&d_st, b_K, i32, &nf_emlrtRTEI);
        loop_ub = K->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          b_K->data[i32] = K->data[K->size[0] * i32];
        }

        n_t = (ptrdiff_t)b_K->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        i32 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T(&d_st, b_K, i32, &nf_emlrtRTEI);
        loop_ub = K->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          b_K->data[i32] = K->data[K->size[0] * i32];
        }

        xi = ddot(&n_t, &I->data[0], &incx_t, &b_varargin_1->data[0], &incy_t);
      }
    }

    i32 = A->size[0];
    i33 = 1 + j;
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &hc_emlrtBCI, sp);
    }

    i32 = A->size[1];
    i34 = 1 + j;
    if (!((i34 >= 1) && (i34 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i34, 1, i32, &hc_emlrtBCI, sp);
    }

    djtemp = A->data[(i33 + A->size[0] * (i34 - 1)) - 1] - xi;

    /*  C(j,j) in book */
    if (1 + j < n) {
      st.site = &ee_emlrtRSI;
      b_st.site = &tb_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        i32 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T1(&b_st, I, i32, &of_emlrtRTEI);
      } else {
        i32 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (n - j) - 1;
        emxEnsureCapacity_real_T1(&b_st, I, i32, &of_emlrtRTEI);
        loop_ub = (n - j) - 2;
        for (i32 = 0; i32 <= loop_ub; i32++) {
          I->data[I->size[0] * i32] = ((uint32_T)j + i32) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      idx = d->size[0];
      i32 = b_varargin_1->size[0];
      b_varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, b_varargin_1, i32, &pf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        i33 = (int32_T)K->data[K->size[0] * i32];
        if (!((i33 >= 1) && (i33 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i33, 1, idx, &jc_emlrtBCI, sp);
        }

        b_varargin_1->data[i32] = d->data[i33 - 1];
      }

      m = L->size[1];
      i32 = L->size[0];
      i33 = 1 + j;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &ac_emlrtBCI, sp);
      }

      i32 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, diagA, i32, &qf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        i34 = (int32_T)K->data[K->size[0] * i32];
        if (!((i34 >= 1) && (i34 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i34, 1, m, &kc_emlrtBCI, sp);
        }

        diagA->data[i32] = L->data[(i33 + L->size[0] * (i34 - 1)) - 1];
      }

      i32 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, b_K, i32, &rf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_K->data[i32] = K->data[K->size[0] * i32];
      }

      i32 = b_K->size[0];
      i33 = diagA->size[0];
      if (i32 != i33) {
        emlrtSizeEqCheck1DR2012b(i32, i33, &x_emlrtECI, sp);
      }

      idx = A->size[0];
      i32 = A->size[1];
      i33 = 1 + j;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &bc_emlrtBCI, sp);
      }

      i32 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T(sp, Ccol, i32, &sf_emlrtRTEI);
      loop_ub = I->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        xi = I->data[I->size[0] * i32];
        if (xi != (int32_T)muDoubleScalarFloor(xi)) {
          emlrtIntegerCheckR2012b(xi, &u_emlrtDCI, sp);
        }

        i34 = (int32_T)xi;
        if (!((i34 >= 1) && (i34 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i34, 1, idx, &lc_emlrtBCI, sp);
        }

        Ccol->data[i32] = A->data[(i34 + A->size[0] * (i33 - 1)) - 1];
      }

      st.site = &fe_emlrtRSI;
      m = L->size[0];
      b_L = L->size[1];
      i32 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = I->size[1];
      varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T1(&st, varargin_1, i32, &tf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        idx = I->size[1];
        for (i33 = 0; i33 < idx; i33++) {
          i34 = (int32_T)I->data[I->size[0] * i33];
          if (!((i34 >= 1) && (i34 <= m))) {
            emlrtDynamicBoundsCheckR2012b(i34, 1, m, &mc_emlrtBCI, &st);
          }

          i35 = (int32_T)K->data[K->size[0] * i32];
          if (!((i35 >= 1) && (i35 <= b_L))) {
            emlrtDynamicBoundsCheckR2012b(i35, 1, b_L, &nc_emlrtBCI, &st);
          }

          varargin_1->data[i33 + varargin_1->size[0] * i32] = L->data[(i34 +
            L->size[0] * (i35 - 1)) - 1];
        }
      }

      i32 = b_varargin_1->size[0];
      emxEnsureCapacity_real_T(&st, b_varargin_1, i32, &pf_emlrtRTEI);
      loop_ub = b_varargin_1->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_varargin_1->data[i32] *= diagA->data[i32];
      }

      b_st.site = &ec_emlrtRSI;
      i32 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&b_st, b_K, i32, &uf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_K->data[i32] = K->data[K->size[0] * i32];
      }

      idx = b_K->size[0];
      if (!(idx == b_varargin_1->size[0])) {
        i32 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T(&b_st, b_K, i32, &vf_emlrtRTEI);
        loop_ub = I->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          b_K->data[i32] = I->data[I->size[0] * i32];
        }

        m = b_K->size[0];
        i32 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T(&b_st, b_K, i32, &uf_emlrtRTEI);
        loop_ub = K->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          b_K->data[i32] = K->data[K->size[0] * i32];
        }

        idx = b_K->size[0];
        if (((m == 1) && (idx == 1)) || (b_varargin_1->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      i32 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&st, b_K, i32, &uf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_K->data[i32] = K->data[K->size[0] * i32];
      }

      idx = b_K->size[0];
      if ((idx == 1) || (b_varargin_1->size[0] == 1)) {
        i32 = diagA->size[0];
        diagA->size[0] = varargin_1->size[0];
        emxEnsureCapacity_real_T(&st, diagA, i32, &tf_emlrtRTEI);
        loop_ub = varargin_1->size[0];
        for (i32 = 0; i32 < loop_ub; i32++) {
          diagA->data[i32] = 0.0;
          idx = varargin_1->size[1];
          for (i33 = 0; i33 < idx; i33++) {
            diagA->data[i32] += varargin_1->data[i32 + varargin_1->size[0] * i33]
              * b_varargin_1->data[i33];
          }
        }
      } else {
        b_st.site = &dc_emlrtRSI;
        i32 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T(&b_st, b_K, i32, &vf_emlrtRTEI);
        loop_ub = I->size[1];
        for (i32 = 0; i32 < loop_ub; i32++) {
          b_K->data[i32] = I->data[I->size[0] * i32];
        }

        m = b_K->size[0];
        guard1 = false;
        if (m == 0) {
          guard1 = true;
        } else {
          i32 = b_K->size[0];
          b_K->size[0] = K->size[1];
          emxEnsureCapacity_real_T(&b_st, b_K, i32, &uf_emlrtRTEI);
          loop_ub = K->size[1];
          for (i32 = 0; i32 < loop_ub; i32++) {
            b_K->data[i32] = K->data[K->size[0] * i32];
          }

          idx = b_K->size[0];
          if ((idx == 0) || (b_varargin_1->size[0] == 0)) {
            guard1 = true;
          } else {
            c_st.site = &fc_emlrtRSI;
            c_st.site = &gc_emlrtRSI;
            TRANSA = 'N';
            TRANSB = 'N';
            xi = 1.0;
            beta1 = 0.0;
            i32 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = I->data[I->size[0] * i32];
            }

            m = b_K->size[0];
            incx_t = (ptrdiff_t)m;
            n_t = (ptrdiff_t)1;
            i32 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &uf_emlrtRTEI);
            loop_ub = K->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = K->data[K->size[0] * i32];
            }

            idx = b_K->size[0];
            incy_t = (ptrdiff_t)idx;
            i32 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = I->data[I->size[0] * i32];
            }

            m = b_K->size[0];
            lda_t = (ptrdiff_t)m;
            i32 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &uf_emlrtRTEI);
            loop_ub = K->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = K->data[K->size[0] * i32];
            }

            idx = b_K->size[0];
            ldb_t = (ptrdiff_t)idx;
            i32 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = I->data[I->size[0] * i32];
            }

            m = b_K->size[0];
            ldc_t = (ptrdiff_t)m;
            i32 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = I->data[I->size[0] * i32];
            }

            m = b_K->size[0];
            i32 = diagA->size[0];
            diagA->size[0] = m;
            emxEnsureCapacity_real_T(&c_st, diagA, i32, &e_emlrtRTEI);
            i32 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = I->data[I->size[0] * i32];
            }

            i32 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i32, &uf_emlrtRTEI);
            loop_ub = K->size[1];
            for (i32 = 0; i32 < loop_ub; i32++) {
              b_K->data[i32] = K->data[K->size[0] * i32];
            }

            dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &xi,
                  &varargin_1->data[0], &lda_t, &b_varargin_1->data[0], &ldb_t,
                  &beta1, &diagA->data[0], &ldc_t);
          }
        }

        if (guard1) {
          i32 = b_K->size[0];
          b_K->size[0] = I->size[1];
          emxEnsureCapacity_real_T(&b_st, b_K, i32, &vf_emlrtRTEI);
          loop_ub = I->size[1];
          for (i32 = 0; i32 < loop_ub; i32++) {
            b_K->data[i32] = I->data[I->size[0] * i32];
          }

          m = b_K->size[0];
          i32 = diagA->size[0];
          diagA->size[0] = m;
          emxEnsureCapacity_real_T(&b_st, diagA, i32, &tf_emlrtRTEI);
          for (i32 = 0; i32 < m; i32++) {
            diagA->data[i32] = 0.0;
          }
        }
      }

      i32 = b_K->size[0];
      b_K->size[0] = I->size[1];
      emxEnsureCapacity_real_T(sp, b_K, i32, &wf_emlrtRTEI);
      loop_ub = I->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        b_K->data[i32] = I->data[I->size[0] * i32];
      }

      i32 = b_K->size[0];
      i33 = diagA->size[0];
      if (i32 != i33) {
        emlrtSizeEqCheck1DR2012b(i32, i33, &w_emlrtECI, sp);
      }

      i32 = Ccol->size[0];
      emxEnsureCapacity_real_T(sp, Ccol, i32, &xf_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        Ccol->data[i32] -= diagA->data[i32];
      }

      /*  C(I,j) in book */
      st.site = &ge_emlrtRSI;
      c_abs(&st, Ccol, b_varargin_1);
      st.site = &ge_emlrtRSI;
      b_st.site = &re_emlrtRSI;
      c_st.site = &se_emlrtRSI;
      d_st.site = &te_emlrtRSI;
      if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      if (!(b_varargin_1->size[0] >= 1)) {
        emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      e_st.site = &ue_emlrtRSI;
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
        f_st.site = &we_emlrtRSI;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          g_st.site = &xe_emlrtRSI;
          overflow = (b_varargin_1->size[0] > 2147483646);
          if (overflow) {
            h_st.site = &sb_emlrtRSI;
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
          f_st.site = &ve_emlrtRSI;
          xi = b_varargin_1->data[idx - 1];
          g_st.site = &ye_emlrtRSI;
          overflow = ((!(idx + 1 > b_varargin_1->size[0])) &&
                      (b_varargin_1->size[0] > 2147483646));
          if (overflow) {
            h_st.site = &sb_emlrtRSI;
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
      st.site = &he_emlrtRSI;
      b_st.site = &mf_emlrtRSI;
      c_st.site = &nf_emlrtRSI;
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

      i32 = d->size[0];
      i33 = 1 + j;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &oc_emlrtBCI, sp);
      }

      d->data[i33 - 1] = xi;
      m = L->size[0];
      i32 = r8->size[0];
      r8->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(sp, r8, i32, &yf_emlrtRTEI);
      loop_ub = I->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        i33 = (int32_T)I->data[I->size[0] * i32];
        if (!((i33 >= 1) && (i33 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i33, 1, m, &pc_emlrtBCI, sp);
        }

        r8->data[i32] = i33 - 1;
      }

      i32 = L->size[1];
      i33 = j + 1;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &xb_emlrtBCI, sp);
      }

      i32 = d->size[0];
      i33 = j + 1;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &yb_emlrtBCI, sp);
      }

      xi = d->data[j];
      i32 = Ccol->size[0];
      emxEnsureCapacity_real_T(sp, Ccol, i32, &ag_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        Ccol->data[i32] /= xi;
      }

      iv40[0] = r8->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv40[0], 1, &(*(int32_T (*)[1])Ccol->size)
        [0], 1, &v_emlrtECI, sp);
      loop_ub = Ccol->size[0];
      for (i32 = 0; i32 < loop_ub; i32++) {
        L->data[r8->data[i32] + L->size[0] * j] = Ccol->data[i32];
      }
    } else {
      beta1 = muDoubleScalarAbs(djtemp);
      if ((beta1 < delta) || (muDoubleScalarIsNaN(beta1) &&
                              (!muDoubleScalarIsNaN(delta)))) {
        beta1 = delta;
      }

      i32 = d->size[0];
      i33 = 1 + j;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &ic_emlrtBCI, sp);
      }

      d->data[i33 - 1] = beta1;
    }

    i32 = d->size[0];
    i33 = j + 1;
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &wb_emlrtBCI, sp);
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
    i32 = r8->size[0];
    r8->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r8, i32, &hf_emlrtRTEI);
    for (i32 = 0; i32 < loop_ub; i32++) {
      r8->data[i32] = i32;
    }

    i32 = L->size[1];
    i33 = j + 1;
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &tb_emlrtBCI, sp);
    }

    st.site = &ie_emlrtRSI;
    i32 = d->size[0];
    i33 = j + 1;
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &ub_emlrtBCI, &st);
    }

    overflow = (d->data[j] < 0.0);
    if (overflow) {
      b_st.site = &gf_emlrtRSI;
      f_error(&b_st);
    }

    xi = muDoubleScalarSqrt(d->data[j]);
    i32 = L->size[1];
    i33 = j + 1;
    if (!((i33 >= 1) && (i33 <= i32))) {
      emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &vb_emlrtBCI, sp);
    }

    loop_ub = L->size[0];
    i32 = diagA->size[0];
    diagA->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, diagA, i32, &kf_emlrtRTEI);
    for (i32 = 0; i32 < loop_ub; i32++) {
      diagA->data[i32] = L->data[i32 + L->size[0] * j] * xi;
    }

    iv40[0] = r8->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv40[0], 1, &(*(int32_T (*)[1])diagA->size)[0],
      1, &u_emlrtECI, sp);
    loop_ub = diagA->size[0];
    for (i32 = 0; i32 < loop_ub; i32++) {
      L->data[r8->data[i32] + L->size[0] * j] = diagA->data[i32];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&r8);
  emxFree_real_T(&d);
  emxFree_real_T(&diagA);
  i32 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T1(sp, R, i32, &gf_emlrtRTEI);
  loop_ub = L->size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    idx = L->size[1];
    for (i33 = 0; i33 < idx; i33++) {
      R->data[i33 + R->size[0] * i32] = L->data[i32 + L->size[0] * i33];
    }
  }

  emxFree_real_T(&L);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void cholmod(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *R,
             real_T *err)
{
  int32_T i18;
  emxArray_real_T *L;
  int32_T b_A[2];
  int32_T loop_ub;
  int32_T idx;
  int32_T i19;
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
  emxArray_int32_T *r6;
  emxArray_real_T *b_K;
  int32_T i20;
  int32_T iv26[1];
  real_T djtemp;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  int32_T b_L;
  int32_T i21;
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
  for (i18 = 0; i18 < 2; i18++) {
    b_A[i18] = A->size[i18];
  }

  emxInit_real_T1(sp, &L, 2, &cg_emlrtRTEI, true);
  i18 = L->size[0] * L->size[1];
  L->size[0] = A->size[1];
  L->size[1] = A->size[0];
  emxEnsureCapacity_real_T1(sp, L, i18, &af_emlrtRTEI);
  loop_ub = A->size[0];
  for (i18 = 0; i18 < loop_ub; i18++) {
    idx = A->size[1];
    for (i19 = 0; i19 < idx; i19++) {
      L->data[i19 + L->size[0] * i18] = A->data[i18 + A->size[0] * i19];
    }
  }

  for (i18 = 0; i18 < 2; i18++) {
    c_A[i18] = L->size[i18];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &bb_emlrtECI, sp);
  }

  i18 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T1(sp, L, i18, &bf_emlrtRTEI);
  loop_ub = A->size[1];
  for (i18 = 0; i18 < loop_ub; i18++) {
    idx = A->size[0];
    for (i19 = 0; i19 < idx; i19++) {
      L->data[i19 + L->size[0] * i18] = A->data[i19 + A->size[0] * i18] -
        A->data[i18 + A->size[0] * i19];
    }
  }

  emxInit_real_T1(sp, &I, 2, &of_emlrtRTEI, true);
  emxInit_real_T1(sp, &varargin_1, 2, &fg_emlrtRTEI, true);
  st.site = &vd_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &vd_emlrtRSI;
  sum(&st, varargin_1, I);
  st.site = &vd_emlrtRSI;
  if (b_sum(&st, I) > 0.0) {
    st.site = &wd_emlrtRSI;
    e_error(&st);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(A->size[0], A->size[1]);
  }

  emxInit_real_T(sp, &diagA, 1, &bg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_varargin_1, 1, &eg_emlrtRTEI, true);
  st.site = &xd_emlrtRSI;
  diag(&st, A, diagA);
  st.site = &yd_emlrtRSI;
  c_abs(&st, diagA, b_varargin_1);
  st.site = &yd_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(b_varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ue_emlrtRSI;
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
    f_st.site = &we_emlrtRSI;
    if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &xe_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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
      f_st.site = &ve_emlrtRSI;
      b_gamma = b_varargin_1->data[idx - 1];
      g_st.site = &ye_emlrtRSI;
      overflow = ((!(idx + 1 > b_varargin_1->size[0])) && (b_varargin_1->size[0]
        > 2147483646));
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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
  st.site = &ae_emlrtRSI;
  b_diag(&st, diagA, varargin_1);
  for (i18 = 0; i18 < 2; i18++) {
    b_A[i18] = A->size[i18];
    c_A[i18] = varargin_1->size[i18];
  }

  if ((b_A[0] != c_A[0]) || (b_A[1] != c_A[1])) {
    emlrtSizeEqCheckNDR2012b(&b_A[0], &c_A[0], &ab_emlrtECI, sp);
  }

  i18 = L->size[0] * L->size[1];
  L->size[0] = A->size[0];
  L->size[1] = A->size[1];
  emxEnsureCapacity_real_T1(sp, L, i18, &cf_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i18 = 0; i18 < loop_ub; i18++) {
    L->data[i18] = A->data[i18] - varargin_1->data[i18];
  }

  st.site = &ae_emlrtRSI;
  b_abs(&st, L, varargin_1);
  st.site = &ae_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  if (((varargin_1->size[0] == 1) && (varargin_1->size[1] == 1)) ||
      (varargin_1->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(varargin_1->size[0] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &bf_emlrtRSI;
  f_st.site = &cf_emlrtRSI;
  g_st.site = &df_emlrtRSI;
  m = varargin_1->size[0];
  unnamed_idx_1 = (uint32_T)varargin_1->size[1];
  i18 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T1(&g_st, I, i18, &df_emlrtRTEI);
  if (varargin_1->size[1] >= 1) {
    h_st.site = &ff_emlrtRSI;
    overflow = (varargin_1->size[1] > 2147483646);
    if (overflow) {
      i_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = varargin_1->data[varargin_1->size[0] * j];
      h_st.site = &ef_emlrtRSI;
      if ((!(2 > m)) && (m > 2147483646)) {
        i_st.site = &sb_emlrtRSI;
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

  st.site = &ae_emlrtRSI;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  if ((I->size[1] == 1) || (I->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(I->size[1] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ue_emlrtRSI;
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
    f_st.site = &we_emlrtRSI;
    if (!muDoubleScalarIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &xe_emlrtRSI;
      overflow = (I->size[1] > 2147483646);
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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
      f_st.site = &ve_emlrtRSI;
      xi = I->data[idx - 1];
      g_st.site = &ye_emlrtRSI;
      overflow = ((!(idx + 1 > I->size[1])) && (I->size[1] > 2147483646));
      if (overflow) {
        h_st.site = &sb_emlrtRSI;
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

  emxInit_real_T(sp, &d, 1, &ef_emlrtRTEI, true);
  st.site = &be_emlrtRSI;
  b_sqrt(&st, &b_gamma);

  /*  initialize d and L */
  i18 = d->size[0];
  d->size[0] = n;
  emxEnsureCapacity_real_T(sp, d, i18, &ef_emlrtRTEI);
  for (i18 = 0; i18 < n; i18++) {
    d->data[i18] = 0.0;
  }

  st.site = &ce_emlrtRSI;
  eye(&st, n, L);

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_real_T1(sp, &K, 2, &ff_emlrtRTEI, true);
  emxInit_real_T(sp, &Ccol, 1, &xf_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &dg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_K, 1, &lf_emlrtRTEI, true);
  while (j <= n - 1) {
    if (j < 1) {
      i18 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_real_T1(sp, K, i18, &ff_emlrtRTEI);
    } else {
      i18 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T1(sp, K, i18, &ff_emlrtRTEI);
      loop_ub = j - 1;
      for (i18 = 0; i18 <= loop_ub; i18++) {
        K->data[K->size[0] * i18] = 1.0 + (real_T)i18;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    idx = d->size[0];
    i18 = b_varargin_1->size[0];
    b_varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, b_varargin_1, i18, &if_emlrtRTEI);
    loop_ub = K->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      xi = K->data[K->size[0] * i18];
      if (xi != (int32_T)muDoubleScalarFloor(xi)) {
        emlrtIntegerCheckR2012b(xi, &t_emlrtDCI, sp);
      }

      i19 = (int32_T)xi;
      if (!((i19 >= 1) && (i19 <= idx))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, idx, &ec_emlrtBCI, sp);
      }

      b_varargin_1->data[i18] = d->data[i19 - 1];
    }

    m = L->size[1];
    i18 = L->size[0];
    i19 = 1 + j;
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &cc_emlrtBCI, sp);
    }

    i18 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, diagA, i18, &jf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      i20 = (int32_T)K->data[K->size[0] * i18];
      if (!((i20 >= 1) && (i20 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i20, 1, m, &fc_emlrtBCI, sp);
      }

      diagA->data[i18] = L->data[(i19 + L->size[0] * (i20 - 1)) - 1];
    }

    i18 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T(sp, b_K, i18, &lf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_K->data[i18] = K->data[K->size[0] * i18];
    }

    i18 = b_K->size[0];
    i19 = diagA->size[0];
    if (i18 != i19) {
      emlrtSizeEqCheck1DR2012b(i18, i19, &y_emlrtECI, sp);
    }

    st.site = &de_emlrtRSI;
    m = L->size[1];
    i18 = L->size[0];
    i19 = 1 + j;
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &dc_emlrtBCI, &st);
    }

    i18 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T1(&st, I, i18, &mf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      i20 = (int32_T)K->data[K->size[0] * i18];
      if (!((i20 >= 1) && (i20 <= m))) {
        emlrtDynamicBoundsCheckR2012b(i20, 1, m, &gc_emlrtBCI, &st);
      }

      I->data[I->size[0] * i18] = L->data[(i19 + L->size[0] * (i20 - 1)) - 1];
    }

    i18 = b_varargin_1->size[0];
    emxEnsureCapacity_real_T(&st, b_varargin_1, i18, &if_emlrtRTEI);
    loop_ub = b_varargin_1->size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_varargin_1->data[i18] *= diagA->data[i18];
    }

    b_st.site = &ec_emlrtRSI;
    i18 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T(&b_st, b_K, i18, &nf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_K->data[i18] = K->data[K->size[0] * i18];
    }

    if (!(b_K->size[0] == b_varargin_1->size[0])) {
      i18 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&b_st, b_K, i18, &nf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_K->data[i18] = K->data[K->size[0] * i18];
      }

      if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    i18 = b_K->size[0];
    b_K->size[0] = K->size[1];
    emxEnsureCapacity_real_T(&st, b_K, i18, &nf_emlrtRTEI);
    loop_ub = K->size[1];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_K->data[i18] = K->data[K->size[0] * i18];
    }

    if ((b_K->size[0] == 1) || (b_varargin_1->size[0] == 1)) {
      xi = 0.0;
      for (i18 = 0; i18 < I->size[1]; i18++) {
        xi += I->data[I->size[0] * i18] * b_varargin_1->data[i18];
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      c_st.site = &kf_emlrtRSI;
      d_st.site = &lf_emlrtRSI;
      i18 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&d_st, b_K, i18, &nf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_K->data[i18] = K->data[K->size[0] * i18];
      }

      if (b_K->size[0] < 1) {
        xi = 0.0;
      } else {
        e_st.site = &ad_emlrtRSI;
        i18 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T(&d_st, b_K, i18, &nf_emlrtRTEI);
        loop_ub = K->size[1];
        for (i18 = 0; i18 < loop_ub; i18++) {
          b_K->data[i18] = K->data[K->size[0] * i18];
        }

        n_t = (ptrdiff_t)b_K->size[0];
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        i18 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T(&d_st, b_K, i18, &nf_emlrtRTEI);
        loop_ub = K->size[1];
        for (i18 = 0; i18 < loop_ub; i18++) {
          b_K->data[i18] = K->data[K->size[0] * i18];
        }

        xi = ddot(&n_t, &I->data[0], &incx_t, &b_varargin_1->data[0], &incy_t);
      }
    }

    i18 = A->size[0];
    i19 = 1 + j;
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &hc_emlrtBCI, sp);
    }

    i18 = A->size[1];
    i20 = 1 + j;
    if (!((i20 >= 1) && (i20 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i20, 1, i18, &hc_emlrtBCI, sp);
    }

    djtemp = A->data[(i19 + A->size[0] * (i20 - 1)) - 1] - xi;

    /*  C(j,j) in book */
    if (1 + j < n) {
      st.site = &ee_emlrtRSI;
      b_st.site = &tb_emlrtRSI;
      if ((uint32_T)n < j + 2U) {
        i18 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T1(&b_st, I, i18, &of_emlrtRTEI);
      } else {
        i18 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (n - j) - 1;
        emxEnsureCapacity_real_T1(&b_st, I, i18, &of_emlrtRTEI);
        loop_ub = (n - j) - 2;
        for (i18 = 0; i18 <= loop_ub; i18++) {
          I->data[I->size[0] * i18] = ((uint32_T)j + i18) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      idx = d->size[0];
      i18 = b_varargin_1->size[0];
      b_varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, b_varargin_1, i18, &pf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        i19 = (int32_T)K->data[K->size[0] * i18];
        if (!((i19 >= 1) && (i19 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i19, 1, idx, &jc_emlrtBCI, sp);
        }

        b_varargin_1->data[i18] = d->data[i19 - 1];
      }

      m = L->size[1];
      i18 = L->size[0];
      i19 = 1 + j;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &ac_emlrtBCI, sp);
      }

      i18 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, diagA, i18, &qf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        i20 = (int32_T)K->data[K->size[0] * i18];
        if (!((i20 >= 1) && (i20 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i20, 1, m, &kc_emlrtBCI, sp);
        }

        diagA->data[i18] = L->data[(i19 + L->size[0] * (i20 - 1)) - 1];
      }

      i18 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(sp, b_K, i18, &rf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_K->data[i18] = K->data[K->size[0] * i18];
      }

      i18 = b_K->size[0];
      i19 = diagA->size[0];
      if (i18 != i19) {
        emlrtSizeEqCheck1DR2012b(i18, i19, &x_emlrtECI, sp);
      }

      idx = A->size[0];
      i18 = A->size[1];
      i19 = 1 + j;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &bc_emlrtBCI, sp);
      }

      i18 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T(sp, Ccol, i18, &sf_emlrtRTEI);
      loop_ub = I->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        xi = I->data[I->size[0] * i18];
        if (xi != (int32_T)muDoubleScalarFloor(xi)) {
          emlrtIntegerCheckR2012b(xi, &u_emlrtDCI, sp);
        }

        i20 = (int32_T)xi;
        if (!((i20 >= 1) && (i20 <= idx))) {
          emlrtDynamicBoundsCheckR2012b(i20, 1, idx, &lc_emlrtBCI, sp);
        }

        Ccol->data[i18] = A->data[(i20 + A->size[0] * (i19 - 1)) - 1];
      }

      st.site = &fe_emlrtRSI;
      m = L->size[0];
      b_L = L->size[1];
      i18 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = I->size[1];
      varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T1(&st, varargin_1, i18, &tf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        idx = I->size[1];
        for (i19 = 0; i19 < idx; i19++) {
          i20 = (int32_T)I->data[I->size[0] * i19];
          if (!((i20 >= 1) && (i20 <= m))) {
            emlrtDynamicBoundsCheckR2012b(i20, 1, m, &mc_emlrtBCI, &st);
          }

          i21 = (int32_T)K->data[K->size[0] * i18];
          if (!((i21 >= 1) && (i21 <= b_L))) {
            emlrtDynamicBoundsCheckR2012b(i21, 1, b_L, &nc_emlrtBCI, &st);
          }

          varargin_1->data[i19 + varargin_1->size[0] * i18] = L->data[(i20 +
            L->size[0] * (i21 - 1)) - 1];
        }
      }

      i18 = b_varargin_1->size[0];
      emxEnsureCapacity_real_T(&st, b_varargin_1, i18, &pf_emlrtRTEI);
      loop_ub = b_varargin_1->size[0];
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_varargin_1->data[i18] *= diagA->data[i18];
      }

      b_st.site = &ec_emlrtRSI;
      i18 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&b_st, b_K, i18, &uf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_K->data[i18] = K->data[K->size[0] * i18];
      }

      idx = b_K->size[0];
      if (!(idx == b_varargin_1->size[0])) {
        i18 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T(&b_st, b_K, i18, &vf_emlrtRTEI);
        loop_ub = I->size[1];
        for (i18 = 0; i18 < loop_ub; i18++) {
          b_K->data[i18] = I->data[I->size[0] * i18];
        }

        m = b_K->size[0];
        i18 = b_K->size[0];
        b_K->size[0] = K->size[1];
        emxEnsureCapacity_real_T(&b_st, b_K, i18, &uf_emlrtRTEI);
        loop_ub = K->size[1];
        for (i18 = 0; i18 < loop_ub; i18++) {
          b_K->data[i18] = K->data[K->size[0] * i18];
        }

        idx = b_K->size[0];
        if (((m == 1) && (idx == 1)) || (b_varargin_1->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      i18 = b_K->size[0];
      b_K->size[0] = K->size[1];
      emxEnsureCapacity_real_T(&st, b_K, i18, &uf_emlrtRTEI);
      loop_ub = K->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_K->data[i18] = K->data[K->size[0] * i18];
      }

      idx = b_K->size[0];
      if ((idx == 1) || (b_varargin_1->size[0] == 1)) {
        i18 = diagA->size[0];
        diagA->size[0] = varargin_1->size[0];
        emxEnsureCapacity_real_T(&st, diagA, i18, &tf_emlrtRTEI);
        loop_ub = varargin_1->size[0];
        for (i18 = 0; i18 < loop_ub; i18++) {
          diagA->data[i18] = 0.0;
          idx = varargin_1->size[1];
          for (i19 = 0; i19 < idx; i19++) {
            diagA->data[i18] += varargin_1->data[i18 + varargin_1->size[0] * i19]
              * b_varargin_1->data[i19];
          }
        }
      } else {
        b_st.site = &dc_emlrtRSI;
        i18 = b_K->size[0];
        b_K->size[0] = I->size[1];
        emxEnsureCapacity_real_T(&b_st, b_K, i18, &vf_emlrtRTEI);
        loop_ub = I->size[1];
        for (i18 = 0; i18 < loop_ub; i18++) {
          b_K->data[i18] = I->data[I->size[0] * i18];
        }

        m = b_K->size[0];
        guard1 = false;
        if (m == 0) {
          guard1 = true;
        } else {
          i18 = b_K->size[0];
          b_K->size[0] = K->size[1];
          emxEnsureCapacity_real_T(&b_st, b_K, i18, &uf_emlrtRTEI);
          loop_ub = K->size[1];
          for (i18 = 0; i18 < loop_ub; i18++) {
            b_K->data[i18] = K->data[K->size[0] * i18];
          }

          idx = b_K->size[0];
          if ((idx == 0) || (b_varargin_1->size[0] == 0)) {
            guard1 = true;
          } else {
            c_st.site = &fc_emlrtRSI;
            c_st.site = &gc_emlrtRSI;
            TRANSA = 'N';
            TRANSB = 'N';
            xi = 1.0;
            beta1 = 0.0;
            i18 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = I->data[I->size[0] * i18];
            }

            m = b_K->size[0];
            incx_t = (ptrdiff_t)m;
            n_t = (ptrdiff_t)1;
            i18 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &uf_emlrtRTEI);
            loop_ub = K->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = K->data[K->size[0] * i18];
            }

            idx = b_K->size[0];
            incy_t = (ptrdiff_t)idx;
            i18 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = I->data[I->size[0] * i18];
            }

            m = b_K->size[0];
            lda_t = (ptrdiff_t)m;
            i18 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &uf_emlrtRTEI);
            loop_ub = K->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = K->data[K->size[0] * i18];
            }

            idx = b_K->size[0];
            ldb_t = (ptrdiff_t)idx;
            i18 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = I->data[I->size[0] * i18];
            }

            m = b_K->size[0];
            ldc_t = (ptrdiff_t)m;
            i18 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = I->data[I->size[0] * i18];
            }

            m = b_K->size[0];
            i18 = diagA->size[0];
            diagA->size[0] = m;
            emxEnsureCapacity_real_T(&c_st, diagA, i18, &e_emlrtRTEI);
            i18 = b_K->size[0];
            b_K->size[0] = I->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &vf_emlrtRTEI);
            loop_ub = I->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = I->data[I->size[0] * i18];
            }

            i18 = b_K->size[0];
            b_K->size[0] = K->size[1];
            emxEnsureCapacity_real_T(&c_st, b_K, i18, &uf_emlrtRTEI);
            loop_ub = K->size[1];
            for (i18 = 0; i18 < loop_ub; i18++) {
              b_K->data[i18] = K->data[K->size[0] * i18];
            }

            dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &xi,
                  &varargin_1->data[0], &lda_t, &b_varargin_1->data[0], &ldb_t,
                  &beta1, &diagA->data[0], &ldc_t);
          }
        }

        if (guard1) {
          i18 = b_K->size[0];
          b_K->size[0] = I->size[1];
          emxEnsureCapacity_real_T(&b_st, b_K, i18, &vf_emlrtRTEI);
          loop_ub = I->size[1];
          for (i18 = 0; i18 < loop_ub; i18++) {
            b_K->data[i18] = I->data[I->size[0] * i18];
          }

          m = b_K->size[0];
          i18 = diagA->size[0];
          diagA->size[0] = m;
          emxEnsureCapacity_real_T(&b_st, diagA, i18, &tf_emlrtRTEI);
          for (i18 = 0; i18 < m; i18++) {
            diagA->data[i18] = 0.0;
          }
        }
      }

      i18 = b_K->size[0];
      b_K->size[0] = I->size[1];
      emxEnsureCapacity_real_T(sp, b_K, i18, &wf_emlrtRTEI);
      loop_ub = I->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_K->data[i18] = I->data[I->size[0] * i18];
      }

      i18 = b_K->size[0];
      i19 = diagA->size[0];
      if (i18 != i19) {
        emlrtSizeEqCheck1DR2012b(i18, i19, &w_emlrtECI, sp);
      }

      i18 = Ccol->size[0];
      emxEnsureCapacity_real_T(sp, Ccol, i18, &xf_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i18 = 0; i18 < loop_ub; i18++) {
        Ccol->data[i18] -= diagA->data[i18];
      }

      /*  C(I,j) in book */
      st.site = &ge_emlrtRSI;
      c_abs(&st, Ccol, b_varargin_1);
      st.site = &ge_emlrtRSI;
      b_st.site = &re_emlrtRSI;
      c_st.site = &se_emlrtRSI;
      d_st.site = &te_emlrtRSI;
      if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &am_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      if (!(b_varargin_1->size[0] >= 1)) {
        emlrtErrorWithMessageIdR2018a(&d_st, &bm_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      e_st.site = &ue_emlrtRSI;
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
        f_st.site = &we_emlrtRSI;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          g_st.site = &xe_emlrtRSI;
          overflow = (b_varargin_1->size[0] > 2147483646);
          if (overflow) {
            h_st.site = &sb_emlrtRSI;
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
          f_st.site = &ve_emlrtRSI;
          xi = b_varargin_1->data[idx - 1];
          g_st.site = &ye_emlrtRSI;
          overflow = ((!(idx + 1 > b_varargin_1->size[0])) &&
                      (b_varargin_1->size[0] > 2147483646));
          if (overflow) {
            h_st.site = &sb_emlrtRSI;
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
      st.site = &he_emlrtRSI;
      b_st.site = &mf_emlrtRSI;
      c_st.site = &nf_emlrtRSI;
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

      i18 = d->size[0];
      i19 = 1 + j;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &oc_emlrtBCI, sp);
      }

      d->data[i19 - 1] = xi;
      m = L->size[0];
      i18 = r6->size[0];
      r6->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(sp, r6, i18, &yf_emlrtRTEI);
      loop_ub = I->size[1];
      for (i18 = 0; i18 < loop_ub; i18++) {
        i19 = (int32_T)I->data[I->size[0] * i18];
        if (!((i19 >= 1) && (i19 <= m))) {
          emlrtDynamicBoundsCheckR2012b(i19, 1, m, &pc_emlrtBCI, sp);
        }

        r6->data[i18] = i19 - 1;
      }

      i18 = L->size[1];
      i19 = j + 1;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &xb_emlrtBCI, sp);
      }

      i18 = d->size[0];
      i19 = j + 1;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &yb_emlrtBCI, sp);
      }

      xi = d->data[j];
      i18 = Ccol->size[0];
      emxEnsureCapacity_real_T(sp, Ccol, i18, &ag_emlrtRTEI);
      loop_ub = Ccol->size[0];
      for (i18 = 0; i18 < loop_ub; i18++) {
        Ccol->data[i18] /= xi;
      }

      iv26[0] = r6->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv26[0], 1, &(*(int32_T (*)[1])Ccol->size)
        [0], 1, &v_emlrtECI, sp);
      loop_ub = Ccol->size[0];
      for (i18 = 0; i18 < loop_ub; i18++) {
        L->data[r6->data[i18] + L->size[0] * j] = Ccol->data[i18];
      }
    } else {
      beta1 = muDoubleScalarAbs(djtemp);
      if ((beta1 < delta) || (muDoubleScalarIsNaN(beta1) &&
                              (!muDoubleScalarIsNaN(delta)))) {
        beta1 = delta;
      }

      i18 = d->size[0];
      i19 = 1 + j;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &ic_emlrtBCI, sp);
      }

      d->data[i19 - 1] = beta1;
    }

    i18 = d->size[0];
    i19 = j + 1;
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &wb_emlrtBCI, sp);
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
    i18 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r6, i18, &hf_emlrtRTEI);
    for (i18 = 0; i18 < loop_ub; i18++) {
      r6->data[i18] = i18;
    }

    i18 = L->size[1];
    i19 = j + 1;
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &tb_emlrtBCI, sp);
    }

    st.site = &ie_emlrtRSI;
    i18 = d->size[0];
    i19 = j + 1;
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &ub_emlrtBCI, &st);
    }

    overflow = (d->data[j] < 0.0);
    if (overflow) {
      b_st.site = &gf_emlrtRSI;
      f_error(&b_st);
    }

    xi = muDoubleScalarSqrt(d->data[j]);
    i18 = L->size[1];
    i19 = j + 1;
    if (!((i19 >= 1) && (i19 <= i18))) {
      emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &vb_emlrtBCI, sp);
    }

    loop_ub = L->size[0];
    i18 = diagA->size[0];
    diagA->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, diagA, i18, &kf_emlrtRTEI);
    for (i18 = 0; i18 < loop_ub; i18++) {
      diagA->data[i18] = L->data[i18 + L->size[0] * j] * xi;
    }

    iv26[0] = r6->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv26[0], 1, &(*(int32_T (*)[1])diagA->size)[0],
      1, &u_emlrtECI, sp);
    loop_ub = diagA->size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      L->data[r6->data[i18] + L->size[0] * j] = diagA->data[i18];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&r6);
  emxFree_real_T(&d);
  emxFree_real_T(&diagA);
  i18 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T1(sp, R, i18, &gf_emlrtRTEI);
  loop_ub = L->size[0];
  for (i18 = 0; i18 < loop_ub; i18++) {
    idx = L->size[1];
    for (i19 = 0; i19 < idx; i19++) {
      R->data[i19 + R->size[0] * i18] = L->data[i18 + L->size[0] * i19];
    }
  }

  emxFree_real_T(&L);
  *err = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cholmod.c) */

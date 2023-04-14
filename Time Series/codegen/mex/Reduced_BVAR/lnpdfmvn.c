/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfmvn.c
 *
 * Code generation for function 'lnpdfmvn'
 *
 */

/* Include files */
#include "lnpdfmvn.h"
#include "Reduced_BVAR_data.h"
#include "Reduced_BVAR_emxutil.h"
#include "Reduced_BVAR_types.h"
#include "det.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "mpower.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "warning.h"
#include "xgeqp3.h"
#include "xgetrf.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo bg_emlrtRSI = {
    8,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    9,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo dg_emlrtRSI = {
    14,                                                          /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo gg_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo hg_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo ig_emlrtRSI =
    {
        67,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo jg_emlrtRSI =
    {
        112,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo kg_emlrtRSI =
    {
        107,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo lg_emlrtRSI =
    {
        135,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo mg_emlrtRSI =
    {
        140,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ng_emlrtRSI =
    {
        142,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo og_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo pg_emlrtRSI =
    {
        61,        /* lineNo */
        "qrsolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo qg_emlrtRSI =
    {
        72,        /* lineNo */
        "qrsolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI =
    {
        85,        /* lineNo */
        "qrsolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo eh_emlrtRSI =
    {
        119,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo fh_emlrtRSI =
    {
        128,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo gh_emlrtRSI =
    {
        138,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo hh_emlrtRSI = {
    31,         /* lineNo */
    "xunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo ih_emlrtRSI = {
    102,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo jh_emlrtRSI = {
    18,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRSInfo ii_emlrtRSI =
    {
        147,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ji_emlrtRSI =
    {
        126,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo ki_emlrtRSI = {
    108,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo li_emlrtRSI = {
    21,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRSInfo mi_emlrtRSI = {
    23,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRSInfo ni_emlrtRSI = {
    29,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtECInfo kb_emlrtECI = {
    2,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo lb_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    15,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo mb_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    9,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo cg_emlrtRTEI =
    {
        135,       /* lineNo */
        2,         /* colNo */
        "lusolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pName */
};

static emlrtRTEInfo dg_emlrtRTEI =
    {
        61,        /* lineNo */
        2,         /* colNo */
        "qrsolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = {
    9,                                                           /* lineNo */
    26,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo fg_emlrtRTEI =
    {
        85,        /* lineNo */
        1,         /* colNo */
        "qrsolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI =
    {
        119,       /* lineNo */
        5,         /* colNo */
        "qrsolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = {
    44,                /* lineNo */
    9,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = {
    1,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

/* Function Declarations */
static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
                               const emxArray_real_T *X,
                               const emxArray_real_T *Y);

static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m);

static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *p,
                               emlrtRSInfo nj_emlrtRSI,
                               const emxArray_real_T *X,
                               const emxArray_real_T *Y);

static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m);

static void minus(const emlrtStack *sp, emxArray_real_T *Y,
                  const emxArray_real_T *x, const emxArray_real_T *m);

static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m);

/* Function Definitions */
static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
                               const emxArray_real_T *X,
                               const emxArray_real_T *Y)
{
  const real_T *X_data;
  const real_T *Y_data;
  real_T *x_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  Y_data = Y->data;
  X_data = X->data;
  i = x->size[0] * x->size[1];
  x->size[0] = 1;
  if (Y->size[0] == 1) {
    x->size[1] = X->size[1];
  } else {
    x->size[1] = Y->size[0];
  }
  emxEnsureCapacity_real_T(sp, x, i, &gg_emlrtRTEI);
  x_data = x->data;
  stride_0_1 = (X->size[1] != 1);
  stride_1_1 = (Y->size[0] != 1);
  if (Y->size[0] == 1) {
    loop_ub = X->size[1];
  } else {
    loop_ub = Y->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = X_data[i * stride_0_1] * Y_data[i * stride_1_1];
  }
}

static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *X_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  m_data = m->data;
  x_data = x->data;
  i = X->size[0] * X->size[1];
  X->size[0] = 1;
  if (m->size[0] == 1) {
    X->size[1] = x->size[0];
  } else {
    X->size[1] = m->size[0];
  }
  emxEnsureCapacity_real_T(sp, X, i, &ag_emlrtRTEI);
  X_data = X->data;
  stride_0_1 = (x->size[0] != 1);
  stride_1_1 = (m->size[0] != 1);
  if (m->size[0] == 1) {
    loop_ub = x->size[0];
  } else {
    loop_ub = m->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    X_data[i] = x_data[i * stride_0_1] - m_data[i * stride_1_1];
  }
}

static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *p,
                               emlrtRSInfo nj_emlrtRSI,
                               const emxArray_real_T *X,
                               const emxArray_real_T *Y)
{
  emlrtStack st;
  emxArray_real_T *b_X;
  const real_T *X_data;
  const real_T *Y_data;
  real_T *b_X_data;
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
  Y_data = Y->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_X, 2, &gg_emlrtRTEI);
  i = b_X->size[0] * b_X->size[1];
  if (Y->size[1] == 1) {
    b_X->size[0] = X->size[0];
  } else {
    b_X->size[0] = Y->size[1];
  }
  if (Y->size[0] == 1) {
    b_X->size[1] = X->size[1];
  } else {
    b_X->size[1] = Y->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_X, i, &gg_emlrtRTEI);
  b_X_data = b_X->data;
  stride_0_0 = (X->size[0] != 1);
  stride_0_1 = (X->size[1] != 1);
  stride_1_0 = (Y->size[1] != 1);
  stride_1_1 = (Y->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Y->size[0] == 1) {
    loop_ub = X->size[1];
  } else {
    loop_ub = Y->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Y->size[1] == 1) {
      b_loop_ub = X->size[0];
    } else {
      b_loop_ub = Y->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_X_data[i1 + b_X->size[0] * i] =
          X_data[i1 * stride_0_0 + X->size[0] * aux_0_1] *
          Y_data[aux_1_1 + Y->size[0] * (i1 * stride_1_0)];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &nj_emlrtRSI;
  c_sum(&st, b_X, p);
  emxFree_real_T(sp, &b_X);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *Y_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T m_idx_0;
  int32_T stride_0_0;
  int32_T stride_1_0;
  m_data = m->data;
  x_data = x->data;
  m_idx_0 = m->size[0];
  i = Y->size[0] * Y->size[1];
  if (m_idx_0 == 1) {
    Y->size[0] = x->size[0];
  } else {
    Y->size[0] = m_idx_0;
  }
  Y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, Y, i, &eg_emlrtRTEI);
  Y_data = Y->data;
  stride_0_0 = (x->size[0] != 1);
  stride_1_0 = (m_idx_0 != 1);
  loop_ub = x->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (m_idx_0 == 1) {
      b_loop_ub = x->size[0];
    } else {
      b_loop_ub = m_idx_0;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Y_data[i1 + Y->size[0] * i] =
          x_data[i1 * stride_0_0 + x->size[0] * i] - m_data[i1 * stride_1_0];
    }
  }
}

static void minus(const emlrtStack *sp, emxArray_real_T *Y,
                  const emxArray_real_T *x, const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *Y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  m_data = m->data;
  x_data = x->data;
  i = Y->size[0];
  if (m->size[0] == 1) {
    Y->size[0] = x->size[0];
  } else {
    Y->size[0] = m->size[0];
  }
  emxEnsureCapacity_real_T(sp, Y, i, &eg_emlrtRTEI);
  Y_data = Y->data;
  stride_0_0 = (x->size[0] != 1);
  stride_1_0 = (m->size[0] != 1);
  if (m->size[0] == 1) {
    loop_ub = x->size[0];
  } else {
    loop_ub = m->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    Y_data[i] = x_data[i * stride_0_0] - m_data[i * stride_1_0];
  }
}

static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *X_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T m_idx_0;
  int32_T stride_0_1;
  int32_T stride_1_1;
  m_data = m->data;
  x_data = x->data;
  m_idx_0 = m->size[0];
  i = X->size[0] * X->size[1];
  X->size[0] = x->size[1];
  if (m_idx_0 == 1) {
    X->size[1] = x->size[0];
  } else {
    X->size[1] = m_idx_0;
  }
  emxEnsureCapacity_real_T(sp, X, i, &ag_emlrtRTEI);
  X_data = X->data;
  stride_0_1 = (x->size[0] != 1);
  stride_1_1 = (m_idx_0 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (m_idx_0 == 1) {
    m_idx_0 = x->size[0];
  }
  for (i = 0; i < m_idx_0; i++) {
    loop_ub = x->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      X_data[i1 + X->size[0] * i] =
          x_data[aux_0_1 + x->size[0] * i1] - m_data[aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void b_lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x,
                const emxArray_real_T *m, const emxArray_real_T *C,
                emxArray_real_T *p)
{
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *X;
  emxArray_real_T *Y;
  emxArray_real_T *tau;
  const real_T *C_data;
  const real_T *m_data;
  const real_T *x_data;
  real_T b_x;
  real_T wj;
  real_T *A_data;
  real_T *B_data;
  real_T *Y_data;
  real_T *p_data;
  int32_T a_tmp;
  int32_T b_m;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T k;
  int32_T mn;
  int32_T nb;
  int32_T rankA;
  int32_T *jpvt_data;
  uint32_T unnamed_idx_0;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  C_data = C->data;
  m_data = m->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &bg_emlrtRSI;
  b_x = det(&st, C);
  st.site = &bg_emlrtRSI;
  st.site = &bg_emlrtRSI;
  b_x = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
        muDoubleScalarSqrt(muDoubleScalarAbs(b_x));
  if ((x->size[0] != m->size[0]) && ((x->size[0] != 1) && (m->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(x->size[0], m->size[0], &lb_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &cg_emlrtRSI;
  emxInit_real_T(&st, &X, 2, &jg_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    a_tmp = X->size[0] * X->size[1];
    X->size[0] = x->size[1];
    X->size[1] = x->size[0];
    emxEnsureCapacity_real_T(&st, X, a_tmp, &ag_emlrtRTEI);
    p_data = X->data;
    b_m = x->size[0];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      info = x->size[1];
      for (mn = 0; mn < info; mn++) {
        p_data[mn + X->size[0] * a_tmp] =
            x_data[a_tmp + x->size[0] * mn] - m_data[a_tmp];
      }
    }
  } else {
    b_st.site = &cg_emlrtRSI;
    n_binary_expand_op(&b_st, X, x, m);
    p_data = X->data;
  }
  if (C->size[1] != X->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &cb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &fg_emlrtRSI;
  emxInit_real_T(&b_st, &Y, 2, &ig_emlrtRTEI);
  emxInit_real_T(&b_st, &B, 2, &bg_emlrtRTEI);
  emxInit_real_T(&b_st, &A, 2, &jg_emlrtRTEI);
  emxInit_real_T(&b_st, &tau, 1, &jg_emlrtRTEI);
  emxInit_int32_T(&b_st, &jpvt, 2, &jg_emlrtRTEI);
  if ((X->size[0] == 0) || (X->size[1] == 0) ||
      ((C->size[0] == 0) || (C->size[1] == 0))) {
    unnamed_idx_0 = (uint32_T)X->size[0];
    a_tmp = X->size[0] * X->size[1];
    X->size[0] = (int32_T)unnamed_idx_0;
    X->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, X, a_tmp, &ag_emlrtRTEI);
    p_data = X->data;
    b_m = (int32_T)unnamed_idx_0 * C->size[0];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      p_data[a_tmp] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    c_st.site = &gg_emlrtRSI;
    d_st.site = &ig_emlrtRSI;
    e_st.site = &kg_emlrtRSI;
    a_tmp = A->size[0] * A->size[1];
    A->size[0] = C->size[0];
    A->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&e_st, A, a_tmp, &cg_emlrtRTEI);
    A_data = A->data;
    b_m = C->size[0] * C->size[1];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      A_data[a_tmp] = C_data[a_tmp];
    }
    f_st.site = &lg_emlrtRSI;
    b_xgetrf(&f_st, C->size[1], C->size[1], A, C->size[1], jpvt, &info);
    jpvt_data = jpvt->data;
    A_data = A->data;
    nb = X->size[0];
    f_st.site = &mg_emlrtRSI;
    g_st.site = &kb_emlrtRSI;
    h_st.site = &lb_emlrtRSI;
    wj = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    nrc_t = (ptrdiff_t)X->size[0];
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)X->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &wj, &A_data[0],
          &lda_t, &p_data[0], &ldb_t);
    f_st.site = &ng_emlrtRSI;
    g_st.site = &kb_emlrtRSI;
    h_st.site = &lb_emlrtRSI;
    wj = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    nrc_t = (ptrdiff_t)nb;
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)nb;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &wj, &A_data[0],
          &lda_t, &p_data[0], &ldb_t);
    a_tmp = C->size[1] - 1;
    for (j = a_tmp; j >= 1; j--) {
      mn = jpvt_data[j - 1];
      if (mn != j) {
        f_st.site = &ii_emlrtRSI;
        if (nb > 2147483646) {
          g_st.site = &ib_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }
        for (i = 0; i < nb; i++) {
          wj = p_data[i + X->size[0] * (j - 1)];
          p_data[i + X->size[0] * (j - 1)] = p_data[i + X->size[0] * (mn - 1)];
          p_data[i + X->size[0] * (mn - 1)] = wj;
        }
      }
    }
    if (((C->size[0] != 1) || (C->size[1] != 1)) && (info > 0)) {
      e_st.site = &jg_emlrtRSI;
      if (!emlrtSetWarningFlag(&e_st)) {
        f_st.site = &og_emlrtRSI;
        warning(&f_st);
      }
    }
  } else {
    c_st.site = &hg_emlrtRSI;
    a_tmp = B->size[0] * B->size[1];
    B->size[0] = X->size[1];
    B->size[1] = X->size[0];
    emxEnsureCapacity_real_T(&c_st, B, a_tmp, &bg_emlrtRTEI);
    B_data = B->data;
    b_m = X->size[0];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      info = X->size[1];
      for (mn = 0; mn < info; mn++) {
        B_data[mn + B->size[0] * a_tmp] = p_data[a_tmp + X->size[0] * mn];
      }
    }
    a_tmp = A->size[0] * A->size[1];
    A->size[0] = C->size[1];
    A->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&c_st, A, a_tmp, &dg_emlrtRTEI);
    A_data = A->data;
    b_m = C->size[0];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      info = C->size[1];
      for (mn = 0; mn < info; mn++) {
        A_data[mn + A->size[0] * a_tmp] = C_data[a_tmp + C->size[0] * mn];
      }
    }
    d_st.site = &pg_emlrtRSI;
    xgeqp3(&d_st, A, tau, jpvt);
    jpvt_data = jpvt->data;
    p_data = tau->data;
    A_data = A->data;
    d_st.site = &qg_emlrtRSI;
    rankA = rankFromQR(&d_st, A);
    d_st.site = &rg_emlrtRSI;
    nb = B->size[1];
    a_tmp = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[1];
    Y->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&d_st, Y, a_tmp, &fg_emlrtRTEI);
    Y_data = Y->data;
    b_m = A->size[1] * B->size[1];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      Y_data[a_tmp] = 0.0;
    }
    e_st.site = &eh_emlrtRSI;
    f_st.site = &hh_emlrtRSI;
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      nrc_t = (ptrdiff_t)B->size[0];
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)B->size[1],
          (ptrdiff_t)muIntScalarMin_sint32(A->size[0], A->size[1]), &A_data[0],
          (ptrdiff_t)A->size[0], &p_data[0], &B_data[0], nrc_t);
      info = (int32_T)nrc_t;
      g_st.site = &ih_emlrtRSI;
      if (infocheck(&g_st, info)) {
        if ((info == -10) && (B->size[1] > 1)) {
          g_st.site = &ki_emlrtRSI;
          b_m = A->size[0];
          info = B->size[1];
          mn = muIntScalarMin_sint32(A->size[0], A->size[1]);
          h_st.site = &jh_emlrtRSI;
          if (mn > 2147483646) {
            i_st.site = &ib_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          for (j = 0; j < mn; j++) {
            if (p_data[j] != 0.0) {
              h_st.site = &li_emlrtRSI;
              if (info > 2147483646) {
                i_st.site = &ib_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }
              for (k = 0; k < info; k++) {
                wj = B_data[j + B->size[0] * k];
                a_tmp = j + 2;
                h_st.site = &mi_emlrtRSI;
                if ((j + 2 <= b_m) && (b_m > 2147483646)) {
                  i_st.site = &ib_emlrtRSI;
                  check_forloop_overflow_error(&i_st);
                }
                for (i = a_tmp; i <= b_m; i++) {
                  wj += A_data[(i + A->size[0] * j) - 1] *
                        B_data[(i + B->size[0] * k) - 1];
                }
                wj *= p_data[j];
                if (wj != 0.0) {
                  B_data[j + B->size[0] * k] -= wj;
                  h_st.site = &ni_emlrtRSI;
                  for (i = a_tmp; i <= b_m; i++) {
                    B_data[(i + B->size[0] * k) - 1] -=
                        A_data[(i + A->size[0] * j) - 1] * wj;
                  }
                }
              }
            }
          }
        } else {
          info = B->size[0];
          b_m = B->size[1];
          a_tmp = B->size[0] * B->size[1];
          B->size[0] = info;
          B->size[1] = b_m;
          emxEnsureCapacity_real_T(&f_st, B, a_tmp, &hg_emlrtRTEI);
          B_data = B->data;
          b_m *= info;
          for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
            B_data[a_tmp] = rtNaN;
          }
        }
      }
    }
    e_st.site = &ji_emlrtRSI;
    if (nb > 2147483646) {
      f_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (k = 0; k < nb; k++) {
      e_st.site = &fh_emlrtRSI;
      if ((1 <= rankA) && (rankA > 2147483646)) {
        f_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (i = 0; i < rankA; i++) {
        Y_data[(jpvt_data[i] + Y->size[0] * k) - 1] =
            B_data[i + B->size[0] * k];
      }
      for (j = rankA; j >= 1; j--) {
        a_tmp = jpvt_data[j - 1];
        Y_data[(a_tmp + Y->size[0] * k) - 1] /=
            A_data[(j + A->size[0] * (j - 1)) - 1];
        e_st.site = &gh_emlrtRSI;
        for (i = 0; i <= j - 2; i++) {
          Y_data[(jpvt_data[i] + Y->size[0] * k) - 1] -=
              Y_data[(jpvt_data[j - 1] + Y->size[0] * k) - 1] *
              A_data[i + A->size[0] * (j - 1)];
        }
      }
    }
    a_tmp = X->size[0] * X->size[1];
    X->size[0] = Y->size[1];
    X->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(&b_st, X, a_tmp, &ag_emlrtRTEI);
    p_data = X->data;
    b_m = Y->size[0];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      info = Y->size[1];
      for (mn = 0; mn < info; mn++) {
        p_data[mn + X->size[0] * a_tmp] = Y_data[a_tmp + Y->size[0] * mn];
      }
    }
  }
  emxFree_int32_T(&b_st, &jpvt);
  emxFree_real_T(&b_st, &tau);
  emxFree_real_T(&b_st, &A);
  if (x->size[0] == m->size[0]) {
    a_tmp = Y->size[0] * Y->size[1];
    Y->size[0] = x->size[0];
    Y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, Y, a_tmp, &eg_emlrtRTEI);
    Y_data = Y->data;
    b_m = x->size[1];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      info = x->size[0];
      for (mn = 0; mn < info; mn++) {
        Y_data[mn + Y->size[0] * a_tmp] =
            x_data[mn + x->size[0] * a_tmp] - m_data[mn];
      }
    }
  } else {
    st.site = &cg_emlrtRSI;
    m_binary_expand_op(&st, Y, x, m);
    Y_data = Y->data;
  }
  if ((X->size[0] != Y->size[1]) && ((X->size[0] != 1) && (Y->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(X->size[0], Y->size[1], &mb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((Y->size[0] != X->size[1]) && ((X->size[1] != 1) && (Y->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(X->size[1], Y->size[0], &kb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((X->size[0] == Y->size[1]) && (Y->size[0] == X->size[1])) {
    a_tmp = B->size[0] * B->size[1];
    B->size[0] = X->size[0];
    B->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, B, a_tmp, &gg_emlrtRTEI);
    B_data = B->data;
    b_m = X->size[1];
    for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
      info = X->size[0];
      for (mn = 0; mn < info; mn++) {
        B_data[mn + B->size[0] * a_tmp] =
            p_data[mn + X->size[0] * a_tmp] * Y_data[a_tmp + Y->size[0] * mn];
      }
    }
    st.site = &cg_emlrtRSI;
    c_sum(&st, B, p);
    p_data = p->data;
  } else {
    st.site = &cg_emlrtRSI;
    l_binary_expand_op(&st, p, cg_emlrtRSI, X, Y);
    p_data = p->data;
  }
  emxFree_real_T(sp, &X);
  emxFree_real_T(sp, &B);
  emxFree_real_T(sp, &Y);
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &dg_emlrtRSI;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  b_x = muDoubleScalarLog(b_x);
  b_m = p->size[0];
  for (a_tmp = 0; a_tmp < b_m; a_tmp++) {
    p_data[a_tmp] = -0.5 * p_data[a_tmp] - b_x;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x,
                const emxArray_real_T *m, const emxArray_real_T *C)
{
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_real_T d_x;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *X;
  emxArray_real_T *Y;
  emxArray_real_T *c_x;
  emxArray_real_T *tau;
  const real_T *C_data;
  const real_T *m_data;
  const real_T *x_data;
  real_T b_x;
  real_T p;
  real_T temp;
  real_T *A_data;
  real_T *B_data;
  real_T *X_data;
  real_T *Y_data;
  real_T *tau_data;
  int32_T b_B;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T rankA;
  int32_T *jpvt_data;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  C_data = C->data;
  m_data = m->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &bg_emlrtRSI;
  b_x = det(&st, C);
  st.site = &bg_emlrtRSI;
  st.site = &bg_emlrtRSI;
  b_x = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
        muDoubleScalarSqrt(muDoubleScalarAbs(b_x));
  if ((x->size[0] != m->size[0]) && ((x->size[0] != 1) && (m->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(x->size[0], m->size[0], &lb_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &cg_emlrtRSI;
  emxInit_real_T(&st, &X, 2, &jg_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = x->size[0];
    emxEnsureCapacity_real_T(&st, X, i, &ag_emlrtRTEI);
    X_data = X->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = x_data[i] - m_data[i];
    }
  } else {
    b_st.site = &cg_emlrtRSI;
    k_binary_expand_op(&b_st, X, x, m);
    X_data = X->data;
  }
  if (C->size[1] != X->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &cb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &fg_emlrtRSI;
  emxInit_real_T(&b_st, &Y, 1, &ig_emlrtRTEI);
  emxInit_real_T(&b_st, &B, 1, &bg_emlrtRTEI);
  emxInit_real_T(&b_st, &A, 2, &jg_emlrtRTEI);
  emxInit_real_T(&b_st, &tau, 1, &jg_emlrtRTEI);
  emxInit_int32_T(&b_st, &jpvt, 2, &jg_emlrtRTEI);
  if ((X->size[1] == 0) || ((C->size[0] == 0) || (C->size[1] == 0))) {
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, X, i, &ag_emlrtRTEI);
    X_data = X->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    c_st.site = &gg_emlrtRSI;
    d_st.site = &ig_emlrtRSI;
    e_st.site = &kg_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = C->size[0];
    A->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&e_st, A, i, &cg_emlrtRTEI);
    A_data = A->data;
    loop_ub = C->size[0] * C->size[1];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = C_data[i];
    }
    f_st.site = &lg_emlrtRSI;
    b_xgetrf(&f_st, C->size[1], C->size[1], A, C->size[1], jpvt, &b_loop_ub);
    jpvt_data = jpvt->data;
    A_data = A->data;
    f_st.site = &mg_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    nrc_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &temp, &A_data[0],
          &lda_t, &X_data[0], &ldb_t);
    f_st.site = &ng_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    nrc_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &temp, &A_data[0],
          &lda_t, &X_data[0], &ldb_t);
    i = C->size[1] - 1;
    for (loop_ub = i; loop_ub >= 1; loop_ub--) {
      rankA = jpvt_data[loop_ub - 1];
      if (rankA != loop_ub) {
        temp = X_data[loop_ub - 1];
        X_data[loop_ub - 1] = X_data[rankA - 1];
        X_data[rankA - 1] = temp;
      }
    }
    if (((C->size[0] != 1) || (C->size[1] != 1)) && (b_loop_ub > 0)) {
      e_st.site = &jg_emlrtRSI;
      if (!emlrtSetWarningFlag(&e_st)) {
        f_st.site = &og_emlrtRSI;
        warning(&f_st);
      }
    }
  } else {
    c_st.site = &hg_emlrtRSI;
    i = B->size[0];
    B->size[0] = X->size[1];
    emxEnsureCapacity_real_T(&c_st, B, i, &bg_emlrtRTEI);
    B_data = B->data;
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      B_data[i] = X_data[i];
    }
    i = A->size[0] * A->size[1];
    A->size[0] = C->size[1];
    A->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&c_st, A, i, &dg_emlrtRTEI);
    A_data = A->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = C->size[1];
      for (rankA = 0; rankA < b_loop_ub; rankA++) {
        A_data[rankA + A->size[0] * i] = C_data[i + C->size[0] * rankA];
      }
    }
    d_st.site = &pg_emlrtRSI;
    xgeqp3(&d_st, A, tau, jpvt);
    jpvt_data = jpvt->data;
    tau_data = tau->data;
    A_data = A->data;
    d_st.site = &qg_emlrtRSI;
    rankA = rankFromQR(&d_st, A);
    d_st.site = &rg_emlrtRSI;
    i = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&d_st, Y, i, &fg_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = 0.0;
    }
    e_st.site = &eh_emlrtRSI;
    f_st.site = &hh_emlrtRSI;
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      nrc_t = (ptrdiff_t)B->size[0];
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)1,
          (ptrdiff_t)muIntScalarMin_sint32(A->size[0], A->size[1]), &A_data[0],
          (ptrdiff_t)A->size[0], &tau_data[0], &B_data[0], nrc_t);
      g_st.site = &ih_emlrtRSI;
      if (infocheck(&g_st, (int32_T)nrc_t)) {
        b_loop_ub = B->size[0];
        i = B->size[0];
        B->size[0] = b_loop_ub;
        emxEnsureCapacity_real_T(&f_st, B, i, &hg_emlrtRTEI);
        B_data = B->data;
        for (i = 0; i < b_loop_ub; i++) {
          B_data[i] = rtNaN;
        }
      }
    }
    e_st.site = &fh_emlrtRSI;
    if ((1 <= rankA) && (rankA > 2147483646)) {
      f_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (b_loop_ub = 0; b_loop_ub < rankA; b_loop_ub++) {
      Y_data[jpvt_data[b_loop_ub] - 1] = B_data[b_loop_ub];
    }
    for (loop_ub = rankA; loop_ub >= 1; loop_ub--) {
      i = jpvt_data[loop_ub - 1];
      Y_data[i - 1] /= A_data[(loop_ub + A->size[0] * (loop_ub - 1)) - 1];
      e_st.site = &gh_emlrtRSI;
      for (b_loop_ub = 0; b_loop_ub <= loop_ub - 2; b_loop_ub++) {
        Y_data[jpvt_data[b_loop_ub] - 1] -=
            Y_data[jpvt_data[loop_ub - 1] - 1] *
            A_data[b_loop_ub + A->size[0] * (loop_ub - 1)];
      }
    }
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(&b_st, X, i, &ag_emlrtRTEI);
    X_data = X->data;
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = Y_data[i];
    }
  }
  emxFree_int32_T(&b_st, &jpvt);
  emxFree_real_T(&b_st, &tau);
  emxFree_real_T(&b_st, &A);
  emxFree_real_T(&b_st, &B);
  if (x->size[0] == m->size[0]) {
    i = Y->size[0];
    Y->size[0] = x->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &eg_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = x_data[i] - m_data[i];
    }
  } else {
    st.site = &cg_emlrtRSI;
    minus(&st, Y, x, m);
    Y_data = Y->data;
  }
  if ((Y->size[0] != X->size[1]) && ((X->size[1] != 1) && (Y->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(X->size[1], Y->size[0], &kb_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &cg_emlrtRSI;
  emxInit_real_T(&st, &c_x, 2, &gg_emlrtRTEI);
  if (Y->size[0] == X->size[1]) {
    i = c_x->size[0] * c_x->size[1];
    c_x->size[0] = 1;
    c_x->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, c_x, i, &gg_emlrtRTEI);
    tau_data = c_x->data;
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      tau_data[i] = X_data[i] * Y_data[i];
    }
  } else {
    b_st.site = &cg_emlrtRSI;
    j_binary_expand_op(&b_st, c_x, X, Y);
  }
  emxFree_real_T(&st, &X);
  emxFree_real_T(&st, &Y);
  b_st.site = &ae_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  d_st.site = &xb_emlrtRSI;
  if (c_x->size[1] == 0) {
    temp = 0.0;
  } else {
    e_st.site = &ce_emlrtRSI;
    b_loop_ub = c_x->size[1];
    d_x = *c_x;
    b_B = b_loop_ub;
    d_x.size = &b_B;
    d_x.numDimensions = 1;
    f_st.site = &ac_emlrtRSI;
    temp = sumMatrixColumns(&f_st, &d_x, c_x->size[1]);
  }
  emxFree_real_T(&d_st, &c_x);
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &dg_emlrtRSI;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  b_x = muDoubleScalarLog(b_x);
  p = -0.5 * temp - b_x;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return p;
}

/* End of code generation (lnpdfmvn.c) */

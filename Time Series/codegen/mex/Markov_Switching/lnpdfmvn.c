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
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "det.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "mpower.h"
#include "mrdivide_helper.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "warning.h"
#include "xgeqp3.h"
#include "xgetrf.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ij_emlrtRSI = {
    8,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo jj_emlrtRSI = {
    9,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo kj_emlrtRSI = {
    14,                                                          /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo kl_emlrtRSI = {
    112,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo ll_emlrtRSI = {
    173,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo ml_emlrtRSI = {
    190,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo nl_emlrtRSI = {
    192,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo ol_emlrtRSI = {
    204,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo pl_emlrtRSI = {
    207,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo ql_emlrtRSI = {
    225,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo rl_emlrtRSI = {
    227,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo sl_emlrtRSI = {
    238,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtECInfo ab_emlrtECI = {
    2,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo bb_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    15,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo db_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = {
    9,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = {
    9,                                                           /* lineNo */
    26,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = {
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = {
    1,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = {
    9,                                                           /* lineNo */
    1,                                                           /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = {
    146,                /* lineNo */
    24,                 /* colNo */
    "blockedSummation", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = {
    153,                /* lineNo */
    23,                 /* colNo */
    "blockedSummation", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = {
    153,                /* lineNo */
    1,                  /* colNo */
    "blockedSummation", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pName */
};

/* Function Declarations */
static real_T i_binary_expand_op(const emlrtStack *sp, emlrtRSInfo an_emlrtRSI,
                                 const emxArray_real_T *X,
                                 const emxArray_real_T *Y);

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m);

static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
                               const emxArray_real_T *A,
                               const emxArray_real_T *r1);

static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m);

static void minus(const emlrtStack *sp, emxArray_real_T *Y,
                  const emxArray_real_T *x, const emxArray_real_T *m);

static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m);

/* Function Definitions */
static real_T i_binary_expand_op(const emlrtStack *sp, emlrtRSInfo an_emlrtRSI,
                                 const emxArray_real_T *X,
                                 const emxArray_real_T *Y)
{
  emlrtStack st;
  emxArray_real_T *b_X;
  const real_T *X_data;
  const real_T *Y_data;
  real_T mahal;
  real_T *b_X_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  Y_data = Y->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_X, 2, &cj_emlrtRTEI);
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = 1;
  if (Y->size[0] == 1) {
    b_X->size[1] = X->size[1];
  } else {
    b_X->size[1] = Y->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_X, i, &cj_emlrtRTEI);
  b_X_data = b_X->data;
  stride_0_1 = (X->size[1] != 1);
  stride_1_1 = (Y->size[0] != 1);
  if (Y->size[0] == 1) {
    loop_ub = X->size[1];
  } else {
    loop_ub = Y->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_X_data[i] = X_data[i * stride_0_1] * Y_data[i * stride_1_1];
  }
  st.site = &an_emlrtRSI;
  mahal = b_sum(&st, b_X);
  emxFree_real_T(sp, &b_X);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return mahal;
}

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *X,
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
  emxEnsureCapacity_real_T(sp, X, i, &wi_emlrtRTEI);
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

static void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
                               const emxArray_real_T *A,
                               const emxArray_real_T *r1)
{
  const real_T *A_data;
  const real_T *r;
  real_T *x_data;
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
  A_data = A->data;
  i = x->size[0] * x->size[1];
  if (r1->size[1] == 1) {
    x->size[0] = A->size[0];
  } else {
    x->size[0] = r1->size[1];
  }
  if (r1->size[0] == 1) {
    x->size[1] = A->size[1];
  } else {
    x->size[1] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, x, i, &cj_emlrtRTEI);
  x_data = x->data;
  stride_0_0 = (A->size[0] != 1);
  stride_0_1 = (A->size[1] != 1);
  stride_1_0 = (r1->size[1] != 1);
  stride_1_1 = (r1->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[0] == 1) {
    loop_ub = A->size[1];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[1] == 1) {
      b_loop_ub = A->size[0];
    } else {
      b_loop_ub = r1->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      x_data[i1 + x->size[0] * i] =
          A_data[i1 * stride_0_0 + A->size[0] * aux_0_1] *
          r[aux_1_1 + r1->size[0] * (i1 * stride_1_0)];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *r;
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
  i = r1->size[0] * r1->size[1];
  if (m_idx_0 == 1) {
    r1->size[0] = x->size[0];
  } else {
    r1->size[0] = m_idx_0;
  }
  r1->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &bj_emlrtRTEI);
  r = r1->data;
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
      r[i1 + r1->size[0] * i] =
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
  emxEnsureCapacity_real_T(sp, Y, i, &bj_emlrtRTEI);
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

static void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *A_data;
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
  i = A->size[0] * A->size[1];
  A->size[0] = x->size[1];
  if (m_idx_0 == 1) {
    A->size[1] = x->size[0];
  } else {
    A->size[1] = m_idx_0;
  }
  emxEnsureCapacity_real_T(sp, A, i, &wi_emlrtRTEI);
  A_data = A->data;
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
      A_data[i1 + A->size[0] * i] =
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
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *bsum;
  emxArray_real_T *c_x;
  emxArray_real_T *r;
  const real_T *m_data;
  const real_T *x_data;
  real_T b_x;
  real_T *b_x_data;
  real_T *bsum_data;
  real_T *p_data;
  int32_T bvstride;
  int32_T firstBlockLength;
  int32_T ib;
  int32_T k;
  int32_T lastBlockLength;
  int32_T nblocks;
  int32_T vstride;
  int32_T xblockoffset;
  int32_T xj;
  int32_T xoffset;
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
  m_data = m->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &ij_emlrtRSI;
  b_x = det(&st, C);
  st.site = &ij_emlrtRSI;
  st.site = &ij_emlrtRSI;
  b_x = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
        muDoubleScalarSqrt(muDoubleScalarAbs(b_x));
  if ((x->size[0] != m->size[0]) && ((x->size[0] != 1) && (m->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(x->size[0], m->size[0], &bb_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &jj_emlrtRSI;
  emxInit_real_T(&st, &A, 2, &wi_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    lastBlockLength = A->size[0] * A->size[1];
    A->size[0] = x->size[1];
    A->size[1] = x->size[0];
    emxEnsureCapacity_real_T(&st, A, lastBlockLength, &wi_emlrtRTEI);
    p_data = A->data;
    firstBlockLength = x->size[0];
    for (lastBlockLength = 0; lastBlockLength < firstBlockLength;
         lastBlockLength++) {
      xblockoffset = x->size[1];
      for (nblocks = 0; nblocks < xblockoffset; nblocks++) {
        p_data[nblocks + A->size[0] * lastBlockLength] =
            x_data[lastBlockLength + x->size[0] * nblocks] -
            m_data[lastBlockLength];
      }
    }
  } else {
    b_st.site = &jj_emlrtRSI;
    n_binary_expand_op(&b_st, A, x, m);
  }
  if (C->size[1] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &gg_emlrtRSI;
  b_mrdiv(&b_st, A, C);
  p_data = A->data;
  emxInit_real_T(sp, &r, 2, &ej_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    lastBlockLength = r->size[0] * r->size[1];
    r->size[0] = x->size[0];
    r->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, r, lastBlockLength, &bj_emlrtRTEI);
    bsum_data = r->data;
    firstBlockLength = x->size[1];
    for (lastBlockLength = 0; lastBlockLength < firstBlockLength;
         lastBlockLength++) {
      xblockoffset = x->size[0];
      for (nblocks = 0; nblocks < xblockoffset; nblocks++) {
        bsum_data[nblocks + r->size[0] * lastBlockLength] =
            x_data[nblocks + x->size[0] * lastBlockLength] - m_data[nblocks];
      }
    }
  } else {
    st.site = &jj_emlrtRSI;
    m_binary_expand_op(&st, r, x, m);
    bsum_data = r->data;
  }
  if ((A->size[0] != r->size[1]) && ((A->size[0] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[0], r->size[1], &db_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((r->size[0] != A->size[1]) && ((A->size[1] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], r->size[0], &ab_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &jj_emlrtRSI;
  emxInit_real_T(&st, &c_x, 2, &cj_emlrtRTEI);
  if ((A->size[0] == r->size[1]) && (r->size[0] == A->size[1])) {
    lastBlockLength = c_x->size[0] * c_x->size[1];
    c_x->size[0] = A->size[0];
    c_x->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, c_x, lastBlockLength, &cj_emlrtRTEI);
    b_x_data = c_x->data;
    firstBlockLength = A->size[1];
    for (lastBlockLength = 0; lastBlockLength < firstBlockLength;
         lastBlockLength++) {
      xblockoffset = A->size[0];
      for (nblocks = 0; nblocks < xblockoffset; nblocks++) {
        b_x_data[nblocks + c_x->size[0] * lastBlockLength] =
            p_data[nblocks + A->size[0] * lastBlockLength] *
            bsum_data[lastBlockLength + r->size[0] * nblocks];
      }
    }
  } else {
    b_st.site = &jj_emlrtRSI;
    l_binary_expand_op(&b_st, c_x, A, r);
    b_x_data = c_x->data;
  }
  emxFree_real_T(&st, &A);
  emxFree_real_T(&st, &r);
  b_st.site = &rf_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  d_st.site = &sf_emlrtRSI;
  if ((c_x->size[0] == 0) || (c_x->size[1] == 0)) {
    lastBlockLength = p->size[0];
    p->size[0] = c_x->size[0];
    emxEnsureCapacity_real_T(&d_st, p, lastBlockLength, &ck_emlrtRTEI);
    p_data = p->data;
    firstBlockLength = c_x->size[0];
    for (lastBlockLength = 0; lastBlockLength < firstBlockLength;
         lastBlockLength++) {
      p_data[lastBlockLength] = 0.0;
    }
  } else {
    emxInit_real_T(&d_st, &bsum, 1, &fk_emlrtRTEI);
    e_st.site = &kl_emlrtRSI;
    vstride = c_x->size[0];
    bvstride = c_x->size[0] << 10;
    lastBlockLength = p->size[0];
    p->size[0] = c_x->size[0];
    emxEnsureCapacity_real_T(&e_st, p, lastBlockLength, &dk_emlrtRTEI);
    p_data = p->data;
    lastBlockLength = bsum->size[0];
    bsum->size[0] = c_x->size[0];
    emxEnsureCapacity_real_T(&e_st, bsum, lastBlockLength, &ek_emlrtRTEI);
    bsum_data = bsum->data;
    if (c_x->size[1] <= 1024) {
      firstBlockLength = c_x->size[1];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = c_x->size[1] / 1024;
      lastBlockLength = c_x->size[1] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    f_st.site = &ll_emlrtRSI;
    if (c_x->size[0] > 2147483646) {
      g_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }
    for (xj = 0; xj < vstride; xj++) {
      p_data[xj] = b_x_data[xj];
      bsum_data[xj] = 0.0;
    }
    f_st.site = &ml_emlrtRSI;
    for (k = 2; k <= firstBlockLength; k++) {
      xoffset = (k - 1) * vstride;
      f_st.site = &nl_emlrtRSI;
      if (vstride > 2147483646) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (xj = 0; xj < vstride; xj++) {
        p_data[xj] += b_x_data[xoffset + xj];
      }
    }
    f_st.site = &ol_emlrtRSI;
    for (ib = 2; ib <= nblocks; ib++) {
      xblockoffset = (ib - 1) * bvstride;
      f_st.site = &pl_emlrtRSI;
      if (vstride > 2147483646) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (xj = 0; xj < vstride; xj++) {
        bsum_data[xj] = b_x_data[xblockoffset + xj];
      }
      if (ib == nblocks) {
        firstBlockLength = lastBlockLength;
      } else {
        firstBlockLength = 1024;
      }
      f_st.site = &ql_emlrtRSI;
      if ((2 <= firstBlockLength) && (firstBlockLength > 2147483646)) {
        g_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (k = 2; k <= firstBlockLength; k++) {
        xoffset = xblockoffset + (k - 1) * vstride;
        f_st.site = &rl_emlrtRSI;
        for (xj = 0; xj < vstride; xj++) {
          bsum_data[xj] += b_x_data[xoffset + xj];
        }
      }
      f_st.site = &sl_emlrtRSI;
      for (xj = 0; xj < vstride; xj++) {
        p_data[xj] += bsum_data[xj];
      }
    }
    emxFree_real_T(&e_st, &bsum);
  }
  emxFree_real_T(&d_st, &c_x);
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &kj_emlrtRSI;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  b_x = muDoubleScalarLog(b_x);
  firstBlockLength = p->size[0];
  for (lastBlockLength = 0; lastBlockLength < firstBlockLength;
       lastBlockLength++) {
    p_data[lastBlockLength] = -0.5 * p_data[lastBlockLength] - b_x;
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
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *X;
  emxArray_real_T *Y;
  emxArray_real_T *b_X;
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
  st.site = &ij_emlrtRSI;
  b_x = det(&st, C);
  st.site = &ij_emlrtRSI;
  st.site = &ij_emlrtRSI;
  b_x = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
        muDoubleScalarSqrt(muDoubleScalarAbs(b_x));
  if ((x->size[0] != m->size[0]) && ((x->size[0] != 1) && (m->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(x->size[0], m->size[0], &bb_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &jj_emlrtRSI;
  emxInit_real_T(&st, &X, 2, &ej_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = x->size[0];
    emxEnsureCapacity_real_T(&st, X, i, &wi_emlrtRTEI);
    X_data = X->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = x_data[i] - m_data[i];
    }
  } else {
    b_st.site = &jj_emlrtRSI;
    j_binary_expand_op(&b_st, X, x, m);
    X_data = X->data;
  }
  if (C->size[1] != X->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &gg_emlrtRSI;
  emxInit_real_T(&b_st, &Y, 1, &hh_emlrtRTEI);
  emxInit_real_T(&b_st, &B, 1, &xi_emlrtRTEI);
  emxInit_real_T(&b_st, &A, 2, &ej_emlrtRTEI);
  emxInit_real_T(&b_st, &tau, 1, &ej_emlrtRTEI);
  emxInit_int32_T(&b_st, &jpvt, 2, &ej_emlrtRTEI);
  if ((X->size[1] == 0) || ((C->size[0] == 0) || (C->size[1] == 0))) {
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, X, i, &wi_emlrtRTEI);
    X_data = X->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      X_data[i] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    c_st.site = &mj_emlrtRSI;
    d_st.site = &nj_emlrtRSI;
    e_st.site = &pj_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = C->size[0];
    A->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&e_st, A, i, &yi_emlrtRTEI);
    A_data = A->data;
    loop_ub = C->size[0] * C->size[1];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = C_data[i];
    }
    f_st.site = &qj_emlrtRSI;
    b_xgetrf(&f_st, C->size[1], C->size[1], A, C->size[1], jpvt, &b_loop_ub);
    jpvt_data = jpvt->data;
    A_data = A->data;
    f_st.site = &rj_emlrtRSI;
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
    f_st.site = &sj_emlrtRSI;
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
      e_st.site = &oj_emlrtRSI;
      if (!emlrtSetWarningFlag(&e_st)) {
        f_st.site = &tj_emlrtRSI;
        warning(&f_st);
      }
    }
  } else {
    c_st.site = &hg_emlrtRSI;
    i = B->size[0];
    B->size[0] = X->size[1];
    emxEnsureCapacity_real_T(&c_st, B, i, &xi_emlrtRTEI);
    B_data = B->data;
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      B_data[i] = X_data[i];
    }
    i = A->size[0] * A->size[1];
    A->size[0] = C->size[1];
    A->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&c_st, A, i, &aj_emlrtRTEI);
    A_data = A->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = C->size[1];
      for (rankA = 0; rankA < b_loop_ub; rankA++) {
        A_data[rankA + A->size[0] * i] = C_data[i + C->size[0] * rankA];
      }
    }
    d_st.site = &kg_emlrtRSI;
    xgeqp3(&d_st, A, tau, jpvt);
    jpvt_data = jpvt->data;
    tau_data = tau->data;
    A_data = A->data;
    d_st.site = &jg_emlrtRSI;
    rankA = rankFromQR(&d_st, A);
    d_st.site = &ig_emlrtRSI;
    i = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&d_st, Y, i, &fh_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = 0.0;
    }
    e_st.site = &ug_emlrtRSI;
    f_st.site = &xg_emlrtRSI;
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      nrc_t = (ptrdiff_t)B->size[0];
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)1,
          (ptrdiff_t)muIntScalarMin_sint32(A->size[0], A->size[1]), &A_data[0],
          (ptrdiff_t)A->size[0], &tau_data[0], &B_data[0], nrc_t);
      g_st.site = &yg_emlrtRSI;
      if (infocheck(&g_st, (int32_T)nrc_t)) {
        b_loop_ub = B->size[0];
        i = B->size[0];
        B->size[0] = b_loop_ub;
        emxEnsureCapacity_real_T(&f_st, B, i, &dj_emlrtRTEI);
        B_data = B->data;
        for (i = 0; i < b_loop_ub; i++) {
          B_data[i] = rtNaN;
        }
      }
    }
    e_st.site = &vg_emlrtRSI;
    if ((1 <= rankA) && (rankA > 2147483646)) {
      f_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (b_loop_ub = 0; b_loop_ub < rankA; b_loop_ub++) {
      Y_data[jpvt_data[b_loop_ub] - 1] = B_data[b_loop_ub];
    }
    for (loop_ub = rankA; loop_ub >= 1; loop_ub--) {
      i = jpvt_data[loop_ub - 1];
      Y_data[i - 1] /= A_data[(loop_ub + A->size[0] * (loop_ub - 1)) - 1];
      e_st.site = &wg_emlrtRSI;
      for (b_loop_ub = 0; b_loop_ub <= loop_ub - 2; b_loop_ub++) {
        Y_data[jpvt_data[b_loop_ub] - 1] -=
            Y_data[jpvt_data[loop_ub - 1] - 1] *
            A_data[b_loop_ub + A->size[0] * (loop_ub - 1)];
      }
    }
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(&b_st, X, i, &wi_emlrtRTEI);
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
    emxEnsureCapacity_real_T(sp, Y, i, &bj_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = x_data[i] - m_data[i];
    }
  } else {
    st.site = &jj_emlrtRSI;
    minus(&st, Y, x, m);
    Y_data = Y->data;
  }
  if ((Y->size[0] != X->size[1]) && ((X->size[1] != 1) && (Y->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(X->size[1], Y->size[0], &ab_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (Y->size[0] == X->size[1]) {
    emxInit_real_T(sp, &b_X, 2, &cj_emlrtRTEI);
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = 1;
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, b_X, i, &cj_emlrtRTEI);
    tau_data = b_X->data;
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      tau_data[i] = X_data[i] * Y_data[i];
    }
    st.site = &jj_emlrtRSI;
    temp = b_sum(&st, b_X);
    emxFree_real_T(sp, &b_X);
  } else {
    st.site = &jj_emlrtRSI;
    temp = i_binary_expand_op(&st, jj_emlrtRSI, X, Y);
  }
  emxFree_real_T(sp, &X);
  emxFree_real_T(sp, &Y);
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &kj_emlrtRSI;
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

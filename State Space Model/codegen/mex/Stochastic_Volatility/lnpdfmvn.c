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
#include "Stochastic_Volatility_data.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_types.h"
#include "mpower.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "warning.h"
#include "xgetrf.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ui_emlrtRSI = {
    8,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo vi_emlrtRSI = {
    9,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo wi_emlrtRSI = {
    14,                                                          /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo ej_emlrtRSI = {
    21,    /* lineNo */
    "det", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pathName
                                                                           */
};

static emlrtRSInfo fj_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo gj_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo hj_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo ij_emlrtRSI =
    {
        67,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo jj_emlrtRSI =
    {
        112,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo kj_emlrtRSI =
    {
        107,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo lj_emlrtRSI =
    {
        135,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo mj_emlrtRSI =
    {
        140,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo nj_emlrtRSI =
    {
        142,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo oj_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    12,    /* lineNo */
    15,    /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtECInfo hb_emlrtECI = {
    2,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo ib_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    15,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = {
    21,    /* lineNo */
    2,     /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

static emlrtRTEInfo sg_emlrtRTEI = {
    9,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = {
    44,                /* lineNo */
    32,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = {
    1,        /* lineNo */
    37,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = {
    9,                                                           /* lineNo */
    26,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = {
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = {
    1,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = {
    44,                /* lineNo */
    9,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

/* Function Declarations */
static void b_minus(const emlrtStack *sp, emxArray_real_T *r1,
                    const emxArray_real_T *x, const emxArray_real_T *m);

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
                               const emxArray_real_T *A,
                               const emxArray_real_T *r1);

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m);

/* Function Definitions */
static void b_minus(const emlrtStack *sp, emxArray_real_T *r1,
                    const emxArray_real_T *x, const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *r;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  m_data = m->data;
  x_data = x->data;
  i = r1->size[0];
  if (m->size[0] == 1) {
    r1->size[0] = x->size[0];
  } else {
    r1->size[0] = m->size[0];
  }
  emxEnsureCapacity_real_T(sp, r1, i, &wg_emlrtRTEI);
  r = r1->data;
  stride_0_0 = (x->size[0] != 1);
  stride_1_0 = (m->size[0] != 1);
  if (m->size[0] == 1) {
    loop_ub = x->size[0];
  } else {
    loop_ub = m->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = x_data[i * stride_0_0] - m_data[i * stride_1_0];
  }
}

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
                               const emxArray_real_T *A,
                               const emxArray_real_T *r1)
{
  const real_T *A_data;
  const real_T *r;
  real_T *x_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  r = r1->data;
  A_data = A->data;
  i = x->size[0] * x->size[1];
  x->size[0] = 1;
  if (r1->size[0] == 1) {
    x->size[1] = A->size[1];
  } else {
    x->size[1] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, x, i, &yg_emlrtRTEI);
  x_data = x->data;
  stride_0_1 = (A->size[1] != 1);
  stride_1_1 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = A->size[1];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = A_data[i * stride_0_1] * r[i * stride_1_1];
  }
}

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                               const emxArray_real_T *x,
                               const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *x_data;
  real_T *A_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  m_data = m->data;
  x_data = x->data;
  i = A->size[0] * A->size[1];
  A->size[0] = 1;
  if (m->size[0] == 1) {
    A->size[1] = x->size[0];
  } else {
    A->size[1] = m->size[0];
  }
  emxEnsureCapacity_real_T(sp, A, i, &sg_emlrtRTEI);
  A_data = A->data;
  stride_0_1 = (x->size[0] != 1);
  stride_1_1 = (m->size[0] != 1);
  if (m->size[0] == 1) {
    loop_ub = x->size[0];
  } else {
    loop_ub = m->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    A_data[i] = x_data[i * stride_0_1] - m_data[i * stride_1_1];
  }
}

real_T b_lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x,
                  const emxArray_real_T *m, const emxArray_real_T *C)
{
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t *ipiv_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r1;
  emxArray_real_T e_x;
  emxArray_real_T *A;
  emxArray_real_T *b_A;
  emxArray_real_T *b_x;
  emxArray_real_T *d_x;
  emxArray_real_T *r;
  const real_T *C_data;
  const real_T *m_data;
  const real_T *x_data;
  real_T c_x;
  real_T p;
  real_T temp;
  real_T *A_data;
  real_T *b_A_data;
  real_T *b_x_data;
  int32_T f_x;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  int32_T *ipiv_data;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
  boolean_T isodd;
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
  C_data = C->data;
  m_data = m->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &ui_emlrtRSI;
  if (C->size[0] != C->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &y_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  emxInit_real_T(&st, &b_x, 2, &tg_emlrtRTEI);
  emxInit_int32_T(&st, &ipiv, 2, &bh_emlrtRTEI);
  if ((C->size[0] == 0) || (C->size[1] == 0)) {
    temp = 1.0;
  } else {
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[0];
    b_x->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i, &rg_emlrtRTEI);
    b_x_data = b_x->data;
    loop_ub = C->size[0] * C->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = C_data[i];
    }
    b_st.site = &ej_emlrtRSI;
    xgetrf(&b_st, C->size[0], C->size[1], b_x, C->size[0], ipiv);
    ipiv_data = ipiv->data;
    b_x_data = b_x->data;
    temp = b_x_data[0];
    i = b_x->size[0];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      temp *= b_x_data[(loop_ub + b_x->size[0] * (loop_ub + 1)) + 1];
    }
    isodd = false;
    i = ipiv->size[1];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      if (ipiv_data[loop_ub] > loop_ub + 1) {
        isodd = !isodd;
      }
    }
    if (isodd) {
      temp = -temp;
    }
  }
  st.site = &ui_emlrtRSI;
  st.site = &ui_emlrtRSI;
  c_x = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
        muDoubleScalarSqrt(muDoubleScalarAbs(temp));
  if ((x->size[0] != m->size[0]) && ((x->size[0] != 1) && (m->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(x->size[0], m->size[0], &ib_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &vi_emlrtRSI;
  emxInit_real_T(&st, &A, 2, &sg_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = x->size[0];
    emxEnsureCapacity_real_T(&st, A, i, &sg_emlrtRTEI);
    A_data = A->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = x_data[i] - m_data[i];
    }
  } else {
    b_st.site = &vi_emlrtRSI;
    i_binary_expand_op(&b_st, A, x, m);
    A_data = A->data;
  }
  if (C->size[1] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &ab_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &fj_emlrtRSI;
  emxInit_ptrdiff_t(&b_st, &ipiv_t, &ch_emlrtRTEI);
  emxInit_real_T(&b_st, &r, 1, &dh_emlrtRTEI);
  emxInit_ptrdiff_t(&b_st, &r1, &xg_emlrtRTEI);
  emxInit_real_T(&b_st, &b_A, 1, &ug_emlrtRTEI);
  if ((A->size[1] == 0) || ((C->size[0] == 0) || (C->size[1] == 0))) {
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, A, i, &sg_emlrtRTEI);
    A_data = A->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    c_st.site = &gj_emlrtRSI;
    d_st.site = &ij_emlrtRSI;
    e_st.site = &kj_emlrtRSI;
    n = C->size[1];
    f_st.site = &lj_emlrtRSI;
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[0];
    b_x->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&f_st, b_x, i, &vg_emlrtRTEI);
    b_x_data = b_x->data;
    loop_ub = C->size[0] * C->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = C_data[i];
    }
    g_st.site = &db_emlrtRSI;
    h_st.site = &fb_emlrtRSI;
    repmat(&h_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), r1);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r1->size[0];
    emxEnsureCapacity_ptrdiff_t(&g_st, ipiv_t, i, &xg_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)C->size[1],
                                 (ptrdiff_t)C->size[1], &b_x_data[0],
                                 (ptrdiff_t)C->size[1], &ipiv_t_data[0]);
    n = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&g_st, ipiv, i, &ah_emlrtRTEI);
    ipiv_data = ipiv->data;
    h_st.site = &eb_emlrtRSI;
    if (n < 0) {
      if (n == -1010) {
        emlrtErrorWithMessageIdR2018a(&h_st, &q_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &h_st, &p_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, n);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      ipiv_data[loop_ub] = (int32_T)ipiv_t_data[loop_ub];
    }
    f_st.site = &mj_emlrtRSI;
    g_st.site = &nb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_x_data[0],
          &lda_t, &A_data[0], &ldb_t);
    f_st.site = &nj_emlrtRSI;
    g_st.site = &nb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_x_data[0],
          &lda_t, &A_data[0], &ldb_t);
    i = C->size[1] - 1;
    for (loop_ub = i; loop_ub >= 1; loop_ub--) {
      i1 = ipiv_data[loop_ub - 1];
      if (i1 != loop_ub) {
        temp = A_data[loop_ub - 1];
        A_data[loop_ub - 1] = A_data[i1 - 1];
        A_data[i1 - 1] = temp;
      }
    }
    if (((C->size[0] != 1) || (C->size[1] != 1)) && (n > 0)) {
      e_st.site = &jj_emlrtRSI;
      f_st.site = &oj_emlrtRSI;
      warning(&f_st);
    }
  } else {
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[1];
    b_x->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, b_x, i, &tg_emlrtRTEI);
    b_x_data = b_x->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = C->size[1];
      for (i1 = 0; i1 < n; i1++) {
        b_x_data[i1 + b_x->size[0] * i] = C_data[i + C->size[0] * i1];
      }
    }
    i = b_A->size[0];
    b_A->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, i, &ug_emlrtRTEI);
    b_A_data = b_A->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_A_data[i] = A_data[i];
    }
    c_st.site = &hj_emlrtRSI;
    qrsolve(&c_st, b_x, b_A, r);
    b_A_data = r->data;
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = r->size[0];
    emxEnsureCapacity_real_T(&b_st, A, i, &sg_emlrtRTEI);
    A_data = A->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = b_A_data[i];
    }
  }
  emxFree_real_T(&b_st, &b_A);
  emxFree_ptrdiff_t(&b_st, &r1);
  emxFree_ptrdiff_t(&b_st, &ipiv_t);
  emxFree_int32_T(&b_st, &ipiv);
  emxFree_real_T(&b_st, &b_x);
  if (x->size[0] == m->size[0]) {
    i = r->size[0];
    r->size[0] = x->size[0];
    emxEnsureCapacity_real_T(sp, r, i, &wg_emlrtRTEI);
    b_A_data = r->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_A_data[i] = x_data[i] - m_data[i];
    }
  } else {
    st.site = &vi_emlrtRSI;
    b_minus(&st, r, x, m);
    b_A_data = r->data;
  }
  if ((r->size[0] != A->size[1]) && ((A->size[1] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], r->size[0], &hb_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &vi_emlrtRSI;
  emxInit_real_T(&st, &d_x, 2, &yg_emlrtRTEI);
  if (r->size[0] == A->size[1]) {
    i = d_x->size[0] * d_x->size[1];
    d_x->size[0] = 1;
    d_x->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, d_x, i, &yg_emlrtRTEI);
    b_x_data = d_x->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = A_data[i] * b_A_data[i];
    }
  } else {
    b_st.site = &vi_emlrtRSI;
    h_binary_expand_op(&b_st, d_x, A, r);
  }
  emxFree_real_T(&st, &r);
  emxFree_real_T(&st, &A);
  b_st.site = &wd_emlrtRSI;
  c_st.site = &xd_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  if (d_x->size[1] == 0) {
    temp = 0.0;
  } else {
    e_st.site = &ne_emlrtRSI;
    n = d_x->size[1];
    e_x = *d_x;
    f_x = n;
    e_x.size = &f_x;
    e_x.numDimensions = 1;
    f_st.site = &be_emlrtRSI;
    temp = sumMatrixColumns(&f_st, &e_x, d_x->size[1]);
  }
  emxFree_real_T(&d_st, &d_x);
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &wi_emlrtRSI;
  if (c_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &t_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  c_x = muDoubleScalarLog(c_x);
  p = -0.5 * temp - c_x;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return p;
}

real_T lnpdfmvn(real_T x, real_T m, real_T C)
{
  real_T mahal;
  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  mahal = f_sumColumnB((x - m) / C * (x - m));
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  return -0.5 * mahal -
         muDoubleScalarLog(2.5066282746310002 *
                           muDoubleScalarSqrt(muDoubleScalarAbs(C)));
}

/* End of code generation (lnpdfmvn.c) */

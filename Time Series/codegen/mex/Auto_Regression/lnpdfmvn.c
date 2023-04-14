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
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "det.h"
#include "mpower.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo vj_emlrtRSI = {
    8,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo wj_emlrtRSI = {
    9,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo xj_emlrtRSI = {
    14,                                                          /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo yj_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo ak_emlrtRSI =
    {
        67,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo bk_emlrtRSI =
    {
        112,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ck_emlrtRSI =
    {
        107,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo dk_emlrtRSI =
    {
        135,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ek_emlrtRSI =
    {
        140,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo fk_emlrtRSI =
    {
        142,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo gk_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtECInfo ac_emlrtECI = {
    2,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo bc_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    15,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = {
    9,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = {
    1,        /* lineNo */
    37,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = {
    9,                                                           /* lineNo */
    26,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = {
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = {
    1,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

/* Function Declarations */
static void b_minus(const emlrtStack *sp, emxArray_real_T *r1,
                    const emxArray_real_T *x, const emxArray_real_T *m);

static void t_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
                               const emxArray_real_T *A,
                               const emxArray_real_T *r1);

static void u_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
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
  emxEnsureCapacity_real_T(sp, r1, i, &xj_emlrtRTEI);
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

static void t_binary_expand_op(const emlrtStack *sp, emxArray_real_T *x,
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
  emxEnsureCapacity_real_T(sp, x, i, &ak_emlrtRTEI);
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

static void u_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
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
  emxEnsureCapacity_real_T(sp, A, i, &uj_emlrtRTEI);
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

real_T lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x,
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
  emxArray_real_T d_x;
  emxArray_real_T *A;
  emxArray_real_T *b_A;
  emxArray_real_T *b_C;
  emxArray_real_T *c_x;
  emxArray_real_T *r;
  const real_T *C_data;
  const real_T *m_data;
  const real_T *x_data;
  real_T b_x;
  real_T p;
  real_T temp;
  real_T *A_data;
  real_T *b_C_data;
  real_T *r2;
  int32_T e_x;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  int32_T *ipiv_data;
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
  C_data = C->data;
  m_data = m->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &vj_emlrtRSI;
  b_x = det(&st, C);
  st.site = &vj_emlrtRSI;
  st.site = &vj_emlrtRSI;
  b_x = b_mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
        muDoubleScalarSqrt(muDoubleScalarAbs(b_x));
  if ((x->size[0] != m->size[0]) && ((x->size[0] != 1) && (m->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(x->size[0], m->size[0], &bc_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &wj_emlrtRSI;
  emxInit_real_T(&st, &A, 2, &uj_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = x->size[0];
    emxEnsureCapacity_real_T(&st, A, i, &uj_emlrtRTEI);
    A_data = A->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = x_data[i] - m_data[i];
    }
  } else {
    b_st.site = &wj_emlrtRSI;
    u_binary_expand_op(&b_st, A, x, m);
    A_data = A->data;
  }
  if (C->size[1] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &fb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &qe_emlrtRSI;
  emxInit_int32_T(&b_st, &ipiv, 2, &ck_emlrtRTEI);
  emxInit_ptrdiff_t(&b_st, &ipiv_t, &dk_emlrtRTEI);
  emxInit_real_T(&b_st, &r, 1, &kg_emlrtRTEI);
  emxInit_ptrdiff_t(&b_st, &r1, &yj_emlrtRTEI);
  emxInit_real_T(&b_st, &b_C, 2, &eg_emlrtRTEI);
  emxInit_real_T(&b_st, &b_A, 1, &vj_emlrtRTEI);
  if ((A->size[1] == 0) || ((C->size[0] == 0) || (C->size[1] == 0))) {
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, A, i, &uj_emlrtRTEI);
    A_data = A->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    c_st.site = &yj_emlrtRSI;
    d_st.site = &ak_emlrtRSI;
    e_st.site = &ck_emlrtRSI;
    n = C->size[1];
    f_st.site = &dk_emlrtRSI;
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = C->size[0];
    b_C->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&f_st, b_C, i, &wj_emlrtRTEI);
    b_C_data = b_C->data;
    loop_ub = C->size[0] * C->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_C_data[i] = C_data[i];
    }
    g_st.site = &yf_emlrtRSI;
    h_st.site = &bg_emlrtRSI;
    repmat(&h_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), r1);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r1->size[0];
    emxEnsureCapacity_ptrdiff_t(&g_st, ipiv_t, i, &yj_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)C->size[1],
                                 (ptrdiff_t)C->size[1], &b_C_data[0],
                                 (ptrdiff_t)C->size[1], &ipiv_t_data[0]);
    n = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&g_st, ipiv, i, &bk_emlrtRTEI);
    ipiv_data = ipiv->data;
    h_st.site = &ag_emlrtRSI;
    if (n < 0) {
      if (n == -1010) {
        emlrtErrorWithMessageIdR2018a(&h_st, &s_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &h_st, &t_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv1[0], 12, n);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      ipiv_data[loop_ub] = (int32_T)ipiv_t_data[loop_ub];
    }
    f_st.site = &ek_emlrtRSI;
    g_st.site = &gg_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_C_data[0],
          &lda_t, &A_data[0], &ldb_t);
    f_st.site = &fk_emlrtRSI;
    g_st.site = &gg_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)C->size[1];
    lda_t = (ptrdiff_t)C->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_C_data[0],
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
      e_st.site = &bk_emlrtRSI;
      f_st.site = &gk_emlrtRSI;
      b_warning(&f_st);
    }
  } else {
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = C->size[1];
    b_C->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, b_C, i, &eg_emlrtRTEI);
    b_C_data = b_C->data;
    loop_ub = C->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = C->size[1];
      for (i1 = 0; i1 < n; i1++) {
        b_C_data[i1 + b_C->size[0] * i] = C_data[i + C->size[0] * i1];
      }
    }
    i = b_A->size[0];
    b_A->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, i, &vj_emlrtRTEI);
    b_C_data = b_A->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_C_data[i] = A_data[i];
    }
    c_st.site = &re_emlrtRSI;
    qrsolve(&c_st, b_C, b_A, r);
    r2 = r->data;
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = r->size[0];
    emxEnsureCapacity_real_T(&b_st, A, i, &uj_emlrtRTEI);
    A_data = A->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = r2[i];
    }
  }
  emxFree_real_T(&b_st, &b_A);
  emxFree_real_T(&b_st, &b_C);
  emxFree_ptrdiff_t(&b_st, &r1);
  emxFree_ptrdiff_t(&b_st, &ipiv_t);
  emxFree_int32_T(&b_st, &ipiv);
  if (x->size[0] == m->size[0]) {
    i = r->size[0];
    r->size[0] = x->size[0];
    emxEnsureCapacity_real_T(sp, r, i, &xj_emlrtRTEI);
    r2 = r->data;
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      r2[i] = x_data[i] - m_data[i];
    }
  } else {
    st.site = &wj_emlrtRSI;
    b_minus(&st, r, x, m);
    r2 = r->data;
  }
  if ((r->size[0] != A->size[1]) && ((A->size[1] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], r->size[0], &ac_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &wj_emlrtRSI;
  emxInit_real_T(&st, &c_x, 2, &ak_emlrtRTEI);
  if (r->size[0] == A->size[1]) {
    i = c_x->size[0] * c_x->size[1];
    c_x->size[0] = 1;
    c_x->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, c_x, i, &ak_emlrtRTEI);
    b_C_data = c_x->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_C_data[i] = A_data[i] * r2[i];
    }
  } else {
    b_st.site = &wj_emlrtRSI;
    t_binary_expand_op(&b_st, c_x, A, r);
  }
  emxFree_real_T(&st, &r);
  emxFree_real_T(&st, &A);
  b_st.site = &cc_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  d_st.site = &ec_emlrtRSI;
  if (c_x->size[1] == 0) {
    temp = 0.0;
  } else {
    e_st.site = &sc_emlrtRSI;
    n = c_x->size[1];
    d_x = *c_x;
    e_x = n;
    d_x.size = &e_x;
    d_x.numDimensions = 1;
    f_st.site = &gc_emlrtRSI;
    temp = sumMatrixColumns(&f_st, &d_x, c_x->size[1]);
  }
  emxFree_real_T(&d_st, &c_x);
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &xj_emlrtRSI;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  b_x = muDoubleScalarLog(b_x);
  p = -0.5 * temp - b_x;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return p;
}

/* End of code generation (lnpdfmvn.c) */

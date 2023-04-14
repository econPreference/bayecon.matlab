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
#include "Hetero_Regression_data.h"
#include "Hetero_Regression_emxutil.h"
#include "Hetero_Regression_types.h"
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
static emlrtRSInfo qe_emlrtRSI = {
    8,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    9,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    14,                                                          /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI = {
    21,    /* lineNo */
    "det", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pathName
                                                                           */
};

static emlrtRSInfo ue_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI =
    {
        67,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo df_emlrtRSI =
    {
        112,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI =
    {
        107,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI =
    {
        135,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI =
    {
        140,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI =
    {
        142,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    67,      /* lineNo */
    "xtrsm", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsm.m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    12,    /* lineNo */
    15,    /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

static emlrtRTEInfo v_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtECInfo x_emlrtECI = {
    2,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo y_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    15,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI = {
    1,        /* lineNo */
    37,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI = {
    9,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    44,                /* lineNo */
    32,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = {
    9,                                                           /* lineNo */
    26,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = {
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = {
    1,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo re_emlrtRTEI = {
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
  emxEnsureCapacity_real_T(sp, r1, i, &ne_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, x, i, &oe_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, A, i, &je_emlrtRTEI);
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
  static const char_T fname[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 't', 'r', 'f',
                                   '_', 'w', 'o', 'r', 'k'};
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
  emxArray_ptrdiff_t *b_ipiv_t;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r;
  emxArray_real_T f_x;
  emxArray_real_T *A;
  emxArray_real_T *b_A;
  emxArray_real_T *b_x;
  emxArray_real_T *e_x;
  emxArray_real_T *r1;
  const real_T *C_data;
  const real_T *m_data;
  const real_T *x_data;
  real_T c_x;
  real_T p;
  real_T temp;
  real_T *A_data;
  real_T *b_A_data;
  real_T *b_x_data;
  int32_T b_m;
  int32_T d_x;
  int32_T g_x;
  int32_T h_x;
  int32_T i_x;
  int32_T ib;
  int32_T inb;
  int32_T j_x;
  int32_T nleft;
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
  st.site = &qe_emlrtRSI;
  if (C->size[0] != C->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  emxInit_real_T(&st, &b_x, 2, &le_emlrtRTEI);
  emxInit_int32_T(&st, &ipiv, 2, &pe_emlrtRTEI);
  emxInit_ptrdiff_t(&st, &r, &ie_emlrtRTEI);
  if ((C->size[0] == 0) || (C->size[1] == 0)) {
    temp = 1.0;
  } else {
    b_m = C->size[0];
    inb = C->size[1];
    b_st.site = &te_emlrtRSI;
    ib = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[0];
    b_x->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&b_st, b_x, ib, &he_emlrtRTEI);
    b_x_data = b_x->data;
    nleft = C->size[0] * C->size[1];
    for (ib = 0; ib < nleft; ib++) {
      b_x_data[ib] = C_data[ib];
    }
    emxInit_ptrdiff_t(&b_st, &ipiv_t, &qe_emlrtRTEI);
    c_st.site = &ue_emlrtRSI;
    d_st.site = &we_emlrtRSI;
    repmat(&d_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(b_m, inb), r);
    ib = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&c_st, ipiv_t, ib, &ie_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)C->size[0],
                                 (ptrdiff_t)C->size[1], &b_x_data[0],
                                 (ptrdiff_t)C->size[0], &ipiv_t_data[0]);
    b_m = (int32_T)info_t;
    ib = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&c_st, ipiv, ib, &ke_emlrtRTEI);
    ipiv_data = ipiv->data;
    d_st.site = &ve_emlrtRSI;
    if (b_m < 0) {
      if (b_m == -1010) {
        emlrtErrorWithMessageIdR2018a(&d_st, &p_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &fname[0], 12, b_m);
      }
    }
    ib = ipiv_t->size[0] - 1;
    for (inb = 0; inb <= ib; inb++) {
      ipiv_data[inb] = (int32_T)ipiv_t_data[inb];
    }
    emxFree_ptrdiff_t(&c_st, &ipiv_t);
    temp = b_x_data[0];
    ib = b_x->size[0];
    for (inb = 0; inb <= ib - 2; inb++) {
      temp *= b_x_data[(inb + b_x->size[0] * (inb + 1)) + 1];
    }
    isodd = false;
    ib = ipiv->size[1];
    for (inb = 0; inb <= ib - 2; inb++) {
      if (ipiv_data[inb] > inb + 1) {
        isodd = !isodd;
      }
    }
    if (isodd) {
      temp = -temp;
    }
  }
  st.site = &qe_emlrtRSI;
  st.site = &qe_emlrtRSI;
  c_x = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
        muDoubleScalarSqrt(muDoubleScalarAbs(temp));
  if ((x->size[0] != m->size[0]) && ((x->size[0] != 1) && (m->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(x->size[0], m->size[0], &y_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &re_emlrtRSI;
  emxInit_real_T(&st, &A, 2, &je_emlrtRTEI);
  if (x->size[0] == m->size[0]) {
    ib = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = x->size[0];
    emxEnsureCapacity_real_T(&st, A, ib, &je_emlrtRTEI);
    A_data = A->data;
    nleft = x->size[0];
    for (ib = 0; ib < nleft; ib++) {
      A_data[ib] = x_data[ib] - m_data[ib];
    }
  } else {
    b_st.site = &re_emlrtRSI;
    i_binary_expand_op(&b_st, A, x, m);
    A_data = A->data;
  }
  if (C->size[1] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &v_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &ye_emlrtRSI;
  emxInit_ptrdiff_t(&b_st, &b_ipiv_t, &qe_emlrtRTEI);
  emxInit_real_T(&b_st, &r1, 1, &re_emlrtRTEI);
  emxInit_real_T(&b_st, &b_A, 1, &me_emlrtRTEI);
  if ((A->size[1] == 0) || ((C->size[0] == 0) || (C->size[1] == 0))) {
    ib = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, A, ib, &je_emlrtRTEI);
    A_data = A->data;
    nleft = C->size[0];
    for (ib = 0; ib < nleft; ib++) {
      A_data[ib] = 0.0;
    }
  } else if (C->size[0] == C->size[1]) {
    c_st.site = &af_emlrtRSI;
    d_st.site = &cf_emlrtRSI;
    e_st.site = &ef_emlrtRSI;
    inb = C->size[1];
    f_st.site = &ff_emlrtRSI;
    ib = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[0];
    b_x->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&f_st, b_x, ib, &he_emlrtRTEI);
    b_x_data = b_x->data;
    nleft = C->size[0] * C->size[1];
    for (ib = 0; ib < nleft; ib++) {
      b_x_data[ib] = C_data[ib];
    }
    g_st.site = &ue_emlrtRSI;
    h_st.site = &we_emlrtRSI;
    repmat(&h_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(inb, inb), r);
    ib = b_ipiv_t->size[0];
    b_ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&g_st, b_ipiv_t, ib, &ie_emlrtRTEI);
    ipiv_t_data = b_ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)C->size[1],
                                 (ptrdiff_t)C->size[1], &b_x_data[0],
                                 (ptrdiff_t)C->size[1], &ipiv_t_data[0]);
    b_m = (int32_T)info_t;
    ib = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = b_ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&g_st, ipiv, ib, &ke_emlrtRTEI);
    ipiv_data = ipiv->data;
    h_st.site = &ve_emlrtRSI;
    if (b_m < 0) {
      if (b_m == -1010) {
        emlrtErrorWithMessageIdR2018a(&h_st, &p_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &h_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &fname[0], 12, b_m);
      }
    }
    ib = b_ipiv_t->size[0] - 1;
    for (inb = 0; inb <= ib; inb++) {
      ipiv_data[inb] = (int32_T)ipiv_t_data[inb];
    }
    f_st.site = &gf_emlrtRSI;
    g_st.site = &if_emlrtRSI;
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
    f_st.site = &hf_emlrtRSI;
    g_st.site = &if_emlrtRSI;
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
    ib = C->size[1] - 1;
    for (inb = ib; inb >= 1; inb--) {
      d_x = ipiv_data[inb - 1];
      if (d_x != inb) {
        temp = A_data[inb - 1];
        A_data[inb - 1] = A_data[d_x - 1];
        A_data[d_x - 1] = temp;
      }
    }
    if (((C->size[0] != 1) || (C->size[1] != 1)) && (b_m > 0)) {
      e_st.site = &df_emlrtRSI;
      f_st.site = &kf_emlrtRSI;
      b_warning(&f_st);
    }
  } else {
    ib = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[1];
    b_x->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&b_st, b_x, ib, &le_emlrtRTEI);
    b_x_data = b_x->data;
    nleft = C->size[0];
    for (ib = 0; ib < nleft; ib++) {
      b_m = C->size[1];
      for (d_x = 0; d_x < b_m; d_x++) {
        b_x_data[d_x + b_x->size[0] * ib] = C_data[ib + C->size[0] * d_x];
      }
    }
    ib = b_A->size[0];
    b_A->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, ib, &me_emlrtRTEI);
    b_A_data = b_A->data;
    nleft = A->size[1];
    for (ib = 0; ib < nleft; ib++) {
      b_A_data[ib] = A_data[ib];
    }
    c_st.site = &bf_emlrtRSI;
    qrsolve(&c_st, b_x, b_A, r1);
    b_A_data = r1->data;
    ib = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = r1->size[0];
    emxEnsureCapacity_real_T(&b_st, A, ib, &je_emlrtRTEI);
    A_data = A->data;
    nleft = r1->size[0];
    for (ib = 0; ib < nleft; ib++) {
      A_data[ib] = b_A_data[ib];
    }
  }
  emxFree_real_T(&b_st, &b_A);
  emxFree_ptrdiff_t(&b_st, &r);
  emxFree_ptrdiff_t(&b_st, &b_ipiv_t);
  emxFree_int32_T(&b_st, &ipiv);
  emxFree_real_T(&b_st, &b_x);
  if (x->size[0] == m->size[0]) {
    ib = r1->size[0];
    r1->size[0] = x->size[0];
    emxEnsureCapacity_real_T(sp, r1, ib, &ne_emlrtRTEI);
    b_A_data = r1->data;
    nleft = x->size[0];
    for (ib = 0; ib < nleft; ib++) {
      b_A_data[ib] = x_data[ib] - m_data[ib];
    }
  } else {
    st.site = &re_emlrtRSI;
    b_minus(&st, r1, x, m);
    b_A_data = r1->data;
  }
  if ((r1->size[0] != A->size[1]) &&
      ((A->size[1] != 1) && (r1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[1], r1->size[0], &x_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &re_emlrtRSI;
  emxInit_real_T(&st, &e_x, 2, &oe_emlrtRTEI);
  if (r1->size[0] == A->size[1]) {
    ib = e_x->size[0] * e_x->size[1];
    e_x->size[0] = 1;
    e_x->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, e_x, ib, &oe_emlrtRTEI);
    b_x_data = e_x->data;
    nleft = A->size[1];
    for (ib = 0; ib < nleft; ib++) {
      b_x_data[ib] = A_data[ib] * b_A_data[ib];
    }
  } else {
    b_st.site = &re_emlrtRSI;
    h_binary_expand_op(&b_st, e_x, A, r1);
  }
  emxFree_real_T(&st, &r1);
  emxFree_real_T(&st, &A);
  b_st.site = &kb_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  d_st.site = &mb_emlrtRSI;
  if (e_x->size[1] == 0) {
    temp = 0.0;
  } else {
    e_st.site = &yb_emlrtRSI;
    f_st.site = &ob_emlrtRSI;
    if (e_x->size[1] < 4096) {
      d_x = e_x->size[1];
      f_x = *e_x;
      g_x = d_x;
      f_x.size = &g_x;
      f_x.numDimensions = 1;
      g_st.site = &qb_emlrtRSI;
      temp = c_sumColumnB(&g_st, &f_x, e_x->size[1]);
    } else {
      b_m = e_x->size[1] / 4096;
      inb = b_m << 12;
      nleft = e_x->size[1] - inb;
      d_x = e_x->size[1];
      f_x = *e_x;
      h_x = d_x;
      f_x.size = &h_x;
      f_x.numDimensions = 1;
      temp = b_sumColumnB4(&f_x, 1);
      if (2 <= b_m) {
        d_x = e_x->size[1];
      }
      for (ib = 2; ib <= b_m; ib++) {
        f_x = *e_x;
        i_x = d_x;
        f_x.size = &i_x;
        f_x.numDimensions = 1;
        temp += b_sumColumnB4(&f_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        d_x = e_x->size[1];
        f_x = *e_x;
        j_x = d_x;
        f_x.size = &j_x;
        f_x.numDimensions = 1;
        g_st.site = &sb_emlrtRSI;
        temp += d_sumColumnB(&g_st, &f_x, nleft, inb + 1);
      }
    }
  }
  emxFree_real_T(&d_st, &e_x);
  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &se_emlrtRSI;
  if (c_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  c_x = muDoubleScalarLog(c_x);
  p = -0.5 * temp - c_x;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return p;
}

/* End of code generation (lnpdfmvn.c) */

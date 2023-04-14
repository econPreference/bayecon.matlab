/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * logDirichlet.c
 *
 * Code generation for function 'logDirichlet'
 *
 */

/* Include files */
#include "logDirichlet.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "applyScalarFunctionInPlace.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "gammaln.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    ee_emlrtRSI =
        {
            28,       /* lineNo */
            "repmat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pathName */
};

static emlrtRSInfo fk_emlrtRSI = {
    10,                                                            /* lineNo */
    "logDirichlet",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pathName
                                                                    */
};

static emlrtRSInfo gk_emlrtRSI = {
    14,                                                            /* lineNo */
    "logDirichlet",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pathName
                                                                    */
};

static emlrtRSInfo hk_emlrtRSI = {
    15,                                                            /* lineNo */
    "logDirichlet",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pathName
                                                                    */
};

static emlrtRSInfo ik_emlrtRSI = {
    34,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo jk_emlrtRSI = {
    12,                                                            /* lineNo */
    "logDirichlet",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pathName
                                                                    */
};

static emlrtRSInfo kk_emlrtRSI = {
    16,                                                            /* lineNo */
    "logDirichlet",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pathName
                                                                    */
};

static emlrtRSInfo
    nk_emlrtRSI =
        {
            66,       /* lineNo */
            "repmat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pathName */
};

static emlrtRSInfo
    ok_emlrtRSI =
        {
            69,       /* lineNo */
            "repmat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pathName */
};

static emlrtRSInfo
    pk_emlrtRSI =
        {
            71,       /* lineNo */
            "repmat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pathName */
};

static emlrtRSInfo sk_emlrtRSI = {
    17,    /* lineNo */
    "log", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/log.m" /* pathName
                                                                          */
};

static emlrtRTEInfo
    nb_emlrtRTEI =
        {
            53,       /* lineNo */
            15,       /* colNo */
            "bsxfun", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "bsxfun.m" /* pName */
};

static emlrtECInfo cb_emlrtECI = {
    2,                                                             /* nDims */
    14,                                                            /* lineNo */
    5,                                                             /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = {
    34,               /* lineNo */
    1,                /* colNo */
    "rdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "rdivide_helper.m" /* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = {
    10,                                                            /* lineNo */
    19,                                                            /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

static emlrtRTEInfo
    jj_emlrtRTEI =
        {
            60,       /* lineNo */
            20,       /* colNo */
            "bsxfun", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "bsxfun.m" /* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = {
    12,                                                            /* lineNo */
    16,                                                            /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

static emlrtRTEInfo
    lj_emlrtRTEI =
        {
            59,       /* lineNo */
            28,       /* colNo */
            "repmat", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pName */
};

static emlrtRTEInfo mj_emlrtRTEI =
    {
        10,        /* lineNo */
        1,         /* colNo */
        "gammaln", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/"
        "gammaln.m" /* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = {
    15,                                                            /* lineNo */
    6,                                                             /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = {
    16,                                                            /* lineNo */
    20,                                                            /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = {
    15,                                                            /* lineNo */
    1,                                                             /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = {
    1,                                                             /* lineNo */
    14,                                                            /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = {
    10,                                                            /* lineNo */
    24,                                                            /* colNo */
    "logDirichlet",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logDirichlet.m" /* pName */
};

/* Function Declarations */
static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *b,
                               const emxArray_real_T *y,
                               const emxArray_real_T *r1);

/* Function Definitions */
static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *b,
                               const emxArray_real_T *y,
                               const emxArray_real_T *r1)
{
  const real_T *r;
  const real_T *y_data;
  real_T *b_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  y_data = y->data;
  i = b->size[0];
  if (r1->size[1] == 1) {
    b->size[0] = y->size[1];
  } else {
    b->size[0] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b, i, &oj_emlrtRTEI);
  b_data = b->data;
  stride_0_0 = (y->size[1] != 1);
  stride_1_0 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = y_data[i * stride_0_0] - r[i * stride_1_0];
  }
}

void b_logDirichlet(const emlrtStack *sp, emxArray_real_T *X,
                    emxArray_real_T *a, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *b;
  emxArray_real_T *b_a;
  emxArray_real_T *b_y;
  emxArray_real_T *g;
  emxArray_real_T *r;
  real_T *X_data;
  real_T *a_data;
  real_T *b_a_data;
  real_T *r1;
  real_T *y_data;
  int32_T acoef;
  int32_T b_csz_idx_0;
  int32_T b_k;
  int32_T bcoef;
  int32_T csz_idx_0;
  int32_T csz_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  int32_T k;
  boolean_T p;
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
  a_data = a->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &rj_emlrtRTEI);
  /*  Compute log pdf of a Dirichlet distribution. */
  /*  Input: */
  /*    X: d x n data matrix, each column sums to one (sum(X,1)==ones(1,n) &&
   * X>=0) */
  /*    a: d x k parameter of Dirichlet */
  /*    y: k x n probability density */
  /*  Output: */
  /*    y: k x n probability density in logrithm scale y=log p(x) */
  /*  Written by Mo Chen (sth4nth@gmail.com). */
  st.site = &fk_emlrtRSI;
  b_st.site = &rf_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  b_combineVectorElements(&c_st, X, b_y);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, b_y, i, &hj_emlrtRTEI);
  y_data = b_y->data;
  csz_idx_0 = b_y->size[1] - 1;
  for (i = 0; i <= csz_idx_0; i++) {
    y_data[i] = 1.0 / y_data[i];
  }
  emxInit_real_T(sp, &b_a, 2, &ij_emlrtRTEI);
  st.site = &fk_emlrtRSI;
  i = b_a->size[0] * b_a->size[1];
  b_a->size[0] = X->size[0];
  b_a->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&st, b_a, i, &ij_emlrtRTEI);
  b_a_data = b_a->data;
  csz_idx_0 = X->size[0] * X->size[1];
  for (i = 0; i < csz_idx_0; i++) {
    b_a_data[i] = X_data[i];
  }
  csz_idx_0 = X->size[0];
  if (b_y->size[1] == 1) {
    csz_idx_1 = X->size[1];
  } else if (X->size[1] == 1) {
    csz_idx_1 = b_y->size[1];
  } else if (X->size[1] == b_y->size[1]) {
    csz_idx_1 = X->size[1];
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &nb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  i = X->size[0] * X->size[1];
  X->size[0] = csz_idx_0;
  X->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&st, X, i, &jj_emlrtRTEI);
  X_data = X->data;
  if ((csz_idx_0 != 0) && (csz_idx_1 != 0)) {
    acoef = (b_a->size[1] != 1);
    bcoef = (b_y->size[1] != 1);
    i = csz_idx_1 - 1;
    for (k = 0; k <= i; k++) {
      csz_idx_0 = acoef * k;
      ibmat = bcoef * k;
      csz_idx_1 = (b_a->size[0] != 1);
      jcol = X->size[0] - 1;
      for (b_k = 0; b_k <= jcol; b_k++) {
        X_data[b_k + X->size[0] * k] =
            b_a_data[csz_idx_1 * b_k + b_a->size[0] * csz_idx_0] *
            y_data[ibmat];
      }
    }
  }
  if (a->size[0] == 1) {
    st.site = &jk_emlrtRSI;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = a->size[1];
    emxEnsureCapacity_real_T(&st, b_y, i, &kj_emlrtRTEI);
    y_data = b_y->data;
    csz_idx_0 = a->size[1];
    for (i = 0; i < csz_idx_0; i++) {
      y_data[i] = a_data[i];
    }
    b_st.site = &ee_emlrtRSI;
    csz_idx_0 = a->size[1];
    i = a->size[0] * a->size[1];
    a->size[0] = X->size[0];
    a->size[1] = csz_idx_0;
    emxEnsureCapacity_real_T(&st, a, i, &lj_emlrtRTEI);
    a_data = a->data;
    csz_idx_0 = b_y->size[1];
    csz_idx_1 = X->size[0];
    b_st.site = &nk_emlrtRSI;
    if ((1 <= b_y->size[1]) && (b_y->size[1] > 2147483646)) {
      c_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (jcol = 0; jcol < csz_idx_0; jcol++) {
      ibmat = jcol * csz_idx_1;
      b_st.site = &ok_emlrtRSI;
      if ((1 <= csz_idx_1) && (csz_idx_1 > 2147483646)) {
        c_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (acoef = 0; acoef < csz_idx_1; acoef++) {
        b_st.site = &pk_emlrtRSI;
        a_data[ibmat + acoef] = y_data[jcol];
      }
    }
  }
  st.site = &gk_emlrtRSI;
  b_st.site = &rf_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  b_combineVectorElements(&c_st, a, b_y);
  st.site = &gk_emlrtRSI;
  b_st.site = &yj_emlrtRSI;
  applyScalarFunctionInPlace(&b_st, b_y);
  y_data = b_y->data;
  st.site = &gk_emlrtRSI;
  i = b_a->size[0] * b_a->size[1];
  b_a->size[0] = a->size[0];
  b_a->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&st, b_a, i, &mj_emlrtRTEI);
  b_a_data = b_a->data;
  csz_idx_0 = a->size[0] * a->size[1];
  for (i = 0; i < csz_idx_0; i++) {
    b_a_data[i] = a_data[i];
  }
  emxInit_real_T(&st, &r, 2, &qj_emlrtRTEI);
  b_st.site = &yj_emlrtRSI;
  b_applyScalarFunctionInPlace(&b_st, b_a);
  st.site = &gk_emlrtRSI;
  b_st.site = &rf_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  b_combineVectorElements(&c_st, b_a, r);
  r1 = r->data;
  if ((b_y->size[1] != r->size[1]) &&
      ((b_y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], r->size[1], &cb_emlrtECI,
                                (emlrtCTX)sp);
  }
  i = b_a->size[0] * b_a->size[1];
  b_a->size[0] = a->size[0];
  b_a->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, b_a, i, &nj_emlrtRTEI);
  b_a_data = b_a->data;
  csz_idx_0 = a->size[0] * a->size[1];
  for (i = 0; i < csz_idx_0; i++) {
    b_a_data[i] = a_data[i] - 1.0;
  }
  st.site = &hk_emlrtRSI;
  b_st.site = &hk_emlrtRSI;
  p = false;
  i = X->size[0] * X->size[1];
  for (k = 0; k < i; k++) {
    if (p || (X_data[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &bb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  c_st.site = &sk_emlrtRSI;
  csz_idx_0 = X->size[0] * X->size[1];
  d_st.site = &ph_emlrtRSI;
  if ((1 <= csz_idx_0) && (csz_idx_0 > 2147483646)) {
    e_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  for (k = 0; k < csz_idx_0; k++) {
    X_data[k] = muDoubleScalarLog(X_data[k]);
  }
  b_st.site = &wc_emlrtRSI;
  if (b_a->size[0] != X->size[0]) {
    if (((b_a->size[0] == 1) && (b_a->size[1] == 1)) ||
        ((X->size[0] == 1) && (X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &x_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &g, 2, &pj_emlrtRTEI);
  b_st.site = &vc_emlrtRSI;
  b_mtimes(&b_st, b_a, X, g);
  a_data = g->data;
  st.site = &kk_emlrtRSI;
  emxFree_real_T(&st, &b_a);
  emxInit_real_T(&st, &b, 1, &oj_emlrtRTEI);
  if (b_y->size[1] == r->size[1]) {
    i = b->size[0];
    b->size[0] = b_y->size[1];
    emxEnsureCapacity_real_T(&st, b, i, &oj_emlrtRTEI);
    X_data = b->data;
    csz_idx_0 = b_y->size[1];
    for (i = 0; i < csz_idx_0; i++) {
      X_data[i] = y_data[i] - r1[i];
    }
  } else {
    b_st.site = &kk_emlrtRSI;
    k_binary_expand_op(&b_st, b, b_y, r);
    X_data = b->data;
  }
  emxFree_real_T(&st, &b_y);
  emxFree_real_T(&st, &r);
  if (b->size[0] == 1) {
    b_csz_idx_0 = g->size[0];
  } else if (g->size[0] == 1) {
    b_csz_idx_0 = b->size[0];
  } else if (g->size[0] == b->size[0]) {
    b_csz_idx_0 = g->size[0];
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &nb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  i = y->size[0] * y->size[1];
  y->size[0] = b_csz_idx_0;
  y->size[1] = g->size[1];
  emxEnsureCapacity_real_T(&st, y, i, &jj_emlrtRTEI);
  y_data = y->data;
  if ((b_csz_idx_0 != 0) && (g->size[1] != 0)) {
    acoef = (g->size[1] != 1);
    i = g->size[1] - 1;
    for (k = 0; k <= i; k++) {
      csz_idx_0 = acoef * k;
      csz_idx_1 = (g->size[0] != 1);
      bcoef = (b->size[0] != 1);
      jcol = y->size[0] - 1;
      for (b_k = 0; b_k <= jcol; b_k++) {
        y_data[b_k + y->size[0] * k] =
            a_data[csz_idx_1 * b_k + g->size[0] * csz_idx_0] +
            X_data[bcoef * b_k];
      }
    }
  }
  emxFree_real_T(&st, &b);
  emxFree_real_T(&st, &g);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T logDirichlet(const emlrtStack *sp, real_T X[2], const real_T a[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_a[2];
  real_T b;
  real_T y;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  Compute log pdf of a Dirichlet distribution. */
  /*  Input: */
  /*    X: d x n data matrix, each column sums to one (sum(X,1)==ones(1,n) &&
   * X>=0) */
  /*    a: d x k parameter of Dirichlet */
  /*    y: k x n probability density */
  /*  Output: */
  /*    y: k x n probability density in logrithm scale y=log p(x) */
  /*  Written by Mo Chen (sth4nth@gmail.com). */
  st.site = &fk_emlrtRSI;
  b_st.site = &rf_emlrtRSI;
  y = e_sumColumnB(X);
  b = 1.0 / y;
  X[0] *= b;
  X[1] *= b;
  st.site = &gk_emlrtRSI;
  b_st.site = &rf_emlrtRSI;
  b = e_sumColumnB(a);
  st.site = &gk_emlrtRSI;
  b_st.site = &yj_emlrtRSI;
  c_st.site = &ak_emlrtRSI;
  scalar_gammaln(&c_st, &b);
  st.site = &gk_emlrtRSI;
  b_a[0] = a[0];
  b_a[1] = a[1];
  b_st.site = &yj_emlrtRSI;
  c_st.site = &ik_emlrtRSI;
  scalar_gammaln(&c_st, &b_a[0]);
  c_st.site = &ik_emlrtRSI;
  scalar_gammaln(&c_st, &b_a[1]);
  st.site = &gk_emlrtRSI;
  b_st.site = &rf_emlrtRSI;
  y = e_sumColumnB(b_a);
  st.site = &hk_emlrtRSI;
  p = false;
  if ((X[0] < 0.0) || (X[1] < 0.0)) {
    p = true;
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  return ((a[0] - 1.0) * muDoubleScalarLog(X[0]) +
          (a[1] - 1.0) * muDoubleScalarLog(X[1])) +
         (b - y);
}

/* End of code generation (logDirichlet.c) */

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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "lnpdfmvn.h"
#include "ARMA_X_emxutil.h"
#include "invpd.h"
#include "error1.h"
#include "combineVectorElements.h"
#include "mpower.h"
#include "xgetrf.h"
#include "ARMA_X_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo ig_emlrtRSI = { 8,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 9,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 14, /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 21, /* lineNo */
  "det",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 9,/* lineNo */
  21,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 9,/* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo dn_emlrtRTEI = { 21,/* lineNo */
  2,                                   /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

static emlrtRTEInfo en_emlrtRTEI = { 9,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo fn_emlrtRTEI = { 9,/* lineNo */
  32,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo gn_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo bc_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  15,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  33,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo dc_emlrtECI = { 2,  /* nDims */
  9,                                   /* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo ep_emlrtRTEI = { 12,/* lineNo */
  15,                                  /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

/* Function Definitions */
real_T b_lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x, const
                  emxArray_real_T *m, const emxArray_real_T *C)
{
  real_T p;
  boolean_T isodd;
  emxArray_real_T *b_x;
  int32_T k;
  real_T alpha1;
  emxArray_real_T *a;
  int32_T loop_ub;
  real_T denom;
  emxArray_int32_T *ipiv;
  int32_T i42;
  emxArray_real_T *c_x;
  char_T TRANSA;
  char_T TRANSB;
  int32_T b_loop_ub;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T d_x[2];
  int32_T b_a[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &ig_emlrtRSI;
  isodd = (C->size[0] == C->size[1]);
  if (!isodd) {
    emlrtErrorWithMessageIdR2018a(&st, &ep_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  emxInit_real_T(&st, &b_x, 2, &ri_emlrtRTEI, true);
  if ((C->size[0] == 0) || (C->size[1] == 0)) {
    alpha1 = 1.0;
  } else {
    k = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[0];
    b_x->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&st, b_x, k, &dn_emlrtRTEI);
    loop_ub = C->size[0] * C->size[1];
    for (k = 0; k < loop_ub; k++) {
      b_x->data[k] = C->data[k];
    }

    emxInit_int32_T1(&st, &ipiv, 2, &gn_emlrtRTEI, true);
    b_st.site = &dl_emlrtRSI;
    xgetrf(&b_st, C->size[0], C->size[1], b_x, C->size[0], ipiv);
    alpha1 = b_x->data[0];
    for (k = 1; k - 1 < (int32_T)((real_T)b_x->size[0] + -1.0); k++) {
      alpha1 *= b_x->data[k + b_x->size[0] * k];
    }

    isodd = false;
    for (k = 0; k <= ipiv->size[1] - 2; k++) {
      if (ipiv->data[k] > 1 + k) {
        isodd = !isodd;
      }
    }

    emxFree_int32_T(&ipiv);
    if (isodd) {
      alpha1 = -alpha1;
    }
  }

  emxInit_real_T(&st, &a, 2, &en_emlrtRTEI, true);
  st.site = &ig_emlrtRSI;
  st.site = &ig_emlrtRSI;
  denom = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
    muDoubleScalarSqrt(muDoubleScalarAbs(alpha1));
  k = x->size[0];
  i42 = m->size[0];
  if (k != i42) {
    emlrtSizeEqCheck1DR2012b(k, i42, &bc_emlrtECI, sp);
  }

  k = x->size[0];
  i42 = m->size[0];
  if (k != i42) {
    emlrtSizeEqCheck1DR2012b(k, i42, &cc_emlrtECI, sp);
  }

  st.site = &jg_emlrtRSI;
  invpd(&st, C, b_x);
  st.site = &jg_emlrtRSI;
  k = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity_real_T(&st, a, k, &en_emlrtRTEI);
  loop_ub = x->size[0];
  for (k = 0; k < loop_ub; k++) {
    a->data[a->size[0] * k] = x->data[k] - m->data[k];
  }

  b_st.site = &tc_emlrtRSI;
  if (!(a->size[1] == b_x->size[0])) {
    if ((a->size[1] == 1) || ((b_x->size[0] == 1) && (b_x->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &c_x, 2, &si_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b_x->size[0] == 1)) {
    k = c_x->size[0] * c_x->size[1];
    c_x->size[0] = 1;
    c_x->size[1] = b_x->size[1];
    emxEnsureCapacity_real_T(&st, c_x, k, &en_emlrtRTEI);
    loop_ub = b_x->size[1];
    for (k = 0; k < loop_ub; k++) {
      c_x->data[c_x->size[0] * k] = 0.0;
      b_loop_ub = a->size[1];
      for (i42 = 0; i42 < b_loop_ub; i42++) {
        c_x->data[c_x->size[0] * k] += a->data[a->size[0] * i42] * b_x->data[i42
          + b_x->size[0] * k];
      }
    }
  } else {
    b_st.site = &sc_emlrtRSI;
    if ((a->size[1] == 0) || (b_x->size[0] == 0) || (b_x->size[1] == 0)) {
      k = c_x->size[0] * c_x->size[1];
      c_x->size[0] = 1;
      c_x->size[1] = b_x->size[1];
      emxEnsureCapacity_real_T(&b_st, c_x, k, &en_emlrtRTEI);
      loop_ub = b_x->size[1];
      for (k = 0; k < loop_ub; k++) {
        c_x->data[k] = 0.0;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)b_x->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)1;
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)1;
      k = c_x->size[0] * c_x->size[1];
      c_x->size[0] = 1;
      c_x->size[1] = b_x->size[1];
      emxEnsureCapacity_real_T(&c_st, c_x, k, &j_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b_x->data[0], &ldb_t, &beta1, &c_x->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b_x);
  k = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity_real_T(sp, a, k, &fn_emlrtRTEI);
  loop_ub = x->size[0];
  for (k = 0; k < loop_ub; k++) {
    a->data[a->size[0] * k] = x->data[k] - m->data[k];
  }

  for (k = 0; k < 2; k++) {
    d_x[k] = c_x->size[k];
    b_a[k] = a->size[k];
  }

  if ((d_x[0] != b_a[0]) || (d_x[1] != b_a[1])) {
    emlrtSizeEqCheckNDR2012b(&d_x[0], &b_a[0], &dc_emlrtECI, sp);
  }

  st.site = &jg_emlrtRSI;
  loop_ub = c_x->size[0] * c_x->size[1] - 1;
  k = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  emxEnsureCapacity_real_T(&st, c_x, k, &si_emlrtRTEI);
  for (k = 0; k <= loop_ub; k++) {
    c_x->data[k] *= a->data[k];
  }

  emxFree_real_T(&a);
  b_st.site = &wb_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  if (c_x->size[1] == 0) {
    alpha1 = 0.0;
  } else {
    d_st.site = &y_emlrtRSI;
    alpha1 = colMajorFlatIter(&d_st, c_x, c_x->size[1]);
  }

  emxFree_real_T(&c_x);

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &kg_emlrtRSI;
  if (denom < 0.0) {
    b_st.site = &pg_emlrtRSI;
    g_error(&b_st);
  }

  p = -0.5 * alpha1 - muDoubleScalarLog(denom);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return p;
}

void lnpdfmvn(const emlrtStack *sp, real_T x, real_T m, real_T C, real_T p_data[],
              int32_T p_size[1])
{
  emxArray_real_T *b;
  real_T a;
  real_T x_data[1];
  int32_T x_size[2];
  int32_T i22;
  real_T b_x;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b, 2, &ri_emlrtRTEI, true);

  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  a = x - m;
  st.site = &jg_emlrtRSI;
  b_invpd(&st, C, x_data, x_size);
  i22 = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b, i22, &ri_emlrtRTEI);
  b->data[0] = x_data[0];
  b_x = x - m;
  loop_ub = b->size[0] * b->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    x_data[i22] = a * b->data[i22] * b_x;
  }

  emxFree_real_T(&b);

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  p_size[0] = 1;
  p_data[0] = -0.5 * x_data[0] - muDoubleScalarLog(2.5066282746310002 *
    muDoubleScalarSqrt(muDoubleScalarAbs(C)));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (lnpdfmvn.c) */

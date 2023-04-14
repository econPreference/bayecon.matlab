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
#include "Recursive_BVAR.h"
#include "lnpdfmvn.h"
#include "Recursive_BVAR_emxutil.h"
#include "error.h"
#include "sum.h"
#include "invpd.h"
#include "mpower.h"
#include "det.h"
#include "Recursive_BVAR_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo gj_emlrtRSI = { 8,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 9,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 14, /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pathName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 9,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 9,/* lineNo */
  32,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 9,/* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 9,/* lineNo */
  21,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  15,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  33,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { 2,  /* nDims */
  9,                                   /* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  9,                                   /* lineNo */
  15,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 2,  /* nDims */
  9,                                   /* lineNo */
  33,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

/* Function Definitions */
real_T b_lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x, const
                  emxArray_real_T *m, const emxArray_real_T *C)
{
  real_T p;
  int32_T n;
  emxArray_real_T *a;
  emxArray_real_T *b;
  real_T alpha1;
  real_T denom;
  int32_T i40;
  emxArray_real_T *r11;
  int32_T loop_ub;
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
  emxArray_real_T *r12;
  int32_T iv37[2];
  int32_T b_a[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(x->size[0], x->size[1]);
  }

  emxInit_real_T(sp, &a, 2, &pi_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &ti_emlrtRTEI, true);
  st.site = &gj_emlrtRSI;
  alpha1 = det(&st, C);
  st.site = &gj_emlrtRSI;
  st.site = &gj_emlrtRSI;
  denom = mpower(&st, 6.2831853071795862, (real_T)n / 2.0) * muDoubleScalarSqrt
    (muDoubleScalarAbs(alpha1));
  i40 = x->size[1];
  if (1 != i40) {
    emlrtDimSizeEqCheckR2012b(1, i40, &kb_emlrtECI, sp);
  }

  i40 = x->size[0];
  n = m->size[0];
  if (i40 != n) {
    emlrtSizeEqCheck1DR2012b(i40, n, &hb_emlrtECI, sp);
  }

  i40 = x->size[1];
  if (1 != i40) {
    emlrtDimSizeEqCheckR2012b(1, i40, &lb_emlrtECI, sp);
  }

  i40 = x->size[0];
  n = m->size[0];
  if (i40 != n) {
    emlrtSizeEqCheck1DR2012b(i40, n, &ib_emlrtECI, sp);
  }

  st.site = &hj_emlrtRSI;
  invpd(&st, C, b);
  st.site = &hj_emlrtRSI;
  n = x->size[0];
  i40 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = n;
  emxEnsureCapacity_real_T(&st, a, i40, &pi_emlrtRTEI);
  for (i40 = 0; i40 < n; i40++) {
    a->data[a->size[0] * i40] = x->data[i40] - m->data[i40];
  }

  b_st.site = &le_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if ((a->size[1] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &r11, 2, &si_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i40 = r11->size[0] * r11->size[1];
    r11->size[0] = 1;
    r11->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, r11, i40, &pi_emlrtRTEI);
    loop_ub = b->size[1];
    for (i40 = 0; i40 < loop_ub; i40++) {
      r11->data[r11->size[0] * i40] = 0.0;
      b_loop_ub = a->size[1];
      for (n = 0; n < b_loop_ub; n++) {
        r11->data[r11->size[0] * i40] += a->data[a->size[0] * n] * b->data[n +
          b->size[0] * i40];
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((a->size[1] == 0) || (b->size[0] == 0) || (b->size[1] == 0)) {
      i40 = r11->size[0] * r11->size[1];
      r11->size[0] = 1;
      r11->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&b_st, r11, i40, &pi_emlrtRTEI);
      loop_ub = b->size[1];
      for (i40 = 0; i40 < loop_ub; i40++) {
        r11->data[i40] = 0.0;
      }
    } else {
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)1;
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)1;
      i40 = r11->size[0] * r11->size[1];
      r11->size[0] = 1;
      r11->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, r11, i40, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &r11->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b);
  n = x->size[0];
  i40 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = n;
  emxEnsureCapacity_real_T(sp, a, i40, &qi_emlrtRTEI);
  for (i40 = 0; i40 < n; i40++) {
    a->data[a->size[0] * i40] = x->data[i40] - m->data[i40];
  }

  for (i40 = 0; i40 < 2; i40++) {
    iv37[i40] = r11->size[i40];
    b_a[i40] = a->size[i40];
  }

  emxInit_real_T(sp, &r12, 2, &ri_emlrtRTEI, true);
  if ((iv37[0] != b_a[0]) || (iv37[1] != b_a[1])) {
    emlrtSizeEqCheckNDR2012b(&iv37[0], &b_a[0], &jb_emlrtECI, sp);
  }

  i40 = r12->size[0] * r12->size[1];
  r12->size[0] = 1;
  r12->size[1] = r11->size[1];
  emxEnsureCapacity_real_T(sp, r12, i40, &ri_emlrtRTEI);
  loop_ub = r11->size[0] * r11->size[1];
  for (i40 = 0; i40 < loop_ub; i40++) {
    r12->data[i40] = r11->data[i40] * a->data[i40];
  }

  emxFree_real_T(&a);
  emxFree_real_T(&r11);
  st.site = &hj_emlrtRSI;
  alpha1 = c_sum(&st, r12);

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &ij_emlrtRSI;
  emxFree_real_T(&r12);
  if (denom < 0.0) {
    b_st.site = &kj_emlrtRSI;
    k_error(&b_st);
  }

  p = -0.5 * alpha1 - muDoubleScalarLog(denom);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return p;
}

real_T lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x, const
                emxArray_real_T *m, const emxArray_real_T *C)
{
  real_T p;
  emxArray_real_T *a;
  emxArray_real_T *b;
  real_T alpha1;
  real_T denom;
  int32_T i35;
  int32_T i36;
  int32_T loop_ub;
  emxArray_real_T *r9;
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
  emxArray_real_T *r10;
  int32_T iv36[2];
  int32_T b_a[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &pi_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &ti_emlrtRTEI, true);

  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &gj_emlrtRSI;
  alpha1 = det(&st, C);
  st.site = &gj_emlrtRSI;
  st.site = &gj_emlrtRSI;
  denom = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
    muDoubleScalarSqrt(muDoubleScalarAbs(alpha1));
  i35 = x->size[0];
  i36 = m->size[0];
  if (i35 != i36) {
    emlrtSizeEqCheck1DR2012b(i35, i36, &hb_emlrtECI, sp);
  }

  i35 = x->size[0];
  i36 = m->size[0];
  if (i35 != i36) {
    emlrtSizeEqCheck1DR2012b(i35, i36, &ib_emlrtECI, sp);
  }

  st.site = &hj_emlrtRSI;
  invpd(&st, C, b);
  st.site = &hj_emlrtRSI;
  i35 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity_real_T(&st, a, i35, &pi_emlrtRTEI);
  loop_ub = x->size[0];
  for (i35 = 0; i35 < loop_ub; i35++) {
    a->data[a->size[0] * i35] = x->data[i35] - m->data[i35];
  }

  b_st.site = &le_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if ((a->size[1] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &r9, 2, &si_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i35 = r9->size[0] * r9->size[1];
    r9->size[0] = 1;
    r9->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, r9, i35, &pi_emlrtRTEI);
    loop_ub = b->size[1];
    for (i35 = 0; i35 < loop_ub; i35++) {
      r9->data[r9->size[0] * i35] = 0.0;
      b_loop_ub = a->size[1];
      for (i36 = 0; i36 < b_loop_ub; i36++) {
        r9->data[r9->size[0] * i35] += a->data[a->size[0] * i36] * b->data[i36 +
          b->size[0] * i35];
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((a->size[1] == 0) || (b->size[0] == 0) || (b->size[1] == 0)) {
      i35 = r9->size[0] * r9->size[1];
      r9->size[0] = 1;
      r9->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&b_st, r9, i35, &pi_emlrtRTEI);
      loop_ub = b->size[1];
      for (i35 = 0; i35 < loop_ub; i35++) {
        r9->data[i35] = 0.0;
      }
    } else {
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)1;
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)1;
      i35 = r9->size[0] * r9->size[1];
      r9->size[0] = 1;
      r9->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, r9, i35, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &r9->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b);
  i35 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity_real_T(sp, a, i35, &qi_emlrtRTEI);
  loop_ub = x->size[0];
  for (i35 = 0; i35 < loop_ub; i35++) {
    a->data[a->size[0] * i35] = x->data[i35] - m->data[i35];
  }

  for (i35 = 0; i35 < 2; i35++) {
    iv36[i35] = r9->size[i35];
    b_a[i35] = a->size[i35];
  }

  emxInit_real_T(sp, &r10, 2, &ri_emlrtRTEI, true);
  if ((iv36[0] != b_a[0]) || (iv36[1] != b_a[1])) {
    emlrtSizeEqCheckNDR2012b(&iv36[0], &b_a[0], &jb_emlrtECI, sp);
  }

  i35 = r10->size[0] * r10->size[1];
  r10->size[0] = 1;
  r10->size[1] = r9->size[1];
  emxEnsureCapacity_real_T(sp, r10, i35, &ri_emlrtRTEI);
  loop_ub = r9->size[0] * r9->size[1];
  for (i35 = 0; i35 < loop_ub; i35++) {
    r10->data[i35] = r9->data[i35] * a->data[i35];
  }

  emxFree_real_T(&a);
  emxFree_real_T(&r9);
  st.site = &hj_emlrtRSI;
  alpha1 = c_sum(&st, r10);

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &ij_emlrtRSI;
  emxFree_real_T(&r10);
  if (denom < 0.0) {
    b_st.site = &kj_emlrtRSI;
    k_error(&b_st);
  }

  p = -0.5 * alpha1 - muDoubleScalarLog(denom);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return p;
}

/* End of code generation (lnpdfmvn.c) */

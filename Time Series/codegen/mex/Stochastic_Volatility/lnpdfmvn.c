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
#include "Stochastic_Volatility.h"
#include "lnpdfmvn.h"
#include "Stochastic_Volatility_emxutil.h"
#include "error.h"
#include "combineVectorElements.h"
#include "invpd.h"
#include "mpower.h"
#include "xgetrf.h"
#include "Stochastic_Volatility_mexutil.h"
#include "Stochastic_Volatility_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo wj_emlrtRSI = { 8,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 9,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 14, /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 21, /* lineNo */
  "det",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 9,/* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = { 21,/* lineNo */
  2,                                   /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = { 9,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = { 9,/* lineNo */
  32,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = { 9,/* lineNo */
  21,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  15,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  33,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { 2,  /* nDims */
  9,                                   /* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo om_emlrtRTEI = { 12,/* lineNo */
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
  int32_T i41;
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
  st.site = &wj_emlrtRSI;
  isodd = (C->size[0] == C->size[1]);
  if (!isodd) {
    emlrtErrorWithMessageIdR2018a(&st, &om_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  emxInit_real_T1(&st, &b_x, 2, &wk_emlrtRTEI, true);
  if ((C->size[0] == 0) || (C->size[1] == 0)) {
    alpha1 = 1.0;
  } else {
    k = b_x->size[0] * b_x->size[1];
    b_x->size[0] = C->size[0];
    b_x->size[1] = C->size[1];
    emxEnsureCapacity_real_T1(&st, b_x, k, &tk_emlrtRTEI);
    loop_ub = C->size[0] * C->size[1];
    for (k = 0; k < loop_ub; k++) {
      b_x->data[k] = C->data[k];
    }

    emxInit_int32_T1(&st, &ipiv, 2, &xk_emlrtRTEI, true);
    b_st.site = &gk_emlrtRSI;
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

  emxInit_real_T1(&st, &a, 2, &uk_emlrtRTEI, true);
  st.site = &wj_emlrtRSI;
  st.site = &wj_emlrtRSI;
  denom = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
    muDoubleScalarSqrt(muDoubleScalarAbs(alpha1));
  k = x->size[0];
  i41 = m->size[0];
  if (k != i41) {
    emlrtSizeEqCheck1DR2012b(k, i41, &vb_emlrtECI, sp);
  }

  k = x->size[0];
  i41 = m->size[0];
  if (k != i41) {
    emlrtSizeEqCheck1DR2012b(k, i41, &wb_emlrtECI, sp);
  }

  st.site = &xj_emlrtRSI;
  invpd(&st, C, b_x);
  st.site = &xj_emlrtRSI;
  k = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity_real_T1(&st, a, k, &uk_emlrtRTEI);
  loop_ub = x->size[0];
  for (k = 0; k < loop_ub; k++) {
    a->data[a->size[0] * k] = x->data[k] - m->data[k];
  }

  b_st.site = &ec_emlrtRSI;
  if (!(a->size[1] == b_x->size[0])) {
    if ((a->size[1] == 1) || ((b_x->size[0] == 1) && (b_x->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T1(&st, &c_x, 2, &ok_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b_x->size[0] == 1)) {
    k = c_x->size[0] * c_x->size[1];
    c_x->size[0] = 1;
    c_x->size[1] = b_x->size[1];
    emxEnsureCapacity_real_T1(&st, c_x, k, &uk_emlrtRTEI);
    loop_ub = b_x->size[1];
    for (k = 0; k < loop_ub; k++) {
      c_x->data[c_x->size[0] * k] = 0.0;
      b_loop_ub = a->size[1];
      for (i41 = 0; i41 < b_loop_ub; i41++) {
        c_x->data[c_x->size[0] * k] += a->data[a->size[0] * i41] * b_x->data[i41
          + b_x->size[0] * k];
      }
    }
  } else {
    b_st.site = &dc_emlrtRSI;
    if ((a->size[1] == 0) || (b_x->size[0] == 0) || (b_x->size[1] == 0)) {
      k = c_x->size[0] * c_x->size[1];
      c_x->size[0] = 1;
      c_x->size[1] = b_x->size[1];
      emxEnsureCapacity_real_T1(&b_st, c_x, k, &uk_emlrtRTEI);
      loop_ub = b_x->size[1];
      for (k = 0; k < loop_ub; k++) {
        c_x->data[k] = 0.0;
      }
    } else {
      c_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
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
      emxEnsureCapacity_real_T1(&c_st, c_x, k, &e_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b_x->data[0], &ldb_t, &beta1, &c_x->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b_x);
  k = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity_real_T1(sp, a, k, &vk_emlrtRTEI);
  loop_ub = x->size[0];
  for (k = 0; k < loop_ub; k++) {
    a->data[a->size[0] * k] = x->data[k] - m->data[k];
  }

  for (k = 0; k < 2; k++) {
    d_x[k] = c_x->size[k];
    b_a[k] = a->size[k];
  }

  if ((d_x[0] != b_a[0]) || (d_x[1] != b_a[1])) {
    emlrtSizeEqCheckNDR2012b(&d_x[0], &b_a[0], &xb_emlrtECI, sp);
  }

  st.site = &xj_emlrtRSI;
  loop_ub = c_x->size[0] * c_x->size[1] - 1;
  k = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  emxEnsureCapacity_real_T1(&st, c_x, k, &ok_emlrtRTEI);
  for (k = 0; k <= loop_ub; k++) {
    c_x->data[k] *= a->data[k];
  }

  emxFree_real_T(&a);
  b_st.site = &le_emlrtRSI;
  c_st.site = &me_emlrtRSI;
  if (c_x->size[1] == 0) {
    alpha1 = 0.0;
  } else {
    d_st.site = &ne_emlrtRSI;
    alpha1 = colMajorFlatIter(&d_st, c_x, c_x->size[1]);
  }

  emxFree_real_T(&c_x);

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &yj_emlrtRSI;
  if (denom < 0.0) {
    b_st.site = &hc_emlrtRSI;
    c_error(&b_st);
  }

  p = -0.5 * alpha1 - muDoubleScalarLog(denom);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return p;
}

void lnpdfmvn(const emlrtStack *sp, real_T x, real_T m, real_T C, real_T p_data[],
              int32_T p_size[1])
{
  const mxArray *y;
  const mxArray *m10;
  static const int32_T iv38[2] = { 1, 18 };

  real_T d;
  real_T Hinv;
  static const int32_T iv39[2] = { 1, 20 };

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

  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &wj_emlrtRSI;
  b_st.site = &mf_emlrtRSI;
  c_st.site = &nf_emlrtRSI;
  d_st.site = &rh_emlrtRSI;
  st.site = &wj_emlrtRSI;
  st.site = &xj_emlrtRSI;

  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error) */
  /* 대칭, 양정부호 행렬의 역행렬을 LU분해보다 빠르고 정확하게 계산해 줍니다. */
  b_st.site = &ud_emlrtRSI;

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
  if (muDoubleScalarAbs(C - C) > 0.0) {
    c_st.site = &wd_emlrtRSI;
    y = NULL;
    m10 = emlrtCreateCharArray(2, iv38);
    emlrtInitCharArrayR2013a(&c_st, 18, m10, &cv1[0]);
    emlrtAssign(&y, m10);
    d_st.site = &yl_emlrtRSI;
    m_error(&d_st, y, &ab_emlrtMCI);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  /*  max diagonal entry */
  /*  max off-diagonal entry */
  d = muDoubleScalarAbs(C) + muDoubleScalarAbs(C - C);
  if ((d < 1.0) || muDoubleScalarIsNaN(d)) {
    Hinv = 1.0;
  } else {
    Hinv = d;
  }

  c_st.site = &be_emlrtRSI;

  /*  initialize d and L */
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  /*  column index: all columns to left of diagonal */
  /*  d(K) doesn't work in case K is empty */
  /*  C(j,j) in book */
  d = muDoubleScalarAbs(C);
  Hinv *= 2.2204460492503131E-16;
  if ((d < Hinv) || (muDoubleScalarIsNaN(d) && (!muDoubleScalarIsNaN(Hinv)))) {
    d = Hinv;
  }

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  c_st.site = &ie_emlrtRSI;
  Hinv = muDoubleScalarSqrt(d);

  /*  L = L*diag(sqrt(d)) bad in sparse case */
  b_st.site = &td_emlrtRSI;

  /* INVUPTR Inverse of an upper triangular matrix  */
  /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
  /* matrix T.  The output matrix T contains the inverse of T.  */
  /* This program implements Algorithm 4.2.2 of the book. */
  /* Input  : Matrix T  */
  /* output : Matrix T */
  if (Hinv == 0.0) {
    y = NULL;
    m10 = emlrtCreateCharArray(2, iv39);
    emlrtInitCharArrayR2013a(&b_st, 20, m10, &cv0[0]);
    emlrtAssign(&y, m10);
    c_st.site = &cl_emlrtRSI;
    disp(&c_st, y, &cb_emlrtMCI);
  } else {
    Hinv = 1.0 / Hinv;
  }

  st.site = &xj_emlrtRSI;
  b_st.site = &le_emlrtRSI;
  c_st.site = &me_emlrtRSI;
  d_st.site = &ne_emlrtRSI;

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &yj_emlrtRSI;
  p_size[0] = 1;
  p_data[0] = -0.5 * ((x - m) * ((Hinv * Hinv + Hinv * Hinv) / 2.0) * (x - m)) -
    muDoubleScalarLog(2.5066282746310002 * muDoubleScalarSqrt(muDoubleScalarAbs
    (C)));
}

/* End of code generation (lnpdfmvn.c) */

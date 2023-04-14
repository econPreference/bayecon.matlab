/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfwishart.c
 *
 * Code generation for function 'lnpdfwishart'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "lnpdfwishart.h"
#include "Recursive_BVAR_emxutil.h"
#include "logMvGamma.h"
#include "error.h"
#include "det.h"
#include "mpower.h"
#include "inv.h"
#include "Recursive_BVAR_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo lj_emlrtRSI = { 5,  /* lineNo */
  "lnpdfwishart",                      /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfwishart.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 6,  /* lineNo */
  "lnpdfwishart",                      /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfwishart.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 7,  /* lineNo */
  "lnpdfwishart",                      /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfwishart.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 8,  /* lineNo */
  "lnpdfwishart",                      /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfwishart.m"/* pathName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 8,/* lineNo */
  18,                                  /* colNo */
  "lnpdfwishart",                      /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfwishart.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 5,/* lineNo */
  1,                                   /* colNo */
  "lnpdfwishart",                      /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\lnpdfwishart.m"/* pName */
};

static emlrtRTEInfo el_emlrtRTEI = { 11,/* lineNo */
  15,                                  /* colNo */
  "trace",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\trace.m"/* pName */
};

/* Function Definitions */
real_T lnpdfwishart(const emlrtStack *sp, const emxArray_real_T *X, const
                    emxArray_real_T *R, real_T v)
{
  real_T val;
  emxArray_real_T *R_inv;
  real_T alpha1;
  real_T x;
  real_T log_deno;
  emxArray_real_T *a;
  int32_T k;
  int32_T loop_ub;
  char_T TRANSA;
  char_T TRANSB;
  int32_T b_loop_ub;
  int32_T i37;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  boolean_T b3;
  int32_T c_loop_ub;
  ptrdiff_t k_t;
  int32_T i38;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
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
  emxInit_real_T(sp, &R_inv, 2, &xi_emlrtRTEI, true);

  /*  Compute log of Wishart dist pdf */
  st.site = &lj_emlrtRSI;
  inv(&st, R, R_inv);
  st.site = &mj_emlrtRSI;
  alpha1 = det(&st, X);
  st.site = &mj_emlrtRSI;
  x = mpower(&st, alpha1, ((v - (real_T)X->size[0]) - 1.0) / 2.0);
  st.site = &mj_emlrtRSI;
  if (x < 0.0) {
    b_st.site = &kj_emlrtRSI;
    k_error(&b_st);
  }

  st.site = &nj_emlrtRSI;
  st.site = &nj_emlrtRSI;
  alpha1 = det(&st, R);
  st.site = &nj_emlrtRSI;
  if (alpha1 < 0.0) {
    b_st.site = &kj_emlrtRSI;
    k_error(&b_st);
  }

  st.site = &nj_emlrtRSI;
  log_deno = (v * (real_T)X->size[0] / 2.0 * 0.69314718055994529 + v / 2.0 *
              muDoubleScalarLog(alpha1)) + logMvGamma(&st, v / 2.0, X->size[0]);
  st.site = &oj_emlrtRSI;
  b_st.site = &le_emlrtRSI;
  if (!(R_inv->size[1] == X->size[0])) {
    if (((R_inv->size[0] == 1) && (R_inv->size[1] == 1)) || ((X->size[0] == 1) &&
         (X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &a, 2, &wi_emlrtRTEI, true);
  if ((R_inv->size[1] == 1) || (X->size[0] == 1)) {
    k = a->size[0] * a->size[1];
    a->size[0] = R_inv->size[0];
    a->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, a, k, &wi_emlrtRTEI);
    loop_ub = R_inv->size[0];
    for (k = 0; k < loop_ub; k++) {
      b_loop_ub = X->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        a->data[k + a->size[0] * i37] = 0.0;
        c_loop_ub = R_inv->size[1];
        for (i38 = 0; i38 < c_loop_ub; i38++) {
          a->data[k + a->size[0] * i37] += R_inv->data[k + R_inv->size[0] * i38]
            * X->data[i38 + X->size[0] * i37];
        }
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((R_inv->size[0] == 0) || (R_inv->size[1] == 0) || (X->size[0] == 0) ||
        (X->size[1] == 0)) {
      k = a->size[0] * a->size[1];
      a->size[0] = R_inv->size[0];
      a->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&b_st, a, k, &wi_emlrtRTEI);
      loop_ub = R_inv->size[0] * X->size[1];
      for (k = 0; k < loop_ub; k++) {
        a->data[k] = 0.0;
      }
    } else {
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)R_inv->size[0];
      n_t = (ptrdiff_t)X->size[1];
      k_t = (ptrdiff_t)R_inv->size[1];
      lda_t = (ptrdiff_t)R_inv->size[0];
      ldb_t = (ptrdiff_t)R_inv->size[1];
      ldc_t = (ptrdiff_t)R_inv->size[0];
      k = a->size[0] * a->size[1];
      a->size[0] = R_inv->size[0];
      a->size[1] = X->size[1];
      emxEnsureCapacity_real_T(&c_st, a, k, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &R_inv->data[0], &lda_t,
            &X->data[0], &ldb_t, &beta1, &a->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&R_inv);
  st.site = &oj_emlrtRSI;
  b3 = (a->size[0] == a->size[1]);
  if (!b3) {
    emlrtErrorWithMessageIdR2018a(&st, &el_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  alpha1 = 0.0;
  for (k = 0; k < a->size[0]; k++) {
    alpha1 += a->data[k + a->size[0] * k];
  }

  emxFree_real_T(&a);
  val = (muDoubleScalarLog(x) - log_deno) + -0.5 * alpha1;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return val;
}

/* End of code generation (lnpdfwishart.c) */

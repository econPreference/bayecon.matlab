/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xpotrf.c
 *
 * Code generation for function 'xpotrf'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "xpotrf.h"
#include "error.h"
#include "Stochastic_Volatility_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo vc_emlrtRSI = { 77, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 73, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 37, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 36, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 13, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

/* Function Definitions */
int32_T xpotrf(const emlrtStack *sp, int32_T n, emxArray_real_T *A, int32_T lda)
{
  int32_T info;
  ptrdiff_t info_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &yc_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  b_st.site = &wc_emlrtRSI;
  info_t = LAPACKE_dpotrf_work(102, 'U', (ptrdiff_t)n, &A->data[0], (ptrdiff_t)
    lda);
  info = (int32_T)info_t;
  b_st.site = &vc_emlrtRSI;
  if (info < 0) {
    if (info == -1010) {
      c_st.site = &qb_emlrtRSI;
      error(&c_st);
    } else {
      c_st.site = &rb_emlrtRSI;
      d_error(&c_st, info);
    }
  }

  return info;
}

/* End of code generation (xpotrf.c) */

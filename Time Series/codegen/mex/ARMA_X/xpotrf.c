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
#include "ARMA_X.h"
#include "xpotrf.h"
#include "error1.h"
#include "ARMA_X_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo ok_emlrtRSI = { 77, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 73, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 37, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 36, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 13, /* lineNo */
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
  st.site = &sk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &rk_emlrtRSI;
  b_st.site = &qk_emlrtRSI;
  b_st.site = &pk_emlrtRSI;
  info_t = LAPACKE_dpotrf_work(102, 'U', (ptrdiff_t)n, &A->data[0], (ptrdiff_t)
    lda);
  info = (int32_T)info_t;
  b_st.site = &ok_emlrtRSI;
  if (info < 0) {
    if (info == -1010) {
      c_st.site = &tf_emlrtRSI;
      d_error(&c_st);
    } else {
      c_st.site = &uf_emlrtRSI;
      k_error(&c_st, info);
    }
  }

  return info;
}

/* End of code generation (xpotrf.c) */

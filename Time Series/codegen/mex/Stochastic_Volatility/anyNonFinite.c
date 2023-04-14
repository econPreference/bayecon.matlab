/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * anyNonFinite.c
 *
 * Code generation for function 'anyNonFinite'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo xf_emlrtRSI = { 28, /* lineNo */
  "anyNonFinite",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\anyNonFinite.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 36, /* lineNo */
  "vAllOrAny",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\vAllOrAny.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 96, /* lineNo */
  "vAllOrAny",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\vAllOrAny.m"/* pathName */
};

/* Function Definitions */
boolean_T anyNonFinite(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T p;
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &yf_emlrtRSI;
  nx = x->size[0] * x->size[1];
  p = true;
  c_st.site = &ag_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    d_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < nx; k++) {
    if (p && ((!muDoubleScalarIsInf(x->data[k])) && (!muDoubleScalarIsNaN
          (x->data[k])))) {
      p = true;
    } else {
      p = false;
    }
  }

  return !p;
}

/* End of code generation (anyNonFinite.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "sum.h"
#include "combineVectorElements.h"
#include "isequal.h"
#include "eml_int_forloop_overflow_check.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRTEInfo fm_emlrtRTEI = { 22,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtRTEInfo gm_emlrtRTEI = { 54,/* lineNo */
  9,                                   /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

/* Function Definitions */
real_T b_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &le_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &fm_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &me_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    c_st.site = &ne_emlrtRSI;
    y = colMajorFlatIter(&c_st, x, x->size[1]);
  }

  return y;
}

real_T c_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &le_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &fm_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &me_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    c_st.site = &ne_emlrtRSI;
    y = x->data[0];
    d_st.site = &pe_emlrtRSI;
    overflow = ((!(2 > x->size[0])) && (x->size[0] > 2147483646));
    if (overflow) {
      e_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= x->size[0]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T b2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &le_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &fm_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b2 = !isequal(x);
  if (!b2) {
    emlrtErrorWithMessageIdR2018a(&st, &gm_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty",
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &me_emlrtRSI;
  combineVectorElements(&b_st, x, y);
}

/* End of code generation (sum.c) */

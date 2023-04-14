/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "abs.h"
#include "ARMA_X_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
static emlrtRSInfo ub_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 74, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo re_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  uint32_T uv0[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0] * x->size[1];
  for (k = 0; k < 2; k++) {
    uv0[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity_real_T(&st, y, k, &re_emlrtRTEI);
  b_st.site = &vb_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T x_idx_0;
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_idx_0 = (uint32_T)x->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)x_idx_0;
  emxEnsureCapacity_real_T1(&st, y, k, &re_emlrtRTEI);
  b_st.site = &vb_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void d_abs(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_real_T *y)
{
  uint32_T x_idx_0;
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_idx_0 = (uint32_T)x->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)x_idx_0;
  emxEnsureCapacity_real_T1(&st, y, k, &re_emlrtRTEI);
  b_st.site = &vb_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = muDoubleScalarHypot(x->data[k].re, x->data[k].im);
  }
}

/* End of code generation (abs.c) */

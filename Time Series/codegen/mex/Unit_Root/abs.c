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
#include "abs.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo mc_emlrtRSI = { 18, /* lineNo */
  "abs",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 75, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 18,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0] * x->size[1];
  k = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, y, k, &tf_emlrtRTEI);
  b_st.site = &nc_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0];
  k = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, y, k, &tf_emlrtRTEI);
  b_st.site = &nc_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void d_abs(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0];
  k = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, y, k, &tf_emlrtRTEI);
  b_st.site = &nc_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = muDoubleScalarHypot(x->data[k].re, x->data[k].im);
  }
}

/* End of code generation (abs.c) */

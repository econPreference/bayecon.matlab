/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "power.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = { 64, /* lineNo */
  "fltpower",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 66, /* lineNo */
  "fltpower",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 66, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 188,/* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 86, /* lineNo */
  "fltpower_domain_error",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 64,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

/* Function Definitions */
void b_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &lb_emlrtRSI;
  nx = y->size[0];
  y->size[0] = a->size[0];
  emxEnsureCapacity_real_T(&b_st, y, nx, &ge_emlrtRTEI);
  c_st.site = &nb_emlrtRSI;
  nx = a->size[0];
  d_st.site = &ob_emlrtRSI;
  if ((1 <= a->size[0]) && (a->size[0] > 2147483646)) {
    e_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

void power(const emlrtStack *sp, const emxArray_real_T *a, real_T b,
           emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  boolean_T p;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &lb_emlrtRSI;
  nx = y->size[0];
  y->size[0] = a->size[0];
  emxEnsureCapacity_real_T(&b_st, y, nx, &ge_emlrtRTEI);
  c_st.site = &nb_emlrtRSI;
  nx = a->size[0];
  d_st.site = &ob_emlrtRSI;
  if ((1 <= a->size[0]) && (a->size[0] > 2147483646)) {
    e_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = muDoubleScalarPower(a->data[k], b);
  }

  b_st.site = &mb_emlrtRSI;
  if (a->size[0] == 1) {
    if ((a->data[0] < 0.0) && (!muDoubleScalarIsNaN(b)) && (muDoubleScalarFloor
         (b) != b)) {
      p = true;
    } else {
      p = false;
    }
  } else if ((!muDoubleScalarIsNaN(b)) && (muDoubleScalarFloor(b) != b)) {
    c_st.site = &qb_emlrtRSI;
    d_st.site = &rb_emlrtRSI;
    p = false;
    e_st.site = &sb_emlrtRSI;
    if ((1 <= a->size[0]) && (a->size[0] > 2147483646)) {
      f_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
  } else {
    p = false;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
      "Coder:toolbox:power_domainError", "Coder:toolbox:power_domainError", 0);
  }
}

/* End of code generation (power.c) */

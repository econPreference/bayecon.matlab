/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "sqrt.h"
#include "eml_int_forloop_overflow_check.h"
#include "error1.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
static emlrtRSInfo yj_emlrtRSI = { 15, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 31, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &oc_emlrtRSI;
    b_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

void c_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  boolean_T overflow;
  int32_T k;
  int32_T nx;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = false;
  for (k = 0; k < x->size[0]; k++) {
    if (overflow || (x->data[k] < 0.0)) {
      overflow = true;
    } else {
      overflow = false;
    }
  }

  if (overflow) {
    st.site = &oc_emlrtRSI;
    b_error(&st);
  }

  st.site = &yj_emlrtRSI;
  nx = x->size[0];
  b_st.site = &ak_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

/* End of code generation (sqrt.c) */

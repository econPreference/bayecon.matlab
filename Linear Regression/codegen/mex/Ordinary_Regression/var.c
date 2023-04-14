/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * var.c
 *
 * Code generation for function 'var'
 *
 */

/* Include files */
#include "var.h"
#include "Ordinary_Regression_data.h"
#include "Ordinary_Regression_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo cf_emlrtRSI = {
    9,     /* lineNo */
    "var", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/var.m" /* pathName
                                                                            */
};

static emlrtRSInfo df_emlrtRSI = {
    105,       /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

/* Function Definitions */
real_T var(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const real_T *x_data;
  real_T t;
  real_T xbar;
  real_T y;
  int32_T k;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
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
  x_data = x->data;
  st.site = &cf_emlrtRSI;
  n = x->size[0];
  b_st.site = &gd_emlrtRSI;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else if (x->size[0] == 1) {
    if ((!muDoubleScalarIsInf(x_data[0])) &&
        (!muDoubleScalarIsNaN(x_data[0]))) {
      y = 0.0;
    } else {
      y = rtNaN;
    }
  } else {
    c_st.site = &hd_emlrtRSI;
    d_st.site = &lb_emlrtRSI;
    e_st.site = &mb_emlrtRSI;
    f_st.site = &nb_emlrtRSI;
    xbar = sumMatrixColumns(&f_st, x, x->size[0]);
    xbar /= (real_T)x->size[0];
    y = 0.0;
    c_st.site = &df_emlrtRSI;
    if (x->size[0] > 2147483646) {
      d_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < n; k++) {
      t = x_data[k] - xbar;
      y += t * t;
    }
    y /= (real_T)x->size[0] - 1.0;
  }
  return y;
}

/* End of code generation (var.c) */

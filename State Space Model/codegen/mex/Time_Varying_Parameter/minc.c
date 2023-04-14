/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * minc.c
 *
 * Code generation for function 'minc'
 *
 */

/* Include files */
#include "minc.h"
#include "Time_Varying_Parameter_data.h"
#include "Time_Varying_Parameter_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo di_emlrtRSI = {
    169,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

/* Function Definitions */
real_T minc(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  const real_T *x_data;
  real_T d;
  real_T mn;
  int32_T a;
  int32_T idx;
  int32_T k;
  int32_T last;
  boolean_T exitg1;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  x_data = x->data;
  /*  gauss function */
  st.site = &kg_emlrtRSI;
  b_st.site = &lg_emlrtRSI;
  c_st.site = &mg_emlrtRSI;
  d_st.site = &ng_emlrtRSI;
  e_st.site = &di_emlrtRSI;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      mn = x_data[0];
    } else if ((x_data[0] > x_data[x->size[0] - 1]) ||
               (muDoubleScalarIsNaN(x_data[0]) &&
                (!muDoubleScalarIsNaN(x_data[x->size[0] - 1])))) {
      mn = x_data[x->size[0] - 1];
    } else {
      mn = x_data[0];
    }
  } else {
    f_st.site = &se_emlrtRSI;
    if (!muDoubleScalarIsNaN(x_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &te_emlrtRSI;
      if (x->size[0] > 2147483646) {
        h_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      mn = x_data[0];
    } else {
      f_st.site = &re_emlrtRSI;
      mn = x_data[idx - 1];
      a = idx + 1;
      g_st.site = &ue_emlrtRSI;
      if ((idx + 1 <= x->size[0]) && (x->size[0] > 2147483646)) {
        h_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }
      for (k = a; k <= last; k++) {
        d = x_data[k - 1];
        if (mn > d) {
          mn = d;
        }
      }
    }
  }
  return mn;
}

/* End of code generation (minc.c) */

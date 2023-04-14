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
#include "sum.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_types.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo li_emlrtRSI = {
    99,                 /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

/* Function Definitions */
real_T b_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_x;
  real_T y;
  int32_T b_x;
  int32_T d_x;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &sf_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    d_st.site = &li_emlrtRSI;
    b_x = x->size[1];
    c_x = *x;
    d_x = b_x;
    c_x.size = &d_x;
    c_x.numDimensions = 1;
    e_st.site = &uf_emlrtRSI;
    y = sumMatrixColumns(&e_st, &c_x, x->size[1]);
  }
  return y;
}

real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &sf_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    d_st.site = &tf_emlrtRSI;
    e_st.site = &uf_emlrtRSI;
    y = sumMatrixColumns(&e_st, x, x->size[0]);
  }
  return y;
}

/* End of code generation (sum.c) */

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
#include "Auto_Regression_data.h"
#include "Auto_Regression_types.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRTEInfo l_emlrtRTEI = {
    46,        /* lineNo */
    23,        /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    76,        /* lineNo */
    9,         /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
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
  st.site = &cc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &dc_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    d_st.site = &sc_emlrtRSI;
    b_x = x->size[1];
    c_x = *x;
    d_x = b_x;
    c_x.size = &d_x;
    c_x.numDimensions = 1;
    e_st.site = &gc_emlrtRSI;
    y = sumMatrixColumns(&e_st, &c_x, x->size[1]);
  }
  return y;
}

real_T c_sum(real_T x)
{
  return e_sumColumnB(x);
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &l_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  b_st.site = &dc_emlrtRSI;
  combineVectorElements(&b_st, x, y);
}

/* End of code generation (sum.c) */

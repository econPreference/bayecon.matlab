/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.c
 *
 * Code generation for function 'combineVectorElements'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo oe_emlrtRSI = { 172,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 134,/* lineNo */
  13,                                  /* colNo */
  "combineVectorElements",             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 95,/* lineNo */
  13,                                  /* colNo */
  "combineVectorElements",             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pName */
};

/* Function Definitions */
real_T colMajorFlatIter(const emlrtStack *sp, const emxArray_real_T *x, int32_T
  vlen)
{
  real_T y;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  y = x->data[0];
  st.site = &pe_emlrtRSI;
  if ((!(2 > vlen)) && (vlen > 2147483646)) {
    b_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 2; k <= vlen; k++) {
    y += x->data[k - 1];
  }

  return y;
}

void combineVectorElements(const emlrtStack *sp, const emxArray_real_T *x,
  emxArray_real_T *y)
{
  int32_T vlen;
  int32_T xpageoffset;
  uint32_T sz[2];
  boolean_T overflow;
  int32_T i;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  vlen = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    for (xpageoffset = 0; xpageoffset < 2; xpageoffset++) {
      sz[xpageoffset] = (uint32_T)x->size[xpageoffset];
    }

    xpageoffset = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity_real_T1(sp, y, xpageoffset, &hg_emlrtRTEI);
    i = (int32_T)sz[1];
    for (xpageoffset = 0; xpageoffset < i; xpageoffset++) {
      y->data[xpageoffset] = 0.0;
    }
  } else {
    st.site = &ne_emlrtRSI;
    xpageoffset = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T1(&st, y, xpageoffset, &gg_emlrtRTEI);
    b_st.site = &oe_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      c_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i < x->size[1]; i++) {
      xpageoffset = i * x->size[0];
      y->data[i] = x->data[xpageoffset];
      b_st.site = &pe_emlrtRSI;
      if ((!(2 > vlen)) && (vlen > 2147483646)) {
        c_st.site = &sb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 2; k <= vlen; k++) {
        y->data[i] += x->data[(xpageoffset + k) - 1];
      }
    }
  }
}

/* End of code generation (combineVectorElements.c) */

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
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = { 163,/* lineNo */
  "colMajorFlatIter",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRTEInfo n_emlrtRTEI = { 73,/* lineNo */
  9,                                   /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 43,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "sum",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 124,/* lineNo */
  13,                                  /* colNo */
  "combineVectorElements",             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pName */
};

/* Function Definitions */
real_T b_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &oc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &pc_emlrtRSI;
  return combineVectorElements(&b_st, x);
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T p;
  int32_T vlen;
  uint32_T sz_idx_1;
  int32_T npages;
  int32_T xpageoffset;
  int32_T i;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &oc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  p = false;
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    p = true;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty",
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &pc_emlrtRSI;
  vlen = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    sz_idx_1 = (uint32_T)x->size[1];
    xpageoffset = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)sz_idx_1;
    emxEnsureCapacity_real_T(&b_st, y, xpageoffset, &uf_emlrtRTEI);
    i = (int32_T)sz_idx_1;
    for (xpageoffset = 0; xpageoffset < i; xpageoffset++) {
      y->data[xpageoffset] = 0.0;
    }
  } else {
    c_st.site = &qc_emlrtRSI;
    npages = x->size[1];
    xpageoffset = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&c_st, y, xpageoffset, &vf_emlrtRTEI);
    d_st.site = &rc_emlrtRSI;
    if (x->size[1] > 2147483646) {
      e_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 0; i < npages; i++) {
      xpageoffset = i * x->size[0];
      y->data[i] = x->data[xpageoffset];
      d_st.site = &sc_emlrtRSI;
      if ((2 <= vlen) && (vlen > 2147483646)) {
        e_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (k = 2; k <= vlen; k++) {
        y->data[i] += x->data[(xpageoffset + k) - 1];
      }
    }
  }
}

/* End of code generation (sum.c) */

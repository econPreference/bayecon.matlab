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
#include "Hetero_Regression_data.h"
#include "Hetero_Regression_types.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = {
    46,        /* lineNo */
    23,        /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
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
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T c_x;
  real_T y;
  int32_T b_x;
  int32_T d_x;
  int32_T e_x;
  int32_T f_x;
  int32_T g_x;
  int32_T ib;
  int32_T inb;
  int32_T nfb;
  int32_T nleft;
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
  c_st.site = &mb_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    d_st.site = &yb_emlrtRSI;
    e_st.site = &ob_emlrtRSI;
    if (x->size[1] < 4096) {
      b_x = x->size[1];
      c_x = *x;
      d_x = b_x;
      c_x.size = &d_x;
      c_x.numDimensions = 1;
      f_st.site = &qb_emlrtRSI;
      y = c_sumColumnB(&f_st, &c_x, x->size[1]);
    } else {
      nfb = x->size[1] / 4096;
      inb = nfb << 12;
      nleft = x->size[1] - inb;
      b_x = x->size[1];
      c_x = *x;
      e_x = b_x;
      c_x.size = &e_x;
      c_x.numDimensions = 1;
      y = b_sumColumnB4(&c_x, 1);
      if (2 <= nfb) {
        b_x = x->size[1];
      }
      for (ib = 2; ib <= nfb; ib++) {
        c_x = *x;
        f_x = b_x;
        c_x.size = &f_x;
        c_x.numDimensions = 1;
        y += b_sumColumnB4(&c_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        b_x = x->size[1];
        c_x = *x;
        g_x = b_x;
        c_x.size = &g_x;
        c_x.numDimensions = 1;
        f_st.site = &sb_emlrtRSI;
        y += d_sumColumnB(&f_st, &c_x, nleft, inb + 1);
      }
    }
  }
  return y;
}

real_T c_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T y;
  int32_T ib;
  int32_T inb;
  int32_T nfb;
  int32_T nleft;
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
  c_st.site = &mb_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    d_st.site = &nb_emlrtRSI;
    e_st.site = &ob_emlrtRSI;
    if (x->size[0] < 4096) {
      f_st.site = &qb_emlrtRSI;
      y = c_sumColumnB(&f_st, x, x->size[0]);
    } else {
      nfb = x->size[0] / 4096;
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      y = b_sumColumnB4(x, 1);
      for (ib = 2; ib <= nfb; ib++) {
        y += b_sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        f_st.site = &sb_emlrtRSI;
        y += d_sumColumnB(&f_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  b_st.site = &lb_emlrtRSI;
  combineVectorElements(&b_st, x, y);
}

/* End of code generation (sum.c) */

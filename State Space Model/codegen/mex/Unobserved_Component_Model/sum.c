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
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_emxutil.h"
#include "Unobserved_Component_Model_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo kc_emlrtRSI = {
    53,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pathName
                                                                            */
};

static emlrtRSInfo de_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    41,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = {
    50,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    99,                 /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    76,        /* lineNo */
    9,         /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    46,        /* lineNo */
    23,        /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    20,    /* lineNo */
    1,     /* colNo */
    "sum", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pName
                                                                            */
};

static emlrtRTEInfo af_emlrtRTEI = {
    35,                    /* lineNo */
    20,                    /* colNo */
    "sumMatrixIncludeNaN", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pName */
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
  st.site = &ce_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &de_emlrtRSI;
  c_st.site = &gc_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    d_st.site = &ge_emlrtRSI;
    b_x = x->size[1];
    c_x = *x;
    d_x = b_x;
    c_x.size = &d_x;
    c_x.numDimensions = 1;
    e_st.site = &ic_emlrtRSI;
    y = sumMatrixColumns(&e_st, &c_x, x->size[1]);
  }
  return y;
}

void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T s;
  real_T *y_data;
  int32_T col;
  int32_T ib;
  int32_T inb;
  int32_T ncols;
  int32_T nfb;
  int32_T nleft;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ce_emlrtRSI;
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
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  b_st.site = &de_emlrtRSI;
  c_st.site = &gc_emlrtRSI;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    nfb = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&c_st, y, nfb, &ye_emlrtRTEI);
    y_data = y->data;
    ncols = x->size[1];
    for (nfb = 0; nfb < ncols; nfb++) {
      y_data[nfb] = 0.0;
    }
  } else {
    d_st.site = &hc_emlrtRSI;
    e_st.site = &ic_emlrtRSI;
    nfb = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&e_st, y, nfb, &af_emlrtRTEI);
    y_data = y->data;
    ncols = x->size[1] - 1;
    if (x->size[0] < 4096) {
      f_st.site = &ee_emlrtRSI;
      if (x->size[1] > 2147483646) {
        g_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (col = 0; col <= ncols; col++) {
        f_st.site = &jc_emlrtRSI;
        y_data[col] = sumColumnB(&f_st, x, col + 1, x->size[0]);
      }
    } else {
      nfb = x->size[0] / 4096;
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      f_st.site = &fe_emlrtRSI;
      if (x->size[1] > 2147483646) {
        g_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (col = 0; col <= ncols; col++) {
        s = sumColumnB4(x, col + 1, 1);
        f_st.site = &kc_emlrtRSI;
        for (ib = 2; ib <= nfb; ib++) {
          s += sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          f_st.site = &lc_emlrtRSI;
          s += b_sumColumnB(&f_st, x, col + 1, nleft, inb + 1);
        }
        y_data[col] = s;
      }
    }
  }
}

/* End of code generation (sum.c) */

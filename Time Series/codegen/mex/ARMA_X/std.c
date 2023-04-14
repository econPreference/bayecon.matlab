/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "std.h"
#include "ARMA_X_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "combineVectorElements.h"
#include "ARMA_X_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo vg_emlrtRSI = { 9,  /* lineNo */
  "std",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 76, /* lineNo */
  "varstd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 94, /* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 125,/* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 136,/* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 141,/* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "varstd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 124,/* lineNo */
  9,                                   /* colNo */
  "vvarstd",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pName */
};

static emlrtRTEInfo vo_emlrtRTEI = { 38,/* lineNo */
  19,                                  /* colNo */
  "varstd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pName */
};

/* Function Definitions */
real_T b_std(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  emxArray_real_T *absdiff;
  int32_T b_x[1];
  emxArray_real_T c_x;
  real_T xbar;
  int32_T k;
  boolean_T overflow;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &vg_emlrtRSI;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &vo_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &wg_emlrtRSI;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else if (x->size[0] == 1) {
    if ((!muDoubleScalarIsInf(x->data[0])) && (!muDoubleScalarIsNaN(x->data[0])))
    {
      y = 0.0;
    } else {
      y = rtNaN;
    }
  } else {
    emxInit_real_T1(&b_st, &absdiff, 1, &vi_emlrtRTEI, true);
    c_st.site = &xg_emlrtRSI;
    b_x[0] = x->size[0];
    c_x = *x;
    c_x.size = (int32_T *)&b_x;
    c_x.numDimensions = 1;
    d_st.site = &y_emlrtRSI;
    xbar = b_colMajorFlatIter(&d_st, &c_x, x->size[0]);
    xbar /= (real_T)x->size[0];
    k = absdiff->size[0];
    absdiff->size[0] = x->size[0];
    emxEnsureCapacity_real_T1(&b_st, absdiff, k, &ui_emlrtRTEI);
    c_st.site = &yg_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      d_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 0; k < x->size[0]; k++) {
      absdiff->data[k] = muDoubleScalarAbs(x->data[k] - xbar);
    }

    c_st.site = &ah_emlrtRSI;
    n_t = (ptrdiff_t)x->size[0];
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &absdiff->data[0], &incx_t);
    c_st.site = &bh_emlrtRSI;
    y /= muDoubleScalarSqrt((real_T)x->size[0] - 1.0);
    emxFree_real_T(&absdiff);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/* End of code generation (std.c) */

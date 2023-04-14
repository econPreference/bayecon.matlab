/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "mean.h"
#include "ARMA_X_emxutil.h"
#include "combineVectorElements.h"
#include "isequal.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 38,  /* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 38,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo do_emlrtRTEI = { 17,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo eo_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo fo_emlrtRTEI = { 30,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

/* Function Definitions */
void mean(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T b0;
  int32_T loop_ub;
  int32_T i2;
  int32_T b_x;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &do_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b0 = !isequal(x);
  if (!b0) {
    emlrtErrorWithMessageIdR2018a(sp, &eo_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty",
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b0 = !isequal(x);
  if (!b0) {
    emlrtErrorWithMessageIdR2018a(sp, &fo_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty",
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  st.site = &x_emlrtRSI;
  combineVectorElements(&st, x, y);
  loop_ub = y->size[0] * y->size[1] - 1;
  i2 = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, y, i2, &vc_emlrtRTEI);
  b_x = x->size[0];
  for (i2 = 0; i2 <= loop_ub; i2++) {
    y->data[i2] /= (real_T)b_x;
  }
}

/* End of code generation (mean.c) */

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
#include "Recursive_BVAR.h"
#include "mean.h"
#include "Recursive_BVAR_emxutil.h"
#include "combineVectorElements.h"
#include "isequal.h"

/* Variable Definitions */
static emlrtRSInfo ef_emlrtRSI = { 38, /* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 38,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = { 17,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = { 30,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

/* Function Definitions */
void mean(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T b2;
  int32_T loop_ub;
  int32_T i18;
  int32_T b_x;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &wk_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b2 = !isequal(x);
  if (!b2) {
    emlrtErrorWithMessageIdR2018a(sp, &xk_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty",
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b2 = !isequal(x);
  if (!b2) {
    emlrtErrorWithMessageIdR2018a(sp, &yk_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty",
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  st.site = &ef_emlrtRSI;
  combineVectorElements(&st, x, y);
  loop_ub = y->size[0] * y->size[1] - 1;
  i18 = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, y, i18, &pf_emlrtRTEI);
  b_x = x->size[0];
  for (i18 = 0; i18 <= loop_ub; i18++) {
    y->data[i18] /= (real_T)b_x;
  }
}

/* End of code generation (mean.c) */

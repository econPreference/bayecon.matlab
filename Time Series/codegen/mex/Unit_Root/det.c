/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.c
 *
 * Code generation for function 'det'
 *
 */

/* Include files */
#include "det.h"
#include "Unit_Root.h"
#include "Unit_Root_emxutil.h"
#include "rt_nonfinite.h"
#include "xgetrf.h"

/* Variable Definitions */
static emlrtRSInfo gj_emlrtRSI = { 21, /* lineNo */
  "det",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 12,/* lineNo */
  15,                                  /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 21,/* lineNo */
  2,                                   /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

/* Function Definitions */
real_T det(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  emxArray_real_T *b_x;
  int32_T i;
  int32_T loop_ub;
  emxArray_int32_T *ipiv;
  boolean_T isodd;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (x->size[0] != x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &fb_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 1.0;
  } else {
    emxInit_real_T(sp, &b_x, 2, &yj_emlrtRTEI, true);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, b_x, i, &xj_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_x->data[i] = x->data[i];
    }

    emxInit_int32_T(sp, &ipiv, 2, &yj_emlrtRTEI, true);
    st.site = &gj_emlrtRSI;
    xgetrf(&st, x->size[0], x->size[1], b_x, x->size[0], ipiv);
    y = b_x->data[0];
    i = b_x->size[0];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      y *= b_x->data[(loop_ub + b_x->size[0] * (loop_ub + 1)) + 1];
    }

    emxFree_real_T(&b_x);
    isodd = false;
    i = ipiv->size[1];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      if (ipiv->data[loop_ub] > loop_ub + 1) {
        isodd = !isodd;
      }
    }

    emxFree_int32_T(&ipiv);
    if (isodd) {
      y = -y;
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/* End of code generation (det.c) */

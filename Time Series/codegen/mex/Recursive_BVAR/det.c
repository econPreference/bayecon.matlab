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
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "det.h"
#include "Recursive_BVAR_emxutil.h"
#include "xgetrf.h"

/* Variable Definitions */
static emlrtRSInfo jj_emlrtRSI = { 21, /* lineNo */
  "det",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 21,/* lineNo */
  2,                                   /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = { 12,/* lineNo */
  15,                                  /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

/* Function Definitions */
real_T det(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T isodd;
  emxArray_real_T *b_x;
  int32_T k;
  int32_T loop_ub;
  emxArray_int32_T *ipiv;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  isodd = (x->size[0] == x->size[1]);
  if (!isodd) {
    emlrtErrorWithMessageIdR2018a(sp, &dl_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 1.0;
  } else {
    emxInit_real_T(sp, &b_x, 2, &vi_emlrtRTEI, true);
    k = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, b_x, k, &ui_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (k = 0; k < loop_ub; k++) {
      b_x->data[k] = x->data[k];
    }

    emxInit_int32_T1(sp, &ipiv, 2, &vi_emlrtRTEI, true);
    st.site = &jj_emlrtRSI;
    xgetrf(&st, x->size[0], x->size[1], b_x, x->size[0], ipiv);
    y = b_x->data[0];
    for (k = 1; k - 1 < (int32_T)((real_T)b_x->size[0] + -1.0); k++) {
      y *= b_x->data[k + b_x->size[0] * k];
    }

    emxFree_real_T(&b_x);
    isodd = false;
    for (k = 0; k <= ipiv->size[1] - 2; k++) {
      if (ipiv->data[k] > 1 + k) {
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

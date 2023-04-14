/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isfinite.c
 *
 * Code generation for function 'isfinite'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "isfinite.h"
#include "ARMA_X_emxutil.h"
#include "isnan.h"

/* Variable Definitions */
static emlrtRTEInfo nl_emlrtRTEI = { 16,/* lineNo */
  13,                                  /* colNo */
  "isinf",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\isinf.m"/* pName */
};

static emlrtRTEInfo ol_emlrtRTEI = { 16,/* lineNo */
  34,                                  /* colNo */
  "isinf",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\isinf.m"/* pName */
};

static emlrtRTEInfo pl_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "isfinite",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\isfinite.m"/* pName */
};

static emlrtRTEInfo ql_emlrtRTEI = { 12,/* lineNo */
  18,                                  /* colNo */
  "isfinite",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\isfinite.m"/* pName */
};

/* Function Definitions */
void b_isfinite(const emlrtStack *sp, const emxArray_creal_T *x,
                emxArray_boolean_T *b)
{
  int32_T i33;
  int32_T loop_ub;
  emxArray_boolean_T *r10;
  emxArray_boolean_T *r11;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i33 = b->size[0];
  b->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(sp, b, i33, &nl_emlrtRTEI);
  loop_ub = x->size[0];
  for (i33 = 0; i33 < loop_ub; i33++) {
    b->data[i33] = muDoubleScalarIsInf(x->data[i33].re);
  }

  emxInit_boolean_T(sp, &r10, 1, &ol_emlrtRTEI, true);
  i33 = r10->size[0];
  r10->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(sp, r10, i33, &ol_emlrtRTEI);
  loop_ub = x->size[0];
  for (i33 = 0; i33 < loop_ub; i33++) {
    r10->data[i33] = muDoubleScalarIsInf(x->data[i33].im);
  }

  emxInit_boolean_T(sp, &r11, 1, &ql_emlrtRTEI, true);
  b_isnan(sp, x, r11);
  i33 = b->size[0];
  emxEnsureCapacity_boolean_T(sp, b, i33, &pl_emlrtRTEI);
  loop_ub = b->size[0];
  for (i33 = 0; i33 < loop_ub; i33++) {
    b->data[i33] = ((!(b->data[i33] || r10->data[i33])) && (!r11->data[i33]));
  }

  emxFree_boolean_T(&r11);
  emxFree_boolean_T(&r10);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (isfinite.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isnan.c
 *
 * Code generation for function 'isnan'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "isnan.h"
#include "ARMA_X_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo kl_emlrtRTEI = { 16,/* lineNo */
  13,                                  /* colNo */
  "isnan",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m"/* pName */
};

static emlrtRTEInfo ll_emlrtRTEI = { 16,/* lineNo */
  34,                                  /* colNo */
  "isnan",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m"/* pName */
};

static emlrtRTEInfo ml_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "isnan",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m"/* pName */
};

/* Function Definitions */
void b_isnan(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_boolean_T
             *b)
{
  int32_T i32;
  int32_T loop_ub;
  emxArray_boolean_T *r9;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i32 = b->size[0];
  b->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(sp, b, i32, &kl_emlrtRTEI);
  loop_ub = x->size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    b->data[i32] = muDoubleScalarIsNaN(x->data[i32].re);
  }

  emxInit_boolean_T(sp, &r9, 1, &ll_emlrtRTEI, true);
  i32 = r9->size[0];
  r9->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(sp, r9, i32, &ll_emlrtRTEI);
  loop_ub = x->size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    r9->data[i32] = muDoubleScalarIsNaN(x->data[i32].im);
  }

  i32 = b->size[0];
  emxEnsureCapacity_boolean_T(sp, b, i32, &ml_emlrtRTEI);
  loop_ub = b->size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    b->data[i32] = (b->data[i32] || r9->data[i32]);
  }

  emxFree_boolean_T(&r9);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (isnan.c) */

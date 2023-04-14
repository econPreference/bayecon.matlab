/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfn.c
 *
 * Code generation for function 'lnpdfn'
 *
 */

/* Include files */
#include "lnpdfn.h"
#include "Ordinary_Regression_emxutil.h"
#include "Ordinary_Regression_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo bf_emlrtRTEI = {
    8,                                                         /* lineNo */
    7,                                                         /* colNo */
    "lnpdfn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pName */
};

/* Function Definitions */
void minus(const emlrtStack *sp, emxArray_real_T *fitted,
           const emxArray_real_T *Y)
{
  emxArray_real_T *b_Y;
  const real_T *Y_data;
  real_T *b_Y_data;
  real_T *fitted_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  Y_data = Y->data;
  fitted_data = fitted->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y, 1, &bf_emlrtRTEI);
  i = b_Y->size[0];
  if (fitted->size[0] == 1) {
    b_Y->size[0] = Y->size[0];
  } else {
    b_Y->size[0] = fitted->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Y, i, &bf_emlrtRTEI);
  b_Y_data = b_Y->data;
  stride_0_0 = (Y->size[0] != 1);
  stride_1_0 = (fitted->size[0] != 1);
  if (fitted->size[0] == 1) {
    loop_ub = Y->size[0];
  } else {
    loop_ub = fitted->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_Y_data[i] = Y_data[i * stride_0_0] - fitted_data[i * stride_1_0];
  }
  i = fitted->size[0];
  fitted->size[0] = b_Y->size[0];
  emxEnsureCapacity_real_T(sp, fitted, i, &bf_emlrtRTEI);
  fitted_data = fitted->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    fitted_data[i] = b_Y_data[i];
  }
  emxFree_real_T(sp, &b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (lnpdfn.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * demeanc.c
 *
 * Code generation for function 'demeanc'
 *
 */

/* Include files */
#include "demeanc.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo vj_emlrtRTEI = {
    8,                                                          /* lineNo */
    5,                                                          /* colNo */
    "demeanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pName */
};

/* Function Definitions */
void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y0,
                        const emxArray_real_T *Y, int32_T i2, int32_T i3)
{
  emxArray_real_T *b_Y;
  const real_T *Y_data;
  real_T *Y0_data;
  real_T *b_Y_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  Y_data = Y->data;
  Y0_data = Y0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y, 2, &vj_emlrtRTEI);
  i = Y->size[1];
  i1 = b_Y->size[0] * b_Y->size[1];
  if (Y0->size[0] == 1) {
    b_Y->size[0] = (i3 - i2) + 1;
  } else {
    b_Y->size[0] = Y0->size[0];
  }
  if (Y0->size[1] == 1) {
    b_Y->size[1] = i;
  } else {
    b_Y->size[1] = Y0->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_Y, i1, &vj_emlrtRTEI);
  b_Y_data = b_Y->data;
  stride_0_0 = ((i3 - i2) + 1 != 1);
  stride_0_1 = (i != 1);
  stride_1_0 = (Y0->size[0] != 1);
  stride_1_1 = (Y0->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Y0->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = Y0->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Y0->size[0] == 1) {
      b_loop_ub = (i3 - i2) + 1;
    } else {
      b_loop_ub = Y0->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Y_data[i1 + b_Y->size[0] * i] =
          Y_data[(i2 + i1 * stride_0_0) + Y->size[0] * aux_0_1] -
          Y0_data[i1 * stride_1_0 + Y0->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Y0->size[0] * Y0->size[1];
  Y0->size[0] = b_Y->size[0];
  Y0->size[1] = b_Y->size[1];
  emxEnsureCapacity_real_T(sp, Y0, i, &vj_emlrtRTEI);
  Y0_data = Y0->data;
  loop_ub = b_Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Y->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Y0_data[i1 + Y0->size[0] * i] = b_Y_data[i1 + b_Y->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void minus(const emlrtStack *sp, emxArray_real_T *YL, const emxArray_real_T *A)
{
  emxArray_real_T *b_YL;
  const real_T *A_data;
  real_T *YL_data;
  real_T *b_YL_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  A_data = A->data;
  YL_data = YL->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_YL, 2, &vj_emlrtRTEI);
  i = b_YL->size[0] * b_YL->size[1];
  if (A->size[0] == 1) {
    b_YL->size[0] = YL->size[0];
  } else {
    b_YL->size[0] = A->size[0];
  }
  if (A->size[1] == 1) {
    b_YL->size[1] = YL->size[1];
  } else {
    b_YL->size[1] = A->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_YL, i, &vj_emlrtRTEI);
  b_YL_data = b_YL->data;
  stride_0_0 = (YL->size[0] != 1);
  stride_0_1 = (YL->size[1] != 1);
  stride_1_0 = (A->size[0] != 1);
  stride_1_1 = (A->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (A->size[1] == 1) {
    loop_ub = YL->size[1];
  } else {
    loop_ub = A->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (A->size[0] == 1) {
      b_loop_ub = YL->size[0];
    } else {
      b_loop_ub = A->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_YL_data[i1 + b_YL->size[0] * i] =
          YL_data[i1 * stride_0_0 + YL->size[0] * aux_0_1] -
          A_data[i1 * stride_1_0 + A->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = YL->size[0] * YL->size[1];
  YL->size[0] = b_YL->size[0];
  YL->size[1] = b_YL->size[1];
  emxEnsureCapacity_real_T(sp, YL, i, &vj_emlrtRTEI);
  YL_data = YL->data;
  loop_ub = b_YL->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_YL->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      YL_data[i1 + YL->size[0] * i] = b_YL_data[i1 + b_YL->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_YL);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (demeanc.c) */

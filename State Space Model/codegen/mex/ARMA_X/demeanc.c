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
#include "ARMA_X_emxutil.h"
#include "ARMA_X_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ql_emlrtRTEI = {
    8,                                                          /* lineNo */
    5,                                                          /* colNo */
    "demeanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pName */
};

/* Function Definitions */
void minus(const emlrtStack *sp, emxArray_real_T *Y,
           const emxArray_real_T *data)
{
  emxArray_real_T *b_data;
  const real_T *data_data;
  real_T *Y_data;
  real_T *b_data_data;
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
  data_data = data->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_data, 2, &ql_emlrtRTEI);
  i = b_data->size[0] * b_data->size[1];
  if (Y->size[0] == 1) {
    b_data->size[0] = data->size[0];
  } else {
    b_data->size[0] = Y->size[0];
  }
  if (Y->size[1] == 1) {
    b_data->size[1] = data->size[1];
  } else {
    b_data->size[1] = Y->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_data, i, &ql_emlrtRTEI);
  b_data_data = b_data->data;
  stride_0_0 = (data->size[0] != 1);
  stride_0_1 = (data->size[1] != 1);
  stride_1_0 = (Y->size[0] != 1);
  stride_1_1 = (Y->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Y->size[1] == 1) {
    loop_ub = data->size[1];
  } else {
    loop_ub = Y->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Y->size[0] == 1) {
      b_loop_ub = data->size[0];
    } else {
      b_loop_ub = Y->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_data_data[i1 + b_data->size[0] * i] =
          data_data[i1 * stride_0_0 + data->size[0] * aux_0_1] -
          Y_data[i1 * stride_1_0 + Y->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Y->size[0] * Y->size[1];
  Y->size[0] = b_data->size[0];
  Y->size[1] = b_data->size[1];
  emxEnsureCapacity_real_T(sp, Y, i, &ql_emlrtRTEI);
  Y_data = Y->data;
  loop_ub = b_data->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_data->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Y_data[i1 + Y->size[0] * i] = b_data_data[i1 + b_data->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_data);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (demeanc.c) */

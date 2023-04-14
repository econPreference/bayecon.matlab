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
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo uh_emlrtRTEI = {
    8,                                                          /* lineNo */
    5,                                                          /* colNo */
    "demeanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pName */
};

/* Function Definitions */
void minus(const emlrtStack *sp, emxArray_real_T *st_Y,
           const emxArray_real_T *Sigma)
{
  emxArray_real_T *b_st_Y;
  const real_T *Sigma_data;
  real_T *b_st_Y_data;
  real_T *st_Y_data;
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
  Sigma_data = Sigma->data;
  st_Y_data = st_Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_st_Y, 2, &uh_emlrtRTEI);
  i = b_st_Y->size[0] * b_st_Y->size[1];
  if (Sigma->size[0] == 1) {
    b_st_Y->size[0] = st_Y->size[0];
  } else {
    b_st_Y->size[0] = Sigma->size[0];
  }
  if (Sigma->size[1] == 1) {
    b_st_Y->size[1] = st_Y->size[1];
  } else {
    b_st_Y->size[1] = Sigma->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_st_Y, i, &uh_emlrtRTEI);
  b_st_Y_data = b_st_Y->data;
  stride_0_0 = (st_Y->size[0] != 1);
  stride_0_1 = (st_Y->size[1] != 1);
  stride_1_0 = (Sigma->size[0] != 1);
  stride_1_1 = (Sigma->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Sigma->size[1] == 1) {
    loop_ub = st_Y->size[1];
  } else {
    loop_ub = Sigma->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Sigma->size[0] == 1) {
      b_loop_ub = st_Y->size[0];
    } else {
      b_loop_ub = Sigma->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_st_Y_data[i1 + b_st_Y->size[0] * i] =
          st_Y_data[i1 * stride_0_0 + st_Y->size[0] * aux_0_1] -
          Sigma_data[i1 * stride_1_0 + Sigma->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = st_Y->size[0] * st_Y->size[1];
  st_Y->size[0] = b_st_Y->size[0];
  st_Y->size[1] = b_st_Y->size[1];
  emxEnsureCapacity_real_T(sp, st_Y, i, &uh_emlrtRTEI);
  st_Y_data = st_Y->data;
  loop_ub = b_st_Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_st_Y->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      st_Y_data[i1 + st_Y->size[0] * i] = b_st_Y_data[i1 + b_st_Y->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_st_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (demeanc.c) */

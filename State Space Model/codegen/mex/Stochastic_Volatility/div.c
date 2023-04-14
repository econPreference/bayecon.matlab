/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * div.c
 *
 * Code generation for function 'div'
 *
 */

/* Include files */
#include "div.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo
    kj_emlrtRTEI =
        {
            52,    /* lineNo */
            9,     /* colNo */
            "div", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pName */
};

/* Function Definitions */
void rdivide(const emlrtStack *sp, emxArray_real_T *Y,
             const emxArray_real_T *vol)
{
  emxArray_real_T *b_Y;
  const real_T *vol_data;
  real_T *Y_data;
  real_T *b_Y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  vol_data = vol->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y, 1, &kj_emlrtRTEI);
  i = b_Y->size[0];
  if (vol->size[0] == 1) {
    b_Y->size[0] = Y->size[0];
  } else {
    b_Y->size[0] = vol->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Y, i, &kj_emlrtRTEI);
  b_Y_data = b_Y->data;
  stride_0_0 = (Y->size[0] != 1);
  stride_1_0 = (vol->size[0] != 1);
  if (vol->size[0] == 1) {
    loop_ub = Y->size[0];
  } else {
    loop_ub = vol->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_Y_data[i] = Y_data[i * stride_0_0] / vol_data[i * stride_1_0];
  }
  i = Y->size[0];
  Y->size[0] = b_Y->size[0];
  emxEnsureCapacity_real_T(sp, Y, i, &kj_emlrtRTEI);
  Y_data = Y->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Y_data[i] = b_Y_data[i];
  }
  emxFree_real_T(sp, &b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (div.c) */

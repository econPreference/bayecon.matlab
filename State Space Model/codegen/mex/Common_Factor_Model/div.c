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
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo
    qg_emlrtRTEI =
        {
            52,    /* lineNo */
            9,     /* colNo */
            "div", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pName */
};

/* Function Definitions */
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                        const emxArray_real_T *rawY, int32_T i,
                        const emxArray_real_T *std_Y)
{
  const real_T *rawY_data;
  const real_T *std_Y_data;
  real_T *r;
  int32_T b_i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  std_Y_data = std_Y->data;
  rawY_data = rawY->data;
  b_i = rawY->size[1];
  stride_0_1 = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  if (std_Y->size[1] == 1) {
    r1->size[1] = b_i;
  } else {
    r1->size[1] = std_Y->size[1];
  }
  emxEnsureCapacity_real_T(sp, r1, stride_0_1, &xc_emlrtRTEI);
  r = r1->data;
  stride_0_1 = (b_i != 1);
  stride_1_1 = (std_Y->size[1] != 1);
  if (std_Y->size[1] == 1) {
    loop_ub = b_i;
  } else {
    loop_ub = std_Y->size[1];
  }
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r[b_i] = rawY_data[i + rawY->size[0] * (b_i * stride_0_1)] /
             std_Y_data[b_i * stride_1_1];
  }
}

void rdivide(const emlrtStack *sp, emxArray_real_T *beta,
             const emxArray_real_T *y)
{
  emxArray_real_T *b_beta;
  const real_T *y_data;
  real_T *b_beta_data;
  real_T *beta_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  y_data = y->data;
  beta_data = beta->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta, 1, &qg_emlrtRTEI);
  i = b_beta->size[0];
  if (y->size[0] == 1) {
    b_beta->size[0] = beta->size[0];
  } else {
    b_beta->size[0] = y->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_beta, i, &qg_emlrtRTEI);
  b_beta_data = b_beta->data;
  stride_0_0 = (beta->size[0] != 1);
  stride_1_0 = (y->size[0] != 1);
  if (y->size[0] == 1) {
    loop_ub = beta->size[0];
  } else {
    loop_ub = y->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_beta_data[i] = beta_data[i * stride_0_0] / y_data[i * stride_1_0];
  }
  i = beta->size[0];
  beta->size[0] = b_beta->size[0];
  emxEnsureCapacity_real_T(sp, beta, i, &qg_emlrtRTEI);
  beta_data = beta->data;
  loop_ub = b_beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = b_beta_data[i];
  }
  emxFree_real_T(sp, &b_beta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (div.c) */

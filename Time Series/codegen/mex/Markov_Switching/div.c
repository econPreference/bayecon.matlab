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
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rdivide(const emlrtStack *sp, emxArray_real_T *sig2,
             const emxArray_real_T *delta0, const emxArray_real_T *alpha0)
{
  const real_T *alpha0_data;
  const real_T *delta0_data;
  real_T *sig2_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  alpha0_data = alpha0->data;
  delta0_data = delta0->data;
  i = sig2->size[0];
  if (alpha0->size[0] == 1) {
    sig2->size[0] = delta0->size[0];
  } else {
    sig2->size[0] = alpha0->size[0];
  }
  emxEnsureCapacity_real_T(sp, sig2, i, &uc_emlrtRTEI);
  sig2_data = sig2->data;
  stride_0_0 = (delta0->size[0] != 1);
  stride_1_0 = (alpha0->size[0] != 1);
  if (alpha0->size[0] == 1) {
    loop_ub = delta0->size[0];
  } else {
    loop_ub = alpha0->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    sig2_data[i] = delta0_data[i * stride_0_0] / alpha0_data[i * stride_1_0];
  }
}

/* End of code generation (div.c) */

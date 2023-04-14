/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfmvn.c
 *
 * Code generation for function 'lnpdfmvn'
 *
 */

/* Include files */
#include "lnpdfmvn.h"
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                        const emxArray_real_T *r1, const emxArray_real_T *psum)
{
  const real_T *psum_data;
  const real_T *r;
  real_T *A_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  psum_data = psum->data;
  r = r1->data;
  i = A->size[0] * A->size[1];
  A->size[0] = 1;
  if (psum->size[0] == 1) {
    A->size[1] = r1->size[1];
  } else {
    A->size[1] = psum->size[0];
  }
  emxEnsureCapacity_real_T(sp, A, i, &kc_emlrtRTEI);
  A_data = A->data;
  stride_0_1 = (r1->size[1] != 1);
  stride_1_1 = (psum->size[0] != 1);
  if (psum->size[0] == 1) {
    loop_ub = r1->size[1];
  } else {
    loop_ub = psum->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    A_data[i] = r[i * stride_0_1] * psum_data[i * stride_1_1];
  }
}

void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *psum,
                        const emxArray_real_T *psuml,
                        const emxArray_real_T *betam, int32_T m)
{
  const real_T *betam_data;
  const real_T *psuml_data;
  real_T *psum_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  betam_data = betam->data;
  psuml_data = psuml->data;
  i = betam->size[0];
  stride_0_0 = psum->size[0];
  if (i == 1) {
    psum->size[0] = psuml->size[0];
  } else {
    psum->size[0] = i;
  }
  emxEnsureCapacity_real_T(sp, psum, stride_0_0, &jc_emlrtRTEI);
  psum_data = psum->data;
  stride_0_0 = (psuml->size[0] != 1);
  stride_1_0 = (i != 1);
  if (i == 1) {
    loop_ub = psuml->size[0];
  } else {
    loop_ub = i;
  }
  for (i = 0; i < loop_ub; i++) {
    psum_data[i] = psuml_data[i * stride_0_0] -
                   betam_data[i * stride_1_0 + betam->size[0] * m];
  }
}

void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                        const emxArray_real_T *psuml,
                        const emxArray_real_T *betam, int32_T m)
{
  const real_T *betam_data;
  const real_T *psuml_data;
  real_T *A_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  betam_data = betam->data;
  psuml_data = psuml->data;
  i = betam->size[0];
  stride_0_1 = A->size[0] * A->size[1];
  A->size[0] = 1;
  if (i == 1) {
    A->size[1] = psuml->size[0];
  } else {
    A->size[1] = i;
  }
  emxEnsureCapacity_real_T(sp, A, stride_0_1, &ic_emlrtRTEI);
  A_data = A->data;
  stride_0_1 = (psuml->size[0] != 1);
  stride_1_1 = (i != 1);
  if (i == 1) {
    loop_ub = psuml->size[0];
  } else {
    loop_ub = i;
  }
  for (i = 0; i < loop_ub; i++) {
    A_data[i] = psuml_data[i * stride_0_1] -
                betam_data[i * stride_1_1 + betam->size[0] * m];
  }
}

/* End of code generation (lnpdfmvn.c) */

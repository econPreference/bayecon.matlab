/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * discret1.c
 *
 * Code generation for function 'discret1'
 *
 */

/* Include files */
#include "discret1.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo qf_emlrtRTEI = {
    12,                                                          /* lineNo */
    13,                                                          /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

/* Function Definitions */
void f_binary_expand_op(const emlrtStack *sp, emxArray_boolean_T *ind,
                        const emxArray_boolean_T *ind1)
{
  emxArray_boolean_T *b_ind;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  const boolean_T *ind1_data;
  boolean_T *b_ind_data;
  boolean_T *ind_data;
  ind1_data = ind1->data;
  ind_data = ind->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_boolean_T(sp, &b_ind, &qf_emlrtRTEI);
  i = b_ind->size[0];
  if (ind1->size[0] == 1) {
    b_ind->size[0] = ind->size[0];
  } else {
    b_ind->size[0] = ind1->size[0];
  }
  emxEnsureCapacity_boolean_T(sp, b_ind, i, &qf_emlrtRTEI);
  b_ind_data = b_ind->data;
  stride_0_0 = (ind->size[0] != 1);
  stride_1_0 = (ind1->size[0] != 1);
  if (ind1->size[0] == 1) {
    loop_ub = ind->size[0];
  } else {
    loop_ub = ind1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_ind_data[i] = (ind_data[i * stride_0_0] == ind1_data[i * stride_1_0]);
  }
  i = ind->size[0];
  ind->size[0] = b_ind->size[0];
  emxEnsureCapacity_boolean_T(sp, ind, i, &qf_emlrtRTEI);
  ind_data = ind->data;
  loop_ub = b_ind->size[0];
  for (i = 0; i < loop_ub; i++) {
    ind_data[i] = b_ind_data[i];
  }
  emxFree_boolean_T(sp, &b_ind);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (discret1.c) */

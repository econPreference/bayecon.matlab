/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "IV_Regression_data.h"
#include "IV_Regression_emxutil.h"
#include "IV_Regression_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo fh_emlrtRTEI = {
    166,             /* lineNo */
    37,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = {
    166,             /* lineNo */
    83,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

/* Function Definitions */
void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) ||
        ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                         const emxArray_real_T *b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r3,
                        const emxArray_real_T *Y, int32_T i, real_T y,
                        const emxArray_real_T *Xs, const emxArray_real_T *r4,
                        real_T b_y, const emxArray_real_T *r5)
{
  emxArray_real_T *b_Xs;
  emxArray_real_T *b_Y;
  emxArray_real_T *c_Xs;
  emxArray_real_T *c_Y;
  const real_T *Xs_data;
  const real_T *Y_data;
  const real_T *r;
  const real_T *r1;
  real_T *b_Xs_data;
  real_T *b_Y_data;
  real_T *c_Y_data;
  real_T *r2;
  int32_T b_i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r5->data;
  r1 = r4->data;
  Xs_data = Xs->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Xs, 1, &fh_emlrtRTEI);
  b_i = Xs->size[1];
  stride_1_0 = b_Xs->size[0];
  if (r4->size[0] == 1) {
    b_Xs->size[0] = b_i;
  } else {
    b_Xs->size[0] = r4->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Xs, stride_1_0, &fh_emlrtRTEI);
  r2 = b_Xs->data;
  stride_0_0 = (b_i != 1);
  stride_1_0 = (r4->size[0] != 1);
  if (r4->size[0] == 1) {
    loop_ub = b_i;
  } else {
    loop_ub = r4->size[0];
  }
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r2[b_i] =
        Xs_data[i + Xs->size[0] * (b_i * stride_0_0)] - r1[b_i * stride_1_0];
  }
  emxInit_real_T(sp, &c_Xs, 1, &gh_emlrtRTEI);
  b_i = Xs->size[1];
  stride_1_0 = c_Xs->size[0];
  if (r5->size[0] == 1) {
    c_Xs->size[0] = b_i;
  } else {
    c_Xs->size[0] = r5->size[0];
  }
  emxEnsureCapacity_real_T(sp, c_Xs, stride_1_0, &gh_emlrtRTEI);
  b_Xs_data = c_Xs->data;
  stride_0_0 = (b_i != 1);
  stride_1_0 = (r5->size[0] != 1);
  if (r5->size[0] == 1) {
    loop_ub = b_i;
  } else {
    loop_ub = r5->size[0];
  }
  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_Xs_data[b_i] =
        Xs_data[i + Xs->size[0] * (b_i * stride_0_0)] - r[b_i * stride_1_0];
  }
  emxInit_real_T(sp, &b_Y, 1, &te_emlrtRTEI);
  b_i = b_Y->size[0];
  b_Y->size[0] = b_Xs->size[0] + 1;
  emxEnsureCapacity_real_T(sp, b_Y, b_i, &te_emlrtRTEI);
  b_Y_data = b_Y->data;
  b_Y_data[0] = Y_data[i] - y;
  loop_ub = b_Xs->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_Y_data[b_i + 1] = r2[b_i];
  }
  emxFree_real_T(sp, &b_Xs);
  emxInit_real_T(sp, &c_Y, 2, &ue_emlrtRTEI);
  b_i = c_Y->size[0] * c_Y->size[1];
  c_Y->size[0] = 1;
  c_Y->size[1] = c_Xs->size[0] + 1;
  emxEnsureCapacity_real_T(sp, c_Y, b_i, &ue_emlrtRTEI);
  c_Y_data = c_Y->data;
  c_Y_data[0] = Y_data[i] - b_y;
  loop_ub = c_Xs->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    c_Y_data[b_i + 1] = b_Xs_data[b_i];
  }
  emxFree_real_T(sp, &c_Xs);
  b_i = r3->size[0] * r3->size[1];
  r3->size[0] = b_Y->size[0];
  r3->size[1] = c_Y->size[1];
  emxEnsureCapacity_real_T(sp, r3, b_i, &te_emlrtRTEI);
  r2 = r3->data;
  loop_ub = c_Y->size[1];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    stride_0_0 = b_Y->size[0];
    for (stride_1_0 = 0; stride_1_0 < stride_0_0; stride_1_0++) {
      r2[stride_1_0 + r3->size[0] * b_i] = b_Y_data[stride_1_0] * c_Y_data[b_i];
    }
  }
  emxFree_real_T(sp, &c_Y);
  emxFree_real_T(sp, &b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *d_sum)
{
  emxArray_real_T *r;
  real_T *r1;
  real_T *sum_data;
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
  sum_data = d_sum->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &ib_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (d_sum->size[1] == 1) {
    r->size[0] = d_sum->size[0];
  } else {
    r->size[0] = d_sum->size[1];
  }
  if (d_sum->size[0] == 1) {
    r->size[1] = d_sum->size[1];
  } else {
    r->size[1] = d_sum->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &ib_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (d_sum->size[0] != 1);
  stride_0_1 = (d_sum->size[1] != 1);
  stride_1_0 = (d_sum->size[1] != 1);
  stride_1_1 = (d_sum->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (d_sum->size[0] == 1) {
    loop_ub = d_sum->size[1];
  } else {
    loop_ub = d_sum->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (d_sum->size[1] == 1) {
      b_loop_ub = d_sum->size[0];
    } else {
      b_loop_ub = d_sum->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (sum_data[i1 * stride_0_0 + d_sum->size[0] * aux_0_1] +
                 sum_data[aux_1_1 + d_sum->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = d_sum->size[0] * d_sum->size[1];
  d_sum->size[0] = r->size[0];
  d_sum->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, d_sum, i, &ne_emlrtRTEI);
  sum_data = d_sum->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      sum_data[i1 + d_sum->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (eml_mtimes_helper.c) */

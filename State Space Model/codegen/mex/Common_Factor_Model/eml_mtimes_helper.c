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
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_creal_T *a,
                           const emxArray_creal_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_creal_T *a,
                           const emxArray_creal_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void d_dynamic_size_checks(const emlrtStack *sp, const emxArray_creal_T *b,
                           int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (b->size[0] == 1) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                         const emxArray_creal_T *b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) ||
        ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void e_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *b,
                           int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((b->size[0] == 1) && (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void f_dynamic_size_checks(const emlrtStack *sp, const emxArray_creal_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) ||
        ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *var_tl)
{
  emxArray_real_T *r;
  real_T *r1;
  real_T *var_tl_data;
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
  var_tl_data = var_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &ch_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (var_tl->size[1] == 1) {
    r->size[0] = var_tl->size[0];
  } else {
    r->size[0] = var_tl->size[1];
  }
  if (var_tl->size[0] == 1) {
    r->size[1] = var_tl->size[1];
  } else {
    r->size[1] = var_tl->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &ch_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (var_tl->size[0] != 1);
  stride_0_1 = (var_tl->size[1] != 1);
  stride_1_0 = (var_tl->size[1] != 1);
  stride_1_1 = (var_tl->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (var_tl->size[0] == 1) {
    loop_ub = var_tl->size[1];
  } else {
    loop_ub = var_tl->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (var_tl->size[1] == 1) {
      b_loop_ub = var_tl->size[0];
    } else {
      b_loop_ub = var_tl->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (var_tl_data[i1 * stride_0_0 + var_tl->size[0] * aux_0_1] +
                 var_tl_data[aux_1_1 + var_tl->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = var_tl->size[0] * var_tl->size[1];
  var_tl->size[0] = r->size[0];
  var_tl->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, var_tl, i, &eh_emlrtRTEI);
  var_tl_data = var_tl->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      var_tl_data[i1 + var_tl->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void g_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void h_dynamic_size_checks(const emlrtStack *sp, const int32_T a_size[2],
                           int32_T b_size, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a_size[1] == 1) || (b_size == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (eml_mtimes_helper.c) */

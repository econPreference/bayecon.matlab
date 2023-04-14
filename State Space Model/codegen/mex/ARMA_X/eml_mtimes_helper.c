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
#include "ARMA_X_data.h"
#include "ARMA_X_emxutil.h"
#include "ARMA_X_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *precCOEF0,
                        const emxArray_real_T *result,
                        const emxArray_real_T *Fm)
{
  const real_T *Fm_data;
  const real_T *result_data;
  real_T *precCOEF0_data;
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
  Fm_data = Fm->data;
  result_data = result->data;
  i = precCOEF0->size[0] * precCOEF0->size[1];
  if (Fm->size[1] == 1) {
    precCOEF0->size[0] = result->size[0];
  } else {
    precCOEF0->size[0] = Fm->size[1];
  }
  if (Fm->size[0] == 1) {
    precCOEF0->size[1] = result->size[1];
  } else {
    precCOEF0->size[1] = Fm->size[0];
  }
  emxEnsureCapacity_real_T(sp, precCOEF0, i, &bd_emlrtRTEI);
  precCOEF0_data = precCOEF0->data;
  stride_0_0 = (result->size[0] != 1);
  stride_0_1 = (result->size[1] != 1);
  stride_1_0 = (Fm->size[1] != 1);
  stride_1_1 = (Fm->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Fm->size[0] == 1) {
    loop_ub = result->size[1];
  } else {
    loop_ub = Fm->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Fm->size[1] == 1) {
      b_loop_ub = result->size[0];
    } else {
      b_loop_ub = Fm->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      precCOEF0_data[i1 + precCOEF0->size[0] * i] =
          0.5 * (result_data[i1 * stride_0_0 + result->size[0] * aux_0_1] +
                 Fm_data[aux_1_1 + Fm->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &i_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "MATLAB:innerdim",
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
          sp, &i_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void d_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &i_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "MATLAB:innerdim",
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
          sp, &i_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void e_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &i_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void f_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &i_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *varb1)
{
  emxArray_real_T *r;
  real_T *r1;
  real_T *varb1_data;
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
  varb1_data = varb1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &fg_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (varb1->size[1] == 1) {
    r->size[0] = varb1->size[0];
  } else {
    r->size[0] = varb1->size[1];
  }
  if (varb1->size[0] == 1) {
    r->size[1] = varb1->size[1];
  } else {
    r->size[1] = varb1->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &fg_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (varb1->size[0] != 1);
  stride_0_1 = (varb1->size[1] != 1);
  stride_1_0 = (varb1->size[1] != 1);
  stride_1_1 = (varb1->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (varb1->size[0] == 1) {
    loop_ub = varb1->size[1];
  } else {
    loop_ub = varb1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (varb1->size[1] == 1) {
      b_loop_ub = varb1->size[0];
    } else {
      b_loop_ub = varb1->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (varb1_data[i1 * stride_0_0 + varb1->size[0] * aux_0_1] +
                 varb1_data[aux_1_1 + varb1->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = varb1->size[0] * varb1->size[1];
  varb1->size[0] = r->size[0];
  varb1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, varb1, i, &th_emlrtRTEI);
  varb1_data = varb1->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      varb1_data[i1 + varb1->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (eml_mtimes_helper.c) */

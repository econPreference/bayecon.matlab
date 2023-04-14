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
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "rt_nonfinite.h"

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
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:innerdim",
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
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Sigma,
                        const emxArray_real_T *kron_G, int32_T p)
{
  const real_T *kron_G_data;
  real_T *Sigma_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  kron_G_data = kron_G->data;
  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = p;
  Sigma->size[1] = p;
  emxEnsureCapacity_real_T(sp, Sigma, i, &td_emlrtRTEI);
  Sigma_data = Sigma->data;
  stride_0_0 = (p != 1);
  stride_0_1 = (p != 1);
  stride_1_0 = (p != 1);
  stride_1_1 = (p != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < p; i++) {
    for (i1 = 0; i1 < p; i1++) {
      Sigma_data[i1 + Sigma->size[0] * i] =
          0.5 * (kron_G_data[i1 * stride_0_0 + p * aux_0_1] +
                 kron_G_data[aux_1_1 + p * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void d_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:innerdim",
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
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void e_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void f_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void g_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *PHI_hat)
{
  emxArray_real_T *r;
  real_T *PHI_hat_data;
  real_T *r1;
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
  PHI_hat_data = PHI_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &od_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (PHI_hat->size[1] == 1) {
    r->size[0] = PHI_hat->size[0];
  } else {
    r->size[0] = PHI_hat->size[1];
  }
  if (PHI_hat->size[0] == 1) {
    r->size[1] = PHI_hat->size[1];
  } else {
    r->size[1] = PHI_hat->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &od_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (PHI_hat->size[0] != 1);
  stride_0_1 = (PHI_hat->size[1] != 1);
  stride_1_0 = (PHI_hat->size[1] != 1);
  stride_1_1 = (PHI_hat->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (PHI_hat->size[0] == 1) {
    loop_ub = PHI_hat->size[1];
  } else {
    loop_ub = PHI_hat->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (PHI_hat->size[1] == 1) {
      b_loop_ub = PHI_hat->size[0];
    } else {
      b_loop_ub = PHI_hat->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (PHI_hat_data[i1 * stride_0_0 + PHI_hat->size[0] * aux_0_1] +
                 PHI_hat_data[aux_1_1 + PHI_hat->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = PHI_hat->size[0] * PHI_hat->size[1];
  PHI_hat->size[0] = r->size[0];
  PHI_hat->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, PHI_hat, i, &ri_emlrtRTEI);
  PHI_hat_data = PHI_hat->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      PHI_hat_data[i1 + PHI_hat->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                        const real_T deno1_data[], const emxArray_real_T *Y_p,
                        const emxArray_real_T *r1)
{
  const real_T *Y_p_data;
  const real_T *r;
  real_T deno1;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  r = r1->data;
  Y_p_data = Y_p->data;
  deno1 = deno1_data[0];
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  if (r1->size[0] == 1) {
    y->size[1] = Y_p->size[0];
  } else {
    y->size[1] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, y, i, &fi_emlrtRTEI);
  y_data = y->data;
  stride_0_1 = (Y_p->size[0] != 1);
  stride_1_1 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = Y_p->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = deno1 * (Y_p_data[i * stride_0_1] - r[i * stride_1_1]);
  }
}

/* End of code generation (eml_mtimes_helper.c) */

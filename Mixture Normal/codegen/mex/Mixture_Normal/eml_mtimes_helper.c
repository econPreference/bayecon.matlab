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
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &o_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void binary_expand_op(const emlrtStack *sp, emxArray_real_T *Ym)
{
  emxArray_real_T *r;
  real_T *Ym_data;
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
  Ym_data = Ym->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &qb_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (Ym->size[1] == 1) {
    r->size[0] = Ym->size[0];
  } else {
    r->size[0] = Ym->size[1];
  }
  if (Ym->size[0] == 1) {
    r->size[1] = Ym->size[1];
  } else {
    r->size[1] = Ym->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &qb_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (Ym->size[0] != 1);
  stride_0_1 = (Ym->size[1] != 1);
  stride_1_0 = (Ym->size[1] != 1);
  stride_1_1 = (Ym->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Ym->size[0] == 1) {
    loop_ub = Ym->size[1];
  } else {
    loop_ub = Ym->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Ym->size[1] == 1) {
      b_loop_ub = Ym->size[0];
    } else {
      b_loop_ub = Ym->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (Ym_data[i1 * stride_0_0 + Ym->size[0] * aux_0_1] +
                 Ym_data[aux_1_1 + Ym->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Ym->size[0] * Ym->size[1];
  Ym->size[0] = r->size[0];
  Ym->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, Ym, i, &rb_emlrtRTEI);
  Ym_data = Ym->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Ym_data[i1 + Ym->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &o_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                         const emxArray_real_T *b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) ||
        ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &o_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *pdfym_var,
                        const emxArray_real_T *Omegam, int32_T m)
{
  const real_T *Omegam_data;
  real_T *pdfym_var_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  Omegam_data = Omegam->data;
  i = Omegam->size[0];
  i1 = Omegam->size[1];
  i2 = Omegam->size[0];
  i3 = Omegam->size[1];
  stride_0_0 = pdfym_var->size[0] * pdfym_var->size[1];
  if (i3 == 1) {
    pdfym_var->size[0] = i;
  } else {
    pdfym_var->size[0] = i3;
  }
  if (i2 == 1) {
    pdfym_var->size[1] = i1;
  } else {
    pdfym_var->size[1] = i2;
  }
  emxEnsureCapacity_real_T(sp, pdfym_var, stride_0_0, &ec_emlrtRTEI);
  pdfym_var_data = pdfym_var->data;
  stride_0_0 = (i != 1);
  stride_0_1 = (i1 != 1);
  stride_1_0 = (i3 != 1);
  stride_1_1 = (i2 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (i2 == 1) {
    loop_ub = i1;
  } else {
    loop_ub = i2;
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    if (i3 == 1) {
      b_loop_ub = i;
    } else {
      b_loop_ub = i3;
    }
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      pdfym_var_data[i2 + pdfym_var->size[0] * i1] =
          0.5 * (Omegam_data[(i2 * stride_0_0 + Omegam->size[0] * aux_0_1) +
                             Omegam->size[0] * Omegam->size[1] * m] +
                 Omegam_data[(aux_1_1 + Omegam->size[0] * (i2 * stride_1_0)) +
                             Omegam->size[0] * Omegam->size[1] * m]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

/* End of code generation (eml_mtimes_helper.c) */

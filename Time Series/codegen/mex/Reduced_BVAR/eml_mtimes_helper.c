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
#include "Reduced_BVAR_data.h"
#include "Reduced_BVAR_emxutil.h"
#include "Reduced_BVAR_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX)
{
  emxArray_real_T *r;
  real_T *XX_data;
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
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &kb_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (XX->size[1] == 1) {
    r->size[0] = XX->size[0];
  } else {
    r->size[0] = XX->size[1];
  }
  if (XX->size[0] == 1) {
    r->size[1] = XX->size[1];
  } else {
    r->size[1] = XX->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &kb_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (XX->size[1] != 1);
  stride_1_1 = (XX->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (XX->size[0] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = XX->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (XX->size[1] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = XX->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (XX_data[i1 * stride_0_0 + XX->size[0] * aux_0_1] +
                 XX_data[aux_1_1 + XX->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = XX->size[0] * XX->size[1];
  XX->size[0] = r->size[0];
  XX->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, XX, i, &nd_emlrtRTEI);
  XX_data = XX->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      XX_data[i1 + XX->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &m_emlrtRTEI, "MATLAB:innerdim",
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
          sp, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &m_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (eml_mtimes_helper.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gen_Omega.c
 *
 * Code generation for function 'Gen_Omega'
 *
 */

/* Include files */
#include "Gen_Omega.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo pf_emlrtRTEI =
    {
        5,           /* lineNo */
        6,           /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

/* Function Definitions */
void minus(const emlrtStack *sp, emxArray_real_T *Ym, const emxArray_real_T *r1)
{
  emxArray_real_T *b_Ym;
  const real_T *r;
  real_T *Ym_data;
  real_T *b_Ym_data;
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
  r = r1->data;
  Ym_data = Ym->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Ym, 2, &pf_emlrtRTEI);
  i = b_Ym->size[0] * b_Ym->size[1];
  if (r1->size[0] == 1) {
    b_Ym->size[0] = Ym->size[0];
  } else {
    b_Ym->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    b_Ym->size[1] = Ym->size[1];
  } else {
    b_Ym->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_Ym, i, &pf_emlrtRTEI);
  b_Ym_data = b_Ym->data;
  stride_0_0 = (Ym->size[0] != 1);
  stride_0_1 = (Ym->size[1] != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = Ym->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = Ym->size[0];
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Ym_data[i1 + b_Ym->size[0] * i] =
          Ym_data[i1 * stride_0_0 + Ym->size[0] * aux_0_1] -
          r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Ym->size[0] * Ym->size[1];
  Ym->size[0] = b_Ym->size[0];
  Ym->size[1] = b_Ym->size[1];
  emxEnsureCapacity_real_T(sp, Ym, i, &pf_emlrtRTEI);
  Ym_data = Ym->data;
  loop_ub = b_Ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Ym->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Ym_data[i1 + Ym->size[0] * i] = b_Ym_data[i1 + b_Ym->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_Ym);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Gen_Omega.c) */

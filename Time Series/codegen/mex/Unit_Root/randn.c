/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randn.c
 *
 * Code generation for function 'randn'
 *
 */

/* Include files */
#include "randn.h"
#include "Unit_Root.h"
#include "Unit_Root_emxutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo dh_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "randn",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pName */
};

/* Function Definitions */
real_T b_randn(void)
{
  real_T r;
  emlrtRandn(&r, 1);
  return r;
}

void randn(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *r)
{
  int32_T i;
  int32_T i1;
  i = (int32_T)varargin_1;
  i1 = r->size[0];
  r->size[0] = i;
  emxEnsureCapacity_real_T(sp, r, i1, &dh_emlrtRTEI);
  if (i != 0) {
    emlrtRandn(&r->data[0], (int32_T)varargin_1);
  }
}

/* End of code generation (randn.c) */

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
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "randn.h"
#include "Recursive_BVAR_emxutil.h"
#include "Recursive_BVAR_data.h"

/* Variable Definitions */
static emlrtRTEInfo ch_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "randn",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pName */
};

/* Function Definitions */
void randn(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *r)
{
  int32_T i27;
  i27 = r->size[0];
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &tc_emlrtDCI, sp);
  }

  r->size[0] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T2(sp, r, i27, &ch_emlrtRTEI);
  if (!(r->size[0] == 0)) {
    emlrtRandn(&r->data[0], r->size[0]);
  }
}

/* End of code generation (randn.c) */

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
#include "Ordinary_Regression_emxutil.h"
#include "Ordinary_Regression_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo
    wd_emlrtRTEI =
        {
            110,     /* lineNo */
            24,      /* colNo */
            "randn", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/randfun/"
            "randn.m" /* pName */
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
  real_T *r_data;
  int32_T i;
  i = r->size[0];
  r->size[0] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T(sp, r, i, &wd_emlrtRTEI);
  r_data = r->data;
  if ((int32_T)varargin_1 != 0) {
    emlrtRandn(&r_data[0], (int32_T)varargin_1);
  }
}

/* End of code generation (randn.c) */

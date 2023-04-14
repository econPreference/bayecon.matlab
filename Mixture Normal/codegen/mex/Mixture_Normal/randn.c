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
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo
    ke_emlrtRTEI =
        {
            110,     /* lineNo */
            24,      /* colNo */
            "randn", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/randfun/"
            "randn.m" /* pName */
};

/* Function Definitions */
void b_randn(const emlrtStack *sp, real_T varargin_1, real_T varargin_2,
             emxArray_real_T *r)
{
  real_T *r_data;
  int32_T i;
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)varargin_1;
  r->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity_real_T(sp, r, i, &ke_emlrtRTEI);
  r_data = r->data;
  if (((int32_T)varargin_1 != 0) && ((int32_T)varargin_2 != 0)) {
    emlrtRandn(&r_data[0], (int32_T)varargin_1 * (int32_T)varargin_2);
  }
}

void randn(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *r)
{
  real_T *r_data;
  int32_T i;
  i = r->size[0];
  r->size[0] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T(sp, r, i, &ke_emlrtRTEI);
  r_data = r->data;
  if ((int32_T)varargin_1 != 0) {
    emlrtRandn(&r_data[0], (int32_T)varargin_1);
  }
}

/* End of code generation (randn.c) */

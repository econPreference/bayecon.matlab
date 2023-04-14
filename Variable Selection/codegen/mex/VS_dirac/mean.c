/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "mean.h"
#include "VS_dirac_data.h"
#include "VS_dirac_types.h"
#include "blockedSummation.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo
    rb_emlrtRSI =
        {
            49,     /* lineNo */
            "mean", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pathName */
};

/* Function Definitions */
real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &l_emlrtRSI;
  y = blockedSummation(&b_st, x, x->size[0]);
  y /= (real_T)x->size[0];
  return y;
}

/* End of code generation (mean.c) */

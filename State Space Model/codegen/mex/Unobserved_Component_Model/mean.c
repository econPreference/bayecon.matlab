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
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_types.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo
    fc_emlrtRSI =
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
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &gc_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    c_st.site = &hc_emlrtRSI;
    d_st.site = &ic_emlrtRSI;
    y = sumMatrixColumns(&d_st, x, x->size[0]);
  }
  y /= (real_T)x->size[0];
  return y;
}

/* End of code generation (mean.c) */

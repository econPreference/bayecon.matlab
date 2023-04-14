/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "sum.h"
#include "VS_dirac_data.h"
#include "VS_dirac_types.h"
#include "blockedSummation.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &db_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  return blockedSummation(&c_st, x, x->size[0]);
}

/* End of code generation (sum.c) */

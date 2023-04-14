/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gamrnd.c
 *
 * Code generation for function 'gamrnd'
 *
 */

/* Include files */
#include "gamrnd.h"
#include "VS_dirac_data.h"
#include "randg.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T gamrnd(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T r;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &hb_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  d_st.site = &jb_emlrtRSI;
  y = scalar_randg(&d_st, a);
  r = b * y;
  if (b < 0.0) {
    r = rtNaN;
  }
  return r;
}

/* End of code generation (gamrnd.c) */

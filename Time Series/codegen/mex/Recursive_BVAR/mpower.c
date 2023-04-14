/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "mpower.h"
#include "error.h"
#include "Recursive_BVAR_data.h"

/* Variable Definitions */
static emlrtRSInfo te_emlrtRSI = { 61, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

/* Function Definitions */
real_T mpower(const emlrtStack *sp, real_T a, real_T b)
{
  real_T c;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &re_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &se_emlrtRSI;
  c = muDoubleScalarPower(a, b);
  if ((a < 0.0) && (!muDoubleScalarIsNaN(b)) && (muDoubleScalarFloor(b) != b)) {
    c_st.site = &te_emlrtRSI;
    f_error(&c_st);
  }

  return c;
}

/* End of code generation (mpower.c) */

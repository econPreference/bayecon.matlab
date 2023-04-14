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
#include "mpower.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T mpower(const emlrtStack *sp, real_T a, real_T b)
{
  real_T c;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ud_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &kb_emlrtRSI;
  c = muDoubleScalarPower(a, b);
  if ((a < 0.0) && (!muDoubleScalarIsNaN(b)) && (muDoubleScalarFloor(b) != b)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
      "Coder:toolbox:power_domainError", "Coder:toolbox:power_domainError", 0);
  }

  return c;
}

/* End of code generation (mpower.c) */

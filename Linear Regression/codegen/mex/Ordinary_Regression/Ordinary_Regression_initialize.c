/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Ordinary_Regression_initialize.c
 *
 * Code generation for function 'Ordinary_Regression_initialize'
 *
 */

/* Include files */
#include "Ordinary_Regression_initialize.h"
#include "Ordinary_Regression_data.h"
#include "_coder_Ordinary_Regression_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Ordinary_Regression_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, (const char_T *)"statistics_toolbox", 2);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (Ordinary_Regression_initialize.c) */

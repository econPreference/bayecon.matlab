/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Stochastic_Volatility_initialize.c
 *
 * Code generation for function 'Stochastic_Volatility_initialize'
 *
 */

/* Include files */
#include "Stochastic_Volatility_initialize.h"
#include "Stochastic_Volatility_data.h"
#include "_coder_Stochastic_Volatility_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Stochastic_Volatility_initialize(void)
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

/* End of code generation (Stochastic_Volatility_initialize.c) */

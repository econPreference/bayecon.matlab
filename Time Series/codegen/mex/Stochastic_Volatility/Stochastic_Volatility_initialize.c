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
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "Stochastic_Volatility_initialize.h"
#include "_coder_Stochastic_Volatility_mex.h"
#include "Stochastic_Volatility_data.h"

/* Function Definitions */
void Stochastic_Volatility_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Statistics_Toolbox", 2);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (Stochastic_Volatility_initialize.c) */

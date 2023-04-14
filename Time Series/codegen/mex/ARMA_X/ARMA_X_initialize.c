/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ARMA_X_initialize.c
 *
 * Code generation for function 'ARMA_X_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "ARMA_X_initialize.h"
#include "_coder_ARMA_X_mex.h"
#include "ARMA_X_data.h"

/* Function Definitions */
void ARMA_X_initialize(void)
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

/* End of code generation (ARMA_X_initialize.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Structure_BVAR_initialize.c
 *
 * Code generation for function 'Structure_BVAR_initialize'
 *
 */

/* Include files */
#include "Structure_BVAR_initialize.h"
#include "Structure_BVAR_data.h"
#include "_coder_Structure_BVAR_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Structure_BVAR_initialize(void)
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
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (Structure_BVAR_initialize.c) */

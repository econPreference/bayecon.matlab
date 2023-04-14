/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Mixture_Normal_initialize.c
 *
 * Code generation for function 'Mixture_Normal_initialize'
 *
 */

/* Include files */
#include "Mixture_Normal_initialize.h"
#include "Mixture_Normal_data.h"
#include "_coder_Mixture_Normal_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Mixture_Normal_initialize(void)
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

/* End of code generation (Mixture_Normal_initialize.c) */

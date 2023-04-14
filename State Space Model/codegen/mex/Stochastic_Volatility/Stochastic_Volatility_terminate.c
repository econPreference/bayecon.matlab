/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Stochastic_Volatility_terminate.c
 *
 * Code generation for function 'Stochastic_Volatility_terminate'
 *
 */

/* Include files */
#include "Stochastic_Volatility_terminate.h"
#include "Stochastic_Volatility_data.h"
#include "_coder_Stochastic_Volatility_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Stochastic_Volatility_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void Stochastic_Volatility_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Stochastic_Volatility_terminate.c) */

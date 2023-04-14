/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Reduced_BVAR_terminate.c
 *
 * Code generation for function 'Reduced_BVAR_terminate'
 *
 */

/* Include files */
#include "Reduced_BVAR_terminate.h"
#include "Reduced_BVAR_data.h"
#include "_coder_Reduced_BVAR_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Reduced_BVAR_atexit(void)
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

void Reduced_BVAR_terminate(void)
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

/* End of code generation (Reduced_BVAR_terminate.c) */

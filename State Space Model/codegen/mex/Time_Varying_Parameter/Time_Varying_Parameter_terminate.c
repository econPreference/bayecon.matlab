/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Time_Varying_Parameter_terminate.c
 *
 * Code generation for function 'Time_Varying_Parameter_terminate'
 *
 */

/* Include files */
#include "Time_Varying_Parameter_terminate.h"
#include "Time_Varying_Parameter_data.h"
#include "_coder_Time_Varying_Parameter_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Time_Varying_Parameter_atexit(void)
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

void Time_Varying_Parameter_terminate(void)
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

/* End of code generation (Time_Varying_Parameter_terminate.c) */

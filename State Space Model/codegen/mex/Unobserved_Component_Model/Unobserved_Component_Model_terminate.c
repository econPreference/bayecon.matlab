/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unobserved_Component_Model_terminate.c
 *
 * Code generation for function 'Unobserved_Component_Model_terminate'
 *
 */

/* Include files */
#include "Unobserved_Component_Model_terminate.h"
#include "Unobserved_Component_Model_data.h"
#include "_coder_Unobserved_Component_Model_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Unobserved_Component_Model_atexit(void)
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

void Unobserved_Component_Model_terminate(void)
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

/* End of code generation (Unobserved_Component_Model_terminate.c) */

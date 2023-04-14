/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Recursive_BVAR_initialize.c
 *
 * Code generation for function 'Recursive_BVAR_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "Recursive_BVAR_initialize.h"
#include "_coder_Recursive_BVAR_mex.h"
#include "Recursive_BVAR_data.h"

/* Function Definitions */
void Recursive_BVAR_initialize(void)
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
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (Recursive_BVAR_initialize.c) */

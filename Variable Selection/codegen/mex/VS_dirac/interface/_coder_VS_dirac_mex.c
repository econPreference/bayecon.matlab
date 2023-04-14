/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_VS_dirac_mex.c
 *
 * Code generation for function '_coder_VS_dirac_mex'
 *
 */

/* Include files */
#include "_coder_VS_dirac_mex.h"
#include "VS_dirac_data.h"
#include "VS_dirac_initialize.h"
#include "VS_dirac_terminate.h"
#include "_coder_VS_dirac_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void VS_dirac_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                          const mxArray *prhs[7])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        8, "VS_dirac");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "VS_dirac");
  }
  /* Call the function. */
  VS_dirac_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&VS_dirac_atexit);
  /* Module initialization. */
  VS_dirac_initialize();
  /* Dispatch the entry-point. */
  VS_dirac_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  VS_dirac_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_VS_dirac_mex.c) */

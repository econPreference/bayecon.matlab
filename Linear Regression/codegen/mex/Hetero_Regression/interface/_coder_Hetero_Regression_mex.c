/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Hetero_Regression_mex.c
 *
 * Code generation for function '_coder_Hetero_Regression_mex'
 *
 */

/* Include files */
#include "_coder_Hetero_Regression_mex.h"
#include "Hetero_Regression_data.h"
#include "Hetero_Regression_initialize.h"
#include "Hetero_Regression_terminate.h"
#include "_coder_Hetero_Regression_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Hetero_Regression_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                   const mxArray *prhs[12])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 12) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 12, 4,
                        17, "Hetero_Regression");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "Hetero_Regression");
  }
  /* Call the function. */
  Hetero_Regression_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Hetero_Regression_atexit);
  /* Module initialization. */
  Hetero_Regression_initialize();
  /* Dispatch the entry-point. */
  Hetero_Regression_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Hetero_Regression_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Hetero_Regression_mex.c) */

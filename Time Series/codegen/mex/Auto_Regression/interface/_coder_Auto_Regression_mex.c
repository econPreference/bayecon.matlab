/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Auto_Regression_mex.c
 *
 * Code generation for function '_coder_Auto_Regression_mex'
 *
 */

/* Include files */
#include "_coder_Auto_Regression_mex.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_initialize.h"
#include "Auto_Regression_terminate.h"
#include "_coder_Auto_Regression_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Auto_Regression_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                 const mxArray *prhs[14])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 14) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 14, 4,
                        15, "Auto_Regression");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "Auto_Regression");
  }
  /* Call the function. */
  Auto_Regression_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Auto_Regression_atexit);
  /* Module initialization. */
  Auto_Regression_initialize();
  /* Dispatch the entry-point. */
  Auto_Regression_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Auto_Regression_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Auto_Regression_mex.c) */

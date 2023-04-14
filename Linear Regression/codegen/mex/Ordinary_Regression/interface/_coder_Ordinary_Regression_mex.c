/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Ordinary_Regression_mex.c
 *
 * Code generation for function '_coder_Ordinary_Regression_mex'
 *
 */

/* Include files */
#include "_coder_Ordinary_Regression_mex.h"
#include "Ordinary_Regression_data.h"
#include "Ordinary_Regression_initialize.h"
#include "Ordinary_Regression_terminate.h"
#include "_coder_Ordinary_Regression_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Ordinary_Regression_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[11])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 11, 4,
                        19, "Ordinary_Regression");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "Ordinary_Regression");
  }
  /* Call the function. */
  Ordinary_Regression_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Ordinary_Regression_atexit);
  /* Module initialization. */
  Ordinary_Regression_initialize();
  /* Dispatch the entry-point. */
  Ordinary_Regression_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Ordinary_Regression_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Ordinary_Regression_mex.c) */

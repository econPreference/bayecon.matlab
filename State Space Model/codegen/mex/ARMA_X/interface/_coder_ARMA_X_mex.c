/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ARMA_X_mex.c
 *
 * Code generation for function '_coder_ARMA_X_mex'
 *
 */

/* Include files */
#include "_coder_ARMA_X_mex.h"
#include "ARMA_X_data.h"
#include "ARMA_X_initialize.h"
#include "ARMA_X_terminate.h"
#include "_coder_ARMA_X_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void ARMA_X_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                        const mxArray *prhs[17])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 17) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 17, 4,
                        6, "ARMA_X");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "ARMA_X");
  }
  /* Call the function. */
  ARMA_X_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&ARMA_X_atexit);
  /* Module initialization. */
  ARMA_X_initialize();
  /* Dispatch the entry-point. */
  ARMA_X_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  ARMA_X_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_ARMA_X_mex.c) */

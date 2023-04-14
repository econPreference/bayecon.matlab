/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Stochastic_Volatility_mex.c
 *
 * Code generation for function '_coder_Stochastic_Volatility_mex'
 *
 */

/* Include files */
#include "_coder_Stochastic_Volatility_mex.h"
#include "Stochastic_Volatility_data.h"
#include "Stochastic_Volatility_initialize.h"
#include "Stochastic_Volatility_terminate.h"
#include "_coder_Stochastic_Volatility_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Stochastic_Volatility_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                       int32_T nrhs, const mxArray *prhs[14])
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
                        21, "Stochastic_Volatility");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "Stochastic_Volatility");
  }
  /* Call the function. */
  Stochastic_Volatility_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Stochastic_Volatility_atexit);
  /* Module initialization. */
  Stochastic_Volatility_initialize();
  /* Dispatch the entry-point. */
  Stochastic_Volatility_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Stochastic_Volatility_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Stochastic_Volatility_mex.c) */

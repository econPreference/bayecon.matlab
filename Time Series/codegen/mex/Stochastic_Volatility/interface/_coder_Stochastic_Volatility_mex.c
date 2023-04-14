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
#include "Stochastic_Volatility.h"
#include "_coder_Stochastic_Volatility_mex.h"
#include "Stochastic_Volatility_terminate.h"
#include "_coder_Stochastic_Volatility_api.h"
#include "Stochastic_Volatility_initialize.h"
#include "Stochastic_Volatility_data.h"

/* Function Declarations */
static void c_Stochastic_Volatility_mexFunc(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[13]);

/* Function Definitions */
static void c_Stochastic_Volatility_mexFunc(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[13])
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 13) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 13, 4,
                        21, "Stochastic_Volatility");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "Stochastic_Volatility");
  }

  /* Call the function. */
  Stochastic_Volatility_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Stochastic_Volatility_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(Stochastic_Volatility_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Stochastic_Volatility_initialize();

  /* Dispatch the entry-point. */
  c_Stochastic_Volatility_mexFunc(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Stochastic_Volatility_mex.c) */

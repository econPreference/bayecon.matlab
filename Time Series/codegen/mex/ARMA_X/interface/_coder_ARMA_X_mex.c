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
#include "ARMA_X.h"
#include "_coder_ARMA_X_mex.h"
#include "ARMA_X_terminate.h"
#include "_coder_ARMA_X_api.h"
#include "ARMA_X_initialize.h"
#include "ARMA_X_data.h"

/* Function Declarations */
static void ARMA_X_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[16]);

/* Function Definitions */
static void ARMA_X_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[16])
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 16) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 16, 4,
                        6, "ARMA_X");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "ARMA_X");
  }

  /* Call the function. */
  ARMA_X_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  ARMA_X_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(ARMA_X_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  ARMA_X_initialize();

  /* Dispatch the entry-point. */
  ARMA_X_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_ARMA_X_mex.c) */

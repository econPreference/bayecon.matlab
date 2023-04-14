/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Common_Factor_Model_mex.c
 *
 * Code generation for function '_coder_Common_Factor_Model_mex'
 *
 */

/* Include files */
#include "_coder_Common_Factor_Model_mex.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_initialize.h"
#include "Common_Factor_Model_terminate.h"
#include "_coder_Common_Factor_Model_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Common_Factor_Model_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[10])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        19, "Common_Factor_Model");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "Common_Factor_Model");
  }
  /* Call the function. */
  Common_Factor_Model_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Common_Factor_Model_atexit);
  /* Module initialization. */
  Common_Factor_Model_initialize();
  /* Dispatch the entry-point. */
  Common_Factor_Model_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Common_Factor_Model_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Common_Factor_Model_mex.c) */

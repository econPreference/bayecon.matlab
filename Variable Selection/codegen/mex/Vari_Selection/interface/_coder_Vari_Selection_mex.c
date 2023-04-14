/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Vari_Selection_mex.c
 *
 * Code generation for function '_coder_Vari_Selection_mex'
 *
 */

/* Include files */
#include "_coder_Vari_Selection_mex.h"
#include "Vari_Selection_data.h"
#include "Vari_Selection_initialize.h"
#include "Vari_Selection_terminate.h"
#include "_coder_Vari_Selection_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Vari_Selection_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                const mxArray *prhs[10])
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
                        14, "Vari_Selection");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "Vari_Selection");
  }
  /* Call the function. */
  Vari_Selection_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Vari_Selection_atexit);
  /* Module initialization. */
  Vari_Selection_initialize();
  /* Dispatch the entry-point. */
  Vari_Selection_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Vari_Selection_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Vari_Selection_mex.c) */

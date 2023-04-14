/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Mixture_Normal_mex.c
 *
 * Code generation for function '_coder_Mixture_Normal_mex'
 *
 */

/* Include files */
#include "_coder_Mixture_Normal_mex.h"
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_initialize.h"
#include "Mixture_Normal_terminate.h"
#include "_coder_Mixture_Normal_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Mixture_Normal_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
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
                        14, "Mixture_Normal");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "Mixture_Normal");
  }
  /* Call the function. */
  Mixture_Normal_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Mixture_Normal_atexit);
  /* Module initialization. */
  Mixture_Normal_initialize();
  /* Dispatch the entry-point. */
  Mixture_Normal_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Mixture_Normal_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Mixture_Normal_mex.c) */

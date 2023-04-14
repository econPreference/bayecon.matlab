/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Unobserved_Component_Model_mex.c
 *
 * Code generation for function '_coder_Unobserved_Component_Model_mex'
 *
 */

/* Include files */
#include "_coder_Unobserved_Component_Model_mex.h"
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_initialize.h"
#include "Unobserved_Component_Model_terminate.h"
#include "_coder_Unobserved_Component_Model_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Unobserved_Component_Model_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                            int32_T nrhs,
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
                        26, "Unobserved_Component_Model");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 26,
                        "Unobserved_Component_Model");
  }
  /* Call the function. */
  Unobserved_Component_Model_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&Unobserved_Component_Model_atexit);
  /* Module initialization. */
  Unobserved_Component_Model_initialize();
  /* Dispatch the entry-point. */
  Unobserved_Component_Model_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  Unobserved_Component_Model_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Unobserved_Component_Model_mex.c) */

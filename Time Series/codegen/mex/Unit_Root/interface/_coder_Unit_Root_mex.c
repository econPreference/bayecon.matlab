/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Unit_Root_mex.c
 *
 * Code generation for function '_coder_Unit_Root_mex'
 *
 */

/* Include files */
#include "_coder_Unit_Root_mex.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_initialize.h"
#include "Unit_Root_terminate.h"
#include "_coder_Unit_Root_api.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void Unit_Root_mexFunction(int32_T nlhs, mxArray *plhs[3],
  int32_T nrhs, const mxArray *prhs[15]);

/* Function Definitions */
void Unit_Root_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs, const
  mxArray *prhs[15])
{
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 15) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 15, 4,
                        9, "Unit_Root");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "Unit_Root");
  }

  /* Call the function. */
  Unit_Root_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(Unit_Root_atexit);

  /* Module initialization. */
  Unit_Root_initialize();

  /* Dispatch the entry-point. */
  Unit_Root_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  Unit_Root_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Unit_Root_mex.c) */

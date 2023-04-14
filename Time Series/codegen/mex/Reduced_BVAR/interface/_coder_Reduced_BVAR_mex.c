/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Reduced_BVAR_mex.c
 *
 * Code generation for function '_coder_Reduced_BVAR_mex'
 *
 */

/* Include files */
#include "_coder_Reduced_BVAR_mex.h"
#include "Reduced_BVAR.h"
#include "Reduced_BVAR_data.h"
#include "Reduced_BVAR_initialize.h"
#include "Reduced_BVAR_terminate.h"
#include "_coder_Reduced_BVAR_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Reduced_BVAR_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[9])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        12, "Reduced_BVAR");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "Reduced_BVAR");
  }
  /* Call the function. */
  Reduced_BVAR_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static jmp_buf emlrtJBEnviron;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexAtExit(&Reduced_BVAR_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&Reduced_BVAR_nestLockGlobal);
  /* Module initialization. */
  Reduced_BVAR_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    Reduced_BVAR_mexFunction(nlhs, plhs, nrhs, prhs);
    /* Module termination. */
    Reduced_BVAR_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&Reduced_BVAR_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&Reduced_BVAR_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Reduced_BVAR_mex.c) */

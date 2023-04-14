/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Time_Varying_Parameter_mex.c
 *
 * Code generation for function '_coder_Time_Varying_Parameter_mex'
 *
 */

/* Include files */
#include "_coder_Time_Varying_Parameter_mex.h"
#include "Time_Varying_Parameter.h"
#include "Time_Varying_Parameter_data.h"
#include "Time_Varying_Parameter_initialize.h"
#include "Time_Varying_Parameter_terminate.h"
#include "_coder_Time_Varying_Parameter_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void Time_Varying_Parameter_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                        int32_T nrhs, const mxArray *prhs[18])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 18) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 18, 4,
                        22, "Time_Varying_Parameter");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "Time_Varying_Parameter");
  }
  /* Call the function. */
  Time_Varying_Parameter_api(prhs, &outputs);
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
  mexAtExit(&Time_Varying_Parameter_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&Time_Varying_Parameter_nestLockGlobal);
  /* Module initialization. */
  Time_Varying_Parameter_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    Time_Varying_Parameter_mexFunction(nlhs, plhs, nrhs, prhs);
    /* Module termination. */
    Time_Varying_Parameter_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&Time_Varying_Parameter_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&Time_Varying_Parameter_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Time_Varying_Parameter_mex.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * applyScalarFunctionInPlace.c
 *
 * Code generation for function 'applyScalarFunctionInPlace'
 *
 */

/* Include files */
#include "applyScalarFunctionInPlace.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "gammaln.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo qk_emlrtRSI = {
    26,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo rk_emlrtRSI = {
    27,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

/* Function Definitions */
void applyScalarFunctionInPlace(const emlrtStack *sp, emxArray_real_T *x)
{
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T *x_data;
  int32_T k;
  int32_T ub_loop;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  st.site = &qk_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    b_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  ub_loop = x->size[1] - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
#pragma omp parallel num_threads(                                              \
    emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(),    \
                         omp_get_num_procs())) private(emlrtJBEnviron, d_st)   \
    firstprivate(c_st, emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {

      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = NULL;
      emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (k = 0; k <= ub_loop; k++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {

        d_st.site = &rk_emlrtRSI;
        scalar_gammaln(&d_st, &x_data[k]);
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

void b_applyScalarFunctionInPlace(const emlrtStack *sp, emxArray_real_T *x)
{
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T *x_data;
  int32_T k;
  int32_T nx;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  nx = x->size[0] * x->size[1];
  st.site = &qk_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    b_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  nx--;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
#pragma omp parallel num_threads(                                              \
    emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(),    \
                         omp_get_num_procs())) private(emlrtJBEnviron, d_st)   \
    firstprivate(c_st, emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {

      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = NULL;
      emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (k = 0; k <= nx; k++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {

        d_st.site = &rk_emlrtRSI;
        scalar_gammaln(&d_st, &x_data[k]);
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

/* End of code generation (applyScalarFunctionInPlace.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eye.c
 *
 * Code generation for function 'eye'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "eye.h"
#include "Stochastic_Volatility_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "assertValidSizeArg.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo hf_emlrtRSI = { 49, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 92,/* lineNo */
  5,                                   /* colNo */
  "eye",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pName */
};

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *I)
{
  real_T t;
  int32_T k;
  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }

  b_st.site = &jf_emlrtRSI;
  assertValidSizeArg(&b_st, t);
  k = I->size[0] * I->size[1];
  I->size[0] = (int32_T)t;
  I->size[1] = (int32_T)t;
  emxEnsureCapacity_real_T1(sp, I, k, &lg_emlrtRTEI);
  loop_ub = (int32_T)t * (int32_T)t;
  for (k = 0; k < loop_ub; k++) {
    I->data[k] = 0.0;
  }

  if ((int32_T)t > 0) {
    st.site = &if_emlrtRSI;
    if ((!(1 > (int32_T)t)) && ((int32_T)t > 2147483646)) {
      b_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k < (int32_T)t; k++) {
      I->data[k + I->size[0] * k] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */

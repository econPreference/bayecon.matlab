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
#include "eye.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "assertValidSizeArg.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo jd_emlrtRSI = { 50, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 94,/* lineNo */
  5,                                   /* colNo */
  "eye",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pName */
};

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I)
{
  real_T t;
  int32_T m_tmp;
  int32_T k;
  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }

  b_st.site = &ld_emlrtRSI;
  assertValidSizeArg(&b_st, t);
  m_tmp = (int32_T)t;
  k = b_I->size[0] * b_I->size[1];
  b_I->size[0] = m_tmp;
  b_I->size[1] = m_tmp;
  emxEnsureCapacity_real_T(sp, b_I, k, &ag_emlrtRTEI);
  loop_ub = m_tmp * m_tmp;
  for (k = 0; k < loop_ub; k++) {
    b_I->data[k] = 0.0;
  }

  if (m_tmp > 0) {
    st.site = &kd_emlrtRSI;
    if (m_tmp > 2147483646) {
      b_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k < m_tmp; k++) {
      b_I->data[k + b_I->size[0] * k] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */

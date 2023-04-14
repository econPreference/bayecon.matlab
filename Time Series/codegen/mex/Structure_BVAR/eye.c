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
#include "Structure_BVAR_data.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo yd_emlrtRSI = {
    50,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

static emlrtRSInfo be_emlrtRSI = {
    21,                           /* lineNo */
    "checkAndSaturateExpandSize", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "checkAndSaturateExpandSize.m" /* pathName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    94,    /* lineNo */
    5,     /* colNo */
    "eye", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pName
                                                                          */
};

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_t;
  real_T t;
  real_T *I_data;
  int32_T i;
  int32_T loop_ub;
  int32_T m_tmp_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }
  b_st.site = &be_emlrtRSI;
  if ((t != muDoubleScalarFloor(t)) || muDoubleScalarIsInf(t) ||
      (t < -2.147483648E+9) || (t > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (t <= 0.0) {
    b_t = 0.0;
  } else {
    b_t = t;
  }
  if (!(b_t <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  m_tmp_tmp = (int32_T)t;
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = (int32_T)t;
  b_I->size[1] = (int32_T)t;
  emxEnsureCapacity_real_T(sp, b_I, i, &ue_emlrtRTEI);
  I_data = b_I->data;
  loop_ub = (int32_T)t * (int32_T)t;
  for (i = 0; i < loop_ub; i++) {
    I_data[i] = 0.0;
  }
  if ((int32_T)t > 0) {
    st.site = &ae_emlrtRSI;
    if ((1 <= (int32_T)t) && ((int32_T)t > 2147483646)) {
      b_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (loop_ub = 0; loop_ub < m_tmp_tmp; loop_ub++) {
      I_data[loop_ub + b_I->size[0] * loop_ub] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * diff.c
 *
 * Code generation for function 'diff'
 *
 */

/* Include files */
#include "diff.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    ue_emlrtRSI =
        {
            108,    /* lineNo */
            "diff", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "diff.m" /* pathName */
};

static emlrtRSInfo
    ve_emlrtRSI =
        {
            106,    /* lineNo */
            "diff", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "diff.m" /* pathName */
};

static emlrtRTEInfo
    ab_emlrtRTEI =
        {
            51,     /* lineNo */
            19,     /* colNo */
            "diff", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "diff.m" /* pName */
};

static emlrtRTEInfo
    yg_emlrtRTEI =
        {
            78,     /* lineNo */
            21,     /* colNo */
            "diff", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "diff.m" /* pName */
};

/* Function Definitions */
void diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *x_data;
  real_T tmp2;
  real_T work_data;
  real_T *y_data;
  int32_T dimSize;
  int32_T m;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  dimSize = x->size[0];
  if (x->size[0] == 0) {
    y->size[0] = 0;
  } else {
    m = x->size[0] - 1;
    if (muIntScalarMin_sint32(m, 1) < 1) {
      y->size[0] = 0;
    } else {
      if (x->size[0] == 1) {
        emlrtErrorWithMessageIdR2018a(
            sp, &ab_emlrtRTEI, "Coder:toolbox:autoDimIncompatibility",
            "Coder:toolbox:autoDimIncompatibility", 0);
      }
      m = y->size[0];
      y->size[0] = x->size[0] - 1;
      emxEnsureCapacity_real_T(sp, y, m, &yg_emlrtRTEI);
      y_data = y->data;
      work_data = x_data[0];
      st.site = &ve_emlrtRSI;
      if (x->size[0] > 2147483646) {
        b_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (m = 2; m <= dimSize; m++) {
        st.site = &ue_emlrtRSI;
        tmp2 = work_data;
        work_data = x_data[m - 1];
        y_data[m - 2] = work_data - tmp2;
      }
    }
  }
}

/* End of code generation (diff.c) */

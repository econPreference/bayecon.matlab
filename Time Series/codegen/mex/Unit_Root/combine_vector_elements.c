/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combine_vector_elements.c
 *
 * Code generation for function 'combine_vector_elements'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Unit_Root.h"
#include "combine_vector_elements.h"
#include "eml_int_forloop_overflow_check.h"
#include "Unit_Root_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 36, "combine_vector_elements",
  "D:\\MATLAB\\R2015b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

/* Function Definitions */
real_T combine_vector_elements(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &gb_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = false;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 2; k <= x->size[0]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

/* End of code generation (combine_vector_elements.c) */

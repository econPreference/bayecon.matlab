/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "log.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo ic_emlrtRSI = { 16, /* lineNo */
  "log",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pathName */
};

/* Function Definitions */
void b_log(const emlrtStack *sp, emxArray_real_T *x)
{
  boolean_T overflow;
  int32_T k;
  int32_T nx;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = false;
  for (k = 0; k < x->size[0]; k++) {
    if (overflow || (x->data[k] < 0.0)) {
      overflow = true;
    } else {
      overflow = false;
    }
  }

  if (overflow) {
    st.site = &hc_emlrtRSI;
    c_error(&st);
  }

  st.site = &ic_emlrtRSI;
  nx = x->size[0];
  b_st.site = &jc_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarLog(x->data[k]);
  }
}

/* End of code generation (log.c) */

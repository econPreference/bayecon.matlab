/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "error.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_mexutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 18};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 18, m, &cv[0]);
  emlrtAssign(&y, m);
  st.site = &il_emlrtRSI;
  c_error(&st, y, &o_emlrtMCI);
}

/* End of code generation (error.c) */

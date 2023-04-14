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
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "error.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_data.h"

/* Function Definitions */
void error(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv18[2] = { 1, 18 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m2 = emlrtCreateCharArray(2, iv18);
  emlrtInitCharArrayR2013a(sp, 18, m2, &cv1[0]);
  emlrtAssign(&y, m2);
  st.site = &um_emlrtRSI;
  m_error(&st, y, &v_emlrtMCI);
}

/* End of code generation (error.c) */

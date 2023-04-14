/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error1.c
 *
 * Code generation for function 'error1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "error1.h"
#include "lnpdfmvn.h"
#include "Stochastic_Volatility_mexutil.h"
#include "Stochastic_Volatility_data.h"

/* Function Definitions */
void e_error(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv27[2] = { 1, 18 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv27);
  emlrtInitCharArrayR2013a(sp, 18, m5, &cv1[0]);
  emlrtAssign(&y, m5);
  st.site = &yl_emlrtRSI;
  m_error(&st, y, &ab_emlrtMCI);
}

/* End of code generation (error1.c) */

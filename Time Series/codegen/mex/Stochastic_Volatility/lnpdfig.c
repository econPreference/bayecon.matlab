/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfig.c
 *
 * Code generation for function 'lnpdfig'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "lnpdfig.h"
#include "error.h"
#include "gammaln.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo hk_emlrtRSI = { 16, /* lineNo */
  "lnpdfig",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfig.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 17, /* lineNo */
  "lnpdfig",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfig.m"/* pathName */
};

/* Function Definitions */
real_T lnpdfig(const emlrtStack *sp, real_T sig2, real_T a, real_T b)
{
  real_T d1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*    to compute the inverted gamma density on a grid */
  /*    beta is also a vector  */
  /*    outputs the log of the density */
  /*  sig2가 벡터인 경우를 대비 */
  /*  이 경우, 각각의 원소에 대해 우도를 계산해줌 */
  st.site = &hk_emlrtRSI;
  if (b < 0.0) {
    b_st.site = &hc_emlrtRSI;
    c_error(&b_st);
  }

  d1 = a;
  st.site = &hk_emlrtRSI;
  gammaln(&st, &d1);
  st.site = &ik_emlrtRSI;
  if (sig2 < 0.0) {
    b_st.site = &hc_emlrtRSI;
    c_error(&b_st);
  }

  return ((a * muDoubleScalarLog(b) - d1) - (a + 1.0) * muDoubleScalarLog(sig2))
    - b / sig2;
}

/* End of code generation (lnpdfig.c) */

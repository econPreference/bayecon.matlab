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
#include "ARMA_X.h"
#include "lnpdfig.h"
#include "error1.h"
#include "gammaln.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
static emlrtRSInfo el_emlrtRSI = { 16, /* lineNo */
  "lnpdfig",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfig.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 17, /* lineNo */
  "lnpdfig",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\lnpdfig.m"/* pathName */
};

/* Function Definitions */
real_T lnpdfig(const emlrtStack *sp, real_T sig2, real_T a, real_T b)
{
  real_T d0;
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
  st.site = &el_emlrtRSI;
  if (b < 0.0) {
    b_st.site = &pg_emlrtRSI;
    g_error(&b_st);
  }

  d0 = a;
  st.site = &el_emlrtRSI;
  gammaln(&st, &d0);
  st.site = &fl_emlrtRSI;
  if (sig2 < 0.0) {
    b_st.site = &pg_emlrtRSI;
    g_error(&b_st);
  }

  return ((a * muDoubleScalarLog(b) - d0) - (a + 1.0) * muDoubleScalarLog(sig2))
    - b / sig2;
}

/* End of code generation (lnpdfig.c) */

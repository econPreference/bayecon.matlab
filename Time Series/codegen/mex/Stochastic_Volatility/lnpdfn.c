/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfn.c
 *
 * Code generation for function 'lnpdfn'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "lnpdfn.h"
#include "error.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo ji_emlrtRSI = { 12, /* lineNo */
  "lnpdfn",                            /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\lnpdfn.m"/* pathName */
};

/* Function Definitions */
real_T lnpdfn(const emlrtStack *sp, real_T x, real_T mu, real_T sig2vec)
{
  real_T b_x;
  real_T e;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  log pdf of normal(정규분포의 확률밀도함수의 로그값) */
  /*  x = normal variates */
  /*  mu = vector of means */
  /*  sig2vec = vector of variances */
  /*  (관측치간 자기상관이 없다고 가정하므로 개별 관측치마다 우도함수값을 계산하는 것) */
  st.site = &ji_emlrtRSI;
  b_x = 2.0 * sig2vec * 3.1415926535897931;
  if (b_x < 0.0) {
    b_st.site = &hc_emlrtRSI;
    c_error(&b_st);
  }

  e = x - mu;
  return -0.5 * muDoubleScalarLog(b_x) - 0.5 * (e * e) / sig2vec;
}

/* End of code generation (lnpdfn.c) */

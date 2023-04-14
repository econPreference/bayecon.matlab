/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gamrnd.c
 *
 * Code generation for function 'gamrnd'
 *
 */

/* Include files */
#include "gamrnd.h"
#include "ARMA_X_data.h"
#include "mpower.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo dj_emlrtRSI = {
    11,                                                          /* lineNo */
    "gamrnd",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m" /* pathName */
};

static emlrtRSInfo
    ej_emlrtRSI =
        {
            1,     /* lineNo */
            "rnd", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "rnd.p" /* pathName */
};

static emlrtRSInfo fj_emlrtRSI = {
    1,        /* lineNo */
    "gamrnd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "gamrnd.p" /* pathName */
};

static emlrtRSInfo gj_emlrtRSI = {
    1,       /* lineNo */
    "randg", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "randg.p" /* pathName */
};

/* Function Definitions */
real_T gamrnd(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T ur[2];
  real_T c;
  real_T d;
  real_T p;
  real_T r;
  real_T u;
  real_T v;
  real_T x;
  int32_T exitg1;
  int32_T iter;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ej_emlrtRSI;
  c_st.site = &fj_emlrtRSI;
  d_st.site = &gj_emlrtRSI;
  if (a <= 0.0) {
    if (a == 0.0) {
      d = 0.0;
    } else {
      d = rtNaN;
    }
  } else if ((!muDoubleScalarIsInf(a)) && (!muDoubleScalarIsNaN(a))) {
    if (a >= 1.0) {
      d = a - 0.33333333333333331;
      u = b_rand();
      p = 1.0;
    } else {
      d = (a + 1.0) - 0.33333333333333331;
      c_rand(ur);
      u = ur[0];
      if (a < 7.4567656047833286E-20) {
        p = 0.0;
      } else {
        e_st.site = &gj_emlrtRSI;
        p = mpower(&e_st, ur[1], 1.0 / a);
      }
    }
    c = 1.0 / muDoubleScalarSqrt(9.0 * d);
    iter = 0;
    x = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * x + 1.0) {
        x = b_randn();
      }
      v *= v * v;
      x *= x;
      if (u < 1.0 - 0.0331 * x * x) {
        exitg1 = 1;
      } else {
        e_st.site = &gj_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &y_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        if (muDoubleScalarLog(u) <
            0.5 * x + d * ((1.0 - v) + muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            e_st.site = &gj_emlrtRSI;
            e_warning(&e_st);
            exitg1 = 1;
          } else {
            u = b_rand();
          }
        }
      }
    } while (exitg1 == 0);
    d = d * v * p;
  } else {
    d = a;
  }
  r = b * d;
  if (b < 0.0) {
    r = rtNaN;
  }
  return r;
}

/* End of code generation (gamrnd.c) */

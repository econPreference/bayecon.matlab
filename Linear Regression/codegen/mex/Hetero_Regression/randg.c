/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randg.c
 *
 * Code generation for function 'randg'
 *
 */

/* Include files */
#include "randg.h"
#include "Hetero_Regression_data.h"
#include "mpower.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo he_emlrtRSI = {
    1,       /* lineNo */
    "randg", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "randg.p" /* pathName */
};

/* Function Definitions */
real_T randg(const emlrtStack *sp, real_T a)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T ur[2];
  real_T c;
  real_T d;
  real_T p;
  real_T u;
  real_T v;
  real_T x;
  real_T y;
  int32_T exitg1;
  int32_T iter;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &he_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a <= 0.0) {
    if (a == 0.0) {
      y = 0.0;
    } else {
      y = rtNaN;
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
        b_st.site = &he_emlrtRSI;
        p = mpower(&b_st, ur[1], 1.0 / a);
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
        b_st.site = &he_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        if (muDoubleScalarLog(u) <
            0.5 * x + d * ((1.0 - v) + muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            b_st.site = &he_emlrtRSI;
            warning(&b_st);
            exitg1 = 1;
          } else {
            u = b_rand();
          }
        }
      }
    } while (exitg1 == 0);
    y = d * v * p;
  } else {
    y = a;
  }
  return y;
}

/* End of code generation (randg.c) */

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
#include "VS_dirac_data.h"
#include "mpower.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = {
    14,    /* lineNo */
    9,     /* colNo */
    "log", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/log.m" /* pName
                                                                          */
};

/* Function Definitions */
real_T scalar_randg(const emlrtStack *sp, real_T a)
{
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
        st.site = &jb_emlrtRSI;
        p = mpower(&st, ur[1], 1.0 / a);
      }
    }
    c = 1.0 / muDoubleScalarSqrt(9.0 * d);
    iter = 0;
    x = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * x + 1.0) {
        x = randn();
      }
      v *= v * v;
      x *= x;
      if (u < 1.0 - 0.0331 * x * x) {
        exitg1 = 1;
      } else {
        st.site = &jb_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        if (muDoubleScalarLog(u) <
            0.5 * x + d * ((1.0 - v) + muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            st.site = &jb_emlrtRSI;
            warning(&st);
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

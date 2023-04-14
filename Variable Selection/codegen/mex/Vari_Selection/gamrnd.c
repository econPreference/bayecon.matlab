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
#include "Vari_Selection_data.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo md_emlrtRSI = {
    11,                                                          /* lineNo */
    "gamrnd",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m" /* pathName */
};

static emlrtRSInfo
    nd_emlrtRSI =
        {
            1,     /* lineNo */
            "rnd", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "rnd.p" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    1,        /* lineNo */
    "gamrnd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "gamrnd.p" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    1,       /* lineNo */
    "randg", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "randg.p" /* pathName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    82,         /* lineNo */
    5,          /* colNo */
    "fltpower", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pName
                                                                          */
};

/* Function Definitions */
real_T gamrnd(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  st.site = &md_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  b_st.site = &nd_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  d_st.site = &pd_emlrtRSI;
  if (a <= 0.0) {
    if (a == 0.0) {
      p = 0.0;
    } else {
      p = rtNaN;
    }
  } else if ((!muDoubleScalarIsInf(a)) && (!muDoubleScalarIsNaN(a))) {
    if (a >= 1.0) {
      d = a - 0.33333333333333331;
      e_st.site = &pd_emlrtRSI;
      u = b_rand();
      p = 1.0;
    } else {
      d = (a + 1.0) - 0.33333333333333331;
      e_st.site = &pd_emlrtRSI;
      c_rand(ur);
      u = ur[0];
      if (a < 7.4567656047833286E-20) {
        p = 0.0;
      } else {
        p = 1.0 / a;
        e_st.site = &pd_emlrtRSI;
        f_st.site = &mb_emlrtRSI;
        g_st.site = &nb_emlrtRSI;
        if ((ur[1] < 0.0) && (!muDoubleScalarIsNaN(p)) &&
            (muDoubleScalarFloor(p) != p)) {
          emlrtErrorWithMessageIdR2018a(&g_st, &l_emlrtRTEI,
                                        "Coder:toolbox:power_domainError",
                                        "Coder:toolbox:power_domainError", 0);
        }
        p = muDoubleScalarPower(ur[1], p);
      }
    }
    e_st.site = &pd_emlrtRSI;
    c = 1.0 / muDoubleScalarSqrt(9.0 * d);
    iter = 0;
    x = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * x + 1.0) {
        e_st.site = &pd_emlrtRSI;
        x = b_randn();
      }
      v *= v * v;
      x *= x;
      if (u < 1.0 - 0.0331 * x * x) {
        exitg1 = 1;
      } else {
        e_st.site = &pd_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        e_st.site = &pd_emlrtRSI;
        if (muDoubleScalarLog(u) <
            0.5 * x + d * ((1.0 - v) + muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            e_st.site = &pd_emlrtRSI;
            c_warning(&e_st);
            exitg1 = 1;
          } else {
            e_st.site = &pd_emlrtRSI;
            u = b_rand();
          }
        }
      }
    } while (exitg1 == 0);
    p *= d * v;
  } else {
    p = a;
  }
  r = b * p;
  if (b < 0.0) {
    r = rtNaN;
  }
  return r;
}

/* End of code generation (gamrnd.c) */

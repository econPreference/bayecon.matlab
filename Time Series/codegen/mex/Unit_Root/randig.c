/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randig.c
 *
 * Code generation for function 'randig'
 *
 */

/* Include files */
#include "randig.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "mpower.h"
#include "mwmathutil.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo lg_emlrtRSI = { 9,  /* lineNo */
  "randig",                            /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\randig.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 13, /* lineNo */
  "randgam",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\randgam.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 11, /* lineNo */
  "gamrnd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\stats\\eml\\gamrnd.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 1,  /* lineNo */
  "rnd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\rnd.p"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 1,  /* lineNo */
  "gamrnd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\private\\gamrnd.p"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 1,  /* lineNo */
  "randg",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\private\\randg.p"/* pathName */
};

/* Function Definitions */
real_T randig(const emlrtStack *sp, real_T alpha, real_T beta)
{
  real_T b;
  real_T gam;
  real_T ur[2];
  real_T u;
  real_T p;
  real_T c;
  int32_T iter;
  real_T x;
  int32_T exitg1;
  real_T v;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
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

  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  /*  m,n: 난수 행렬의 크기 */
  st.site = &lg_emlrtRSI;

  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b = 1.0 / beta;
  b_st.site = &mg_emlrtRSI;
  c_st.site = &ng_emlrtRSI;
  d_st.site = &og_emlrtRSI;
  e_st.site = &pg_emlrtRSI;
  f_st.site = &qg_emlrtRSI;
  if (alpha <= 0.0) {
    if (alpha == 0.0) {
      gam = 0.0;
    } else {
      gam = rtNaN;
    }
  } else if ((!muDoubleScalarIsInf(alpha)) && (!muDoubleScalarIsNaN(alpha))) {
    if (alpha >= 1.0) {
      gam = alpha - 0.33333333333333331;
      u = b_rand();
      p = 1.0;
    } else {
      gam = (alpha + 1.0) - 0.33333333333333331;
      c_rand(ur);
      u = ur[0];
      if (alpha < 7.4567656047833286E-20) {
        p = 0.0;
      } else {
        g_st.site = &qg_emlrtRSI;
        p = mpower(&g_st, ur[1], 1.0 / alpha);
      }
    }

    c = 1.0 / muDoubleScalarSqrt(9.0 * gam);
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
        g_st.site = &qg_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(&g_st, &w_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 3, "log");
        }

        if (muDoubleScalarLog(u) < 0.5 * x + gam * ((1.0 - v) +
             muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            g_st.site = &qg_emlrtRSI;
            c_warning(&g_st);
            exitg1 = 1;
          } else {
            u = b_rand();
          }
        }
      }
    } while (exitg1 == 0);

    gam = gam * v * p;
  } else {
    gam = alpha;
  }

  gam *= b;
  if (b < 0.0) {
    gam = rtNaN;
  }

  return 1.0 / gam;
}

/* End of code generation (randig.c) */

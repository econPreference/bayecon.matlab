/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xdlanv2.c
 *
 * Code generation for function 'xdlanv2'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "xdlanv2.h"
#include "error.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo vg_emlrtRSI = { 44, /* lineNo */
  "xdlanv2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xdlanv2.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 58, /* lineNo */
  "xdlanv2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xdlanv2.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 79, /* lineNo */
  "xdlanv2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xdlanv2.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 80, /* lineNo */
  "xdlanv2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xdlanv2.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 82, /* lineNo */
  "xdlanv2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xdlanv2.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 110,/* lineNo */
  "xdlanv2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xdlanv2.m"/* pathName */
};

/* Function Definitions */
void xdlanv2(const emlrtStack *sp, real_T *a, real_T *b, real_T *c, real_T *d,
             real_T *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs,
             real_T *sn)
{
  real_T temp;
  real_T p;
  real_T bcmax;
  int32_T b_b;
  int32_T b_c;
  real_T bcmis;
  real_T scale;
  real_T z;
  real_T tau;
  real_T b_p;
  int32_T b_bcmis;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (*c == 0.0) {
    *cs = 1.0;
    *sn = 0.0;
  } else if (*b == 0.0) {
    *cs = 0.0;
    *sn = 1.0;
    temp = *d;
    *d = *a;
    *a = temp;
    *b = -*c;
    *c = 0.0;
  } else if ((*a - *d == 0.0) && ((*b < 0.0) != (*c < 0.0))) {
    *cs = 1.0;
    *sn = 0.0;
  } else {
    temp = *a - *d;
    p = 0.5 * temp;
    bcmax = muDoubleScalarMax(muDoubleScalarAbs(*b), muDoubleScalarAbs(*c));
    if (!(*b < 0.0)) {
      b_b = 1;
    } else {
      b_b = -1;
    }

    if (!(*c < 0.0)) {
      b_c = 1;
    } else {
      b_c = -1;
    }

    bcmis = muDoubleScalarMin(muDoubleScalarAbs(*b), muDoubleScalarAbs(*c)) *
      (real_T)b_b * (real_T)b_c;
    scale = muDoubleScalarMax(muDoubleScalarAbs(p), bcmax);
    z = p / scale * p + bcmax / scale * bcmis;
    if (z >= 8.8817841970012523E-16) {
      st.site = &vg_emlrtRSI;
      st.site = &vg_emlrtRSI;
      *a = muDoubleScalarSqrt(scale) * muDoubleScalarSqrt(z);
      if (!(p < 0.0)) {
        b_p = *a;
      } else {
        b_p = -*a;
      }

      z = p + b_p;
      *a = *d + z;
      *d -= bcmax / z * bcmis;
      tau = muDoubleScalarHypot(*c, z);
      *cs = z / tau;
      *sn = *c / tau;
      *b -= *c;
      *c = 0.0;
    } else {
      bcmis = *b + *c;
      tau = muDoubleScalarHypot(bcmis, temp);
      st.site = &wg_emlrtRSI;
      bcmax = 0.5 * (1.0 + muDoubleScalarAbs(bcmis) / tau);
      if (bcmax < 0.0) {
        b_st.site = &gf_emlrtRSI;
        f_error(&b_st);
      }

      *cs = muDoubleScalarSqrt(bcmax);
      if (!(bcmis < 0.0)) {
        b_bcmis = 1;
      } else {
        b_bcmis = -1;
      }

      *sn = -(p / (tau * *cs)) * (real_T)b_bcmis;
      z = *a * *cs + *b * *sn;
      bcmis = -*a * *sn + *b * *cs;
      scale = *c * *cs + *d * *sn;
      bcmax = -*c * *sn + *d * *cs;
      *b = bcmis * *cs + bcmax * *sn;
      *c = -z * *sn + scale * *cs;
      temp = 0.5 * ((z * *cs + scale * *sn) + (-bcmis * *sn + bcmax * *cs));
      *a = temp;
      *d = temp;
      if (*c != 0.0) {
        if (*b != 0.0) {
          if ((*b < 0.0) == (*c < 0.0)) {
            st.site = &xg_emlrtRSI;
            bcmax = muDoubleScalarSqrt(muDoubleScalarAbs(*b));
            st.site = &yg_emlrtRSI;
            scale = muDoubleScalarSqrt(muDoubleScalarAbs(*c));
            *a = bcmax * scale;
            if (!(*c < 0.0)) {
              p = *a;
            } else {
              p = -*a;
            }

            st.site = &ah_emlrtRSI;
            tau = 1.0 / muDoubleScalarSqrt(muDoubleScalarAbs(*b + *c));
            *a = temp + p;
            *d = temp - p;
            *b -= *c;
            *c = 0.0;
            bcmis = bcmax * tau;
            bcmax = scale * tau;
            temp = *cs * bcmis - *sn * bcmax;
            *sn = *cs * bcmax + *sn * bcmis;
            *cs = temp;
          }
        } else {
          *b = -*c;
          *c = 0.0;
          temp = *cs;
          *cs = -*sn;
          *sn = temp;
        }
      }
    }
  }

  *rt1r = *a;
  *rt2r = *d;
  if (*c == 0.0) {
    *rt1i = 0.0;
    *rt2i = 0.0;
  } else {
    st.site = &bh_emlrtRSI;
    st.site = &bh_emlrtRSI;
    *rt1i = muDoubleScalarSqrt(muDoubleScalarAbs(*b)) * muDoubleScalarSqrt
      (muDoubleScalarAbs(*c));
    *rt2i = -*rt1i;
  }
}

/* End of code generation (xdlanv2.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * logMvGamma.c
 *
 * Code generation for function 'logMvGamma'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "logMvGamma.h"
#include "Recursive_BVAR_emxutil.h"
#include "gammaln.h"
#include "eml_int_forloop_overflow_check.h"
#include "Recursive_BVAR_data.h"

/* Variable Definitions */
static emlrtRSInfo xb_emlrtRSI = { 22, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 14, /* lineNo */
  "logMvGamma",                        /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\logMvGamma.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 15, /* lineNo */
  "logMvGamma",                        /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\logMvGamma.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 63, /* lineNo */
  "bsxfun",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 105,/* lineNo */
  "bsxfun",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 95, /* lineNo */
  "bsxfun",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 10, /* lineNo */
  "gammaln",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaln.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 24, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 25, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 14,/* lineNo */
  32,                                  /* colNo */
  "logMvGamma",                        /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\logMvGamma.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 14,/* lineNo */
  5,                                   /* colNo */
  "logMvGamma",                        /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\logMvGamma.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 1,/* lineNo */
  25,                                  /* colNo */
  "logMvGamma",                        /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\logMvGamma.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 14,/* lineNo */
  36,                                  /* colNo */
  "logMvGamma",                        /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\logMvGamma.m"/* pName */
};

static emlrtRTEInfo fl_emlrtRTEI = { 50,/* lineNo */
  15,                                  /* colNo */
  "bsxfun",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"/* pName */
};

/* Function Definitions */
real_T logMvGamma(const emlrtStack *sp, real_T x, real_T d)
{
  real_T y;
  emxArray_real_T *b_y;
  int32_T bcoef;
  int32_T sck;
  emxArray_real_T *b;
  int32_T i39;
  emxArray_real_T *b_x;
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Compute logarithm multivariate Gamma function  */
  /*  which is used in the probability density function of the Wishart and inverse Wishart distributions. */
  /*  Gamma_d(x) = pi^(d(d-1)/4) \prod_(j=1)^d Gamma(x+(1-j)/2) */
  /*  log(Gamma_d(x)) = d(d-1)/4 log(pi) + \sum_(j=1)^d log(Gamma(x+(1-j)/2)) */
  /*  Input: */
  /*    x: m x n data matrix */
  /*    d: dimension */
  /*  Output: */
  /*    y: m x n logarithm multivariate Gamma */
  /*  Written by Michael Chen (sth4nth@gmail.com). */
  st.site = &pj_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  if ((d != muDoubleScalarFloor(d)) || muDoubleScalarIsInf(d) || (d <
       -2.147483648E+9) || (d > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &lk_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", "Coder:MATLAB:NonIntegerInput", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  emxInit_real_T(&st, &b_y, 2, &dj_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(d)) {
    bcoef = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, b_y, bcoef, &yi_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (d < 1.0) {
    bcoef = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 0;
    emxEnsureCapacity_real_T(sp, b_y, bcoef, &yi_emlrtRTEI);
  } else if (muDoubleScalarIsInf(d) && (1.0 == d)) {
    bcoef = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, b_y, bcoef, &yi_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else {
    bcoef = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = (int32_T)muDoubleScalarFloor(d - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, b_y, bcoef, &yi_emlrtRTEI);
    sck = (int32_T)muDoubleScalarFloor(d - 1.0);
    for (bcoef = 0; bcoef <= sck; bcoef++) {
      b_y->data[b_y->size[0] * bcoef] = 1.0 + (real_T)bcoef;
    }
  }

  emxInit_real_T1(sp, &b, 1, &aj_emlrtRTEI, true);
  bcoef = b->size[0];
  b->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T2(sp, b, bcoef, &aj_emlrtRTEI);
  sck = b_y->size[1];
  for (bcoef = 0; bcoef < sck; bcoef++) {
    b->data[bcoef] = (1.0 - b_y->data[b_y->size[0] * bcoef]) / 2.0;
  }

  emxFree_real_T(&b_y);
  st.site = &pj_emlrtRSI;
  if (b->size[0] == 1) {
    sck = (int32_T)d;
  } else if ((int32_T)d == 1) {
    sck = b->size[0];
  } else if ((int32_T)d == b->size[0]) {
    sck = (int32_T)d;
  } else {
    i39 = (int32_T)d;
    sck = muIntScalarMin_sint32(b->size[0], i39);
    emlrtErrorWithMessageIdR2018a(&st, &fl_emlrtRTEI,
      "MATLAB:bsxfun:arrayDimensionsMustMatch",
      "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }

  emxInit_real_T1(&st, &b_x, 1, &cj_emlrtRTEI, true);
  bcoef = b_x->size[0];
  b_x->size[0] = sck;
  emxEnsureCapacity_real_T2(&st, b_x, bcoef, &bj_emlrtRTEI);
  if (b_x->size[0] != 0) {
    b_st.site = &rj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    sck = b_x->size[0];
    bcoef = (b->size[0] != 1);
    d_st.site = &tj_emlrtRSI;
    for (k = 0; k < sck; k++) {
      b_x->data[k] = x + b->data[bcoef * k];
    }
  }

  emxFree_real_T(&b);
  st.site = &qj_emlrtRSI;
  st.site = &qj_emlrtRSI;
  b_st.site = &uj_emlrtRSI;
  sck = b_x->size[0];
  c_st.site = &vj_emlrtRSI;
  overflow = ((!(1 > b_x->size[0])) && (b_x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &dc_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= sck; k++) {
    c_st.site = &wj_emlrtRSI;
    scalar_gammaln(&c_st, &b_x->data[k - 1]);
  }

  st.site = &qj_emlrtRSI;
  b_st.site = &od_emlrtRSI;
  c_st.site = &pd_emlrtRSI;
  if (b_x->size[0] == 0) {
    y = 0.0;
  } else {
    d_st.site = &qd_emlrtRSI;
    y = b_x->data[0];
    e_st.site = &sd_emlrtRSI;
    overflow = ((!(2 > b_x->size[0])) && (b_x->size[0] > 2147483646));
    if (overflow) {
      f_st.site = &dc_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (k = 2; k <= b_x->size[0]; k++) {
      y += b_x->data[k - 1];
    }
  }

  emxFree_real_T(&b_x);
  y += d * (d - 1.0) / 4.0 * 1.1447298858494002;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/* End of code generation (logMvGamma.c) */

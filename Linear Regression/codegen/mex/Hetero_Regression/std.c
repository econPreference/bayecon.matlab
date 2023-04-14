/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "std.h"
#include "Hetero_Regression_data.h"
#include "Hetero_Regression_emxutil.h"
#include "Hetero_Regression_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ed_emlrtRSI = {
    9,     /* lineNo */
    "std", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/std.m" /* pathName
                                                                            */
};

static emlrtRSInfo fd_emlrtRSI = {
    102,      /* lineNo */
    "varstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    96,        /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    127,       /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    143,       /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    126,       /* lineNo */
    34,        /* colNo */
    "vvarstd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    126,       /* lineNo */
    9,         /* colNo */
    "vvarstd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pName */
};

/* Function Definitions */
real_T b_std(const emlrtStack *sp, const emxArray_real_T *x)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_real_T *absdiff;
  const real_T *x_data;
  real_T s;
  real_T y;
  real_T *absdiff_data;
  int32_T ib;
  int32_T inb;
  int32_T n;
  int32_T nfb;
  int32_T nleft;
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
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &ed_emlrtRSI;
  n = x->size[0];
  b_st.site = &fd_emlrtRSI;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else if (x->size[0] == 1) {
    if ((!muDoubleScalarIsInf(x_data[0])) &&
        (!muDoubleScalarIsNaN(x_data[0]))) {
      y = 0.0;
    } else {
      y = rtNaN;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    d_st.site = &mb_emlrtRSI;
    e_st.site = &nb_emlrtRSI;
    f_st.site = &ob_emlrtRSI;
    if (x->size[0] < 4096) {
      g_st.site = &qb_emlrtRSI;
      s = c_sumColumnB(&g_st, x, x->size[0]);
    } else {
      nfb = x->size[0] / 4096;
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      s = b_sumColumnB4(x, 1);
      for (ib = 2; ib <= nfb; ib++) {
        s += b_sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        g_st.site = &sb_emlrtRSI;
        s += d_sumColumnB(&g_st, x, nleft, inb + 1);
      }
    }
    emxInit_real_T(&f_st, &absdiff, 1, &qd_emlrtRTEI);
    s /= (real_T)x->size[0];
    nfb = absdiff->size[0];
    absdiff->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&b_st, absdiff, nfb, &pd_emlrtRTEI);
    absdiff_data = absdiff->data;
    c_st.site = &hd_emlrtRSI;
    if (x->size[0] > 2147483646) {
      d_st.site = &jb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (nfb = 0; nfb < n; nfb++) {
      absdiff_data[nfb] = muDoubleScalarAbs(x_data[nfb] - s);
    }
    n_t = (ptrdiff_t)x->size[0];
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &absdiff_data[0], &incx_t);
    c_st.site = &id_emlrtRSI;
    y /= muDoubleScalarSqrt((real_T)x->size[0] - 1.0);
    emxFree_real_T(&b_st, &absdiff);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (std.c) */

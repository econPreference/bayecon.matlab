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
#include "VS_dirac_data.h"
#include "VS_dirac_emxutil.h"
#include "VS_dirac_types.h"
#include "blockedSummation.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = {
    9,     /* lineNo */
    "std", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/std.m" /* pathName
                                                                            */
};

static emlrtRSInfo h_emlrtRSI = {
    102,      /* lineNo */
    "varstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    96,        /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    127,       /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    143,       /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    126,       /* lineNo */
    34,        /* colNo */
    "vvarstd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
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
  emlrtStack st;
  emxArray_real_T *absdiff;
  const real_T *x_data;
  real_T xbar;
  real_T y;
  real_T *absdiff_data;
  int32_T k;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &g_emlrtRSI;
  n = x->size[0];
  b_st.site = &h_emlrtRSI;
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
    emxInit_real_T(&b_st, &absdiff, 1, &tb_emlrtRTEI);
    c_st.site = &i_emlrtRSI;
    d_st.site = &l_emlrtRSI;
    xbar = blockedSummation(&d_st, x, x->size[0]);
    xbar /= (real_T)x->size[0];
    k = absdiff->size[0];
    absdiff->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&b_st, absdiff, k, &sb_emlrtRTEI);
    absdiff_data = absdiff->data;
    c_st.site = &j_emlrtRSI;
    if (x->size[0] > 2147483646) {
      d_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < n; k++) {
      absdiff_data[k] = muDoubleScalarAbs(x_data[k] - xbar);
    }
    n_t = (ptrdiff_t)x->size[0];
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &absdiff_data[0], &incx_t);
    c_st.site = &k_emlrtRSI;
    y /= muDoubleScalarSqrt((real_T)x->size[0] - 1.0);
    emxFree_real_T(&b_st, &absdiff);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (std.c) */

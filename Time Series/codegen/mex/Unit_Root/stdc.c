/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * stdc.c
 *
 * Code generation for function 'stdc'
 *
 */

/* Include files */
#include "stdc.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "blas.h"
#include "eml_int_forloop_overflow_check.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo yd_emlrtRSI = { 4,  /* lineNo */
  "stdc",                              /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\stdc.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 9,  /* lineNo */
  "std",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 100,/* lineNo */
  "varstd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 94, /* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 125,/* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 136,/* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 141,/* lineNo */
  "vvarstd",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 35, /* lineNo */
  "xnrm2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 100,/* lineNo */
  9,                                   /* colNo */
  "varstd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 124,/* lineNo */
  9,                                   /* colNo */
  "vvarstd",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pName */
};

/* Function Definitions */
real_T stdc(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T retf;
  int32_T n;
  real_T xbar;
  int32_T k;
  emxArray_real_T *absdiff;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  gauss function */
  st.site = &yd_emlrtRSI;
  b_st.site = &ae_emlrtRSI;
  n = x->size[0];
  c_st.site = &be_emlrtRSI;
  if (x->size[0] == 0) {
    retf = rtNaN;
  } else if (x->size[0] == 1) {
    if ((!muDoubleScalarIsInf(x->data[0])) && (!muDoubleScalarIsNaN(x->data[0])))
    {
      retf = 0.0;
    } else {
      retf = rtNaN;
    }
  } else {
    d_st.site = &ce_emlrtRSI;
    e_st.site = &qc_emlrtRSI;
    xbar = x->data[0];
    f_st.site = &sc_emlrtRSI;
    if (x->size[0] > 2147483646) {
      g_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (k = 2; k <= n; k++) {
      xbar += x->data[k - 1];
    }

    emxInit_real_T(&e_st, &absdiff, 1, &dg_emlrtRTEI, true);
    xbar /= (real_T)x->size[0];
    k = absdiff->size[0];
    absdiff->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&c_st, absdiff, k, &cg_emlrtRTEI);
    d_st.site = &de_emlrtRSI;
    if (x->size[0] > 2147483646) {
      e_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 0; k < n; k++) {
      absdiff->data[k] = muDoubleScalarAbs(x->data[k] - xbar);
    }

    d_st.site = &ee_emlrtRSI;
    e_st.site = &ge_emlrtRSI;
    n_t = (ptrdiff_t)x->size[0];
    incx_t = (ptrdiff_t)1;
    retf = dnrm2(&n_t, &absdiff->data[0], &incx_t);
    d_st.site = &fe_emlrtRSI;
    retf /= muDoubleScalarSqrt((real_T)x->size[0] - 1.0);
    emxFree_real_T(&absdiff);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return retf;
}

/* End of code generation (stdc.c) */

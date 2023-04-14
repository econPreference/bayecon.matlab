/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgehrd.c
 *
 * Code generation for function 'xgehrd'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "xgehrd.h"
#include "Stochastic_Volatility_emxutil.h"
#include "error.h"
#include "Stochastic_Volatility_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo jg_emlrtRSI = { 15, /* lineNo */
  "xgehrd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 45, /* lineNo */
  "xgehrd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 46, /* lineNo */
  "xgehrd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 65, /* lineNo */
  "xgehrd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 78, /* lineNo */
  "xgehrd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 84, /* lineNo */
  "xgehrd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "xgehrd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pName */
};

static emlrtRTEInfo jl_emlrtRTEI = { 15,/* lineNo */
  5,                                   /* colNo */
  "xgehrd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pName */
};

static emlrtRTEInfo kl_emlrtRTEI = { 85,/* lineNo */
  9,                                   /* colNo */
  "xgehrd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pName */
};

/* Function Definitions */
void xgehrd(const emlrtStack *sp, emxArray_real_T *a)
{
  int32_T n;
  int32_T ntau;
  emxArray_real_T *tau;
  int32_T i46;
  ptrdiff_t info_t;
  boolean_T p;
  boolean_T b_p;
  int32_T i47;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &jg_emlrtRSI;
  n = a->size[0];
  b_st.site = &kg_emlrtRSI;
  b_st.site = &lg_emlrtRSI;
  b_st.site = &mg_emlrtRSI;
  if (a->size[0] < 1) {
    ntau = 0;
  } else {
    ntau = a->size[0] - 1;
  }

  emxInit_real_T(&st, &tau, 1, &eh_emlrtRTEI, true);
  i46 = tau->size[0];
  tau->size[0] = ntau;
  emxEnsureCapacity_real_T(&st, tau, i46, &jl_emlrtRTEI);
  if (a->size[0] > 1) {
    b_st.site = &ng_emlrtRSI;
    info_t = LAPACKE_dgehrd(102, (ptrdiff_t)a->size[0], (ptrdiff_t)1, (ptrdiff_t)
      a->size[0], &a->data[0], (ptrdiff_t)muIntScalarMax_sint32(1, n),
      &tau->data[0]);
    n = (int32_T)info_t;
    b_st.site = &og_emlrtRSI;
    if (n != 0) {
      p = true;
      b_p = false;
      if (n == -5) {
        b_p = true;
      }

      if (!b_p) {
        if (n == -1010) {
          c_st.site = &qb_emlrtRSI;
          error(&c_st);
        } else {
          c_st.site = &rb_emlrtRSI;
          h_error(&c_st, n);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      i46 = a->size[0] * a->size[1];
      emxEnsureCapacity_real_T1(&st, a, i46, &kl_emlrtRTEI);
      n = a->size[1];
      for (i46 = 0; i46 < n; i46++) {
        ntau = a->size[0];
        for (i47 = 0; i47 < ntau; i47++) {
          a->data[i47 + a->size[0] * i46] = rtNaN;
        }
      }
    }
  }

  emxFree_real_T(&tau);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgehrd.c) */

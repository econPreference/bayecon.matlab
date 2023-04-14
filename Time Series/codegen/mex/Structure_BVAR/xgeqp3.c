/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeqp3.c
 *
 * Code generation for function 'xgeqp3'
 *
 */

/* Include files */
#include "xgeqp3.h"
#include "Structure_BVAR_data.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo fj_emlrtRSI = {
    63,       /* lineNo */
    "xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo gj_emlrtRSI = {
    98,             /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo hj_emlrtRSI = {
    138,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo ij_emlrtRSI = {
    141,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo jj_emlrtRSI = {
    143,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo kj_emlrtRSI = {
    148,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo lj_emlrtRSI = {
    151,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo mj_emlrtRSI = {
    154,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo nj_emlrtRSI = {
    158,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRTEInfo rj_emlrtRTEI = {
    61,       /* lineNo */
    9,        /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = {
    92,       /* lineNo */
    22,       /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = {
    105,      /* lineNo */
    1,        /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = {
    97,       /* lineNo */
    5,        /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

/* Function Definitions */
void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *tau,
            emxArray_int32_T *jpvt)
{
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'q', 'p', '3'};
  ptrdiff_t info_t;
  ptrdiff_t *jpvt_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_ptrdiff_t *jpvt_t;
  real_T *A_data;
  real_T *tau_data;
  int32_T b_na;
  int32_T i;
  int32_T m;
  int32_T ma;
  int32_T minmana;
  int32_T na;
  int32_T *jpvt_data;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  m = A->size[0];
  na = A->size[1];
  i = jpvt->size[0] * jpvt->size[1];
  jpvt->size[0] = 1;
  jpvt->size[1] = A->size[1];
  emxEnsureCapacity_int32_T(sp, jpvt, i, &rj_emlrtRTEI);
  jpvt_data = jpvt->data;
  b_na = A->size[1];
  for (i = 0; i < b_na; i++) {
    jpvt_data[i] = 0;
  }
  st.site = &fj_emlrtRSI;
  ma = A->size[0];
  b_na = A->size[1];
  minmana = muIntScalarMin_sint32(ma, b_na);
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&st, tau, i, &sj_emlrtRTEI);
  tau_data = tau->data;
  emxInit_ptrdiff_t(&st, &jpvt_t, &tj_emlrtRTEI);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (A->size[0] < 1) ||
      (A->size[1] < 1)) {
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&st, tau, i, &uj_emlrtRTEI);
    tau_data = tau->data;
    for (i = 0; i < minmana; i++) {
      tau_data[i] = 0.0;
    }
    b_st.site = &gj_emlrtRSI;
    if ((1 <= A->size[1]) && (A->size[1] > 2147483646)) {
      c_st.site = &qb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (ma = 0; ma < na; ma++) {
      jpvt_data[ma] = ma + 1;
    }
  } else {
    i = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(&st, jpvt_t, i, &tj_emlrtRTEI);
    jpvt_t_data = jpvt_t->data;
    b_na = A->size[1];
    for (i = 0; i < b_na; i++) {
      jpvt_t_data[i] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
                            &A_data[0], (ptrdiff_t)A->size[0], &jpvt_t_data[0],
                            &tau_data[0]);
    b_na = (int32_T)info_t;
    b_st.site = &hj_emlrtRSI;
    if (b_na != 0) {
      p = true;
      if (b_na != -4) {
        if (b_na == -1010) {
          emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, b_na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      b_st.site = &ij_emlrtRSI;
      if ((1 <= na) && (na > 2147483646)) {
        c_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (b_na = 0; b_na < na; b_na++) {
        b_st.site = &jj_emlrtRSI;
        if ((1 <= m) && (m > 2147483646)) {
          c_st.site = &qb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = 0; i < m; i++) {
          A_data[b_na * ma + i] = rtNaN;
        }
      }
      b_na = muIntScalarMin_sint32(m, na);
      b_st.site = &kj_emlrtRSI;
      for (ma = 0; ma < b_na; ma++) {
        tau_data[ma] = rtNaN;
      }
      m = b_na + 1;
      b_st.site = &lj_emlrtRSI;
      if ((b_na + 1 <= minmana) && (minmana > 2147483646)) {
        c_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (ma = m; ma <= minmana; ma++) {
        tau_data[ma - 1] = 0.0;
      }
      b_st.site = &mj_emlrtRSI;
      for (ma = 0; ma < na; ma++) {
        jpvt_data[ma] = ma + 1;
      }
    } else {
      b_st.site = &nj_emlrtRSI;
      if ((1 <= na) && (na > 2147483646)) {
        c_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (ma = 0; ma < na; ma++) {
        jpvt_data[ma] = (int32_T)jpvt_t_data[ma];
      }
    }
  }
  emxFree_ptrdiff_t(&st, &jpvt_t);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (xgeqp3.c) */

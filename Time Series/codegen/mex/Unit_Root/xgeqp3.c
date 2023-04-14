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
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo dk_emlrtRSI = { 57, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 85, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 86, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 91, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 119,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 123,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 132,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 134,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 135,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 140,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 143,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 146,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 150,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRTEInfo bo_emlrtRTEI = { 55,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo co_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo do_emlrtRTEI = { 98,/* lineNo */
  1,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo eo_emlrtRTEI = { 90,/* lineNo */
  5,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

/* Function Definitions */
void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *tau,
            emxArray_int32_T *jpvt)
{
  int32_T m;
  int32_T na;
  int32_T b_na;
  int32_T minmn;
  int32_T ma;
  int32_T minmana;
  emxArray_ptrdiff_t *jpvt_t;
  ptrdiff_t info_t;
  boolean_T p;
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 'q', 'p', '3' };

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
  m = A->size[0];
  na = A->size[1];
  b_na = jpvt->size[0] * jpvt->size[1];
  jpvt->size[0] = 1;
  jpvt->size[1] = A->size[1];
  emxEnsureCapacity_int32_T(sp, jpvt, b_na, &bo_emlrtRTEI);
  minmn = A->size[1];
  for (b_na = 0; b_na < minmn; b_na++) {
    jpvt->data[b_na] = 0;
  }

  st.site = &dk_emlrtRSI;
  ma = A->size[0];
  b_na = A->size[1];
  minmana = muIntScalarMin_sint32(ma, b_na);
  b_st.site = &ek_emlrtRSI;
  b_st.site = &fk_emlrtRSI;
  b_na = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&st, tau, b_na, &co_emlrtRTEI);
  emxInit_ptrdiff_t(&st, &jpvt_t, 1, &do_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (A->size[0] < 1) || (A->size[1] <
       1)) {
    b_na = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&st, tau, b_na, &eo_emlrtRTEI);
    for (b_na = 0; b_na < minmana; b_na++) {
      tau->data[b_na] = 0.0;
    }

    b_st.site = &gk_emlrtRSI;
    if ((1 <= A->size[1]) && (A->size[1] > 2147483646)) {
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (b_na = 0; b_na < na; b_na++) {
      jpvt->data[b_na] = b_na + 1;
    }
  } else {
    b_na = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(&st, jpvt_t, b_na, &do_emlrtRTEI);
    minmn = A->size[1];
    for (b_na = 0; b_na < minmn; b_na++) {
      jpvt_t->data[b_na] = (ptrdiff_t)0;
    }

    b_st.site = &hk_emlrtRSI;
    b_st.site = &ik_emlrtRSI;
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
      &A->data[0], (ptrdiff_t)A->size[0], &jpvt_t->data[0], &tau->data[0]);
    b_na = (int32_T)info_t;
    b_st.site = &jk_emlrtRSI;
    if (b_na != 0) {
      p = true;
      if (b_na != -4) {
        if (b_na == -1010) {
          emlrtErrorWithMessageIdR2018a(&b_st, &db_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &cb_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, b_na);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      b_st.site = &kk_emlrtRSI;
      if ((1 <= na) && (na > 2147483646)) {
        c_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (b_na = 0; b_na < na; b_na++) {
        b_st.site = &lk_emlrtRSI;
        if ((1 <= m) && (m > 2147483646)) {
          c_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (minmn = 0; minmn < m; minmn++) {
          A->data[b_na * ma + minmn] = rtNaN;
        }
      }

      minmn = muIntScalarMin_sint32(m, na);
      b_st.site = &mk_emlrtRSI;
      for (b_na = 0; b_na < minmn; b_na++) {
        tau->data[b_na] = rtNaN;
      }

      m = minmn + 1;
      b_st.site = &nk_emlrtRSI;
      if ((minmn + 1 <= minmana) && (minmana > 2147483646)) {
        c_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (b_na = m; b_na <= minmana; b_na++) {
        tau->data[b_na - 1] = 0.0;
      }

      b_st.site = &ok_emlrtRSI;
      for (b_na = 0; b_na < na; b_na++) {
        jpvt->data[b_na] = b_na + 1;
      }
    } else {
      b_st.site = &pk_emlrtRSI;
      if ((1 <= na) && (na > 2147483646)) {
        c_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (b_na = 0; b_na < na; b_na++) {
        jpvt->data[b_na] = (int32_T)jpvt_t->data[b_na];
      }
    }
  }

  emxFree_ptrdiff_t(&jpvt_t);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgeqp3.c) */

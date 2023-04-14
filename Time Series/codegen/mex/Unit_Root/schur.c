/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * schur.c
 *
 * Code generation for function 'schur'
 *
 */

/* Include files */
#include "schur.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo ai_emlrtRSI = { 35, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 43, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 52, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 54, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 83, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 48, /* lineNo */
  "triu",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 47, /* lineNo */
  "triu",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 15, /* lineNo */
  "xgehrd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 84, /* lineNo */
  "ceval_xgehrd",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 28, /* lineNo */
  "xhseqr",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 127,/* lineNo */
  "ceval_xhseqr",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 18,/* lineNo */
  15,                                  /* colNo */
  "schur",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pName */
};

static emlrtRTEInfo rn_emlrtRTEI = { 42,/* lineNo */
  9,                                   /* colNo */
  "schur",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pName */
};

static emlrtRTEInfo sn_emlrtRTEI = { 15,/* lineNo */
  5,                                   /* colNo */
  "xgehrd",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgehrd.m"/* pName */
};

static emlrtRTEInfo tn_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo un_emlrtRTEI = { 1,/* lineNo */
  18,                                  /* colNo */
  "schur",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pName */
};

static emlrtRTEInfo vn_emlrtRTEI = { 110,/* lineNo */
  9,                                   /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo wn_emlrtRTEI = { 111,/* lineNo */
  9,                                   /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

/* Function Definitions */
void schur(const emlrtStack *sp, emxArray_real_T *A)
{
  emxArray_real_T *tau;
  int32_T n;
  int32_T istart;
  int32_T i;
  int32_T j;
  int32_T jend;
  ptrdiff_t info_t;
  real_T z;
  boolean_T p;
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 'h', 'r', 'd' };

  ptrdiff_t n_t;
  emxArray_real_T *wr;
  emxArray_real_T *wi;
  boolean_T b_p;
  static const char_T b_fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'h', 's', 'e', 'q', 'r' };

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
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &ob_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  st.site = &ai_emlrtRSI;
  if (anyNonFinite(&st, A)) {
    n = A->size[0];
    istart = A->size[1];
    i = A->size[0] * A->size[1];
    A->size[0] = n;
    A->size[1] = istart;
    emxEnsureCapacity_real_T(sp, A, i, &rn_emlrtRTEI);
    for (i = 0; i < istart; i++) {
      for (j = 0; j < n; j++) {
        A->data[j + A->size[0] * i] = rtNaN;
      }
    }

    st.site = &bi_emlrtRSI;
    n = A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0) && (1 < A->size[0])) {
      istart = 2;
      if (A->size[0] - 2 < A->size[1] - 1) {
        jend = A->size[0] - 1;
      } else {
        jend = A->size[1];
      }

      b_st.site = &gi_emlrtRSI;
      if ((1 <= jend) && (jend > 2147483646)) {
        c_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (j = 0; j < jend; j++) {
        b_st.site = &fi_emlrtRSI;
        if ((istart <= n) && (n > 2147483646)) {
          c_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = istart; i <= n; i++) {
          A->data[(i + A->size[0] * j) - 1] = 0.0;
        }

        istart++;
      }
    }
  } else {
    emxInit_real_T(sp, &tau, 1, &un_emlrtRTEI, true);
    st.site = &ci_emlrtRSI;
    b_st.site = &hi_emlrtRSI;
    n = A->size[0];
    i = tau->size[0];
    if (A->size[0] < 1) {
      tau->size[0] = 0;
    } else {
      tau->size[0] = A->size[0] - 1;
    }

    emxEnsureCapacity_real_T(&b_st, tau, i, &sn_emlrtRTEI);
    if (A->size[0] > 1) {
      info_t = LAPACKE_dgehrd(102, (ptrdiff_t)A->size[0], (ptrdiff_t)1,
        (ptrdiff_t)A->size[0], &A->data[0], (ptrdiff_t)muIntScalarMax_sint32(1,
        n), &tau->data[0]);
      n = (int32_T)info_t;
      c_st.site = &mi_emlrtRSI;
      if (n != 0) {
        p = true;
        if (n != -5) {
          if (n == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &db_emlrtRTEI, "MATLAB:nomem",
              "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
              "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, n);
          }
        }
      } else {
        p = false;
      }

      if (p) {
        istart = A->size[1];
        for (i = 0; i < istart; i++) {
          jend = A->size[0];
          for (j = 0; j < jend; j++) {
            A->data[j + A->size[0] * i] = rtNaN;
          }
        }
      }
    }

    emxFree_real_T(&tau);
    st.site = &di_emlrtRSI;
    b_st.site = &ni_emlrtRSI;
    z = 0.0;
    n = A->size[0];
    n_t = (ptrdiff_t)A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      emxInit_real_T(&b_st, &wr, 2, &vn_emlrtRTEI, true);
      emxInit_real_T(&b_st, &wi, 2, &wn_emlrtRTEI, true);
      istart = A->size[0];
      i = wr->size[0] * wr->size[1];
      wr->size[0] = 1;
      wr->size[1] = istart;
      emxEnsureCapacity_real_T(&b_st, wr, i, &tn_emlrtRTEI);
      i = wi->size[0] * wi->size[1];
      wi->size[0] = 1;
      wi->size[1] = istart;
      emxEnsureCapacity_real_T(&b_st, wi, i, &tn_emlrtRTEI);
      info_t = LAPACKE_dhseqr(102, 'S', 'N', n_t, (ptrdiff_t)1, (ptrdiff_t)
        A->size[0], &A->data[0], n_t, &wr->data[0], &wi->data[0], &z, (ptrdiff_t)
        muIntScalarMax_sint32(1, n));
      n = (int32_T)info_t;
      c_st.site = &si_emlrtRSI;
      emxFree_real_T(&wi);
      emxFree_real_T(&wr);
      if (n < 0) {
        p = true;
        b_p = false;
        if (n == -7) {
          b_p = true;
        } else {
          if (n == -11) {
            b_p = true;
          }
        }

        if (!b_p) {
          if (n == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &db_emlrtRTEI, "MATLAB:nomem",
              "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
              "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, b_fname, 12, n);
          }
        }
      } else {
        p = false;
      }

      if (p) {
        istart = A->size[1];
        for (i = 0; i < istart; i++) {
          jend = A->size[0];
          for (j = 0; j < jend; j++) {
            A->data[j + A->size[0] * i] = rtNaN;
          }
        }
      }
    } else {
      n = 0;
    }

    if (n != 0) {
      st.site = &ei_emlrtRSI;
      d_warning(&st);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (schur.c) */

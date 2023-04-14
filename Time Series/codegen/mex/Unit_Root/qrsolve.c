/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "Unit_Root_mexutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"

/* Variable Definitions */
static emlrtRSInfo ak_emlrtRSI = { 35, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 39, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 46, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 131,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 130,/* lineNo */
  "rankFromQR",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 79, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 86, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 96, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 102,/* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 35,/* lineNo */
  2,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 46,/* lineNo */
  26,                                  /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 35,/* lineNo */
  4,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 35,/* lineNo */
  8,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

/* Function Definitions */
void qrsolve(const emlrtStack *sp, const emxArray_real_T *A, const
             emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  int32_T maxmn;
  int32_T minmn;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  int32_T rankR;
  real_T tol;
  emxArray_real_T *b_B;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *b_y;
  const mxArray *m1;
  char_T str[14];
  ptrdiff_t nrc_t;
  int32_T j;
  ptrdiff_t info_t;
  boolean_T p;
  boolean_T b_p;
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'o', 'r', 'm', 'q', 'r' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &kk_emlrtRTEI, true);
  maxmn = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_A, maxmn, &kk_emlrtRTEI);
  minmn = A->size[0] * A->size[1];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    b_A->data[maxmn] = A->data[maxmn];
  }

  emxInit_real_T(sp, &tau, 1, &nk_emlrtRTEI, true);
  emxInit_int32_T(sp, &jpvt, 2, &ok_emlrtRTEI, true);
  st.site = &ak_emlrtRSI;
  xgeqp3(&st, b_A, tau, jpvt);
  st.site = &bk_emlrtRSI;
  rankR = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    maxmn = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    maxmn = b_A->size[0];
  }

  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8, 2.2204460492503131E-15 *
      (real_T)maxmn) * muDoubleScalarAbs(b_A->data[0]);
    while ((rankR < minmn) && (!(muDoubleScalarAbs(b_A->data[rankR + b_A->size[0]
              * rankR]) <= tol))) {
      rankR++;
    }
  }

  if (rankR < minmn) {
    b_st.site = &qk_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m1);
    c_st.site = &yo_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &cb_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &rk_emlrtRSI;
    f_warning(&b_st, rankR, str);
  }

  emxInit_real_T(&st, &b_B, 1, &lk_emlrtRTEI, true);
  st.site = &ck_emlrtRSI;
  maxmn = b_B->size[0];
  b_B->size[0] = B->size[0];
  emxEnsureCapacity_real_T(&st, b_B, maxmn, &lk_emlrtRTEI);
  minmn = B->size[0];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    b_B->data[maxmn] = B->data[maxmn];
  }

  maxmn = Y->size[0];
  Y->size[0] = b_A->size[1];
  emxEnsureCapacity_real_T(&st, Y, maxmn, &mk_emlrtRTEI);
  minmn = b_A->size[1];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    Y->data[maxmn] = 0.0;
  }

  b_st.site = &sk_emlrtRSI;
  c_st.site = &vk_emlrtRSI;
  if ((b_A->size[0] != 0) && (b_A->size[1] != 0)) {
    nrc_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)1, (ptrdiff_t)
      muIntScalarMin_sint32(b_A->size[0], b_A->size[1]), &b_A->data[0],
      (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0], nrc_t);
    minmn = (int32_T)info_t;
    d_st.site = &wk_emlrtRSI;
    if (minmn != 0) {
      p = true;
      b_p = false;
      if (minmn == -7) {
        b_p = true;
      } else if (minmn == -9) {
        b_p = true;
      } else {
        if (minmn == -10) {
          b_p = true;
        }
      }

      if (!b_p) {
        if (minmn == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &db_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &cb_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, minmn);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      minmn = b_B->size[0];
      for (maxmn = 0; maxmn < minmn; maxmn++) {
        b_B->data[maxmn] = rtNaN;
      }
    }
  }

  emxFree_real_T(&tau);
  b_st.site = &tk_emlrtRSI;
  if ((1 <= rankR) && (rankR > 2147483646)) {
    c_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (minmn = 0; minmn < rankR; minmn++) {
    Y->data[jpvt->data[minmn] - 1] = b_B->data[minmn];
  }

  emxFree_real_T(&b_B);
  for (j = rankR; j >= 1; j--) {
    maxmn = jpvt->data[j - 1];
    Y->data[maxmn - 1] /= b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
    b_st.site = &uk_emlrtRSI;
    for (minmn = 0; minmn <= j - 2; minmn++) {
      Y->data[jpvt->data[minmn] - 1] -= Y->data[jpvt->data[j - 1] - 1] *
        b_A->data[minmn + b_A->size[0] * (j - 1)];
    }
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (qrsolve.c) */

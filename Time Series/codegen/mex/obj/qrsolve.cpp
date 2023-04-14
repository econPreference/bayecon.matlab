/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.cpp
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "obj.h"
#include "qrsolve.h"
#include "obj_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "obj_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 79, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 85, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 86, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 96, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 102,/* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = { 69,/* lineNo */
  1,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 79,/* lineNo */
  5,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

/* Function Definitions */
void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A, const
               emxArray_real_T *tau, const emxArray_int32_T *jpvt,
               emxArray_real_T *B, int32_T rankA, emxArray_real_T *Y)
{
  int32_T nb;
  int32_T mn;
  int32_T unnamed_idx_1;
  int32_T i5;
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
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nb = B->size[1];
  mn = A->size[1];
  unnamed_idx_1 = B->size[1];
  i5 = Y->size[0] * Y->size[1];
  Y->size[0] = mn;
  Y->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T(sp, Y, i5, &p_emlrtRTEI);
  mn *= unnamed_idx_1;
  for (i5 = 0; i5 < mn; i5++) {
    Y->data[i5] = 0.0;
  }

  st.site = &gc_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  mn = muIntScalarMin_sint32(A->size[0], A->size[1]);
  if ((A->size[0] != 0) && (A->size[1] != 0) && ((B->size[0] != 0) && (B->size[1]
        != 0))) {
    nrc_t = (ptrdiff_t)B->size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)B->size[1],
      (ptrdiff_t)mn, &A->data[0], (ptrdiff_t)A->size[0], &tau->data[0], &B->
      data[0], nrc_t);
    mn = (int32_T)info_t;
    c_st.site = &pc_emlrtRSI;
    if (mn != 0) {
      p = true;
      b_p = false;
      if (mn == -7) {
        b_p = true;
      } else if (mn == -9) {
        b_p = true;
      } else {
        if (mn == -10) {
          b_p = true;
        }
      }

      if (!b_p) {
        if (mn == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &ib_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, mn);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      i5 = B->size[0] * B->size[1];
      emxEnsureCapacity_real_T(&b_st, B, i5, &q_emlrtRTEI);
      mn = B->size[1];
      for (i5 = 0; i5 < mn; i5++) {
        unnamed_idx_1 = B->size[0];
        for (j = 0; j < unnamed_idx_1; j++) {
          B->data[j + B->size[0] * i5] = rtNaN;
        }
      }
    }
  }

  st.site = &hc_emlrtRSI;
  if ((1 <= nb) && (nb > 2147483646)) {
    b_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (mn = 0; mn < nb; mn++) {
    st.site = &ic_emlrtRSI;
    if ((1 <= rankA) && (rankA > 2147483646)) {
      b_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 < rankA; unnamed_idx_1++) {
      Y->data[(jpvt->data[unnamed_idx_1] + Y->size[0] * mn) - 1] = B->
        data[unnamed_idx_1 + B->size[0] * mn];
    }

    for (j = rankA; j >= 1; j--) {
      Y->data[(jpvt->data[j - 1] + Y->size[0] * mn) - 1] /= A->data[(j + A->
        size[0] * (j - 1)) - 1];
      st.site = &jc_emlrtRSI;
      for (unnamed_idx_1 = 0; unnamed_idx_1 <= j - 2; unnamed_idx_1++) {
        Y->data[(jpvt->data[unnamed_idx_1] + Y->size[0] * mn) - 1] -= Y->data
          [(jpvt->data[j - 1] + Y->size[0] * mn) - 1] * A->data[unnamed_idx_1 +
          A->size[0] * (j - 1)];
      }
    }
  }
}

/* End of code generation (qrsolve.cpp) */

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
#include "ARMA_X_data.h"
#include "ARMA_X_emxutil.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo vj_emlrtRSI =
    {
        61,        /* lineNo */
        "qrsolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo wj_emlrtRSI =
    {
        72,        /* lineNo */
        "qrsolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo xj_emlrtRSI =
    {
        85,        /* lineNo */
        "qrsolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo yj_emlrtRSI = {
    63,       /* lineNo */
    "xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo ak_emlrtRSI = {
    98,             /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo bk_emlrtRSI = {
    138,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo ck_emlrtRSI = {
    141,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo dk_emlrtRSI = {
    143,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo ek_emlrtRSI = {
    148,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo fk_emlrtRSI = {
    151,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo gk_emlrtRSI = {
    154,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo hk_emlrtRSI = {
    158,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pathName */
};

static emlrtRSInfo ik_emlrtRSI =
    {
        173,          /* lineNo */
        "rankFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo jk_emlrtRSI =
    {
        172,          /* lineNo */
        "rankFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo kk_emlrtRSI =
    {
        119,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo lk_emlrtRSI =
    {
        128,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo mk_emlrtRSI =
    {
        138,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo nk_emlrtRSI = {
    31,         /* lineNo */
    "xunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = {
    102,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRTEInfo rk_emlrtRTEI = {
    1,        /* lineNo */
    32,       /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = {
    61,       /* lineNo */
    9,        /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = {
    92,       /* lineNo */
    22,       /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = {
    105,      /* lineNo */
    1,        /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = {
    97,       /* lineNo */
    5,        /* colNo */
    "xgeqp3", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" /* pName */
};

static emlrtRTEInfo wk_emlrtRTEI =
    {
        85,        /* lineNo */
        26,        /* colNo */
        "qrsolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pName */
};

static emlrtRTEInfo xk_emlrtRTEI =
    {
        85,        /* lineNo */
        1,         /* colNo */
        "qrsolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pName */
};

static emlrtRTEInfo yk_emlrtRTEI =
    {
        119,       /* lineNo */
        5,         /* colNo */
        "qrsolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pName */
};

static emlrtRTEInfo al_emlrtRTEI =
    {
        1,         /* lineNo */
        24,        /* colNo */
        "qrsolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pName */
};

/* Function Definitions */
void qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
             const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'q', 'p', '3'};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  ptrdiff_t *jpvt_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  const real_T *A_data;
  const real_T *B_data;
  real_T tol;
  real_T *Y_data;
  real_T *b_A_data;
  real_T *b_B_data;
  real_T *tau_data;
  int32_T b_na;
  int32_T i;
  int32_T j;
  int32_T ma;
  int32_T minmana;
  int32_T minmn;
  int32_T na;
  int32_T *jpvt_data;
  char_T str[14];
  boolean_T b_p;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  B_data = B->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &al_emlrtRTEI);
  st.site = &vj_emlrtRSI;
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&st, b_A, i, &rk_emlrtRTEI);
  b_A_data = b_A->data;
  na = A->size[0] * A->size[1];
  for (i = 0; i < na; i++) {
    b_A_data[i] = A_data[i];
  }
  emxInit_int32_T(&st, &jpvt, 2, &al_emlrtRTEI);
  minmn = b_A->size[0];
  b_na = b_A->size[1];
  i = jpvt->size[0] * jpvt->size[1];
  jpvt->size[0] = 1;
  jpvt->size[1] = b_A->size[1];
  emxEnsureCapacity_int32_T(&st, jpvt, i, &sk_emlrtRTEI);
  jpvt_data = jpvt->data;
  na = b_A->size[1];
  for (i = 0; i < na; i++) {
    jpvt_data[i] = 0;
  }
  emxInit_real_T(&st, &tau, 1, &al_emlrtRTEI);
  b_st.site = &yj_emlrtRSI;
  ma = b_A->size[0];
  na = b_A->size[1];
  minmana = muIntScalarMin_sint32(ma, na);
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&b_st, tau, i, &tk_emlrtRTEI);
  tau_data = tau->data;
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&b_st, tau, i, &vk_emlrtRTEI);
    tau_data = tau->data;
    for (i = 0; i < minmana; i++) {
      tau_data[i] = 0.0;
    }
    c_st.site = &ak_emlrtRSI;
    if ((1 <= b_A->size[1]) && (b_A->size[1] > 2147483646)) {
      d_st.site = &gb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (ma = 0; ma < b_na; ma++) {
      jpvt_data[ma] = ma + 1;
    }
  } else {
    emxInit_ptrdiff_t(&b_st, &jpvt_t, &uk_emlrtRTEI);
    i = jpvt_t->size[0];
    jpvt_t->size[0] = b_A->size[1];
    emxEnsureCapacity_ptrdiff_t(&b_st, jpvt_t, i, &uk_emlrtRTEI);
    jpvt_t_data = jpvt_t->data;
    na = b_A->size[1];
    for (i = 0; i < na; i++) {
      jpvt_t_data[i] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(
        102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)b_A->size[1], &b_A_data[0],
        (ptrdiff_t)b_A->size[0], &jpvt_t_data[0], &tau_data[0]);
    na = (int32_T)info_t;
    c_st.site = &bk_emlrtRSI;
    if (na != 0) {
      p = true;
      if (na != -4) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &v_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &u_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      c_st.site = &ck_emlrtRSI;
      if ((1 <= b_na) && (b_na > 2147483646)) {
        d_st.site = &gb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (j = 0; j < b_na; j++) {
        c_st.site = &dk_emlrtRSI;
        if ((1 <= minmn) && (minmn > 2147483646)) {
          d_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (na = 0; na < minmn; na++) {
          b_A_data[j * ma + na] = rtNaN;
        }
      }
      minmn = muIntScalarMin_sint32(minmn, b_na);
      c_st.site = &ek_emlrtRSI;
      for (ma = 0; ma < minmn; ma++) {
        tau_data[ma] = rtNaN;
      }
      na = minmn + 1;
      c_st.site = &fk_emlrtRSI;
      if ((minmn + 1 <= minmana) && (minmana > 2147483646)) {
        d_st.site = &gb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = na; ma <= minmana; ma++) {
        tau_data[ma - 1] = 0.0;
      }
      c_st.site = &gk_emlrtRSI;
      for (ma = 0; ma < b_na; ma++) {
        jpvt_data[ma] = ma + 1;
      }
    } else {
      c_st.site = &hk_emlrtRSI;
      if ((1 <= b_na) && (b_na > 2147483646)) {
        d_st.site = &gb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = 0; ma < b_na; ma++) {
        jpvt_data[ma] = (int32_T)jpvt_t_data[ma];
      }
    }
    emxFree_ptrdiff_t(&b_st, &jpvt_t);
  }
  st.site = &wj_emlrtRSI;
  ma = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    na = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    na = b_A->size[0];
  }
  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)na) *
          muDoubleScalarAbs(b_A_data[0]);
    while ((ma < minmn) &&
           (!(muDoubleScalarAbs(b_A_data[ma + b_A->size[0] * ma]) <= tol))) {
      ma++;
    }
  }
  if (ma < minmn) {
    b_st.site = &ik_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    c_st.site = &dm_emlrtRSI;
    c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &v_emlrtMCI),
                       "<output of sprintf>", str);
    b_st.site = &jk_emlrtRSI;
    f_warning(&b_st, ma, str);
  }
  emxInit_real_T(&st, &b_B, 1, &wk_emlrtRTEI);
  st.site = &xj_emlrtRSI;
  i = b_B->size[0];
  b_B->size[0] = B->size[0];
  emxEnsureCapacity_real_T(&st, b_B, i, &wk_emlrtRTEI);
  b_B_data = b_B->data;
  na = B->size[0];
  for (i = 0; i < na; i++) {
    b_B_data[i] = B_data[i];
  }
  i = Y->size[0];
  Y->size[0] = b_A->size[1];
  emxEnsureCapacity_real_T(&st, Y, i, &xk_emlrtRTEI);
  Y_data = Y->data;
  na = b_A->size[1];
  for (i = 0; i < na; i++) {
    Y_data[i] = 0.0;
  }
  b_st.site = &kk_emlrtRSI;
  c_st.site = &nk_emlrtRSI;
  if ((b_A->size[0] != 0) && (b_A->size[1] != 0) && (b_B->size[0] != 0)) {
    info_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(
        102, 'L', 'T', info_t, (ptrdiff_t)1,
        (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]),
        &b_A_data[0], (ptrdiff_t)b_A->size[0], &tau_data[0], &b_B_data[0],
        info_t);
    na = (int32_T)info_t;
    d_st.site = &ok_emlrtRSI;
    if (na != 0) {
      p = true;
      b_p = false;
      if (na == -7) {
        b_p = true;
      } else if (na == -9) {
        b_p = true;
      } else if (na == -10) {
        b_p = true;
      }
      if (!b_p) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &v_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &u_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &b_fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      na = b_B->size[0];
      i = b_B->size[0];
      b_B->size[0] = na;
      emxEnsureCapacity_real_T(&c_st, b_B, i, &yk_emlrtRTEI);
      b_B_data = b_B->data;
      for (i = 0; i < na; i++) {
        b_B_data[i] = rtNaN;
      }
    }
  }
  emxFree_real_T(&c_st, &tau);
  b_st.site = &lk_emlrtRSI;
  if ((1 <= ma) && (ma > 2147483646)) {
    c_st.site = &gb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (na = 0; na < ma; na++) {
    Y_data[jpvt_data[na] - 1] = b_B_data[na];
  }
  emxFree_real_T(&st, &b_B);
  for (j = ma; j >= 1; j--) {
    i = jpvt_data[j - 1];
    Y_data[i - 1] /= b_A_data[(j + b_A->size[0] * (j - 1)) - 1];
    b_st.site = &mk_emlrtRSI;
    for (na = 0; na <= j - 2; na++) {
      Y_data[jpvt_data[na] - 1] -=
          Y_data[jpvt_data[j - 1] - 1] * b_A_data[na + b_A->size[0] * (j - 1)];
    }
  }
  emxFree_int32_T(&st, &jpvt);
  emxFree_real_T(&st, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (qrsolve.c) */

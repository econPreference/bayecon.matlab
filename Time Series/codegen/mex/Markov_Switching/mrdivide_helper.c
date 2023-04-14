/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_mexutil.h"
#include "Markov_Switching_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include "xgetrf.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ah_emlrtRSI = {
    18,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRSInfo el_emlrtRSI =
    {
        147,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo fl_emlrtRSI =
    {
        126,         /* lineNo */
        "LSQFromQR", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" /* pathName */
};

static emlrtRSInfo gl_emlrtRSI = {
    108,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo hl_emlrtRSI = {
    21,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRSInfo il_emlrtRSI = {
    23,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRSInfo jl_emlrtRSI = {
    29,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "+reflapack/xzunormqr.m" /* pathName */
};

static emlrtRTEInfo ah_emlrtRTEI = {
    42,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = {
    44,                /* lineNo */
    32,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = {
    44,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = {
    25,                /* lineNo */
    14,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo im_emlrtRTEI = {
    31,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

/* Function Definitions */
void b_mrdiv(const emlrtStack *sp, emxArray_real_T *A, const emxArray_real_T *B)
{
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_real_T *Y;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const real_T *B_data;
  real_T wj;
  real_T *A_data;
  real_T *Y_data;
  real_T *b_A_data;
  real_T *b_B_data;
  int32_T a_tmp;
  int32_T b_i;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T k;
  int32_T m;
  int32_T mn;
  int32_T nb;
  int32_T rankA;
  int32_T *jpvt_data;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  B_data = B->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Y, 2, &hh_emlrtRTEI);
  emxInit_real_T(sp, &b_B, 2, &xi_emlrtRTEI);
  emxInit_real_T(sp, &b_A, 2, &ih_emlrtRTEI);
  emxInit_real_T(sp, &tau, 1, &ih_emlrtRTEI);
  emxInit_int32_T(sp, &jpvt, 2, &ih_emlrtRTEI);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    mn = A->size[0];
    i = A->size[0] * A->size[1];
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, A, i, &im_emlrtRTEI);
    A_data = A->data;
    m = B->size[0];
    for (i = 0; i < m; i++) {
      for (a_tmp = 0; a_tmp < mn; a_tmp++) {
        A_data[a_tmp + A->size[0] * i] = 0.0;
      }
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &mj_emlrtRSI;
    b_st.site = &nj_emlrtRSI;
    c_st.site = &pj_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&c_st, b_A, i, &yi_emlrtRTEI);
    b_A_data = b_A->data;
    m = B->size[0] * B->size[1];
    for (i = 0; i < m; i++) {
      b_A_data[i] = B_data[i];
    }
    d_st.site = &qj_emlrtRSI;
    b_xgetrf(&d_st, B->size[1], B->size[1], b_A, B->size[1], jpvt, &info);
    jpvt_data = jpvt->data;
    b_A_data = b_A->data;
    nb = A->size[0];
    d_st.site = &rj_emlrtRSI;
    if (A->size[0] >= 1) {
      e_st.site = &ke_emlrtRSI;
      f_st.site = &le_emlrtRSI;
      wj = 1.0;
      DIAGA1 = 'N';
      TRANSA1 = 'N';
      UPLO1 = 'U';
      SIDE1 = 'R';
      nrc_t = (ptrdiff_t)A->size[0];
      n_t = (ptrdiff_t)B->size[1];
      lda_t = (ptrdiff_t)B->size[1];
      ldb_t = (ptrdiff_t)A->size[0];
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &wj, &b_A_data[0],
            &lda_t, &A_data[0], &ldb_t);
    }
    d_st.site = &sj_emlrtRSI;
    if (nb >= 1) {
      e_st.site = &ke_emlrtRSI;
      f_st.site = &le_emlrtRSI;
      wj = 1.0;
      DIAGA1 = 'U';
      TRANSA1 = 'N';
      UPLO1 = 'L';
      SIDE1 = 'R';
      nrc_t = (ptrdiff_t)nb;
      n_t = (ptrdiff_t)B->size[1];
      lda_t = (ptrdiff_t)B->size[1];
      ldb_t = (ptrdiff_t)nb;
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &wj, &b_A_data[0],
            &lda_t, &A_data[0], &ldb_t);
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      a_tmp = jpvt_data[j - 1];
      if (a_tmp != j) {
        d_st.site = &el_emlrtRSI;
        if ((1 <= nb) && (nb > 2147483646)) {
          e_st.site = &ub_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (b_i = 0; b_i < nb; b_i++) {
          wj = A_data[b_i + A->size[0] * (j - 1)];
          A_data[b_i + A->size[0] * (j - 1)] =
              A_data[b_i + A->size[0] * (a_tmp - 1)];
          A_data[b_i + A->size[0] * (a_tmp - 1)] = wj;
        }
      }
    }
    if (((B->size[0] != 1) || (B->size[1] != 1)) && (info > 0)) {
      c_st.site = &oj_emlrtRSI;
      if (!emlrtSetWarningFlag(&c_st)) {
        d_st.site = &tj_emlrtRSI;
        warning(&d_st);
      }
    }
  } else {
    st.site = &hg_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = A->size[1];
    b_B->size[1] = A->size[0];
    emxEnsureCapacity_real_T(&st, b_B, i, &xi_emlrtRTEI);
    b_B_data = b_B->data;
    m = A->size[0];
    for (i = 0; i < m; i++) {
      info = A->size[1];
      for (a_tmp = 0; a_tmp < info; a_tmp++) {
        b_B_data[a_tmp + b_B->size[0] * i] = A_data[i + A->size[0] * a_tmp];
      }
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[1];
    b_A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(&st, b_A, i, &aj_emlrtRTEI);
    b_A_data = b_A->data;
    m = B->size[0];
    for (i = 0; i < m; i++) {
      info = B->size[1];
      for (a_tmp = 0; a_tmp < info; a_tmp++) {
        b_A_data[a_tmp + b_A->size[0] * i] = B_data[i + B->size[0] * a_tmp];
      }
    }
    b_st.site = &kg_emlrtRSI;
    xgeqp3(&b_st, b_A, tau, jpvt);
    jpvt_data = jpvt->data;
    A_data = tau->data;
    b_A_data = b_A->data;
    b_st.site = &jg_emlrtRSI;
    rankA = rankFromQR(&b_st, b_A);
    b_st.site = &ig_emlrtRSI;
    nb = b_B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(&b_st, Y, i, &fh_emlrtRTEI);
    Y_data = Y->data;
    m = b_A->size[1] * b_B->size[1];
    for (i = 0; i < m; i++) {
      Y_data[i] = 0.0;
    }
    c_st.site = &ug_emlrtRSI;
    d_st.site = &xg_emlrtRSI;
    if ((b_A->size[0] != 0) && (b_A->size[1] != 0) &&
        ((b_B->size[0] != 0) && (b_B->size[1] != 0))) {
      nrc_t = (ptrdiff_t)b_B->size[0];
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)b_B->size[1],
          (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]),
          &b_A_data[0], (ptrdiff_t)b_A->size[0], &A_data[0], &b_B_data[0],
          nrc_t);
      info = (int32_T)nrc_t;
      e_st.site = &yg_emlrtRSI;
      if (infocheck(&e_st, info)) {
        if ((info == -10) && (b_B->size[1] > 1)) {
          e_st.site = &gl_emlrtRSI;
          m = b_A->size[0];
          info = b_B->size[1];
          mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
          f_st.site = &ah_emlrtRSI;
          if (mn > 2147483646) {
            g_st.site = &ub_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }
          for (j = 0; j < mn; j++) {
            if (A_data[j] != 0.0) {
              f_st.site = &hl_emlrtRSI;
              if (info > 2147483646) {
                g_st.site = &ub_emlrtRSI;
                check_forloop_overflow_error(&g_st);
              }
              for (k = 0; k < info; k++) {
                wj = b_B_data[j + b_B->size[0] * k];
                a_tmp = j + 2;
                f_st.site = &il_emlrtRSI;
                if ((j + 2 <= m) && (m > 2147483646)) {
                  g_st.site = &ub_emlrtRSI;
                  check_forloop_overflow_error(&g_st);
                }
                for (b_i = a_tmp; b_i <= m; b_i++) {
                  wj += b_A_data[(b_i + b_A->size[0] * j) - 1] *
                        b_B_data[(b_i + b_B->size[0] * k) - 1];
                }
                wj *= A_data[j];
                if (wj != 0.0) {
                  b_B_data[j + b_B->size[0] * k] -= wj;
                  f_st.site = &jl_emlrtRSI;
                  for (b_i = a_tmp; b_i <= m; b_i++) {
                    b_B_data[(b_i + b_B->size[0] * k) - 1] -=
                        b_A_data[(b_i + b_A->size[0] * j) - 1] * wj;
                  }
                }
              }
            }
          }
        } else {
          mn = b_B->size[0];
          info = b_B->size[1];
          i = b_B->size[0] * b_B->size[1];
          b_B->size[0] = mn;
          b_B->size[1] = info;
          emxEnsureCapacity_real_T(&d_st, b_B, i, &dj_emlrtRTEI);
          b_B_data = b_B->data;
          m = mn * info;
          for (i = 0; i < m; i++) {
            b_B_data[i] = rtNaN;
          }
        }
      }
    }
    c_st.site = &fl_emlrtRSI;
    if ((1 <= nb) && (nb > 2147483646)) {
      d_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < nb; k++) {
      c_st.site = &vg_emlrtRSI;
      if ((1 <= rankA) && (rankA > 2147483646)) {
        d_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (b_i = 0; b_i < rankA; b_i++) {
        Y_data[(jpvt_data[b_i] + Y->size[0] * k) - 1] =
            b_B_data[b_i + b_B->size[0] * k];
      }
      for (j = rankA; j >= 1; j--) {
        i = jpvt_data[j - 1];
        Y_data[(i + Y->size[0] * k) - 1] /=
            b_A_data[(j + b_A->size[0] * (j - 1)) - 1];
        c_st.site = &wg_emlrtRSI;
        for (b_i = 0; b_i <= j - 2; b_i++) {
          Y_data[(jpvt_data[b_i] + Y->size[0] * k) - 1] -=
              Y_data[(jpvt_data[j - 1] + Y->size[0] * k) - 1] *
              b_A_data[b_i + b_A->size[0] * (j - 1)];
        }
      }
    }
    i = A->size[0] * A->size[1];
    A->size[0] = Y->size[1];
    A->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, A, i, &gh_emlrtRTEI);
    A_data = A->data;
    m = Y->size[0];
    for (i = 0; i < m; i++) {
      info = Y->size[1];
      for (a_tmp = 0; a_tmp < info; a_tmp++) {
        A_data[a_tmp + A->size[0] * i] = Y_data[i + Y->size[0] * a_tmp];
      }
    }
  }
  emxFree_int32_T(sp, &jpvt);
  emxFree_real_T(sp, &tau);
  emxFree_real_T(sp, &b_A);
  emxFree_real_T(sp, &b_B);
  emxFree_real_T(sp, &Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void mrdiv(const emlrtStack *sp, const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  ptrdiff_t *jpvt_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *A;
  emxArray_real_T *b_Y;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  const real_T *B_data;
  real_T b_B;
  real_T tau_data;
  real_T tol;
  real_T *Y_data;
  real_T *b_Y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T na;
  int32_T *jpvt_data;
  char_T str[14];
  boolean_T p;
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
  B_data = B->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (B->size[0] == 0) {
    Y->size[0] = 1;
    Y->size[1] = 0;
  } else if (B->size[0] == 1) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Y, i, &ah_emlrtRTEI);
    Y_data = Y->data;
    Y_data[0] = 1.0 / B_data[0];
  } else {
    emxInit_real_T(sp, &b_Y, 1, &hh_emlrtRTEI);
    emxInit_real_T(sp, &A, 2, &ih_emlrtRTEI);
    st.site = &hg_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(&st, A, i, &bh_emlrtRTEI);
    Y_data = A->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = B_data[i];
    }
    emxInit_int32_T(&st, &jpvt, 2, &ih_emlrtRTEI);
    b_st.site = &kg_emlrtRSI;
    na = B->size[0] - 1;
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = B->size[0];
    emxEnsureCapacity_int32_T(&b_st, jpvt, i, &ch_emlrtRTEI);
    jpvt_data = jpvt->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      jpvt_data[i] = 0;
    }
    emxInit_ptrdiff_t(&b_st, &jpvt_t, &eh_emlrtRTEI);
    c_st.site = &lg_emlrtRSI;
    i = jpvt_t->size[0];
    jpvt_t->size[0] = B->size[0];
    emxEnsureCapacity_ptrdiff_t(&c_st, jpvt_t, i, &eh_emlrtRTEI);
    jpvt_t_data = jpvt_t->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      jpvt_t_data[i] = (ptrdiff_t)0;
    }
    info_t =
        LAPACKE_dgeqp3(102, (ptrdiff_t)1, (ptrdiff_t)B->size[0], &Y_data[0],
                       (ptrdiff_t)1, &jpvt_t_data[0], &tau_data);
    d_st.site = &rg_emlrtRSI;
    loop_ub = (int32_T)info_t;
    if (loop_ub != 0) {
      p = true;
      if (loop_ub != -4) {
        if (loop_ub == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &db_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &eb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv[0], 12, loop_ub);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      d_st.site = &qg_emlrtRSI;
      if (B->size[0] > 2147483646) {
        e_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        Y_data[loop_ub] = rtNaN;
      }
      d_st.site = &pg_emlrtRSI;
      tau_data = rtNaN;
      d_st.site = &og_emlrtRSI;
      d_st.site = &ng_emlrtRSI;
      if (B->size[0] > 2147483646) {
        e_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt_data[loop_ub] = loop_ub + 1;
      }
    } else {
      d_st.site = &mg_emlrtRSI;
      if (B->size[0] > 2147483646) {
        e_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt_data[loop_ub] = (int32_T)jpvt_t_data[loop_ub];
      }
    }
    emxFree_ptrdiff_t(&c_st, &jpvt_t);
    b_st.site = &jg_emlrtRSI;
    na = 0;
    b_B = muDoubleScalarAbs(Y_data[0]);
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)A->size[1]) *
          b_B;
    if (!(b_B <= tol)) {
      na = 1;
    } else if (!emlrtSetWarningFlag(&b_st)) {
      c_st.site = &tg_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&b_y, m);
      d_st.site = &pm_emlrtRSI;
      c_emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, b_y, &w_emlrtMCI),
                         "<output of sprintf>", str);
      c_st.site = &sg_emlrtRSI;
      d_warning(&c_st, 0, str);
    }
    b_st.site = &ig_emlrtRSI;
    i = b_Y->size[0];
    b_Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_Y, i, &fh_emlrtRTEI);
    b_Y_data = b_Y->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_Y_data[i] = 0.0;
    }
    c_st.site = &ug_emlrtRSI;
    d_st.site = &xg_emlrtRSI;
    b_B = 1.0;
    info_t = (ptrdiff_t)1;
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)1, (ptrdiff_t)1,
                            &Y_data[0], (ptrdiff_t)1, &tau_data, &b_B, info_t);
    e_st.site = &yg_emlrtRSI;
    if (infocheck(&e_st, (int32_T)info_t)) {
      b_B = rtNaN;
    }
    c_st.site = &vg_emlrtRSI;
    if (0 <= na - 1) {
      b_Y_data[jpvt_data[0] - 1] = b_B;
    }
    for (loop_ub = na; loop_ub >= 1; loop_ub--) {
      i = jpvt_data[0];
      b_Y_data[i - 1] /= Y_data[0];
      c_st.site = &wg_emlrtRSI;
    }
    emxFree_int32_T(&b_st, &jpvt);
    emxFree_real_T(&b_st, &A);
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = b_Y->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &gh_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = b_Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = b_Y_data[i];
    }
    emxFree_real_T(sp, &b_Y);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mrdivide_helper.c) */

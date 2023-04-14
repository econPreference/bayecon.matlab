/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lusolve.cpp
 *
 * Code generation for function 'lusolve'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "obj.h"
#include "lusolve.h"
#include "obj_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "warning.h"
#include "infocheck.h"
#include "repmat.h"
#include "obj_data.h"
#include "lapacke.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 109,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 107,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 139,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 142,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 150,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 152,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 90, /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 76, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 77, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRTEInfo n_emlrtRTEI = { 67,/* lineNo */
  9,                                   /* colNo */
  "lusolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 1, /* lineNo */
  19,                                  /* colNo */
  "lusolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pName */
};

/* Function Definitions */
void lusolve(const emlrtStack *sp, const emxArray_real_T *A, const
             emxArray_real_T *B, emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int32_T n;
  int32_T ip;
  int32_T loop_ub;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  int32_T i4;
  uint16_T unnamed_idx_0;
  int32_T nb;
  ptrdiff_t info_t;
  int32_T xj;
  real_T temp;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
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
  emxInit_real_T(sp, &b_A, 2, &j_emlrtRTEI, true);
  st.site = &gb_emlrtRSI;
  n = A->size[1];
  b_st.site = &ib_emlrtRSI;
  ip = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&b_st, b_A, ip, &h_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (ip = 0; ip < loop_ub; ip++) {
    b_A->data[ip] = A->data[ip];
  }

  c_st.site = &h_emlrtRSI;
  emxInit_int32_T(&c_st, &ipiv, 2, &o_emlrtRTEI, true);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
    n = 0;
  } else {
    emxInit_ptrdiff_t(&c_st, &ipiv_t, 1, &l_emlrtRTEI, true);
    i4 = muIntScalarMin_sint32(n, n);
    d_st.site = &m_emlrtRSI;
    repmat(&d_st, (ptrdiff_t)0.0, muIntScalarMax_sint32(i4, 1), ipiv_t);
    unnamed_idx_0 = static_cast<uint16_T>(ipiv_t->size[0]);
    ip = ipiv_t->size[0];
    ipiv_t->size[0] = unnamed_idx_0;
    emxEnsureCapacity_ptrdiff_t(&c_st, ipiv_t, ip, &i_emlrtRTEI);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)A->size[1], (ptrdiff_t)A->size
      [1], &b_A->data[0], (ptrdiff_t)A->size[1], &ipiv_t->data[0]);
    n = (int32_T)info_t;
    ip = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&c_st, ipiv, ip, &i_emlrtRTEI);
    d_st.site = &i_emlrtRSI;
    infocheck(&d_st, n);
    ip = ipiv->size[1] - 1;
    for (loop_ub = 0; loop_ub <= ip; loop_ub++) {
      ipiv->data[loop_ub] = (int32_T)ipiv_t->data[loop_ub];
    }

    emxFree_ptrdiff_t(&ipiv_t);
  }

  if (((A->size[0] != 1) || (A->size[1] != 1)) && (n > 0)) {
    b_st.site = &hb_emlrtRSI;
    c_st.site = &nb_emlrtRSI;
    warning(&c_st);
  }

  nb = B->size[1];
  ip = X->size[0] * X->size[1];
  X->size[0] = B->size[0];
  X->size[1] = B->size[1];
  emxEnsureCapacity_real_T(&st, X, ip, &n_emlrtRTEI);
  loop_ub = B->size[0] * B->size[1];
  for (ip = 0; ip < loop_ub; ip++) {
    X->data[ip] = B->data[ip];
  }

  n = A->size[1];
  b_st.site = &jb_emlrtRSI;
  for (loop_ub = 0; loop_ub <= n - 2; loop_ub++) {
    if (ipiv->data[loop_ub] != loop_ub + 1) {
      ip = ipiv->data[loop_ub] - 1;
      b_st.site = &kb_emlrtRSI;
      if ((1 <= nb) && (nb > 2147483646)) {
        c_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (xj = 0; xj < nb; xj++) {
        temp = X->data[loop_ub + X->size[0] * xj];
        X->data[loop_ub + X->size[0] * xj] = X->data[ip + X->size[0] * xj];
        X->data[ip + X->size[0] * xj] = temp;
      }
    }
  }

  emxFree_int32_T(&ipiv);
  b_st.site = &lb_emlrtRSI;
  if ((A->size[1] < 1) || (B->size[1] < 1)) {
  } else {
    c_st.site = &ob_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &X->data[0], &ldb_t);
  }

  b_st.site = &mb_emlrtRSI;
  if ((A->size[1] < 1) || (B->size[1] < 1)) {
  } else {
    c_st.site = &ob_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &X->data[0], &ldb_t);
  }

  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (lusolve.cpp) */

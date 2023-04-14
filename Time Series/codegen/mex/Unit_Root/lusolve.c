/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lusolve.c
 *
 * Code generation for function 'lusolve'
 *
 */

/* Include files */
#include "lusolve.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo sj_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 109,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 107,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 139,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 150,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 152,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 90, /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRTEInfo xn_emlrtRTEI = { 1,/* lineNo */
  37,                                  /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo yn_emlrtRTEI = { 27,/* lineNo */
  38,                                  /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo ao_emlrtRTEI = { 1,/* lineNo */
  19,                                  /* colNo */
  "lusolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pName */
};

/* Function Definitions */
void lusolve(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *B)
{
  emxArray_real_T *b_A;
  int32_T n;
  int32_T i;
  int32_T loop_ub;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  real_T temp;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t info_t;
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
  emxInit_real_T(sp, &b_A, 2, &yn_emlrtRTEI, true);
  st.site = &sj_emlrtRSI;
  n = A->size[1];
  b_st.site = &uj_emlrtRSI;
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&b_st, b_A, i, &xn_emlrtRTEI);
  loop_ub = A->size[0] * A->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_A->data[i] = A->data[i];
  }

  c_st.site = &ve_emlrtRSI;
  emxInit_int32_T(&c_st, &ipiv, 2, &ao_emlrtRTEI, true);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
    n = 0;
  } else {
    emxInit_ptrdiff_t(&c_st, &ipiv_t, 1, &pn_emlrtRTEI, true);
    d_st.site = &bf_emlrtRSI;
    i = ipiv_t->size[0];
    n = muIntScalarMin_sint32(n, n);
    ipiv_t->size[0] = muIntScalarMax_sint32(n, 1);
    emxEnsureCapacity_ptrdiff_t(&d_st, ipiv_t, i, &on_emlrtRTEI);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)A->size[1], (ptrdiff_t)A->size
      [1], &b_A->data[0], (ptrdiff_t)A->size[1], &ipiv_t->data[0]);
    n = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&c_st, ipiv, i, &on_emlrtRTEI);
    d_st.site = &we_emlrtRSI;
    if (n < 0) {
      if (n == -1010) {
        emlrtErrorWithMessageIdR2018a(&d_st, &db_emlrtRTEI, "MATLAB:nomem",
          "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &cb_emlrtRTEI,
          "Coder:toolbox:LAPACKCallErrorInfo",
          "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, cv4, 12, n);
      }
    }

    i = ipiv_t->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      ipiv->data[loop_ub] = (int32_T)ipiv_t->data[loop_ub];
    }

    emxFree_ptrdiff_t(&ipiv_t);
  }

  if (((A->size[0] != 1) || (A->size[1] != 1)) && (n > 0)) {
    b_st.site = &tj_emlrtRSI;
    c_st.site = &yj_emlrtRSI;
    warning(&c_st);
  }

  n = A->size[1];
  b_st.site = &vj_emlrtRSI;
  for (loop_ub = 0; loop_ub <= n - 2; loop_ub++) {
    i = ipiv->data[loop_ub];
    if (i != loop_ub + 1) {
      temp = B->data[loop_ub];
      B->data[loop_ub] = B->data[i - 1];
      B->data[i - 1] = temp;
    }
  }

  emxFree_int32_T(&ipiv);
  b_st.site = &wj_emlrtRSI;
  if (A->size[1] >= 1) {
    c_st.site = &lf_emlrtRSI;
    c_st.site = &kf_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &B->data[0], &ldb_t);
  }

  b_st.site = &xj_emlrtRSI;
  if (A->size[1] >= 1) {
    c_st.site = &lf_emlrtRSI;
    c_st.site = &kf_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &B->data[0], &ldb_t);
  }

  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (lusolve.c) */

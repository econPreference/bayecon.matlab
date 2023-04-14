/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "blas.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo bg_emlrtRTEI = { 211,/* lineNo */
  5,                                   /* colNo */
  "mtimes",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 166,/* lineNo */
  9,                                   /* colNo */
  "mtimes",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 167,/* lineNo */
  9,                                   /* colNo */
  "mtimes",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

/* Function Definitions */
void b_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C)
{
  int32_T i;
  int32_T loop_ub;
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T(sp, C, i, &bg_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &sd_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T(&st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

void c_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C)
{
  int32_T i;
  char_T TRANSB1;
  int32_T loop_ub;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &bg_emlrtRTEI);
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &sd_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

real_T d_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
                emxArray_real_T *B)
{
  real_T C;
  emxArray_real_T *At;
  int32_T i;
  int32_T loop_ub;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &At, 2, &lg_emlrtRTEI, true);
  i = At->size[0] * At->size[1];
  At->size[0] = 1;
  At->size[1] = A->size[0];
  emxEnsureCapacity_real_T(sp, At, i, &lg_emlrtRTEI);
  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    At->data[i] = A->data[i];
  }

  if (A->size[0] < 1) {
    C = 0.0;
  } else {
    n_t = (ptrdiff_t)A->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    C = ddot(&n_t, &At->data[0], &incx_t, &B->data[0], &incy_t);
  }

  emxFree_real_T(&At);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return C;
}

void e_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C)
{
  int32_T i;
  char_T TRANSB1;
  int32_T loop_ub;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((A->size[0] == 0) || (B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &bg_emlrtRTEI);
    loop_ub = B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &sd_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)1;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

void f_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C)
{
  int32_T i;
  char_T TRANSB1;
  int32_T loop_ub;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &bg_emlrtRTEI);
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &sd_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

void g_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C)
{
  int32_T i;
  int32_T loop_ub;
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &bg_emlrtRTEI);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &sd_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

real_T h_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
                emxArray_real_T *B)
{
  real_T C;
  emxArray_real_T *At;
  int32_T i;
  int32_T loop_ub;
  emxArray_real_T *Bt;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &At, 2, &lg_emlrtRTEI, true);
  i = At->size[0] * At->size[1];
  At->size[0] = 1;
  At->size[1] = A->size[0];
  emxEnsureCapacity_real_T(sp, At, i, &lg_emlrtRTEI);
  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    At->data[i] = A->data[i];
  }

  emxInit_real_T(sp, &Bt, 1, &wj_emlrtRTEI, true);
  i = Bt->size[0];
  Bt->size[0] = B->size[1];
  emxEnsureCapacity_real_T(sp, Bt, i, &wj_emlrtRTEI);
  loop_ub = B->size[1];
  for (i = 0; i < loop_ub; i++) {
    Bt->data[i] = B->data[i];
  }

  if (A->size[0] < 1) {
    C = 0.0;
  } else {
    n_t = (ptrdiff_t)A->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    C = ddot(&n_t, &At->data[0], &incx_t, &Bt->data[0], &incy_t);
  }

  emxFree_real_T(&Bt);
  emxFree_real_T(&At);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return C;
}

void i_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C)
{
  int32_T i;
  char_T TRANSB1;
  int32_T loop_ub;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((A->size[1] == 0) || (B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &bg_emlrtRTEI);
    loop_ub = B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &sd_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)1;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

real_T mtimes(const emxArray_real_T *A, const emxArray_real_T *B)
{
  real_T C;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  if (A->size[1] < 1) {
    C = 0.0;
  } else {
    n_t = (ptrdiff_t)A->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    C = ddot(&n_t, &A->data[0], &incx_t, &B->data[0], &incy_t);
  }

  return C;
}

/* End of code generation (mtimes.c) */

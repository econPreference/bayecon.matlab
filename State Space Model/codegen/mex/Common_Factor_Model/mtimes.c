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
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo if_emlrtRSI = {
    142,      /* lineNo */
    "mtimes", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    178,           /* lineNo */
    "mtimes_blas", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    132,      /* lineNo */
    "mtimes", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = {
    40,      /* lineNo */
    "xdotu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xdotu.m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = {
    15,      /* lineNo */
    "xdotu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+refblas/"
    "xdotu.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    32,      /* lineNo */
    "xdotx", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+refblas/"
    "xdotx.m" /* pathName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    140,      /* lineNo */
    5,        /* colNo */
    "mtimes", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    218,      /* lineNo */
    20,       /* colNo */
    "mtimes", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pName */
};

static const creal_T dc = {
    0.0, /* re */
    0.0  /* im */
};

static const creal_T dc1 = {
    1.0, /* re */
    0.0  /* im */
};

/* Function Definitions */
void b_mtimes(const emlrtStack *sp, const emxArray_creal_T *A,
              const emxArray_creal_T *B, emxArray_creal_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const creal_T *A_data;
  const creal_T *B_data;
  creal_T *C_data;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  A_data = A->data;
  if ((A->size[0] == 0) || (B->size[0] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[0];
    emxEnsureCapacity_creal_T(sp, C, i, &gf_emlrtRTEI);
    C_data = C->data;
    loop_ub = A->size[0] * B->size[0];
    for (i = 0; i < loop_ub; i++) {
      C_data[i] = dc;
    }
  } else {
    st.site = &if_emlrtRSI;
    b_st.site = &jf_emlrtRSI;
    TRANSB1 = 'C';
    TRANSA1 = 'N';
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[0];
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[0];
    emxEnsureCapacity_creal_T(&b_st, C, i, &hf_emlrtRTEI);
    C_data = C->data;
    zgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, (real_T *)&dc1,
          (real_T *)&A_data[0], &lda_t, (real_T *)&B_data[0], &ldb_t,
          (real_T *)&dc, (real_T *)&C_data[0], &ldc_t);
  }
}

void c_mtimes(const emlrtStack *sp, const emxArray_creal_T *A,
              const emxArray_creal_T *B, emxArray_creal_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const creal_T *A_data;
  const creal_T *B_data;
  creal_T *C_data;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  A_data = A->data;
  if ((A->size[0] == 0) || (B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_creal_T(sp, C, i, &gf_emlrtRTEI);
    C_data = C->data;
    loop_ub = B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C_data[i] = dc;
    }
  } else {
    st.site = &if_emlrtRSI;
    b_st.site = &jf_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'C';
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)1;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_creal_T(&b_st, C, i, &hf_emlrtRTEI);
    C_data = C->data;
    zgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, (real_T *)&dc1,
          (real_T *)&A_data[0], &lda_t, (real_T *)&B_data[0], &ldb_t,
          (real_T *)&dc, (real_T *)&C_data[0], &ldc_t);
  }
}

creal_T d_mtimes(const emlrtStack *sp, const emxArray_creal_T *A,
                 const emxArray_creal_T *B)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const creal_T *A_data;
  const creal_T *B_data;
  creal_T C;
  real_T A_re_tmp;
  real_T b_A_re_tmp;
  real_T c_A_re_tmp;
  real_T d_A_re_tmp;
  int32_T ixlast;
  int32_T k;
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
  A_data = A->data;
  st.site = &qf_emlrtRSI;
  b_st.site = &rf_emlrtRSI;
  c_st.site = &sf_emlrtRSI;
  C.re = 0.0;
  C.im = 0.0;
  if (A->size[1] >= 1) {
    ixlast = A->size[1];
    d_st.site = &tf_emlrtRSI;
    if (A->size[1] > 2147483646) {
      e_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (k = 0; k < ixlast; k++) {
      A_re_tmp = A_data[k].re;
      b_A_re_tmp = B_data[k].im;
      c_A_re_tmp = A_data[k].im;
      d_A_re_tmp = B_data[k].re;
      C.re += A_re_tmp * d_A_re_tmp - c_A_re_tmp * b_A_re_tmp;
      C.im += A_re_tmp * b_A_re_tmp + c_A_re_tmp * d_A_re_tmp;
    }
  }
  return C;
}

void e_mtimes(const emxArray_creal_T *A, const emxArray_creal_T *B,
              creal_T C[2])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  const creal_T *A_data;
  const creal_T *B_data;
  char_T TRANSA1;
  char_T TRANSB1;
  B_data = B->data;
  A_data = A->data;
  if ((A->size[0] == 0) || (B->size[0] == 0)) {
    C[0] = dc;
    C[1] = dc;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'C';
    m_t = (ptrdiff_t)2;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)2;
    zgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, (real_T *)&dc1,
          (real_T *)&A_data[0], &lda_t, (real_T *)&B_data[0], &ldb_t,
          (real_T *)&dc, (real_T *)&C[0], &ldc_t);
  }
}

real_T f_mtimes(const emxArray_real_T *A, const emxArray_real_T *B)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  const real_T *A_data;
  const real_T *B_data;
  real_T C;
  B_data = B->data;
  A_data = A->data;
  if (A->size[1] < 1) {
    C = 0.0;
  } else {
    n_t = (ptrdiff_t)A->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    C = ddot(&n_t, &A_data[0], &incx_t, &B_data[0], &incy_t);
  }
  return C;
}

void g_mtimes(const real_T A_data[], const int32_T A_size[2],
              const real_T B_data[], int32_T B_size, real_T C_data[],
              int32_T *C_size)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A_size[1] == 0) || (B_size == 0)) {
    *C_size = 1;
    C_data[0] = 0.0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)1;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)1;
    ldc_t = (ptrdiff_t)1;
    *C_size = 1;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void h_mtimes(const real_T A_data[], const real_T B[2], real_T C_data[],
              int32_T *C_size)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)2;
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)2;
  lda_t = (ptrdiff_t)2;
  ldb_t = (ptrdiff_t)2;
  ldc_t = (ptrdiff_t)2;
  *C_size = 2;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
        &B[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
}

void i_mtimes(const real_T A_data[], const real_T B[2], real_T C_data[],
              int32_T *C_size)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  TRANSB1 = 'N';
  TRANSA1 = 'T';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)2;
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)2;
  lda_t = (ptrdiff_t)2;
  ldb_t = (ptrdiff_t)2;
  ldc_t = (ptrdiff_t)2;
  *C_size = 2;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
        &B[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
}

void j_mtimes(const real_T A_data[], const real_T B_data[], real_T C_data[],
              int32_T C_size[2])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  TRANSB1 = 'T';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)1;
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)1;
  lda_t = (ptrdiff_t)1;
  ldb_t = (ptrdiff_t)1;
  ldc_t = (ptrdiff_t)1;
  C_size[0] = 1;
  C_size[1] = 1;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
        &B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
}

void k_mtimes(const real_T A_data[], const real_T B_data[], real_T C_data[],
              int32_T C_size[2])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)1;
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)1;
  lda_t = (ptrdiff_t)1;
  ldb_t = (ptrdiff_t)1;
  ldc_t = (ptrdiff_t)1;
  C_size[0] = 1;
  C_size[1] = 1;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A_data[0], &lda_t,
        &B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
}

void mtimes(const emxArray_creal_T *A, const emxArray_creal_T *B, creal_T C[4])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  const creal_T *A_data;
  const creal_T *B_data;
  char_T TRANSA1;
  char_T TRANSB1;
  B_data = B->data;
  A_data = A->data;
  if ((A->size[0] == 0) || (B->size[0] == 0)) {
    C[0] = dc;
    C[1] = dc;
    C[2] = dc;
    C[3] = dc;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'C';
    m_t = (ptrdiff_t)2;
    n_t = (ptrdiff_t)2;
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)2;
    zgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, (real_T *)&dc1,
          (real_T *)&A_data[0], &lda_t, (real_T *)&B_data[0], &ldb_t,
          (real_T *)&dc, (real_T *)&C[0], &ldc_t);
  }
}

/* End of code generation (mtimes.c) */

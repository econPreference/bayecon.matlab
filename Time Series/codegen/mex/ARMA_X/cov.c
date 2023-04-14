/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cov.c
 *
 * Code generation for function 'cov'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "cov.h"
#include "ARMA_X_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "ARMA_X_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo ol_emlrtRSI = { 71, /* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 73, /* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 153,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 158,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 170,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 150,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRTEInfo jn_emlrtRTEI = { 73,/* lineNo */
  20,                                  /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo kn_emlrtRTEI = { 71,/* lineNo */
  20,                                  /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo ln_emlrtRTEI = { 71,/* lineNo */
  5,                                   /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo mn_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo nn_emlrtRTEI = { 105,/* lineNo */
  5,                                   /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo on_emlrtRTEI = { 169,/* lineNo */
  9,                                   /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

/* Function Declarations */
static void local_cov(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *
                      c);

/* Function Definitions */
static void local_cov(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *
                      c)
{
  int32_T m;
  int32_T n;
  int32_T nx;
  int32_T loop_ub;
  int32_T LDA;
  boolean_T overflow;
  real_T alpha;
  int32_T i;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = x->size[0];
  n = x->size[1];
  nx = c->size[0] * c->size[1];
  c->size[0] = x->size[1];
  c->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, c, nx, &mn_emlrtRTEI);
  loop_ub = x->size[1] * x->size[1];
  for (nx = 0; nx < loop_ub; nx++) {
    c->data[nx] = 0.0;
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    nx = c->size[0] * c->size[1];
    c->size[0] = x->size[1];
    c->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, c, nx, &nn_emlrtRTEI);
    loop_ub = x->size[1] * x->size[1];
    for (nx = 0; nx < loop_ub; nx++) {
      c->data[nx] = rtNaN;
    }
  } else {
    LDA = x->size[0];
    if (x->size[0] >= 2) {
      nx = x->size[0];
      st.site = &vl_emlrtRSI;
      overflow = (x->size[1] > 2147483646);
      if (overflow) {
        b_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (loop_ub = 0; loop_ub < n; loop_ub++) {
        alpha = 0.0;
        st.site = &ql_emlrtRSI;
        if ((!(1 > m)) && (m > 2147483646)) {
          b_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (i = 1; i <= m; i++) {
          alpha += x->data[(i + x->size[0] * loop_ub) - 1];
        }

        alpha /= (real_T)m;
        st.site = &rl_emlrtRSI;
        for (i = 0; i < m; i++) {
          x->data[i + x->size[0] * loop_ub] -= alpha;
        }
      }

      alpha = 1.0 / ((real_T)nx - 1.0);
      nx = c->size[0] * c->size[1];
      c->size[0] = n;
      c->size[1] = n;
      emxEnsureCapacity_real_T(sp, c, nx, &on_emlrtRTEI);
      loop_ub = n * n;
      for (nx = 0; nx < loop_ub; nx++) {
        c->data[nx] = 0.0;
      }

      st.site = &sl_emlrtRSI;
      if (!(n < 1)) {
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'C';
        m_t = (ptrdiff_t)n;
        n_t = (ptrdiff_t)n;
        k_t = (ptrdiff_t)m;
        lda_t = (ptrdiff_t)LDA;
        ldb_t = (ptrdiff_t)LDA;
        ldc_t = (ptrdiff_t)n;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha, &x->data[0], &lda_t,
              &x->data[0], &ldb_t, &beta1, &c->data[0], &ldc_t);
      }
    }
  }
}

void cov(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *xy)
{
  boolean_T overflow;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  int32_T m;
  int32_T LDA;
  real_T c;
  int32_T nx;
  real_T muj;
  int32_T i;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
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
  overflow = (x->size[0] == 1);
  if (overflow) {
    emxInit_real_T1(sp, &c_x, 1, &kn_emlrtRTEI, true);
    st.site = &ol_emlrtRSI;
    LDA = x->size[1];
    m = c_x->size[0];
    c_x->size[0] = LDA;
    emxEnsureCapacity_real_T1(&st, c_x, m, &kn_emlrtRTEI);
    for (m = 0; m < LDA; m++) {
      c_x->data[m] = x->data[x->size[0] * m];
    }

    m = c_x->size[0];
    c = 0.0;
    if (c_x->size[0] == 0) {
      c = rtNaN;
    } else {
      LDA = c_x->size[0];
      if (c_x->size[0] >= 2) {
        nx = c_x->size[0];
        muj = 0.0;
        b_st.site = &ql_emlrtRSI;
        overflow = (c_x->size[0] > 2147483646);
        if (overflow) {
          c_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 1; i <= m; i++) {
          muj += c_x->data[i - 1];
        }

        muj /= (real_T)c_x->size[0];
        b_st.site = &rl_emlrtRSI;
        overflow = (c_x->size[0] > 2147483646);
        if (overflow) {
          c_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i < m; i++) {
          c_x->data[i] -= muj;
        }

        muj = 1.0 / ((real_T)nx - 1.0);
        b_st.site = &sl_emlrtRSI;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'C';
        m_t = (ptrdiff_t)1;
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)m;
        lda_t = (ptrdiff_t)LDA;
        ldb_t = (ptrdiff_t)LDA;
        ldc_t = (ptrdiff_t)1;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &muj, &c_x->data[0], &lda_t,
              &c_x->data[0], &ldb_t, &beta1, &c, &ldc_t);
      }
    }

    emxFree_real_T(&c_x);
    m = xy->size[0] * xy->size[1];
    xy->size[0] = 1;
    xy->size[1] = 1;
    emxEnsureCapacity_real_T(sp, xy, m, &ln_emlrtRTEI);
    xy->data[0] = c;
  } else {
    emxInit_real_T(sp, &b_x, 2, &jn_emlrtRTEI, true);
    m = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, b_x, m, &jn_emlrtRTEI);
    LDA = x->size[0] * x->size[1];
    for (m = 0; m < LDA; m++) {
      b_x->data[m] = x->data[m];
    }

    st.site = &pl_emlrtRSI;
    local_cov(&st, b_x, xy);
    emxFree_real_T(&b_x);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cov.c) */

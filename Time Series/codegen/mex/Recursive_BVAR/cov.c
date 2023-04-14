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
#include "Recursive_BVAR.h"
#include "cov.h"
#include "Recursive_BVAR_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "Recursive_BVAR_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo dk_emlrtRSI = { 71, /* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 73, /* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 153,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 158,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 170,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 150,/* lineNo */
  "cov",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pathName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 73,/* lineNo */
  20,                                  /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 71,/* lineNo */
  20,                                  /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 71,/* lineNo */
  5,                                   /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 105,/* lineNo */
  5,                                   /* colNo */
  "cov",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 169,/* lineNo */
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
  emxEnsureCapacity_real_T(sp, c, nx, &hj_emlrtRTEI);
  loop_ub = x->size[1] * x->size[1];
  for (nx = 0; nx < loop_ub; nx++) {
    c->data[nx] = 0.0;
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    nx = c->size[0] * c->size[1];
    c->size[0] = x->size[1];
    c->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, c, nx, &ij_emlrtRTEI);
    loop_ub = x->size[1] * x->size[1];
    for (nx = 0; nx < loop_ub; nx++) {
      c->data[nx] = rtNaN;
    }
  } else {
    LDA = x->size[0];
    if (x->size[0] >= 2) {
      nx = x->size[0];
      st.site = &kk_emlrtRSI;
      overflow = (x->size[1] > 2147483646);
      if (overflow) {
        b_st.site = &dc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (loop_ub = 0; loop_ub < n; loop_ub++) {
        alpha = 0.0;
        st.site = &fk_emlrtRSI;
        if ((!(1 > m)) && (m > 2147483646)) {
          b_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (i = 1; i <= m; i++) {
          alpha += x->data[(i + x->size[0] * loop_ub) - 1];
        }

        alpha /= (real_T)m;
        st.site = &gk_emlrtRSI;
        for (i = 0; i < m; i++) {
          x->data[i + x->size[0] * loop_ub] -= alpha;
        }
      }

      alpha = 1.0 / ((real_T)nx - 1.0);
      nx = c->size[0] * c->size[1];
      c->size[0] = n;
      c->size[1] = n;
      emxEnsureCapacity_real_T(sp, c, nx, &jj_emlrtRTEI);
      loop_ub = n * n;
      for (nx = 0; nx < loop_ub; nx++) {
        c->data[nx] = 0.0;
      }

      st.site = &hk_emlrtRSI;
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
    emxInit_real_T1(sp, &c_x, 1, &fj_emlrtRTEI, true);
    st.site = &dk_emlrtRSI;
    LDA = x->size[1];
    m = c_x->size[0];
    c_x->size[0] = LDA;
    emxEnsureCapacity_real_T2(&st, c_x, m, &fj_emlrtRTEI);
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
        b_st.site = &fk_emlrtRSI;
        overflow = (c_x->size[0] > 2147483646);
        if (overflow) {
          c_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 1; i <= m; i++) {
          muj += c_x->data[i - 1];
        }

        muj /= (real_T)c_x->size[0];
        b_st.site = &gk_emlrtRSI;
        overflow = (c_x->size[0] > 2147483646);
        if (overflow) {
          c_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i < m; i++) {
          c_x->data[i] -= muj;
        }

        muj = 1.0 / ((real_T)nx - 1.0);
        b_st.site = &hk_emlrtRSI;
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
    emxEnsureCapacity_real_T(sp, xy, m, &gj_emlrtRTEI);
    xy->data[0] = c;
  } else {
    emxInit_real_T(sp, &b_x, 2, &ej_emlrtRTEI, true);
    m = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, b_x, m, &ej_emlrtRTEI);
    LDA = x->size[0] * x->size[1];
    for (m = 0; m < LDA; m++) {
      b_x->data[m] = x->data[m];
    }

    st.site = &ek_emlrtRSI;
    local_cov(&st, b_x, xy);
    emxFree_real_T(&b_x);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cov.c) */

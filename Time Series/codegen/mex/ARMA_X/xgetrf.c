/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgetrf.c
 *
 * Code generation for function 'xgetrf'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "xgetrf.h"
#include "ARMA_X_emxutil.h"
#include "error1.h"
#include "ARMA_X_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo if_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 96, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 90, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 82, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 78, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 58, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 57, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 50, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRTEInfo qn_emlrtRTEI = { 53,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo rn_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo sn_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

/* Function Definitions */
void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
            int32_T lda, emxArray_int32_T *ipiv)
{
  int32_T NPIV;
  int32_T i47;
  int32_T varargin_1;
  emxArray_ptrdiff_t *ipiv_t;
  ptrdiff_t info_t;
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
  st.site = &if_emlrtRSI;
  b_st.site = &pf_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    NPIV = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
    emxEnsureCapacity_int32_T1(&st, ipiv, NPIV, &qn_emlrtRTEI);
  } else {
    b_st.site = &of_emlrtRSI;
    i47 = muIntScalarMin_sint32(m, n);
    varargin_1 = muIntScalarMax_sint32(i47, 1);
    b_st.site = &of_emlrtRSI;
    emxInit_ptrdiff_t(&b_st, &ipiv_t, 1, &sn_emlrtRTEI, true);
    NPIV = ipiv_t->size[0];
    ipiv_t->size[0] = varargin_1;
    emxEnsureCapacity_ptrdiff_t(&st, ipiv_t, NPIV, &rn_emlrtRTEI);
    b_st.site = &nf_emlrtRSI;
    b_st.site = &mf_emlrtRSI;
    b_st.site = &lf_emlrtRSI;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A->data[0],
      (ptrdiff_t)lda, &ipiv_t->data[0]);
    varargin_1 = (int32_T)info_t;
    NPIV = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T1(&st, ipiv, NPIV, &rn_emlrtRTEI);
    NPIV = ipiv->size[1];
    b_st.site = &kf_emlrtRSI;
    if (varargin_1 < 0) {
      if (varargin_1 == -1010) {
        c_st.site = &tf_emlrtRSI;
        d_error(&c_st);
      } else {
        c_st.site = &uf_emlrtRSI;
        e_error(&c_st, varargin_1);
      }
    }

    b_st.site = &jf_emlrtRSI;
    for (varargin_1 = 0; varargin_1 < NPIV; varargin_1++) {
      ipiv->data[varargin_1] = (int32_T)ipiv_t->data[varargin_1];
    }

    emxFree_ptrdiff_t(&ipiv_t);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgetrf.c) */

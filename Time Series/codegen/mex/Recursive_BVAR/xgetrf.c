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
#include "Recursive_BVAR.h"
#include "xgetrf.h"
#include "Recursive_BVAR_emxutil.h"
#include "error.h"
#include "Recursive_BVAR_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo pb_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 96, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 90, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 82, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 78, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 58, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 57, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 50, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 53,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

/* Function Definitions */
void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
            int32_T lda, emxArray_int32_T *ipiv)
{
  int32_T NPIV;
  int32_T i43;
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
  st.site = &pb_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    NPIV = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
    emxEnsureCapacity_int32_T1(&st, ipiv, NPIV, &lj_emlrtRTEI);
  } else {
    b_st.site = &vb_emlrtRSI;
    i43 = muIntScalarMin_sint32(m, n);
    varargin_1 = muIntScalarMax_sint32(i43, 1);
    b_st.site = &vb_emlrtRSI;
    emxInit_ptrdiff_t(&b_st, &ipiv_t, 1, &nj_emlrtRTEI, true);
    NPIV = ipiv_t->size[0];
    ipiv_t->size[0] = varargin_1;
    emxEnsureCapacity_ptrdiff_t(&st, ipiv_t, NPIV, &mj_emlrtRTEI);
    b_st.site = &ub_emlrtRSI;
    b_st.site = &tb_emlrtRSI;
    b_st.site = &sb_emlrtRSI;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A->data[0],
      (ptrdiff_t)lda, &ipiv_t->data[0]);
    varargin_1 = (int32_T)info_t;
    NPIV = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T1(&st, ipiv, NPIV, &mj_emlrtRTEI);
    NPIV = ipiv->size[1];
    b_st.site = &rb_emlrtRSI;
    if (varargin_1 < 0) {
      if (varargin_1 == -1010) {
        c_st.site = &bc_emlrtRSI;
        error(&c_st);
      } else {
        c_st.site = &cc_emlrtRSI;
        b_error(&c_st, varargin_1);
      }
    }

    b_st.site = &qb_emlrtRSI;
    for (varargin_1 = 0; varargin_1 < NPIV; varargin_1++) {
      ipiv->data[varargin_1] = (int32_T)ipiv_t->data[varargin_1];
    }

    emxFree_ptrdiff_t(&ipiv_t);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgetrf.c) */

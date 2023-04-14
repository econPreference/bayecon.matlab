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
#include "xgetrf.h"
#include "Structure_BVAR_data.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_types.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ib_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRTEInfo hi_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static const char_T cv[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                              'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

/* Function Definitions */
void b_xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
              int32_T lda, emxArray_int32_T *ipiv, int32_T *info)
{
  ptrdiff_t info_t;
  ptrdiff_t *ipiv_t_data;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r;
  real_T *A_data;
  int32_T i;
  int32_T k;
  int32_T *ipiv_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &ib_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
    *info = 0;
  } else {
    emxInit_ptrdiff_t(&st, &ipiv_t, &ji_emlrtRTEI);
    emxInit_ptrdiff_t(&st, &r, &hi_emlrtRTEI);
    i = muIntScalarMin_sint32(m, n);
    b_st.site = &kb_emlrtRSI;
    repmat(&b_st, (ptrdiff_t)0.0, muIntScalarMax_sint32(i, 1), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&st, ipiv_t, i, &hi_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A_data[0],
                                 (ptrdiff_t)lda, &ipiv_t_data[0]);
    *info = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&st, ipiv, i, &ii_emlrtRTEI);
    ipiv_data = ipiv->data;
    b_st.site = &jb_emlrtRSI;
    emxFree_ptrdiff_t(&b_st, &r);
    if (*info < 0) {
      if (*info == -1010) {
        emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &w_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, *info);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (k = 0; k <= i; k++) {
      ipiv_data[k] = (int32_T)ipiv_t_data[k];
    }
    emxFree_ptrdiff_t(&st, &ipiv_t);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
            int32_T lda, emxArray_int32_T *ipiv)
{
  ptrdiff_t info_t;
  ptrdiff_t *ipiv_t_data;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r;
  real_T *A_data;
  int32_T i;
  int32_T info;
  int32_T *ipiv_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &ib_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
  } else {
    emxInit_ptrdiff_t(&st, &ipiv_t, &ji_emlrtRTEI);
    emxInit_ptrdiff_t(&st, &r, &hi_emlrtRTEI);
    i = muIntScalarMin_sint32(m, n);
    b_st.site = &kb_emlrtRSI;
    repmat(&b_st, (ptrdiff_t)0.0, muIntScalarMax_sint32(i, 1), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&st, ipiv_t, i, &hi_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A_data[0],
                                 (ptrdiff_t)lda, &ipiv_t_data[0]);
    info = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&st, ipiv, i, &ii_emlrtRTEI);
    ipiv_data = ipiv->data;
    b_st.site = &jb_emlrtRSI;
    emxFree_ptrdiff_t(&b_st, &r);
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &w_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, info);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (info = 0; info <= i; info++) {
      ipiv_data[info] = (int32_T)ipiv_t_data[info];
    }
    emxFree_ptrdiff_t(&st, &ipiv_t);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (xgetrf.c) */

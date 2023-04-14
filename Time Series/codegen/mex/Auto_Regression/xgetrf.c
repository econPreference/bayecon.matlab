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
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Function Definitions */
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
  st.site = &yf_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
  } else {
    emxInit_ptrdiff_t(&st, &ipiv_t, &dk_emlrtRTEI);
    emxInit_ptrdiff_t(&st, &r, &yj_emlrtRTEI);
    i = muIntScalarMin_sint32(m, n);
    b_st.site = &bg_emlrtRSI;
    repmat(&b_st, (ptrdiff_t)0.0, muIntScalarMax_sint32(i, 1), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&st, ipiv_t, i, &yj_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A_data[0],
                                 (ptrdiff_t)lda, &ipiv_t_data[0]);
    info = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&st, ipiv, i, &bk_emlrtRTEI);
    ipiv_data = ipiv->data;
    b_st.site = &ag_emlrtRSI;
    emxFree_ptrdiff_t(&b_st, &r);
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&b_st, &s_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &t_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv1[0], 12, info);
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

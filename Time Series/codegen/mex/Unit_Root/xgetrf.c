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
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
            int32_T lda, emxArray_int32_T *ipiv)
{
  emxArray_ptrdiff_t *ipiv_t;
  int32_T i;
  int32_T info;
  ptrdiff_t info_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ve_emlrtRSI;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    ipiv->size[0] = 1;
    ipiv->size[1] = 0;
  } else {
    emxInit_ptrdiff_t(&st, &ipiv_t, 1, &pn_emlrtRTEI, true);
    b_st.site = &bf_emlrtRSI;
    i = ipiv_t->size[0];
    info = muIntScalarMin_sint32(m, n);
    ipiv_t->size[0] = muIntScalarMax_sint32(info, 1);
    emxEnsureCapacity_ptrdiff_t(&b_st, ipiv_t, i, &on_emlrtRTEI);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A->data[0],
      (ptrdiff_t)lda, &ipiv_t->data[0]);
    info = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&st, ipiv, i, &on_emlrtRTEI);
    b_st.site = &we_emlrtRSI;
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&b_st, &db_emlrtRTEI, "MATLAB:nomem",
          "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &cb_emlrtRTEI,
          "Coder:toolbox:LAPACKCallErrorInfo",
          "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, cv4, 12, info);
      }
    }

    i = ipiv_t->size[0] - 1;
    for (info = 0; info <= i; info++) {
      ipiv->data[info] = (int32_T)ipiv_t->data[info];
    }

    emxFree_ptrdiff_t(&ipiv_t);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgetrf.c) */

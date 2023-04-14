/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.cpp
 *
 * Code generation for function 'det'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "obj.h"
#include "det.h"
#include "obj_emxutil.h"
#include "infocheck.h"
#include "repmat.h"
#include "obj_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo f_emlrtRSI = { 21,  /* lineNo */
  "det",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRTEInfo k_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 12,/* lineNo */
  15,                                  /* colNo */
  "det",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

/* Function Definitions */
real_T det(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T isodd;
  emxArray_real_T *b_x;
  int32_T m;
  int32_T n;
  int32_T i2;
  int32_T loop_ub;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  uint16_T unnamed_idx_0;
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
  isodd = (x->size[0] == x->size[1]);
  if (!isodd) {
    emlrtErrorWithMessageIdR2018a(sp, &gb_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 1.0;
  } else {
    emxInit_real_T(sp, &b_x, 2, &j_emlrtRTEI, true);
    m = x->size[0];
    n = x->size[1];
    st.site = &f_emlrtRSI;
    i2 = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i2, &h_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_x->data[i2] = x->data[i2];
    }

    emxInit_int32_T(&st, &ipiv, 2, &k_emlrtRTEI, true);
    emxInit_ptrdiff_t(&st, &ipiv_t, 1, &l_emlrtRTEI, true);
    b_st.site = &h_emlrtRSI;
    c_st.site = &m_emlrtRSI;
    repmat(&c_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(m, n), ipiv_t);
    unnamed_idx_0 = static_cast<uint16_T>(ipiv_t->size[0]);
    i2 = ipiv_t->size[0];
    ipiv_t->size[0] = unnamed_idx_0;
    emxEnsureCapacity_ptrdiff_t(&b_st, ipiv_t, i2, &i_emlrtRTEI);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0], (ptrdiff_t)x->size
      [1], &b_x->data[0], (ptrdiff_t)x->size[0], &ipiv_t->data[0]);
    i2 = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&b_st, ipiv, i2, &i_emlrtRTEI);
    c_st.site = &i_emlrtRSI;
    infocheck(&c_st, (int32_T)info_t);
    i2 = ipiv->size[1] - 1;
    for (m = 0; m <= i2; m++) {
      ipiv->data[m] = (int32_T)ipiv_t->data[m];
    }

    emxFree_ptrdiff_t(&ipiv_t);
    y = b_x->data[0];
    i2 = b_x->size[0];
    for (m = 0; m <= i2 - 2; m++) {
      y *= b_x->data[(m + b_x->size[0] * (m + 1)) + 1];
    }

    emxFree_real_T(&b_x);
    isodd = false;
    i2 = ipiv->size[1];
    for (m = 0; m <= i2 - 2; m++) {
      if (ipiv->data[m] > 1 + m) {
        isodd = !isodd;
      }
    }

    emxFree_int32_T(&ipiv);
    if (isodd) {
      y = -y;
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/* End of code generation (det.cpp) */

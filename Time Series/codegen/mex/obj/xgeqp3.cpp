/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeqp3.cpp
 *
 * Code generation for function 'xgeqp3'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "obj.h"
#include "xgeqp3.h"
#include "obj_emxutil.h"
#include "infocheck.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo xb_emlrtRSI = { 14, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 76, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRTEInfo s_emlrtRTEI = { 14,/* lineNo */
  5,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 121,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 82,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 77,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 78,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

/* Function Definitions */
void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *tau,
            emxArray_int32_T *jpvt)
{
  int32_T m;
  int32_T n;
  emxArray_ptrdiff_t *jpvt_t;
  int32_T i8;
  int32_T loop_ub;
  ptrdiff_t m_t;
  ptrdiff_t info_t;
  int32_T i9;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &xb_emlrtRSI;
  m = A->size[0];
  n = A->size[1];
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    tau->size[0] = 0;
    if (A->size[1] < 1) {
      n = 0;
    } else {
      n = A->size[1];
    }

    i8 = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = n;
    emxEnsureCapacity_int32_T(&st, jpvt, i8, &u_emlrtRTEI);
    if (n > 0) {
      jpvt->data[0] = 1;
      m = 1;
      for (loop_ub = 2; loop_ub <= n; loop_ub++) {
        m++;
        jpvt->data[loop_ub - 1] = m;
      }
    }
  } else {
    emxInit_ptrdiff_t(&st, &jpvt_t, 1, &t_emlrtRTEI, true);
    i8 = tau->size[0];
    tau->size[0] = muIntScalarMin_sint32(m, n);
    emxEnsureCapacity_real_T(&st, tau, i8, &s_emlrtRTEI);
    i8 = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(&st, jpvt_t, i8, &t_emlrtRTEI);
    m = A->size[1];
    for (i8 = 0; i8 < m; i8++) {
      jpvt_t->data[i8] = (ptrdiff_t)0;
    }

    m_t = (ptrdiff_t)A->size[0];
    info_t = LAPACKE_dgeqp3(102, m_t, (ptrdiff_t)A->size[1], &A->data[0], m_t,
      &jpvt_t->data[0], &tau->data[0]);
    b_st.site = &dc_emlrtRSI;
    if (b_infocheck(&b_st, (int32_T)info_t)) {
      i8 = A->size[0] * A->size[1];
      emxEnsureCapacity_real_T(&st, A, i8, &w_emlrtRTEI);
      m = A->size[1];
      for (i8 = 0; i8 < m; i8++) {
        loop_ub = A->size[0];
        for (i9 = 0; i9 < loop_ub; i9++) {
          A->data[i9 + A->size[0] * i8] = rtNaN;
        }
      }

      m = tau->size[0];
      i8 = tau->size[0];
      tau->size[0] = m;
      emxEnsureCapacity_real_T(&st, tau, i8, &x_emlrtRTEI);
      for (i8 = 0; i8 < m; i8++) {
        tau->data[i8] = rtNaN;
      }

      if (n < 1) {
        n = 0;
      }

      i8 = jpvt->size[0] * jpvt->size[1];
      jpvt->size[0] = 1;
      jpvt->size[1] = n;
      emxEnsureCapacity_int32_T(&st, jpvt, i8, &u_emlrtRTEI);
      if (n > 0) {
        jpvt->data[0] = 1;
        m = 1;
        for (loop_ub = 2; loop_ub <= n; loop_ub++) {
          m++;
          jpvt->data[loop_ub - 1] = m;
        }
      }
    } else {
      i8 = jpvt->size[0] * jpvt->size[1];
      jpvt->size[0] = 1;
      jpvt->size[1] = jpvt_t->size[0];
      emxEnsureCapacity_int32_T(&st, jpvt, i8, &v_emlrtRTEI);
      m = jpvt_t->size[0];
      for (i8 = 0; i8 < m; i8++) {
        jpvt->data[i8] = (int32_T)jpvt_t->data[i8];
      }
    }

    emxFree_ptrdiff_t(&jpvt_t);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgeqp3.cpp) */

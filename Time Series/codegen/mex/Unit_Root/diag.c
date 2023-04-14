/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "diag.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo dd_emlrtRSI = { 90, /* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = { 102,/* lineNo */
  19,                                  /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 100,/* lineNo */
  5,                                   /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 82,/* lineNo */
  5,                                   /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

/* Function Definitions */
void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T nv;
  int32_T j;
  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nv = v->size[0];
  j = d->size[0] * d->size[1];
  d->size[0] = v->size[0];
  d->size[1] = v->size[0];
  emxEnsureCapacity_real_T(sp, d, j, &yf_emlrtRTEI);
  loop_ub = v->size[0] * v->size[0];
  for (j = 0; j < loop_ub; j++) {
    d->data[j] = 0.0;
  }

  st.site = &dd_emlrtRSI;
  if ((1 <= v->size[0]) && (v->size[0] > 2147483646)) {
    b_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (j = 0; j < nv; j++) {
    d->data[j + d->size[0] * j] = v->data[j];
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T n;
  int32_T m;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    n = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T(sp, d, n, &wf_emlrtRTEI);
    d->data[0] = v->data[0];
  } else {
    if ((v->size[0] == 1) || (v->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(sp, &p_emlrtRTEI,
        "Coder:toolbox:diag_varsizedMatrixVector",
        "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }

    m = v->size[0];
    n = v->size[1];
    if (0 < v->size[1]) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }

    n = d->size[0];
    d->size[0] = m;
    emxEnsureCapacity_real_T(sp, d, n, &xf_emlrtRTEI);
    n = m - 1;
    for (m = 0; m <= n; m++) {
      d->data[m] = v->data[m + v->size[0] * m];
    }
  }
}

/* End of code generation (diag.c) */

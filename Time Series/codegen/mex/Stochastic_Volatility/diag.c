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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "diag.h"
#include "Stochastic_Volatility_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo af_emlrtRSI = { 90, /* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 100,/* lineNo */
  5,                                   /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 82,/* lineNo */
  5,                                   /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtRTEInfo hm_emlrtRTEI = { 102,/* lineNo */
  19,                                  /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

/* Function Definitions */
void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i22;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  unnamed_idx_0 = v->size[0];
  unnamed_idx_1 = v->size[0];
  i22 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T1(sp, d, i22, &kg_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i22 = 0; i22 < unnamed_idx_0; i22++) {
    d->data[i22] = 0.0;
  }

  st.site = &af_emlrtRSI;
  overflow = ((!(1 > v->size[0])) && (v->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_0 = 0; unnamed_idx_0 < v->size[0]; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * unnamed_idx_0] = v->data[unnamed_idx_0];
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T m;
  int32_T n;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    m = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T(sp, d, m, &ig_emlrtRTEI);
    d->data[0] = v->data[0];
  } else {
    if ((v->size[0] == 1) || (v->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(sp, &hm_emlrtRTEI,
        "Coder:toolbox:diag_varsizedMatrixVector",
        "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }

    m = v->size[0];
    n = v->size[1];
    if (0 < v->size[1]) {
      n = muIntScalarMin_sint32(m, n);
    } else {
      n = 0;
    }

    m = d->size[0];
    d->size[0] = n;
    emxEnsureCapacity_real_T(sp, d, m, &jg_emlrtRTEI);
    for (m = 0; m < n; m++) {
      d->data[m] = v->data[m + v->size[0] * m];
    }
  }
}

/* End of code generation (diag.c) */

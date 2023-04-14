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
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_emxutil.h"
#include "Unobserved_Component_Model_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ed_emlrtRSI = {
    90,     /* lineNo */
    "diag", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/diag.m" /* pathName
                                                                           */
};

static emlrtRTEInfo r_emlrtRTEI = {
    102,    /* lineNo */
    19,     /* colNo */
    "diag", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/diag.m" /* pName
                                                                           */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    82,     /* lineNo */
    5,      /* colNo */
    "diag", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/diag.m" /* pName
                                                                           */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    100,    /* lineNo */
    5,      /* colNo */
    "diag", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/diag.m" /* pName
                                                                           */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    109,    /* lineNo */
    24,     /* colNo */
    "diag", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/diag.m" /* pName
                                                                           */
};

/* Function Definitions */
void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  const real_T *v_data;
  real_T *d_data;
  int32_T m;
  int32_T n;
  v_data = v->data;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    n = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T(sp, d, n, &bf_emlrtRTEI);
    d_data = d->data;
    d_data[0] = v_data[0];
  } else {
    if ((v->size[0] == 1) || (v->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &r_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
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
    emxEnsureCapacity_real_T(sp, d, n, &cf_emlrtRTEI);
    d_data = d->data;
    n = m - 1;
    for (m = 0; m <= n; m++) {
      d_data[m] = v_data[m + v->size[0] * m];
    }
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *v_data;
  real_T *d_data;
  int32_T i;
  int32_T loop_ub;
  int32_T nv;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  v_data = v->data;
  nv = v->size[0];
  i = d->size[0] * d->size[1];
  d->size[0] = v->size[0];
  d->size[1] = v->size[0];
  emxEnsureCapacity_real_T(sp, d, i, &yd_emlrtRTEI);
  d_data = d->data;
  loop_ub = v->size[0] * v->size[0];
  for (i = 0; i < loop_ub; i++) {
    d_data[i] = 0.0;
  }
  st.site = &ed_emlrtRSI;
  if ((1 <= v->size[0]) && (v->size[0] > 2147483646)) {
    b_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (loop_ub = 0; loop_ub < nv; loop_ub++) {
    d_data[loop_ub + d->size[0] * loop_ub] = v_data[loop_ub];
  }
}

/* End of code generation (diag.c) */

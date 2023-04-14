/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_mexutil.h"
#include "Auto_Regression_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRTEInfo dg_emlrtRTEI = {
    42,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = {
    44,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = {
    25,                /* lineNo */
    14,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

/* Function Definitions */
void mrdiv(const emlrtStack *sp, const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  ptrdiff_t *jpvt_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *A;
  emxArray_real_T *b_Y;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  const real_T *B_data;
  real_T b_B;
  real_T tau_data;
  real_T tol;
  real_T *Y_data;
  real_T *b_Y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T na;
  int32_T *jpvt_data;
  char_T str[14];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  B_data = B->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (B->size[0] == 0) {
    Y->size[0] = 1;
    Y->size[1] = 0;
  } else if (B->size[0] == 1) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Y, i, &dg_emlrtRTEI);
    Y_data = Y->data;
    Y_data[0] = 1.0 / B_data[0];
  } else {
    emxInit_real_T(sp, &b_Y, 1, &kg_emlrtRTEI);
    emxInit_real_T(sp, &A, 2, &lg_emlrtRTEI);
    st.site = &re_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(&st, A, i, &eg_emlrtRTEI);
    Y_data = A->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = B_data[i];
    }
    emxInit_int32_T(&st, &jpvt, 2, &lg_emlrtRTEI);
    b_st.site = &ue_emlrtRSI;
    na = B->size[0] - 1;
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = B->size[0];
    emxEnsureCapacity_int32_T(&b_st, jpvt, i, &fg_emlrtRTEI);
    jpvt_data = jpvt->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      jpvt_data[i] = 0;
    }
    emxInit_ptrdiff_t(&b_st, &jpvt_t, &hg_emlrtRTEI);
    c_st.site = &ve_emlrtRSI;
    i = jpvt_t->size[0];
    jpvt_t->size[0] = B->size[0];
    emxEnsureCapacity_ptrdiff_t(&c_st, jpvt_t, i, &hg_emlrtRTEI);
    jpvt_t_data = jpvt_t->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      jpvt_t_data[i] = (ptrdiff_t)0;
    }
    info_t =
        LAPACKE_dgeqp3(102, (ptrdiff_t)1, (ptrdiff_t)B->size[0], &Y_data[0],
                       (ptrdiff_t)1, &jpvt_t_data[0], &tau_data);
    d_st.site = &cf_emlrtRSI;
    loop_ub = (int32_T)info_t;
    if (loop_ub != 0) {
      p = true;
      if (loop_ub != -4) {
        if (loop_ub == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &s_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &t_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv[0], 12, loop_ub);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      d_st.site = &bf_emlrtRSI;
      if (B->size[0] > 2147483646) {
        e_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        Y_data[loop_ub] = rtNaN;
      }
      d_st.site = &af_emlrtRSI;
      tau_data = rtNaN;
      d_st.site = &ye_emlrtRSI;
      d_st.site = &xe_emlrtRSI;
      if (B->size[0] > 2147483646) {
        e_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt_data[loop_ub] = loop_ub + 1;
      }
    } else {
      d_st.site = &we_emlrtRSI;
      if (B->size[0] > 2147483646) {
        e_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt_data[loop_ub] = (int32_T)jpvt_t_data[loop_ub];
      }
    }
    emxFree_ptrdiff_t(&c_st, &jpvt_t);
    b_st.site = &te_emlrtRSI;
    na = 0;
    b_B = muDoubleScalarAbs(Y_data[0]);
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)A->size[1]) *
          b_B;
    if (!(b_B <= tol)) {
      na = 1;
    } else {
      c_st.site = &ef_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&b_y, m);
      d_st.site = &am_emlrtRSI;
      emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, b_y, &s_emlrtMCI),
                       "<output of sprintf>", str);
      c_st.site = &df_emlrtRSI;
      warning(&c_st, 0, str);
    }
    b_st.site = &se_emlrtRSI;
    i = b_Y->size[0];
    b_Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_Y, i, &ig_emlrtRTEI);
    b_Y_data = b_Y->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_Y_data[i] = 0.0;
    }
    c_st.site = &ff_emlrtRSI;
    d_st.site = &if_emlrtRSI;
    b_B = 1.0;
    info_t = (ptrdiff_t)1;
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)1, (ptrdiff_t)1,
                            &Y_data[0], (ptrdiff_t)1, &tau_data, &b_B, info_t);
    e_st.site = &jf_emlrtRSI;
    if (infocheck(&e_st, (int32_T)info_t)) {
      b_B = rtNaN;
    }
    c_st.site = &gf_emlrtRSI;
    if (0 <= na - 1) {
      b_Y_data[jpvt_data[0] - 1] = b_B;
    }
    for (loop_ub = na; loop_ub >= 1; loop_ub--) {
      i = jpvt_data[0];
      b_Y_data[i - 1] /= Y_data[0];
      c_st.site = &hf_emlrtRSI;
    }
    emxFree_int32_T(&b_st, &jpvt);
    emxFree_real_T(&b_st, &A);
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = b_Y->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &jg_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = b_Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = b_Y_data[i];
    }
    emxFree_real_T(sp, &b_Y);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mrdivide_helper.c) */

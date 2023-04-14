/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.c
 *
 * Code generation for function 'combineVectorElements'
 *
 */

/* Include files */
#include "combineVectorElements.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo cd_emlrtRSI = {
    138,                     /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    198,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo wf_emlrtRSI = {
    53,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo lk_emlrtRSI = {
    41,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo mk_emlrtRSI = {
    50,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRTEInfo sj_emlrtRTEI = {
    74,                      /* lineNo */
    9,                       /* colNo */
    "combineVectorElements", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = {
    35,                    /* lineNo */
    20,                    /* colNo */
    "sumMatrixIncludeNaN", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pName */
};

/* Function Definitions */
void b_combineVectorElements(const emlrtStack *sp, const emxArray_real_T *x,
                             emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T s;
  real_T *y_data;
  int32_T col;
  int32_T ib;
  int32_T inb;
  int32_T ncols;
  int32_T nfb;
  int32_T nleft;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    nfb = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, y, nfb, &sj_emlrtRTEI);
    y_data = y->data;
    ncols = x->size[1];
    for (nfb = 0; nfb < ncols; nfb++) {
      y_data[nfb] = 0.0;
    }
  } else {
    b_st.site = &tf_emlrtRSI;
    c_st.site = &uf_emlrtRSI;
    nfb = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&c_st, y, nfb, &tj_emlrtRTEI);
    y_data = y->data;
    ncols = x->size[1] - 1;
    if (x->size[0] < 4096) {
      d_st.site = &lk_emlrtRSI;
      if (x->size[1] > 2147483646) {
        e_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (col = 0; col <= ncols; col++) {
        d_st.site = &vf_emlrtRSI;
        y_data[col] = sumColumnB(&d_st, x, col + 1, x->size[0]);
      }
    } else {
      nfb = x->size[0] / 4096;
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      d_st.site = &mk_emlrtRSI;
      if (x->size[1] > 2147483646) {
        e_st.site = &ub_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (col = 0; col <= ncols; col++) {
        s = sumColumnB4(x, col + 1, 1);
        d_st.site = &wf_emlrtRSI;
        for (ib = 2; ib <= nfb; ib++) {
          s += sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          d_st.site = &xf_emlrtRSI;
          s += b_sumColumnB(&d_st, x, col + 1, nleft, inb + 1);
        }
        y_data[col] = s;
      }
    }
  }
}

int32_T combineVectorElements(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T vlen;
  int32_T y;
  const boolean_T *x_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  vlen = x->size[0];
  if (x->size[0] == 0) {
    y = 0;
  } else {
    st.site = &cd_emlrtRSI;
    y = x_data[0];
    b_st.site = &dd_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      c_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 2; k <= vlen; k++) {
      y += x_data[k - 1];
    }
  }
  return y;
}

/* End of code generation (combineVectorElements.c) */

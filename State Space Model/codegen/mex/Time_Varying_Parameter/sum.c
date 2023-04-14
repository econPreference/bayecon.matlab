/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "sum.h"
#include "Time_Varying_Parameter_data.h"
#include "Time_Varying_Parameter_emxutil.h"
#include "Time_Varying_Parameter_types.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo mf_emlrtRSI = {
    112,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = {
    173,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI = {
    190,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    192,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    204,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = {
    207,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = {
    225,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    227,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI = {
    238,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    46,        /* lineNo */
    23,        /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    76,        /* lineNo */
    9,         /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    20,    /* lineNo */
    1,     /* colNo */
    "sum", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pName
                                                                            */
};

static emlrtRTEInfo cg_emlrtRTEI = {
    146,                /* lineNo */
    24,                 /* colNo */
    "blockedSummation", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = {
    153,                /* lineNo */
    23,                 /* colNo */
    "blockedSummation", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = {
    153,                /* lineNo */
    1,                  /* colNo */
    "blockedSummation", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pName */
};

/* Function Definitions */
void b_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  b_st.site = &ed_emlrtRSI;
  combineVectorElements(&b_st, x, y);
}

real_T c_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_x;
  real_T y;
  int32_T b_x;
  int32_T d_x;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ed_emlrtRSI;
  c_st.site = &fd_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    d_st.site = &gd_emlrtRSI;
    b_x = x->size[1];
    c_x = *x;
    d_x = b_x;
    c_x.size = &d_x;
    c_x.numDimensions = 1;
    e_st.site = &hd_emlrtRSI;
    y = sumMatrixColumns(&e_st, &c_x, x->size[1]);
  }
  return y;
}

void d_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *bsum;
  const real_T *x_data;
  real_T *bsum_data;
  real_T *y_data;
  int32_T bvstride;
  int32_T firstBlockLength;
  int32_T hi;
  int32_T ib;
  int32_T k;
  int32_T lastBlockLength;
  int32_T nblocks;
  int32_T vstride;
  int32_T xj;
  int32_T xoffset;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &dd_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  c_st.site = &fd_emlrtRSI;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    hi = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&c_st, y, hi, &bg_emlrtRTEI);
    y_data = y->data;
    firstBlockLength = x->size[0];
    for (hi = 0; hi < firstBlockLength; hi++) {
      y_data[hi] = 0.0;
    }
  } else {
    emxInit_real_T(&c_st, &bsum, 1, &eg_emlrtRTEI);
    d_st.site = &mf_emlrtRSI;
    vstride = x->size[0];
    bvstride = x->size[0] << 10;
    hi = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&d_st, y, hi, &cg_emlrtRTEI);
    y_data = y->data;
    hi = bsum->size[0];
    bsum->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&d_st, bsum, hi, &dg_emlrtRTEI);
    bsum_data = bsum->data;
    if (x->size[1] <= 1024) {
      firstBlockLength = x->size[1];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[1] / 1024;
      lastBlockLength = x->size[1] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    e_st.site = &nf_emlrtRSI;
    if (x->size[0] > 2147483646) {
      f_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (xj = 0; xj < vstride; xj++) {
      y_data[xj] = x_data[xj];
      bsum_data[xj] = 0.0;
    }
    e_st.site = &of_emlrtRSI;
    for (k = 2; k <= firstBlockLength; k++) {
      xoffset = (k - 1) * vstride;
      e_st.site = &pf_emlrtRSI;
      if (vstride > 2147483646) {
        f_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (xj = 0; xj < vstride; xj++) {
        y_data[xj] += x_data[xoffset + xj];
      }
    }
    e_st.site = &qf_emlrtRSI;
    for (ib = 2; ib <= nblocks; ib++) {
      firstBlockLength = (ib - 1) * bvstride;
      e_st.site = &rf_emlrtRSI;
      if (vstride > 2147483646) {
        f_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (xj = 0; xj < vstride; xj++) {
        bsum_data[xj] = x_data[firstBlockLength + xj];
      }
      if (ib == nblocks) {
        hi = lastBlockLength;
      } else {
        hi = 1024;
      }
      e_st.site = &sf_emlrtRSI;
      if ((2 <= hi) && (hi > 2147483646)) {
        f_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (k = 2; k <= hi; k++) {
        xoffset = firstBlockLength + (k - 1) * vstride;
        e_st.site = &tf_emlrtRSI;
        for (xj = 0; xj < vstride; xj++) {
          bsum_data[xj] += x_data[xoffset + xj];
        }
      }
      e_st.site = &uf_emlrtRSI;
      for (xj = 0; xj < vstride; xj++) {
        y_data[xj] += bsum_data[xj];
      }
    }
    emxFree_real_T(&d_st, &bsum);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ed_emlrtRSI;
  c_st.site = &fd_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    d_st.site = &rd_emlrtRSI;
    e_st.site = &hd_emlrtRSI;
    y = sumMatrixColumns(&e_st, x, x->size[0]);
  }
  return y;
}

/* End of code generation (sum.c) */

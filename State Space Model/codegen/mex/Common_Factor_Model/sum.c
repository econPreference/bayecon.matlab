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
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo nh_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pathName
                                                                            */
};

static emlrtRSInfo oh_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    99,                 /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    46,        /* lineNo */
    23,        /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    76,        /* lineNo */
    9,         /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = {
    99,        /* lineNo */
    17,        /* colNo */
    "sumprod", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pName */
};

/* Function Definitions */
real_T b_sum(const real_T x[2])
{
  return f_sumColumnB(x);
}

void c_sum(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2],
           real_T y_data[], int32_T y_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T b_x_data;
  emxArray_real_T *r;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &nh_emlrtRSI;
  if (((x_size[0] != 1) || (x_size[1] != 1)) && (x_size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &s_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x_size[0] == 0) && (x_size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  emxInit_real_T(&st, &r, 2, &ng_emlrtRTEI);
  b_x_data.data = (real_T *)&x_data[0];
  b_x_data.size = (int32_T *)&x_size[0];
  b_x_data.allocatedSize = -1;
  b_x_data.numDimensions = 2;
  b_x_data.canFreeData = false;
  b_st.site = &oh_emlrtRSI;
  combineVectorElements(&b_st, &b_x_data, r);
  r1 = r->data;
  y_size[0] = 1;
  y_size[1] = r->size[1];
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = r1[i];
  }
  emxFree_real_T(&st, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T d_sum(const emlrtStack *sp, const real_T x_data[],
             const int32_T x_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T b_x_data;
  int32_T x;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &oh_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  d_st.site = &ph_emlrtRSI;
  x = x_size[1];
  b_x_data.data = (real_T *)&x_data[0];
  b_x_data.size = &x;
  b_x_data.allocatedSize = -1;
  b_x_data.numDimensions = 1;
  b_x_data.canFreeData = false;
  e_st.site = &vb_emlrtRSI;
  return sumMatrixColumns(&e_st, &b_x_data, x_size[1]);
}

void sum(const real_T x[4], real_T y[2])
{
  y[0] = c_sumColumnB(x, 1);
  y[1] = c_sumColumnB(x, 2);
}

/* End of code generation (sum.c) */

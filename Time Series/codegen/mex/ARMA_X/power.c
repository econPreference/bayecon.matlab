/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "power.h"
#include "ARMA_X_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
static emlrtRSInfo lg_emlrtRSI = { 58, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 65, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 189,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRTEInfo rl_emlrtRTEI = { 19,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 45,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRTEInfo ap_emlrtRTEI = { 17,/* lineNo */
  19,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  emxArray_real_T *z;
  emxArray_real_T *b_z;
  uint32_T a_idx_0;
  int32_T k;
  uint32_T b_a_idx_0;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &z, 1, &sl_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_z, 1, &rl_emlrtRTEI, true);
  st.site = &cd_emlrtRSI;
  b_st.site = &lg_emlrtRSI;
  c_st.site = &sj_emlrtRSI;
  a_idx_0 = (uint32_T)a->size[0];
  k = b_z->size[0];
  b_z->size[0] = (int32_T)a_idx_0;
  emxEnsureCapacity_real_T1(&c_st, b_z, k, &rl_emlrtRTEI);
  a_idx_0 = (uint32_T)a->size[0];
  b_a_idx_0 = (uint32_T)a->size[0];
  k = z->size[0];
  z->size[0] = (int32_T)b_a_idx_0;
  emxEnsureCapacity_real_T1(&c_st, z, k, &sl_emlrtRTEI);
  if (!dimagree(z, a)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ap_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxFree_real_T(&z);
  b_a_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)b_a_idx_0;
  emxEnsureCapacity_real_T1(&b_st, y, k, &tl_emlrtRTEI);
  c_st.site = &tj_emlrtRSI;
  d_st.site = &xj_emlrtRSI;
  overflow = ((!(1 > b_z->size[0])) && (b_z->size[0] > 2147483646));
  emxFree_real_T(&b_z);
  if (overflow) {
    e_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k < (int32_T)a_idx_0; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (power.c) */

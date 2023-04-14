/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ni_emlrtRSI = {
    144,        /* lineNo */
    "eml_find", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pathName
                                                                           */
};

static emlrtRSInfo oi_emlrtRSI = {
    382,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pathName
                                                                           */
};

static emlrtRSInfo pi_emlrtRSI = {
    402,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pathName
                                                                           */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    392,                  /* lineNo */
    1,                    /* colNo */
    "find_first_indices", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pName
                                                                           */
};

static emlrtRTEInfo pi_emlrtRTEI = {
    369,    /* lineNo */
    24,     /* colNo */
    "find", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pName
                                                                           */
};

static emlrtRTEInfo qi_emlrtRTEI = {
    144,    /* lineNo */
    9,      /* colNo */
    "find", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pName
                                                                           */
};

/* Function Definitions */
void b_binary_expand_op(const emlrtStack *sp, emxArray_int32_T *ii,
                        emlrtRSInfo an_emlrtRSI,
                        const emxArray_real_T *candidate_S, int32_T i1,
                        int32_T i2, int32_T i3)
{
  emlrtStack st;
  emxArray_boolean_T *b_candidate_S;
  const real_T *candidate_S_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  boolean_T *b_candidate_S_data;
  st.prev = sp;
  st.tls = sp->tls;
  candidate_S_data = candidate_S->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_boolean_T(sp, &b_candidate_S, 1, &re_emlrtRTEI);
  i = b_candidate_S->size[0];
  if (i3 + 1 == 1) {
    b_candidate_S->size[0] = (i2 - i1) + 1;
  } else {
    b_candidate_S->size[0] = i3 + 1;
  }
  emxEnsureCapacity_boolean_T(sp, b_candidate_S, i, &re_emlrtRTEI);
  b_candidate_S_data = b_candidate_S->data;
  stride_0_0 = ((i2 - i1) + 1 != 1);
  stride_1_0 = (i3 + 1 != 1);
  if (i3 + 1 == 1) {
    loop_ub = (i2 - i1) + 1;
  } else {
    loop_ub = i3 + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_candidate_S_data[i] = (candidate_S_data[i1 + i * stride_0_0] -
                                 candidate_S_data[i * stride_1_0] ==
                             1.0);
  }
  st.site = &an_emlrtRSI;
  eml_find(&st, b_candidate_S, ii);
  emxFree_boolean_T(sp, &b_candidate_S);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
              emxArray_int32_T *i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T iv[2];
  int32_T b_i;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  int32_T *i_data;
  const boolean_T *x_data;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  nx = x->size[0];
  st.site = &ni_emlrtRSI;
  idx = 0;
  b_i = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(&st, i, b_i, &pi_emlrtRTEI);
  i_data = i->data;
  b_st.site = &oi_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x_data[ii]) {
      idx++;
      i_data[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &ib_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    if (1 > idx) {
      b_i = 0;
    } else {
      b_i = idx;
    }
    iv[0] = 1;
    iv[1] = b_i;
    b_st.site = &pi_emlrtRSI;
    indexShapeCheck(&b_st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = b_i;
    emxEnsureCapacity_int32_T(&st, i, ii, &qi_emlrtRTEI);
  }
}

/* End of code generation (find.c) */

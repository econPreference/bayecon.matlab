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
#include "VS_dirac_data.h"
#include "VS_dirac_emxutil.h"
#include "VS_dirac_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo tb_emlrtRSI = {
    144,        /* lineNo */
    "eml_find", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pathName
                                                                           */
};

static emlrtRSInfo ub_emlrtRSI = {
    382,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pathName
                                                                           */
};

static emlrtRSInfo vb_emlrtRSI = {
    402,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pathName
                                                                           */
};

static emlrtRTEInfo g_emlrtRTEI = {
    392,                  /* lineNo */
    1,                    /* colNo */
    "find_first_indices", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pName
                                                                           */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    369,    /* lineNo */
    24,     /* colNo */
    "find", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pName
                                                                           */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    144,    /* lineNo */
    9,      /* colNo */
    "find", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pName
                                                                           */
};

/* Function Definitions */
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
  st.site = &tb_emlrtRSI;
  idx = 0;
  b_i = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(&st, i, b_i, &ub_emlrtRTEI);
  i_data = i->data;
  b_st.site = &ub_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &x_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
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
    b_st.site = &vb_emlrtRSI;
    indexShapeCheck(&b_st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = b_i;
    emxEnsureCapacity_int32_T(&st, i, ii, &vb_emlrtRTEI);
  }
}

/* End of code generation (find.c) */

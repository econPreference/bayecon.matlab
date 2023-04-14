/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.c
 *
 * Code generation for function 'det'
 *
 */

/* Include files */
#include "det.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "rt_nonfinite.h"
#include "xgetrf.h"

/* Variable Definitions */
static emlrtRSInfo uj_emlrtRSI = {
    21,    /* lineNo */
    "det", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pathName
                                                                           */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    12,    /* lineNo */
    15,    /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

static emlrtRTEInfo sj_emlrtRTEI = {
    21,    /* lineNo */
    2,     /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

static emlrtRTEInfo tj_emlrtRTEI = {
    1,     /* lineNo */
    14,    /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

/* Function Definitions */
real_T det(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_real_T *b_x;
  const real_T *x_data;
  real_T y;
  real_T *b_x_data;
  int32_T i;
  int32_T loop_ub;
  int32_T *ipiv_data;
  boolean_T isodd;
  st.prev = sp;
  st.tls = sp->tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] != x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &eb_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 1.0;
  } else {
    emxInit_real_T(sp, &b_x, 2, &tj_emlrtRTEI);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, b_x, i, &sj_emlrtRTEI);
    b_x_data = b_x->data;
    loop_ub = x->size[0] * x->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = x_data[i];
    }
    emxInit_int32_T(sp, &ipiv, 2, &tj_emlrtRTEI);
    st.site = &uj_emlrtRSI;
    xgetrf(&st, x->size[0], x->size[1], b_x, x->size[0], ipiv);
    ipiv_data = ipiv->data;
    b_x_data = b_x->data;
    y = b_x_data[0];
    i = b_x->size[0];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      y *= b_x_data[(loop_ub + b_x->size[0] * (loop_ub + 1)) + 1];
    }
    emxFree_real_T(sp, &b_x);
    isodd = false;
    i = ipiv->size[1];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      if (ipiv_data[loop_ub] > loop_ub + 1) {
        isodd = !isodd;
      }
    }
    emxFree_int32_T(sp, &ipiv);
    if (isodd) {
      y = -y;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (det.c) */

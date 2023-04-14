/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * demeanc.c
 *
 * Code generation for function 'demeanc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "demeanc.h"
#include "Recursive_BVAR_emxutil.h"
#include "mean.h"

/* Variable Definitions */
static emlrtRSInfo ff_emlrtRSI = { 6,  /* lineNo */
  "demeanc",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\demeanc.m"/* pathName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 8,/* lineNo */
  9,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\demeanc.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 8,/* lineNo */
  1,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\demeanc.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 6,/* lineNo */
  1,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\demeanc.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { 2,   /* nDims */
  8,                                   /* lineNo */
  5,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\demeanc.m"/* pName */
};

/* Function Definitions */
void demeanc(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emxArray_real_T *meanX;
  int32_T x_idx_0;
  int32_T i19;
  int32_T loop_ub;
  int32_T i20;
  int32_T b_x[2];
  int32_T b_y[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &meanX, 2, &sf_emlrtRTEI, true);

  /*  demeaning vectors(데이터의 평균을 0으로 조정) */
  st.site = &ff_emlrtRSI;
  mean(&st, x, meanX);
  x_idx_0 = x->size[0];
  i19 = y->size[0] * y->size[1];
  y->size[0] = x_idx_0;
  y->size[1] = meanX->size[1];
  emxEnsureCapacity_real_T(sp, y, i19, &qf_emlrtRTEI);
  for (i19 = 0; i19 < x_idx_0; i19++) {
    loop_ub = meanX->size[1];
    for (i20 = 0; i20 < loop_ub; i20++) {
      y->data[i19 + y->size[0] * i20] = meanX->data[meanX->size[0] * i20];
    }
  }

  emxFree_real_T(&meanX);
  for (i19 = 0; i19 < 2; i19++) {
    b_x[i19] = x->size[i19];
    b_y[i19] = y->size[i19];
  }

  if ((b_x[0] != b_y[0]) || (b_x[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_x[0], &b_y[0], &u_emlrtECI, sp);
  }

  loop_ub = x->size[0] * x->size[1] - 1;
  i19 = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, i19, &rf_emlrtRTEI);
  for (i19 = 0; i19 <= loop_ub; i19++) {
    y->data[i19] = x->data[i19] - y->data[i19];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (demeanc.c) */

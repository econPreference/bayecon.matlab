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
#include "ARMA_X.h"
#include "demeanc.h"
#include "ARMA_X_emxutil.h"
#include "mean.h"

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 6,  /* lineNo */
  "demeanc",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\demeanc.m"/* pathName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 8,/* lineNo */
  9,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\demeanc.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 8,/* lineNo */
  1,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\demeanc.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 6,/* lineNo */
  1,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\demeanc.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  8,                                   /* lineNo */
  5,                                   /* colNo */
  "demeanc",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\demeanc.m"/* pName */
};

/* Function Definitions */
void demeanc(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emxArray_real_T *meanX;
  int32_T x_idx_0;
  int32_T i3;
  int32_T loop_ub;
  int32_T i4;
  int32_T b_x[2];
  int32_T b_y[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &meanX, 2, &bd_emlrtRTEI, true);

  /*  demeaning vectors(데이터의 평균을 0으로 조정) */
  st.site = &db_emlrtRSI;
  mean(&st, x, meanX);
  x_idx_0 = x->size[0];
  i3 = y->size[0] * y->size[1];
  y->size[0] = x_idx_0;
  y->size[1] = meanX->size[1];
  emxEnsureCapacity_real_T(sp, y, i3, &yc_emlrtRTEI);
  for (i3 = 0; i3 < x_idx_0; i3++) {
    loop_ub = meanX->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      y->data[i3 + y->size[0] * i4] = meanX->data[meanX->size[0] * i4];
    }
  }

  emxFree_real_T(&meanX);
  for (i3 = 0; i3 < 2; i3++) {
    b_x[i3] = x->size[i3];
    b_y[i3] = y->size[i3];
  }

  if ((b_x[0] != b_y[0]) || (b_x[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_x[0], &b_y[0], &i_emlrtECI, sp);
  }

  loop_ub = x->size[0] * x->size[1] - 1;
  i3 = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, i3, &ad_emlrtRTEI);
  for (i3 = 0; i3 <= loop_ub; i3++) {
    y->data[i3] = x->data[i3] - y->data[i3];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (demeanc.c) */

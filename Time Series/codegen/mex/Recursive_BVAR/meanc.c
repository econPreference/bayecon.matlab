/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * meanc.c
 *
 * Code generation for function 'meanc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "meanc.h"
#include "Recursive_BVAR_emxutil.h"
#include "mean.h"

/* Variable Definitions */
static emlrtRSInfo df_emlrtRSI = { 3,  /* lineNo */
  "meanc",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\meanc.m"/* pathName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "meanc",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\meanc.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 1,/* lineNo */
  10,                                  /* colNo */
  "meanc",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\meanc.m"/* pName */
};

/* Function Definitions */
void meanc(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *retf)
{
  emxArray_real_T *b_retf;
  int32_T i17;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_retf, 2, &of_emlrtRTEI, true);
  st.site = &df_emlrtRSI;
  mean(&st, x, b_retf);
  i17 = retf->size[0];
  retf->size[0] = b_retf->size[1];
  emxEnsureCapacity_real_T2(sp, retf, i17, &nf_emlrtRTEI);
  loop_ub = b_retf->size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    retf->data[i17] = b_retf->data[b_retf->size[0] * i17];
  }

  emxFree_real_T(&b_retf);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (meanc.c) */

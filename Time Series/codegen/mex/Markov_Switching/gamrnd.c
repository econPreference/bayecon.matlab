/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gamrnd.c
 *
 * Code generation for function 'gamrnd'
 *
 */

/* Include files */
#include "gamrnd.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "randg.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo kh_emlrtRTEI = {
    1,                                                           /* lineNo */
    14,                                                          /* colNo */
    "gamrnd",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m" /* pName */
};

/* Function Definitions */
real_T gamrnd(const emlrtStack *sp, const emxArray_real_T *a,
              const emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *b_r;
  const real_T *a_data;
  const real_T *b_data;
  real_T r;
  real_T *r1;
  int32_T i;
  int32_T k;
  boolean_T p;
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
  b_data = b->data;
  a_data = a->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &mf_emlrtRSI;
  b_st.site = &nf_emlrtRSI;
  c_st.site = &of_emlrtRSI;
  d_st.site = &bh_emlrtRSI;
  e_st.site = &ch_emlrtRSI;
  p = true;
  if (1 == a->size[0]) {
    if (1 != b->size[1]) {
      p = false;
    }
  } else {
    p = false;
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&e_st, &fb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  emxInit_real_T(&e_st, &b_r, 1, &kh_emlrtRTEI);
  c_st.site = &of_emlrtRSI;
  i = b_r->size[0];
  b_r->size[0] = a->size[0];
  emxEnsureCapacity_real_T(&c_st, b_r, i, &jh_emlrtRTEI);
  r1 = b_r->data;
  i = a->size[0];
  for (k = 0; k < i; k++) {
    d_st.site = &pf_emlrtRSI;
    r1[k] = scalar_randg(&d_st, a_data[k]);
  }
  r = b_data[0] * r1[0];
  emxFree_real_T(&b_st, &b_r);
  if (b->size[1] == 1) {
    if (b_data[0] < 0.0) {
      r = rtNaN;
    }
  } else {
    i = b->size[1];
    for (k = 0; k < i; k++) {
      if (b_data[k] < 0.0) {
        r = rtNaN;
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return r;
}

/* End of code generation (gamrnd.c) */

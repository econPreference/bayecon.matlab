/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * kron.c
 *
 * Code generation for function 'kron'
 *
 */

/* Include files */
#include "kron.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo mf_emlrtRSI = {
    32,     /* lineNo */
    "kron", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pathName
                                                                         */
};

static emlrtRSInfo nf_emlrtRSI = {
    33,     /* lineNo */
    "kron", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pathName
                                                                         */
};

static emlrtRSInfo of_emlrtRSI = {
    34,     /* lineNo */
    "kron", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pathName
                                                                         */
};

static emlrtRSInfo pf_emlrtRSI = {
    35,     /* lineNo */
    "kron", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pathName
                                                                         */
};

static emlrtRTEInfo mg_emlrtRTEI = {
    30,     /* lineNo */
    20,     /* colNo */
    "kron", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pName
                                                                         */
};

/* Function Definitions */
void kron(const emlrtStack *sp, const emxArray_real_T *A,
          const emxArray_real_T *B, emxArray_real_T *K)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *A_data;
  const real_T *B_data;
  real_T *K_data;
  int32_T b_j1;
  int32_T i1;
  int32_T i2;
  int32_T j2;
  int32_T kidx;
  int32_T ma;
  int32_T mb;
  int32_T na;
  int32_T nb;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  A_data = A->data;
  ma = A->size[0];
  na = A->size[1];
  mb = B->size[0];
  nb = B->size[1];
  kidx = K->size[0] * K->size[1];
  K->size[0] = A->size[0] * B->size[0];
  K->size[1] = A->size[1] * B->size[1];
  emxEnsureCapacity_real_T(sp, K, kidx, &mg_emlrtRTEI);
  K_data = K->data;
  kidx = -1;
  st.site = &mf_emlrtRSI;
  if ((1 <= A->size[1]) && (A->size[1] > 2147483646)) {
    b_st.site = &bc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (b_j1 = 0; b_j1 < na; b_j1++) {
    st.site = &nf_emlrtRSI;
    if ((1 <= nb) && (nb > 2147483646)) {
      b_st.site = &bc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j2 = 0; j2 < nb; j2++) {
      st.site = &of_emlrtRSI;
      if ((1 <= ma) && (ma > 2147483646)) {
        b_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (i1 = 0; i1 < ma; i1++) {
        st.site = &pf_emlrtRSI;
        if ((1 <= mb) && (mb > 2147483646)) {
          b_st.site = &bc_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }
        for (i2 = 0; i2 < mb; i2++) {
          K_data[(kidx + i2) + 1] =
              A_data[i1 + A->size[0] * b_j1] * B_data[i2 + B->size[0] * j2];
        }
        kidx += mb;
      }
    }
  }
}

/* End of code generation (kron.c) */

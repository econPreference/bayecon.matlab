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
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "kron.h"
#include "Stochastic_Volatility_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo nj_emlrtRSI = { 32, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 33, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 34, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 35, /* lineNo */
  "kron",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pathName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "kron",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\kron.m"/* pName */
};

/* Function Definitions */
void kron(const emlrtStack *sp, const emxArray_real_T *A, const emxArray_real_T *
          B, emxArray_real_T *K)
{
  int32_T ma;
  int32_T mb;
  int32_T nb;
  int32_T kidx;
  int32_T unnamed_idx_1;
  int32_T j2;
  boolean_T overflow;
  int32_T i1;
  int32_T i2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ma = A->size[0];
  mb = B->size[0];
  nb = B->size[1];
  kidx = A->size[0] * B->size[0];
  unnamed_idx_1 = A->size[1] * B->size[1];
  j2 = K->size[0] * K->size[1];
  K->size[0] = kidx;
  K->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T1(sp, K, j2, &lk_emlrtRTEI);
  kidx = -1;
  st.site = &nj_emlrtRSI;
  overflow = ((!(1 > A->size[1])) && (A->size[1] > 2147483646));
  if (overflow) {
    b_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_1 = 1; unnamed_idx_1 <= A->size[1]; unnamed_idx_1++) {
    st.site = &oj_emlrtRSI;
    if ((!(1 > nb)) && (nb > 2147483646)) {
      b_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j2 = 1; j2 <= nb; j2++) {
      st.site = &pj_emlrtRSI;
      for (i1 = 1; i1 <= ma; i1++) {
        st.site = &qj_emlrtRSI;
        for (i2 = 1; i2 <= mb; i2++) {
          kidx++;
          K->data[kidx] = A->data[(i1 + A->size[0] * (unnamed_idx_1 - 1)) - 1] *
            B->data[(i2 + B->size[0] * (j2 - 1)) - 1];
        }
      }
    }
  }
}

/* End of code generation (kron.c) */

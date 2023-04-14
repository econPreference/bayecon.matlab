/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vec.c
 *
 * Code generation for function 'vec'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "vec.h"
#include "ARMA_X_emxutil.h"
#include "error1.h"
#include "assertValidSizeArg.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
static emlrtRSInfo eg_emlrtRSI = { 9,  /* lineNo */
  "vec",                               /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\vec.m"/* pathName */
};

static emlrtRTEInfo tn_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "vec",                               /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\vec.m"/* pName */
};

/* Function Definitions */
void vec(const emlrtStack *sp, emxArray_real_T *X)
{
  real_T rc;
  int32_T nx;
  int32_T n;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* Macro to compute unconditional variance of the factors */
  /* Çà·Ä X¸¦ º¤ÅÍ·Î ¸¸µé¾îÁÜ */
  rc = (real_T)X->size[0] * (real_T)X->size[1];
  if (rc > 1.0) {
    st.site = &eg_emlrtRSI;
    nx = X->size[0] * X->size[1];
    b_st.site = &hg_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    assertValidSizeArg(&c_st, rc);
    n = X->size[0];
    if (X->size[1] > X->size[0]) {
      n = X->size[1];
    }

    if ((int32_T)rc > muIntScalarMax_sint32(nx, n)) {
      b_st.site = &gg_emlrtRSI;
      f_error(&b_st);
    }

    if ((int32_T)rc != nx) {
      emlrtErrorWithMessageIdR2018a(&st, &ro_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    nx = X->size[0] * X->size[1];
    X->size[0] = (int32_T)rc;
    X->size[1] = 1;
    emxEnsureCapacity_real_T(sp, X, nx, &tn_emlrtRTEI);
  }
}

/* End of code generation (vec.c) */

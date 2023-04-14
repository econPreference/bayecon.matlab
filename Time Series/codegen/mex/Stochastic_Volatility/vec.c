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
#include "Stochastic_Volatility.h"
#include "vec.h"
#include "Stochastic_Volatility_emxutil.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRSInfo rj_emlrtRSI = { 9,  /* lineNo */
  "vec",                               /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\vec.m"/* pathName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "vec",                               /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\vec.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "vec",                               /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\vec.m"/* pName */
};

/* Function Definitions */
void vec(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T *vecX)
{
  real_T rc;
  int32_T nx;
  int32_T loop_ub;
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
    st.site = &rj_emlrtRSI;
    nx = X->size[0] * X->size[1];
    b_st.site = &uj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    assertValidSizeArg(&c_st, rc);
    loop_ub = X->size[0];
    if (X->size[1] > X->size[0]) {
      loop_ub = X->size[1];
    }

    if ((int32_T)rc > muIntScalarMax_sint32(nx, loop_ub)) {
      b_st.site = &tj_emlrtRSI;
      k_error(&b_st);
    }

    if ((int32_T)rc != nx) {
      emlrtErrorWithMessageIdR2018a(&st, &nm_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    nx = vecX->size[0] * vecX->size[1];
    vecX->size[0] = (int32_T)rc;
    vecX->size[1] = 1;
    emxEnsureCapacity_real_T1(sp, vecX, nx, &nk_emlrtRTEI);
    loop_ub = (int32_T)rc;
    for (nx = 0; nx < loop_ub; nx++) {
      vecX->data[nx] = X->data[nx];
    }
  } else {
    nx = vecX->size[0] * vecX->size[1];
    vecX->size[0] = X->size[0];
    vecX->size[1] = X->size[1];
    emxEnsureCapacity_real_T1(sp, vecX, nx, &mk_emlrtRTEI);
    loop_ub = X->size[0] * X->size[1];
    for (nx = 0; nx < loop_ub; nx++) {
      vecX->data[nx] = X->data[nx];
    }
  }
}

/* End of code generation (vec.c) */

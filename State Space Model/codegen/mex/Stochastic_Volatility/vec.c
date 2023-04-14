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
#include "vec.h"
#include "Stochastic_Volatility_data.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo qi_emlrtRSI = {
    7,                                                      /* lineNo */
    "vec",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/vec.m" /* pathName */
};

static emlrtRTEInfo mg_emlrtRTEI = {
    9,                                                      /* lineNo */
    5,                                                      /* colNo */
    "vec",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/vec.m" /* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = {
    7,                                                      /* lineNo */
    1,                                                      /* colNo */
    "vec",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/vec.m" /* pName */
};

/* Function Definitions */
void vec(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T *vecX)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *X_data;
  real_T rc;
  real_T *vecX_data;
  int32_T loop_ub;
  int32_T n;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  X_data = X->data;
  /* Macro to compute unconditional variance of the factors */
  rc = (real_T)X->size[0] * (real_T)X->size[1];
  if (rc > 1.0) {
    st.site = &qi_emlrtRSI;
    nx = X->size[0] * X->size[1];
    b_st.site = &si_emlrtRSI;
    c_st.site = &ri_emlrtRSI;
    if ((rc != rc) || (rc > 2.147483647E+9)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &o_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
          "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
    }
    n = X->size[0];
    if (X->size[1] > X->size[0]) {
      n = X->size[1];
    }
    loop_ub = (int32_T)rc;
    if (loop_ub > muIntScalarMax_sint32(nx, n)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &v_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    if (loop_ub != nx) {
      emlrtErrorWithMessageIdR2018a(
          &st, &w_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
          "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }
    nx = vecX->size[0] * vecX->size[1];
    vecX->size[0] = loop_ub;
    vecX->size[1] = 1;
    emxEnsureCapacity_real_T(sp, vecX, nx, &ng_emlrtRTEI);
    vecX_data = vecX->data;
    for (nx = 0; nx < loop_ub; nx++) {
      vecX_data[nx] = X_data[nx];
    }
  } else {
    nx = vecX->size[0] * vecX->size[1];
    vecX->size[0] = X->size[0];
    vecX->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, vecX, nx, &mg_emlrtRTEI);
    vecX_data = vecX->data;
    loop_ub = X->size[0] * X->size[1];
    for (nx = 0; nx < loop_ub; nx++) {
      vecX_data[nx] = X_data[nx];
    }
  }
}

/* End of code generation (vec.c) */

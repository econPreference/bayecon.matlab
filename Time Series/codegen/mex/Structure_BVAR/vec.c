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
#include "Structure_BVAR_data.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo mi_emlrtRSI = {
    7,                                                      /* lineNo */
    "vec",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/vec.m" /* pathName */
};

static emlrtRTEInfo qj_emlrtRTEI = {
    7,                                                      /* lineNo */
    1,                                                      /* colNo */
    "vec",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/vec.m" /* pName */
};

/* Function Definitions */
void vec(const emlrtStack *sp, emxArray_real_T *X)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T rc;
  int32_T i;
  int32_T n;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /* Macro to compute unconditional variance of the factors */
  rc = (real_T)X->size[0] * (real_T)X->size[1];
  if (rc > 1.0) {
    st.site = &mi_emlrtRSI;
    nx = X->size[0] * X->size[1];
    b_st.site = &wb_emlrtRSI;
    c_st.site = &xb_emlrtRSI;
    if ((rc != rc) || (rc > 2.147483647E+9)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &h_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
          "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
    }
    n = X->size[0];
    if (X->size[1] > X->size[0]) {
      n = X->size[1];
    }
    i = (int32_T)rc;
    if (i > muIntScalarMax_sint32(nx, n)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &c_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    if (i != nx) {
      emlrtErrorWithMessageIdR2018a(
          &st, &e_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
          "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }
    nx = X->size[0] * X->size[1];
    X->size[0] = i;
    X->size[1] = 1;
    emxEnsureCapacity_real_T(sp, X, nx, &qj_emlrtRTEI);
  }
}

/* End of code generation (vec.c) */

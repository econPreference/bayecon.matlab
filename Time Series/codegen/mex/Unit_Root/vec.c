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
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "assertValidSizeArg.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo of_emlrtRSI = { 9,  /* lineNo */
  "vec",                               /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\vec.m"/* pathName */
};

static emlrtRTEInfo qn_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "vec",                               /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\vec.m"/* pName */
};

/* Function Definitions */
void vec(const emlrtStack *sp, emxArray_real_T *X)
{
  real_T rc;
  int32_T nx;
  int32_T n;
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
    st.site = &of_emlrtRSI;
    nx = X->size[0] * X->size[1];
    b_st.site = &qf_emlrtRSI;
    c_st.site = &pf_emlrtRSI;
    assertValidSizeArg(&c_st, rc);
    n = X->size[0];
    if (X->size[1] > X->size[0]) {
      n = X->size[1];
    }

    loop_ub = (int32_T)rc;
    if (loop_ub > muIntScalarMax_sint32(nx, n)) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if (loop_ub != nx) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    nx = X->size[0] * X->size[1];
    X->size[0] = loop_ub;
    X->size[1] = 1;
    emxEnsureCapacity_real_T(sp, X, nx, &qn_emlrtRTEI);
  }
}

/* End of code generation (vec.c) */

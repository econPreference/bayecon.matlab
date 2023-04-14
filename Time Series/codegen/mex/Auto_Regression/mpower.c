/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "mpower.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    me_emlrtRSI =
        {
            46,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

static emlrtRSInfo
    ne_emlrtRSI =
        {
            101,                      /* lineNo */
            "matrix_to_scalar_power", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    13,                        /* lineNo */
    "matrix_to_integer_power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "matrix_to_integer_power.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    68,                              /* lineNo */
    "matrix_to_small_integer_power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "matrix_to_integer_power.m" /* pathName */
};

static emlrtRTEInfo
    r_emlrtRTEI =
        {
            36,       /* lineNo */
            23,       /* colNo */
            "mpower", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    82,         /* lineNo */
    5,          /* colNo */
    "fltpower", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pName
                                                                          */
};

static emlrtRTEInfo
    cg_emlrtRTEI =
        {
            46,       /* lineNo */
            5,        /* colNo */
            "mpower", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pName */
};

/* Function Definitions */
real_T b_mpower(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &sd_emlrtRSI;
  if ((a < 0.0) && (!muDoubleScalarIsNaN(b)) && (muDoubleScalarFloor(b) != b)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  return muDoubleScalarPower(a, b);
}

void mpower(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *c)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *a_data;
  real_T *c_data;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  a_data = a->data;
  if (a->size[0] != 1) {
    emlrtErrorWithMessageIdR2018a(sp, &r_emlrtRTEI, "MATLAB:square",
                                  "MATLAB:square", 0);
  }
  st.site = &me_emlrtRSI;
  b_st.site = &ne_emlrtRSI;
  c_st.site = &oe_emlrtRSI;
  d_st.site = &pe_emlrtRSI;
  i = c->size[0];
  c->size[0] = 1;
  emxEnsureCapacity_real_T(&d_st, c, i, &cg_emlrtRTEI);
  c_data = c->data;
  c_data[0] = a_data[0] * a_data[0];
}

/* End of code generation (mpower.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "std.h"
#include "Auto_Regression_data.h"
#include "Auto_Regression_emxutil.h"
#include "Auto_Regression_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo xd_emlrtRSI = {
    9,     /* lineNo */
    "std", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/std.m" /* pathName
                                                                            */
};

static emlrtRSInfo yd_emlrtRSI = {
    113,      /* lineNo */
    "varstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = {
    69,                    /* lineNo */
    "applyVectorFunction", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo be_emlrtRSI = {
    131,        /* lineNo */
    "looper1D", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = {
    140,        /* lineNo */
    "looper1D", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    141,        /* lineNo */
    "looper1D", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    154,          /* lineNo */
    "copyVector", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = {
    156,          /* lineNo */
    "copyVector", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo
    ge_emlrtRSI =
        {
            28,       /* lineNo */
            "repmat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "function_handle.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    112,                             /* lineNo */
    "@(x)vvarstd(op,x,omitnan,n,w)", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI = {
    96,        /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = {
    127,       /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI = {
    143,       /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    46,       /* lineNo */
    27,       /* colNo */
    "varstd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    49,       /* lineNo */
    27,       /* colNo */
    "varstd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" /* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = {
    9,     /* lineNo */
    1,     /* colNo */
    "std", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/std.m" /* pName
                                                                            */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    140,                   /* lineNo */
    13,                    /* colNo */
    "applyVectorFunction", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyVectorFunction.m" /* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    126,       /* lineNo */
    34,        /* colNo */
    "vvarstd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    126,       /* lineNo */
    9,         /* colNo */
    "vvarstd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pName */
};

/* Function Definitions */
void b_std(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  emxArray_real_T *absdiff;
  emxArray_real_T *xv;
  const real_T *x_data;
  real_T xbar;
  real_T *absdiff_data;
  real_T *xv_data;
  real_T *y_data;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  int32_T npages;
  int32_T nx;
  int32_T outsize_idx_0;
  int32_T p;
  int32_T workspace_ixfirst;
  boolean_T overflow;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &xd_emlrtRSI;
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI,
                                  "Coder:toolbox:var_specialEmpty",
                                  "Coder:toolbox:var_specialEmpty", 0);
  }
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  b_st.site = &yd_emlrtRSI;
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&b_st, y, k, &xf_emlrtRTEI);
  y_data = y->data;
  nx = x->size[1];
  for (k = 0; k < nx; k++) {
    y_data[k] = 0.0;
  }
  c_st.site = &ae_emlrtRSI;
  nx = x->size[0];
  npages = x->size[1];
  d_st.site = &be_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    e_st.site = &bc_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  if (0 <= x->size[1] - 1) {
    outsize_idx_0 = x->size[0];
    loop_ub = x->size[0];
    overflow = ((1 <= x->size[0]) && (x->size[0] > 2147483646));
    n = x->size[0];
  }
  emxInit_real_T(&c_st, &xv, 1, &yf_emlrtRTEI);
  emxInit_real_T(&c_st, &absdiff, 1, &bg_emlrtRTEI);
  for (p = 0; p < npages; p++) {
    workspace_ixfirst = p * nx;
    d_st.site = &ce_emlrtRSI;
    e_st.site = &ee_emlrtRSI;
    f_st.site = &ge_emlrtRSI;
    k = xv->size[0];
    xv->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T(&e_st, xv, k, &yf_emlrtRTEI);
    xv_data = xv->data;
    for (k = 0; k < loop_ub; k++) {
      xv_data[k] = 0.0;
    }
    e_st.site = &fe_emlrtRSI;
    if (overflow) {
      f_st.site = &bc_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (k = 0; k < nx; k++) {
      xv_data[k] = x_data[workspace_ixfirst + k];
    }
    d_st.site = &de_emlrtRSI;
    e_st.site = &he_emlrtRSI;
    f_st.site = &ie_emlrtRSI;
    if (x->size[0] == 0) {
      y_data[p] = rtNaN;
    } else if (x->size[0] == 1) {
      if ((!muDoubleScalarIsInf(xv_data[0])) &&
          (!muDoubleScalarIsNaN(xv_data[0]))) {
        y_data[p] = 0.0;
      } else {
        y_data[p] = rtNaN;
      }
    } else {
      g_st.site = &je_emlrtRSI;
      h_st.site = &ec_emlrtRSI;
      if (xv->size[0] == 0) {
        xbar = 0.0;
      } else {
        i_st.site = &fc_emlrtRSI;
        j_st.site = &gc_emlrtRSI;
        xbar = sumMatrixColumns(&j_st, xv, x->size[0]);
      }
      xbar /= (real_T)x->size[0];
      k = absdiff->size[0];
      absdiff->size[0] = xv->size[0];
      emxEnsureCapacity_real_T(&f_st, absdiff, k, &ag_emlrtRTEI);
      absdiff_data = absdiff->data;
      g_st.site = &ke_emlrtRSI;
      if (x->size[0] > 2147483646) {
        h_st.site = &bc_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }
      for (k = 0; k < n; k++) {
        absdiff_data[k] = muDoubleScalarAbs(xv_data[k] - xbar);
      }
      n_t = (ptrdiff_t)x->size[0];
      incx_t = (ptrdiff_t)1;
      xbar = dnrm2(&n_t, &absdiff_data[0], &incx_t);
      g_st.site = &le_emlrtRSI;
      y_data[p] = xbar / muDoubleScalarSqrt((real_T)x->size[0] - 1.0);
    }
  }
  emxFree_real_T(&c_st, &absdiff);
  emxFree_real_T(&c_st, &xv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (std.c) */

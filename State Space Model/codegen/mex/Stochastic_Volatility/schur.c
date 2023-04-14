/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * schur.c
 *
 * Code generation for function 'schur'
 *
 */

/* Include files */
#include "schur.h"
#include "Stochastic_Volatility_data.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_types.h"
#include "anyNonFinite.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo
    vf_emlrtRSI =
        {
            35,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    wf_emlrtRSI =
        {
            43,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    xf_emlrtRSI =
        {
            52,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    yf_emlrtRSI =
        {
            54,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    ag_emlrtRSI =
        {
            83,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI = {
    48,     /* lineNo */
    "triu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/triu.m" /* pathName
                                                                           */
};

static emlrtRSInfo cg_emlrtRSI = {
    47,     /* lineNo */
    "triu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/triu.m" /* pathName
                                                                           */
};

static emlrtRSInfo dg_emlrtRSI = {
    15,       /* lineNo */
    "xgehrd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pathName */
};

static emlrtRSInfo eg_emlrtRSI = {
    85,             /* lineNo */
    "ceval_xgehrd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI = {
    28,       /* lineNo */
    "xhseqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pathName */
};

static emlrtRSInfo gg_emlrtRSI = {
    128,            /* lineNo */
    "ceval_xhseqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pathName */
};

static emlrtRTEInfo
    s_emlrtRTEI =
        {
            18,      /* lineNo */
            15,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo
    xf_emlrtRTEI =
        {
            52,      /* lineNo */
            42,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo
    yf_emlrtRTEI =
        {
            42,      /* lineNo */
            9,       /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    76,       /* lineNo */
    22,       /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    111,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = {
    86,       /* lineNo */
    9,        /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = {
    112,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = {
    129,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo
    fg_emlrtRTEI =
        {
            1,       /* lineNo */
            18,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    111,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = {
    112,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

/* Function Definitions */
void schur(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *V)
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'h', 's', 'e', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'h', 'r', 'd'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *tau;
  emxArray_real_T *wi;
  emxArray_real_T *wr;
  const real_T *A_data;
  real_T z;
  real_T *V_data;
  real_T *wi_data;
  real_T *wr_data;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T jend;
  int32_T n;
  boolean_T b_p;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &s_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  st.site = &vf_emlrtRSI;
  if (anyNonFinite(&st, A)) {
    info = A->size[0];
    j = V->size[0] * V->size[1];
    V->size[0] = A->size[0];
    V->size[1] = A->size[1];
    emxEnsureCapacity_real_T(sp, V, j, &yf_emlrtRTEI);
    V_data = V->data;
    n = A->size[0] * A->size[1];
    for (j = 0; j < n; j++) {
      V_data[j] = rtNaN;
    }
    st.site = &wf_emlrtRSI;
    if ((A->size[0] != 0) && (A->size[1] != 0) && (1 < A->size[0])) {
      n = 2;
      if (A->size[0] - 2 < A->size[1] - 1) {
        jend = A->size[0] - 1;
      } else {
        jend = A->size[1];
      }
      b_st.site = &cg_emlrtRSI;
      for (j = 0; j < jend; j++) {
        b_st.site = &bg_emlrtRSI;
        for (i = n; i <= info; i++) {
          V_data[(i + V->size[0] * j) - 1] = 0.0;
        }
        n++;
      }
    }
  } else {
    st.site = &xf_emlrtRSI;
    j = V->size[0] * V->size[1];
    V->size[0] = A->size[0];
    V->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, V, j, &xf_emlrtRTEI);
    V_data = V->data;
    n = A->size[0] * A->size[1];
    for (j = 0; j < n; j++) {
      V_data[j] = A_data[j];
    }
    emxInit_real_T(&st, &tau, 1, &fg_emlrtRTEI);
    b_st.site = &dg_emlrtRSI;
    n = A->size[0];
    j = tau->size[0];
    if (A->size[0] < 1) {
      tau->size[0] = 0;
    } else {
      tau->size[0] = A->size[0] - 1;
    }
    emxEnsureCapacity_real_T(&b_st, tau, j, &ag_emlrtRTEI);
    wr_data = tau->data;
    if (A->size[0] > 1) {
      info_t = LAPACKE_dgehrd(
          102, (ptrdiff_t)A->size[0], (ptrdiff_t)1, (ptrdiff_t)A->size[0],
          &V_data[0], (ptrdiff_t)muIntScalarMax_sint32(1, n), &wr_data[0]);
      info = (int32_T)info_t;
      c_st.site = &eg_emlrtRSI;
      if (info != 0) {
        p = true;
        if (info != -5) {
          if (info == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &q_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &p_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &fname[0], 12, info);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        n = V->size[0];
        jend = V->size[1];
        j = V->size[0] * V->size[1];
        V->size[0] = n;
        V->size[1] = jend;
        emxEnsureCapacity_real_T(&b_st, V, j, &cg_emlrtRTEI);
        V_data = V->data;
        n *= jend;
        for (j = 0; j < n; j++) {
          V_data[j] = rtNaN;
        }
      }
    }
    emxFree_real_T(&b_st, &tau);
    st.site = &yf_emlrtRSI;
    b_st.site = &fg_emlrtRSI;
    z = 0.0;
    n = V->size[0];
    info_t = (ptrdiff_t)V->size[0];
    if ((V->size[0] != 0) && (V->size[1] != 0)) {
      emxInit_real_T(&b_st, &wr, 2, &gg_emlrtRTEI);
      emxInit_real_T(&b_st, &wi, 2, &hg_emlrtRTEI);
      j = wr->size[0] * wr->size[1];
      wr->size[0] = 1;
      wr->size[1] = V->size[0];
      emxEnsureCapacity_real_T(&b_st, wr, j, &bg_emlrtRTEI);
      wr_data = wr->data;
      j = wi->size[0] * wi->size[1];
      wi->size[0] = 1;
      wi->size[1] = V->size[0];
      emxEnsureCapacity_real_T(&b_st, wi, j, &dg_emlrtRTEI);
      wi_data = wi->data;
      info_t = LAPACKE_dhseqr(102, 'S', 'N', info_t, (ptrdiff_t)1,
                              (ptrdiff_t)V->size[0], &V_data[0], info_t,
                              &wr_data[0], &wi_data[0], &z,
                              (ptrdiff_t)muIntScalarMax_sint32(1, n));
      info = (int32_T)info_t;
      c_st.site = &gg_emlrtRSI;
      emxFree_real_T(&c_st, &wi);
      emxFree_real_T(&c_st, &wr);
      if (info < 0) {
        p = true;
        b_p = false;
        if (info == -7) {
          b_p = true;
        } else if (info == -11) {
          b_p = true;
        }
        if (!b_p) {
          if (info == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &q_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &p_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &b_fname[0], 12, info);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        n = V->size[0];
        jend = V->size[1];
        j = V->size[0] * V->size[1];
        V->size[0] = n;
        V->size[1] = jend;
        emxEnsureCapacity_real_T(&b_st, V, j, &eg_emlrtRTEI);
        V_data = V->data;
        n *= jend;
        for (j = 0; j < n; j++) {
          V_data[j] = rtNaN;
        }
      }
    } else {
      info = 0;
    }
    if (info != 0) {
      st.site = &ag_emlrtRSI;
      c_warning(&st);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (schur.c) */

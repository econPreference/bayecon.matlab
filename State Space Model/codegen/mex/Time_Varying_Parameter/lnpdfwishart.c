/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfwishart.c
 *
 * Code generation for function 'lnpdfwishart'
 *
 */

/* Include files */
#include "lnpdfwishart.h"
#include "Time_Varying_Parameter_data.h"
#include "Time_Varying_Parameter_emxutil.h"
#include "Time_Varying_Parameter_types.h"
#include "applyScalarFunctionInPlace.h"
#include "det.h"
#include "inv.h"
#include "mpower.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    db_emlrtRSI =
        {
            28,       /* lineNo */
            "repmat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "repmat.m" /* pathName */
};

static emlrtRSInfo jk_emlrtRSI = {
    5,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo kk_emlrtRSI = {
    6,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo lk_emlrtRSI = {
    7,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo mk_emlrtRSI = {
    8,                                                             /* lineNo */
    "lnpdfwishart",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pathName
                                                                    */
};

static emlrtRSInfo nk_emlrtRSI = {
    14,                                                          /* lineNo */
    "logMvGamma",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = {
    15,                                                          /* lineNo */
    "logMvGamma",                                                /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pathName */
};

static emlrtRTEInfo
    w_emlrtRTEI =
        {
            11,      /* lineNo */
            15,      /* colNo */
            "trace", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "trace.m" /* pName */
};

static emlrtRTEInfo
    x_emlrtRTEI =
        {
            53,       /* lineNo */
            15,       /* colNo */
            "bsxfun", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "bsxfun.m" /* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = {
    28,      /* lineNo */
    9,       /* colNo */
    "colon", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo ui_emlrtRTEI = {
    14,                                                          /* lineNo */
    32,                                                          /* colNo */
    "logMvGamma",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pName */
};

static emlrtRTEInfo
    vi_emlrtRTEI =
        {
            60,       /* lineNo */
            20,       /* colNo */
            "bsxfun", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
            "bsxfun.m" /* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = {
    5,                                                             /* lineNo */
    1,                                                             /* colNo */
    "lnpdfwishart",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = {
    8,                                                             /* lineNo */
    18,                                                            /* colNo */
    "lnpdfwishart",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/lnpdfwishart.m" /* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = {
    1,                                                           /* lineNo */
    25,                                                          /* colNo */
    "logMvGamma",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = {
    14,                                                          /* lineNo */
    36,                                                          /* colNo */
    "logMvGamma",                                                /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/logMvGamma.m" /* pName */
};

/* Function Definitions */
real_T lnpdfwishart(const emlrtStack *sp, const emxArray_real_T *X,
                    const emxArray_real_T *R, real_T v)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_real_T *R_inv;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *x;
  emxArray_real_T *y;
  real_T a;
  real_T b_x;
  real_T log_numer;
  real_T t;
  real_T val;
  real_T *b_data;
  real_T *x_data;
  int32_T bcoef;
  int32_T csz_idx_0;
  int32_T i;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &R_inv, 2, &wi_emlrtRTEI);
  /*  Compute log of Wishart dist pdf */
  st.site = &jk_emlrtRSI;
  inv(&st, R, R_inv);
  st.site = &kk_emlrtRSI;
  b_st.site = &kk_emlrtRSI;
  log_numer =
      mpower(&b_st, det(&b_st, X), ((v - (real_T)X->size[0]) - 1.0) / 2.0);
  if (log_numer < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &r_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  emxInit_real_T(&st, &y, 2, &aj_emlrtRTEI);
  x_data = y->data;
  log_numer = muDoubleScalarLog(log_numer);
  st.site = &lk_emlrtRSI;
  st.site = &lk_emlrtRSI;
  a = v / 2.0;
  /*  Compute logarithm multivariate Gamma function  */
  /*  which is used in the probability density function of the Wishart and
   * inverse Wishart distributions. */
  /*  Gamma_d(x) = pi^(d(d-1)/4) \prod_(j=1)^d Gamma(x+(1-j)/2) */
  /*  log(Gamma_d(x)) = d(d-1)/4 log(pi) + \sum_(j=1)^d log(Gamma(x+(1-j)/2)) */
  /*  Input: */
  /*    x: m x n data matrix */
  /*    d: dimension */
  /*  Output: */
  /*    y: m x n logarithm multivariate Gamma */
  /*  Written by Michael Chen (sth4nth@gmail.com). */
  if (X->size[0] < 1) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = X->size[0];
    emxEnsureCapacity_real_T(&st, y, i, &ti_emlrtRTEI);
    x_data = y->data;
    bcoef = X->size[0] - 1;
    for (i = 0; i <= bcoef; i++) {
      x_data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(&st, &b, 1, &ui_emlrtRTEI);
  b_st.site = &nk_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &nk_emlrtRSI;
  i = b->size[0];
  b->size[0] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b, i, &ui_emlrtRTEI);
  b_data = b->data;
  bcoef = y->size[1];
  for (i = 0; i < bcoef; i++) {
    b_data[i] = (1.0 - x_data[i]) / 2.0;
  }
  emxFree_real_T(&b_st, &y);
  if (b->size[0] == 1) {
    csz_idx_0 = X->size[0];
  } else if (X->size[0] == 1) {
    csz_idx_0 = b->size[0];
  } else if (X->size[0] == b->size[0]) {
    csz_idx_0 = X->size[0];
  } else {
    emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  emxInit_real_T(&b_st, &x, 1, &yi_emlrtRTEI);
  i = x->size[0];
  x->size[0] = csz_idx_0;
  emxEnsureCapacity_real_T(&b_st, x, i, &vi_emlrtRTEI);
  x_data = x->data;
  if (csz_idx_0 != 0) {
    bcoef = (b->size[0] != 1);
    i = csz_idx_0 - 1;
    for (csz_idx_0 = 0; csz_idx_0 <= i; csz_idx_0++) {
      x_data[csz_idx_0] = a + b_data[bcoef * csz_idx_0];
    }
  }
  emxFree_real_T(&b_st, &b);
  b_st.site = &ok_emlrtRSI;
  b_st.site = &ok_emlrtRSI;
  c_st.site = &pk_emlrtRSI;
  applyScalarFunctionInPlace(&c_st, x);
  b_st.site = &ok_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  if (x->size[0] == 0) {
    a = 0.0;
  } else {
    f_st.site = &rd_emlrtRSI;
    g_st.site = &hd_emlrtRSI;
    a = sumMatrixColumns(&g_st, x, x->size[0]);
  }
  emxFree_real_T(&e_st, &x);
  st.site = &lk_emlrtRSI;
  b_st.site = &lk_emlrtRSI;
  b_x = det(&b_st, R);
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &r_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  emxInit_real_T(&st, &b_y, 2, &xi_emlrtRTEI);
  b_x = muDoubleScalarLog(b_x);
  st.site = &mk_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  if (X->size[0] != R_inv->size[1]) {
    if (((R_inv->size[0] == 1) && (R_inv->size[1] == 1)) ||
        ((X->size[0] == 1) && (X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &pc_emlrtRSI;
  b_mtimes(&b_st, R_inv, X, b_y);
  x_data = b_y->data;
  st.site = &mk_emlrtRSI;
  emxFree_real_T(&st, &R_inv);
  if (b_y->size[0] != b_y->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  t = 0.0;
  i = b_y->size[0];
  for (csz_idx_0 = 0; csz_idx_0 < i; csz_idx_0++) {
    t += x_data[csz_idx_0 + b_y->size[0] * csz_idx_0];
  }
  emxFree_real_T(&st, &b_y);
  val = (log_numer -
         ((v * (real_T)X->size[0] / 2.0 * 0.69314718055994529 + v / 2.0 * b_x) +
          ((real_T)X->size[0] * ((real_T)X->size[0] - 1.0) / 4.0 *
               1.1447298858494002 +
           a))) +
        -0.5 * t;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return val;
}

/* End of code generation (lnpdfwishart.c) */

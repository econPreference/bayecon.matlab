/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfmvn4.c
 *
 * Code generation for function 'lnpdfmvn4'
 *
 */

/* Include files */
#include "lnpdfmvn4.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "combineVectorElements.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "lusolve.h"
#include "mwmathutil.h"
#include "power.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo kj_emlrtRSI = { 12, /* lineNo */
  "lnpdfmvn4",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 13, /* lineNo */
  "lnpdfmvn4",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 14, /* lineNo */
  "lnpdfmvn4",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 16, /* lineNo */
  "lnpdfmvn4",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 17, /* lineNo */
  "log",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 42, /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 44, /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtECInfo ub_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  6,                                   /* colNo */
  "lnpdfmvn4",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "lnpdfmvn4",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "lnpdfmvn4",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "lnpdfmvn4",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 12,/* lineNo */
  27,                                  /* colNo */
  "lnpdfmvn4",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\lnpdfmvn4.m"/* pName */
};

/* Function Definitions */
real_T lnpdfmvn4(const emlrtStack *sp, const emxArray_real_T *X, const
                 emxArray_real_T *Mu, const emxArray_real_T *Chol_Sigma)
{
  real_T y;
  emxArray_real_T *X0;
  int32_T i;
  int32_T nx;
  emxArray_real_T *R;
  emxArray_real_T *x;
  int32_T loop_ub;
  int32_T i1;
  boolean_T p;
  real_T logSqrtDetSigma;
  emxArray_real_T *xRinv;
  real_T quadform;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  X and Mu are both D by 1 vectors, and Sigma is a D by D matrix.  */
  /*  */
  /*    Y = lnpdfmvn4(X,MU,Chol_SIGMA)  */
  /*  mu = mean */
  /*  Chol_SIGMA = Chol(Sigma): upper triangular */
  /*  This is a modified version of MVNPDF. */
  if (X->size[0] != Mu->size[0]) {
    emlrtSizeEqCheck1DR2012b(X->size[0], Mu->size[0], &ub_emlrtECI, sp);
  }

  emxInit_real_T(sp, &X0, 1, &gk_emlrtRTEI, true);
  i = X0->size[0];
  X0->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, X0, i, &gk_emlrtRTEI);
  nx = X->size[0];
  for (i = 0; i < nx; i++) {
    X0->data[i] = X->data[i] - Mu->data[i];
  }

  emxInit_real_T(sp, &R, 2, &hk_emlrtRTEI, true);
  i = R->size[0] * R->size[1];
  R->size[0] = Chol_Sigma->size[1];
  R->size[1] = Chol_Sigma->size[0];
  emxEnsureCapacity_real_T(sp, R, i, &hk_emlrtRTEI);
  nx = Chol_Sigma->size[0];
  for (i = 0; i < nx; i++) {
    loop_ub = Chol_Sigma->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      R->data[i1 + R->size[0] * i] = Chol_Sigma->data[i + Chol_Sigma->size[0] *
        i1];
    }
  }

  emxInit_real_T(sp, &x, 1, &jk_emlrtRTEI, true);
  st.site = &kj_emlrtRSI;
  b_st.site = &kj_emlrtRSI;
  diag(&b_st, R, x);
  p = false;
  i = x->size[0];
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    if (p || (x->data[loop_ub] < 0.0)) {
      p = true;
    }
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  b_st.site = &oj_emlrtRSI;
  nx = x->size[0];
  c_st.site = &cj_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    d_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    x->data[loop_ub] = muDoubleScalarLog(x->data[loop_ub]);
  }

  st.site = &kj_emlrtRSI;
  b_st.site = &oc_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  logSqrtDetSigma = b_combineVectorElements(&c_st, x);
  st.site = &lj_emlrtRSI;
  if (X0->size[0] != R->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &gb_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  b_st.site = &pj_emlrtRSI;
  emxInit_real_T(&b_st, &xRinv, 1, &ik_emlrtRTEI, true);
  if ((R->size[0] == 0) || (R->size[1] == 0) || (X0->size[0] == 0)) {
    i = xRinv->size[0];
    xRinv->size[0] = R->size[1];
    emxEnsureCapacity_real_T(&b_st, xRinv, i, &ik_emlrtRTEI);
    nx = R->size[1];
    for (i = 0; i < nx; i++) {
      xRinv->data[i] = 0.0;
    }
  } else if (R->size[0] == R->size[1]) {
    i = xRinv->size[0];
    xRinv->size[0] = X0->size[0];
    emxEnsureCapacity_real_T(&b_st, xRinv, i, &ik_emlrtRTEI);
    nx = X0->size[0];
    for (i = 0; i < nx; i++) {
      xRinv->data[i] = X0->data[i];
    }

    c_st.site = &qj_emlrtRSI;
    lusolve(&c_st, R, xRinv);
  } else {
    c_st.site = &rj_emlrtRSI;
    qrsolve(&c_st, R, X0, xRinv);
  }

  emxFree_real_T(&R);
  emxFree_real_T(&X0);
  st.site = &mj_emlrtRSI;
  b_st.site = &mj_emlrtRSI;
  b_power(&b_st, xRinv, x);
  b_st.site = &oc_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  quadform = b_combineVectorElements(&c_st, x);
  st.site = &nj_emlrtRSI;
  y = (-0.5 * quadform - logSqrtDetSigma) - (real_T)X->size[0] *
    1.8378770664093453 / 2.0;
  emxFree_real_T(&x);
  emxFree_real_T(&xRinv);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/* End of code generation (lnpdfmvn4.c) */

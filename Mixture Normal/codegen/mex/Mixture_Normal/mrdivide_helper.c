/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo eb_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI =
    {
        67,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI =
    {
        112,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI =
    {
        107,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI =
    {
        135,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI =
    {
        140,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI =
    {
        142,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    31,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    44,                /* lineNo */
    32,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    42,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    1,        /* lineNo */
    37,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    44,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    25,                /* lineNo */
    14,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    44,                /* lineNo */
    9,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

/* Function Definitions */
void mrdiv(const emlrtStack *sp, const emxArray_real_T *A,
           const emxArray_real_T *B, emxArray_real_T *Y)
{
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t *ipiv_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r1;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *r;
  const real_T *A_data;
  const real_T *B_data;
  real_T temp;
  real_T *Y_data;
  real_T *b_B_data;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  int32_T *ipiv_data;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  B_data = B->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &ipiv, 2, &ad_emlrtRTEI);
  emxInit_ptrdiff_t(sp, &ipiv_t, &bd_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &cd_emlrtRTEI);
  emxInit_ptrdiff_t(sp, &r1, &xc_emlrtRTEI);
  emxInit_real_T(sp, &b_B, 2, &sc_emlrtRTEI);
  emxInit_real_T(sp, &b_A, 1, &uc_emlrtRTEI);
  if ((A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &rc_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &eb_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, Y, i, &tc_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = A_data[i];
    }
    c_st.site = &ib_emlrtRSI;
    n = B->size[1];
    d_st.site = &jb_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&d_st, b_B, i, &vc_emlrtRTEI);
    b_B_data = b_B->data;
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B_data[i] = B_data[i];
    }
    e_st.site = &t_emlrtRSI;
    f_st.site = &v_emlrtRSI;
    repmat(&f_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), r1);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r1->size[0];
    emxEnsureCapacity_ptrdiff_t(&e_st, ipiv_t, i, &xc_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)B->size[1],
                                 (ptrdiff_t)B->size[1], &b_B_data[0],
                                 (ptrdiff_t)B->size[1], &ipiv_t_data[0]);
    n = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&e_st, ipiv, i, &yc_emlrtRTEI);
    ipiv_data = ipiv->data;
    f_st.site = &u_emlrtRSI;
    if (n < 0) {
      if (n == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &j_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &i_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, n);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      ipiv_data[loop_ub] = (int32_T)ipiv_t_data[loop_ub];
    }
    d_st.site = &kb_emlrtRSI;
    e_st.site = &mb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)B->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_B_data[0],
          &lda_t, &Y_data[0], &ldb_t);
    d_st.site = &lb_emlrtRSI;
    e_st.site = &mb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)B->size[1];
    ldb_t = (ptrdiff_t)1;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_B_data[0],
          &lda_t, &Y_data[0], &ldb_t);
    i = B->size[1] - 1;
    for (loop_ub = i; loop_ub >= 1; loop_ub--) {
      i1 = ipiv_data[loop_ub - 1];
      if (i1 != loop_ub) {
        temp = Y_data[loop_ub - 1];
        Y_data[loop_ub - 1] = Y_data[i1 - 1];
        Y_data[i1 - 1] = temp;
      }
    }
    if (((B->size[0] != 1) || (B->size[1] != 1)) && (n > 0)) {
      c_st.site = &hb_emlrtRSI;
      d_st.site = &ob_emlrtRSI;
      warning(&d_st);
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, b_B, i, &sc_emlrtRTEI);
    b_B_data = b_B->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = B->size[1];
      for (i1 = 0; i1 < n; i1++) {
        b_B_data[i1 + b_B->size[0] * i] = B_data[i + B->size[0] * i1];
      }
    }
    i = b_A->size[0];
    b_A->size[0] = A->size[1];
    emxEnsureCapacity_real_T(sp, b_A, i, &uc_emlrtRTEI);
    b_B_data = b_A->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B_data[i] = A_data[i];
    }
    st.site = &fb_emlrtRSI;
    qrsolve(&st, b_B, b_A, r);
    b_B_data = r->data;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = r->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &wc_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = b_B_data[i];
    }
  }
  emxFree_real_T(sp, &b_A);
  emxFree_real_T(sp, &b_B);
  emxFree_ptrdiff_t(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_ptrdiff_t(sp, &ipiv_t);
  emxFree_int32_T(sp, &ipiv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mrdivide_helper.c) */

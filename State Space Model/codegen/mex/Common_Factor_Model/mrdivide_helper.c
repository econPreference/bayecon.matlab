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
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo lf_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI =
    {
        215,          /* lineNo */
        "lusolve2x2", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo gg_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo hg_emlrtRSI =
    {
        67,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ig_emlrtRSI =
    {
        112,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo jg_emlrtRSI =
    {
        107,          /* lineNo */
        "lusolveNxN", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo kg_emlrtRSI =
    {
        135,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo lg_emlrtRSI =
    {
        140,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo mg_emlrtRSI =
    {
        142,          /* lineNo */
        "XtimesInvA", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRSInfo ng_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo og_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo pg_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    67,      /* lineNo */
    "xtrsm", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsm.m" /* pathName */
};

static emlrtRTEInfo ff_emlrtRTEI =
    {
        214,       /* lineNo */
        24,        /* colNo */
        "lusolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    31,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    44,                /* lineNo */
    32,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    42,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    1,        /* lineNo */
    37,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    44,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = {
    25,                /* lineNo */
    14,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = {
    44,                /* lineNo */
    9,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

/* Function Definitions */
void b_mrdiv(const emlrtStack *sp, const emxArray_real_T *A,
             const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const char_T fname[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 't', 'r', 'f',
                                   '_', 'w', 'o', 'r', 'k'};
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
  emxInit_int32_T(sp, &ipiv, 2, &tf_emlrtRTEI);
  emxInit_ptrdiff_t(sp, &ipiv_t, &uf_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &vf_emlrtRTEI);
  emxInit_real_T(sp, &b_B, 2, &mf_emlrtRTEI);
  emxInit_real_T(sp, &b_A, 1, &of_emlrtRTEI);
  if ((A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &lf_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &lf_emlrtRSI;
    b_st.site = &hg_emlrtRSI;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, Y, i, &nf_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = A_data[i];
    }
    c_st.site = &jg_emlrtRSI;
    n = B->size[1];
    d_st.site = &kg_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&d_st, b_B, i, &pf_emlrtRTEI);
    b_B_data = b_B->data;
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B_data[i] = B_data[i];
    }
    e_st.site = &ng_emlrtRSI;
    f_st.site = &pg_emlrtRSI;
    i = ipiv_t->size[0];
    ipiv_t->size[0] = muIntScalarMin_sint32(n, n);
    emxEnsureCapacity_ptrdiff_t(&f_st, ipiv_t, i, &rf_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)B->size[1],
                                 (ptrdiff_t)B->size[1], &b_B_data[0],
                                 (ptrdiff_t)B->size[1], &ipiv_t_data[0]);
    n = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&e_st, ipiv, i, &sf_emlrtRTEI);
    ipiv_data = ipiv->data;
    f_st.site = &og_emlrtRSI;
    if (n < 0) {
      if (n == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &k_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &j_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &fname[0], 12, n);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      ipiv_data[loop_ub] = (int32_T)ipiv_t_data[loop_ub];
    }
    d_st.site = &lg_emlrtRSI;
    e_st.site = &rg_emlrtRSI;
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
    d_st.site = &mg_emlrtRSI;
    e_st.site = &rg_emlrtRSI;
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
      c_st.site = &ig_emlrtRSI;
      d_st.site = &pf_emlrtRSI;
      c_warning(&d_st);
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, b_B, i, &mf_emlrtRTEI);
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
    emxEnsureCapacity_real_T(sp, b_A, i, &of_emlrtRTEI);
    b_B_data = b_A->data;
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B_data[i] = A_data[i];
    }
    st.site = &gg_emlrtRSI;
    qrsolve(&st, b_B, b_A, r);
    b_B_data = r->data;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = r->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &qf_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = b_B_data[i];
    }
  }
  emxFree_real_T(sp, &b_A);
  emxFree_real_T(sp, &b_B);
  emxFree_real_T(sp, &r);
  emxFree_ptrdiff_t(sp, &ipiv_t);
  emxFree_int32_T(sp, &ipiv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void mrdiv(const emlrtStack *sp, const emxArray_creal_T *A, const creal_T B[4],
           emxArray_creal_T *Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const creal_T *A_data;
  creal_T *Y_data;
  real_T a21_im;
  real_T a21_re;
  real_T a21_re_tmp;
  real_T a22_im;
  real_T a22_re;
  real_T ai;
  real_T ar;
  real_T b_a21_re_tmp;
  real_T bi_tmp;
  real_T bim;
  real_T br_tmp;
  real_T brm;
  real_T s;
  int32_T k;
  int32_T nb;
  int32_T r1;
  int32_T r2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  A_data = A->data;
  if (A->size[0] == 0) {
    Y->size[0] = 0;
    Y->size[1] = 2;
  } else {
    st.site = &lf_emlrtRSI;
    b_st.site = &mf_emlrtRSI;
    if (muDoubleScalarAbs(B[1].re) + muDoubleScalarAbs(B[1].im) >
        muDoubleScalarAbs(B[0].re) + muDoubleScalarAbs(B[0].im)) {
      r1 = 1;
      r2 = 0;
    } else {
      r1 = 0;
      r2 = 1;
    }
    ar = B[r2].re;
    ai = B[r2].im;
    br_tmp = B[r1].re;
    bi_tmp = B[r1].im;
    if (bi_tmp == 0.0) {
      if (ai == 0.0) {
        a21_re = ar / br_tmp;
        a21_im = 0.0;
      } else if (ar == 0.0) {
        a21_re = 0.0;
        a21_im = ai / br_tmp;
      } else {
        a21_re = ar / br_tmp;
        a21_im = ai / br_tmp;
      }
    } else if (br_tmp == 0.0) {
      if (ar == 0.0) {
        a21_re = ai / bi_tmp;
        a21_im = 0.0;
      } else if (ai == 0.0) {
        a21_re = 0.0;
        a21_im = -(ar / bi_tmp);
      } else {
        a21_re = ai / bi_tmp;
        a21_im = -(ar / bi_tmp);
      }
    } else {
      brm = muDoubleScalarAbs(br_tmp);
      bim = muDoubleScalarAbs(bi_tmp);
      if (brm > bim) {
        s = bi_tmp / br_tmp;
        bim = br_tmp + s * bi_tmp;
        a21_re = (ar + s * ai) / bim;
        a21_im = (ai - s * ar) / bim;
      } else if (bim == brm) {
        if (br_tmp > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        if (bi_tmp > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }
        a21_re = (ar * bim + ai * s) / brm;
        a21_im = (ai * bim - ar * s) / brm;
      } else {
        s = br_tmp / bi_tmp;
        bim = bi_tmp + s * br_tmp;
        a21_re = (s * ar + ai) / bim;
        a21_im = (s * ai - ar) / bim;
      }
    }
    a21_re_tmp = B[r1 + 2].im;
    b_a21_re_tmp = B[r1 + 2].re;
    a22_re = B[r2 + 2].re - (a21_re * b_a21_re_tmp - a21_im * a21_re_tmp);
    a22_im = B[r2 + 2].im - (a21_re * a21_re_tmp + a21_im * b_a21_re_tmp);
    if (((a22_re == 0.0) && (a22_im == 0.0)) ||
        ((br_tmp == 0.0) && (bi_tmp == 0.0))) {
      c_st.site = &nf_emlrtRSI;
      d_st.site = &pf_emlrtRSI;
      c_warning(&d_st);
    }
    nb = A->size[0];
    k = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = 2;
    emxEnsureCapacity_creal_T(&b_st, Y, k, &ff_emlrtRTEI);
    Y_data = Y->data;
    c_st.site = &of_emlrtRSI;
    if (A->size[0] > 2147483646) {
      d_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < nb; k++) {
      ar = A_data[k].re;
      ai = A_data[k].im;
      if (bi_tmp == 0.0) {
        if (ai == 0.0) {
          Y_data[k + Y->size[0] * r1].re = ar / br_tmp;
          Y_data[k + Y->size[0] * r1].im = 0.0;
        } else if (ar == 0.0) {
          Y_data[k + Y->size[0] * r1].re = 0.0;
          Y_data[k + Y->size[0] * r1].im = ai / br_tmp;
        } else {
          Y_data[k + Y->size[0] * r1].re = ar / br_tmp;
          Y_data[k + Y->size[0] * r1].im = ai / br_tmp;
        }
      } else if (br_tmp == 0.0) {
        if (ar == 0.0) {
          Y_data[k + Y->size[0] * r1].re = ai / bi_tmp;
          Y_data[k + Y->size[0] * r1].im = 0.0;
        } else if (ai == 0.0) {
          Y_data[k + Y->size[0] * r1].re = 0.0;
          Y_data[k + Y->size[0] * r1].im = -(ar / bi_tmp);
        } else {
          Y_data[k + Y->size[0] * r1].re = ai / bi_tmp;
          Y_data[k + Y->size[0] * r1].im = -(ar / bi_tmp);
        }
      } else {
        brm = muDoubleScalarAbs(br_tmp);
        bim = muDoubleScalarAbs(bi_tmp);
        if (brm > bim) {
          s = bi_tmp / br_tmp;
          bim = br_tmp + s * bi_tmp;
          Y_data[k + Y->size[0] * r1].re = (ar + s * ai) / bim;
          Y_data[k + Y->size[0] * r1].im = (ai - s * ar) / bim;
        } else if (bim == brm) {
          if (br_tmp > 0.0) {
            bim = 0.5;
          } else {
            bim = -0.5;
          }
          if (bi_tmp > 0.0) {
            s = 0.5;
          } else {
            s = -0.5;
          }
          Y_data[k + Y->size[0] * r1].re = (ar * bim + ai * s) / brm;
          Y_data[k + Y->size[0] * r1].im = (ai * bim - ar * s) / brm;
        } else {
          s = br_tmp / bi_tmp;
          bim = bi_tmp + s * br_tmp;
          Y_data[k + Y->size[0] * r1].re = (s * ar + ai) / bim;
          Y_data[k + Y->size[0] * r1].im = (s * ai - ar) / bim;
        }
      }
      bim = Y_data[k + Y->size[0] * r1].re;
      s = Y_data[k + Y->size[0] * r1].im;
      ar = A_data[k + A->size[0]].re - (bim * b_a21_re_tmp - s * a21_re_tmp);
      ai = A_data[k + A->size[0]].im - (bim * a21_re_tmp + s * b_a21_re_tmp);
      if (a22_im == 0.0) {
        if (ai == 0.0) {
          Y_data[k + Y->size[0] * r2].re = ar / a22_re;
          Y_data[k + Y->size[0] * r2].im = 0.0;
        } else if (ar == 0.0) {
          Y_data[k + Y->size[0] * r2].re = 0.0;
          Y_data[k + Y->size[0] * r2].im = ai / a22_re;
        } else {
          Y_data[k + Y->size[0] * r2].re = ar / a22_re;
          Y_data[k + Y->size[0] * r2].im = ai / a22_re;
        }
      } else if (a22_re == 0.0) {
        if (ar == 0.0) {
          Y_data[k + Y->size[0] * r2].re = ai / a22_im;
          Y_data[k + Y->size[0] * r2].im = 0.0;
        } else if (ai == 0.0) {
          Y_data[k + Y->size[0] * r2].re = 0.0;
          Y_data[k + Y->size[0] * r2].im = -(ar / a22_im);
        } else {
          Y_data[k + Y->size[0] * r2].re = ai / a22_im;
          Y_data[k + Y->size[0] * r2].im = -(ar / a22_im);
        }
      } else {
        brm = muDoubleScalarAbs(a22_re);
        bim = muDoubleScalarAbs(a22_im);
        if (brm > bim) {
          s = a22_im / a22_re;
          bim = a22_re + s * a22_im;
          Y_data[k + Y->size[0] * r2].re = (ar + s * ai) / bim;
          Y_data[k + Y->size[0] * r2].im = (ai - s * ar) / bim;
        } else if (bim == brm) {
          if (a22_re > 0.0) {
            bim = 0.5;
          } else {
            bim = -0.5;
          }
          if (a22_im > 0.0) {
            s = 0.5;
          } else {
            s = -0.5;
          }
          Y_data[k + Y->size[0] * r2].re = (ar * bim + ai * s) / brm;
          Y_data[k + Y->size[0] * r2].im = (ai * bim - ar * s) / brm;
        } else {
          s = a22_re / a22_im;
          bim = a22_im + s * a22_re;
          Y_data[k + Y->size[0] * r2].re = (s * ar + ai) / bim;
          Y_data[k + Y->size[0] * r2].im = (s * ai - ar) / bim;
        }
      }
      bim = Y_data[k + Y->size[0] * r2].re;
      s = Y_data[k + Y->size[0] * r2].im;
      Y_data[k + Y->size[0] * r1].re -= bim * a21_re - s * a21_im;
      Y_data[k + Y->size[0] * r1].im -= bim * a21_im + s * a21_re;
    }
  }
}

/* End of code generation (mrdivide_helper.c) */

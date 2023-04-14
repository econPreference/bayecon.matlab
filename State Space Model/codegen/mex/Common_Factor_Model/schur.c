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
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo
    fd_emlrtRSI =
        {
            35,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    gd_emlrtRSI =
        {
            43,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    hd_emlrtRSI =
        {
            66,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    id_emlrtRSI =
        {
            69,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    jd_emlrtRSI =
        {
            70,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo
    kd_emlrtRSI =
        {
            83,      /* lineNo */
            "schur", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    48,     /* lineNo */
    "triu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/triu.m" /* pathName
                                                                           */
};

static emlrtRSInfo md_emlrtRSI = {
    47,     /* lineNo */
    "triu", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/triu.m" /* pathName
                                                                           */
};

static emlrtRSInfo nd_emlrtRSI = {
    15,       /* lineNo */
    "xgehrd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    85,             /* lineNo */
    "ceval_xgehrd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    69,                /* lineNo */
    "ceval_xungorghr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xungorghr.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    11,          /* lineNo */
    "xungorghr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xungorghr.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    17,       /* lineNo */
    "xhseqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    128,            /* lineNo */
    "ceval_xhseqr", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pathName */
};

static emlrtRTEInfo
    m_emlrtRTEI =
        {
            18,      /* lineNo */
            15,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = {
    1,        /* lineNo */
    27,       /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo
    pe_emlrtRTEI =
        {
            42,      /* lineNo */
            9,       /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = {
    76,       /* lineNo */
    22,       /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo
    re_emlrtRTEI =
        {
            69,      /* lineNo */
            13,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo
    se_emlrtRTEI =
        {
            46,      /* lineNo */
            9,       /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    86,       /* lineNo */
    9,        /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    87,       /* lineNo */
    9,        /* colNo */
    "xgehrd", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgehrd.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    111,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI = {
    112,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    129,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    130,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo
    af_emlrtRTEI =
        {
            1,       /* lineNo */
            18,      /* colNo */
            "schur", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "schur.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    111,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    112,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xhseqr.m" /* pName */
};

/* Function Definitions */
void schur(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *V,
           emxArray_real_T *T)
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'g', 'h', 'r'};
  static const char_T c_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
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
  real_T *T_data;
  real_T *V_data;
  real_T *wi_data;
  real_T *wr_data;
  int32_T i;
  int32_T istart;
  int32_T j;
  int32_T jend;
  int32_T n;
  uint32_T unnamed_idx_0;
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
    emlrtErrorWithMessageIdR2018a(sp, &m_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  st.site = &fd_emlrtRSI;
  if (anyNonFinite(&st, A)) {
    unnamed_idx_0 = (uint32_T)A->size[0];
    j = V->size[0] * V->size[1];
    V->size[0] = A->size[0];
    V->size[1] = A->size[1];
    emxEnsureCapacity_real_T(sp, V, j, &pe_emlrtRTEI);
    V_data = V->data;
    n = A->size[0] * A->size[1];
    for (j = 0; j < n; j++) {
      V_data[j] = rtNaN;
    }
    st.site = &gd_emlrtRSI;
    n = A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0) && (1 < A->size[0])) {
      istart = 2;
      if (A->size[0] - 2 < A->size[1] - 1) {
        jend = A->size[0] - 1;
      } else {
        jend = A->size[1];
      }
      b_st.site = &md_emlrtRSI;
      if ((1 <= jend) && (jend > 2147483646)) {
        c_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (j = 0; j < jend; j++) {
        b_st.site = &ld_emlrtRSI;
        if ((istart <= (int32_T)unnamed_idx_0) &&
            ((int32_T)unnamed_idx_0 > 2147483646)) {
          c_st.site = &kb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = istart; i <= n; i++) {
          V_data[(i + V->size[0] * j) - 1] = 0.0;
        }
        istart++;
      }
    }
    j = T->size[0] * T->size[1];
    T->size[0] = A->size[0];
    T->size[1] = A->size[1];
    emxEnsureCapacity_real_T(sp, T, j, &se_emlrtRTEI);
    T_data = T->data;
    n = A->size[0] * A->size[1];
    for (j = 0; j < n; j++) {
      T_data[j] = rtNaN;
    }
  } else {
    st.site = &hd_emlrtRSI;
    j = T->size[0] * T->size[1];
    T->size[0] = A->size[0];
    T->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, T, j, &oe_emlrtRTEI);
    T_data = T->data;
    n = A->size[0] * A->size[1];
    for (j = 0; j < n; j++) {
      T_data[j] = A_data[j];
    }
    emxInit_real_T(&st, &tau, 1, &af_emlrtRTEI);
    b_st.site = &nd_emlrtRSI;
    n = T->size[0];
    j = tau->size[0];
    if (T->size[0] < 1) {
      tau->size[0] = 0;
    } else {
      tau->size[0] = T->size[0] - 1;
    }
    emxEnsureCapacity_real_T(&b_st, tau, j, &qe_emlrtRTEI);
    wr_data = tau->data;
    if (T->size[0] > 1) {
      info_t = LAPACKE_dgehrd(
          102, (ptrdiff_t)T->size[0], (ptrdiff_t)1, (ptrdiff_t)T->size[0],
          &T_data[0], (ptrdiff_t)muIntScalarMax_sint32(1, n), &wr_data[0]);
      jend = (int32_T)info_t;
      c_st.site = &od_emlrtRSI;
      if (jend != 0) {
        p = true;
        if (jend != -5) {
          if (jend == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &fname[0], 12, jend);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        n = T->size[0];
        istart = T->size[1];
        j = T->size[0] * T->size[1];
        T->size[0] = n;
        T->size[1] = istart;
        emxEnsureCapacity_real_T(&b_st, T, j, &te_emlrtRTEI);
        T_data = T->data;
        n *= istart;
        for (j = 0; j < n; j++) {
          T_data[j] = rtNaN;
        }
        n = tau->size[0];
        j = tau->size[0];
        tau->size[0] = n;
        emxEnsureCapacity_real_T(&b_st, tau, j, &ue_emlrtRTEI);
        wr_data = tau->data;
        for (j = 0; j < n; j++) {
          wr_data[j] = rtNaN;
        }
      }
    }
    st.site = &id_emlrtRSI;
    j = V->size[0] * V->size[1];
    V->size[0] = T->size[0];
    V->size[1] = T->size[1];
    emxEnsureCapacity_real_T(&st, V, j, &re_emlrtRTEI);
    V_data = V->data;
    n = T->size[0] * T->size[1];
    for (j = 0; j < n; j++) {
      V_data[j] = T_data[j];
    }
    b_st.site = &qd_emlrtRSI;
    if ((V->size[0] != 0) && (V->size[1] != 0)) {
      info_t = LAPACKE_dorghr(102, (ptrdiff_t)A->size[0], (ptrdiff_t)1,
                              (ptrdiff_t)A->size[0], &V_data[0],
                              (ptrdiff_t)A->size[0], &wr_data[0]);
      jend = (int32_T)info_t;
      c_st.site = &pd_emlrtRSI;
      if (jend != 0) {
        p = true;
        b_p = false;
        if (jend == -5) {
          b_p = true;
        } else if (jend == -7) {
          b_p = true;
        }
        if (!b_p) {
          if (jend == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &b_fname[0], 12, jend);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        n = V->size[0];
        istart = V->size[1];
        j = V->size[0] * V->size[1];
        V->size[0] = n;
        V->size[1] = istart;
        emxEnsureCapacity_real_T(&b_st, V, j, &re_emlrtRTEI);
        V_data = V->data;
        n *= istart;
        for (j = 0; j < n; j++) {
          V_data[j] = rtNaN;
        }
      }
    }
    emxFree_real_T(&b_st, &tau);
    st.site = &jd_emlrtRSI;
    b_st.site = &rd_emlrtRSI;
    n = T->size[0];
    info_t = (ptrdiff_t)T->size[0];
    if ((T->size[0] != 0) && (T->size[1] != 0)) {
      emxInit_real_T(&b_st, &wr, 2, &bf_emlrtRTEI);
      emxInit_real_T(&b_st, &wi, 2, &cf_emlrtRTEI);
      j = wr->size[0] * wr->size[1];
      wr->size[0] = 1;
      wr->size[1] = T->size[0];
      emxEnsureCapacity_real_T(&b_st, wr, j, &ve_emlrtRTEI);
      wr_data = wr->data;
      j = wi->size[0] * wi->size[1];
      wi->size[0] = 1;
      wi->size[1] = T->size[0];
      emxEnsureCapacity_real_T(&b_st, wi, j, &we_emlrtRTEI);
      wi_data = wi->data;
      info_t = LAPACKE_dhseqr(102, 'S', 'V', info_t, (ptrdiff_t)1,
                              (ptrdiff_t)T->size[0], &T_data[0], info_t,
                              &wr_data[0], &wi_data[0], &V_data[0],
                              (ptrdiff_t)muIntScalarMax_sint32(1, n));
      jend = (int32_T)info_t;
      c_st.site = &sd_emlrtRSI;
      emxFree_real_T(&c_st, &wi);
      emxFree_real_T(&c_st, &wr);
      if (jend < 0) {
        p = true;
        b_p = false;
        if (jend == -7) {
          b_p = true;
        } else if (jend == -11) {
          b_p = true;
        }
        if (!b_p) {
          if (jend == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &c_fname[0], 12, jend);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        n = T->size[0];
        istart = T->size[1];
        j = T->size[0] * T->size[1];
        T->size[0] = n;
        T->size[1] = istart;
        emxEnsureCapacity_real_T(&b_st, T, j, &xe_emlrtRTEI);
        T_data = T->data;
        n *= istart;
        for (j = 0; j < n; j++) {
          T_data[j] = rtNaN;
        }
        n = V->size[0];
        istart = V->size[1];
        j = V->size[0] * V->size[1];
        V->size[0] = n;
        V->size[1] = istart;
        emxEnsureCapacity_real_T(&b_st, V, j, &ye_emlrtRTEI);
        V_data = V->data;
        n *= istart;
        for (j = 0; j < n; j++) {
          V_data[j] = rtNaN;
        }
      }
    } else {
      jend = 0;
    }
    if (jend != 0) {
      st.site = &kd_emlrtRSI;
      warning(&st);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (schur.c) */

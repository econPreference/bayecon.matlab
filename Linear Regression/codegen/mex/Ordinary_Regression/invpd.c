/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * invpd.c
 *
 * Code generation for function 'invpd'
 *
 */

/* Include files */
#include "invpd.h"
#include "Ordinary_Regression_data.h"
#include "Ordinary_Regression_emxutil.h"
#include "Ordinary_Regression_mexutil.h"
#include "Ordinary_Regression_types.h"
#include "cholmod.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = {
    23,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    22,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    17,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    14,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    23,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    42,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

static emlrtMCInfo l_emlrtMCI = {
    11,                                                       /* lineNo */
    10,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtMCInfo n_emlrtMCI = {
    11,                                                         /* lineNo */
    10,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtMCInfo o_emlrtMCI = {
    17,                                                         /* lineNo */
    13,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    10,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    8,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    24,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    22,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    8,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    6,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    19,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    17,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    20,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    18,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    37,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    35,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    31,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    26,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    22,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    20,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = {
    21,                                                         /* lineNo */
    12,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    15,                                                         /* lineNo */
    10,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    1,                                                        /* nDims */
    25,                                                       /* lineNo */
    13,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtECInfo f_emlrtECI = {
    2,                                                        /* nDims */
    25,                                                       /* lineNo */
    13,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    23,                                                       /* lineNo */
    10,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    25,                                                       /* lineNo */
    12,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    25,                                                       /* lineNo */
    5,                                                        /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    23,                                                         /* lineNo */
    18,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    23,                                                         /* lineNo */
    29,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    22,                                                       /* lineNo */
    10,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRSInfo jh_emlrtRSI = {
    11,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = {
    11,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo lh_emlrtRSI = {
    17,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    25,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Ainv);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Ainv)
{
  emxArray_real_T *b_Ainv;
  real_T *Ainv_data;
  real_T *b_Ainv_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  Ainv_data = Ainv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Ainv, 2, &yb_emlrtRTEI);
  i = b_Ainv->size[0] * b_Ainv->size[1];
  if (Ainv->size[1] == 1) {
    b_Ainv->size[0] = Ainv->size[0];
  } else {
    b_Ainv->size[0] = Ainv->size[1];
  }
  if (Ainv->size[0] == 1) {
    b_Ainv->size[1] = Ainv->size[1];
  } else {
    b_Ainv->size[1] = Ainv->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Ainv, i, &yb_emlrtRTEI);
  b_Ainv_data = b_Ainv->data;
  stride_0_0 = (Ainv->size[0] != 1);
  stride_0_1 = (Ainv->size[1] != 1);
  stride_1_0 = (Ainv->size[1] != 1);
  stride_1_1 = (Ainv->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Ainv->size[0] == 1) {
    loop_ub = Ainv->size[1];
  } else {
    loop_ub = Ainv->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Ainv->size[1] == 1) {
      b_loop_ub = Ainv->size[0];
    } else {
      b_loop_ub = Ainv->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Ainv_data[i1 + b_Ainv->size[0] * i] =
          (Ainv_data[i1 * stride_0_0 + Ainv->size[0] * aux_0_1] +
           Ainv_data[aux_1_1 + Ainv->size[0] * (i1 * stride_1_0)]) /
          2.0;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Ainv->size[0] * Ainv->size[1];
  Ainv->size[0] = b_Ainv->size[0];
  Ainv->size[1] = b_Ainv->size[1];
  emxEnsureCapacity_real_T(sp, Ainv, i, &bc_emlrtRTEI);
  Ainv_data = Ainv->data;
  loop_ub = b_Ainv->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Ainv->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Ainv_data[i1 + Ainv->size[0] * i] = b_Ainv_data[i1 + b_Ainv->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_Ainv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void invpd(const emlrtStack *sp, const emxArray_real_T *A,
           emxArray_real_T *Ainv)
{
  static const int32_T iv[2] = {1, 23};
  static const int32_T iv1[2] = {1, 23};
  static const int32_T iv2[2] = {1, 20};
  static const char_T b_u[23] = {'m', 'a', 't', 'r', 'i', 'x', ' ', 'T',
                                 ' ', ' ', 'i', 's', ' ', 'n', 'o', 't',
                                 ' ', 's', 'q', 'u', 'a', 'r', 'e'};
  static const char_T u[23] = {'m', 'a', 't', 'r', 'i', 'x', ' ', 'A',
                               ' ', ' ', 'i', 's', ' ', 'n', 'o', 't',
                               ' ', 's', 'q', 'u', 'a', 'r', 'e'};
  static const char_T c_u[20] = {'m', 'a', 't', 'r', 'i', 'x', ' ',
                                 'T', ' ', 'i', 's', ' ', 's', 'i',
                                 'n', 'g', 'u', 'l', 'a', 'r'};
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *Hinv;
  emxArray_real_T *a;
  emxArray_real_T *b;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T beta1;
  real_T d_sum;
  real_T *Ainv_data;
  real_T *Hinv_data;
  real_T *b_data;
  int32_T b_i;
  int32_T b_k;
  int32_T b_loop_ub;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky
   * factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error)  */
  if (A->size[0] != A->size[1]) {
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &jh_emlrtRSI;
    disp(&st, y, &l_emlrtMCI);
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
  } else {
    emxInit_real_T(sp, &Hinv, 2, &ec_emlrtRTEI);
    st.site = &r_emlrtRSI;
    cholmod(&st, A, Hinv, &d_sum);
    Hinv_data = Hinv->data;
    st.site = &q_emlrtRSI;
    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1];
    emxInit_real_T(&st, &a, 2, &cc_emlrtRTEI);
    emxInit_real_T(&st, &b, 1, &dc_emlrtRTEI);
    if (Hinv->size[0] != n) {
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&st, 23, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      b_st.site = &kh_emlrtRSI;
      disp(&b_st, b_y, &n_emlrtMCI);
    } else {
      b_st.site = &bd_emlrtRSI;
      c_st.site = &dd_emlrtRSI;
      if (n > 0) {
        c_st.site = &rc_emlrtRSI;
        if (n > 2147483646) {
          d_st.site = &ib_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
      }
      emlrtForLoopVectorCheckR2021a(n, -1.0, 1.0, mxDOUBLE_CLASS, n,
                                    &f_emlrtRTEI, &st);
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= n - 1)) {
        b_k = n - k;
        if ((b_k < 1) || (b_k > Hinv->size[1])) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &u_emlrtBCI,
                                        &st);
        }
        if (b_k > Hinv->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &v_emlrtBCI,
                                        &st);
        }
        d_sum = Hinv_data[(b_k + Hinv->size[0] * (b_k - 1)) - 1];
        if (d_sum == 0.0) {
          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&st, 20, m, &c_u[0]);
          emlrtAssign(&c_y, m);
          b_st.site = &lh_emlrtRSI;
          disp(&b_st, c_y, &o_emlrtMCI);
          exitg1 = true;
        } else {
          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &q_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &r_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &s_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &t_emlrtBCI,
                                          &st);
          }
          Hinv_data[(b_k + Hinv->size[0] * (b_k - 1)) - 1] = 1.0 / d_sum;
          emlrtForLoopVectorCheckR2021a((real_T)b_k - 1.0, -1.0, 1.0,
                                        mxDOUBLE_CLASS, b_k - 1, &e_emlrtRTEI,
                                        &st);
          for (b_i = 0; b_i <= b_k - 2; b_i++) {
            c_i = b_k - b_i;
            if (c_i > b_k) {
              i = -1;
              i1 = -1;
              i2 = -1;
              i3 = -1;
            } else {
              if ((c_i < 1) || (c_i > Hinv->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, Hinv->size[1],
                                              &bb_emlrtBCI, &st);
              }
              i = c_i - 2;
              if (b_k > Hinv->size[1]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1],
                                              &ab_emlrtBCI, &st);
              }
              i1 = b_k - 1;
              if (c_i > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, Hinv->size[0],
                                              &y_emlrtBCI, &st);
              }
              i2 = c_i - 2;
              if (b_k > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0],
                                              &x_emlrtBCI, &st);
              }
              i3 = b_k - 1;
            }
            b_st.site = &cd_emlrtRSI;
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &cb_emlrtBCI, &b_st);
            }
            b_loop_ub = a->size[0] * a->size[1];
            a->size[0] = 1;
            loop_ub = i1 - i;
            a->size[1] = loop_ub;
            emxEnsureCapacity_real_T(&b_st, a, b_loop_ub, &cc_emlrtRTEI);
            Ainv_data = a->data;
            for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
              Ainv_data[b_loop_ub] =
                  Hinv_data[(c_i + Hinv->size[0] * ((i + b_loop_ub) + 1)) - 2];
            }
            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &w_emlrtBCI,
                                            &b_st);
            }
            b_loop_ub = i3 - i2;
            i3 = b->size[0];
            b->size[0] = b_loop_ub;
            emxEnsureCapacity_real_T(&b_st, b, i3, &dc_emlrtRTEI);
            b_data = b->data;
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              b_data[i3] =
                  Hinv_data[((i2 + i3) + Hinv->size[0] * (b_k - 1)) + 1];
            }
            c_st.site = &tc_emlrtRSI;
            if (loop_ub != b_loop_ub) {
              if ((loop_ub == 1) || (b_loop_ub == 1)) {
                emlrtErrorWithMessageIdR2018a(
                    &c_st, &c_emlrtRTEI,
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                              "MATLAB:innerdim",
                                              "MATLAB:innerdim", 0);
              }
            }
            if (loop_ub < 1) {
              d_sum = 0.0;
            } else {
              n_t = (ptrdiff_t)(i1 - i);
              incx_t = (ptrdiff_t)1;
              incy_t = (ptrdiff_t)1;
              d_sum = ddot(&n_t, &Ainv_data[0], &incx_t, &b_data[0], &incy_t);
            }
            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &m_emlrtBCI,
                                            &st);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &n_emlrtBCI, &st);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[1],
                                            &o_emlrtBCI, &st);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &p_emlrtBCI, &st);
            }
            Hinv_data[(c_i + Hinv->size[0] * (b_k - 1)) - 2] =
                -d_sum / Hinv_data[(c_i + Hinv->size[0] * (c_i - 2)) - 2];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          k++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    }
    emxFree_real_T(&st, &b);
    emxFree_real_T(&st, &a);
    st.site = &p_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    b_st.site = &vc_emlrtRSI;
    if ((Hinv->size[0] == 0) || (Hinv->size[1] == 0)) {
      i = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = Hinv->size[0];
      emxEnsureCapacity_real_T(&b_st, Ainv, i, &xb_emlrtRTEI);
      Ainv_data = Ainv->data;
      loop_ub = Hinv->size[0] * Hinv->size[0];
      for (i = 0; i < loop_ub; i++) {
        Ainv_data[i] = 0.0;
      }
    } else {
      c_st.site = &wc_emlrtRSI;
      d_st.site = &xc_emlrtRSI;
      TRANSB1 = 'T';
      TRANSA1 = 'N';
      d_sum = 1.0;
      beta1 = 0.0;
      incx_t = (ptrdiff_t)Hinv->size[0];
      n_t = (ptrdiff_t)Hinv->size[0];
      incy_t = (ptrdiff_t)Hinv->size[1];
      lda_t = (ptrdiff_t)Hinv->size[0];
      ldb_t = (ptrdiff_t)Hinv->size[0];
      ldc_t = (ptrdiff_t)Hinv->size[0];
      i = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = Hinv->size[0];
      emxEnsureCapacity_real_T(&d_st, Ainv, i, &ac_emlrtRTEI);
      Ainv_data = Ainv->data;
      dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &d_sum, &Hinv_data[0],
            &lda_t, &Hinv_data[0], &ldb_t, &beta1, &Ainv_data[0], &ldc_t);
    }
    if ((Ainv->size[0] != Ainv->size[1]) &&
        ((Ainv->size[0] != 1) && (Ainv->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ainv->size[0], Ainv->size[1], &e_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((Ainv->size[0] != Ainv->size[1]) &&
        ((Ainv->size[1] != 1) && (Ainv->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ainv->size[1], Ainv->size[0], &f_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (Ainv->size[0] == Ainv->size[1]) {
      i = Hinv->size[0] * Hinv->size[1];
      Hinv->size[0] = Ainv->size[0];
      Hinv->size[1] = Ainv->size[1];
      emxEnsureCapacity_real_T(sp, Hinv, i, &yb_emlrtRTEI);
      Hinv_data = Hinv->data;
      loop_ub = Ainv->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = Ainv->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Hinv_data[i1 + Hinv->size[0] * i] =
              (Ainv_data[i1 + Ainv->size[0] * i] +
               Ainv_data[i + Ainv->size[0] * i1]) /
              2.0;
        }
      }
      i = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = Hinv->size[1];
      emxEnsureCapacity_real_T(sp, Ainv, i, &bc_emlrtRTEI);
      Ainv_data = Ainv->data;
      loop_ub = Hinv->size[0] * Hinv->size[1];
      for (i = 0; i < loop_ub; i++) {
        Ainv_data[i] = Hinv_data[i];
      }
    } else {
      st.site = &ci_emlrtRSI;
      b_binary_expand_op(&st, Ainv);
    }
    emxFree_real_T(sp, &Hinv);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (invpd.c) */

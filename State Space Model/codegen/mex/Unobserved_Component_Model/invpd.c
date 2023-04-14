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
#include "Unobserved_Component_Model.h"
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_emxutil.h"
#include "Unobserved_Component_Model_mexutil.h"
#include "Unobserved_Component_Model_types.h"
#include "cholmod.h"
#include "eml_int_forloop_overflow_check.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ve_emlrtRSI = {
    23,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    22,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    17,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    14,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    23,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    42,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

static emlrtMCInfo r_emlrtMCI = {
    11,                                                       /* lineNo */
    10,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtMCInfo s_emlrtMCI = {
    11,                                                         /* lineNo */
    10,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtMCInfo t_emlrtMCI = {
    17,                                                         /* lineNo */
    13,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtECInfo ib_emlrtECI = {
    2,                                                        /* nDims */
    25,                                                       /* lineNo */
    13,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtECInfo jb_emlrtECI = {
    1,                                                        /* nDims */
    25,                                                       /* lineNo */
    13,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    15,                                                         /* lineNo */
    10,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    21,                                                         /* lineNo */
    12,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    20,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    22,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    26,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    31,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    35,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    23,                                                          /* lineNo */
    37,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    18,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    20,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    17,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    19,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    6,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    20,                                                          /* lineNo */
    8,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    22,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    24,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    8,                                                           /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    24,                                                          /* lineNo */
    10,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    25,                                                       /* lineNo */
    12,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    25,                                                       /* lineNo */
    5,                                                        /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    23,                                                         /* lineNo */
    18,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    23,                                                         /* lineNo */
    29,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI = {
    22,                                                       /* lineNo */
    10,                                                       /* colNo */
    "invpd",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pName */
};

static emlrtRSInfo yh_emlrtRSI = {
    11,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo ai_emlrtRSI = {
    11,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    17,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo ri_emlrtRSI = {
    25,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

/* Function Definitions */
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
  real_T c_sum;
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
    st.site = &yh_emlrtRSI;
    disp(&st, y, &r_emlrtMCI);
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
  } else {
    emxInit_real_T(sp, &Hinv, 2, &if_emlrtRTEI);
    st.site = &xe_emlrtRSI;
    b_cholmod(&st, A, Hinv, &c_sum);
    Hinv_data = Hinv->data;
    st.site = &we_emlrtRSI;
    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1];
    emxInit_real_T(&st, &a, 2, &gf_emlrtRTEI);
    emxInit_real_T(&st, &b, 1, &hf_emlrtRTEI);
    if (Hinv->size[0] != n) {
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&st, 23, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      b_st.site = &ai_emlrtRSI;
      disp(&b_st, b_y, &s_emlrtMCI);
    } else {
      b_st.site = &ye_emlrtRSI;
      c_st.site = &bf_emlrtRSI;
      if (n > 0) {
        c_st.site = &ad_emlrtRSI;
        if (n > 2147483646) {
          d_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
      }
      emlrtForLoopVectorCheckR2021a(n, -1.0, 1.0, mxDOUBLE_CLASS, n,
                                    &s_emlrtRTEI, &st);
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= n - 1)) {
        b_k = n - k;
        if ((b_k < 1) || (b_k > Hinv->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &nc_emlrtBCI,
                                        &st);
        }
        if (b_k > Hinv->size[1]) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &oc_emlrtBCI,
                                        &st);
        }
        c_sum = Hinv_data[(b_k + Hinv->size[0] * (b_k - 1)) - 1];
        if (c_sum == 0.0) {
          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&st, 20, m, &c_u[0]);
          emlrtAssign(&c_y, m);
          b_st.site = &bi_emlrtRSI;
          disp(&b_st, c_y, &t_emlrtMCI);
          exitg1 = true;
        } else {
          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &pc_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &qc_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &rc_emlrtBCI,
                                          &st);
          }
          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &sc_emlrtBCI,
                                          &st);
          }
          Hinv_data[(b_k + Hinv->size[0] * (b_k - 1)) - 1] = 1.0 / c_sum;
          emlrtForLoopVectorCheckR2021a((real_T)b_k - 1.0, -1.0, 1.0,
                                        mxDOUBLE_CLASS, b_k - 1, &t_emlrtRTEI,
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
                                              &ic_emlrtBCI, &st);
              }
              i = c_i - 2;
              if (b_k > Hinv->size[1]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1],
                                              &jc_emlrtBCI, &st);
              }
              i1 = b_k - 1;
              if (c_i > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, Hinv->size[0],
                                              &kc_emlrtBCI, &st);
              }
              i2 = c_i - 2;
              if (b_k > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0],
                                              &lc_emlrtBCI, &st);
              }
              i3 = b_k - 1;
            }
            b_st.site = &af_emlrtRSI;
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &hc_emlrtBCI, &b_st);
            }
            b_loop_ub = a->size[0] * a->size[1];
            a->size[0] = 1;
            loop_ub = i1 - i;
            a->size[1] = loop_ub;
            emxEnsureCapacity_real_T(&b_st, a, b_loop_ub, &gf_emlrtRTEI);
            Ainv_data = a->data;
            for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
              Ainv_data[b_loop_ub] =
                  Hinv_data[(c_i + Hinv->size[0] * ((i + b_loop_ub) + 1)) - 2];
            }
            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &mc_emlrtBCI,
                                            &b_st);
            }
            b_loop_ub = i3 - i2;
            i3 = b->size[0];
            b->size[0] = b_loop_ub;
            emxEnsureCapacity_real_T(&b_st, b, i3, &hf_emlrtRTEI);
            b_data = b->data;
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              b_data[i3] =
                  Hinv_data[((i2 + i3) + Hinv->size[0] * (b_k - 1)) + 1];
            }
            c_st.site = &gd_emlrtRSI;
            if (loop_ub != b_loop_ub) {
              if ((loop_ub == 1) || (b_loop_ub == 1)) {
                emlrtErrorWithMessageIdR2018a(
                    &c_st, &m_emlrtRTEI,
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &l_emlrtRTEI,
                                              "MATLAB:innerdim",
                                              "MATLAB:innerdim", 0);
              }
            }
            if (loop_ub < 1) {
              c_sum = 0.0;
            } else {
              n_t = (ptrdiff_t)(i1 - i);
              incx_t = (ptrdiff_t)1;
              incy_t = (ptrdiff_t)1;
              c_sum = ddot(&n_t, &Ainv_data[0], &incx_t, &b_data[0], &incy_t);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &tc_emlrtBCI, &st);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[1],
                                            &uc_emlrtBCI, &st);
            }
            if ((c_i - 1 < 1) || (c_i - 1 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, Hinv->size[0],
                                            &vc_emlrtBCI, &st);
            }
            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &wc_emlrtBCI,
                                            &st);
            }
            Hinv_data[(c_i + Hinv->size[0] * (b_k - 1)) - 2] =
                -c_sum / Hinv_data[(c_i + Hinv->size[0] * (c_i - 2)) - 2];
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
    st.site = &ve_emlrtRSI;
    b_st.site = &gd_emlrtRSI;
    b_st.site = &fd_emlrtRSI;
    c_mtimes(&b_st, Hinv, Hinv, Ainv);
    Ainv_data = Ainv->data;
    if ((Ainv->size[0] != Ainv->size[1]) &&
        ((Ainv->size[0] != 1) && (Ainv->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ainv->size[0], Ainv->size[1], &jb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((Ainv->size[0] != Ainv->size[1]) &&
        ((Ainv->size[1] != 1) && (Ainv->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ainv->size[1], Ainv->size[0], &ib_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (Ainv->size[0] == Ainv->size[1]) {
      i = Hinv->size[0] * Hinv->size[1];
      Hinv->size[0] = Ainv->size[0];
      Hinv->size[1] = Ainv->size[1];
      emxEnsureCapacity_real_T(sp, Hinv, i, &ef_emlrtRTEI);
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
      emxEnsureCapacity_real_T(sp, Ainv, i, &ff_emlrtRTEI);
      Ainv_data = Ainv->data;
      loop_ub = Hinv->size[0] * Hinv->size[1];
      for (i = 0; i < loop_ub; i++) {
        Ainv_data[i] = Hinv_data[i];
      }
    } else {
      st.site = &ri_emlrtRSI;
      b_binary_expand_op(&st, Ainv);
    }
    emxFree_real_T(sp, &Hinv);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (invpd.c) */

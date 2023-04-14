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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "invpd.h"
#include "ARMA_X_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "assertValidSizeArg.h"
#include "cholmod.h"
#include "error.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo eb_emlrtRSI = { 24, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 23, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 18, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 14, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 23, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 41, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtMCInfo u_emlrtMCI = { 12,  /* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 11,  /* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 17,  /* lineNo */
  13,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 14,/* lineNo */
  13,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 24,/* lineNo */
  22,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 24,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 26,/* lineNo */
  18,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 23,/* lineNo */
  18,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 23,/* lineNo */
  29,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 26,/* lineNo */
  5,                                   /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 23,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  24,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  22,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  35,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  31,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  26,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  22,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  20,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ho_emlrtRTEI = { 21,/* lineNo */
  12,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pName */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  19,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  17,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo io_emlrtRTEI = { 15,/* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pName */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  16,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  4,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  6,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static const char_T cv0[20] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ', 'i',
  's', ' ', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r' };

static emlrtRSInfo xl_emlrtRSI = { 17, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 12, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invpd.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 11, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon(64bit)\\invuptr.m"/* pathName */
};

/* Function Definitions */
void b_invpd(const emlrtStack *sp, real_T A, real_T Ainv_data[], int32_T
             Ainv_size[2])
{
  const mxArray *y;
  const mxArray *m6;
  static const int32_T iv27[2] = { 1, 18 };

  real_T d;
  real_T Hinv;
  static const int32_T iv28[2] = { 1, 20 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error) */
  /* 대칭, 양정부호 행렬의 역행렬을 LU분해보다 빠르고 정확하게 계산해 줍니다. */
  st.site = &gb_emlrtRSI;

  /*  function [R, indef, E, err] = cholmod(A) */
  /*  CHOLMOD Modified Cholesky factorization */
  /*   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL) */
  /*   if A is (sufficiently) positive definite, and otherwise returns a  */
  /*   modified factor R with diagonal enries >= sqrt(delta) and */
  /*   offdiagonal entries <= beta in absolute value, */
  /*   where delta and beta are defined in terms of size of diagonal and */
  /*   offdiagonal entries of A and the machine precision; see below. */
  /*   The idea is to ensure that E = A - R'*R is reasonably small if A is  */
  /*   not too far from being indefinite.  If A is sparse, so is R. */
  /*   The output parameter indef is set to 0 if A is sufficiently positive */
  /*   definite and to 1 if the factorization is modified. */
  /*  */
  /*   The point of modified Cholesky is to avoid computing eigenvalues,  */
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in  */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  if (muDoubleScalarAbs(A - A) > 0.0) {
    b_st.site = &ib_emlrtRSI;
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv27);
    emlrtInitCharArrayR2013a(&b_st, 18, m6, &cv1[0]);
    emlrtAssign(&y, m6);
    c_st.site = &um_emlrtRSI;
    m_error(&c_st, y, &v_emlrtMCI);
  }

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  /*  max diagonal entry */
  /*  max off-diagonal entry */
  d = muDoubleScalarAbs(A) + muDoubleScalarAbs(A - A);
  if ((d < 1.0) || muDoubleScalarIsNaN(d)) {
    Hinv = 1.0;
  } else {
    Hinv = d;
  }

  b_st.site = &mb_emlrtRSI;

  /*  initialize d and L */
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  /*  column index: all columns to left of diagonal */
  /*  d(K) doesn't work in case K is empty */
  /*  C(j,j) in book */
  d = muDoubleScalarAbs(A);
  Hinv *= 2.2204460492503131E-16;
  if ((d < Hinv) || (muDoubleScalarIsNaN(d) && (!muDoubleScalarIsNaN(Hinv)))) {
    d = Hinv;
  }

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  b_st.site = &tb_emlrtRSI;
  Hinv = muDoubleScalarSqrt(d);

  /*  L = L*diag(sqrt(d)) bad in sparse case */
  st.site = &fb_emlrtRSI;

  /* INVUPTR Inverse of an upper triangular matrix  */
  /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
  /* matrix T.  The output matrix T contains the inverse of T.  */
  /* This program implements Algorithm 4.2.2 of the book. */
  /* Input  : Matrix T  */
  /* output : Matrix T */
  if (Hinv == 0.0) {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv28);
    emlrtInitCharArrayR2013a(&st, 20, m6, &cv0[0]);
    emlrtAssign(&y, m6);
    b_st.site = &xl_emlrtRSI;
    disp(&b_st, y, &x_emlrtMCI);
  } else {
    Hinv = 1.0 / Hinv;
  }

  Ainv_size[0] = 1;
  Ainv_size[1] = 1;
  Ainv_data[0] = (Hinv * Hinv + Hinv * Hinv) / 2.0;
}

void invpd(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *Ainv)
{
  emxArray_real_T *Hinv;
  const mxArray *y;
  real_T alpha1;
  const mxArray *m1;
  static const int32_T iv14[2] = { 1, 23 };

  static const char_T u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'A', ' ', ' ',
    'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T i5;
  int32_T n;
  static const int32_T iv15[2] = { 1, 23 };

  static const char_T b_u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ',
    ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T d;
  emxArray_real_T *b;
  emxArray_real_T *a;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  boolean_T exitg1;
  int32_T k;
  int32_T i6;
  static const int32_T iv16[2] = { 1, 20 };

  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  ptrdiff_t incy_t;
  int32_T b_Ainv[2];
  int32_T i7;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T i;
  int32_T c_Ainv[2];
  int32_T b_i;
  int32_T i8;
  int32_T i9;
  int32_T i10;
  int32_T i11;
  int32_T c_i;
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

  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error) */
  /* 대칭, 양정부호 행렬의 역행렬을 LU분해보다 빠르고 정확하게 계산해 줍니다. */
  if (A->size[0] != A->size[1]) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(sp, 23, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &yl_emlrtRSI;
    disp(&st, y, &u_emlrtMCI);
    i5 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
    emxEnsureCapacity_real_T(sp, Ainv, i5, &cd_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &Hinv, 2, &kd_emlrtRTEI, true);
    st.site = &gb_emlrtRSI;
    cholmod(&st, A, Hinv, &alpha1);
    st.site = &fb_emlrtRSI;

    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1];
    if (Hinv->size[0] != Hinv->size[1]) {
      y = NULL;
      m1 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(&st, 23, m1, &b_u[0]);
      emlrtAssign(&y, m1);
      b_st.site = &am_emlrtRSI;
      disp(&b_st, y, &w_emlrtMCI);
    } else {
      b_st.site = &ed_emlrtRSI;
      c_st.site = &gd_emlrtRSI;
      d_st.site = &rc_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      d_st.site = &rc_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      d = Hinv->size[1];
      if (d > 0) {
        c_st.site = &qc_emlrtRSI;
        if (d > 2147483646) {
          d_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
      }

      i5 = (int32_T)((1.0 + (-1.0 - (real_T)Hinv->size[1])) / -1.0);
      emlrtForLoopVectorCheckR2012b(Hinv->size[1], -1.0, 1.0, mxDOUBLE_CLASS, i5,
        &io_emlrtRTEI, &st);
      d = 0;
      emxInit_real_T(&st, &a, 2, &gd_emlrtRTEI, true);
      emxInit_real_T1(&st, &b_b, 1, &hd_emlrtRTEI, true);
      exitg1 = false;
      while ((!exitg1) && (d <= i5 - 1)) {
        k = n - d;
        i6 = Hinv->size[0];
        if (!((k >= 1) && (k <= i6))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &rb_emlrtBCI, &st);
        }

        i6 = Hinv->size[1];
        if (!((k >= 1) && (k <= i6))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i6, &rb_emlrtBCI, &st);
        }

        if (Hinv->data[(k + Hinv->size[0] * (k - 1)) - 1] == 0.0) {
          y = NULL;
          m1 = emlrtCreateCharArray(2, iv16);
          emlrtInitCharArrayR2013a(&st, 20, m1, &cv0[0]);
          emlrtAssign(&y, m1);
          b_st.site = &xl_emlrtRSI;
          disp(&b_st, y, &x_emlrtMCI);
          exitg1 = true;
        } else {
          i6 = Hinv->size[0];
          if (!((k >= 1) && (k <= i6))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i6, &qb_emlrtBCI, &st);
          }

          i6 = Hinv->size[1];
          if (!((k >= 1) && (k <= i6))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i6, &pb_emlrtBCI, &st);
          }

          i6 = Hinv->size[0];
          if (!((k >= 1) && (k <= i6))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i6, &sb_emlrtBCI, &st);
          }

          i6 = Hinv->size[1];
          if (!((k >= 1) && (k <= i6))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i6, &sb_emlrtBCI, &st);
          }

          Hinv->data[(k + Hinv->size[0] * (k - 1)) - 1] = 1.0 / Hinv->data[(k +
            Hinv->size[0] * (k - 1)) - 1];
          i6 = (int32_T)((1.0 + (-1.0 - ((real_T)k - 1.0))) / -1.0);
          emlrtForLoopVectorCheckR2012b((real_T)k - 1.0, -1.0, 1.0,
            mxDOUBLE_CLASS, i6, &ho_emlrtRTEI, &st);
          i = 0;
          while (i <= i6 - 1) {
            b_i = k - i;
            if (b_i > k) {
              i7 = 0;
              i8 = 0;
              i9 = 0;
              i10 = 0;
            } else {
              i7 = Hinv->size[1];
              if (!((b_i >= 1) && (b_i <= i7))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, i7, &nb_emlrtBCI, &st);
              }

              i7 = b_i - 1;
              i8 = Hinv->size[1];
              if (!((k >= 1) && (k <= i8))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i8, &mb_emlrtBCI, &st);
              }

              i8 = k;
              i9 = Hinv->size[0];
              if (!((b_i >= 1) && (b_i <= i9))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, i9, &lb_emlrtBCI, &st);
              }

              i9 = b_i - 1;
              i10 = Hinv->size[0];
              if (!((k >= 1) && (k <= i10))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i10, &kb_emlrtBCI, &st);
              }

              i10 = k;
            }

            b_st.site = &fd_emlrtRSI;
            i11 = Hinv->size[0];
            c_i = b_i - 1;
            if (!((c_i >= 1) && (c_i <= i11))) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, i11, &ob_emlrtBCI, &b_st);
            }

            i11 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = i8 - i7;
            emxEnsureCapacity_real_T(&b_st, a, i11, &gd_emlrtRTEI);
            loop_ub = i8 - i7;
            for (i11 = 0; i11 < loop_ub; i11++) {
              a->data[a->size[0] * i11] = Hinv->data[(c_i + Hinv->size[0] * (i7
                + i11)) - 1];
            }

            i11 = Hinv->size[1];
            if (!((k >= 1) && (k <= i11))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i11, &jb_emlrtBCI, &b_st);
            }

            i11 = b_b->size[0];
            b_b->size[0] = i10 - i9;
            emxEnsureCapacity_real_T1(&b_st, b_b, i11, &hd_emlrtRTEI);
            loop_ub = i10 - i9;
            for (i11 = 0; i11 < loop_ub; i11++) {
              b_b->data[i11] = Hinv->data[(i9 + i11) + Hinv->size[0] * (k - 1)];
            }

            c_st.site = &tc_emlrtRSI;
            if (!(i8 - i7 == i10 - i9)) {
              if ((i8 - i7 == 1) || (i10 - i9 == 1)) {
                emlrtErrorWithMessageIdR2018a(&c_st, &bo_emlrtRTEI,
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &ao_emlrtRTEI,
                  "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
              }
            }

            if ((i8 - i7 == 1) || (i10 - i9 == 1)) {
              alpha1 = 0.0;
              for (i7 = 0; i7 < a->size[1]; i7++) {
                alpha1 += a->data[a->size[0] * i7] * b_b->data[i7];
              }
            } else {
              c_st.site = &sc_emlrtRSI;
              if (i8 - i7 < 1) {
                alpha1 = 0.0;
              } else {
                n_t = (ptrdiff_t)(i8 - i7);
                incx_t = (ptrdiff_t)1;
                incy_t = (ptrdiff_t)1;
                alpha1 = ddot(&n_t, &a->data[0], &incx_t, &b_b->data[0], &incy_t);
              }
            }

            i7 = Hinv->size[0];
            i8 = b_i - 1;
            if (!((i8 >= 1) && (i8 <= i7))) {
              emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &ib_emlrtBCI, &st);
            }

            i7 = Hinv->size[1];
            i8 = b_i - 1;
            if (!((i8 >= 1) && (i8 <= i7))) {
              emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &hb_emlrtBCI, &st);
            }

            i7 = Hinv->size[0];
            i8 = b_i - 1;
            if (!((i8 >= 1) && (i8 <= i7))) {
              emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &tb_emlrtBCI, &st);
            }

            i7 = Hinv->size[1];
            if (!((k >= 1) && (k <= i7))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i7, &tb_emlrtBCI, &st);
            }

            Hinv->data[(i8 + Hinv->size[0] * (k - 1)) - 1] = -alpha1 /
              Hinv->data[(b_i + Hinv->size[0] * (b_i - 2)) - 2];
            i++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }

          d++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }

      emxFree_real_T(&b_b);
      emxFree_real_T(&a);
    }

    emxInit_real_T(&st, &b, 2, &dd_emlrtRTEI, true);
    st.site = &eb_emlrtRSI;
    i5 = b->size[0] * b->size[1];
    b->size[0] = Hinv->size[1];
    b->size[1] = Hinv->size[0];
    emxEnsureCapacity_real_T(&st, b, i5, &dd_emlrtRTEI);
    loop_ub = Hinv->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      d = Hinv->size[1];
      for (i6 = 0; i6 < d; i6++) {
        b->data[i6 + b->size[0] * i5] = Hinv->data[i5 + Hinv->size[0] * i6];
      }
    }

    b_st.site = &tc_emlrtRSI;
    if (!(Hinv->size[1] == b->size[0])) {
      if (((Hinv->size[0] == 1) && (Hinv->size[1] == 1)) || ((b->size[0] == 1) &&
           (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bo_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ao_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((Hinv->size[1] == 1) || (b->size[0] == 1)) {
      i5 = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&st, Ainv, i5, &ed_emlrtRTEI);
      loop_ub = Hinv->size[0];
      for (i5 = 0; i5 < loop_ub; i5++) {
        d = b->size[1];
        for (i6 = 0; i6 < d; i6++) {
          Ainv->data[i5 + Ainv->size[0] * i6] = 0.0;
          k = Hinv->size[1];
          for (i7 = 0; i7 < k; i7++) {
            Ainv->data[i5 + Ainv->size[0] * i6] += Hinv->data[i5 + Hinv->size[0]
              * i7] * b->data[i7 + b->size[0] * i6];
          }
        }
      }
    } else {
      b_st.site = &sc_emlrtRSI;
      if ((Hinv->size[0] == 0) || (Hinv->size[1] == 0) || (b->size[0] == 0) ||
          (b->size[1] == 0)) {
        i5 = Ainv->size[0] * Ainv->size[1];
        Ainv->size[0] = Hinv->size[0];
        Ainv->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&b_st, Ainv, i5, &ed_emlrtRTEI);
        loop_ub = Hinv->size[0] * b->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          Ainv->data[i5] = 0.0;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        c_st.site = &ad_emlrtRSI;
        TRANSA = 'N';
        TRANSB = 'N';
        alpha1 = 1.0;
        beta1 = 0.0;
        incx_t = (ptrdiff_t)Hinv->size[0];
        n_t = (ptrdiff_t)b->size[1];
        incy_t = (ptrdiff_t)Hinv->size[1];
        lda_t = (ptrdiff_t)Hinv->size[0];
        ldb_t = (ptrdiff_t)Hinv->size[1];
        ldc_t = (ptrdiff_t)Hinv->size[0];
        i5 = Ainv->size[0] * Ainv->size[1];
        Ainv->size[0] = Hinv->size[0];
        Ainv->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&c_st, Ainv, i5, &j_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &alpha1, &Hinv->data[0],
              &lda_t, &b->data[0], &ldb_t, &beta1, &Ainv->data[0], &ldc_t);
      }
    }

    emxFree_real_T(&b);
    for (i5 = 0; i5 < 2; i5++) {
      b_Ainv[i5] = Ainv->size[i5];
    }

    i5 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[1];
    Hinv->size[1] = Ainv->size[0];
    emxEnsureCapacity_real_T(sp, Hinv, i5, &fd_emlrtRTEI);
    loop_ub = Ainv->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      d = Ainv->size[1];
      for (i6 = 0; i6 < d; i6++) {
        Hinv->data[i6 + Hinv->size[0] * i5] = Ainv->data[i5 + Ainv->size[0] * i6];
      }
    }

    for (i5 = 0; i5 < 2; i5++) {
      c_Ainv[i5] = Hinv->size[i5];
    }

    if ((b_Ainv[0] != c_Ainv[0]) || (b_Ainv[1] != c_Ainv[1])) {
      emlrtSizeEqCheckNDR2012b(&b_Ainv[0], &c_Ainv[0], &j_emlrtECI, sp);
    }

    i5 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[0];
    Hinv->size[1] = Ainv->size[1];
    emxEnsureCapacity_real_T(sp, Hinv, i5, &id_emlrtRTEI);
    loop_ub = Ainv->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      d = Ainv->size[0];
      for (i6 = 0; i6 < d; i6++) {
        Hinv->data[i6 + Hinv->size[0] * i5] = (Ainv->data[i6 + Ainv->size[0] *
          i5] + Ainv->data[i5 + Ainv->size[0] * i6]) / 2.0;
      }
    }

    i5 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = Hinv->size[0];
    Ainv->size[1] = Hinv->size[1];
    emxEnsureCapacity_real_T(sp, Ainv, i5, &jd_emlrtRTEI);
    loop_ub = Hinv->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      d = Hinv->size[0];
      for (i6 = 0; i6 < d; i6++) {
        Ainv->data[i6 + Ainv->size[0] * i5] = Hinv->data[i6 + Hinv->size[0] * i5];
      }
    }

    emxFree_real_T(&Hinv);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (invpd.c) */

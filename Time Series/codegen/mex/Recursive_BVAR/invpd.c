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
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "invpd.h"
#include "Recursive_BVAR_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "assertValidSizeArg.h"
#include "cholmod.h"
#include "Recursive_BVAR_mexutil.h"
#include "Recursive_BVAR_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo vc_emlrtRSI = { 24, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 23, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 18, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 14, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 23, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 41, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtMCInfo v_emlrtMCI = { 12,  /* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 11,  /* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 17,  /* lineNo */
  13,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 14,/* lineNo */
  13,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 24,/* lineNo */
  22,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 24,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 26,/* lineNo */
  18,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 23,/* lineNo */
  18,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 23,/* lineNo */
  29,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 44,/* lineNo */
  9,                                   /* colNo */
  "div",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 26,/* lineNo */
  5,                                   /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 23,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  24,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  22,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  35,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  31,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  26,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  22,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  20,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo nk_emlrtRTEI = { 21,/* lineNo */
  12,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  19,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  17,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ok_emlrtRTEI = { 15,/* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 2,   /* nDims */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  16,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  4,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  6,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo mk_emlrtRSI = { 12, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 11, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 17, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

/* Function Definitions */
void invpd(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *Ainv)
{
  emxArray_real_T *Hinv;
  const mxArray *y;
  real_T alpha1;
  const mxArray *m4;
  static const int32_T iv22[2] = { 1, 23 };

  static const char_T u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'A', ' ', ' ',
    'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T i3;
  int32_T n;
  static const int32_T iv23[2] = { 1, 23 };

  static const char_T b_u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ',
    ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T d;
  emxArray_real_T *b;
  emxArray_real_T *a;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  boolean_T exitg1;
  int32_T k;
  int32_T i4;
  static const int32_T iv24[2] = { 1, 20 };

  static const char_T c_u[20] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ',
    'i', 's', ' ', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r' };

  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  ptrdiff_t incy_t;
  int32_T b_Ainv[2];
  int32_T i5;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T i;
  int32_T c_Ainv[2];
  int32_T b_i;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
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
    m4 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(sp, 23, m4, &u[0]);
    emlrtAssign(&y, m4);
    st.site = &mk_emlrtRSI;
    disp(&st, y, &v_emlrtMCI);
    i3 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
    emxEnsureCapacity_real_T(sp, Ainv, i3, &fd_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &Hinv, 2, &nd_emlrtRTEI, true);
    st.site = &xc_emlrtRSI;
    cholmod(&st, A, Hinv, &alpha1);
    st.site = &wc_emlrtRSI;

    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1];
    if (Hinv->size[0] != Hinv->size[1]) {
      y = NULL;
      m4 = emlrtCreateCharArray(2, iv23);
      emlrtInitCharArrayR2013a(&st, 23, m4, &b_u[0]);
      emlrtAssign(&y, m4);
      b_st.site = &nk_emlrtRSI;
      disp(&b_st, y, &x_emlrtMCI);
    } else {
      b_st.site = &ue_emlrtRSI;
      c_st.site = &we_emlrtRSI;
      d_st.site = &sc_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      d_st.site = &sc_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      d = Hinv->size[1];
      if (d > 0) {
        c_st.site = &rc_emlrtRSI;
        if (d > 2147483646) {
          d_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
      }

      i3 = (int32_T)((1.0 + (-1.0 - (real_T)Hinv->size[1])) / -1.0);
      emlrtForLoopVectorCheckR2012b(Hinv->size[1], -1.0, 1.0, mxDOUBLE_CLASS, i3,
        &ok_emlrtRTEI, &st);
      d = 0;
      emxInit_real_T(&st, &a, 2, &jd_emlrtRTEI, true);
      emxInit_real_T1(&st, &b_b, 1, &kd_emlrtRTEI, true);
      exitg1 = false;
      while ((!exitg1) && (d <= i3 - 1)) {
        k = n - d;
        i4 = Hinv->size[0];
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &qb_emlrtBCI, &st);
        }

        i4 = Hinv->size[1];
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &qb_emlrtBCI, &st);
        }

        if (Hinv->data[(k + Hinv->size[0] * (k - 1)) - 1] == 0.0) {
          y = NULL;
          m4 = emlrtCreateCharArray(2, iv24);
          emlrtInitCharArrayR2013a(&st, 20, m4, &c_u[0]);
          emlrtAssign(&y, m4);
          b_st.site = &ok_emlrtRSI;
          disp(&b_st, y, &y_emlrtMCI);
          exitg1 = true;
        } else {
          i4 = Hinv->size[0];
          if (!((k >= 1) && (k <= i4))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i4, &pb_emlrtBCI, &st);
          }

          i4 = Hinv->size[1];
          if (!((k >= 1) && (k <= i4))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i4, &ob_emlrtBCI, &st);
          }

          i4 = Hinv->size[0];
          if (!((k >= 1) && (k <= i4))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i4, &rb_emlrtBCI, &st);
          }

          i4 = Hinv->size[1];
          if (!((k >= 1) && (k <= i4))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i4, &rb_emlrtBCI, &st);
          }

          Hinv->data[(k + Hinv->size[0] * (k - 1)) - 1] = 1.0 / Hinv->data[(k +
            Hinv->size[0] * (k - 1)) - 1];
          i4 = (int32_T)((1.0 + (-1.0 - ((real_T)k - 1.0))) / -1.0);
          emlrtForLoopVectorCheckR2012b((real_T)k - 1.0, -1.0, 1.0,
            mxDOUBLE_CLASS, i4, &nk_emlrtRTEI, &st);
          i = 0;
          while (i <= i4 - 1) {
            b_i = k - i;
            if (b_i > k) {
              i5 = 0;
              i6 = 0;
              i7 = 0;
              i8 = 0;
            } else {
              i5 = Hinv->size[1];
              if (!((b_i >= 1) && (b_i <= i5))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, i5, &mb_emlrtBCI, &st);
              }

              i5 = b_i - 1;
              i6 = Hinv->size[1];
              if (!((k >= 1) && (k <= i6))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i6, &lb_emlrtBCI, &st);
              }

              i6 = k;
              i7 = Hinv->size[0];
              if (!((b_i >= 1) && (b_i <= i7))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, i7, &kb_emlrtBCI, &st);
              }

              i7 = b_i - 1;
              i8 = Hinv->size[0];
              if (!((k >= 1) && (k <= i8))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i8, &jb_emlrtBCI, &st);
              }

              i8 = k;
            }

            b_st.site = &ve_emlrtRSI;
            i9 = Hinv->size[0];
            c_i = b_i - 1;
            if (!((c_i >= 1) && (c_i <= i9))) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, i9, &nb_emlrtBCI, &b_st);
            }

            i9 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = i6 - i5;
            emxEnsureCapacity_real_T(&b_st, a, i9, &jd_emlrtRTEI);
            loop_ub = i6 - i5;
            for (i9 = 0; i9 < loop_ub; i9++) {
              a->data[a->size[0] * i9] = Hinv->data[(c_i + Hinv->size[0] * (i5 +
                i9)) - 1];
            }

            i9 = Hinv->size[1];
            if (!((k >= 1) && (k <= i9))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i9, &ib_emlrtBCI, &b_st);
            }

            i9 = b_b->size[0];
            b_b->size[0] = i8 - i7;
            emxEnsureCapacity_real_T2(&b_st, b_b, i9, &kd_emlrtRTEI);
            loop_ub = i8 - i7;
            for (i9 = 0; i9 < loop_ub; i9++) {
              b_b->data[i9] = Hinv->data[(i7 + i9) + Hinv->size[0] * (k - 1)];
            }

            c_st.site = &le_emlrtRSI;
            if (!(i6 - i5 == i8 - i7)) {
              if ((i6 - i5 == 1) || (i8 - i7 == 1)) {
                emlrtErrorWithMessageIdR2018a(&c_st, &hk_emlrtRTEI,
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &gk_emlrtRTEI,
                  "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
              }
            }

            if ((i6 - i5 == 1) || (i8 - i7 == 1)) {
              alpha1 = 0.0;
              for (i5 = 0; i5 < a->size[1]; i5++) {
                alpha1 += a->data[a->size[0] * i5] * b_b->data[i5];
              }
            } else {
              c_st.site = &ke_emlrtRSI;
              if (i6 - i5 < 1) {
                alpha1 = 0.0;
              } else {
                n_t = (ptrdiff_t)(i6 - i5);
                incx_t = (ptrdiff_t)1;
                incy_t = (ptrdiff_t)1;
                alpha1 = ddot(&n_t, &a->data[0], &incx_t, &b_b->data[0], &incy_t);
              }
            }

            i5 = Hinv->size[0];
            i6 = b_i - 1;
            if (!((i6 >= 1) && (i6 <= i5))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &hb_emlrtBCI, &st);
            }

            i5 = Hinv->size[1];
            i6 = b_i - 1;
            if (!((i6 >= 1) && (i6 <= i5))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &gb_emlrtBCI, &st);
            }

            i5 = Hinv->size[0];
            i6 = b_i - 1;
            if (!((i6 >= 1) && (i6 <= i5))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &sb_emlrtBCI, &st);
            }

            i5 = Hinv->size[1];
            if (!((k >= 1) && (k <= i5))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i5, &sb_emlrtBCI, &st);
            }

            Hinv->data[(i6 + Hinv->size[0] * (k - 1)) - 1] = -alpha1 /
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

    emxInit_real_T(&st, &b, 2, &gd_emlrtRTEI, true);
    st.site = &vc_emlrtRSI;
    i3 = b->size[0] * b->size[1];
    b->size[0] = Hinv->size[1];
    b->size[1] = Hinv->size[0];
    emxEnsureCapacity_real_T(&st, b, i3, &gd_emlrtRTEI);
    loop_ub = Hinv->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      d = Hinv->size[1];
      for (i4 = 0; i4 < d; i4++) {
        b->data[i4 + b->size[0] * i3] = Hinv->data[i3 + Hinv->size[0] * i4];
      }
    }

    b_st.site = &le_emlrtRSI;
    if (!(Hinv->size[1] == b->size[0])) {
      if (((Hinv->size[0] == 1) && (Hinv->size[1] == 1)) || ((b->size[0] == 1) &&
           (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((Hinv->size[1] == 1) || (b->size[0] == 1)) {
      i3 = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&st, Ainv, i3, &hd_emlrtRTEI);
      loop_ub = Hinv->size[0];
      for (i3 = 0; i3 < loop_ub; i3++) {
        d = b->size[1];
        for (i4 = 0; i4 < d; i4++) {
          Ainv->data[i3 + Ainv->size[0] * i4] = 0.0;
          k = Hinv->size[1];
          for (i5 = 0; i5 < k; i5++) {
            Ainv->data[i3 + Ainv->size[0] * i4] += Hinv->data[i3 + Hinv->size[0]
              * i5] * b->data[i5 + b->size[0] * i4];
          }
        }
      }
    } else {
      b_st.site = &ke_emlrtRSI;
      if ((Hinv->size[0] == 0) || (Hinv->size[1] == 0) || (b->size[0] == 0) ||
          (b->size[1] == 0)) {
        i3 = Ainv->size[0] * Ainv->size[1];
        Ainv->size[0] = Hinv->size[0];
        Ainv->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&b_st, Ainv, i3, &hd_emlrtRTEI);
        loop_ub = Hinv->size[0] * b->size[1];
        for (i3 = 0; i3 < loop_ub; i3++) {
          Ainv->data[i3] = 0.0;
        }
      } else {
        c_st.site = &pe_emlrtRSI;
        c_st.site = &qe_emlrtRSI;
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
        i3 = Ainv->size[0] * Ainv->size[1];
        Ainv->size[0] = Hinv->size[0];
        Ainv->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&c_st, Ainv, i3, &mb_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &alpha1, &Hinv->data[0],
              &lda_t, &b->data[0], &ldb_t, &beta1, &Ainv->data[0], &ldc_t);
      }
    }

    emxFree_real_T(&b);
    for (i3 = 0; i3 < 2; i3++) {
      b_Ainv[i3] = Ainv->size[i3];
    }

    i3 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[1];
    Hinv->size[1] = Ainv->size[0];
    emxEnsureCapacity_real_T(sp, Hinv, i3, &id_emlrtRTEI);
    loop_ub = Ainv->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      d = Ainv->size[1];
      for (i4 = 0; i4 < d; i4++) {
        Hinv->data[i4 + Hinv->size[0] * i3] = Ainv->data[i3 + Ainv->size[0] * i4];
      }
    }

    for (i3 = 0; i3 < 2; i3++) {
      c_Ainv[i3] = Hinv->size[i3];
    }

    if ((b_Ainv[0] != c_Ainv[0]) || (b_Ainv[1] != c_Ainv[1])) {
      emlrtSizeEqCheckNDR2012b(&b_Ainv[0], &c_Ainv[0], &k_emlrtECI, sp);
    }

    i3 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[0];
    Hinv->size[1] = Ainv->size[1];
    emxEnsureCapacity_real_T(sp, Hinv, i3, &ld_emlrtRTEI);
    loop_ub = Ainv->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      d = Ainv->size[0];
      for (i4 = 0; i4 < d; i4++) {
        Hinv->data[i4 + Hinv->size[0] * i3] = (Ainv->data[i4 + Ainv->size[0] *
          i3] + Ainv->data[i3 + Ainv->size[0] * i4]) / 2.0;
      }
    }

    i3 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = Hinv->size[0];
    Ainv->size[1] = Hinv->size[1];
    emxEnsureCapacity_real_T(sp, Ainv, i3, &md_emlrtRTEI);
    loop_ub = Hinv->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      d = Hinv->size[0];
      for (i4 = 0; i4 < d; i4++) {
        Ainv->data[i4 + Ainv->size[0] * i3] = Hinv->data[i4 + Hinv->size[0] * i3];
      }
    }

    emxFree_real_T(&Hinv);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (invpd.c) */

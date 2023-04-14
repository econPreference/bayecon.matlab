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
#include "Auto_Unit.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "Unit_Root_mexutil.h"
#include "assertValidSizeArg.h"
#include "blas.h"
#include "cholmod.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo tb_emlrtRSI = { 24, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 23, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 18, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 228,/* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 14, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 23, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 42, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtMCInfo v_emlrtMCI = { 12,  /* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 11,  /* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 17,  /* lineNo */
  13,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  6,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  20,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  4,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  15,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  16,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { 2,   /* nDims */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 15,/* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 21,/* lineNo */
  12,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  20,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  22,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  26,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  31,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  35,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo he_emlrtRTEI = { 24,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 26,/* lineNo */
  18,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 26,/* lineNo */
  12,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 26,/* lineNo */
  5,                                   /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 23,/* lineNo */
  18,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 23,/* lineNo */
  29,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 23,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pName */
};

static emlrtRSInfo jo_emlrtRSI = { 12, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invpd.m"/* pathName */
};

static emlrtRSInfo ko_emlrtRSI = { 11, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

static emlrtRSInfo lo_emlrtRSI = { 17, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\invuptr.m"/* pathName */
};

/* Function Definitions */
void invpd(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *Ainv)
{
  emxArray_real_T *Hinv;
  const mxArray *y;
  real_T c_sum;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 23 };

  static const char_T u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'A', ' ', ' ',
    'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T n;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 23 };

  static const char_T b_u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ',
    ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T i;
  int32_T k;
  emxArray_real_T *a;
  emxArray_real_T *b;
  boolean_T exitg1;
  int32_T loop_ub;
  int32_T b_k;
  char_T TRANSB1;
  char_T TRANSA1;
  int32_T b_loop_ub;
  int32_T i1;
  real_T beta1;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  int32_T c_loop_ub;
  ptrdiff_t incy_t;
  int32_T i2;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 20 };

  ptrdiff_t lda_t;
  static const char_T c_u[20] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ',
    'i', 's', ' ', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r' };

  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T b_i;
  int32_T c_i;
  int32_T i3;
  int32_T i4;
  int32_T i5;
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
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 23, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &jo_emlrtRSI;
    disp(&st, y, &v_emlrtMCI);
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
  } else {
    emxInit_real_T(sp, &Hinv, 2, &oe_emlrtRTEI, true);
    st.site = &vb_emlrtRSI;
    cholmod(&st, A, Hinv, &c_sum);
    st.site = &ub_emlrtRSI;

    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1];
    if (Hinv->size[0] != Hinv->size[1]) {
      y = NULL;
      m1 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(&st, 23, m1, &b_u[0]);
      emlrtAssign(&y, m1);
      b_st.site = &ko_emlrtRSI;
      disp(&b_st, y, &x_emlrtMCI);
    } else {
      b_st.site = &vd_emlrtRSI;
      c_st.site = &xd_emlrtRSI;
      d_st.site = &ld_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      d_st.site = &ld_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      if (Hinv->size[1] > 0) {
        c_st.site = &kd_emlrtRSI;
        if (Hinv->size[1] > 2147483646) {
          d_st.site = &pb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
      }

      i = (int32_T)(((-1.0 - (real_T)Hinv->size[1]) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2012b(Hinv->size[1], -1.0, 1.0, mxDOUBLE_CLASS, i,
        &h_emlrtRTEI, &st);
      k = 0;
      emxInit_real_T(&st, &a, 2, &me_emlrtRTEI, true);
      emxInit_real_T(&st, &b, 1, &ne_emlrtRTEI, true);
      exitg1 = false;
      while ((!exitg1) && (k <= i - 1)) {
        b_k = n - k;
        if ((b_k < 1) || (b_k > Hinv->size[1])) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &ob_emlrtBCI, &st);
        }

        if (b_k > Hinv->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &ob_emlrtBCI, &st);
        }

        c_sum = Hinv->data[(b_k + Hinv->size[0] * (b_k - 1)) - 1];
        if (c_sum == 0.0) {
          y = NULL;
          m2 = emlrtCreateCharArray(2, iv2);
          emlrtInitCharArrayR2013a(&st, 20, m2, &c_u[0]);
          emlrtAssign(&y, m2);
          b_st.site = &lo_emlrtRSI;
          disp(&b_st, y, &y_emlrtMCI);
          exitg1 = true;
        } else {
          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &mb_emlrtBCI,
              &st);
          }

          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &mb_emlrtBCI,
              &st);
          }

          if (b_k > Hinv->size[1]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &nb_emlrtBCI,
              &st);
          }

          if (b_k > Hinv->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0], &nb_emlrtBCI,
              &st);
          }

          Hinv->data[(b_k + Hinv->size[0] * (b_k - 1)) - 1] = 1.0 / c_sum;
          i1 = (int32_T)(((-1.0 - ((real_T)b_k - 1.0)) + 1.0) / -1.0);
          emlrtForLoopVectorCheckR2012b((real_T)b_k - 1.0, -1.0, 1.0,
            mxDOUBLE_CLASS, i1, &i_emlrtRTEI, &st);
          for (b_i = 0; b_i < i1; b_i++) {
            c_i = b_k - b_i;
            if (c_i > b_k) {
              i2 = -1;
              i3 = -1;
              i4 = -1;
              i5 = -1;
            } else {
              if ((c_i < 1) || (c_i > Hinv->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, Hinv->size[1],
                  &qb_emlrtBCI, &st);
              }

              i2 = c_i - 2;
              if (b_k > Hinv->size[1]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1],
                  &rb_emlrtBCI, &st);
              }

              i3 = b_k - 1;
              if (c_i > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, Hinv->size[0],
                  &sb_emlrtBCI, &st);
              }

              i4 = c_i - 2;
              if (b_k > Hinv->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[0],
                  &tb_emlrtBCI, &st);
              }

              i5 = b_k - 1;
            }

            b_st.site = &wd_emlrtRSI;
            c_loop_ub = c_i - 1;
            if ((c_loop_ub < 1) || (c_loop_ub > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_loop_ub, 1, Hinv->size[0],
                &pb_emlrtBCI, &b_st);
            }

            c_loop_ub = a->size[0] * a->size[1];
            a->size[0] = 1;
            loop_ub = i3 - i2;
            a->size[1] = loop_ub;
            emxEnsureCapacity_real_T(&b_st, a, c_loop_ub, &me_emlrtRTEI);
            for (c_loop_ub = 0; c_loop_ub < loop_ub; c_loop_ub++) {
              a->data[c_loop_ub] = Hinv->data[(c_i + Hinv->size[0] * ((i2 +
                c_loop_ub) + 1)) - 2];
            }

            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &ub_emlrtBCI,
                &b_st);
            }

            b_loop_ub = i5 - i4;
            i5 = b->size[0];
            b->size[0] = b_loop_ub;
            emxEnsureCapacity_real_T(&b_st, b, i5, &ne_emlrtRTEI);
            for (i5 = 0; i5 < b_loop_ub; i5++) {
              b->data[i5] = Hinv->data[((i4 + i5) + Hinv->size[0] * (b_k - 1)) +
                1];
            }

            c_st.site = &nd_emlrtRSI;
            if (loop_ub != b_loop_ub) {
              if ((loop_ub == 1) || (b_loop_ub == 1)) {
                emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI,
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI,
                  "MATLAB:innerdim", "MATLAB:innerdim", 0);
              }
            }

            if ((loop_ub == 1) || (b_loop_ub == 1)) {
              c_sum = 0.0;
              for (i3 = 0; i3 < loop_ub; i3++) {
                c_sum += Hinv->data[(c_i + Hinv->size[0] * ((i2 + i3) + 1)) - 2]
                  * Hinv->data[((i4 + i3) + Hinv->size[0] * (b_k - 1)) + 1];
              }
            } else {
              c_st.site = &md_emlrtRSI;
              if (loop_ub < 1) {
                c_sum = 0.0;
              } else {
                n_t = (ptrdiff_t)(i3 - i2);
                incx_t = (ptrdiff_t)1;
                incy_t = (ptrdiff_t)1;
                c_sum = ddot(&n_t, &a->data[0], &incx_t, &b->data[0], &incy_t);
              }
            }

            if (b_k > Hinv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_k, 1, Hinv->size[1], &kb_emlrtBCI,
                &st);
            }

            i2 = c_i - 1;
            if ((i2 < 1) || (i2 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, Hinv->size[0], &kb_emlrtBCI,
                &st);
            }

            i3 = c_i - 1;
            if ((i3 < 1) || (i3 > Hinv->size[1])) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, Hinv->size[1], &lb_emlrtBCI,
                &st);
            }

            i4 = c_i - 1;
            if ((i4 < 1) || (i4 > Hinv->size[0])) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, Hinv->size[0], &lb_emlrtBCI,
                &st);
            }

            Hinv->data[(i2 + Hinv->size[0] * (b_k - 1)) - 1] = -c_sum /
              Hinv->data[(i4 + Hinv->size[0] * (i3 - 1)) - 1];
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

      emxFree_real_T(&b);
      emxFree_real_T(&a);
    }

    st.site = &tb_emlrtRSI;
    b_st.site = &nd_emlrtRSI;
    if (Hinv->size[1] == 1) {
      i = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = Hinv->size[0];
      emxEnsureCapacity_real_T(&st, Ainv, i, &he_emlrtRTEI);
      loop_ub = Hinv->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = Hinv->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Ainv->data[i + Ainv->size[0] * i1] = 0.0;
          c_loop_ub = Hinv->size[1];
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            Ainv->data[i + Ainv->size[0] * i1] += Hinv->data[i + Hinv->size[0] *
              i2] * Hinv->data[i1 + Hinv->size[0] * i2];
          }
        }
      }
    } else {
      b_st.site = &md_emlrtRSI;
      if ((Hinv->size[0] == 0) || (Hinv->size[1] == 0)) {
        i = Ainv->size[0] * Ainv->size[1];
        Ainv->size[0] = Hinv->size[0];
        Ainv->size[1] = Hinv->size[0];
        emxEnsureCapacity_real_T(&b_st, Ainv, i, &he_emlrtRTEI);
        loop_ub = Hinv->size[0] * Hinv->size[0];
        for (i = 0; i < loop_ub; i++) {
          Ainv->data[i] = 0.0;
        }
      } else {
        c_st.site = &td_emlrtRSI;
        c_st.site = &sd_emlrtRSI;
        TRANSB1 = 'T';
        TRANSA1 = 'N';
        c_sum = 1.0;
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
        emxEnsureCapacity_real_T(&c_st, Ainv, i, &le_emlrtRTEI);
        dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &c_sum, &Hinv->data[0],
              &lda_t, &Hinv->data[0], &ldb_t, &beta1, &Ainv->data[0], &ldc_t);
      }
    }

    i = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[1];
    Hinv->size[1] = Ainv->size[0];
    emxEnsureCapacity_real_T(sp, Hinv, i, &ie_emlrtRTEI);
    loop_ub = Ainv->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = Ainv->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Hinv->data[i1 + Hinv->size[0] * i] = Ainv->data[i + Ainv->size[0] * i1];
      }
    }

    emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])Ainv->size, *(int32_T (*)[2])
      Hinv->size, &m_emlrtECI, sp);
    i = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[0];
    Hinv->size[1] = Ainv->size[1];
    emxEnsureCapacity_real_T(sp, Hinv, i, &je_emlrtRTEI);
    loop_ub = Ainv->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = Ainv->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Hinv->data[i1 + Hinv->size[0] * i] = (Ainv->data[i1 + Ainv->size[0] * i]
          + Ainv->data[i + Ainv->size[0] * i1]) / 2.0;
      }
    }

    i = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = Hinv->size[0];
    Ainv->size[1] = Hinv->size[1];
    emxEnsureCapacity_real_T(sp, Ainv, i, &ke_emlrtRTEI);
    loop_ub = Hinv->size[0] * Hinv->size[1];
    for (i = 0; i < loop_ub; i++) {
      Ainv->data[i] = Hinv->data[i];
    }

    emxFree_real_T(&Hinv);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (invpd.c) */

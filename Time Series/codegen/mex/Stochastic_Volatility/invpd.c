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
#include "Stochastic_Volatility.h"
#include "invpd.h"
#include "Stochastic_Volatility_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "assertValidSizeArg.h"
#include "cholmod.h"
#include "Stochastic_Volatility_mexutil.h"
#include "Stochastic_Volatility_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo sd_emlrtRSI = { 24, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 14, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 23, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 41, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtMCInfo y_emlrtMCI = { 12,  /* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 11, /* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 14,/* lineNo */
  13,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 24,/* lineNo */
  22,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 24,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 26,/* lineNo */
  18,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 23,/* lineNo */
  18,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 23,/* lineNo */
  29,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 26,/* lineNo */
  5,                                   /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 23,/* lineNo */
  10,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  24,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  22,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  35,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  31,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  26,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  22,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  20,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo dm_emlrtRTEI = { 21,/* lineNo */
  12,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pName */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  19,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  17,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo em_emlrtRTEI = { 15,/* lineNo */
  10,                                  /* colNo */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 2,   /* nDims */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "invpd",                             /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pName */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  16,                                  /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  4,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  6,                                   /* colNo */
  "T",                                 /* aName */
  "invuptr",                           /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo dl_emlrtRSI = { 12, /* lineNo */
  "invpd",                             /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invpd.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 11, /* lineNo */
  "invuptr",                           /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon_Origin\\invuptr.m"/* pathName */
};

/* Function Definitions */
void invpd(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *Ainv)
{
  emxArray_real_T *Hinv;
  const mxArray *y;
  real_T alpha1;
  const mxArray *m4;
  static const int32_T iv23[2] = { 1, 23 };

  static const char_T u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'A', ' ', ' ',
    'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T i11;
  int32_T n;
  static const int32_T iv24[2] = { 1, 23 };

  static const char_T b_u[23] = { 'm', 'a', 't', 'r', 'i', 'x', ' ', 'T', ' ',
    ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'q', 'u', 'a', 'r', 'e' };

  int32_T d;
  emxArray_real_T *b;
  emxArray_real_T *a;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  boolean_T exitg1;
  int32_T k;
  int32_T i12;
  static const int32_T iv25[2] = { 1, 20 };

  char_T TRANSA;
  char_T TRANSB;
  real_T beta1;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  ptrdiff_t incy_t;
  int32_T b_Ainv[2];
  int32_T i13;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T i;
  int32_T c_Ainv[2];
  int32_T b_i;
  int32_T i14;
  int32_T i15;
  int32_T i16;
  int32_T i17;
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
    m4 = emlrtCreateCharArray(2, iv23);
    emlrtInitCharArrayR2013a(sp, 23, m4, &u[0]);
    emlrtAssign(&y, m4);
    st.site = &dl_emlrtRSI;
    disp(&st, y, &y_emlrtMCI);
    i11 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
    emxEnsureCapacity_real_T1(sp, Ainv, i11, &re_emlrtRTEI);
  } else {
    emxInit_real_T1(sp, &Hinv, 2, &ye_emlrtRTEI, true);
    st.site = &ud_emlrtRSI;
    cholmod(&st, A, Hinv, &alpha1);
    st.site = &td_emlrtRSI;

    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1];
    if (Hinv->size[0] != Hinv->size[1]) {
      y = NULL;
      m4 = emlrtCreateCharArray(2, iv24);
      emlrtInitCharArrayR2013a(&st, 23, m4, &b_u[0]);
      emlrtAssign(&y, m4);
      b_st.site = &el_emlrtRSI;
      disp(&b_st, y, &bb_emlrtMCI);
    } else {
      b_st.site = &pf_emlrtRSI;
      c_st.site = &rf_emlrtRSI;
      d_st.site = &jf_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      d_st.site = &jf_emlrtRSI;
      assertValidSizeArg(&d_st, Hinv->size[1]);
      d = Hinv->size[1];
      if (d > 0) {
        c_st.site = &if_emlrtRSI;
        if (d > 2147483646) {
          d_st.site = &sb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
      }

      i11 = (int32_T)((1.0 + (-1.0 - (real_T)Hinv->size[1])) / -1.0);
      emlrtForLoopVectorCheckR2012b(Hinv->size[1], -1.0, 1.0, mxDOUBLE_CLASS,
        i11, &em_emlrtRTEI, &st);
      d = 0;
      emxInit_real_T1(&st, &a, 2, &ve_emlrtRTEI, true);
      emxInit_real_T(&st, &b_b, 1, &we_emlrtRTEI, true);
      exitg1 = false;
      while ((!exitg1) && (d <= i11 - 1)) {
        k = n - d;
        i12 = Hinv->size[0];
        if (!((k >= 1) && (k <= i12))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i12, &qb_emlrtBCI, &st);
        }

        i12 = Hinv->size[1];
        if (!((k >= 1) && (k <= i12))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i12, &qb_emlrtBCI, &st);
        }

        if (Hinv->data[(k + Hinv->size[0] * (k - 1)) - 1] == 0.0) {
          y = NULL;
          m4 = emlrtCreateCharArray(2, iv25);
          emlrtInitCharArrayR2013a(&st, 20, m4, &cv0[0]);
          emlrtAssign(&y, m4);
          b_st.site = &cl_emlrtRSI;
          disp(&b_st, y, &cb_emlrtMCI);
          exitg1 = true;
        } else {
          i12 = Hinv->size[0];
          if (!((k >= 1) && (k <= i12))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i12, &pb_emlrtBCI, &st);
          }

          i12 = Hinv->size[1];
          if (!((k >= 1) && (k <= i12))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i12, &ob_emlrtBCI, &st);
          }

          i12 = Hinv->size[0];
          if (!((k >= 1) && (k <= i12))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i12, &rb_emlrtBCI, &st);
          }

          i12 = Hinv->size[1];
          if (!((k >= 1) && (k <= i12))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i12, &rb_emlrtBCI, &st);
          }

          Hinv->data[(k + Hinv->size[0] * (k - 1)) - 1] = 1.0 / Hinv->data[(k +
            Hinv->size[0] * (k - 1)) - 1];
          i12 = (int32_T)((1.0 + (-1.0 - ((real_T)k - 1.0))) / -1.0);
          emlrtForLoopVectorCheckR2012b((real_T)k - 1.0, -1.0, 1.0,
            mxDOUBLE_CLASS, i12, &dm_emlrtRTEI, &st);
          i = 0;
          while (i <= i12 - 1) {
            b_i = k - i;
            if (b_i > k) {
              i13 = 0;
              i14 = 0;
              i15 = 0;
              i16 = 0;
            } else {
              i13 = Hinv->size[1];
              if (!((b_i >= 1) && (b_i <= i13))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, i13, &mb_emlrtBCI, &st);
              }

              i13 = b_i - 1;
              i14 = Hinv->size[1];
              if (!((k >= 1) && (k <= i14))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i14, &lb_emlrtBCI, &st);
              }

              i14 = k;
              i15 = Hinv->size[0];
              if (!((b_i >= 1) && (b_i <= i15))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, i15, &kb_emlrtBCI, &st);
              }

              i15 = b_i - 1;
              i16 = Hinv->size[0];
              if (!((k >= 1) && (k <= i16))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i16, &jb_emlrtBCI, &st);
              }

              i16 = k;
            }

            b_st.site = &qf_emlrtRSI;
            i17 = Hinv->size[0];
            c_i = b_i - 1;
            if (!((c_i >= 1) && (c_i <= i17))) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, i17, &nb_emlrtBCI, &b_st);
            }

            i17 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = i14 - i13;
            emxEnsureCapacity_real_T1(&b_st, a, i17, &ve_emlrtRTEI);
            loop_ub = i14 - i13;
            for (i17 = 0; i17 < loop_ub; i17++) {
              a->data[a->size[0] * i17] = Hinv->data[(c_i + Hinv->size[0] * (i13
                + i17)) - 1];
            }

            i17 = Hinv->size[1];
            if (!((k >= 1) && (k <= i17))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i17, &ib_emlrtBCI, &b_st);
            }

            i17 = b_b->size[0];
            b_b->size[0] = i16 - i15;
            emxEnsureCapacity_real_T(&b_st, b_b, i17, &we_emlrtRTEI);
            loop_ub = i16 - i15;
            for (i17 = 0; i17 < loop_ub; i17++) {
              b_b->data[i17] = Hinv->data[(i15 + i17) + Hinv->size[0] * (k - 1)];
            }

            c_st.site = &ec_emlrtRSI;
            if (!(i14 - i13 == i16 - i15)) {
              if ((i14 - i13 == 1) || (i16 - i15 == 1)) {
                emlrtErrorWithMessageIdR2018a(&c_st, &ol_emlrtRTEI,
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                  "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &nl_emlrtRTEI,
                  "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
              }
            }

            if ((i14 - i13 == 1) || (i16 - i15 == 1)) {
              alpha1 = 0.0;
              for (i13 = 0; i13 < a->size[1]; i13++) {
                alpha1 += a->data[a->size[0] * i13] * b_b->data[i13];
              }
            } else {
              c_st.site = &dc_emlrtRSI;
              if (i14 - i13 < 1) {
                alpha1 = 0.0;
              } else {
                n_t = (ptrdiff_t)(i14 - i13);
                incx_t = (ptrdiff_t)1;
                incy_t = (ptrdiff_t)1;
                alpha1 = ddot(&n_t, &a->data[0], &incx_t, &b_b->data[0], &incy_t);
              }
            }

            i13 = Hinv->size[0];
            i14 = b_i - 1;
            if (!((i14 >= 1) && (i14 <= i13))) {
              emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &hb_emlrtBCI, &st);
            }

            i13 = Hinv->size[1];
            i14 = b_i - 1;
            if (!((i14 >= 1) && (i14 <= i13))) {
              emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &gb_emlrtBCI, &st);
            }

            i13 = Hinv->size[0];
            i14 = b_i - 1;
            if (!((i14 >= 1) && (i14 <= i13))) {
              emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &sb_emlrtBCI, &st);
            }

            i13 = Hinv->size[1];
            if (!((k >= 1) && (k <= i13))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i13, &sb_emlrtBCI, &st);
            }

            Hinv->data[(i14 + Hinv->size[0] * (k - 1)) - 1] = -alpha1 /
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

    emxInit_real_T1(&st, &b, 2, &se_emlrtRTEI, true);
    st.site = &sd_emlrtRSI;
    i11 = b->size[0] * b->size[1];
    b->size[0] = Hinv->size[1];
    b->size[1] = Hinv->size[0];
    emxEnsureCapacity_real_T1(&st, b, i11, &se_emlrtRTEI);
    loop_ub = Hinv->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      d = Hinv->size[1];
      for (i12 = 0; i12 < d; i12++) {
        b->data[i12 + b->size[0] * i11] = Hinv->data[i11 + Hinv->size[0] * i12];
      }
    }

    b_st.site = &ec_emlrtRSI;
    if (!(Hinv->size[1] == b->size[0])) {
      if (((Hinv->size[0] == 1) && (Hinv->size[1] == 1)) || ((b->size[0] == 1) &&
           (b->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &ol_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &nl_emlrtRTEI,
          "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
      }
    }

    if ((Hinv->size[1] == 1) || (b->size[0] == 1)) {
      i11 = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&st, Ainv, i11, &te_emlrtRTEI);
      loop_ub = Hinv->size[0];
      for (i11 = 0; i11 < loop_ub; i11++) {
        d = b->size[1];
        for (i12 = 0; i12 < d; i12++) {
          Ainv->data[i11 + Ainv->size[0] * i12] = 0.0;
          k = Hinv->size[1];
          for (i13 = 0; i13 < k; i13++) {
            Ainv->data[i11 + Ainv->size[0] * i12] += Hinv->data[i11 + Hinv->
              size[0] * i13] * b->data[i13 + b->size[0] * i12];
          }
        }
      }
    } else {
      b_st.site = &dc_emlrtRSI;
      if ((Hinv->size[0] == 0) || (Hinv->size[1] == 0) || (b->size[0] == 0) ||
          (b->size[1] == 0)) {
        i11 = Ainv->size[0] * Ainv->size[1];
        Ainv->size[0] = Hinv->size[0];
        Ainv->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&b_st, Ainv, i11, &te_emlrtRTEI);
        loop_ub = Hinv->size[0] * b->size[1];
        for (i11 = 0; i11 < loop_ub; i11++) {
          Ainv->data[i11] = 0.0;
        }
      } else {
        c_st.site = &fc_emlrtRSI;
        c_st.site = &gc_emlrtRSI;
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
        i11 = Ainv->size[0] * Ainv->size[1];
        Ainv->size[0] = Hinv->size[0];
        Ainv->size[1] = b->size[1];
        emxEnsureCapacity_real_T1(&c_st, Ainv, i11, &e_emlrtRTEI);
        dgemm(&TRANSA, &TRANSB, &incx_t, &n_t, &incy_t, &alpha1, &Hinv->data[0],
              &lda_t, &b->data[0], &ldb_t, &beta1, &Ainv->data[0], &ldc_t);
      }
    }

    emxFree_real_T(&b);
    for (i11 = 0; i11 < 2; i11++) {
      b_Ainv[i11] = Ainv->size[i11];
    }

    i11 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[1];
    Hinv->size[1] = Ainv->size[0];
    emxEnsureCapacity_real_T1(sp, Hinv, i11, &ue_emlrtRTEI);
    loop_ub = Ainv->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      d = Ainv->size[1];
      for (i12 = 0; i12 < d; i12++) {
        Hinv->data[i12 + Hinv->size[0] * i11] = Ainv->data[i11 + Ainv->size[0] *
          i12];
      }
    }

    for (i11 = 0; i11 < 2; i11++) {
      c_Ainv[i11] = Hinv->size[i11];
    }

    if ((b_Ainv[0] != c_Ainv[0]) || (b_Ainv[1] != c_Ainv[1])) {
      emlrtSizeEqCheckNDR2012b(&b_Ainv[0], &c_Ainv[0], &t_emlrtECI, sp);
    }

    i11 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[0];
    Hinv->size[1] = Ainv->size[1];
    emxEnsureCapacity_real_T1(sp, Hinv, i11, &hc_emlrtRTEI);
    loop_ub = Ainv->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      d = Ainv->size[0];
      for (i12 = 0; i12 < d; i12++) {
        Hinv->data[i12 + Hinv->size[0] * i11] = (Ainv->data[i12 + Ainv->size[0] *
          i11] + Ainv->data[i11 + Ainv->size[0] * i12]) / 2.0;
      }
    }

    i11 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = Hinv->size[0];
    Ainv->size[1] = Hinv->size[1];
    emxEnsureCapacity_real_T1(sp, Ainv, i11, &xe_emlrtRTEI);
    loop_ub = Hinv->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      d = Hinv->size[0];
      for (i12 = 0; i12 < d; i12++) {
        Ainv->data[i12 + Ainv->size[0] * i11] = Hinv->data[i12 + Hinv->size[0] *
          i11];
      }
    }

    emxFree_real_T(&Hinv);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (invpd.c) */

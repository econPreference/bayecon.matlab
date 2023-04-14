/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inv.c
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include "inv.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "Unit_Root_mexutil.h"
#include "blas.h"
#include "eml_int_forloop_overflow_check.h"
#include "mwmathutil.h"
#include "norm.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgetrf.h"

/* Variable Definitions */
static emlrtRSInfo me_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 173,/* lineNo */
  "invNxN",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 174,/* lineNo */
  "invNxN",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 177,/* lineNo */
  "invNxN",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 180,/* lineNo */
  "invNxN",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 183,/* lineNo */
  "invNxN",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 190,/* lineNo */
  "invNxN",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 81, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 126,/* lineNo */
  "eml_integer_colon_dispatcher",      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 154,/* lineNo */
  "eml_signed_integer_colon",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 14, /* lineNo */
  "eml_ipiv2perm",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_ipiv2perm.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 42, /* lineNo */
  "checkcond",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 46, /* lineNo */
  "checkcond",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = { 14,/* lineNo */
  15,                                  /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 173,/* lineNo */
  2,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 126,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 174,/* lineNo */
  1,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 173,/* lineNo */
  4,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

/* Function Definitions */
void inv(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T i;
  int32_T n;
  int32_T yk;
  emxArray_real_T *b_x;
  emxArray_int32_T *p;
  emxArray_int32_T *ipiv;
  int32_T b_n;
  int32_T k;
  real_T n1x;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T b_i;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  real_T n1xinv;
  real_T rc;
  const mxArray *b_y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c_y;
  const mxArray *m1;
  char_T str[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (x->size[0] != x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &t_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &fg_emlrtRTEI);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y->data[i] = x->data[i];
    }
  } else {
    st.site = &me_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &gg_emlrtRTEI);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y->data[i] = 0.0;
    }

    emxInit_real_T(&st, &b_x, 2, &hg_emlrtRTEI, true);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i, &hg_emlrtRTEI);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      b_x->data[i] = x->data[i];
    }

    emxInit_int32_T(&st, &p, 2, &jg_emlrtRTEI, true);
    emxInit_int32_T(&st, &ipiv, 2, &kg_emlrtRTEI, true);
    b_st.site = &oe_emlrtRSI;
    xgetrf(&b_st, x->size[0], x->size[0], b_x, x->size[0], ipiv);
    b_st.site = &pe_emlrtRSI;
    c_st.site = &jf_emlrtRSI;
    d_st.site = &rd_emlrtRSI;
    e_st.site = &gf_emlrtRSI;
    f_st.site = &hf_emlrtRSI;
    b_n = x->size[0];
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = x->size[0];
    emxEnsureCapacity_int32_T(&f_st, p, i, &ig_emlrtRTEI);
    p->data[0] = 1;
    yk = 1;
    g_st.site = &if_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      h_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }

    for (k = 2; k <= b_n; k++) {
      yk++;
      p->data[k - 1] = yk;
    }

    i = ipiv->size[1];
    for (k = 0; k < i; k++) {
      yk = ipiv->data[k];
      if (yk > k + 1) {
        b_n = p->data[yk - 1];
        p->data[yk - 1] = p->data[k];
        p->data[k] = b_n;
      }
    }

    emxFree_int32_T(&ipiv);
    b_st.site = &qe_emlrtRSI;
    if (x->size[0] > 2147483646) {
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k < n; k++) {
      i = p->data[k];
      y->data[k + y->size[0] * (i - 1)] = 1.0;
      b_st.site = &re_emlrtRSI;
      if ((k + 1 <= n) && (n > 2147483646)) {
        c_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (yk = k + 1; yk <= n; yk++) {
        if (y->data[(yk + y->size[0] * (i - 1)) - 1] != 0.0) {
          b_n = yk + 1;
          b_st.site = &se_emlrtRSI;
          for (b_i = b_n; b_i <= n; b_i++) {
            y->data[(b_i + y->size[0] * (i - 1)) - 1] -= y->data[(yk + y->size[0]
              * (i - 1)) - 1] * b_x->data[(b_i + b_x->size[0] * (yk - 1)) - 1];
          }
        }
      }
    }

    emxFree_int32_T(&p);
    b_st.site = &te_emlrtRSI;
    c_st.site = &lf_emlrtRSI;
    c_st.site = &kf_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &n1x, &b_x->data[0],
          &lda_t, &y->data[0], &ldb_t);
    st.site = &ne_emlrtRSI;
    n1x = b_norm(x);
    n1xinv = b_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    emxFree_real_T(&b_x);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &mf_emlrtRSI;
      warning(&b_st);
    } else {
      if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
        b_st.site = &nf_emlrtRSI;
        b_y = NULL;
        m = emlrtCreateCharArray(2, iv);
        emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
        emlrtAssign(&b_y, m);
        c_y = NULL;
        m1 = emlrtCreateDoubleScalar(rc);
        emlrtAssign(&c_y, m1);
        c_st.site = &yo_emlrtRSI;
        emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &cb_emlrtMCI),
                         "<output of sprintf>", str);
        b_st.site = &nf_emlrtRSI;
        b_warning(&b_st, str);
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (inv.c) */

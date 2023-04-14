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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "inv.h"
#include "warning.h"
#include "Stochastic_Volatility_emxutil.h"
#include "norm.h"
#include "eml_int_forloop_overflow_check.h"
#include "xgetrf.h"
#include "Stochastic_Volatility_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo v_emlrtRSI = { 21,  /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 22,  /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 173, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 174, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 177,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 180,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 183,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 190,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 78, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 121,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 149,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 14, /* lineNo */
  "eml_ipiv2perm",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_ipiv2perm.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 76, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 77, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 25, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtMCInfo w_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 170,/* lineNo */
  1,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 173,/* lineNo */
  2,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 121,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 174,/* lineNo */
  1,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 173,/* lineNo */
  4,                                   /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 14,/* lineNo */
  15,                                  /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtRSInfo bm_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);
static void invNxN(const emlrtStack *sp, const emxArray_real_T *x,
                   emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m15;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 2, pArrays, "sprintf", true,
    location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void invNxN(const emlrtStack *sp, const emxArray_real_T *x,
                   emxArray_real_T *y)
{
  int32_T n;
  int32_T c;
  int32_T yk;
  emxArray_real_T *b_x;
  emxArray_int32_T *ipiv;
  int32_T b_n;
  emxArray_int32_T *p;
  int32_T k;
  boolean_T overflow;
  real_T alpha1;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  n = x->size[0];
  c = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T1(sp, y, c, &qc_emlrtRTEI);
  yk = x->size[0] * x->size[1];
  for (c = 0; c < yk; c++) {
    y->data[c] = 0.0;
  }

  emxInit_real_T1(sp, &b_x, 2, &rc_emlrtRTEI, true);
  c = b_x->size[0] * b_x->size[1];
  b_x->size[0] = x->size[0];
  b_x->size[1] = x->size[1];
  emxEnsureCapacity_real_T1(sp, b_x, c, &rc_emlrtRTEI);
  yk = x->size[0] * x->size[1];
  for (c = 0; c < yk; c++) {
    b_x->data[c] = x->data[c];
  }

  emxInit_int32_T1(sp, &ipiv, 2, &uc_emlrtRTEI, true);
  st.site = &x_emlrtRSI;
  xgetrf(&st, x->size[0], x->size[0], b_x, x->size[0], ipiv);
  st.site = &y_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  d_st.site = &ub_emlrtRSI;
  e_st.site = &vb_emlrtRSI;
  if (x->size[0] < 1) {
    b_n = 0;
  } else {
    b_n = x->size[0];
  }

  emxInit_int32_T1(&e_st, &p, 2, &tc_emlrtRTEI, true);
  c = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = b_n;
  emxEnsureCapacity_int32_T1(&e_st, p, c, &sc_emlrtRTEI);
  if (b_n > 0) {
    p->data[0] = 1;
    yk = 1;
    f_st.site = &wb_emlrtRSI;
    if ((!(2 > b_n)) && (b_n > 2147483646)) {
      g_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (k = 2; k <= b_n; k++) {
      yk++;
      p->data[k - 1] = yk;
    }
  }

  for (k = 0; k < ipiv->size[1]; k++) {
    if (ipiv->data[k] > 1 + k) {
      yk = p->data[ipiv->data[k] - 1];
      p->data[ipiv->data[k] - 1] = p->data[k];
      p->data[k] = yk;
    }
  }

  emxFree_int32_T(&ipiv);
  st.site = &ab_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &sb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k < n; k++) {
    c = p->data[k] - 1;
    y->data[k + y->size[0] * (p->data[k] - 1)] = 1.0;
    st.site = &bb_emlrtRSI;
    if ((!(k + 1 > n)) && (n > 2147483646)) {
      b_st.site = &sb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (yk = k; yk < n; yk++) {
      if (y->data[yk + y->size[0] * c] != 0.0) {
        st.site = &cb_emlrtRSI;
        if ((!(yk + 2 > n)) && (n > 2147483646)) {
          b_st.site = &sb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (b_n = yk + 1; b_n < n; b_n++) {
          y->data[b_n + y->size[0] * c] -= y->data[yk + y->size[0] * c] *
            b_x->data[b_n + b_x->size[0] * yk];
        }
      }
    }
  }

  emxFree_int32_T(&p);
  st.site = &db_emlrtRSI;
  if (!(x->size[0] < 1)) {
    b_st.site = &yb_emlrtRSI;
    b_st.site = &ac_emlrtRSI;
    alpha1 = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    m_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &alpha1, &b_x->data[0],
          &lda_t, &y->data[0], &ldb_t);
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

real_T b_inv(const emlrtStack *sp, real_T x)
{
  real_T y;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  const mxArray *b_y;
  const mxArray *m9;
  static const int32_T iv37[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c_y;
  char_T cv3[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 1.0 / x;
  st.site = &vj_emlrtRSI;
  n1x = muDoubleScalarAbs(x);
  n1xinv = muDoubleScalarAbs(y);
  rc = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
    b_st.site = &bc_emlrtRSI;
    warning(&b_st);
  } else {
    if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      b_st.site = &cc_emlrtRSI;
      b_y = NULL;
      m9 = emlrtCreateCharArray(2, iv37);
      emlrtInitCharArrayR2013a(&b_st, 6, m9, &rfmt[0]);
      emlrtAssign(&b_y, m9);
      c_y = NULL;
      m9 = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&c_y, m9);
      c_st.site = &bm_emlrtRSI;
      emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &w_emlrtMCI), "sprintf",
                       cv3);
      b_st.site = &cc_emlrtRSI;
      b_warning(&b_st, cv3);
    }
  }

  return y;
}

void inv(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T b0;
  int32_T i2;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv15[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c_y;
  char_T cv2[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b0 = (x->size[0] == x->size[1]);
  if (!b0) {
    emlrtErrorWithMessageIdR2018a(sp, &tl_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i2 = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T1(sp, y, i2, &pc_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      y->data[i2] = x->data[i2];
    }
  } else {
    st.site = &v_emlrtRSI;
    invNxN(&st, x, y);
    st.site = &w_emlrtRSI;
    n1x = norm(x);
    n1xinv = norm(y);
    rc = 1.0 / (n1x * n1xinv);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &bc_emlrtRSI;
      warning(&b_st);
    } else {
      if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
        b_st.site = &cc_emlrtRSI;
        b_y = NULL;
        m1 = emlrtCreateCharArray(2, iv15);
        emlrtInitCharArrayR2013a(&b_st, 6, m1, &rfmt[0]);
        emlrtAssign(&b_y, m1);
        c_y = NULL;
        m1 = emlrtCreateDoubleScalar(rc);
        emlrtAssign(&c_y, m1);
        c_st.site = &bm_emlrtRSI;
        emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &w_emlrtMCI),
                         "sprintf", cv2);
        b_st.site = &cc_emlrtRSI;
        b_warning(&b_st, cv2);
      }
    }
  }
}

/* End of code generation (inv.c) */

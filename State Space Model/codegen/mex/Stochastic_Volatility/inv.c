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
#include "Stochastic_Volatility_data.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_mexutil.h"
#include "Stochastic_Volatility_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgetrf.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = {
    21,    /* lineNo */
    "inv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo v_emlrtRSI = {
    22,    /* lineNo */
    "inv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo w_emlrtRSI = {
    173,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo x_emlrtRSI = {
    174,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo y_emlrtRSI = {
    177,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo ab_emlrtRSI = {
    180,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo bb_emlrtRSI = {
    183,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo cb_emlrtRSI = {
    190,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo ib_emlrtRSI = {
    82,      /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo jb_emlrtRSI = {
    140,                            /* lineNo */
    "eml_integer_colon_dispatcher", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo kb_emlrtRSI = {
    168,                        /* lineNo */
    "eml_signed_integer_colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo mb_emlrtRSI = {
    14,              /* lineNo */
    "eml_ipiv2perm", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eml_ipiv2perm.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    81,           /* lineNo */
    "xtrsm_blas", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsm.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    42,          /* lineNo */
    "checkcond", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo qb_emlrtRSI = {
    46,          /* lineNo */
    "checkcond", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo ti_emlrtRSI = {
    25,    /* lineNo */
    "inv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRTEInfo c_emlrtRTEI = {
    14,    /* lineNo */
    15,    /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    19,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    21,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    173,   /* lineNo */
    2,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    164,     /* lineNo */
    20,      /* colNo */
    "colon", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    174,   /* lineNo */
    1,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    1,     /* lineNo */
    14,    /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

/* Function Definitions */
real_T b_inv(const emlrtStack *sp, real_T x)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  real_T y;
  char_T str[14];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 1.0 / x;
  st.site = &ti_emlrtRSI;
  n1x = muDoubleScalarAbs(x);
  n1xinv = muDoubleScalarAbs(y);
  rc = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
    b_st.site = &pb_emlrtRSI;
    warning(&b_st);
  } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
    b_st.site = &qb_emlrtRSI;
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateDoubleScalar(rc);
    emlrtAssign(&c_y, m);
    c_st.site = &wl_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &p_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &qb_emlrtRSI;
    b_warning(&b_st, str);
  }
  return y;
}

void inv(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_int32_T *p;
  emxArray_real_T *b_x;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const real_T *x_data;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  real_T *b_x_data;
  real_T *y_data;
  int32_T b_i;
  int32_T b_n;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T yk;
  int32_T *ipiv_data;
  int32_T *p_data;
  char_T str[14];
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] != x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &c_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &uc_emlrtRTEI);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = x_data[i];
    }
  } else {
    st.site = &u_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &vc_emlrtRTEI);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = 0.0;
    }
    emxInit_real_T(&st, &b_x, 2, &ad_emlrtRTEI);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i, &wc_emlrtRTEI);
    b_x_data = b_x->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      b_x_data[i] = x_data[i];
    }
    emxInit_int32_T(&st, &p, 2, &yc_emlrtRTEI);
    emxInit_int32_T(&st, &ipiv, 2, &ad_emlrtRTEI);
    b_st.site = &w_emlrtRSI;
    xgetrf(&b_st, x->size[0], x->size[0], b_x, x->size[0], ipiv);
    ipiv_data = ipiv->data;
    b_x_data = b_x->data;
    b_st.site = &x_emlrtRSI;
    c_st.site = &mb_emlrtRSI;
    d_st.site = &hb_emlrtRSI;
    e_st.site = &ib_emlrtRSI;
    f_st.site = &jb_emlrtRSI;
    b_n = x->size[0];
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = x->size[0];
    emxEnsureCapacity_int32_T(&f_st, p, i, &xc_emlrtRTEI);
    p_data = p->data;
    p_data[0] = 1;
    yk = 1;
    g_st.site = &kb_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      h_st.site = &lb_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }
    for (k = 2; k <= b_n; k++) {
      yk++;
      p_data[k - 1] = yk;
    }
    i = ipiv->size[1];
    for (k = 0; k < i; k++) {
      yk = ipiv_data[k];
      if (yk > k + 1) {
        b_n = p_data[yk - 1];
        p_data[yk - 1] = p_data[k];
        p_data[k] = b_n;
      }
    }
    emxFree_int32_T(&b_st, &ipiv);
    b_st.site = &y_emlrtRSI;
    for (k = 0; k < n; k++) {
      i = p_data[k];
      y_data[k + y->size[0] * (i - 1)] = 1.0;
      b_st.site = &ab_emlrtRSI;
      if ((k + 1 <= n) && (n > 2147483646)) {
        c_st.site = &lb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (b_n = k + 1; b_n <= n; b_n++) {
        if (y_data[(b_n + y->size[0] * (i - 1)) - 1] != 0.0) {
          yk = b_n + 1;
          b_st.site = &bb_emlrtRSI;
          for (b_i = yk; b_i <= n; b_i++) {
            y_data[(b_i + y->size[0] * (i - 1)) - 1] -=
                y_data[(b_n + y->size[0] * (i - 1)) - 1] *
                b_x_data[(b_i + b_x->size[0] * (b_n - 1)) - 1];
          }
        }
      }
    }
    emxFree_int32_T(&st, &p);
    b_st.site = &cb_emlrtRSI;
    c_st.site = &nb_emlrtRSI;
    d_st.site = &ob_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &n1x, &b_x_data[0],
          &lda_t, &y_data[0], &ldb_t);
    st.site = &v_emlrtRSI;
    n1x = b_norm(x);
    n1xinv = b_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    emxFree_real_T(&st, &b_x);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &pb_emlrtRSI;
      warning(&b_st);
    } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      b_st.site = &qb_emlrtRSI;
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&c_y, m);
      c_st.site = &wl_emlrtRSI;
      emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &p_emlrtMCI),
                       "<output of sprintf>", str);
      b_st.site = &qb_emlrtRSI;
      b_warning(&b_st, str);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (inv.c) */

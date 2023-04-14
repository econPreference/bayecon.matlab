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
#include "Structure_BVAR_data.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_mexutil.h"
#include "Structure_BVAR_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgetrf.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = {
    21,    /* lineNo */
    "inv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo bb_emlrtRSI = {
    22,    /* lineNo */
    "inv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo cb_emlrtRSI = {
    173,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo db_emlrtRSI = {
    174,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo eb_emlrtRSI = {
    177,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo fb_emlrtRSI = {
    180,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo gb_emlrtRSI = {
    183,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo hb_emlrtRSI = {
    190,      /* lineNo */
    "invNxN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo nb_emlrtRSI = {
    82,      /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo ob_emlrtRSI = {
    140,                            /* lineNo */
    "eml_integer_colon_dispatcher", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo pb_emlrtRSI = {
    168,                        /* lineNo */
    "eml_signed_integer_colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo rb_emlrtRSI = {
    14,              /* lineNo */
    "eml_ipiv2perm", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eml_ipiv2perm.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    42,          /* lineNo */
    "checkcond", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo vb_emlrtRSI = {
    46,          /* lineNo */
    "checkcond", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRTEInfo g_emlrtRTEI = {
    14,    /* lineNo */
    15,    /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    19,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    21,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo id_emlrtRTEI = {
    173,   /* lineNo */
    2,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    164,     /* lineNo */
    20,      /* colNo */
    "colon", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    174,   /* lineNo */
    1,     /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    1,     /* lineNo */
    14,    /* colNo */
    "inv", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pName
                                                                           */
};

/* Function Definitions */
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
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &gd_emlrtRTEI);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = x_data[i];
    }
  } else {
    st.site = &ab_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &hd_emlrtRTEI);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = 0.0;
    }
    emxInit_real_T(&st, &b_x, 2, &ld_emlrtRTEI);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i, &id_emlrtRTEI);
    b_x_data = b_x->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      b_x_data[i] = x_data[i];
    }
    emxInit_int32_T(&st, &p, 2, &kd_emlrtRTEI);
    emxInit_int32_T(&st, &ipiv, 2, &ld_emlrtRTEI);
    b_st.site = &cb_emlrtRSI;
    xgetrf(&b_st, x->size[0], x->size[0], b_x, x->size[0], ipiv);
    ipiv_data = ipiv->data;
    b_x_data = b_x->data;
    b_st.site = &db_emlrtRSI;
    c_st.site = &rb_emlrtRSI;
    d_st.site = &mb_emlrtRSI;
    e_st.site = &nb_emlrtRSI;
    f_st.site = &ob_emlrtRSI;
    b_n = x->size[0];
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = x->size[0];
    emxEnsureCapacity_int32_T(&f_st, p, i, &jd_emlrtRTEI);
    p_data = p->data;
    p_data[0] = 1;
    yk = 1;
    g_st.site = &pb_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      h_st.site = &qb_emlrtRSI;
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
    b_st.site = &eb_emlrtRSI;
    for (k = 0; k < n; k++) {
      i = p_data[k];
      y_data[k + y->size[0] * (i - 1)] = 1.0;
      b_st.site = &fb_emlrtRSI;
      if ((k + 1 <= n) && (n > 2147483646)) {
        c_st.site = &qb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (b_n = k + 1; b_n <= n; b_n++) {
        if (y_data[(b_n + y->size[0] * (i - 1)) - 1] != 0.0) {
          yk = b_n + 1;
          b_st.site = &gb_emlrtRSI;
          for (b_i = yk; b_i <= n; b_i++) {
            y_data[(b_i + y->size[0] * (i - 1)) - 1] -=
                y_data[(b_n + y->size[0] * (i - 1)) - 1] *
                b_x_data[(b_i + b_x->size[0] * (b_n - 1)) - 1];
          }
        }
      }
    }
    emxFree_int32_T(&st, &p);
    b_st.site = &hb_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    d_st.site = &tb_emlrtRSI;
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
    st.site = &bb_emlrtRSI;
    n1x = b_norm(x);
    n1xinv = b_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    emxFree_real_T(&st, &b_x);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      if (!emlrtSetWarningFlag(&st)) {
        b_st.site = &ub_emlrtRSI;
        warning(&b_st);
      }
    } else if ((muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) &&
               (!emlrtSetWarningFlag(&st))) {
      b_st.site = &vb_emlrtRSI;
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&c_y, m);
      c_st.site = &ul_emlrtRSI;
      emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &q_emlrtMCI),
                       "<output of sprintf>", str);
      b_st.site = &vb_emlrtRSI;
      b_warning(&b_st, str);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (inv.c) */

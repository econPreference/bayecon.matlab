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
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_mexutil.h"
#include "Common_Factor_Model_types.h"
#include "abs.h"
#include "cholmod.h"
#include "diag.h"
#include "eml_mtimes_helper.h"
#include "error.h"
#include "eye.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo wh_emlrtRSI = {
    22,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    17,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo ni_emlrtRSI = {
    23,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo xi_emlrtRSI = {
    23,                                                       /* lineNo */
    "invpd",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invpd.m" /* pathName */
};

static emlrtRSInfo yi_emlrtRSI = {
    14,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

static emlrtRSInfo aj_emlrtRSI = {
    42,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

static emlrtMCInfo p_emlrtMCI = {
    17,                                                         /* lineNo */
    13,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    21,                                                         /* lineNo */
    12,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtBCInfo wb_emlrtBCI = {
    1,                                                           /* iFirst */
    2,                                                           /* iLast */
    23,                                                          /* lineNo */
    20,                                                          /* colNo */
    "T",                                                         /* aName */
    "invuptr",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtRTEInfo u_emlrtRTEI = {
    15,                                                         /* lineNo */
    10,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = {
    23,                                                         /* lineNo */
    18,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = {
    23,                                                         /* lineNo */
    29,                                                         /* colNo */
    "invuptr",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pName */
};

static const char_T cv1[20] = {'m', 'a', 't', 'r', 'i', 'x', ' ',
                               'T', ' ', 'i', 's', ' ', 's', 'i',
                               'n', 'g', 'u', 'l', 'a', 'r'};

static emlrtRSInfo cl_emlrtRSI = {
    17,                                                         /* lineNo */
    "invuptr",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/invuptr.m" /* pathName */
};

/* Function Declarations */
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[20]);

/* Function Definitions */
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[20])
{
  static const int32_T iv[2] = {1, 20};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 20, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void b_invpd(const emlrtStack *sp, real_T A, real_T Ainv_data[],
             int32_T Ainv_size[2])
{
  static const int32_T iv[2] = {1, 18};
  static const int32_T iv1[2] = {1, 20};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T Hinv;
  real_T L;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky
   * factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error)  */
  st.site = &xh_emlrtRSI;
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
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  b_st.site = &yh_emlrtRSI;
  Hinv = g_sumColumnB(muDoubleScalarAbs(A - A));
  b_st.site = &yh_emlrtRSI;
  Hinv = g_sumColumnB(Hinv);
  if (Hinv > 0.0) {
    b_st.site = &ai_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 18, m, &cv[0]);
    emlrtAssign(&y, m);
    c_st.site = &il_emlrtRSI;
    c_error(&c_st, y, &o_emlrtMCI);
  }
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  /*  max diagonal entry */
  /*  max off-diagonal entry */
  L = muDoubleScalarAbs(A);
  Hinv = L + muDoubleScalarAbs(A - A);
  if ((Hinv < 1.0) || muDoubleScalarIsNaN(Hinv)) {
    Hinv = 1.0;
  }
  b_st.site = &bi_emlrtRSI;
  /*  initialize d and L */
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  /*  column index: all columns to left of diagonal */
  /*  d(K) doesn't work in case K is empty */
  /*  C(j,j) in book */
  Hinv *= 2.2204460492503131E-16;
  if ((L < Hinv) || (muDoubleScalarIsNaN(L) && (!muDoubleScalarIsNaN(Hinv)))) {
    L = Hinv;
  }
  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  b_st.site = &hi_emlrtRSI;
  Hinv = muDoubleScalarSqrt(L);
  /*  L = L*diag(sqrt(d)) bad in sparse case */
  st.site = &wh_emlrtRSI;
  /* INVUPTR Inverse of an upper triangular matrix  */
  /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
  /* matrix T.  The output matrix T contains the inverse of T.  */
  /* This program implements Algorithm 4.2.2 of the book. */
  /* Input  : Matrix T  */
  /* output : Matrix T */
  if (Hinv == 0.0) {
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 20, m, &cv1[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &cl_emlrtRSI;
    disp(&b_st, b_y, &p_emlrtMCI);
  } else {
    Hinv = 1.0 / Hinv;
  }
  Ainv_size[0] = 1;
  Ainv_size[1] = 1;
  Hinv *= Hinv;
  Ainv_data[0] = (Hinv + Hinv) / 2.0;
}

void c_invpd(const emlrtStack *sp, const real_T A_data[],
             const int32_T A_size[2], real_T Ainv_data[], int32_T Ainv_size[2])
{
  static const int32_T iv[2] = {1, 18};
  static const int32_T iv1[2] = {1, 20};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T b_A_data;
  emxArray_real_T b_diagA_data;
  emxArray_real_T *b;
  emxArray_real_T *r;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T varargin_1_data[4];
  real_T varargin_1[3];
  real_T maxval_data[2];
  real_T L_data;
  real_T b_gamma;
  real_T delta;
  real_T diagA_data;
  real_T xi;
  real_T *b_data;
  int32_T L_size[2];
  int32_T b_A_size[2];
  int32_T tmp_size[2];
  int32_T varargin_1_size[2];
  int32_T b_m;
  int32_T diagA_size;
  int32_T i;
  int32_T j;
  int32_T maxval_data_tmp;
  int32_T n;
  boolean_T exitg1;
  boolean_T p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky
   * factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error)  */
  st.site = &xh_emlrtRSI;
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
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  L_size[0] = 1;
  L_size[1] = 1;
  L_data = A_data[0] - A_data[0];
  b_st.site = &yh_emlrtRSI;
  c_abs((real_T *)&L_data, L_size, varargin_1_data, varargin_1_size);
  b_st.site = &yh_emlrtRSI;
  c_sum(&b_st, varargin_1_data, varargin_1_size, maxval_data, L_size);
  b_st.site = &yh_emlrtRSI;
  if (d_sum(&b_st, maxval_data, L_size) > 0.0) {
    b_st.site = &ai_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 18, m, &cv[0]);
    emlrtAssign(&y, m);
    c_st.site = &il_emlrtRSI;
    c_error(&c_st, y, &o_emlrtMCI);
  }
  emxInit_real_T(&st, &b, 1, &jg_emlrtRTEI);
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  b_A_data.data = (real_T *)&A_data[0];
  b_A_data.size = (int32_T *)&A_size[0];
  b_A_data.allocatedSize = -1;
  b_A_data.numDimensions = 2;
  b_A_data.canFreeData = false;
  b_st.site = &oi_emlrtRSI;
  c_diag(&b_st, &b_A_data, b);
  b_data = b->data;
  diagA_size = b->size[0];
  b_m = b->size[0];
  for (n = 0; n < b_m; n++) {
    diagA_data = b_data[n];
  }
  b_st.site = &pi_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  b_abs((real_T *)&diagA_data, diagA_size, maxval_data, &b_m);
  c_st.site = &ki_emlrtRSI;
  d_st.site = &li_emlrtRSI;
  e_st.site = &mi_emlrtRSI;
  if (b_m < 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &q_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  if (b_m == 1) {
    b_gamma = maxval_data[0];
  } else if ((maxval_data[0] < maxval_data[1]) ||
             (muDoubleScalarIsNaN(maxval_data[0]) &&
              (!muDoubleScalarIsNaN(maxval_data[1])))) {
    b_gamma = maxval_data[1];
  } else {
    b_gamma = maxval_data[0];
  }
  emxInit_real_T(&e_st, &r, 2, &mg_emlrtRTEI);
  /*  max diagonal entry */
  b_diagA_data.data = &diagA_data;
  b_diagA_data.size = &diagA_size;
  b_diagA_data.allocatedSize = 1;
  b_diagA_data.numDimensions = 1;
  b_diagA_data.canFreeData = false;
  b_st.site = &qi_emlrtRSI;
  b_diag(&b_st, &b_diagA_data, r);
  b_data = r->data;
  tmp_size[0] = r->size[0];
  tmp_size[1] = r->size[1];
  b_m = r->size[0] * r->size[1];
  for (n = 0; n < b_m; n++) {
    L_data = b_data[n];
  }
  b_st.site = &qi_emlrtRSI;
  if ((1 == tmp_size[0]) && (1 == tmp_size[1])) {
    b_A_size[0] = 1;
    b_A_size[1] = 1;
    L_data = A_data[0] - L_data;
    c_st.site = &qi_emlrtRSI;
    c_abs((real_T *)&L_data, b_A_size, varargin_1_data, varargin_1_size);
  } else {
    c_st.site = &qi_emlrtRSI;
    e_binary_expand_op(varargin_1_data, varargin_1_size, qi_emlrtRSI, A_data,
                       (real_T *)&L_data, tmp_size);
  }
  c_st.site = &ki_emlrtRSI;
  d_st.site = &li_emlrtRSI;
  e_st.site = &mi_emlrtRSI;
  if (((varargin_1_size[0] != 1) || (varargin_1_size[1] != 1)) &&
      (varargin_1_size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&e_st, &p_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if (varargin_1_size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &q_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  b_m = varargin_1_size[0];
  n = varargin_1_size[1];
  if (varargin_1_size[1] >= 1) {
    for (j = 0; j < n; j++) {
      maxval_data_tmp = varargin_1_size[0] * j;
      maxval_data[j] = varargin_1_data[maxval_data_tmp];
      for (i = 2; i <= b_m; i++) {
        L_data = maxval_data[j];
        xi = varargin_1_data[maxval_data_tmp + 1];
        if (muDoubleScalarIsNaN(xi)) {
          p = false;
        } else if (muDoubleScalarIsNaN(L_data)) {
          p = true;
        } else {
          p = (L_data < xi);
        }
        if (p) {
          maxval_data[j] = xi;
        }
      }
    }
  }
  b_st.site = &qi_emlrtRSI;
  c_st.site = &ki_emlrtRSI;
  d_st.site = &li_emlrtRSI;
  e_st.site = &mi_emlrtRSI;
  if (varargin_1_size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &q_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  if (varargin_1_size[1] == 1) {
    xi = maxval_data[0];
  } else if ((maxval_data[0] < maxval_data[1]) ||
             (muDoubleScalarIsNaN(maxval_data[0]) &&
              (!muDoubleScalarIsNaN(maxval_data[1])))) {
    xi = maxval_data[1];
  } else {
    xi = maxval_data[0];
  }
  /*  max off-diagonal entry */
  L_data = b_gamma + xi;
  if ((L_data < 1.0) || muDoubleScalarIsNaN(L_data)) {
    L_data = 1.0;
  }
  delta = 2.2204460492503131E-16 * L_data;
  varargin_1[0] = b_gamma;
  varargin_1[1] = xi;
  varargin_1[2] = 2.2204460492503131E-16;
  if (!muDoubleScalarIsNaN(b_gamma)) {
    b_m = 1;
  } else {
    b_m = 0;
    maxval_data_tmp = 2;
    exitg1 = false;
    while ((!exitg1) && (maxval_data_tmp < 4)) {
      if (!muDoubleScalarIsNaN(varargin_1[maxval_data_tmp - 1])) {
        b_m = maxval_data_tmp;
        exitg1 = true;
      } else {
        maxval_data_tmp++;
      }
    }
  }
  if (b_m != 0) {
    b_gamma = varargin_1[b_m - 1];
    n = b_m + 1;
    for (maxval_data_tmp = n; maxval_data_tmp < 4; maxval_data_tmp++) {
      L_data = varargin_1[maxval_data_tmp - 1];
      if (b_gamma < L_data) {
        b_gamma = L_data;
      }
    }
  }
  b_st.site = &bi_emlrtRSI;
  if (b_gamma < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  /*  initialize d and L */
  b_st.site = &ri_emlrtRSI;
  eye(&b_st, 1.0, r);
  b_data = r->data;
  b_m = r->size[0] * r->size[1];
  for (n = 0; n < b_m; n++) {
    L_data = b_data[n];
  }
  emxFree_real_T(&st, &r);
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  xi = muDoubleScalarAbs(A_data[0]);
  if ((xi < delta) ||
      (muDoubleScalarIsNaN(xi) && (!muDoubleScalarIsNaN(delta)))) {
    xi = delta;
  }
  /*  column index: all columns to left of diagonal */
  /*  d(K) doesn't work in case K is empty */
  b_st.site = &ci_emlrtRSI;
  c_st.site = &ef_emlrtRSI;
  /*  C(j,j) in book */
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }
  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  n = b->size[0];
  b->size[0] = 1;
  emxEnsureCapacity_real_T(&st, b, n, &gg_emlrtRTEI);
  b_data = b->data;
  n = 1;
  b_st.site = &hi_emlrtRSI;
  b_data[0] = L_data * muDoubleScalarSqrt(xi);
  emlrtSubAssignSizeCheckR2012b(&n, 1, &b->size[0], 1, &r_emlrtECI, &st);
  L_data = b_data[0];
  /*  L = L*diag(sqrt(d)) bad in sparse case */
  emxFree_real_T(&st, &b);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }
  st.site = &wh_emlrtRSI;
  /* INVUPTR Inverse of an upper triangular matrix  */
  /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
  /* matrix T.  The output matrix T contains the inverse of T.  */
  /* This program implements Algorithm 4.2.2 of the book. */
  /* Input  : Matrix T  */
  /* output : Matrix T */
  b_st.site = &yi_emlrtRSI;
  c_st.site = &aj_emlrtRSI;
  d_st.site = &ke_emlrtRSI;
  d_st.site = &ke_emlrtRSI;
  c_st.site = &je_emlrtRSI;
  emlrtForLoopVectorCheckR2021a(1.0, -1.0, 1.0, mxDOUBLE_CLASS, 1, &u_emlrtRTEI,
                                &st);
  if (L_data == 0.0) {
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 20, m, &cv1[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &cl_emlrtRSI;
    disp(&b_st, b_y, &p_emlrtMCI);
  } else {
    L_data = 1.0 / L_data;
    emlrtForLoopVectorCheckR2021a(0.0, -1.0, 1.0, mxDOUBLE_CLASS, 0,
                                  &r_emlrtRTEI, &st);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &xi_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  j_mtimes((real_T *)&L_data, (real_T *)&L_data, Ainv_data, Ainv_size);
  L_data = (Ainv_data[0] + Ainv_data[0]) / 2.0;
  Ainv_size[0] = 1;
  Ainv_size[1] = 1;
  Ainv_data[0] = L_data;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void invpd(const emlrtStack *sp, const real_T A[4], real_T Ainv_data[],
           int32_T Ainv_size[2])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T b_Hinv_data;
  emxArray_real_T b_varargin_1_data;
  emxArray_real_T *a;
  emxArray_real_T *b;
  real_T Hinv[4];
  real_T L[4];
  real_T varargin_1[3];
  real_T Hinv_data[2];
  real_T diagA[2];
  real_T dv[2];
  real_T varargin_1_data[2];
  real_T Ccol_data;
  real_T b_gamma;
  real_T delta;
  real_T djtemp;
  real_T theta;
  real_T xi;
  real_T *a_data;
  real_T *b_data;
  int32_T Hinv_size[2];
  int32_T a_size[2];
  int32_T K_size_idx_1;
  int32_T b_i;
  int32_T i;
  int32_T idx;
  int32_T j;
  int32_T k;
  int32_T varargin_1_size;
  boolean_T exitg1;
  boolean_T p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky
   * factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error)  */
  st.site = &xh_emlrtRSI;
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
  /*   but for dense matrices, MODCHOL takes longer than calling the built-in */
  /*   EIG, because of the cost of interpreting the code, even though it */
  /*   only has one loop and uses vector operations.   */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  xi = muDoubleScalarAbs(A[0] - A[0]);
  L[0] = xi;
  L[1] = muDoubleScalarAbs(A[1] - A[2]);
  L[2] = muDoubleScalarAbs(A[2] - A[1]);
  theta = muDoubleScalarAbs(A[3] - A[3]);
  L[3] = theta;
  b_st.site = &yh_emlrtRSI;
  sum(L, dv);
  diagA[0] = dv[0];
  diagA[1] = dv[1];
  b_st.site = &yh_emlrtRSI;
  if (b_sum(diagA) > 0.0) {
    b_st.site = &ai_emlrtRSI;
    b_error(&b_st);
  }
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  Ccol_data = muDoubleScalarAbs(A[0]);
  b_gamma = muDoubleScalarAbs(A[3]);
  if ((!(Ccol_data < b_gamma)) &&
      ((!muDoubleScalarIsNaN(Ccol_data)) || muDoubleScalarIsNaN(b_gamma))) {
    b_gamma = Ccol_data;
  }
  /*  max diagonal entry */
  L[1] = muDoubleScalarAbs(A[1]);
  L[2] = muDoubleScalarAbs(A[2]);
  diagA[0] = xi;
  if (muDoubleScalarIsNaN(L[1])) {
    p = false;
  } else if (muDoubleScalarIsNaN(xi)) {
    p = true;
  } else {
    p = (xi < L[1]);
  }
  if (p) {
    diagA[0] = L[1];
  }
  diagA[1] = L[2];
  if (muDoubleScalarIsNaN(theta)) {
    p = false;
  } else if (muDoubleScalarIsNaN(L[2])) {
    p = true;
  } else {
    p = (L[2] < theta);
  }
  if (p) {
    diagA[1] = theta;
  }
  if ((diagA[0] < diagA[1]) ||
      (muDoubleScalarIsNaN(diagA[0]) && (!muDoubleScalarIsNaN(diagA[1])))) {
    xi = diagA[1];
  } else {
    xi = diagA[0];
  }
  /*  max off-diagonal entry */
  Ccol_data = b_gamma + xi;
  if ((Ccol_data < 1.0) || muDoubleScalarIsNaN(Ccol_data)) {
    Ccol_data = 1.0;
  }
  delta = 2.2204460492503131E-16 * Ccol_data;
  varargin_1[0] = b_gamma;
  varargin_1[1] = xi / 2.0;
  varargin_1[2] = 2.2204460492503131E-16;
  if (!muDoubleScalarIsNaN(b_gamma)) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!muDoubleScalarIsNaN(varargin_1[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx != 0) {
    b_gamma = varargin_1[idx - 1];
    i = idx + 1;
    for (k = i; k < 4; k++) {
      theta = varargin_1[k - 1];
      if (b_gamma < theta) {
        b_gamma = theta;
      }
    }
  }
  b_st.site = &bi_emlrtRSI;
  if (b_gamma < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_gamma = muDoubleScalarSqrt(b_gamma);
  /*  initialize d and L */
  diagA[0] = 0.0;
  diagA[1] = 0.0;
  L[1] = 0.0;
  L[2] = 0.0;
  L[0] = 1.0;
  L[3] = 1.0;
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  emxInit_real_T(&st, &a, 2, &ig_emlrtRTEI);
  emxInit_real_T(&st, &b, 1, &jg_emlrtRTEI);
  for (j = 0; j < 2; j++) {
    K_size_idx_1 = (j >= 1);
    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    b_st.site = &ci_emlrtRSI;
    i = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = K_size_idx_1;
    emxEnsureCapacity_real_T(&b_st, a, i, &ig_emlrtRTEI);
    a_data = a->data;
    for (i = 0; i < K_size_idx_1; i++) {
      a_data[0] = L[j];
    }
    i = b->size[0];
    b->size[0] = K_size_idx_1;
    emxEnsureCapacity_real_T(&b_st, b, i, &jg_emlrtRTEI);
    b_data = b->data;
    for (i = 0; i < K_size_idx_1; i++) {
      b_data[0] = diagA[0] * L[j];
    }
    c_st.site = &ef_emlrtRSI;
    g_dynamic_size_checks(&c_st, a, b, K_size_idx_1, K_size_idx_1);
    if (K_size_idx_1 < 1) {
      xi = 0.0;
    } else {
      n_t = (ptrdiff_t)1;
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      xi = ddot(&n_t, &a_data[0], &incx_t, &b_data[0], &incy_t);
    }
    djtemp = A[j + (j << 1)] - xi;
    /*  C(j,j) in book */
    if (j + 1 < 2) {
      b_st.site = &di_emlrtRSI;
      c_st.site = &qg_emlrtRSI;
      /*  row index: all rows below diagonal */
      b_st.site = &ei_emlrtRSI;
      a_size[0] = 1;
      a_size[1] = K_size_idx_1;
      for (i = 0; i < K_size_idx_1; i++) {
        xi = L[1];
      }
      for (i = 0; i < K_size_idx_1; i++) {
        theta = diagA[0];
      }
      c_st.site = &ef_emlrtRSI;
      h_dynamic_size_checks(&c_st, a_size, K_size_idx_1, K_size_idx_1,
                            K_size_idx_1);
      c_st.site = &hf_emlrtRSI;
      g_mtimes((real_T *)&xi, a_size, (real_T *)&theta, K_size_idx_1,
               (real_T *)&Ccol_data, &idx);
      Ccol_data = A[1] - Ccol_data;
      /*  C(I,j) in book */
      b_st.site = &fi_emlrtRSI;
      c_st.site = &fi_emlrtRSI;
      b_abs((real_T *)&Ccol_data, 1, varargin_1_data, &varargin_1_size);
      c_st.site = &ki_emlrtRSI;
      d_st.site = &li_emlrtRSI;
      e_st.site = &mi_emlrtRSI;
      if (varargin_1_size < 1) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &q_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      if (varargin_1_size == 1) {
        theta = varargin_1_data[0];
      } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
                 (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                  (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
        theta = varargin_1_data[1];
      } else {
        theta = varargin_1_data[0];
      }
      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      b_st.site = &gi_emlrtRSI;
      xi = theta / b_gamma;
      c_st.site = &le_emlrtRSI;
      d_st.site = &me_emlrtRSI;
      theta = muDoubleScalarAbs(djtemp);
      varargin_1[0] = muDoubleScalarAbs(djtemp);
      varargin_1[1] = xi * xi;
      varargin_1[2] = delta;
      if (!muDoubleScalarIsNaN(theta)) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k < 4)) {
          if (!muDoubleScalarIsNaN(varargin_1[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (idx == 0) {
        diagA[0] = theta;
      } else {
        xi = varargin_1[idx - 1];
        i = idx + 1;
        for (k = i; k < 4; k++) {
          theta = varargin_1[k - 1];
          if (xi < theta) {
            xi = theta;
          }
        }
        diagA[0] = xi;
      }
      idx = 1;
      Ccol_data /= diagA[0];
      i = 1;
      emlrtSubAssignSizeCheckR2012b(&i, 1, &idx, 1, &m_emlrtECI, &st);
      L[1] = Ccol_data;
    } else {
      Ccol_data = muDoubleScalarAbs(djtemp);
      if ((Ccol_data < delta) ||
          (muDoubleScalarIsNaN(Ccol_data) && (!muDoubleScalarIsNaN(delta)))) {
        diagA[1] = delta;
      } else {
        diagA[1] = Ccol_data;
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  b_st.site = &hi_emlrtRSI;
  if (diagA[0] < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  xi = muDoubleScalarSqrt(diagA[0]);
  L[0] = xi;
  L[1] *= xi;
  /*  L = L*diag(sqrt(d)) bad in sparse case */
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }
  b_st.site = &hi_emlrtRSI;
  if (diagA[1] < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  xi = muDoubleScalarSqrt(diagA[1]);
  /*  L = L*diag(sqrt(d)) bad in sparse case */
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }
  Hinv[0] = L[0];
  Hinv[1] = 0.0 * xi;
  Hinv[2] = L[1];
  Hinv[3] = xi;
  st.site = &wh_emlrtRSI;
  /* INVUPTR Inverse of an upper triangular matrix  */
  /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
  /* matrix T.  The output matrix T contains the inverse of T.  */
  /* This program implements Algorithm 4.2.2 of the book. */
  /* Input  : Matrix T  */
  /* output : Matrix T */
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    i = (1 - k) << 1;
    idx = (i - k) + 1;
    theta = Hinv[idx];
    if (theta == 0.0) {
      b_st.site = &cl_emlrtRSI;
      disp(&b_st, j_emlrt_marshallOut(&b_st, cv1), &p_emlrtMCI);
      exitg1 = true;
    } else {
      Hinv[idx] = 1.0 / theta;
      K_size_idx_1 = -k;
      emlrtForLoopVectorCheckR2021a((-(real_T)k + 2.0) - 1.0, -1.0, 1.0,
                                    mxDOUBLE_CLASS, 1 - k, &r_emlrtRTEI, &st);
      for (b_i = 0; b_i <= K_size_idx_1; b_i++) {
        if (1 - k < 1) {
          emlrtDynamicBoundsCheckR2012b(0, 1, 2, &wb_emlrtBCI, &st);
        }
        b_st.site = &ni_emlrtRSI;
        j = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, a, j, &kg_emlrtRTEI);
        a_data = a->data;
        theta = Hinv[i];
        a_data[0] = theta;
        j = b->size[0];
        b->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, b, j, &lg_emlrtRTEI);
        b_data = b->data;
        b_data[0] = Hinv[idx];
        Hinv_size[0] = 1;
        Hinv_size[1] = 1;
        Hinv_data[0] = theta;
        varargin_1_size = 1;
        varargin_1_data[0] = Hinv[idx];
        b_Hinv_data.data = &Hinv_data[0];
        b_Hinv_data.size = &Hinv_size[0];
        b_Hinv_data.allocatedSize = 2;
        b_Hinv_data.numDimensions = 2;
        b_Hinv_data.canFreeData = false;
        b_varargin_1_data.data = &varargin_1_data[0];
        b_varargin_1_data.size = &varargin_1_size;
        b_varargin_1_data.allocatedSize = 2;
        b_varargin_1_data.numDimensions = 1;
        b_varargin_1_data.canFreeData = false;
        c_st.site = &ef_emlrtRSI;
        g_dynamic_size_checks(&c_st, &b_Hinv_data, &b_varargin_1_data, 1, 1);
        n_t = (ptrdiff_t)1;
        incx_t = (ptrdiff_t)1;
        incy_t = (ptrdiff_t)1;
        xi = ddot(&n_t, &a_data[0], &incx_t, &b_data[0], &incy_t);
        Hinv[i] = -xi / Hinv[0];
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
  emxFree_real_T(&st, &b);
  emxFree_real_T(&st, &a);
  for (i = 0; i < 2; i++) {
    theta = Hinv[i + 2];
    L[i] = Hinv[i] * Hinv[0] + theta * Hinv[2];
    L[i + 2] = Hinv[i] * Hinv[1] + theta * Hinv[3];
  }
  Ainv_size[0] = 2;
  Ainv_size[1] = 2;
  Ainv_data[0] = (L[0] + L[0]) / 2.0;
  xi = (L[1] + L[2]) / 2.0;
  Ainv_data[1] = xi;
  Ainv_data[2] = xi;
  Ainv_data[3] = (L[3] + L[3]) / 2.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (invpd.c) */

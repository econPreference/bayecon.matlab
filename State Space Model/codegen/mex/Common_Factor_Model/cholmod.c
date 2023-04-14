/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cholmod.c
 *
 * Code generation for function 'cholmod'
 *
 */

/* Include files */
#include "cholmod.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "abs.h"
#include "diag.h"
#include "eml_mtimes_helper.h"
#include "error.h"
#include "eye.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtBCInfo xb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    67,                                                          /* lineNo */
    11,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    27,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    62,                                                          /* lineNo */
    18,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    69,                                                          /* lineNo */
    11,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    18,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    16,                                                          /* colNo */
    "A",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    77,                                                          /* lineNo */
    28,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo n_emlrtECI = {
    1,                                                          /* nDims */
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo o_emlrtECI = {
    2,                                                          /* nDims */
    29,                                                         /* lineNo */
    16,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    1,                                                          /* nDims */
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtECInfo q_emlrtECI = {
    2,                                                          /* nDims */
    39,                                                         /* lineNo */
    18,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    25,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    59,                                                          /* lineNo */
    41,                                                          /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    71,                                                          /* lineNo */
    10,                                                          /* colNo */
    "d",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    77,                                                          /* lineNo */
    9,                                                           /* colNo */
    "L",                                                         /* aName */
    "cholmod",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m", /* pName */
    0                                                            /* checkKind */
};

/* Function Declarations */
static void c_binary_expand_op(real_T L_data[], int32_T L_size[2],
                               emlrtRSInfo rl_emlrtRSI, const real_T A_data[],
                               const int32_T A_size[2]);

static void d_binary_expand_op(real_T L_data[], int32_T L_size[2],
                               emlrtRSInfo rl_emlrtRSI, const real_T A_data[],
                               const int32_T A_size[2]);

/* Function Definitions */
static void c_binary_expand_op(real_T L_data[], int32_T L_size[2],
                               emlrtRSInfo rl_emlrtRSI, const real_T A_data[],
                               const int32_T A_size[2])
{
  real_T b_A_data[4];
  int32_T b_A_size[2];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  (void)rl_emlrtRSI;
  if (L_size[0] == 1) {
    b_A_size[0] = A_size[0];
  } else {
    b_A_size[0] = L_size[0];
  }
  if (L_size[1] == 1) {
    b_A_size[1] = A_size[1];
  } else {
    b_A_size[1] = L_size[1];
  }
  stride_0_0 = (A_size[0] != 1);
  stride_0_1 = (A_size[1] != 1);
  stride_1_0 = (L_size[0] != 1);
  stride_1_1 = (L_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (L_size[1] == 1) {
    loop_ub = A_size[1];
  } else {
    loop_ub = L_size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (L_size[0] == 1) {
      b_loop_ub = A_size[0];
    } else {
      b_loop_ub = L_size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_A_data[i1 + b_A_size[0] * i] =
          A_data[i1 * stride_0_0 + A_size[0] * aux_0_1] -
          L_data[i1 * stride_1_0 + L_size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  c_abs(b_A_data, b_A_size, L_data, L_size);
}

static void d_binary_expand_op(real_T L_data[], int32_T L_size[2],
                               emlrtRSInfo rl_emlrtRSI, const real_T A_data[],
                               const int32_T A_size[2])
{
  real_T b_A_data[4];
  int32_T b_A_size[2];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  (void)rl_emlrtRSI;
  if (A_size[1] == 1) {
    b_A_size[0] = A_size[0];
  } else {
    b_A_size[0] = A_size[1];
  }
  if (A_size[0] == 1) {
    b_A_size[1] = A_size[1];
  } else {
    b_A_size[1] = A_size[0];
  }
  stride_0_0 = (A_size[0] != 1);
  stride_0_1 = (A_size[1] != 1);
  stride_1_0 = (A_size[1] != 1);
  stride_1_1 = (A_size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (A_size[0] == 1) {
    loop_ub = A_size[1];
  } else {
    loop_ub = A_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (A_size[1] == 1) {
      b_loop_ub = A_size[0];
    } else {
      b_loop_ub = A_size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_A_data[i1 + b_A_size[0] * i] =
          A_data[i1 * stride_0_0 + A_size[0] * aux_0_1] -
          A_data[aux_1_1 + A_size[0] * (i1 * stride_1_0)];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  c_abs(b_A_data, b_A_size, L_data, L_size);
}

void cholmod(const emlrtStack *sp, const real_T A_data[],
             const int32_T A_size[2], real_T R_data[], int32_T R_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T b_diagA_data;
  emxArray_real_T c_A_data;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *r;
  real_T L_data[4];
  real_T b_A_data[4];
  real_T varargin_1[3];
  real_T diagA_data[2];
  real_T maxval_data[2];
  real_T Ccol_data;
  real_T b_gamma;
  real_T delta;
  real_T djtemp;
  real_T theta;
  real_T xi;
  real_T *b_data;
  int32_T L_size[2];
  int32_T a_size[2];
  int32_T b_A_size[2];
  int32_T maxval_size[2];
  int32_T b_n;
  int32_T diagA_size;
  int32_T i;
  int32_T j;
  int32_T m;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
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
  if ((A_size[0] != A_size[1]) && ((A_size[0] != 1) && (A_size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A_size[0], A_size[1], &n_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((A_size[0] != A_size[1]) && ((A_size[1] != 1) && (A_size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A_size[1], A_size[0], &o_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (A_size[0] == A_size[1]) {
    b_A_size[0] = A_size[0];
    b_A_size[1] = A_size[1];
    n = A_size[1];
    for (i = 0; i < n; i++) {
      m = A_size[0];
      for (maxval_data_tmp = 0; maxval_data_tmp < m; maxval_data_tmp++) {
        b_A_data[maxval_data_tmp + b_A_size[0] * i] =
            A_data[maxval_data_tmp + A_size[0] * i] -
            A_data[i + A_size[0] * maxval_data_tmp];
      }
    }
    st.site = &yh_emlrtRSI;
    c_abs(b_A_data, b_A_size, L_data, L_size);
  } else {
    st.site = &yh_emlrtRSI;
    d_binary_expand_op(L_data, L_size, yh_emlrtRSI, A_data, A_size);
  }
  st.site = &yh_emlrtRSI;
  c_sum(&st, L_data, L_size, maxval_data, maxval_size);
  st.site = &yh_emlrtRSI;
  if (d_sum(&st, maxval_data, maxval_size) > 0.0) {
    st.site = &ai_emlrtRSI;
    b_error(&st);
  }
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
    b_n = 0;
  } else {
    b_n = muIntScalarMax_sint32(A_size[0], A_size[1]);
  }
  emxInit_real_T(sp, &b, 1, &jg_emlrtRTEI);
  c_A_data.data = (real_T *)&A_data[0];
  c_A_data.size = (int32_T *)&A_size[0];
  c_A_data.allocatedSize = -1;
  c_A_data.numDimensions = 2;
  c_A_data.canFreeData = false;
  st.site = &oi_emlrtRSI;
  c_diag(&st, &c_A_data, b);
  b_data = b->data;
  diagA_size = b->size[0];
  n = b->size[0];
  for (i = 0; i < n; i++) {
    diagA_data[i] = b_data[i];
  }
  st.site = &pi_emlrtRSI;
  b_st.site = &pi_emlrtRSI;
  b_abs(diagA_data, diagA_size, maxval_data, &m);
  b_st.site = &ki_emlrtRSI;
  c_st.site = &li_emlrtRSI;
  d_st.site = &mi_emlrtRSI;
  if (m < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &q_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  if (m == 1) {
    b_gamma = maxval_data[0];
  } else if ((maxval_data[0] < maxval_data[1]) ||
             (muDoubleScalarIsNaN(maxval_data[0]) &&
              (!muDoubleScalarIsNaN(maxval_data[1])))) {
    b_gamma = maxval_data[1];
  } else {
    b_gamma = maxval_data[0];
  }
  emxInit_real_T(&d_st, &r, 2, &mg_emlrtRTEI);
  /*  max diagonal entry */
  b_diagA_data.data = &diagA_data[0];
  b_diagA_data.size = &diagA_size;
  b_diagA_data.allocatedSize = 2;
  b_diagA_data.numDimensions = 1;
  b_diagA_data.canFreeData = false;
  st.site = &qi_emlrtRSI;
  b_diag(&st, &b_diagA_data, r);
  b_data = r->data;
  L_size[0] = r->size[0];
  L_size[1] = r->size[1];
  n = r->size[0] * r->size[1];
  for (i = 0; i < n; i++) {
    L_data[i] = b_data[i];
  }
  if ((A_size[0] != L_size[0]) && ((A_size[0] != 1) && (L_size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A_size[0], L_size[0], &p_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((A_size[1] != L_size[1]) && ((A_size[1] != 1) && (L_size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A_size[1], L_size[1], &q_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &qi_emlrtRSI;
  if ((A_size[0] == L_size[0]) && (A_size[1] == L_size[1])) {
    b_A_size[0] = A_size[0];
    b_A_size[1] = A_size[1];
    n = A_size[0] * A_size[1];
    for (i = 0; i < n; i++) {
      b_A_data[i] = A_data[i] - L_data[i];
    }
    b_st.site = &qi_emlrtRSI;
    c_abs(b_A_data, b_A_size, L_data, L_size);
  } else {
    b_st.site = &qi_emlrtRSI;
    c_binary_expand_op(L_data, L_size, qi_emlrtRSI, A_data, A_size);
  }
  b_st.site = &ki_emlrtRSI;
  c_st.site = &li_emlrtRSI;
  d_st.site = &mi_emlrtRSI;
  if (((L_size[0] != 1) || (L_size[1] != 1)) && (L_size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &p_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if (L_size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &q_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  m = L_size[0];
  n = L_size[1];
  if (L_size[1] >= 1) {
    for (j = 0; j < n; j++) {
      maxval_data_tmp = L_size[0] * j;
      maxval_data[j] = L_data[maxval_data_tmp];
      for (i = 2; i <= m; i++) {
        xi = maxval_data[j];
        theta = L_data[maxval_data_tmp + 1];
        if (muDoubleScalarIsNaN(theta)) {
          p = false;
        } else if (muDoubleScalarIsNaN(xi)) {
          p = true;
        } else {
          p = (xi < theta);
        }
        if (p) {
          maxval_data[j] = theta;
        }
      }
    }
  }
  st.site = &qi_emlrtRSI;
  b_st.site = &ki_emlrtRSI;
  c_st.site = &li_emlrtRSI;
  d_st.site = &mi_emlrtRSI;
  if (L_size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &q_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  if (L_size[1] == 1) {
    xi = maxval_data[0];
  } else if ((maxval_data[0] < maxval_data[1]) ||
             (muDoubleScalarIsNaN(maxval_data[0]) &&
              (!muDoubleScalarIsNaN(maxval_data[1])))) {
    xi = maxval_data[1];
  } else {
    xi = maxval_data[0];
  }
  /*  max off-diagonal entry */
  theta = b_gamma + xi;
  if ((theta < 1.0) || muDoubleScalarIsNaN(theta)) {
    theta = 1.0;
  }
  delta = 2.2204460492503131E-16 * theta;
  varargin_1[0] = b_gamma;
  varargin_1[1] = xi / (real_T)b_n;
  varargin_1[2] = 2.2204460492503131E-16;
  if (!muDoubleScalarIsNaN(b_gamma)) {
    m = 1;
  } else {
    m = 0;
    n = 2;
    exitg1 = false;
    while ((!exitg1) && (n < 4)) {
      if (!muDoubleScalarIsNaN(varargin_1[n - 1])) {
        m = n;
        exitg1 = true;
      } else {
        n++;
      }
    }
  }
  if (m != 0) {
    b_gamma = varargin_1[m - 1];
    i = m + 1;
    for (n = i; n < 4; n++) {
      theta = varargin_1[n - 1];
      if (b_gamma < theta) {
        b_gamma = theta;
      }
    }
  }
  st.site = &bi_emlrtRSI;
  if (b_gamma < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_gamma = muDoubleScalarSqrt(b_gamma);
  /*  initialize d and L */
  diagA_size = b_n;
  if (0 <= b_n - 1) {
    memset(&diagA_data[0], 0, b_n * sizeof(real_T));
  }
  st.site = &ri_emlrtRSI;
  eye(&st, b_n, r);
  b_data = r->data;
  L_size[0] = r->size[0];
  L_size[1] = r->size[1];
  n = r->size[0] * r->size[1];
  for (i = 0; i < n; i++) {
    L_data[i] = b_data[i];
  }
  emxFree_real_T(sp, &r);
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  emxInit_real_T(sp, &a, 2, &ig_emlrtRTEI);
  for (j = 0; j < b_n; j++) {
    m = (j >= 1);
    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    if (j + 1 > L_size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L_size[0], &gc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i = 0; i < m; i++) {
      theta = L_data[j];
    }
    st.site = &ci_emlrtRSI;
    if (j + 1 > L_size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L_size[0], &fc_emlrtBCI, &st);
    }
    i = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = m;
    emxEnsureCapacity_real_T(&st, a, i, &ig_emlrtRTEI);
    b_data = a->data;
    for (i = 0; i < m; i++) {
      b_data[0] = L_data[j];
    }
    i = b->size[0];
    b->size[0] = m;
    emxEnsureCapacity_real_T(&st, b, i, &jg_emlrtRTEI);
    b_data = b->data;
    for (i = 0; i < m; i++) {
      b_data[0] = diagA_data[0] * theta;
    }
    b_st.site = &ef_emlrtRSI;
    g_dynamic_size_checks(&b_st, a, b, m, b->size[0]);
    if (j + 1 > A_size[1]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, A_size[1], &cc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (j + 1 > A_size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, A_size[0], &dc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    djtemp = A_data[j + A_size[0] * j] - f_mtimes(a, b);
    /*  C(j,j) in book */
    if (j + 1 < b_n) {
      st.site = &di_emlrtRSI;
      b_st.site = &qg_emlrtRSI;
      /*  row index: all rows below diagonal */
      for (i = 0; i < m; i++) {
        xi = diagA_data[0];
      }
      if (2 > A_size[0]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, A_size[0], &ac_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &ei_emlrtRSI;
      a_size[0] = 1;
      a_size[1] = m;
      for (i = 0; i < m; i++) {
        if (2 > L_size[0]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, L_size[0], &yb_emlrtBCI, &st);
        }
        theta = L_data[1];
      }
      for (i = 0; i < m; i++) {
        Ccol_data = xi * L_data[0];
      }
      b_st.site = &ef_emlrtRSI;
      h_dynamic_size_checks(&b_st, a_size, m, m, m);
      b_st.site = &hf_emlrtRSI;
      g_mtimes((real_T *)&theta, a_size, (real_T *)&Ccol_data, m, (real_T *)&xi,
               &m);
      Ccol_data = A_data[1] - xi;
      /*  C(I,j) in book */
      st.site = &fi_emlrtRSI;
      b_st.site = &fi_emlrtRSI;
      b_abs((real_T *)&Ccol_data, 1, maxval_data, &m);
      b_st.site = &ki_emlrtRSI;
      c_st.site = &li_emlrtRSI;
      d_st.site = &mi_emlrtRSI;
      if (m < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &q_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      if (m == 1) {
        theta = maxval_data[0];
      } else if ((maxval_data[0] < maxval_data[1]) ||
                 (muDoubleScalarIsNaN(maxval_data[0]) &&
                  (!muDoubleScalarIsNaN(maxval_data[1])))) {
        theta = maxval_data[1];
      } else {
        theta = maxval_data[0];
      }
      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      st.site = &gi_emlrtRSI;
      xi = theta / b_gamma;
      b_st.site = &le_emlrtRSI;
      c_st.site = &me_emlrtRSI;
      theta = muDoubleScalarAbs(djtemp);
      varargin_1[0] = muDoubleScalarAbs(djtemp);
      varargin_1[1] = xi * xi;
      varargin_1[2] = delta;
      if (!muDoubleScalarIsNaN(theta)) {
        m = 1;
      } else {
        m = 0;
        n = 2;
        exitg1 = false;
        while ((!exitg1) && (n < 4)) {
          if (!muDoubleScalarIsNaN(varargin_1[n - 1])) {
            m = n;
            exitg1 = true;
          } else {
            n++;
          }
        }
      }
      if (m == 0) {
        diagA_data[0] = theta;
      } else {
        xi = varargin_1[m - 1];
        i = m + 1;
        for (n = i; n < 4; n++) {
          theta = varargin_1[n - 1];
          if (xi < theta) {
            xi = theta;
          }
        }
        diagA_data[0] = xi;
      }
      if (2 > L_size[0]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, L_size[0], &xb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      m = 1;
      Ccol_data /= diagA_data[0];
      n = 1;
      emlrtSubAssignSizeCheckR2012b(&n, 1, &m, 1, &m_emlrtECI, (emlrtCTX)sp);
      L_data[1] = Ccol_data;
    } else {
      theta = muDoubleScalarAbs(djtemp);
      if ((theta < delta) ||
          (muDoubleScalarIsNaN(theta) && (!muDoubleScalarIsNaN(delta)))) {
        if (j + 1 > diagA_size) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, diagA_size, &bc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        diagA_data[j] = delta;
      } else {
        if (j + 1 > diagA_size) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, diagA_size, &bc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        diagA_data[j] = theta;
      }
    }
    if (j + 1 > diagA_size) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, diagA_size, &hc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &a);
  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  for (j = 0; j < b_n; j++) {
    if (j + 1 > L_size[1]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, L_size[1], &ic_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (j + 1 > diagA_size) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, diagA_size, &ec_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    theta = diagA_data[j];
    st.site = &hi_emlrtRSI;
    if (theta < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    theta = muDoubleScalarSqrt(theta);
    n = L_size[0];
    i = b->size[0];
    b->size[0] = L_size[0];
    emxEnsureCapacity_real_T(sp, b, i, &gg_emlrtRTEI);
    b_data = b->data;
    for (i = 0; i < n; i++) {
      b_data[i] = L_data[i + L_size[0] * j] * theta;
    }
    emlrtSubAssignSizeCheckR2012b(&L_size[0], 1, &b->size[0], 1, &r_emlrtECI,
                                  (emlrtCTX)sp);
    n = b->size[0];
    for (i = 0; i < n; i++) {
      L_data[i + L_size[0] * j] = b_data[i];
    }
    /*  L = L*diag(sqrt(d)) bad in sparse case */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b);
  R_size[0] = L_size[1];
  R_size[1] = L_size[0];
  n = L_size[0];
  for (i = 0; i < n; i++) {
    m = L_size[1];
    for (maxval_data_tmp = 0; maxval_data_tmp < m; maxval_data_tmp++) {
      R_data[maxval_data_tmp + R_size[0] * i] =
          L_data[i + L_size[0] * maxval_data_tmp];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void e_binary_expand_op(real_T varargin_1_data[], int32_T varargin_1_size[2],
                        emlrtRSInfo rl_emlrtRSI, const real_T A_data[],
                        const real_T _data[], const int32_T _size[2])
{
  real_T b_A_data;
  int32_T A_size[2];
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_1_1;
  (void)rl_emlrtRSI;
  if (_size[0] == 1) {
    A_size[0] = 1;
  } else {
    A_size[0] = _size[0];
  }
  if (_size[1] == 1) {
    A_size[1] = 1;
  } else {
    A_size[1] = _size[1];
  }
  stride_1_1 = (_size[1] != 1);
  aux_1_1 = 0;
  if (_size[1] == 1) {
    loop_ub = 1;
  } else {
    loop_ub = _size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (_size[0] == 1) {
      b_loop_ub = 1;
    } else {
      b_loop_ub = _size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_A_data = A_data[0] - _data[_size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
  }
  c_abs((real_T *)&b_A_data, A_size, varargin_1_data, varargin_1_size);
}

/* End of code generation (cholmod.c) */

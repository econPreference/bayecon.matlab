/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randmvt.c
 *
 * Code generation for function 'randmvt'
 *
 */

/* Include files */
#include "randmvt.h"
#include "Hetero_Regression_data.h"
#include "Hetero_Regression_mexutil.h"
#include "randg.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ke_emlrtRSI =
    {
        15,        /* lineNo */
        "randmvt", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
        "Regression/randmvt.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI =
    {
        14,        /* lineNo */
        "randmvt", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
        "Regression/randmvt.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI =
    {
        13,        /* lineNo */
        "randmvt", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
        "Regression/randmvt.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI =
    {
        7,         /* lineNo */
        "randmvt", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
        "Regression/randmvt.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    15,                                                           /* lineNo */
    "chi2rnd",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/chi2rnd.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    16,                                                         /* lineNo */
    "randg",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/randg.m" /* pathName */
};

/* Function Definitions */
real_T randmvt(const emlrtStack *sp, real_T nu, real_T mu, real_T Omega)
{
  static const int32_T iv[2] = {1, 18};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T L;
  real_T x;
  real_T xi;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  /*   random number generators  */
  /*   mvt generator  */
  st.site = &ne_emlrtRSI;
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
  b_st.site = &t_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  x = e_sumColumnB(muDoubleScalarAbs(Omega - Omega));
  b_st.site = &t_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  xi = e_sumColumnB(x);
  if (xi > 0.0) {
    b_st.site = &u_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 18, m, &cv[0]);
    emlrtAssign(&y, m);
    c_st.site = &th_emlrtRSI;
    c_error(&c_st, y, &n_emlrtMCI);
  }
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  L = muDoubleScalarAbs(Omega);
  /*  max diagonal entry */
  xi = muDoubleScalarAbs(Omega - Omega);
  /*  max off-diagonal entry */
  x = L + xi;
  if ((x < 1.0) || muDoubleScalarIsNaN(x)) {
    x = 1.0;
  }
  b_st.site = &y_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  /*  initialize d and L */
  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  /*  column index: all columns to left of diagonal */
  /*  d(K) doesn't work in case K is empty */
  /*  C(j,j) in book */
  xi = 2.2204460492503131E-16 * x;
  if ((L < xi) || (muDoubleScalarIsNaN(L) && (!muDoubleScalarIsNaN(xi)))) {
    L = xi;
  }
  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  b_st.site = &gb_emlrtRSI;
  /*  L = L*diag(sqrt(d)) bad in sparse case */
  st.site = &me_emlrtRSI;
  x = muDoubleScalarSqrt(L) * b_randn();
  st.site = &le_emlrtRSI;
  b_st.site = &oe_emlrtRSI;
  c_st.site = &pe_emlrtRSI;
  d_st.site = &fe_emlrtRSI;
  xi = randg(&d_st, nu / 2.0);
  xi = 2.0 * xi / nu;
  st.site = &ke_emlrtRSI;
  if (xi < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &r_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  xi = muDoubleScalarSqrt(xi);
  return mu + x / xi;
}

/* End of code generation (randmvt.c) */

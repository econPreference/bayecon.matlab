/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norminv.c
 *
 * Code generation for function 'norminv'
 *
 */

/* Include files */
#include "norminv.h"
#include "Common_Factor_Model_data.h"
#include "eml_erfcore.h"
#include "log2.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo lj_emlrtRSI = {
    48,                    /* lineNo */
    "applyScalarFunction", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" /* pathName */
};

static emlrtRSInfo vj_emlrtRSI = {
    41,                                                           /* lineNo */
    "norminv",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/norminv.m" /* pathName */
};

static emlrtRSInfo wj_emlrtRSI =
    {
        9,         /* lineNo */
        "erfcinv", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/"
        "erfcinv.m" /* pathName */
};

static emlrtRSInfo xj_emlrtRSI = {
    24,            /* lineNo */
    "eml_erfcore", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/private/"
    "eml_erfcore.m" /* pathName */
};

static emlrtRSInfo yj_emlrtRSI = {
    66,               /* lineNo */
    "scalar_erfcinv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/private/"
    "eml_erfcore.m" /* pathName */
};

static emlrtRSInfo dk_emlrtRSI = {
    316,                         /* lineNo */
    "scalar_erfinv_and_erfcinv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/private/"
    "eml_erfcore.m" /* pathName */
};

static emlrtRSInfo ek_emlrtRSI = {
    310,                         /* lineNo */
    "scalar_erfinv_and_erfcinv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/private/"
    "eml_erfcore.m" /* pathName */
};

/* Function Definitions */
void norminv(const emlrtStack *sp, const real_T p_data[], real_T x_data[],
             int32_T x_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T P;
  real_T R;
  real_T S;
  real_T absx;
  real_T b_x;
  real_T x;
  real_T z;
  int32_T k;
  int32_T nIterations;
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
  x_size[0] = 1;
  x_size[1] = 1;
  if ((p_data[0] >= 0.0) && (p_data[0] <= 1.0)) {
    st.site = &vj_emlrtRSI;
    st.site = &vj_emlrtRSI;
    x = 2.0 * p_data[0];
    b_st.site = &wj_emlrtRSI;
    c_st.site = &xj_emlrtRSI;
    d_st.site = &lj_emlrtRSI;
    e_st.site = &yj_emlrtRSI;
    nIterations = 1;
    if (muDoubleScalarIsNaN(x)) {
      b_x = rtNaN;
    } else if (x == 0.0) {
      b_x = rtInf;
    } else if (x == 2.0) {
      b_x = rtMinusInf;
    } else if (x > 1.7) {
      b_x = (2.0 - x) / 2.0;
      f_st.site = &ek_emlrtRSI;
      if (b_x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &w_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      b_x = muDoubleScalarLog(b_x);
      z = muDoubleScalarSqrt(-b_x);
      b_x = -(((1.641345311 * z + 3.429567803) * z + -1.624906493) * z +
              -1.970840454) /
            ((1.6370678 * z + 3.5438892) * z + 1.0);
      for (k = 0; k < 2; k++) {
        z = (eml_erfcore(-b_x) - (2.0 - x)) /
            (1.1283791670955126 * muDoubleScalarExp(-b_x * b_x));
        b_x -= z / (b_x * z + 1.0);
      }
    } else if (x < 0.3) {
      f_st.site = &dk_emlrtRSI;
      if (x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &w_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      z = muDoubleScalarSqrt(0.69314718055994529 - muDoubleScalarLog(x));
      if (x < 1.0947644252537633E-47) {
        if (x < 7.7532508072625747E-267) {
          nIterations = 3;
        } else {
          nIterations = 2;
        }
      }
      b_x = (((1.641345311 * z + 3.429567803) * z + -1.624906493) * z +
             -1.970840454) /
            ((1.6370678 * z + 3.5438892) * z + 1.0);
      for (k = 0; k <= nIterations; k++) {
        z = -(eml_erfcore(b_x) - x) /
            (1.1283791670955126 * muDoubleScalarExp(-b_x * b_x));
        b_x -= z / (b_x * z + 1.0);
      }
    } else {
      z = (1.0 - x) * (1.0 - x);
      b_x = (1.0 - x) *
            (((-0.140543331 * z + 0.914624893) * z + -1.645349621) * z +
             0.886226899) /
            ((((0.012229801 * z + -0.329097515) * z + 1.442710462) * z +
              -2.118377725) *
                 z +
             1.0);
      for (k = 0; k < 2; k++) {
        /* ========================== COPYRIGHT NOTICE
         * ============================ */
        /*  The algorithms for calculating ERF(X) and ERFC(X) are derived */
        /*  from FDLIBM, which has the following notice: */
        /*                                                                          */
        /*  Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved. */
        /*                                                                          */
        /*  Developed at SunSoft, a Sun Microsystems, Inc. business. */
        /*  Permission to use, copy, modify, and distribute this */
        /*  software is freely granted, provided that this notice */
        /*  is preserved. */
        /* =============================    END
         * ================================ */
        absx = muDoubleScalarAbs(b_x);
        if (muDoubleScalarIsNaN(b_x)) {
          z = b_x;
        } else if (muDoubleScalarIsInf(b_x)) {
          if (b_x < 0.0) {
            z = -1.0;
          } else {
            z = 1.0;
          }
        } else if (absx < 0.84375) {
          if (absx < 3.7252902984619141E-9) {
            if (absx < 2.8480945388892178E-306) {
              z = 0.125 * (8.0 * b_x + 1.0270333367641007 * b_x);
            } else {
              z = b_x + 0.12837916709551259 * b_x;
            }
          } else {
            z = b_x * b_x;
            z = b_x + b_x * ((z * (z * (z * (z * -2.3763016656650163E-5 +
                                             -0.0057702702964894416) +
                                        -0.02848174957559851) +
                                   -0.3250421072470015) +
                              0.12837916709551256) /
                             (z * (z * (z * (z * (z * -3.9602282787753681E-6 +
                                                  0.00013249473800432164) +
                                             0.0050813062818757656) +
                                        0.0650222499887673) +
                                   0.39791722395915535) +
                              1.0));
          }
        } else if (absx < 1.25) {
          P = (absx - 1.0) *
                  ((absx - 1.0) *
                       ((absx - 1.0) *
                            ((absx - 1.0) *
                                 ((absx - 1.0) *
                                      ((absx - 1.0) * -0.0021663755948687908 +
                                       0.035478304325618236) +
                                  -0.11089469428239668) +
                             0.31834661990116175) +
                        -0.37220787603570132) +
                   0.41485611868374833) +
              -0.0023621185607526594;
          z = (absx - 1.0) *
                  ((absx - 1.0) *
                       ((absx - 1.0) *
                            ((absx - 1.0) *
                                 ((absx - 1.0) *
                                      ((absx - 1.0) * 0.011984499846799107 +
                                       0.013637083912029051) +
                                  0.12617121980876164) +
                             0.071828654414196266) +
                        0.540397917702171) +
                   0.10642088040084423) +
              1.0;
          if (b_x >= 0.0) {
            z = P / z + 0.84506291151046753;
          } else {
            z = -0.84506291151046753 - P / z;
          }
        } else if (absx > 6.0) {
          if (b_x < 0.0) {
            z = -1.0;
          } else {
            z = 1.0;
          }
        } else {
          z = 1.0 / (absx * absx);
          if (absx < 2.8571434020996094) {
            R = z * (z * (z * (z * (z * (z * (z * -9.8143293441691455 +
                                              -81.2874355063066) +
                                         -184.60509290671104) +
                                    -162.39666946257347) +
                               -62.375332450326006) +
                          -10.558626225323291) +
                     -0.69385857270718176) +
                -0.0098649440348471482;
            S = z * (z * (z * (z * (z * (z * (z * (z * -0.0604244152148581 +
                                                   6.5702497703192817) +
                                              108.63500554177944) +
                                         429.00814002756783) +
                                    645.38727173326788) +
                               434.56587747522923) +
                          137.65775414351904) +
                     19.651271667439257) +
                1.0;
          } else {
            R = z * (z * (z * (z * (z * (z * -483.5191916086514 +
                                         -1025.0951316110772) +
                                    -637.56644336838963) +
                               -160.63638485582192) +
                          -17.757954917754752) +
                     -0.799283237680523) +
                -0.0098649429247001;
            S = z * (z * (z * (z * (z * (z * (z * -22.440952446585818 +
                                              474.52854120695537) +
                                         2553.0504064331644) +
                                    3199.8582195085955) +
                               1536.729586084437) +
                          325.79251299657392) +
                     30.338060743482458) +
                1.0;
          }
          b_log2(absx, &P, &z);
          z = muDoubleScalarFloor(P * 2.097152E+6) / 2.097152E+6 *
              muDoubleScalarPower(2.0, z);
          z = muDoubleScalarExp(-z * z - 0.5625) *
              muDoubleScalarExp((z - absx) * (z + absx) + R / S) / absx;
          if (b_x < 0.0) {
            z--;
          } else {
            z = 1.0 - z;
          }
        }
        z = (z - (1.0 - x)) /
            (1.1283791670955126 * muDoubleScalarExp(-b_x * b_x));
        b_x -= z / (b_x * z + 1.0);
      }
    }
    x_data[0] = -1.4142135623730951 * b_x;
  } else {
    x_data[0] = rtNaN;
  }
}

/* End of code generation (norminv.c) */

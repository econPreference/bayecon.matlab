/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "schur.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo uc_emlrtRSI = {
    93,    /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo vc_emlrtRSI = {
    102,   /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo wc_emlrtRSI = {
    137,   /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo xc_emlrtRSI = {
    145,   /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo yc_emlrtRSI = {
    153,   /* lineNo */
    "eig", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                           */
};

static emlrtRSInfo dd_emlrtRSI = {
    32,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    33,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    59,                        /* lineNo */
    "diagDiagUpperHessNoImag", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    62,                        /* lineNo */
    "diagDiagUpperHessNoImag", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    12,                         /* lineNo */
    "eigSkewHermitianStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigSkewHermitianStandard.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    15,                             /* lineNo */
    "eigRealSkewSymmetricStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    17,                             /* lineNo */
    "eigRealSkewSymmetricStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    71,                    /* lineNo */
    "extractEigenVectors", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = {
    59,            /* lineNo */
    "eigStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pathName */
};

static emlrtRSInfo be_emlrtRSI = {
    33,            /* lineNo */
    "eigStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = {
    31,            /* lineNo */
    "eigStandard", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    36,      /* lineNo */
    "xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    158,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = {
    156,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    148,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    143,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pathName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    62,    /* lineNo */
    27,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    68,    /* lineNo */
    24,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo td_emlrtRTEI = {
    72,    /* lineNo */
    28,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    97,    /* lineNo */
    9,     /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    101,   /* lineNo */
    13,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    36,      /* lineNo */
    33,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    16,                             /* lineNo */
    5,                              /* colNo */
    "eigRealSkewSymmetricStandard", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    137,   /* lineNo */
    10,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    83,      /* lineNo */
    24,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    86,      /* lineNo */
    21,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    137,   /* lineNo */
    12,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo de_emlrtRTEI = {
    17,                             /* lineNo */
    5,                              /* colNo */
    "eigRealSkewSymmetricStandard", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = {
    115,     /* lineNo */
    29,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    116,     /* lineNo */
    29,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    118,     /* lineNo */
    35,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI = {
    152,     /* lineNo */
    16,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    32,            /* lineNo */
    13,            /* colNo */
    "eigStandard", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI = {
    1,     /* lineNo */
    20,    /* colNo */
    "eig", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/eig.m" /* pName
                                                                           */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    83,      /* lineNo */
    1,       /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    115,     /* lineNo */
    5,       /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI = {
    116,     /* lineNo */
    5,       /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = {
    118,     /* lineNo */
    10,      /* colNo */
    "xgeev", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeev.m" /* pName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const emxArray_real_T *A, emxArray_creal_T *V,
         emxArray_creal_T *D)
{
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'e', 'v', 'x'};
  ptrdiff_t ihi_t;
  ptrdiff_t ilo_t;
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_creal_T *W;
  emxArray_real_T *b_A;
  emxArray_real_T *scale;
  emxArray_real_T *vright;
  emxArray_real_T *wimag;
  emxArray_real_T *wreal;
  creal_T *V_data;
  creal_T *W_data;
  const real_T *A_data;
  real_T abnrm;
  real_T rconde;
  real_T rcondv;
  real_T vleft;
  real_T *b_A_data;
  real_T *scale_data;
  real_T *vright_data;
  real_T *wimag_data;
  real_T *wreal_data;
  int32_T b_n;
  int32_T exitg1;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T n;
  int32_T sgn;
  boolean_T exitg2;
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
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  n = A->size[0];
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &l_emlrtRTEI,
                                  "MATLAB:eig:inputMustBeSquareStandard",
                                  "MATLAB:eig:inputMustBeSquareStandard", 0);
  }
  j = V->size[0] * V->size[1];
  V->size[0] = A->size[0];
  V->size[1] = A->size[0];
  emxEnsureCapacity_creal_T(sp, V, j, &sd_emlrtRTEI);
  j = D->size[0] * D->size[1];
  D->size[0] = A->size[0];
  D->size[1] = A->size[0];
  emxEnsureCapacity_creal_T(sp, D, j, &td_emlrtRTEI);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    st.site = &uc_emlrtRSI;
    if (anyNonFinite(&st, A)) {
      j = V->size[0] * V->size[1];
      V->size[0] = A->size[0];
      V->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(sp, V, j, &ud_emlrtRTEI);
      V_data = V->data;
      sgn = A->size[0] * A->size[0];
      for (j = 0; j < sgn; j++) {
        V_data[j].re = rtNaN;
        V_data[j].im = 0.0;
      }
      j = D->size[0] * D->size[1];
      D->size[0] = A->size[0];
      D->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(sp, D, j, &vd_emlrtRTEI);
      V_data = D->data;
      sgn = A->size[0] * A->size[0];
      for (j = 0; j < sgn; j++) {
        V_data[j].re = 0.0;
        V_data[j].im = 0.0;
      }
      st.site = &vc_emlrtRSI;
      if (A->size[0] > 2147483646) {
        b_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (sgn = 0; sgn < n; sgn++) {
        V_data[sgn + D->size[0] * sgn].re = rtNaN;
        V_data[sgn + D->size[0] * sgn].im = 0.0;
      }
    } else {
      p = (A->size[0] == A->size[1]);
      if (p) {
        j = 0;
        exitg2 = false;
        while ((!exitg2) && (j <= A->size[1] - 1)) {
          i = 0;
          do {
            exitg1 = 0;
            if (i <= j) {
              if (!(A_data[i + A->size[0] * j] == A_data[j + A->size[0] * i])) {
                p = false;
                exitg1 = 1;
              } else {
                i++;
              }
            } else {
              j++;
              exitg1 = 2;
            }
          } while (exitg1 == 0);
          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      }
      emxInit_real_T(sp, &b_A, 2, &wd_emlrtRTEI);
      emxInit_real_T(sp, &vright, 2, &ne_emlrtRTEI);
      if (p) {
        st.site = &wc_emlrtRSI;
        b_st.site = &dd_emlrtRSI;
        schur(&b_st, A, b_A, vright);
        vright_data = vright->data;
        b_A_data = b_A->data;
        b_st.site = &ed_emlrtRSI;
        n = vright->size[0];
        c_st.site = &td_emlrtRSI;
        if ((2 <= vright->size[0]) && (vright->size[0] > 2147483646)) {
          d_st.site = &kb_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (j = 2; j <= n; j++) {
          vright_data[(j + vright->size[0] * (j - 2)) - 1] = 0.0;
          c_st.site = &ud_emlrtRSI;
          for (i = 0; i <= j - 2; i++) {
            vright_data[i + vright->size[0] * (j - 1)] = 0.0;
          }
        }
        j = V->size[0] * V->size[1];
        V->size[0] = b_A->size[0];
        V->size[1] = b_A->size[1];
        emxEnsureCapacity_creal_T(sp, V, j, &yd_emlrtRTEI);
        V_data = V->data;
        sgn = b_A->size[0] * b_A->size[1];
        for (j = 0; j < sgn; j++) {
          V_data[j].re = b_A_data[j];
          V_data[j].im = 0.0;
        }
        j = D->size[0] * D->size[1];
        D->size[0] = vright->size[0];
        D->size[1] = vright->size[1];
        emxEnsureCapacity_creal_T(sp, D, j, &ce_emlrtRTEI);
        V_data = D->data;
        sgn = vright->size[0] * vright->size[1];
        for (j = 0; j < sgn; j++) {
          V_data[j].re = vright_data[j];
          V_data[j].im = 0.0;
        }
      } else {
        p = (A->size[0] == A->size[1]);
        if (p) {
          j = 0;
          exitg2 = false;
          while ((!exitg2) && (j <= A->size[1] - 1)) {
            i = 0;
            do {
              exitg1 = 0;
              if (i <= j) {
                if (!(A_data[i + A->size[0] * j] ==
                      -A_data[j + A->size[0] * i])) {
                  p = false;
                  exitg1 = 1;
                } else {
                  i++;
                }
              } else {
                j++;
                exitg1 = 2;
              }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        }
        if (p) {
          st.site = &xc_emlrtRSI;
          b_st.site = &vd_emlrtRSI;
          c_st.site = &wd_emlrtRSI;
          schur(&c_st, A, b_A, vright);
          vright_data = vright->data;
          b_A_data = b_A->data;
          n = vright->size[0];
          j = D->size[0] * D->size[1];
          D->size[0] = vright->size[0];
          D->size[1] = vright->size[0];
          emxEnsureCapacity_creal_T(&b_st, D, j, &xd_emlrtRTEI);
          V_data = D->data;
          sgn = vright->size[0] * vright->size[0];
          for (j = 0; j < sgn; j++) {
            V_data[j].re = 0.0;
            V_data[j].im = 0.0;
          }
          i = 1;
          do {
            exitg1 = 0;
            if (i <= n) {
              if (i != n) {
                vleft = vright_data[i + vright->size[0] * (i - 1)];
                if (vleft != 0.0) {
                  vleft = muDoubleScalarAbs(vleft);
                  V_data[(i + D->size[0] * (i - 1)) - 1].re = 0.0;
                  V_data[(i + D->size[0] * (i - 1)) - 1].im = vleft;
                  V_data[i + D->size[0] * i].re = 0.0;
                  V_data[i + D->size[0] * i].im = -vleft;
                  i += 2;
                } else {
                  i++;
                }
              } else {
                i++;
              }
            } else {
              exitg1 = 1;
            }
          } while (exitg1 == 0);
          c_st.site = &xd_emlrtRSI;
          j = V->size[0] * V->size[1];
          V->size[0] = b_A->size[0];
          V->size[1] = b_A->size[1];
          emxEnsureCapacity_creal_T(&c_st, V, j, &de_emlrtRTEI);
          V_data = V->data;
          sgn = b_A->size[0] * b_A->size[1];
          for (j = 0; j < sgn; j++) {
            V_data[j].re = b_A_data[j];
            V_data[j].im = 0.0;
          }
          j = 1;
          n = vright->size[0];
          while (j <= n) {
            if ((j != n) &&
                (vright_data[j + vright->size[0] * (j - 1)] != 0.0)) {
              if (vright_data[j + vright->size[0] * (j - 1)] < 0.0) {
                sgn = 1;
              } else {
                sgn = -1;
              }
              d_st.site = &yd_emlrtRSI;
              if ((1 <= n) && (n > 2147483646)) {
                e_st.site = &kb_emlrtRSI;
                check_forloop_overflow_error(&e_st);
              }
              for (i = 0; i < n; i++) {
                vleft = V_data[i + V->size[0] * (j - 1)].re;
                abnrm = (real_T)sgn * V_data[i + V->size[0] * j].re;
                if (abnrm == 0.0) {
                  V_data[i + V->size[0] * (j - 1)].re =
                      vleft / 1.4142135623730951;
                  V_data[i + V->size[0] * (j - 1)].im = 0.0;
                } else if (vleft == 0.0) {
                  V_data[i + V->size[0] * (j - 1)].re = 0.0;
                  V_data[i + V->size[0] * (j - 1)].im =
                      abnrm / 1.4142135623730951;
                } else {
                  V_data[i + V->size[0] * (j - 1)].re =
                      vleft / 1.4142135623730951;
                  V_data[i + V->size[0] * (j - 1)].im =
                      abnrm / 1.4142135623730951;
                }
                V_data[i + V->size[0] * j].re =
                    V_data[i + V->size[0] * (j - 1)].re;
                V_data[i + V->size[0] * j].im =
                    -V_data[i + V->size[0] * (j - 1)].im;
              }
              j += 2;
            } else {
              j++;
            }
          }
        } else {
          st.site = &yc_emlrtRSI;
          n = A->size[0];
          b_st.site = &ce_emlrtRSI;
          c_st.site = &de_emlrtRSI;
          j = b_A->size[0] * b_A->size[1];
          b_A->size[0] = A->size[0];
          b_A->size[1] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, b_A, j, &wd_emlrtRTEI);
          b_A_data = b_A->data;
          sgn = A->size[0] * A->size[1];
          for (j = 0; j < sgn; j++) {
            b_A_data[j] = A_data[j];
          }
          emxInit_creal_T(&c_st, &W, 1, &je_emlrtRTEI);
          emxInit_real_T(&c_st, &scale, 1, &ke_emlrtRTEI);
          emxInit_real_T(&c_st, &wreal, 1, &le_emlrtRTEI);
          emxInit_real_T(&c_st, &wimag, 1, &me_emlrtRTEI);
          b_n = A->size[1];
          j = scale->size[0];
          scale->size[0] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, scale, j, &ae_emlrtRTEI);
          scale_data = scale->data;
          j = W->size[0];
          W->size[0] = A->size[1];
          emxEnsureCapacity_creal_T(&c_st, W, j, &be_emlrtRTEI);
          W_data = W->data;
          j = wreal->size[0];
          wreal->size[0] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, wreal, j, &ee_emlrtRTEI);
          wreal_data = wreal->data;
          j = wimag->size[0];
          wimag->size[0] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, wimag, j, &fe_emlrtRTEI);
          wimag_data = wimag->data;
          j = vright->size[0] * vright->size[1];
          vright->size[0] = A->size[1];
          vright->size[1] = A->size[1];
          emxEnsureCapacity_real_T(&c_st, vright, j, &ge_emlrtRTEI);
          vright_data = vright->data;
          info_t = LAPACKE_dgeevx(
              102, 'B', 'N', 'V', 'N', (ptrdiff_t)A->size[1], &b_A_data[0],
              (ptrdiff_t)A->size[0], &wreal_data[0], &wimag_data[0], &vleft,
              (ptrdiff_t)1, &vright_data[0], (ptrdiff_t)A->size[1], &ilo_t,
              &ihi_t, &scale_data[0], &abnrm, &rconde, &rcondv);
          info = (int32_T)info_t;
          d_st.site = &he_emlrtRSI;
          emxFree_real_T(&d_st, &scale);
          if (info < 0) {
            if (info == -1010) {
              emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(&d_st, &j_emlrtRTEI,
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            5, 4, 14, &fname[0], 12, info);
            }
          }
          d_st.site = &ge_emlrtRSI;
          if (A->size[1] > 2147483646) {
            e_st.site = &kb_emlrtRSI;
            check_forloop_overflow_error(&e_st);
          }
          for (i = 0; i < b_n; i++) {
            W_data[i].re = wreal_data[i];
            W_data[i].im = wimag_data[i];
          }
          emxFree_real_T(&c_st, &wreal);
          j = V->size[0] * V->size[1];
          V->size[0] = vright->size[0];
          V->size[1] = vright->size[1];
          emxEnsureCapacity_creal_T(&c_st, V, j, &he_emlrtRTEI);
          V_data = V->data;
          sgn = vright->size[0] * vright->size[1];
          for (j = 0; j < sgn; j++) {
            V_data[j].re = vright_data[j];
            V_data[j].im = 0.0;
          }
          d_st.site = &fe_emlrtRSI;
          for (i = 2; i <= b_n; i++) {
            if ((wimag_data[i - 2] > 0.0) && (wimag_data[i - 1] < 0.0)) {
              d_st.site = &ee_emlrtRSI;
              if (b_n > 2147483646) {
                e_st.site = &kb_emlrtRSI;
                check_forloop_overflow_error(&e_st);
              }
              for (j = 0; j < b_n; j++) {
                vleft = V_data[j + V->size[0] * (i - 2)].re;
                abnrm = V_data[j + V->size[0] * (i - 1)].re;
                V_data[j + V->size[0] * (i - 2)].re = vleft;
                V_data[j + V->size[0] * (i - 2)].im = abnrm;
                V_data[j + V->size[0] * (i - 1)].re = vleft;
                V_data[j + V->size[0] * (i - 1)].im = -abnrm;
              }
            }
          }
          emxFree_real_T(&c_st, &wimag);
          j = D->size[0] * D->size[1];
          D->size[0] = A->size[0];
          D->size[1] = A->size[0];
          emxEnsureCapacity_creal_T(&st, D, j, &ie_emlrtRTEI);
          V_data = D->data;
          sgn = A->size[0] * A->size[0];
          for (j = 0; j < sgn; j++) {
            V_data[j].re = 0.0;
            V_data[j].im = 0.0;
          }
          b_st.site = &be_emlrtRSI;
          if (A->size[0] > 2147483646) {
            c_st.site = &kb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }
          for (sgn = 0; sgn < n; sgn++) {
            V_data[sgn + D->size[0] * sgn] = W_data[sgn];
          }
          emxFree_creal_T(&st, &W);
          if (info != 0) {
            b_st.site = &ae_emlrtRSI;
            b_warning(&b_st);
          }
        }
      }
      emxFree_real_T(sp, &vright);
      emxFree_real_T(sp, &b_A);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (eig.c) */

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mldivide.cpp
//
// Code generation for function 'mldivide'
//

// Include files
#include "mldivide.h"
#include "obj_data.h"
#include "obj_mexutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo o_emlrtRSI{
    20,         // lineNo
    "mldivide", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    42,      // lineNo
    "mldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    44,      // lineNo
    "mldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo
    r_emlrtRSI{
        67,        // lineNo
        "lusolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    s_emlrtRSI{
        112,          // lineNo
        "lusolveNxN", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    t_emlrtRSI{
        109,          // lineNo
        "lusolveNxN", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    u_emlrtRSI{
        124,          // lineNo
        "InvAtimesX", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo v_emlrtRSI{
    19,        // lineNo
    "xgetrfs", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    108,      // lineNo
    "cmldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    70,       // lineNo
    "cmldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo
    y_emlrtRSI{
        90,              // lineNo
        "warn_singular", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    ab_emlrtRSI{
        61,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    bb_emlrtRSI{
        72,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    cb_emlrtRSI{
        85,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo db_emlrtRSI{
    63,       // lineNo
    "xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    138,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo
    fb_emlrtRSI{
        173,          // lineNo
        "rankFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    gb_emlrtRSI{
        172,          // lineNo
        "rankFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    hb_emlrtRSI{
        119,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo ib_emlrtRSI{
    31,         // lineNo
    "xunormqr", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    102,              // lineNo
    "ceval_xunormqr", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtMCInfo
    c_emlrtMCI{
        53,        // lineNo
        19,        // colNo
        "flt2str", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" // pName
    };

static emlrtRTEInfo h_emlrtRTEI{
    16,         // lineNo
    19,         // colNo
    "mldivide", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

static emlrtRTEInfo
    q_emlrtRTEI{
        61,        // lineNo
        2,         // colNo
        "qrsolve", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pName
    };

static emlrtRTEInfo
    r_emlrtRTEI{
        85,        // lineNo
        26,        // colNo
        "qrsolve", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pName
    };

static emlrtRTEInfo s_emlrtRTEI{
    20,         // lineNo
    5,          // colNo
    "mldivide", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

static emlrtRTEInfo
    t_emlrtRTEI{
        119,       // lineNo
        5,         // colNo
        "qrsolve", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pName
    };

static emlrtRTEInfo u_emlrtRTEI{
    48,        // lineNo
    37,        // colNo
    "xgetrfs", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    70,        // lineNo
    23,        // colNo
    "xgetrfs", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    61,       // lineNo
    9,        // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    92,       // lineNo
    22,       // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    105,      // lineNo
    1,        // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    97,       // lineNo
    5,        // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRSInfo
    lb_emlrtRSI{
        53,        // lineNo
        "flt2str", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" // pathName
    };

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14]);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2]{1, 14};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 2, &pArrays[0],
                               (const char_T *)"sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

namespace coder {
void mldivide(const emlrtStack *sp, const ::coder::array<real_T, 2U> &A,
              const ::coder::array<real_T, 2U> &B,
              ::coder::array<real_T, 2U> &Y)
{
  static const int32_T iv[2]{1, 6};
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  array<ptrdiff_t, 1U> IPIV;
  array<ptrdiff_t, 1U> jpvt_t;
  array<real_T, 2U> b_A;
  array<real_T, 2U> b_B;
  array<real_T, 1U> tau;
  array<int32_T, 2U> jpvt;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  const mxArray *b_m;
  const mxArray *y;
  char_T str[14];
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (B.size(0) != A.size(0)) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &o_emlrtRSI;
  if ((A.size(0) == 0) || (A.size(1) == 0) ||
      ((B.size(0) == 0) || (B.size(1) == 0))) {
    int32_T minmn;
    Y.set_size(&s_emlrtRTEI, &st, A.size(1), B.size(1));
    minmn = A.size(1) * B.size(1);
    for (int32_T i{0}; i < minmn; i++) {
      Y[i] = 0.0;
    }
  } else if (A.size(0) == A.size(1)) {
    ptrdiff_t LDA;
    ptrdiff_t info_t;
    int32_T b_na;
    int32_T i;
    int32_T minmn;
    b_st.site = &p_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    Y.set_size(&s_emlrtRTEI, &c_st, B.size(0), B.size(1));
    minmn = B.size(0) * B.size(1);
    for (i = 0; i < minmn; i++) {
      Y[i] = B[i];
    }
    int32_T ma;
    int32_T na;
    d_st.site = &t_emlrtRSI;
    e_st.site = &u_emlrtRSI;
    ma = A.size(0);
    na = A.size(1);
    b_na = B.size(0);
    i = muIntScalarMin_sint32(ma, na);
    b_na = muIntScalarMin_sint32(b_na, i);
    f_st.site = &v_emlrtRSI;
    b_A.set_size(&u_emlrtRTEI, &f_st, A.size(0), A.size(1));
    minmn = A.size(0) * A.size(1);
    for (i = 0; i < minmn; i++) {
      b_A[i] = A[i];
    }
    g_st.site = &x_emlrtRSI;
    info_t = (ptrdiff_t)0.0;
    jpvt_t.set_size(&p_emlrtRTEI, &g_st,
                    static_cast<int32_T>(static_cast<uint16_T>(b_na)));
    minmn = static_cast<uint16_T>(b_na);
    for (i = 0; i < minmn; i++) {
      jpvt_t[i] = info_t;
    }
    ptrdiff_t INFO;
    IPIV.set_size(&v_emlrtRTEI, &f_st, jpvt_t.size(0));
    info_t = (ptrdiff_t)b_na;
    LDA = (ptrdiff_t)b_A.size(0);
    INFO = LAPACKE_dgetrf_work(102, info_t, info_t, &(b_A.data())[0], LDA,
                               &(IPIV.data())[0]);
    b_na = (int32_T)INFO;
    g_st.site = &w_emlrtRSI;
    if (b_na < 0) {
      if (b_na == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &e_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &f_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, b_na);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', info_t, (ptrdiff_t)B.size(1),
                        &(b_A.data())[0], LDA, &(IPIV.data())[0],
                        &(Y.data())[0], (ptrdiff_t)B.size(0));
    if (((A.size(0) != 1) || (A.size(1) != 1)) && (b_na > 0)) {
      d_st.site = &s_emlrtRSI;
      e_st.site = &y_emlrtRSI;
      internal::warning(&e_st);
    }
  } else {
    ptrdiff_t info_t;
    real_T tol;
    int32_T b_i;
    int32_T b_na;
    int32_T i;
    int32_T j;
    int32_T k;
    int32_T m;
    int32_T ma;
    int32_T minmana;
    int32_T minmn;
    int32_T na;
    boolean_T p;
    b_st.site = &q_emlrtRSI;
    b_A.set_size(&q_emlrtRTEI, &b_st, A.size(0), A.size(1));
    minmn = A.size(0) * A.size(1);
    for (i = 0; i < minmn; i++) {
      b_A[i] = A[i];
    }
    c_st.site = &ab_emlrtRSI;
    emlrtHeapReferenceStackEnterFcnR2012b(&c_st);
    m = b_A.size(0);
    na = b_A.size(1) - 1;
    jpvt.set_size(&w_emlrtRTEI, &c_st, 1, b_A.size(1));
    minmn = b_A.size(1);
    for (i = 0; i < minmn; i++) {
      jpvt[i] = 0;
    }
    d_st.site = &db_emlrtRSI;
    ma = b_A.size(0);
    b_na = b_A.size(1);
    minmana = muIntScalarMin_sint32(ma, b_na);
    tau.set_size(&x_emlrtRTEI, &d_st, minmana);
    if ((b_A.size(0) == 0) || (b_A.size(1) == 0) || (b_A.size(0) < 1) ||
        (b_A.size(1) < 1)) {
      tau.set_size(&ab_emlrtRTEI, &d_st, minmana);
      for (i = 0; i < minmana; i++) {
        tau[i] = 0.0;
      }
      for (k = 0; k <= na; k++) {
        jpvt[k] = k + 1;
      }
    } else {
      jpvt_t.set_size(&y_emlrtRTEI, &d_st, b_A.size(1));
      minmn = b_A.size(1);
      for (i = 0; i < minmn; i++) {
        jpvt_t[i] = (ptrdiff_t)0;
      }
      info_t = LAPACKE_dgeqp3(
          102, (ptrdiff_t)b_A.size(0), (ptrdiff_t)b_A.size(1), &(b_A.data())[0],
          (ptrdiff_t)b_A.size(0), &(jpvt_t.data())[0], &(tau.data())[0]);
      b_na = (int32_T)info_t;
      e_st.site = &eb_emlrtRSI;
      if (b_na != 0) {
        p = true;
        if (b_na != -4) {
          if (b_na == -1010) {
            emlrtErrorWithMessageIdR2018a(&e_st, &e_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&e_st, &f_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &fname[0], 12, b_na);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        for (j = 0; j <= na; j++) {
          for (b_i = 0; b_i < m; b_i++) {
            b_A[j * ma + b_i] = rtNaN;
          }
        }
        i = na + 1;
        minmn = muIntScalarMin_sint32(m, i) - 1;
        for (k = 0; k <= minmn; k++) {
          tau[k] = rtNaN;
        }
        i = minmn + 2;
        for (k = i; k <= minmana; k++) {
          tau[k - 1] = 0.0;
        }
        for (k = 0; k <= na; k++) {
          jpvt[k] = k + 1;
        }
      } else {
        for (k = 0; k <= na; k++) {
          jpvt[k] = (int32_T)jpvt_t[k];
        }
      }
    }
    emlrtHeapReferenceStackLeaveFcnR2012b(&b_st);
    c_st.site = &bb_emlrtRSI;
    minmana = 0;
    tol = 0.0;
    if (b_A.size(0) < b_A.size(1)) {
      minmn = b_A.size(0);
      b_na = b_A.size(1);
    } else {
      minmn = b_A.size(1);
      b_na = b_A.size(0);
    }
    if (minmn > 0) {
      tol = 2.2204460492503131E-15 * static_cast<real_T>(b_na) *
            muDoubleScalarAbs(b_A[0]);
      while (
          (minmana < minmn) &&
          (!(muDoubleScalarAbs(b_A[minmana + b_A.size(0) * minmana]) <= tol))) {
        minmana++;
      }
    }
    if (minmana < minmn) {
      d_st.site = &fb_emlrtRSI;
      y = nullptr;
      b_m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&d_st, 6, b_m, &rfmt[0]);
      emlrtAssign(&y, b_m);
      e_st.site = &lb_emlrtRSI;
      emlrt_marshallIn(&e_st,
                       b_sprintf(&e_st, y, emlrt_marshallOut(tol), &c_emlrtMCI),
                       "<output of sprintf>", str);
      d_st.site = &gb_emlrtRSI;
      internal::warning(&d_st, minmana, str);
    }
    c_st.site = &cb_emlrtRSI;
    b_B.set_size(&r_emlrtRTEI, &c_st, B.size(0), B.size(1));
    minmn = B.size(0) * B.size(1);
    for (i = 0; i < minmn; i++) {
      b_B[i] = B[i];
    }
    ma = b_B.size(1);
    Y.set_size(&s_emlrtRTEI, &c_st, b_A.size(1), b_B.size(1));
    minmn = b_A.size(1) * b_B.size(1);
    for (i = 0; i < minmn; i++) {
      Y[i] = 0.0;
    }
    d_st.site = &hb_emlrtRSI;
    e_st.site = &ib_emlrtRSI;
    if ((b_A.size(0) != 0) && (b_A.size(1) != 0)) {
      info_t = (ptrdiff_t)b_B.size(0);
      i = b_A.size(0);
      minmn = b_A.size(1);
      info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)b_B.size(1),
                              (ptrdiff_t)muIntScalarMin_sint32(i, minmn),
                              &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                              &(tau.data())[0], &(b_B.data())[0], info_t);
      b_na = (int32_T)info_t;
      f_st.site = &jb_emlrtRSI;
      if (b_na != 0) {
        boolean_T b_p;
        p = true;
        b_p = false;
        if (b_na == -7) {
          b_p = true;
        } else if (b_na == -9) {
          b_p = true;
        } else if (b_na == -10) {
          b_p = true;
        }
        if (!b_p) {
          if (b_na == -1010) {
            emlrtErrorWithMessageIdR2018a(&f_st, &e_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&f_st, &f_emlrtRTEI,
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          "Coder:toolbox:LAPACKCallErrorInfo",
                                          5, 4, 14, &b_fname[0], 12, b_na);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        if ((b_na == -10) && (b_B.size(1) > 1)) {
          m = b_A.size(0);
          b_na = b_B.size(1);
          i = b_A.size(0);
          minmn = b_A.size(1);
          minmn = muIntScalarMin_sint32(i, minmn);
          for (j = 0; j < minmn; j++) {
            if (tau[j] != 0.0) {
              for (k = 0; k < b_na; k++) {
                tol = b_B[j + b_B.size(0) * k];
                i = j + 2;
                for (b_i = i; b_i <= m; b_i++) {
                  tol += b_A[(b_i + b_A.size(0) * j) - 1] *
                         b_B[(b_i + b_B.size(0) * k) - 1];
                }
                tol *= tau[j];
                if (tol != 0.0) {
                  b_B[j + b_B.size(0) * k] = b_B[j + b_B.size(0) * k] - tol;
                  for (b_i = i; b_i <= m; b_i++) {
                    b_B[(b_i + b_B.size(0) * k) - 1] =
                        b_B[(b_i + b_B.size(0) * k) - 1] -
                        b_A[(b_i + b_A.size(0) * j) - 1] * tol;
                  }
                }
              }
            }
          }
        } else {
          b_na = b_B.size(0);
          minmn = b_B.size(1);
          b_B.set_size(&t_emlrtRTEI, &e_st, b_na, minmn);
          minmn *= b_na;
          for (i = 0; i < minmn; i++) {
            b_B[i] = rtNaN;
          }
        }
      }
    }
    for (k = 0; k < ma; k++) {
      for (b_i = 0; b_i < minmana; b_i++) {
        Y[(jpvt[b_i] + Y.size(0) * k) - 1] = b_B[b_i + b_B.size(0) * k];
      }
      for (j = minmana; j >= 1; j--) {
        i = jpvt[j - 1];
        Y[(i + Y.size(0) * k) - 1] =
            Y[(i + Y.size(0) * k) - 1] / b_A[(j + b_A.size(0) * (j - 1)) - 1];
        for (b_i = 0; b_i <= j - 2; b_i++) {
          Y[(jpvt[b_i] + Y.size(0) * k) - 1] =
              Y[(jpvt[b_i] + Y.size(0) * k) - 1] -
              Y[(jpvt[j - 1] + Y.size(0) * k) - 1] *
                  b_A[b_i + b_A.size(0) * (j - 1)];
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

} // namespace coder

// End of code generation (mldivide.cpp)

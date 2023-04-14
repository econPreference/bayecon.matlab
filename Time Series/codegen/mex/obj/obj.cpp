//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// obj.cpp
//
// Code generation for function 'obj'
//

// Include files
#include "obj.h"
#include "mldivide.h"
#include "obj_data.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    3,                                                                // lineNo
    "obj",                                                            // fcnName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    5,                                                                // lineNo
    "obj",                                                            // fcnName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    6,                                                                // lineNo
    "obj",                                                            // fcnName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    29,                  // lineNo
    "reshapeSizeChecks", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    109,               // lineNo
    "computeDimsData", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    21,    // lineNo
    "det", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    27,       // lineNo
    "xgetrf", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    91,             // lineNo
    "ceval_xgetrf", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    58,             // lineNo
    "ceval_xgetrf", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    90,                  // lineNo
    "eml_mtimes_helper", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    69,                  // lineNo
    "eml_mtimes_helper", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    142,      // lineNo
    "mtimes", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    178,           // lineNo
    "mtimes_blas", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" // pathName
};

static emlrtBCInfo emlrtBCI{
    -1,                                                                // iFirst
    -1,                                                                // iLast
    4,                                                                 // lineNo
    10,                                                                // colNo
    "data",                                                            // aName
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    0 // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                                                                // iFirst
    -1,                                                                // iLast
    5,                                                                 // lineNo
    14,                                                                // colNo
    "data",                                                            // aName
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    0 // checkKind
};

static emlrtDCInfo emlrtDCI{
    5,                                                                 // lineNo
    16,                                                                // colNo
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    1 // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                                                                // iFirst
    -1,                                                                // iLast
    5,                                                                 // lineNo
    16,                                                                // colNo
    "data",                                                            // aName
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    0 // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                                                                // iFirst
    -1,                                                                // iLast
    5,                                                                 // lineNo
    25,                                                                // colNo
    "data",                                                            // aName
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    0 // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    5,                                                                 // lineNo
    27,                                                                // colNo
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    1 // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,                                                                // iFirst
    -1,                                                                // iLast
    5,                                                                 // lineNo
    27,                                                                // colNo
    "data",                                                            // aName
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    0 // checkKind
};

static emlrtRTEInfo emlrtRTEI{
    52,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    59,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    58,                   // lineNo
    23,                   // colNo
    "assertValidSizeArg", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" // pName
};

static emlrtRTEInfo d_emlrtRTEI{
    12,    // lineNo
    15,    // colNo
    "det", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    11,      // lineNo
    15,      // colNo
    "trace", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/trace.m" // pName
};

static emlrtBCInfo f_emlrtBCI{
    -1,                                                                // iFirst
    -1,                                                                // iLast
    4,                                                                 // lineNo
    12,                                                                // colNo
    "data",                                                            // aName
    "obj",                                                             // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m", // pName
    0 // checkKind
};

static emlrtRTEInfo i_emlrtRTEI{
    3,                                                                // lineNo
    1,                                                                // colNo
    "obj",                                                            // fName
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time Series/obj.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    218,      // lineNo
    20,       // colNo
    "mtimes", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    90,                  // lineNo
    5,                   // colNo
    "eml_mtimes_helper", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    58,       // lineNo
    29,       // colNo
    "xgetrf", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    89,       // lineNo
    27,       // colNo
    "xgetrf", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    54,       // lineNo
    5,        // colNo
    "xgetrf", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    76,                  // lineNo
    13,                  // colNo
    "eml_mtimes_helper", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pName
};

// Function Definitions
real_T obj(const emlrtStack *sp, const coder::array<real_T, 1U> &vec_Binv,
           const coder::array<real_T, 2U> &data)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  coder::array<ptrdiff_t, 1U> ipiv_t;
  coder::array<ptrdiff_t, 1U> r;
  coder::array<real_T, 2U> Binv;
  coder::array<real_T, 2U> b_T;
  coder::array<real_T, 2U> y;
  coder::array<int32_T, 2U> ipiv;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T T;
  real_T alpha1;
  real_T beta1;
  real_T fx;
  real_T varargin_1;
  real_T varargin_2;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T n;
  int32_T nx;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &emlrtRSI;
  b_st.site = &emlrtRSI;
  varargin_1 = muDoubleScalarSqrt(static_cast<real_T>(vec_Binv.size(0)));
  b_st.site = &emlrtRSI;
  varargin_2 = muDoubleScalarSqrt(static_cast<real_T>(vec_Binv.size(0)));
  nx = vec_Binv.size(0);
  b_st.site = &d_emlrtRSI;
  c_st.site = &e_emlrtRSI;
  if (varargin_1 != muDoubleScalarFloor(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &c_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  c_st.site = &e_emlrtRSI;
  if (varargin_2 != muDoubleScalarFloor(varargin_2)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &c_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  n = vec_Binv.size(0);
  if (1 > vec_Binv.size(0)) {
    n = 1;
  }
  nx = muIntScalarMax_sint32(nx, n);
  if (static_cast<int32_T>(varargin_1) > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (static_cast<int32_T>(varargin_2) > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  loop_ub = static_cast<int32_T>(varargin_1) * static_cast<int32_T>(varargin_2);
  if (loop_ub != vec_Binv.size(0)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  Binv.set_size(&i_emlrtRTEI, sp, static_cast<int32_T>(varargin_1),
                static_cast<int32_T>(varargin_2));
  for (n = 0; n < loop_ub; n++) {
    Binv[n] = vec_Binv[n];
  }
  if (1 > data.size(0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, data.size(0), &emlrtBCI, (emlrtCTX)sp);
  }
  if (data.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(data.size(1), 1, data.size(1), &f_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  T = data[data.size(0) * (data.size(1) - 1)];
  st.site = &b_emlrtRSI;
  alpha1 = muDoubleScalarSqrt(static_cast<real_T>(vec_Binv.size(0)));
  if (1.0 > alpha1) {
    loop_ub = 0;
  } else {
    if (1 > data.size(0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data.size(0), &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
      emlrtIntegerCheckR2012b(alpha1, &emlrtDCI, (emlrtCTX)sp);
    }
    if (static_cast<int32_T>(alpha1) > data.size(0)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1,
                                    data.size(0), &c_emlrtBCI, (emlrtCTX)sp);
    }
    loop_ub = static_cast<int32_T>(alpha1);
  }
  st.site = &b_emlrtRSI;
  alpha1 = muDoubleScalarSqrt(static_cast<real_T>(vec_Binv.size(0)));
  if (1.0 > alpha1) {
    b_loop_ub = 0;
  } else {
    if (1 > data.size(1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, data.size(1), &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
      emlrtIntegerCheckR2012b(alpha1, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (static_cast<int32_T>(alpha1) > data.size(1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1,
                                    data.size(1), &e_emlrtBCI, (emlrtCTX)sp);
    }
    b_loop_ub = static_cast<int32_T>(alpha1);
  }
  st.site = &c_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  if ((static_cast<int32_T>(varargin_1) == 0) ||
      (static_cast<int32_T>(varargin_2) == 0) ||
      (static_cast<int32_T>(varargin_1) == 0) ||
      (static_cast<int32_T>(varargin_2) == 0)) {
    y.set_size(&k_emlrtRTEI, &b_st, static_cast<int32_T>(varargin_1),
               static_cast<int32_T>(varargin_1));
    nx = static_cast<int32_T>(varargin_1) * static_cast<int32_T>(varargin_1);
    for (n = 0; n < nx; n++) {
      y[n] = 0.0;
    }
  } else {
    c_st.site = &m_emlrtRSI;
    d_st.site = &n_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t) static_cast<int32_T>(varargin_1);
    n_t = (ptrdiff_t) static_cast<int32_T>(varargin_1);
    k_t = (ptrdiff_t) static_cast<int32_T>(varargin_2);
    lda_t = (ptrdiff_t) static_cast<int32_T>(varargin_1);
    ldb_t = (ptrdiff_t) static_cast<int32_T>(varargin_1);
    ldc_t = (ptrdiff_t) static_cast<int32_T>(varargin_1);
    y.set_size(&j_emlrtRTEI, &d_st, static_cast<int32_T>(varargin_1),
               static_cast<int32_T>(varargin_1));
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(Binv.data())[0],
          &lda_t, &(Binv.data())[0], &ldb_t, &beta1, &(y.data())[0], &ldc_t);
  }
  st.site = &c_emlrtRSI;
  if (static_cast<int32_T>(varargin_1) != static_cast<int32_T>(varargin_2)) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((static_cast<int32_T>(varargin_1) == 0) ||
      (static_cast<int32_T>(varargin_2) == 0)) {
    alpha1 = 1.0;
  } else {
    boolean_T isodd;
    nx = static_cast<int32_T>(varargin_1);
    n = static_cast<int32_T>(varargin_2);
    b_st.site = &f_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if ((static_cast<int32_T>(varargin_1) == 0) ||
        (static_cast<int32_T>(varargin_2) == 0)) {
      ipiv.set_size(&n_emlrtRTEI, &c_st, 1, 0);
    } else {
      d_st.site = &i_emlrtRSI;
      m_t = (ptrdiff_t)0.0;
      nx = muIntScalarMin_sint32(nx, n);
      nx = muIntScalarMax_sint32(nx, 1);
      r.set_size(&p_emlrtRTEI, &d_st,
                 static_cast<int32_T>(static_cast<uint16_T>(nx)));
      nx = static_cast<uint16_T>(nx);
      for (n = 0; n < nx; n++) {
        r[n] = m_t;
      }
      ipiv_t.set_size(&l_emlrtRTEI, &c_st, r.size(0));
      m_t = LAPACKE_dgetrf_work(
          102, (ptrdiff_t) static_cast<int32_T>(varargin_1),
          (ptrdiff_t) static_cast<int32_T>(varargin_2), &(Binv.data())[0],
          (ptrdiff_t) static_cast<int32_T>(varargin_1), &(ipiv_t.data())[0]);
      nx = (int32_T)m_t;
      ipiv.set_size(&m_emlrtRTEI, &c_st, 1, ipiv_t.size(0));
      d_st.site = &h_emlrtRSI;
      if (nx < 0) {
        if (nx == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &d_st, &f_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, nx);
        }
      }
      n = ipiv_t.size(0) - 1;
      for (nx = 0; nx <= n; nx++) {
        ipiv[nx] = (int32_T)ipiv_t[nx];
      }
    }
    alpha1 = Binv[0];
    n = Binv.size(0);
    for (nx = 0; nx <= n - 2; nx++) {
      alpha1 *= Binv[(nx + Binv.size(0) * (nx + 1)) + 1];
    }
    isodd = false;
    n = ipiv.size(1);
    for (nx = 0; nx <= n - 2; nx++) {
      if (ipiv[nx] > nx + 1) {
        isodd = !isodd;
      }
    }
    if (isodd) {
      alpha1 = -alpha1;
    }
  }
  if (alpha1 < 0.0) {
    alpha1 = muDoubleScalarLog(muDoubleScalarAbs(alpha1));
  } else {
    alpha1 = muDoubleScalarLog(alpha1);
  }
  st.site = &c_emlrtRSI;
  b_T.set_size(&o_emlrtRTEI, &st, loop_ub, b_loop_ub);
  for (n = 0; n < b_loop_ub; n++) {
    for (nx = 0; nx < loop_ub; nx++) {
      b_T[nx + b_T.size(0) * n] = T * data[nx + data.size(0) * n];
    }
  }
  b_st.site = &c_emlrtRSI;
  coder::mldivide(&b_st, y, b_T, Binv);
  if (Binv.size(0) != Binv.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  beta1 = 0.0;
  n = Binv.size(0);
  for (nx = 0; nx < n; nx++) {
    beta1 += Binv[nx + Binv.size(0) * nx];
  }
  fx = -T * alpha1 - 0.5 * T * beta1;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return fx;
}

// End of code generation (obj.cpp)

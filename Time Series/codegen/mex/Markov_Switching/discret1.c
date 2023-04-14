/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * discret1.c
 *
 * Code generation for function 'discret1'
 *
 */

/* Include files */
#include "discret1.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rand.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo th_emlrtRSI = {
    3,                                                          /* lineNo */
    "cumsumc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cumsumc.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI =
    {
        14,       /* lineNo */
        "cumsum", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
        "cumsum.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    16,      /* lineNo */
    "cumop", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "cumop.m" /* pathName */
};

static emlrtRSInfo wh_emlrtRSI = {
    32,               /* lineNo */
    "useConstantDim", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "useConstantDim.m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    99,         /* lineNo */
    "ndlooper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "cumop.m" /* pathName */
};

static emlrtRSInfo yh_emlrtRSI = {
    125,      /* lineNo */
    "looper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "cumop.m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    3,                                                           /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    4,                                                           /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    9,                                                           /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    13,                                                          /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo ji_emlrtRSI = {
    219,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ki_emlrtRSI = {
    302,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtECInfo v_emlrtECI = {
    1,                                                           /* nDims */
    12,                                                          /* lineNo */
    13,                                                          /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtBCInfo pe_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    4,                                                            /* lineNo */
    19,                                                           /* colNo */
    "psum",                                                       /* aName */
    "discret1",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    4,                                                            /* lineNo */
    17,                                                           /* colNo */
    "psum",                                                       /* aName */
    "discret1",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m", /* pName */
    0 /* checkKind */
};

static emlrtRTEInfo ki_emlrtRTEI = {
    3,                                                          /* lineNo */
    14,                                                         /* colNo */
    "cumsumc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cumsumc.m" /* pName */
};

static emlrtRTEInfo li_emlrtRTEI = {
    4,                                                           /* lineNo */
    1,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = {
    10,                                                          /* lineNo */
    5,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = {
    11,                                                          /* lineNo */
    5,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = {
    3,                                                           /* lineNo */
    1,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo lm_emlrtRTEI = {
    12,                                                          /* lineNo */
    13,                                                          /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRSInfo tm_emlrtRSI = {
    12,                                                          /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

/* Function Declarations */
static void g_binary_expand_op(const emlrtStack *sp, emxArray_boolean_T *ind,
                               const emxArray_boolean_T *ind1);

/* Function Definitions */
static void g_binary_expand_op(const emlrtStack *sp, emxArray_boolean_T *ind,
                               const emxArray_boolean_T *ind1)
{
  emxArray_boolean_T *b_ind;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  const boolean_T *ind1_data;
  boolean_T *b_ind_data;
  boolean_T *ind_data;
  ind1_data = ind1->data;
  ind_data = ind->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_boolean_T(sp, &b_ind, 1, &lm_emlrtRTEI);
  i = b_ind->size[0];
  if (ind1->size[0] == 1) {
    b_ind->size[0] = ind->size[0];
  } else {
    b_ind->size[0] = ind1->size[0];
  }
  emxEnsureCapacity_boolean_T(sp, b_ind, i, &lm_emlrtRTEI);
  b_ind_data = b_ind->data;
  stride_0_0 = (ind->size[0] != 1);
  stride_1_0 = (ind1->size[0] != 1);
  if (ind1->size[0] == 1) {
    loop_ub = ind->size[0];
  } else {
    loop_ub = ind1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_ind_data[i] = (ind_data[i * stride_0_0] == ind1_data[i * stride_1_0]);
  }
  i = ind->size[0];
  ind->size[0] = b_ind->size[0];
  emxEnsureCapacity_boolean_T(sp, ind, i, &lm_emlrtRTEI);
  ind_data = ind->data;
  loop_ub = b_ind->size[0];
  for (i = 0; i < loop_ub; i++) {
    ind_data[i] = b_ind_data[i];
  }
  emxFree_boolean_T(sp, &b_ind);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T discret1(const emlrtStack *sp, const emxArray_real_T *p)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_boolean_T *ind;
  emxArray_boolean_T *ind1;
  emxArray_real_T *psum;
  emxArray_real_T *psuml;
  const real_T *p_data;
  real_T retf;
  real_T u;
  real_T *psum_data;
  real_T *psuml_data;
  int32_T iv[2];
  int32_T iindx;
  int32_T k;
  int32_T loop_ub;
  boolean_T b;
  boolean_T ex;
  boolean_T *ind1_data;
  boolean_T *ind_data;
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
  p_data = p->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &psum, 1, &oi_emlrtRTEI);
  st.site = &bi_emlrtRSI;
  b_st.site = &th_emlrtRSI;
  iindx = psum->size[0];
  psum->size[0] = p->size[0];
  emxEnsureCapacity_real_T(&b_st, psum, iindx, &ki_emlrtRTEI);
  psum_data = psum->data;
  loop_ub = p->size[0];
  for (iindx = 0; iindx < loop_ub; iindx++) {
    psum_data[iindx] = p_data[iindx];
  }
  c_st.site = &uh_emlrtRSI;
  loop_ub = 2;
  if (p->size[0] != 1) {
    loop_ub = 1;
  }
  d_st.site = &vh_emlrtRSI;
  if (1 == loop_ub) {
    e_st.site = &wh_emlrtRSI;
    f_st.site = &xh_emlrtRSI;
    if (p->size[0] != 0) {
      g_st.site = &yh_emlrtRSI;
      if (p->size[0] != 1) {
        loop_ub = p->size[0];
        for (k = 0; k <= loop_ub - 2; k++) {
          psum_data[k + 1] += psum_data[k];
        }
      }
    }
  }
  /* cum = cum'; */
  if (1 > p->size[0] - 1) {
    loop_ub = 0;
  } else {
    if (1 > psum->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, psum->size[0], &qe_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((p->size[0] - 1 < 1) || (p->size[0] - 1 > psum->size[0])) {
      emlrtDynamicBoundsCheckR2012b(p->size[0] - 1, 1, psum->size[0],
                                    &pe_emlrtBCI, (emlrtCTX)sp);
    }
    loop_ub = p->size[0] - 1;
  }
  emxInit_real_T(sp, &psuml, 1, &li_emlrtRTEI);
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &ci_emlrtRSI;
  indexShapeCheck(&st, psum->size[0], iv);
  iindx = psuml->size[0];
  psuml->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(sp, psuml, iindx, &li_emlrtRTEI);
  psuml_data = psuml->data;
  psuml_data[0] = 0.0;
  for (iindx = 0; iindx < loop_ub; iindx++) {
    psuml_data[iindx + 1] = psum_data[iindx];
  }
  emxInit_boolean_T(sp, &ind, 1, &mi_emlrtRTEI);
  st.site = &di_emlrtRSI;
  u = b_rand();
  iindx = ind->size[0];
  ind->size[0] = psuml->size[0];
  emxEnsureCapacity_boolean_T(sp, ind, iindx, &mi_emlrtRTEI);
  ind_data = ind->data;
  loop_ub = psuml->size[0];
  for (iindx = 0; iindx < loop_ub; iindx++) {
    ind_data[iindx] = (u > psuml_data[iindx]);
  }
  emxFree_real_T(sp, &psuml);
  emxInit_boolean_T(sp, &ind1, 1, &ni_emlrtRTEI);
  iindx = ind1->size[0];
  ind1->size[0] = psum->size[0];
  emxEnsureCapacity_boolean_T(sp, ind1, iindx, &ni_emlrtRTEI);
  ind1_data = ind1->data;
  loop_ub = psum->size[0];
  for (iindx = 0; iindx < loop_ub; iindx++) {
    ind1_data[iindx] = (u <= psum_data[iindx]);
  }
  emxFree_real_T(sp, &psum);
  if ((ind->size[0] != ind1->size[0]) &&
      ((ind->size[0] != 1) && (ind1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(ind->size[0], ind1->size[0], &v_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (ind->size[0] == ind1->size[0]) {
    loop_ub = ind->size[0];
    for (iindx = 0; iindx < loop_ub; iindx++) {
      ind_data[iindx] = (ind_data[iindx] == ind1_data[iindx]);
    }
  } else {
    st.site = &tm_emlrtRSI;
    g_binary_expand_op(&st, ind, ind1);
    ind_data = ind->data;
  }
  emxFree_boolean_T(sp, &ind1);
  st.site = &ei_emlrtRSI;
  b_st.site = &gi_emlrtRSI;
  c_st.site = &hi_emlrtRSI;
  d_st.site = &ii_emlrtRSI;
  if (ind->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ji_emlrtRSI;
  loop_ub = ind->size[0];
  f_st.site = &ki_emlrtRSI;
  iindx = 1;
  ex = ind_data[0];
  g_st.site = &cf_emlrtRSI;
  if ((2 <= ind->size[0]) && (ind->size[0] > 2147483646)) {
    h_st.site = &ub_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  for (k = 2; k <= loop_ub; k++) {
    b = ind_data[k - 1];
    if ((int32_T)ex < (int32_T)b) {
      ex = true;
      iindx = k;
    }
  }
  emxFree_boolean_T(&f_st, &ind);
  retf = iindx;
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtCTX)sp);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return retf;
}

/* End of code generation (discret1.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gen_beta.c
 *
 * Code generation for function 'Gen_beta'
 *
 */

/* Include files */
#include "Gen_beta.h"
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "inv.h"
#include "mtimes.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "lapacke.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ud_emlrtRSI =
    {
        2,          /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI =
    {
        3,          /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI =
    {
        5,          /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI =
    {
        11,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI =
    {
        12,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo ae_emlrtRSI =
    {
        18,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo be_emlrtRSI =
    {
        20,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI =
    {
        21,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI =
    {
        23,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI =
    {
        24,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo af_emlrtRSI = {
    74,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo bf_emlrtRSI = {
    91,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo cf_emlrtRSI = {
    92,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo df_emlrtRSI = {
    79,             /* lineNo */
    "ceval_xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    13,       /* lineNo */
    "xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtECInfo o_emlrtECI =
    {
        1,          /* nDims */
        11,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo p_emlrtECI =
    {
        2,          /* nDims */
        11,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtBCInfo eb_emlrtBCI =
    {
        -1,         /* iFirst */
        -1,         /* iLast */
        12,         /* lineNo */
        35,         /* colNo */
        "Y",        /* aName */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m", /* pName */
        0                    /* checkKind */
};

static emlrtECInfo q_emlrtECI =
    {
        1,          /* nDims */
        12,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo r_emlrtECI =
    {
        1,          /* nDims */
        16,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo s_emlrtECI =
    {
        2,          /* nDims */
        16,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo t_emlrtECI =
    {
        1,          /* nDims */
        17,         /* lineNo */
        19,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo u_emlrtECI =
    {
        2,          /* nDims */
        17,         /* lineNo */
        19,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo v_emlrtECI =
    {
        1,          /* nDims */
        19,         /* lineNo */
        15,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo w_emlrtECI =
    {
        2,          /* nDims */
        19,         /* lineNo */
        15,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo x_emlrtECI =
    {
        1,          /* nDims */
        20,         /* lineNo */
        9,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtECInfo y_emlrtECI =
    {
        1,          /* nDims */
        24,         /* lineNo */
        12,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    54,         /* lineNo */
    15,         /* colNo */
    "cholesky", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtRTEInfo m_emlrtRTEI = {
    80,         /* lineNo */
    23,         /* colNo */
    "cholesky", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtRTEInfo md_emlrtRTEI =
    {
        6,          /* lineNo */
        5,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI =
    {
        7,          /* lineNo */
        5,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI =
    {
        16,         /* lineNo */
        5,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI =
    {
        11,         /* lineNo */
        19,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI =
    {
        19,         /* lineNo */
        5,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI =
    {
        12,         /* lineNo */
        33,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI =
    {
        24,         /* lineNo */
        17,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI =
    {
        12,         /* lineNo */
        19,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI =
    {
        2,          /* lineNo */
        1,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI =
    {
        3,          /* lineNo */
        1,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI =
    {
        5,          /* lineNo */
        2,          /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI =
    {
        1,          /* lineNo */
        17,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI =
    {
        3,          /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI =
    {
        12,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI =
    {
        11,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRTEInfo tf_emlrtRTEI =
    {
        16,         /* lineNo */
        14,         /* colNo */
        "Gen_beta", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pName */
};

static emlrtRSInfo ph_emlrtRSI =
    {
        16,         /* lineNo */
        "Gen_beta", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_beta.m" /* pathName */
};

/* Function Declarations */
static void b_plus(const emlrtStack *sp, emxArray_real_T *XX,
                   const emxArray_real_T *r1);

static void c_plus(const emlrtStack *sp, emxArray_real_T *XX,
                   const emxArray_real_T *precb_);

static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Omega_inv,
                               emlrtRSInfo qh_emlrtRSI,
                               const emxArray_real_T *XX);

static void plus(const emlrtStack *sp, emxArray_real_T *XY,
                 const emxArray_real_T *r1);

/* Function Definitions */
static void b_plus(const emlrtStack *sp, emxArray_real_T *XX,
                   const emxArray_real_T *r1)
{
  emxArray_real_T *b_XX;
  const real_T *r;
  real_T *XX_data;
  real_T *b_XX_data;
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
  r = r1->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XX, 2, &sf_emlrtRTEI);
  i = b_XX->size[0] * b_XX->size[1];
  if (r1->size[0] == 1) {
    b_XX->size[0] = XX->size[0];
  } else {
    b_XX->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    b_XX->size[1] = XX->size[1];
  } else {
    b_XX->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_XX, i, &sf_emlrtRTEI);
  b_XX_data = b_XX->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_XX_data[i1 + b_XX->size[0] * i] =
          XX_data[i1 * stride_0_0 + XX->size[0] * aux_0_1] +
          r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = XX->size[0] * XX->size[1];
  XX->size[0] = b_XX->size[0];
  XX->size[1] = b_XX->size[1];
  emxEnsureCapacity_real_T(sp, XX, i, &sf_emlrtRTEI);
  XX_data = XX->data;
  loop_ub = b_XX->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_XX->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      XX_data[i1 + XX->size[0] * i] = b_XX_data[i1 + b_XX->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_XX);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_plus(const emlrtStack *sp, emxArray_real_T *XX,
                   const emxArray_real_T *precb_)
{
  emxArray_real_T *b_precb_;
  const real_T *precb__data;
  real_T *XX_data;
  real_T *b_precb__data;
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
  precb__data = precb_->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_precb_, 2, &tf_emlrtRTEI);
  i = b_precb_->size[0] * b_precb_->size[1];
  if (XX->size[0] == 1) {
    b_precb_->size[0] = precb_->size[0];
  } else {
    b_precb_->size[0] = XX->size[0];
  }
  if (XX->size[1] == 1) {
    b_precb_->size[1] = precb_->size[1];
  } else {
    b_precb_->size[1] = XX->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_precb_, i, &tf_emlrtRTEI);
  b_precb__data = b_precb_->data;
  stride_0_0 = (precb_->size[0] != 1);
  stride_0_1 = (precb_->size[1] != 1);
  stride_1_0 = (XX->size[0] != 1);
  stride_1_1 = (XX->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (XX->size[1] == 1) {
    loop_ub = precb_->size[1];
  } else {
    loop_ub = XX->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (XX->size[0] == 1) {
      b_loop_ub = precb_->size[0];
    } else {
      b_loop_ub = XX->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_precb__data[i1 + b_precb_->size[0] * i] =
          precb__data[i1 * stride_0_0 + precb_->size[0] * aux_0_1] +
          XX_data[i1 * stride_1_0 + XX->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = XX->size[0] * XX->size[1];
  XX->size[0] = b_precb_->size[0];
  XX->size[1] = b_precb_->size[1];
  emxEnsureCapacity_real_T(sp, XX, i, &tf_emlrtRTEI);
  XX_data = XX->data;
  loop_ub = b_precb_->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_precb_->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      XX_data[i1 + XX->size[0] * i] = b_precb__data[i1 + b_precb_->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_precb_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Omega_inv,
                               emlrtRSInfo qh_emlrtRSI,
                               const emxArray_real_T *XX)
{
  emlrtStack st;
  emxArray_real_T *r;
  const real_T *XX_data;
  real_T *r1;
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
  st.prev = sp;
  st.tls = sp->tls;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &qb_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (XX->size[1] == 1) {
    r->size[0] = XX->size[0];
  } else {
    r->size[0] = XX->size[1];
  }
  if (XX->size[0] == 1) {
    r->size[1] = XX->size[1];
  } else {
    r->size[1] = XX->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &qb_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (XX->size[1] != 1);
  stride_1_1 = (XX->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (XX->size[0] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = XX->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (XX->size[1] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = XX->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (XX_data[i1 * stride_0_0 + XX->size[0] * aux_0_1] +
                 XX_data[aux_1_1 + XX->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &qh_emlrtRSI;
  inv(&st, r, Omega_inv);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *XY,
                 const emxArray_real_T *r1)
{
  emxArray_real_T *b_XY;
  const real_T *r;
  real_T *XY_data;
  real_T *b_XY_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  XY_data = XY->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XY, 1, &rf_emlrtRTEI);
  i = b_XY->size[0];
  if (r1->size[0] == 1) {
    b_XY->size[0] = XY->size[0];
  } else {
    b_XY->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_XY, i, &rf_emlrtRTEI);
  b_XY_data = b_XY->data;
  stride_0_0 = (XY->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = XY->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_XY_data[i] = XY_data[i * stride_0_0] + r[i * stride_1_0];
  }
  i = XY->size[0];
  XY->size[0] = b_XY->size[0];
  emxEnsureCapacity_real_T(sp, XY, i, &rf_emlrtRTEI);
  XY_data = XY->data;
  loop_ub = b_XY->size[0];
  for (i = 0; i < loop_ub; i++) {
    XY_data[i] = b_XY_data[i];
  }
  emxFree_real_T(sp, &b_XY);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y,
              const emxArray_real_T *Omega, const emxArray_real_T *b_,
              const emxArray_real_T *var_, emxArray_real_T *beta)
{
  static const char_T fname[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'p', 'o', 't', 'r', 'f',
                                   '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *Omega_inv;
  emxArray_real_T *XX;
  emxArray_real_T *XY;
  emxArray_real_T *Xt;
  emxArray_real_T *precb_;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  const real_T *Y_data;
  real_T alpha1;
  real_T beta1;
  real_T *XX_data;
  real_T *XY_data;
  real_T *Xt_data;
  real_T *precb__data;
  real_T *r3;
  real_T *r4;
  real_T *y_data;
  int32_T b_i;
  int32_T i;
  int32_T jmax;
  int32_T loop_ub;
  int32_T n;
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
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Omega_inv, 2, &vd_emlrtRTEI);
  emxInit_real_T(sp, &precb_, 2, &wd_emlrtRTEI);
  emxInit_real_T(sp, &Xt, 2, &xd_emlrtRTEI);
  emxInit_real_T(sp, &XX, 2, &md_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &ae_emlrtRTEI);
  st.site = &ud_emlrtRSI;
  inv(&st, Omega, Omega_inv);
  st.site = &vd_emlrtRSI;
  diag(&st, var_, r);
  st.site = &vd_emlrtRSI;
  inv(&st, r, precb_);
  precb__data = precb_->data;
  /*  number of columns */
  st.site = &wd_emlrtRSI;
  eye(&st, Y->size[1], Xt);
  Xt_data = Xt->data;
  /*  number of columns */
  i = XX->size[0] * XX->size[1];
  XX->size[0] = precb_->size[0];
  XX->size[1] = precb_->size[1];
  emxEnsureCapacity_real_T(sp, XX, i, &md_emlrtRTEI);
  XX_data = XX->data;
  loop_ub = precb_->size[0] * precb_->size[1];
  for (i = 0; i < loop_ub; i++) {
    XX_data[i] = 0.0;
  }
  emxInit_real_T(sp, &XY, 1, &nd_emlrtRTEI);
  i = XY->size[0];
  XY->size[0] = precb_->size[0];
  emxEnsureCapacity_real_T(sp, XY, i, &nd_emlrtRTEI);
  XY_data = XY->data;
  loop_ub = precb_->size[0];
  for (i = 0; i < loop_ub; i++) {
    XY_data[i] = 0.0;
  }
  i = Y->size[0];
  emxInit_real_T(sp, &r1, 2, &yd_emlrtRTEI);
  emxInit_real_T(sp, &r2, 1, &yd_emlrtRTEI);
  emxInit_real_T(sp, &y, 2, &pd_emlrtRTEI);
  for (n = 0; n < i; n++) {
    st.site = &xd_emlrtRSI;
    b_st.site = &ve_emlrtRSI;
    dynamic_size_checks(&b_st, Xt, Omega_inv, Xt->size[0], Omega_inv->size[0]);
    b_st.site = &ue_emlrtRSI;
    mtimes(&b_st, Xt, Omega_inv, y);
    y_data = y->data;
    st.site = &xd_emlrtRSI;
    b_st.site = &ve_emlrtRSI;
    dynamic_size_checks(&b_st, y, Xt, y->size[1], Xt->size[0]);
    b_st.site = &ue_emlrtRSI;
    if ((y->size[0] == 0) || (y->size[1] == 0) || (Xt->size[0] == 0) ||
        (Xt->size[1] == 0)) {
      b_i = r->size[0] * r->size[1];
      r->size[0] = y->size[0];
      r->size[1] = Xt->size[1];
      emxEnsureCapacity_real_T(&b_st, r, b_i, &pd_emlrtRTEI);
      r3 = r->data;
      loop_ub = y->size[0] * Xt->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        r3[b_i] = 0.0;
      }
    } else {
      c_st.site = &we_emlrtRSI;
      d_st.site = &xe_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)y->size[0];
      n_t = (ptrdiff_t)Xt->size[1];
      k_t = (ptrdiff_t)y->size[1];
      lda_t = (ptrdiff_t)y->size[0];
      ldb_t = (ptrdiff_t)Xt->size[0];
      ldc_t = (ptrdiff_t)y->size[0];
      b_i = r->size[0] * r->size[1];
      r->size[0] = y->size[0];
      r->size[1] = Xt->size[1];
      emxEnsureCapacity_real_T(&d_st, r, b_i, &rd_emlrtRTEI);
      r3 = r->data;
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y_data[0], &lda_t,
            &Xt_data[0], &ldb_t, &beta1, &r3[0], &ldc_t);
    }
    if ((XX->size[0] != r->size[0]) &&
        ((XX->size[0] != 1) && (r->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(XX->size[0], r->size[0], &o_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((XX->size[1] != r->size[1]) &&
        ((XX->size[1] != 1) && (r->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(XX->size[1], r->size[1], &p_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((XX->size[0] == r->size[0]) && (XX->size[1] == r->size[1])) {
      loop_ub = XX->size[0] * XX->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        XX_data[b_i] += r3[b_i];
      }
    } else {
      st.site = &xd_emlrtRSI;
      b_plus(&st, XX, r);
      XX_data = XX->data;
    }
    if (n + 1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, Y->size[0], &eb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = Y->size[1];
    b_i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(sp, r1, b_i, &sd_emlrtRTEI);
    r3 = r1->data;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      r3[b_i] = Y_data[n + Y->size[0] * b_i];
    }
    st.site = &yd_emlrtRSI;
    b_st.site = &ve_emlrtRSI;
    dynamic_size_checks(&b_st, Xt, Omega_inv, Xt->size[0], Omega_inv->size[0]);
    b_st.site = &ue_emlrtRSI;
    mtimes(&b_st, Xt, Omega_inv, y);
    y_data = y->data;
    st.site = &yd_emlrtRSI;
    b_st.site = &ve_emlrtRSI;
    if (Y->size[1] != y->size[1]) {
      if (((y->size[0] == 1) && (y->size[1] == 1)) || (Y->size[1] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &o_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_st.site = &ue_emlrtRSI;
    if ((y->size[0] == 0) || (y->size[1] == 0) || (Y->size[1] == 0)) {
      b_i = r2->size[0];
      r2->size[0] = y->size[0];
      emxEnsureCapacity_real_T(&b_st, r2, b_i, &ud_emlrtRTEI);
      r4 = r2->data;
      loop_ub = y->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        r4[b_i] = 0.0;
      }
    } else {
      c_st.site = &we_emlrtRSI;
      d_st.site = &xe_emlrtRSI;
      TRANSB1 = 'T';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)y->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)y->size[1];
      lda_t = (ptrdiff_t)y->size[0];
      ldb_t = (ptrdiff_t)1;
      ldc_t = (ptrdiff_t)y->size[0];
      b_i = r2->size[0];
      r2->size[0] = y->size[0];
      emxEnsureCapacity_real_T(&d_st, r2, b_i, &rd_emlrtRTEI);
      r4 = r2->data;
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y_data[0], &lda_t,
            &r3[0], &ldb_t, &beta1, &r4[0], &ldc_t);
    }
    loop_ub = XY->size[0];
    if ((XY->size[0] != r2->size[0]) &&
        ((XY->size[0] != 1) && (r2->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(XY->size[0], r2->size[0], &q_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (XY->size[0] == r2->size[0]) {
      for (b_i = 0; b_i < loop_ub; b_i++) {
        XY_data[b_i] += r4[b_i];
      }
    } else {
      st.site = &yd_emlrtRSI;
      plus(&st, XY, r2);
      XY_data = XY->data;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &Xt);
  if ((precb_->size[0] != XX->size[0]) &&
      ((precb_->size[0] != 1) && (XX->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[0], XX->size[0], &r_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((precb_->size[1] != XX->size[1]) &&
      ((precb_->size[1] != 1) && (XX->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[1], XX->size[1], &s_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((precb_->size[0] == XX->size[0]) && (precb_->size[1] == XX->size[1])) {
    loop_ub = precb_->size[0] * precb_->size[1];
    i = XX->size[0] * XX->size[1];
    XX->size[0] = precb_->size[0];
    XX->size[1] = precb_->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &od_emlrtRTEI);
    XX_data = XX->data;
    for (i = 0; i < loop_ub; i++) {
      XX_data[i] += precb__data[i];
    }
  } else {
    st.site = &ph_emlrtRSI;
    c_plus(&st, XX, precb_);
    XX_data = XX->data;
  }
  if ((XX->size[0] != XX->size[1]) &&
      ((XX->size[0] != 1) && (XX->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], XX->size[1], &t_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((XX->size[0] != XX->size[1]) &&
      ((XX->size[1] != 1) && (XX->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], XX->size[0], &u_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (XX->size[0] == XX->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = XX->size[0];
    r->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &qb_emlrtRTEI);
    r3 = r->data;
    loop_ub = XX->size[1];
    for (i = 0; i < loop_ub; i++) {
      n = XX->size[0];
      for (b_i = 0; b_i < n; b_i++) {
        r3[b_i + r->size[0] * i] = 0.5 * (XX_data[b_i + XX->size[0] * i] +
                                          XX_data[i + XX->size[0] * b_i]);
      }
    }
    st.site = &ae_emlrtRSI;
    inv(&st, r, Omega_inv);
    Xt_data = Omega_inv->data;
  } else {
    st.site = &ae_emlrtRSI;
    g_binary_expand_op(&st, Omega_inv, ae_emlrtRSI, XX);
    Xt_data = Omega_inv->data;
  }
  emxFree_real_T(sp, &XX);
  if ((Omega_inv->size[0] != Omega_inv->size[1]) &&
      ((Omega_inv->size[0] != 1) && (Omega_inv->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Omega_inv->size[0], Omega_inv->size[1],
                                &v_emlrtECI, (emlrtCTX)sp);
  }
  if ((Omega_inv->size[0] != Omega_inv->size[1]) &&
      ((Omega_inv->size[1] != 1) && (Omega_inv->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Omega_inv->size[1], Omega_inv->size[0],
                                &w_emlrtECI, (emlrtCTX)sp);
  }
  if (Omega_inv->size[0] == Omega_inv->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = Omega_inv->size[0];
    r->size[1] = Omega_inv->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &qb_emlrtRTEI);
    r3 = r->data;
    loop_ub = Omega_inv->size[1];
    for (i = 0; i < loop_ub; i++) {
      n = Omega_inv->size[0];
      for (b_i = 0; b_i < n; b_i++) {
        r3[b_i + r->size[0] * i] =
            0.5 * (Xt_data[b_i + Omega_inv->size[0] * i] +
                   Xt_data[i + Omega_inv->size[0] * b_i]);
      }
    }
    i = Omega_inv->size[0] * Omega_inv->size[1];
    Omega_inv->size[0] = r->size[0];
    Omega_inv->size[1] = r->size[1];
    emxEnsureCapacity_real_T(sp, Omega_inv, i, &qd_emlrtRTEI);
    Xt_data = Omega_inv->data;
    loop_ub = r->size[0] * r->size[1];
    for (i = 0; i < loop_ub; i++) {
      Xt_data[i] = r3[i];
    }
  } else {
    st.site = &nh_emlrtRSI;
    binary_expand_op(&st, Omega_inv);
    Xt_data = Omega_inv->data;
  }
  emxFree_real_T(sp, &r);
  st.site = &be_emlrtRSI;
  b_st.site = &ve_emlrtRSI;
  b_dynamic_size_checks(&b_st, precb_, b_, precb_->size[1], b_->size[0]);
  b_st.site = &ue_emlrtRSI;
  b_mtimes(&b_st, precb_, b_, r2);
  r4 = r2->data;
  emxFree_real_T(sp, &precb_);
  if ((XY->size[0] != r2->size[0]) &&
      ((XY->size[0] != 1) && (r2->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XY->size[0], r2->size[0], &x_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (XY->size[0] == r2->size[0]) {
    loop_ub = XY->size[0];
    for (i = 0; i < loop_ub; i++) {
      XY_data[i] += r4[i];
    }
  } else {
    st.site = &be_emlrtRSI;
    plus(&st, XY, r2);
  }
  /*  b_ = B0 */
  st.site = &ce_emlrtRSI;
  b_st.site = &ve_emlrtRSI;
  b_dynamic_size_checks(&b_st, Omega_inv, XY, Omega_inv->size[1], XY->size[0]);
  b_st.site = &ue_emlrtRSI;
  b_mtimes(&b_st, Omega_inv, XY, beta);
  precb__data = beta->data;
  /*  full conditional mean   */
  st.site = &de_emlrtRSI;
  b_st.site = &ye_emlrtRSI;
  n = Omega_inv->size[1];
  if (Omega_inv->size[0] != Omega_inv->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if (Omega_inv->size[1] != 0) {
    c_st.site = &af_emlrtRSI;
    d_st.site = &ef_emlrtRSI;
    m_t = LAPACKE_dpotrf_work(102, 'U', (ptrdiff_t)Omega_inv->size[1],
                              &Xt_data[0], (ptrdiff_t)Omega_inv->size[1]);
    loop_ub = (int32_T)m_t;
    e_st.site = &df_emlrtRSI;
    if (loop_ub < 0) {
      if (loop_ub == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &j_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &fname[0], 12, loop_ub);
      }
    }
    if (loop_ub == 0) {
      jmax = n;
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "Coder:MATLAB:posdef",
                                    "Coder:MATLAB:posdef", 0);
    }
    c_st.site = &bf_emlrtRSI;
    if ((1 <= jmax) && (jmax > 2147483646)) {
      d_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (loop_ub = 0; loop_ub < jmax; loop_ub++) {
      n = loop_ub + 2;
      c_st.site = &cf_emlrtRSI;
      for (i = n; i <= jmax; i++) {
        Xt_data[(i + Omega_inv->size[0] * loop_ub) - 1] = 0.0;
      }
    }
  }
  st.site = &ee_emlrtRSI;
  b_st.site = &ee_emlrtRSI;
  randn(&b_st, Y->size[1], XY);
  XY_data = XY->data;
  b_st.site = &ve_emlrtRSI;
  b_dynamic_size_checks(&b_st, Omega_inv, XY, Omega_inv->size[0], XY->size[0]);
  b_st.site = &ue_emlrtRSI;
  if ((Omega_inv->size[0] == 0) || (Omega_inv->size[1] == 0) ||
      (XY->size[0] == 0)) {
    i = r2->size[0];
    r2->size[0] = Omega_inv->size[1];
    emxEnsureCapacity_real_T(&b_st, r2, i, &td_emlrtRTEI);
    r4 = r2->data;
    loop_ub = Omega_inv->size[1];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = 0.0;
    }
  } else {
    c_st.site = &we_emlrtRSI;
    d_st.site = &xe_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)Omega_inv->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)Omega_inv->size[0];
    lda_t = (ptrdiff_t)Omega_inv->size[0];
    ldb_t = (ptrdiff_t)XY->size[0];
    ldc_t = (ptrdiff_t)Omega_inv->size[1];
    i = r2->size[0];
    r2->size[0] = Omega_inv->size[1];
    emxEnsureCapacity_real_T(&d_st, r2, i, &rd_emlrtRTEI);
    r4 = r2->data;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &Xt_data[0], &lda_t,
          &XY_data[0], &ldb_t, &beta1, &r4[0], &ldc_t);
  }
  emxFree_real_T(&b_st, &XY);
  emxFree_real_T(&b_st, &Omega_inv);
  if ((beta->size[0] != r2->size[0]) &&
      ((beta->size[0] != 1) && (r2->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], r2->size[0], &y_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (beta->size[0] == r2->size[0]) {
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      precb__data[i] += r4[i];
    }
  } else {
    st.site = &ee_emlrtRSI;
    plus(&st, beta, r2);
  }
  emxFree_real_T(sp, &r2);
  /*  beta sampling ���� */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Gen_beta.c) */

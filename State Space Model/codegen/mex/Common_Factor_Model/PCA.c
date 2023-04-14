/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PCA.c
 *
 * Code generation for function 'PCA'
 *
 */

/* Include files */
#include "PCA.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "demeanc.h"
#include "diag.h"
#include "div.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "std.h"

/* Variable Definitions */
static emlrtRSInfo t_emlrtRSI = {
    5,                                                      /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    9,                                                      /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    11,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    12,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    14,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    16,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    17,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    22,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    23,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    25,                                                     /* lineNo */
    "PCA",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    6,                                                          /* lineNo */
    "demeanc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pathName */
};

static emlrtRSInfo
    jc_emlrtRSI =
        {
            49,     /* lineNo */
            "mean", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pathName */
};

static emlrtRSInfo
    ne_emlrtRSI =
        {
            27,     /* lineNo */
            "sort", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "sort.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    37,     /* lineNo */
    "flip", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/flip.m" /* pathName
                                                                           */
};

static emlrtRSInfo cf_emlrtRSI = {
    29,     /* lineNo */
    "flip", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/flip.m" /* pathName
                                                                           */
};

static emlrtRTEInfo
    f_emlrtRTEI =
        {
            22,     /* lineNo */
            5,      /* colNo */
            "mean", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pName */
};

static emlrtRTEInfo
    g_emlrtRTEI =
        {
            18,     /* lineNo */
            15,     /* colNo */
            "mean", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
            "mean.m" /* pName */
};

static emlrtECInfo j_emlrtECI = {
    2,                                                          /* nDims */
    8,                                                          /* lineNo */
    5,                                                          /* colNo */
    "demeanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pName */
};

static emlrtECInfo k_emlrtECI = {
    1,                                                          /* nDims */
    8,                                                          /* lineNo */
    5,                                                          /* colNo */
    "demeanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pName */
};

static emlrtECInfo l_emlrtECI = {
    -1,                                                     /* nDims */
    9,                                                      /* lineNo */
    5,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    9,                                                       /* lineNo */
    10,                                                      /* colNo */
    "st_Y",                                                  /* aName */
    "PCA",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    9,                                                       /* lineNo */
    22,                                                      /* colNo */
    "rawY",                                                  /* aName */
    "PCA",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    19,                                                      /* lineNo */
    9,                                                       /* colNo */
    "C",                                                     /* aName */
    "PCA",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    23,                                                      /* lineNo */
    17,                                                      /* colNo */
    "diag_V",                                                /* aName */
    "PCA",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    7,                                                      /* lineNo */
    8,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    6,                                                          /* lineNo */
    1,                                                          /* colNo */
    "demeanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    8,                                                          /* lineNo */
    9,                                                          /* colNo */
    "demeanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    19,                                                     /* lineNo */
    1,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    1,                                                      /* lineNo */
    19,                                                     /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    28,                                                     /* lineNo */
    1,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    27,                                                     /* lineNo */
    1,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    5,                                                      /* lineNo */
    1,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    7,                                                      /* lineNo */
    1,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    12,                                                     /* lineNo */
    1,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    22,                                                     /* lineNo */
    1,                                                      /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

static emlrtRSInfo ml_emlrtRSI = {
    8,                                                          /* lineNo */
    "demeanc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pathName */
};

/* Function Definitions */
void PCA(const emlrtStack *sp, const emxArray_real_T *rawY,
         emxArray_creal_T *Output_Principal_Component,
         emxArray_creal_T *Output_Eigenvalues,
         emxArray_creal_T *Output_Eigenvectors)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_creal_T *C;
  emxArray_creal_T *V;
  emxArray_creal_T *diag_V;
  emxArray_creal_T *v;
  emxArray_int32_T *iidx;
  emxArray_real_T *Sigma;
  emxArray_real_T *r;
  emxArray_real_T *st_Y;
  emxArray_real_T *std_Y;
  creal_T *Output_Eigenvectors_data;
  creal_T *diag_V_data;
  creal_T *v_data;
  const real_T *rawY_data;
  real_T V_re_tmp;
  real_T b_V_re_tmp;
  real_T c_V_re_tmp;
  real_T d_V_re_tmp;
  real_T *Sigma_data;
  real_T *st_Y_data;
  real_T *std_Y_data;
  int32_T iv[2];
  int32_T b_i;
  int32_T dim;
  int32_T i;
  int32_T i1;
  int32_T iidx_tmp;
  int32_T k;
  int32_T tmp;
  int32_T tmp_tmp;
  int32_T vstride;
  int32_T *iidx_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  rawY_data = rawY->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &std_Y, 2, &ed_emlrtRTEI);
  emxInit_real_T(sp, &st_Y, 2, &fd_emlrtRTEI);
  /*  number of columns */
  st.site = &t_emlrtRSI;
  b_std(&st, rawY, std_Y);
  std_Y_data = std_Y->data;
  i = st_Y->size[0] * st_Y->size[1];
  st_Y->size[0] = rawY->size[0];
  st_Y->size[1] = rawY->size[1];
  emxEnsureCapacity_real_T(sp, st_Y, i, &vc_emlrtRTEI);
  st_Y_data = st_Y->data;
  i = rawY->size[0];
  if (0 <= rawY->size[0] - 1) {
    iv[0] = 1;
  }
  emxInit_real_T(sp, &r, 2, &bd_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > st_Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, st_Y->size[0], &sb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &u_emlrtRSI;
    if (b_i + 1 > rawY->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, rawY->size[0], &tb_emlrtBCI,
                                    &st);
    }
    b_st.site = &gc_emlrtRSI;
    c_st.site = &hc_emlrtRSI;
    tmp = rawY->size[1];
    if ((rawY->size[1] != 1) && (std_Y->size[1] != 1) &&
        (rawY->size[1] != std_Y->size[1])) {
      emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
    if (rawY->size[1] == std_Y->size[1]) {
      i1 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = rawY->size[1];
      emxEnsureCapacity_real_T(&b_st, r, i1, &xc_emlrtRTEI);
      Sigma_data = r->data;
      for (i1 = 0; i1 < tmp; i1++) {
        Sigma_data[i1] = rawY_data[b_i + rawY->size[0] * i1] / std_Y_data[i1];
      }
    } else {
      c_st.site = &ll_emlrtRSI;
      b_binary_expand_op(&c_st, r, rawY, b_i, std_Y);
      Sigma_data = r->data;
    }
    iv[1] = st_Y->size[1];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &r->size[0], 2, &l_emlrtECI,
                                  (emlrtCTX)sp);
    tmp = r->size[1];
    for (i1 = 0; i1 < tmp; i1++) {
      st_Y_data[b_i + st_Y->size[0] * i1] = Sigma_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &r);
  st.site = &v_emlrtRSI;
  /*  demeaning vectors */
  b_st.site = &ic_emlrtRSI;
  if (((st_Y->size[0] != 1) || (st_Y->size[1] != 1)) && (st_Y->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((st_Y->size[0] == 0) && (st_Y->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  c_st.site = &jc_emlrtRSI;
  combineVectorElements(&c_st, st_Y, std_Y);
  i = std_Y->size[0] * std_Y->size[1];
  std_Y->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, std_Y, i, &wc_emlrtRTEI);
  std_Y_data = std_Y->data;
  tmp = std_Y->size[1] - 1;
  for (i = 0; i <= tmp; i++) {
    std_Y_data[i] /= (real_T)st_Y->size[0];
  }
  emxInit_real_T(&b_st, &Sigma, 2, &gd_emlrtRTEI);
  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = st_Y->size[0];
  Sigma->size[1] = std_Y->size[1];
  emxEnsureCapacity_real_T(&st, Sigma, i, &yc_emlrtRTEI);
  Sigma_data = Sigma->data;
  tmp = std_Y->size[1];
  for (i = 0; i < tmp; i++) {
    dim = st_Y->size[0];
    for (i1 = 0; i1 < dim; i1++) {
      Sigma_data[i1 + Sigma->size[0] * i] = std_Y_data[i];
    }
  }
  emxFree_real_T(&st, &std_Y);
  if ((st_Y->size[0] != Sigma->size[0]) &&
      ((st_Y->size[0] != 1) && (Sigma->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(st_Y->size[0], Sigma->size[0], &k_emlrtECI,
                                &st);
  }
  if ((st_Y->size[1] != Sigma->size[1]) &&
      ((st_Y->size[1] != 1) && (Sigma->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(st_Y->size[1], Sigma->size[1], &j_emlrtECI,
                                &st);
  }
  if ((st_Y->size[0] == Sigma->size[0]) && (st_Y->size[1] == Sigma->size[1])) {
    tmp = st_Y->size[0] * st_Y->size[1];
    for (i = 0; i < tmp; i++) {
      st_Y_data[i] -= Sigma_data[i];
    }
  } else {
    b_st.site = &ml_emlrtRSI;
    minus(&b_st, st_Y, Sigma);
    st_Y_data = st_Y->data;
  }
  emxInit_creal_T(&st, &diag_V, 1, &hd_emlrtRTEI);
  emxInit_creal_T(&st, &C, 2, &bd_emlrtRTEI);
  emxInit_creal_T(&st, &V, 2, &pb_emlrtRTEI);
  emxInit_int32_T(&st, &iidx, 1, &bd_emlrtRTEI);
  st.site = &w_emlrtRSI;
  cov(&st, st_Y, Sigma);
  st.site = &x_emlrtRSI;
  eig(&st, Sigma, C, V);
  diag_V_data = C->data;
  st.site = &y_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  diag(&b_st, V, diag_V);
  b_st.site = &ne_emlrtRSI;
  sort(&b_st, diag_V, iidx);
  iidx_data = iidx->data;
  st.site = &ab_emlrtRSI;
  dim = 2;
  emxFree_real_T(&st, &Sigma);
  if (iidx->size[0] != 1) {
    dim = 1;
  }
  if (iidx->size[0] != 0) {
    if (dim <= 1) {
      tmp = iidx->size[0];
    } else {
      tmp = 1;
    }
    if (tmp > 1) {
      b_st.site = &cf_emlrtRSI;
      vstride = 1;
      for (k = 0; k <= dim - 2; k++) {
        vstride *= iidx->size[0];
      }
      if (dim <= 1) {
        i = iidx->size[0] - 1;
      } else {
        i = 0;
      }
      dim = (i + 1) >> 1;
      i1 = vstride - 1;
      for (b_i = 0; b_i <= i1; b_i++) {
        b_st.site = &bf_emlrtRSI;
        for (k = 0; k < dim; k++) {
          tmp_tmp = b_i + k * vstride;
          tmp = iidx_data[tmp_tmp];
          iidx_tmp = b_i + (i - k) * vstride;
          iidx_data[tmp_tmp] = iidx_data[iidx_tmp];
          iidx_data[iidx_tmp] = tmp;
        }
      }
    }
  }
  tmp = C->size[0];
  i = Output_Eigenvectors->size[0] * Output_Eigenvectors->size[1];
  Output_Eigenvectors->size[0] = C->size[0];
  Output_Eigenvectors->size[1] = iidx->size[0];
  emxEnsureCapacity_creal_T(sp, Output_Eigenvectors, i, &ad_emlrtRTEI);
  Output_Eigenvectors_data = Output_Eigenvectors->data;
  dim = iidx->size[0];
  for (i = 0; i < dim; i++) {
    for (i1 = 0; i1 < tmp; i1++) {
      if ((iidx_data[i] < 1) || (iidx_data[i] > C->size[1])) {
        emlrtDynamicBoundsCheckR2012b(iidx_data[i], 1, C->size[1], &ub_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      Output_Eigenvectors_data[i1 + Output_Eigenvectors->size[0] * i].re =
          diag_V_data[i1 + C->size[0] * (iidx_data[i] - 1)].re;
      if ((iidx_data[i] < 1) || (iidx_data[i] > C->size[1])) {
        emlrtDynamicBoundsCheckR2012b(iidx_data[i], 1, C->size[1], &ub_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      Output_Eigenvectors_data[i1 + Output_Eigenvectors->size[0] * i].im =
          diag_V_data[i1 + C->size[0] * (iidx_data[i] - 1)].im;
    }
  }
  emxInit_creal_T(sp, &v, 1, &bd_emlrtRTEI);
  st.site = &bb_emlrtRSI;
  diag(&st, V, diag_V);
  diag_V_data = diag_V->data;
  st.site = &cb_emlrtRSI;
  i = v->size[0];
  v->size[0] = iidx->size[0];
  emxEnsureCapacity_creal_T(&st, v, i, &bd_emlrtRTEI);
  v_data = v->data;
  tmp = iidx->size[0];
  for (i = 0; i < tmp; i++) {
    if ((iidx_data[i] < 1) || (iidx_data[i] > diag_V->size[0])) {
      emlrtDynamicBoundsCheckR2012b(iidx_data[i], 1, diag_V->size[0],
                                    &vb_emlrtBCI, &st);
    }
    v_data[i].re = diag_V_data[iidx_data[i] - 1].re;
    if ((iidx_data[i] < 1) || (iidx_data[i] > diag_V->size[0])) {
      emlrtDynamicBoundsCheckR2012b(iidx_data[i], 1, diag_V->size[0],
                                    &vb_emlrtBCI, &st);
    }
    v_data[i].im = diag_V_data[iidx_data[i] - 1].im;
  }
  emxFree_creal_T(&st, &diag_V);
  dim = iidx->size[0];
  i = Output_Eigenvalues->size[0] * Output_Eigenvalues->size[1];
  Output_Eigenvalues->size[0] = iidx->size[0];
  Output_Eigenvalues->size[1] = iidx->size[0];
  emxEnsureCapacity_creal_T(&st, Output_Eigenvalues, i, &cd_emlrtRTEI);
  diag_V_data = Output_Eigenvalues->data;
  tmp = iidx->size[0] * iidx->size[0];
  for (i = 0; i < tmp; i++) {
    diag_V_data[i].re = 0.0;
    diag_V_data[i].im = 0.0;
  }
  b_st.site = &df_emlrtRSI;
  if ((1 <= iidx->size[0]) && (iidx->size[0] > 2147483646)) {
    c_st.site = &kb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (tmp_tmp = 0; tmp_tmp < dim; tmp_tmp++) {
    diag_V_data[tmp_tmp + Output_Eigenvalues->size[0] * tmp_tmp] =
        v_data[tmp_tmp];
  }
  emxFree_creal_T(&st, &v);
  st.site = &db_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  if (C->size[0] != st_Y->size[1]) {
    if (((st_Y->size[0] == 1) && (st_Y->size[1] == 1)) ||
        ((C->size[0] == 1) && (iidx->size[0] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxFree_int32_T(&b_st, &iidx);
  emxFree_creal_T(&b_st, &C);
  i = V->size[0] * V->size[1];
  V->size[0] = st_Y->size[0];
  V->size[1] = st_Y->size[1];
  emxEnsureCapacity_creal_T(&st, V, i, &pb_emlrtRTEI);
  diag_V_data = V->data;
  tmp = st_Y->size[0] * st_Y->size[1];
  for (i = 0; i < tmp; i++) {
    diag_V_data[i].re = st_Y_data[i];
    diag_V_data[i].im = 0.0;
  }
  emxFree_real_T(&st, &st_Y);
  i = Output_Principal_Component->size[0] * Output_Principal_Component->size[1];
  Output_Principal_Component->size[0] = V->size[0];
  Output_Principal_Component->size[1] = Output_Eigenvectors->size[1];
  emxEnsureCapacity_creal_T(&st, Output_Principal_Component, i, &dd_emlrtRTEI);
  v_data = Output_Principal_Component->data;
  tmp = V->size[0];
  for (i = 0; i < tmp; i++) {
    dim = Output_Eigenvectors->size[1];
    for (i1 = 0; i1 < dim; i1++) {
      v_data[i + Output_Principal_Component->size[0] * i1].re = 0.0;
      v_data[i + Output_Principal_Component->size[0] * i1].im = 0.0;
      tmp_tmp = V->size[1];
      for (iidx_tmp = 0; iidx_tmp < tmp_tmp; iidx_tmp++) {
        V_re_tmp = diag_V_data[i + V->size[0] * iidx_tmp].re;
        b_V_re_tmp = Output_Eigenvectors_data[iidx_tmp +
                                              Output_Eigenvectors->size[0] * i1]
                         .im;
        c_V_re_tmp = diag_V_data[i + V->size[0] * iidx_tmp].im;
        d_V_re_tmp = Output_Eigenvectors_data[iidx_tmp +
                                              Output_Eigenvectors->size[0] * i1]
                         .re;
        v_data[i + Output_Principal_Component->size[0] * i1].re +=
            V_re_tmp * d_V_re_tmp - c_V_re_tmp * b_V_re_tmp;
        v_data[i + Output_Principal_Component->size[0] * i1].im +=
            V_re_tmp * b_V_re_tmp + c_V_re_tmp * d_V_re_tmp;
      }
    }
  }
  emxFree_creal_T(&st, &V);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (PCA.c) */

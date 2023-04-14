/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gen_S.c
 *
 * Code generation for function 'Gen_S'
 *
 */

/* Include files */
#include "Gen_S.h"
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_types.h"
#include "discret1.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "lnpdfmvn.h"
#include "mrdivide_helper.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "xgetrf.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = {
    10,      /* lineNo */
    "Gen_S", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pathName
                                                                            */
};

static emlrtRSInfo m_emlrtRSI = {
    12,      /* lineNo */
    "Gen_S", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pathName
                                                                            */
};

static emlrtRSInfo n_emlrtRSI = {
    13,      /* lineNo */
    "Gen_S", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pathName
                                                                            */
};

static emlrtRSInfo o_emlrtRSI = {
    14,      /* lineNo */
    "Gen_S", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pathName
                                                                            */
};

static emlrtRSInfo p_emlrtRSI = {
    8,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    9,                                                           /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    14,                                                          /* lineNo */
    "lnpdfmvn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    21,    /* lineNo */
    "det", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pathName
                                                                           */
};

static emlrtRSInfo db_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    10,    /* lineNo */
    "exp", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/exp.m" /* pathName
                                                                          */
};

static emlrtRSInfo yc_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    4,                                                       /* lineNo */
    "sumc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/sumc.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    3,                                                          /* lineNo */
    "cumsumc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cumsumc.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI =
    {
        14,       /* lineNo */
        "cumsum", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/"
        "cumsum.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    16,      /* lineNo */
    "cumop", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "cumop.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    32,               /* lineNo */
    "useConstantDim", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "useConstantDim.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    99,         /* lineNo */
    "ndlooper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "cumop.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    125,      /* lineNo */
    "looper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "cumop.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    3,                                                           /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    4,                                                           /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    9,                                                           /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI = {
    13,                                                          /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    17,    /* lineNo */
    "max", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                            */
};

static emlrtRSInfo pd_emlrtRSI = {
    38,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    77,        /* lineNo */
    "maximum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    219,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    302,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    349,          /* lineNo */
    "minOrMax1D", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtBCInfo
    w_emlrtBCI =
        {
            -1,       /* iFirst */
            -1,       /* iLast */
            9,        /* lineNo */
            41,       /* colNo */
            "Omegam", /* aName */
            "Gen_S",  /* fName */
            "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
            "Normal/Gen_S.m", /* pName */
            0                 /* checkKind */
};

static emlrtECInfo j_emlrtECI = {
    1,       /* nDims */
    9,       /* lineNo */
    30,      /* colNo */
    "Gen_S", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pName
                                                                            */
};

static emlrtECInfo k_emlrtECI = {
    2,       /* nDims */
    9,       /* lineNo */
    30,      /* colNo */
    "Gen_S", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pName
                                                                            */
};

static emlrtBCInfo
    x_emlrtBCI =
        {
            -1,      /* iFirst */
            -1,      /* iLast */
            10,      /* lineNo */
            37,      /* colNo */
            "Y",     /* aName */
            "Gen_S", /* fName */
            "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
            "Normal/Gen_S.m", /* pName */
            0                 /* checkKind */
};

static emlrtBCInfo
    y_emlrtBCI =
        {
            -1,      /* iFirst */
            -1,      /* iLast */
            10,      /* lineNo */
            54,      /* colNo */
            "betam", /* aName */
            "Gen_S", /* fName */
            "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
            "Normal/Gen_S.m", /* pName */
            0                 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    4,                                                            /* lineNo */
    17,                                                           /* colNo */
    "psum",                                                       /* aName */
    "discret1",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    4,                                                            /* lineNo */
    19,                                                           /* colNo */
    "psum",                                                       /* aName */
    "discret1",                                                   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo l_emlrtECI = {
    1,                                                           /* nDims */
    12,                                                          /* lineNo */
    13,                                                          /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    1,                                                           /* nDims */
    9,                                                           /* lineNo */
    15,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtECInfo n_emlrtECI = {
    2,                                                           /* nDims */
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    12,    /* lineNo */
    15,    /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

static emlrtBCInfo
    cb_emlrtBCI =
        {
            -1,      /* iFirst */
            -1,      /* iLast */
            14,      /* lineNo */
            11,      /* colNo */
            "S",     /* aName */
            "Gen_S", /* fName */
            "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
            "Normal/Gen_S.m", /* pName */
            0                 /* checkKind */
};

static emlrtBCInfo
    db_emlrtBCI =
        {
            -1,      /* iFirst */
            -1,      /* iLast */
            10,      /* lineNo */
            19,      /* colNo */
            "pdfym", /* aName */
            "Gen_S", /* fName */
            "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
            "Normal/Gen_S.m", /* pName */
            0                 /* checkKind */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    4,       /* lineNo */
    5,       /* colNo */
    "Gen_S", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pName
                                                                            */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    7,       /* lineNo */
    9,       /* colNo */
    "Gen_S", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pName
                                                                            */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    10,      /* lineNo */
    35,      /* colNo */
    "Gen_S", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pName
                                                                            */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    21,    /* lineNo */
    2,     /* colNo */
    "det", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/det.m" /* pName
                                                                           */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    3,                                                          /* lineNo */
    14,                                                         /* colNo */
    "cumsumc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cumsumc.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    4,                                                           /* lineNo */
    1,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    10,                                                          /* lineNo */
    5,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    11,                                                          /* lineNo */
    5,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    3,                                                           /* lineNo */
    1,                                                           /* colNo */
    "discret1",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    1,       /* lineNo */
    14,      /* colNo */
    "Gen_S", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pName
                                                                            */
};

static emlrtRSInfo oh_emlrtRSI = {
    12,                                                          /* lineNo */
    "discret1",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/discret1.m" /* pathName */
};

/* Function Definitions */
void Gen_S(const emlrtStack *sp, const emxArray_real_T *Y,
           const emxArray_real_T *betam, const emxArray_real_T *Omegam,
           emxArray_real_T *S)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *ind;
  emxArray_boolean_T *ind1;
  emxArray_int32_T *ipiv;
  emxArray_real_T b_A;
  emxArray_real_T *A;
  emxArray_real_T *pdfym;
  emxArray_real_T *pdfym_var;
  emxArray_real_T *psum;
  emxArray_real_T *psuml;
  emxArray_real_T *r;
  emxArray_real_T *x;
  const real_T *Omegam_data;
  const real_T *Y_data;
  const real_T *betam_data;
  real_T mahal;
  real_T u;
  real_T *S_data;
  real_T *pdfym_data;
  real_T *pdfym_var_data;
  real_T *psum_data;
  real_T *psuml_data;
  real_T *x_data;
  int32_T b_pdfym[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_A;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k;
  int32_T loop_ub;
  int32_T m;
  int32_T nx;
  int32_T *ipiv_data;
  boolean_T b;
  boolean_T isodd;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  Omegam_data = Omegam->data;
  betam_data = betam->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  i = S->size[0];
  S->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, S, i, &cc_emlrtRTEI);
  S_data = S->data;
  /*  number of columns */
  i = Y->size[0];
  if (0 <= Y->size[0] - 1) {
    loop_ub = betam->size[1] - 1;
    i1 = betam->size[1] - 1;
    if (0 <= betam->size[1] - 1) {
      i2 = Y->size[1];
      b_loop_ub = Y->size[1];
    }
    b_pdfym[0] = 1;
  }
  emxInit_real_T(sp, &pdfym, 1, &dc_emlrtRTEI);
  emxInit_real_T(sp, &pdfym_var, 2, &ec_emlrtRTEI);
  emxInit_real_T(sp, &psum, 1, &oc_emlrtRTEI);
  emxInit_real_T(sp, &psuml, 1, &lc_emlrtRTEI);
  emxInit_boolean_T(sp, &ind, &mc_emlrtRTEI);
  emxInit_boolean_T(sp, &ind1, &nc_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &pc_emlrtRTEI);
  emxInit_real_T(sp, &A, 2, &ic_emlrtRTEI);
  emxInit_real_T(sp, &x, 2, &pc_emlrtRTEI);
  emxInit_int32_T(sp, &ipiv, 2, &pc_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    i3 = pdfym->size[0];
    pdfym->size[0] = betam->size[1];
    emxEnsureCapacity_real_T(sp, pdfym, i3, &dc_emlrtRTEI);
    pdfym_data = pdfym->data;
    for (i3 = 0; i3 <= loop_ub; i3++) {
      pdfym_data[i3] = 0.0;
    }
    for (m = 0; m <= i1; m++) {
      if (m + 1 > Omegam->size[2]) {
        emlrtDynamicBoundsCheckR2012b(m + 1, 1, Omegam->size[2], &w_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      nx = Omegam->size[0];
      c_loop_ub = Omegam->size[1];
      if ((Omegam->size[0] != Omegam->size[1]) &&
          ((Omegam->size[0] != 1) && (Omegam->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(Omegam->size[0], Omegam->size[1],
                                    &j_emlrtECI, (emlrtCTX)sp);
      }
      if ((Omegam->size[0] != Omegam->size[1]) &&
          ((Omegam->size[1] != 1) && (Omegam->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(Omegam->size[1], Omegam->size[0],
                                    &k_emlrtECI, (emlrtCTX)sp);
      }
      if (Omegam->size[0] == Omegam->size[1]) {
        i3 = pdfym_var->size[0] * pdfym_var->size[1];
        pdfym_var->size[0] = Omegam->size[0];
        pdfym_var->size[1] = Omegam->size[1];
        emxEnsureCapacity_real_T(sp, pdfym_var, i3, &ec_emlrtRTEI);
        pdfym_var_data = pdfym_var->data;
        for (i3 = 0; i3 < c_loop_ub; i3++) {
          for (k = 0; k < nx; k++) {
            pdfym_var_data[k + pdfym_var->size[0] * i3] =
                0.5 * (Omegam_data[(k + Omegam->size[0] * i3) +
                                   Omegam->size[0] * Omegam->size[1] * m] +
                       Omegam_data[(i3 + Omegam->size[0] * k) +
                                   Omegam->size[0] * Omegam->size[1] * m]);
          }
        }
      } else {
        st.site = &nh_emlrtRSI;
        e_binary_expand_op(&st, pdfym_var, Omegam, m);
        pdfym_var_data = pdfym_var->data;
      }
      st.site = &l_emlrtRSI;
      if (b_i + 1 > Y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Y->size[0], &x_emlrtBCI, &st);
      }
      i3 = psuml->size[0];
      psuml->size[0] = i2;
      emxEnsureCapacity_real_T(&st, psuml, i3, &fc_emlrtRTEI);
      psuml_data = psuml->data;
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        psuml_data[i3] = Y_data[b_i + Y->size[0] * i3];
      }
      if (m + 1 > betam->size[1]) {
        emlrtDynamicBoundsCheckR2012b(m + 1, 1, betam->size[1], &y_emlrtBCI,
                                      &st);
      }
      /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
      /*  x =  d by 1 vector */
      b_st.site = &p_emlrtRSI;
      c_st.site = &i_emlrtRSI;
      d_st.site = &j_emlrtRSI;
      b_st.site = &p_emlrtRSI;
      if (pdfym_var->size[0] != pdfym_var->size[1]) {
        emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI,
                                      "Coder:MATLAB:square",
                                      "Coder:MATLAB:square", 0);
      }
      if ((pdfym_var->size[0] == 0) || (pdfym_var->size[1] == 0)) {
        u = 1.0;
      } else {
        i3 = x->size[0] * x->size[1];
        x->size[0] = pdfym_var->size[0];
        x->size[1] = pdfym_var->size[1];
        emxEnsureCapacity_real_T(&b_st, x, i3, &gc_emlrtRTEI);
        x_data = x->data;
        nx = pdfym_var->size[0] * pdfym_var->size[1];
        for (i3 = 0; i3 < nx; i3++) {
          x_data[i3] = pdfym_var_data[i3];
        }
        c_st.site = &s_emlrtRSI;
        xgetrf(&c_st, pdfym_var->size[0], pdfym_var->size[1], x,
               pdfym_var->size[0], ipiv);
        ipiv_data = ipiv->data;
        x_data = x->data;
        u = x_data[0];
        i3 = x->size[0];
        for (k = 0; k <= i3 - 2; k++) {
          u *= x_data[(k + x->size[0] * (k + 1)) + 1];
        }
        isodd = false;
        i3 = ipiv->size[1];
        for (k = 0; k <= i3 - 2; k++) {
          if (ipiv_data[k] > k + 1) {
            isodd = !isodd;
          }
        }
        if (isodd) {
          u = -u;
        }
      }
      b_st.site = &p_emlrtRSI;
      if ((psuml->size[0] != betam->size[0]) &&
          ((psuml->size[0] != 1) && (betam->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(psuml->size[0], betam->size[0], &m_emlrtECI,
                                    &st);
      }
      b_st.site = &q_emlrtRSI;
      if (psuml->size[0] == betam->size[0]) {
        i3 = A->size[0] * A->size[1];
        A->size[0] = 1;
        A->size[1] = psuml->size[0];
        emxEnsureCapacity_real_T(&b_st, A, i3, &ic_emlrtRTEI);
        pdfym_var_data = A->data;
        nx = psuml->size[0];
        for (i3 = 0; i3 < nx; i3++) {
          pdfym_var_data[i3] =
              psuml_data[i3] - betam_data[i3 + betam->size[0] * m];
        }
      } else {
        c_st.site = &q_emlrtRSI;
        d_binary_expand_op(&c_st, A, psuml, betam, m);
      }
      if (pdfym_var->size[1] != A->size[1]) {
        emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:dimagree",
                                      "MATLAB:dimagree", 0);
      }
      c_st.site = &db_emlrtRSI;
      mrdiv(&c_st, A, pdfym_var, r);
      x_data = r->data;
      if (psuml->size[0] == betam->size[0]) {
        i3 = psum->size[0];
        psum->size[0] = psuml->size[0];
        emxEnsureCapacity_real_T(&st, psum, i3, &jc_emlrtRTEI);
        psum_data = psum->data;
        nx = psuml->size[0];
        for (i3 = 0; i3 < nx; i3++) {
          psum_data[i3] = psuml_data[i3] - betam_data[i3 + betam->size[0] * m];
        }
      } else {
        b_st.site = &q_emlrtRSI;
        c_binary_expand_op(&b_st, psum, psuml, betam, m);
        psum_data = psum->data;
      }
      if ((psum->size[0] != r->size[1]) &&
          ((r->size[1] != 1) && (psum->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r->size[1], psum->size[0], &n_emlrtECI,
                                    &st);
      }
      b_st.site = &q_emlrtRSI;
      if (psum->size[0] == r->size[1]) {
        i3 = A->size[0] * A->size[1];
        A->size[0] = 1;
        A->size[1] = r->size[1];
        emxEnsureCapacity_real_T(&b_st, A, i3, &kc_emlrtRTEI);
        pdfym_var_data = A->data;
        nx = r->size[1];
        for (i3 = 0; i3 < nx; i3++) {
          pdfym_var_data[i3] = x_data[i3] * psum_data[i3];
        }
      } else {
        c_st.site = &q_emlrtRSI;
        b_binary_expand_op(&c_st, A, r, psum);
      }
      c_st.site = &jc_emlrtRSI;
      d_st.site = &kc_emlrtRSI;
      e_st.site = &lc_emlrtRSI;
      if (A->size[1] == 0) {
        mahal = 0.0;
      } else {
        f_st.site = &mc_emlrtRSI;
        nx = A->size[1];
        b_A = *A;
        c_A = nx;
        b_A.size = &c_A;
        b_A.numDimensions = 1;
        g_st.site = &nc_emlrtRSI;
        mahal = sumMatrixColumns(&g_st, &b_A, A->size[1]);
      }
      /*  Chris Bregler's trick */
      /*      if any(mahal<0) */
      /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25,
       * 2015 */
      /*      end */
      b_st.site = &r_emlrtRSI;
      if (m + 1 > pdfym->size[0]) {
        emlrtDynamicBoundsCheckR2012b(m + 1, 1, pdfym->size[0], &db_emlrtBCI,
                                      &st);
      }
      pdfym_data[m] =
          -0.5 * mahal -
          muDoubleScalarLog(muDoubleScalarPower(6.2831853071795862,
                                                (real_T)psuml->size[0] / 2.0) *
                            muDoubleScalarSqrt(muDoubleScalarAbs(u)));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    st.site = &m_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    nx = pdfym->size[0];
    c_st.site = &yc_emlrtRSI;
    if ((1 <= pdfym->size[0]) && (pdfym->size[0] > 2147483646)) {
      d_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < nx; k++) {
      pdfym_data[k] = muDoubleScalarExp(pdfym_data[k]);
    }
    st.site = &n_emlrtRSI;
    /*  gauss function */
    b_st.site = &ad_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    d_st.site = &kc_emlrtRSI;
    e_st.site = &lc_emlrtRSI;
    if (pdfym->size[0] == 0) {
      u = 0.0;
    } else {
      f_st.site = &bd_emlrtRSI;
      g_st.site = &nc_emlrtRSI;
      u = sumMatrixColumns(&g_st, pdfym, pdfym->size[0]);
    }
    nx = pdfym->size[0];
    for (i3 = 0; i3 < nx; i3++) {
      pdfym_data[i3] /= u;
    }
    st.site = &o_emlrtRSI;
    b_st.site = &jd_emlrtRSI;
    c_st.site = &cd_emlrtRSI;
    i3 = psum->size[0];
    psum->size[0] = pdfym->size[0];
    emxEnsureCapacity_real_T(&c_st, psum, i3, &hc_emlrtRTEI);
    psum_data = psum->data;
    nx = pdfym->size[0];
    for (i3 = 0; i3 < nx; i3++) {
      psum_data[i3] = pdfym_data[i3];
    }
    d_st.site = &dd_emlrtRSI;
    nx = 2;
    if (pdfym->size[0] != 1) {
      nx = 1;
    }
    e_st.site = &ed_emlrtRSI;
    if (1 == nx) {
      f_st.site = &fd_emlrtRSI;
      g_st.site = &gd_emlrtRSI;
      if (pdfym->size[0] != 0) {
        h_st.site = &hd_emlrtRSI;
        if (pdfym->size[0] != 1) {
          nx = pdfym->size[0];
          for (k = 0; k <= nx - 2; k++) {
            psum_data[k + 1] += psum_data[k];
          }
        }
      }
    }
    /* cum = cum'; */
    if (1 > pdfym->size[0] - 1) {
      nx = 0;
    } else {
      if (1 > psum->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, psum->size[0], &ab_emlrtBCI, &st);
      }
      if ((pdfym->size[0] - 1 < 1) || (pdfym->size[0] - 1 > psum->size[0])) {
        emlrtDynamicBoundsCheckR2012b(pdfym->size[0] - 1, 1, psum->size[0],
                                      &bb_emlrtBCI, &st);
      }
      nx = pdfym->size[0] - 1;
    }
    b_pdfym[1] = nx;
    b_st.site = &kd_emlrtRSI;
    indexShapeCheck(&b_st, psum->size[0], b_pdfym);
    i3 = psuml->size[0];
    psuml->size[0] = nx + 1;
    emxEnsureCapacity_real_T(&st, psuml, i3, &lc_emlrtRTEI);
    psuml_data = psuml->data;
    psuml_data[0] = 0.0;
    for (i3 = 0; i3 < nx; i3++) {
      psuml_data[i3 + 1] = psum_data[i3];
    }
    if (b_i + 1 > S->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S->size[0], &cb_emlrtBCI, &st);
    }
    S_data[b_i] = 0.0;
    b_st.site = &ld_emlrtRSI;
    u = b_rand();
    i3 = ind->size[0];
    ind->size[0] = psuml->size[0];
    emxEnsureCapacity_boolean_T(&st, ind, i3, &mc_emlrtRTEI);
    ind_data = ind->data;
    nx = psuml->size[0];
    for (i3 = 0; i3 < nx; i3++) {
      ind_data[i3] = (u > psuml_data[i3]);
    }
    i3 = ind1->size[0];
    ind1->size[0] = psum->size[0];
    emxEnsureCapacity_boolean_T(&st, ind1, i3, &nc_emlrtRTEI);
    ind1_data = ind1->data;
    nx = psum->size[0];
    for (i3 = 0; i3 < nx; i3++) {
      ind1_data[i3] = (u <= psum_data[i3]);
    }
    if ((ind->size[0] != ind1->size[0]) &&
        ((ind->size[0] != 1) && (ind1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(ind->size[0], ind1->size[0], &l_emlrtECI,
                                  &st);
    }
    if (ind->size[0] == ind1->size[0]) {
      nx = ind->size[0];
      for (i3 = 0; i3 < nx; i3++) {
        ind_data[i3] = (ind_data[i3] == ind1_data[i3]);
      }
    } else {
      b_st.site = &oh_emlrtRSI;
      f_binary_expand_op(&b_st, ind, ind1);
      ind_data = ind->data;
    }
    b_st.site = &md_emlrtRSI;
    c_st.site = &od_emlrtRSI;
    d_st.site = &pd_emlrtRSI;
    e_st.site = &qd_emlrtRSI;
    if (ind->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &e_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    f_st.site = &rd_emlrtRSI;
    nx = ind->size[0];
    g_st.site = &sd_emlrtRSI;
    c_loop_ub = 1;
    isodd = ind_data[0];
    h_st.site = &td_emlrtRSI;
    if ((2 <= ind->size[0]) && (ind->size[0] > 2147483646)) {
      i_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }
    for (k = 2; k <= nx; k++) {
      b = ind_data[k - 1];
      if ((int32_T)isodd < (int32_T)b) {
        isodd = true;
        c_loop_ub = k;
      }
    }
    if (b_i + 1 > S->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S->size[0], &cb_emlrtBCI,
                                    &b_st);
    }
    S_data[b_i] = c_loop_ub;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_int32_T(sp, &ipiv);
  emxFree_real_T(sp, &x);
  emxFree_real_T(sp, &A);
  emxFree_real_T(sp, &r);
  emxFree_boolean_T(sp, &ind1);
  emxFree_boolean_T(sp, &ind);
  emxFree_real_T(sp, &psuml);
  emxFree_real_T(sp, &psum);
  emxFree_real_T(sp, &pdfym_var);
  emxFree_real_T(sp, &pdfym);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Gen_S.c) */

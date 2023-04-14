/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IV_Regression.c
 *
 * Code generation for function 'IV_Regression'
 *
 */

/* Include files */
#include "IV_Regression.h"
#include "IV_Regression_data.h"
#include "IV_Regression_emxutil.h"
#include "IV_Regression_mexutil.h"
#include "IV_Regression_types.h"
#include "chol.h"
#include "cholmod.h"
#include "cov.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "gammaln.h"
#include "inv.h"
#include "invpd.h"
#include "kron.h"
#include "lnpdfmvn.h"
#include "lnpdfn.h"
#include "mean.h"
#include "mtimes.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "vec.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    9,               /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    10,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    11,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    28,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    33,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    41,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    54,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    66,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    67,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    71,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    75,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    84,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    89,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    90,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    91,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    116,             /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    118,             /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    119,             /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    120,             /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo
    ge_emlrtRSI =
        {
            28,    /* lineNo */
            "cat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    he_emlrtRSI =
        {
            100,        /* lineNo */
            "cat_impl", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    ie_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI = {
    166,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = {
    170,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI = {
    172,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    173,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = {
    7,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo oe_emlrtRSI = {
    8,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo pe_emlrtRSI = {
    9,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo te_emlrtRSI = {
    144,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    145,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    149,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    151,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    153,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    155,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo hf_emlrtRSI = {
    186,         /* lineNo */
    "Gen_gamma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    190,         /* lineNo */
    "Gen_gamma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    192,         /* lineNo */
    "Gen_gamma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = {
    196,         /* lineNo */
    "Gen_gamma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = {
    199,         /* lineNo */
    "Gen_gamma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    201,         /* lineNo */
    "Gen_gamma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = {
    7,                                                         /* lineNo */
    "lnpdfn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = {
    8,                                                          /* lineNo */
    "lnpdfig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = {
    9,                                                          /* lineNo */
    "lnpdfig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pathName */
};

static emlrtRSInfo fh_emlrtRSI = {
    3,                                                        /* lineNo */
    "meanc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    6,               /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    102,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    103,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    104,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    52,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    53,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    55,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    56,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    57,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    58,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo k_emlrtMCI = {
    59,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo l_emlrtMCI = {
    60,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo m_emlrtMCI = {
    61,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo n_emlrtMCI = {
    62,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtMCInfo
    v_emlrtMCI =
        {
            66,        /* lineNo */
            18,        /* colNo */
            "fprintf", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    35,              /* lineNo */
    12,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    35,              /* lineNo */
    12,              /* colNo */
    "data",          /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    41,              /* lineNo */
    36,              /* colNo */
    "data",          /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    41,              /* lineNo */
    65,              /* colNo */
    "data",          /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    48,              /* lineNo */
    10,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    41,              /* lineNo */
    12,              /* colNo */
    "XZ",            /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,              /* nDims */
    41,              /* lineNo */
    5,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    68,              /* lineNo */
    33,              /* colNo */
    "vec_Sigma",     /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    84,              /* lineNo */
    36,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    84,              /* lineNo */
    38,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    89,              /* lineNo */
    43,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    89,              /* lineNo */
    45,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    91,              /* lineNo */
    37,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    91,              /* lineNo */
    39,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    91,              /* lineNo */
    58,              /* colNo */
    "R0_inv",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    91,              /* lineNo */
    60,              /* colNo */
    "R0_inv",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    97,              /* lineNo */
    31,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    97,              /* lineNo */
    33,              /* colNo */
    "Sigma",         /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    72,              /* lineNo */
    8,               /* colNo */
    "bm",            /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,              /* nDims */
    72,              /* lineNo */
    5,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    105,             /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    105,             /* lineNo */
    9,               /* colNo */
    "bm",            /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    105,             /* lineNo */
    14,              /* colNo */
    "bm",            /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    68,              /* lineNo */
    12,              /* colNo */
    "Sigmam",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,              /* nDims */
    68,              /* lineNo */
    5,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtDCInfo c_emlrtDCI = {
    106,             /* lineNo */
    17,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    106,             /* lineNo */
    17,              /* colNo */
    "Sigmam",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    106,             /* lineNo */
    22,              /* colNo */
    "Sigmam",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    76,              /* lineNo */
    12,              /* colNo */
    "gammam",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,              /* nDims */
    76,              /* lineNo */
    5,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtDCInfo d_emlrtDCI = {
    107,             /* lineNo */
    17,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    107,             /* lineNo */
    17,              /* colNo */
    "gammam",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    107,             /* lineNo */
    22,              /* colNo */
    "gammam",        /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    109,             /* lineNo */
    15,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    109,             /* lineNo */
    15,              /* colNo */
    "yfm",           /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    109,             /* lineNo */
    20,              /* colNo */
    "yfm",           /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    1,               /* nDims */
    119,             /* lineNo */
    22,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo f_emlrtECI = {
    2,               /* nDims */
    119,             /* lineNo */
    22,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo
    b_emlrtRTEI =
        {
            275,                   /* lineNo */
            27,                    /* colNo */
            "check_non_axis_size", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    1,                                                         /* nDims */
    8,                                                         /* lineNo */
    7,                                                         /* colNo */
    "lnpdfn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pName */
};

static emlrtDCInfo f_emlrtDCI = {
    26,              /* lineNo */
    12,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    26,              /* lineNo */
    14,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    27,              /* lineNo */
    16,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    27,              /* lineNo */
    18,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    28,              /* lineNo */
    16,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    28,              /* lineNo */
    18,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    39,              /* lineNo */
    16,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    25,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    25,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    4                             /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    26,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    27,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    28,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    36,              /* lineNo */
    12,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    36,              /* lineNo */
    12,              /* colNo */
    "data",          /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    37,              /* lineNo */
    14,              /* colNo */
    "data",          /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    37,              /* lineNo */
    14,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    39,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    41,              /* lineNo */
    38,              /* colNo */
    "data",          /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    41,              /* lineNo */
    38,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    41,              /* lineNo */
    67,              /* colNo */
    "data",          /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    41,              /* lineNo */
    67,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    79,              /* lineNo */
    22,              /* colNo */
    "x_f",           /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    79,              /* lineNo */
    22,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    80,              /* lineNo */
    23,              /* colNo */
    "x_f",           /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    85,              /* lineNo */
    13,              /* colNo */
    "yfm",           /* aName */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo q_emlrtECI = {
    2,           /* nDims */
    171,         /* lineNo */
    11,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo r_emlrtECI = {
    1,           /* nDims */
    171,         /* lineNo */
    11,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo s_emlrtECI = {
    2,           /* nDims */
    169,         /* lineNo */
    10,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo t_emlrtECI = {
    1,           /* nDims */
    169,         /* lineNo */
    10,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo u_emlrtECI = {
    2,           /* nDims */
    166,         /* lineNo */
    11,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo v_emlrtECI = {
    1,           /* nDims */
    166,         /* lineNo */
    11,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo w_emlrtECI = {
    1,           /* nDims */
    166,         /* lineNo */
    83,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    101,         /* colNo */
    "XZ",        /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    86,          /* colNo */
    "Xs",        /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    75,          /* colNo */
    "X",         /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    68,          /* colNo */
    "Y",         /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo x_emlrtECI = {
    1,           /* nDims */
    166,         /* lineNo */
    37,          /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    55,          /* colNo */
    "XZ",        /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    40,          /* colNo */
    "Xs",        /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    29,          /* colNo */
    "X",         /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    166,         /* lineNo */
    20,          /* colNo */
    "Y",         /* aName */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    138,        /* lineNo */
    17,         /* colNo */
    "Sigma",    /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    138,        /* lineNo */
    19,         /* colNo */
    "Sigma",    /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    139,        /* lineNo */
    17,         /* colNo */
    "Sigma",    /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    140,        /* lineNo */
    23,         /* colNo */
    "Sigma",    /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo y_emlrtECI = {
    1,          /* nDims */
    144,        /* lineNo */
    10,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo ab_emlrtECI = {
    2,          /* nDims */
    144,        /* lineNo */
    10,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo id_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    151,        /* lineNo */
    22,         /* colNo */
    "XT",       /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    151,        /* lineNo */
    59,         /* colNo */
    "Xs",       /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    151,        /* lineNo */
    74,         /* colNo */
    "XZ",       /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo bb_emlrtECI = {
    1,          /* nDims */
    151,        /* lineNo */
    56,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo cb_emlrtECI = {
    1,          /* nDims */
    151,        /* lineNo */
    11,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo db_emlrtECI = {
    1,          /* nDims */
    153,        /* lineNo */
    5,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo eb_emlrtECI = {
    1,          /* nDims */
    155,        /* lineNo */
    5,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo ld_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    151,        /* lineNo */
    28,         /* colNo */
    "Y",        /* aName */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    181,         /* lineNo */
    17,          /* colNo */
    "Sigma",     /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    181,         /* lineNo */
    19,          /* colNo */
    "Sigma",     /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    182,         /* lineNo */
    17,          /* colNo */
    "Sigma",     /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    183,         /* lineNo */
    23,          /* colNo */
    "Sigma",     /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo fb_emlrtECI = {
    1,           /* nDims */
    186,         /* lineNo */
    18,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo gb_emlrtECI = {
    2,           /* nDims */
    186,         /* lineNo */
    18,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    190,         /* lineNo */
    24,          /* colNo */
    "XZ",        /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    190,         /* lineNo */
    46,          /* colNo */
    "XZ",        /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo hb_emlrtECI = {
    1,           /* nDims */
    190,         /* lineNo */
    11,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo ib_emlrtECI = {
    2,           /* nDims */
    190,         /* lineNo */
    11,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo jb_emlrtECI = {
    1,           /* nDims */
    192,         /* lineNo */
    10,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo kb_emlrtECI = {
    2,           /* nDims */
    192,         /* lineNo */
    10,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo sd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    196,         /* lineNo */
    24,          /* colNo */
    "XZ",        /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    196,         /* lineNo */
    43,          /* colNo */
    "Xs",        /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    196,         /* lineNo */
    84,          /* colNo */
    "X",         /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo lb_emlrtECI = {
    1,           /* nDims */
    196,         /* lineNo */
    40,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo mb_emlrtECI = {
    1,           /* nDims */
    196,         /* lineNo */
    11,          /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo nb_emlrtECI = {
    1,           /* nDims */
    199,         /* lineNo */
    9,           /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtECInfo ob_emlrtECI = {
    1,           /* nDims */
    201,         /* lineNo */
    9,           /* colNo */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtBCInfo vd_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    196,         /* lineNo */
    75,          /* colNo */
    "Y",         /* aName */
    "Gen_gamma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m", /* pName */
    0                             /* checkKind */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    25,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    26,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    27,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    28,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    31,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    32,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    35,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    36,              /* lineNo */
    12,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    36,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    37,              /* lineNo */
    14,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    37,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    39,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    45,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    41,              /* lineNo */
    31,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    41,              /* lineNo */
    60,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    105,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    67,              /* lineNo */
    17,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    67,              /* lineNo */
    5,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    106,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    58,              /* lineNo */
    14,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    128,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    68,              /* lineNo */
    23,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    60,              /* lineNo */
    14,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    109,             /* lineNo */
    5,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    41,              /* lineNo */
    17,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    116,             /* lineNo */
    15,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    79,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    116,             /* lineNo */
    5,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    82,              /* lineNo */
    9,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    120,             /* lineNo */
    30,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    8,                                                         /* lineNo */
    3,                                                         /* colNo */
    "lnpdfn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    4,                                                        /* lineNo */
    8,                                                        /* colNo */
    "meanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    96,              /* lineNo */
    13,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    9,               /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    10,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    11,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    33,              /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    41,              /* lineNo */
    18,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    41,              /* lineNo */
    23,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    164,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    169,             /* lineNo */
    10,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI = {
    166,             /* lineNo */
    48,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = {
    9,                                                              /* lineNo */
    5,                                                              /* colNo */
    "randwishart",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = {
    166,             /* lineNo */
    94,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = {
    9,                                                              /* lineNo */
    7,                                                              /* colNo */
    "randwishart",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pName */
};

static emlrtRTEInfo re_emlrtRTEI = {
    166,             /* lineNo */
    73,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo se_emlrtRTEI = {
    166,             /* lineNo */
    27,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    159,             /* lineNo */
    18,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    140,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    141,             /* lineNo */
    11,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    139,             /* lineNo */
    11,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    144,             /* lineNo */
    10,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    146,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI = {
    148,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    151,             /* lineNo */
    67,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    151,             /* lineNo */
    56,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    34,     /* lineNo */
    5,      /* colNo */
    "chol", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    151,             /* lineNo */
    17,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI = {
    145,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    149,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    153,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    144,             /* lineNo */
    33,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    186,             /* lineNo */
    28,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    186,             /* lineNo */
    18,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    188,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    192,             /* lineNo */
    10,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    194,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    190,             /* lineNo */
    17,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    190,             /* lineNo */
    39,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = {
    196,             /* lineNo */
    82,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = {
    196,             /* lineNo */
    51,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = {
    196,             /* lineNo */
    17,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = {
    196,             /* lineNo */
    40,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = {
    186,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    199,             /* lineNo */
    1,               /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = {
    166,             /* lineNo */
    11,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = {
    151,             /* lineNo */
    11,              /* colNo */
    "IV_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pName */
};

static emlrtRSInfo ph_emlrtRSI = {
    6,               /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    55,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    53,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    57,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    59,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    61,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    103,             /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo
    wh_emlrtRSI =
        {
            68,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo
    xh_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    104,             /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    102,             /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    62,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo fi_emlrtRSI = {
    60,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo gi_emlrtRSI = {
    58,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo hi_emlrtRSI = {
    56,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo ii_emlrtRSI = {
    52,              /* lineNo */
    "IV_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/IV_Regression.m" /* pathName */
};

static emlrtRSInfo mi_emlrtRSI = {
    8,                                                         /* lineNo */
    "lnpdfn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pathName */
};

static emlrtRSInfo oi_emlrtRSI = {
    85,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo pi_emlrtRSI = {
    76,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

/* Function Declarations */
static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y,
                      const emxArray_real_T *X, const emxArray_real_T *Xs,
                      const emxArray_real_T *XZ, const emxArray_real_T *b,
                      const emxArray_real_T *b_gamma, real_T v0,
                      const emxArray_real_T *R0_inv, emxArray_real_T *Sigma);

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y,
                     const emxArray_real_T *X, const emxArray_real_T *Xs,
                     const emxArray_real_T *XZ, const emxArray_real_T *b0,
                     const emxArray_real_T *precB0,
                     const emxArray_real_T *b_gamma,
                     const emxArray_real_T *Sigma, emxArray_real_T *b);

static void Gen_gamma(const emlrtStack *sp, const emxArray_real_T *Y,
                      const emxArray_real_T *X, const emxArray_real_T *Xs,
                      const emxArray_real_T *XZ, const emxArray_real_T *beta,
                      const emxArray_real_T *precG0,
                      const emxArray_real_T *gamma0,
                      const emxArray_real_T *Sigma, emxArray_real_T *b_gamma);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[37]);

static void b_plus(const emlrtStack *sp, emxArray_real_T *d_sum,
                   const emxArray_real_T *A);

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *b_hat, real_T Sigma_hat,
                               const emxArray_real_T *xf_exo,
                               const emxArray_real_T *r2,
                               const emxArray_real_T *varargin_1);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[8]);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[9]);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[6]);

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[10]);

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location);

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *d_sum,
                               emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *R0_inv);

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38]);

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *b,
                               const emxArray_real_T *Xs, int32_T i,
                               const emxArray_real_T *A);

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[23]);

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
                               emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *precB0,
                               const emxArray_real_T *XT);

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7]);

static void k_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *inv_comSig,
                               emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *Sigma, int32_T i2,
                               int32_T i3, int32_T i4, int32_T i5,
                               const emxArray_real_T *r1);

static const mxArray *k_emlrt_marshallOut(const real_T u);

static const mxArray *m_emlrt_marshallOut(void);

static void plus(const emlrtStack *sp, emxArray_real_T *d_sum,
                 const emxArray_real_T *r1);

/* Function Definitions */
static void Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y,
                      const emxArray_real_T *X, const emxArray_real_T *Xs,
                      const emxArray_real_T *XZ, const emxArray_real_T *b,
                      const emxArray_real_T *b_gamma, real_T v0,
                      const emxArray_real_T *R0_inv, emxArray_real_T *Sigma)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *a;
  emxArray_real_T *b_XZ;
  emxArray_real_T *b_Y;
  emxArray_real_T *d_sum;
  emxArray_real_T *e_sum;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  const real_T *R0_inv_data;
  const real_T *XZ_data;
  const real_T *X_data;
  const real_T *Xs_data;
  const real_T *Y_data;
  const real_T *b_data;
  real_T b_y;
  real_T y;
  real_T *a_data;
  real_T *b_XZ_data;
  real_T *b_Y_data;
  real_T *r2;
  real_T *sum_data;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  R0_inv_data = R0_inv->data;
  b_data = b->data;
  XZ_data = XZ->data;
  Xs_data = Xs->data;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &d_sum, 2, &ke_emlrtRTEI);
  /*  number of columns */
  i = d_sum->size[0] * d_sum->size[1];
  d_sum->size[0] = R0_inv->size[0];
  d_sum->size[1] = R0_inv->size[1];
  emxEnsureCapacity_real_T(sp, d_sum, i, &ke_emlrtRTEI);
  sum_data = d_sum->data;
  loop_ub = R0_inv->size[0] * R0_inv->size[1];
  for (i = 0; i < loop_ub; i++) {
    sum_data[i] = 0.0;
  }
  i = Y->size[0];
  emxInit_real_T(sp, &r, 1, &ve_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &ve_emlrtRTEI);
  emxInit_real_T(sp, &a, 2, &re_emlrtRTEI);
  emxInit_real_T(sp, &b_XZ, 2, &me_emlrtRTEI);
  emxInit_real_T(sp, &b_Y, 1, &te_emlrtRTEI);
  emxInit_real_T(sp, &e_sum, 2, &qe_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > Xs->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Xs->size[0], &bd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &je_emlrtRSI;
    if (b_i + 1 > XZ->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XZ->size[2], &ad_emlrtBCI, &st);
    }
    b_st.site = &xc_emlrtRSI;
    loop_ub = XZ->size[1];
    if (b_gamma->size[0] != XZ->size[1]) {
      if (((XZ->size[0] == 1) && (XZ->size[1] == 1)) ||
          (b_gamma->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_loop_ub = XZ->size[0];
    i1 = b_XZ->size[0] * b_XZ->size[1];
    b_XZ->size[0] = XZ->size[0];
    b_XZ->size[1] = XZ->size[1];
    emxEnsureCapacity_real_T(&st, b_XZ, i1, &me_emlrtRTEI);
    b_XZ_data = b_XZ->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_XZ_data[i2 + b_XZ->size[0] * i1] =
            XZ_data[(i2 + XZ->size[0] * i1) + XZ->size[0] * XZ->size[1] * b_i];
      }
    }
    b_st.site = &ad_emlrtRSI;
    b_mtimes(&b_st, b_XZ, b_gamma, r);
    r2 = r->data;
    if ((r->size[0] != Xs->size[1]) &&
        ((Xs->size[1] != 1) && (r->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Xs->size[1], r->size[0], &x_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (b_i + 1 > Xs->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Xs->size[0], &wc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &je_emlrtRSI;
    if (b_i + 1 > XZ->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XZ->size[2], &vc_emlrtBCI, &st);
    }
    b_st.site = &xc_emlrtRSI;
    loop_ub = XZ->size[1];
    if (b_gamma->size[0] != XZ->size[1]) {
      if (((XZ->size[0] == 1) && (XZ->size[1] == 1)) ||
          (b_gamma->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_loop_ub = XZ->size[0];
    i1 = b_XZ->size[0] * b_XZ->size[1];
    b_XZ->size[0] = XZ->size[0];
    b_XZ->size[1] = XZ->size[1];
    emxEnsureCapacity_real_T(&st, b_XZ, i1, &pe_emlrtRTEI);
    b_XZ_data = b_XZ->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_XZ_data[i2 + b_XZ->size[0] * i1] =
            XZ_data[(i2 + XZ->size[0] * i1) + XZ->size[0] * XZ->size[1] * b_i];
      }
    }
    b_st.site = &ad_emlrtRSI;
    b_mtimes(&b_st, b_XZ, b_gamma, r1);
    b_XZ_data = r1->data;
    if ((r1->size[0] != Xs->size[1]) &&
        ((Xs->size[1] != 1) && (r1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Xs->size[1], r1->size[0], &w_emlrtECI,
                                  (emlrtCTX)sp);
    }
    st.site = &je_emlrtRSI;
    if (b_i + 1 > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, X->size[0], &xc_emlrtBCI, &st);
    }
    loop_ub = X->size[1];
    i1 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, a, i1, &re_emlrtRTEI);
    a_data = a->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      a_data[i1] = X_data[b_i + X->size[0] * i1];
    }
    b_st.site = &xc_emlrtRSI;
    loop_ub = X->size[1];
    if (b->size[0] != X->size[1]) {
      if ((X->size[1] == 1) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (X->size[1] < 1) {
      y = 0.0;
    } else {
      n_t = (ptrdiff_t)X->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      y = ddot(&n_t, &a_data[0], &incx_t, &b_data[0], &incy_t);
    }
    if (b_i + 1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Y->size[0], &yc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &je_emlrtRSI;
    if (b_i + 1 > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, X->size[0], &cd_emlrtBCI, &st);
    }
    i1 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, a, i1, &se_emlrtRTEI);
    a_data = a->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      a_data[i1] = X_data[b_i + X->size[0] * i1];
    }
    b_st.site = &xc_emlrtRSI;
    if (b->size[0] != X->size[1]) {
      if ((X->size[1] == 1) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (X->size[1] < 1) {
      b_y = 0.0;
    } else {
      n_t = (ptrdiff_t)X->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      b_y = ddot(&n_t, &a_data[0], &incx_t, &b_data[0], &incy_t);
    }
    if (b_i + 1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Y->size[0], &dd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = Xs->size[1];
    if ((r->size[0] == Xs->size[1]) && (r1->size[0] == Xs->size[1])) {
      i1 = b_Y->size[0];
      b_Y->size[0] = Xs->size[1] + 1;
      emxEnsureCapacity_real_T(sp, b_Y, i1, &te_emlrtRTEI);
      b_Y_data = b_Y->data;
      b_Y_data[0] = Y_data[b_i] - b_y;
      i1 = a->size[0] * a->size[1];
      a->size[0] = 1;
      a->size[1] = Xs->size[1] + 1;
      emxEnsureCapacity_real_T(sp, a, i1, &ue_emlrtRTEI);
      a_data = a->data;
      a_data[0] = Y_data[b_i] - y;
      for (i1 = 0; i1 < loop_ub; i1++) {
        y = Xs_data[b_i + Xs->size[0] * i1];
        b_Y_data[i1 + 1] = y - r2[i1];
        a_data[i1 + 1] = y - b_XZ_data[i1];
      }
      i1 = e_sum->size[0] * e_sum->size[1];
      e_sum->size[0] = b_Y->size[0];
      e_sum->size[1] = a->size[1];
      emxEnsureCapacity_real_T(sp, e_sum, i1, &te_emlrtRTEI);
      b_XZ_data = e_sum->data;
      loop_ub = a->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = b_Y->size[0];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          b_XZ_data[i2 + e_sum->size[0] * i1] = b_Y_data[i2] * a_data[i1];
        }
      }
    } else {
      st.site = &oi_emlrtRSI;
      f_binary_expand_op(&st, e_sum, Y, b_i, b_y, Xs, r, y, r1);
      b_XZ_data = e_sum->data;
    }
    if ((d_sum->size[0] != e_sum->size[0]) &&
        ((d_sum->size[0] != 1) && (e_sum->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(d_sum->size[0], e_sum->size[0], &v_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((d_sum->size[1] != e_sum->size[1]) &&
        ((d_sum->size[1] != 1) && (e_sum->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(d_sum->size[1], e_sum->size[1], &u_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((d_sum->size[0] == e_sum->size[0]) &&
        (d_sum->size[1] == e_sum->size[1])) {
      loop_ub = d_sum->size[0] * d_sum->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        sum_data[i1] += b_XZ_data[i1];
      }
    } else {
      st.site = &je_emlrtRSI;
      plus(&st, d_sum, e_sum);
      sum_data = d_sum->data;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_Y);
  emxFree_real_T(sp, &a);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &r);
  if ((R0_inv->size[0] != d_sum->size[0]) &&
      ((R0_inv->size[0] != 1) && (d_sum->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(R0_inv->size[0], d_sum->size[0], &t_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((R0_inv->size[1] != d_sum->size[1]) &&
      ((R0_inv->size[1] != 1) && (d_sum->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(R0_inv->size[1], d_sum->size[1], &s_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((R0_inv->size[0] == d_sum->size[0]) &&
      (R0_inv->size[1] == d_sum->size[1])) {
    i = b_XZ->size[0] * b_XZ->size[1];
    b_XZ->size[0] = R0_inv->size[0];
    b_XZ->size[1] = R0_inv->size[1];
    emxEnsureCapacity_real_T(sp, b_XZ, i, &le_emlrtRTEI);
    b_XZ_data = b_XZ->data;
    loop_ub = R0_inv->size[0] * R0_inv->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_XZ_data[i] = R0_inv_data[i] + sum_data[i];
    }
    st.site = &ke_emlrtRSI;
    inv(&st, b_XZ, d_sum);
    sum_data = d_sum->data;
  } else {
    st.site = &ke_emlrtRSI;
    h_binary_expand_op(&st, d_sum, ke_emlrtRSI, R0_inv);
    sum_data = d_sum->data;
  }
  if ((d_sum->size[0] != d_sum->size[1]) &&
      ((d_sum->size[0] != 1) && (d_sum->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(d_sum->size[0], d_sum->size[1], &r_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((d_sum->size[0] != d_sum->size[1]) &&
      ((d_sum->size[1] != 1) && (d_sum->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(d_sum->size[1], d_sum->size[0], &q_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (d_sum->size[0] == d_sum->size[1]) {
    i = e_sum->size[0] * e_sum->size[1];
    e_sum->size[0] = d_sum->size[0];
    e_sum->size[1] = d_sum->size[1];
    emxEnsureCapacity_real_T(sp, e_sum, i, &ib_emlrtRTEI);
    b_XZ_data = e_sum->data;
    loop_ub = d_sum->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = d_sum->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_XZ_data[i1 + e_sum->size[0] * i] =
            0.5 * (sum_data[i1 + d_sum->size[0] * i] +
                   sum_data[i + d_sum->size[0] * i1]);
      }
    }
    i = d_sum->size[0] * d_sum->size[1];
    d_sum->size[0] = e_sum->size[0];
    d_sum->size[1] = e_sum->size[1];
    emxEnsureCapacity_real_T(sp, d_sum, i, &ne_emlrtRTEI);
    sum_data = d_sum->data;
    loop_ub = e_sum->size[0] * e_sum->size[1];
    for (i = 0; i < loop_ub; i++) {
      sum_data[i] = b_XZ_data[i];
    }
  } else {
    st.site = &pi_emlrtRSI;
    g_binary_expand_op(&st, d_sum);
  }
  st.site = &le_emlrtRSI;
  /*  sampling Wishart dist */
  /*  E(V) = Omega*nu */
  /*  X ~ Wishart(R,nu) <=> inv(X) ~ IW(inv(R),nu);  */
  b_st.site = &ne_emlrtRSI;
  b_cholmod(&b_st, d_sum, e_sum);
  b_st.site = &oe_emlrtRSI;
  c_st.site = &oe_emlrtRSI;
  randn(&c_st, d_sum->size[0], v0 + (real_T)Y->size[0], b_XZ);
  c_st.site = &xc_emlrtRSI;
  if (e_sum->size[0] != b_XZ->size[0]) {
    if (((e_sum->size[0] == 1) && (e_sum->size[1] == 1)) ||
        ((b_XZ->size[0] == 1) && (b_XZ->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  c_st.site = &ad_emlrtRSI;
  d_mtimes(&c_st, e_sum, b_XZ, d_sum);
  sum_data = d_sum->data;
  /*  k by nu */
  b_st.site = &pe_emlrtRSI;
  i = b_XZ->size[0] * b_XZ->size[1];
  b_XZ->size[0] = d_sum->size[0];
  b_XZ->size[1] = d_sum->size[1];
  emxEnsureCapacity_real_T(&b_st, b_XZ, i, &oe_emlrtRTEI);
  b_XZ_data = b_XZ->data;
  loop_ub = d_sum->size[0] * d_sum->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_XZ_data[i] = sum_data[i];
  }
  i = e_sum->size[0] * e_sum->size[1];
  e_sum->size[0] = d_sum->size[0];
  e_sum->size[1] = d_sum->size[1];
  emxEnsureCapacity_real_T(&b_st, e_sum, i, &qe_emlrtRTEI);
  b_XZ_data = e_sum->data;
  loop_ub = d_sum->size[0] * d_sum->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_XZ_data[i] = sum_data[i];
  }
  c_st.site = &ad_emlrtRSI;
  c_mtimes(&c_st, b_XZ, e_sum, d_sum);
  /*  k by k */
  st.site = &me_emlrtRSI;
  invpd(&st, d_sum, Sigma);
  emxFree_real_T(sp, &e_sum);
  emxFree_real_T(sp, &b_XZ);
  emxFree_real_T(sp, &d_sum);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y,
                     const emxArray_real_T *X, const emxArray_real_T *Xs,
                     const emxArray_real_T *XZ, const emxArray_real_T *b0,
                     const emxArray_real_T *precB0,
                     const emxArray_real_T *b_gamma,
                     const emxArray_real_T *Sigma, emxArray_real_T *b)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *B1;
  emxArray_real_T *Sigma21;
  emxArray_real_T *XT;
  emxArray_real_T *b_Sigma;
  emxArray_real_T *b_b;
  emxArray_real_T *c_Sigma;
  emxArray_real_T *d_sum;
  emxArray_real_T *inv_Sigma22;
  emxArray_real_T *y;
  const real_T *Sigma_data;
  const real_T *XZ_data;
  const real_T *X_data;
  const real_T *Xs_data;
  const real_T *Y_data;
  const real_T *precB0_data;
  real_T Sigma11;
  real_T b_y;
  real_T *A_data;
  real_T *B1_data;
  real_T *Sigma21_data;
  real_T *XT_data;
  real_T *b_Sigma_data;
  real_T *sum_data;
  real_T *y_data;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  Sigma_data = Sigma->data;
  precB0_data = precB0->data;
  XZ_data = XZ->data;
  Xs_data = Xs->data;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (1 > Sigma->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &ed_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (1 > Sigma->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &fd_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  Sigma11 = Sigma_data[0];
  if (2 > Sigma->size[1]) {
    i = -1;
    i1 = -1;
  } else {
    i = 0;
    i1 = Sigma->size[1] - 1;
  }
  if (1 > Sigma->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &gd_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (2 > Sigma->size[0]) {
    i2 = -1;
    i3 = -1;
  } else {
    i2 = 0;
    i3 = Sigma->size[0] - 1;
  }
  if (1 > Sigma->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &hd_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Sigma21, 1, &xe_emlrtRTEI);
  loop_ub = i3 - i2;
  i3 = Sigma21->size[0];
  Sigma21->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Sigma21, i3, &xe_emlrtRTEI);
  Sigma21_data = Sigma21->data;
  for (i3 = 0; i3 < loop_ub; i3++) {
    Sigma21_data[i3] = Sigma_data[(i2 + i3) + 1];
  }
  if (2 > Sigma->size[0]) {
    i2 = 0;
    i3 = 0;
  } else {
    i2 = 1;
    i3 = Sigma->size[0];
  }
  if (2 > Sigma->size[1]) {
    i4 = 0;
    i5 = 0;
  } else {
    i4 = 1;
    i5 = Sigma->size[1];
  }
  emxInit_real_T(sp, &y, 2, &lf_emlrtRTEI);
  emxInit_real_T(sp, &b_Sigma, 2, &ye_emlrtRTEI);
  st.site = &te_emlrtRSI;
  b_loop_ub = i3 - i2;
  i3 = b_Sigma->size[0] * b_Sigma->size[1];
  b_Sigma->size[0] = b_loop_ub;
  c_loop_ub = i5 - i4;
  b_Sigma->size[1] = c_loop_ub;
  emxEnsureCapacity_real_T(&st, b_Sigma, i3, &ye_emlrtRTEI);
  b_Sigma_data = b_Sigma->data;
  for (i3 = 0; i3 < c_loop_ub; i3++) {
    for (i5 = 0; i5 < b_loop_ub; i5++) {
      b_Sigma_data[i5 + b_Sigma->size[0] * i3] =
          Sigma_data[(i2 + i5) + Sigma->size[0] * (i4 + i3)];
    }
  }
  emxInit_real_T(&st, &XT, 2, &cf_emlrtRTEI);
  b_st.site = &te_emlrtRSI;
  inv(&b_st, b_Sigma, XT);
  b_st.site = &xc_emlrtRSI;
  d_loop_ub = i1 - i;
  if (d_loop_ub != XT->size[0]) {
    if ((d_loop_ub == 1) || ((XT->size[0] == 1) && (XT->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &c_Sigma, 2, &af_emlrtRTEI);
  i1 = c_Sigma->size[0] * c_Sigma->size[1];
  c_Sigma->size[0] = 1;
  c_Sigma->size[1] = d_loop_ub;
  emxEnsureCapacity_real_T(&st, c_Sigma, i1, &af_emlrtRTEI);
  b_Sigma_data = c_Sigma->data;
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    b_Sigma_data[i1] = Sigma_data[Sigma->size[0] * ((i + i1) + 1)];
  }
  b_st.site = &ad_emlrtRSI;
  e_mtimes(&b_st, c_Sigma, XT, y);
  y_data = y->data;
  st.site = &te_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (loop_ub != y->size[1]) {
    if ((y->size[1] == 1) || (loop_ub == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (y->size[1] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)y->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &y_data[0], &incx_t, &Sigma21_data[0], &incy_t);
  }
  st.site = &te_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  c_dynamic_size_checks(&b_st, X, X, X->size[0], X->size[0]);
  b_st.site = &ad_emlrtRSI;
  d_mtimes(&b_st, X, X, XT);
  XT_data = XT->data;
  st.site = &te_emlrtRSI;
  b_y = b_inv(&st, Sigma11 - b_y);
  e_loop_ub = XT->size[0] * XT->size[1];
  for (i1 = 0; i1 < e_loop_ub; i1++) {
    XT_data[i1] *= b_y;
  }
  if ((precB0->size[0] != XT->size[0]) &&
      ((precB0->size[0] != 1) && (XT->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precB0->size[0], XT->size[0], &y_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((precB0->size[1] != XT->size[1]) &&
      ((precB0->size[1] != 1) && (XT->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precB0->size[1], XT->size[1], &ab_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &B1, 2, &if_emlrtRTEI);
  if ((precB0->size[0] == XT->size[0]) && (precB0->size[1] == XT->size[1])) {
    i1 = b_Sigma->size[0] * b_Sigma->size[1];
    b_Sigma->size[0] = precB0->size[0];
    b_Sigma->size[1] = precB0->size[1];
    emxEnsureCapacity_real_T(sp, b_Sigma, i1, &bf_emlrtRTEI);
    b_Sigma_data = b_Sigma->data;
    e_loop_ub = precB0->size[0] * precB0->size[1];
    for (i1 = 0; i1 < e_loop_ub; i1++) {
      b_Sigma_data[i1] = precB0_data[i1] + XT_data[i1];
    }
    st.site = &ue_emlrtRSI;
    inv(&st, b_Sigma, B1);
    B1_data = B1->data;
  } else {
    st.site = &ue_emlrtRSI;
    j_binary_expand_op(&st, B1, ue_emlrtRSI, precB0, XT);
    B1_data = B1->data;
  }
  i1 = XT->size[0] * XT->size[1];
  XT->size[0] = X->size[1];
  XT->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, XT, i1, &cf_emlrtRTEI);
  XT_data = XT->data;
  e_loop_ub = X->size[0];
  for (i1 = 0; i1 < e_loop_ub; i1++) {
    f_loop_ub = X->size[1];
    for (i3 = 0; i3 < f_loop_ub; i3++) {
      XT_data[i3 + XT->size[0] * i1] = X_data[i1 + X->size[0] * i3];
    }
  }
  emxInit_real_T(sp, &d_sum, 1, &df_emlrtRTEI);
  i1 = d_sum->size[0];
  d_sum->size[0] = XT->size[0];
  emxEnsureCapacity_real_T(sp, d_sum, i1, &df_emlrtRTEI);
  sum_data = d_sum->data;
  e_loop_ub = XT->size[0];
  for (i1 = 0; i1 < e_loop_ub; i1++) {
    sum_data[i1] = 0.0;
  }
  i1 = b_Sigma->size[0] * b_Sigma->size[1];
  b_Sigma->size[0] = b_loop_ub;
  b_Sigma->size[1] = c_loop_ub;
  emxEnsureCapacity_real_T(sp, b_Sigma, i1, &ye_emlrtRTEI);
  b_Sigma_data = b_Sigma->data;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      b_Sigma_data[i3 + b_Sigma->size[0] * i1] =
          Sigma_data[(i2 + i3) + Sigma->size[0] * (i4 + i1)];
    }
  }
  emxInit_real_T(sp, &inv_Sigma22, 2, &jf_emlrtRTEI);
  st.site = &ve_emlrtRSI;
  inv(&st, b_Sigma, inv_Sigma22);
  i1 = Y->size[0];
  emxInit_real_T(sp, &A, 1, &kf_emlrtRTEI);
  emxInit_real_T(sp, &b_b, 1, &ff_emlrtRTEI);
  for (b_i = 0; b_i < i1; b_i++) {
    if (b_i + 1 > Xs->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Xs->size[0], &jd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &we_emlrtRSI;
    if (b_i + 1 > XZ->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XZ->size[2], &kd_emlrtBCI, &st);
    }
    b_st.site = &xc_emlrtRSI;
    e_loop_ub = XZ->size[1];
    if (b_gamma->size[0] != XZ->size[1]) {
      if (((XZ->size[0] == 1) && (XZ->size[1] == 1)) ||
          (b_gamma->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    f_loop_ub = XZ->size[0];
    i3 = b_Sigma->size[0] * b_Sigma->size[1];
    b_Sigma->size[0] = XZ->size[0];
    b_Sigma->size[1] = XZ->size[1];
    emxEnsureCapacity_real_T(&st, b_Sigma, i3, &ef_emlrtRTEI);
    b_Sigma_data = b_Sigma->data;
    for (i3 = 0; i3 < e_loop_ub; i3++) {
      for (i5 = 0; i5 < f_loop_ub; i5++) {
        b_Sigma_data[i5 + b_Sigma->size[0] * i3] =
            XZ_data[(i5 + XZ->size[0] * i3) + XZ->size[0] * XZ->size[1] * b_i];
      }
    }
    b_st.site = &ad_emlrtRSI;
    b_mtimes(&b_st, b_Sigma, b_gamma, A);
    A_data = A->data;
    if ((A->size[0] != Xs->size[1]) &&
        ((Xs->size[1] != 1) && (A->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Xs->size[1], A->size[0], &bb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    st.site = &we_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    if (d_loop_ub != inv_Sigma22->size[0]) {
      if ((d_loop_ub == 1) ||
          ((inv_Sigma22->size[0] == 1) && (inv_Sigma22->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    i3 = c_Sigma->size[0] * c_Sigma->size[1];
    c_Sigma->size[0] = 1;
    c_Sigma->size[1] = d_loop_ub;
    emxEnsureCapacity_real_T(&st, c_Sigma, i3, &af_emlrtRTEI);
    b_Sigma_data = c_Sigma->data;
    for (i3 = 0; i3 < d_loop_ub; i3++) {
      b_Sigma_data[i3] = Sigma_data[Sigma->size[0] * ((i + i3) + 1)];
    }
    b_st.site = &ad_emlrtRSI;
    e_mtimes(&b_st, c_Sigma, inv_Sigma22, y);
    y_data = y->data;
    st.site = &we_emlrtRSI;
    e_loop_ub = Xs->size[1];
    if (A->size[0] == Xs->size[1]) {
      i3 = b_b->size[0];
      b_b->size[0] = Xs->size[1];
      emxEnsureCapacity_real_T(&st, b_b, i3, &ff_emlrtRTEI);
      b_Sigma_data = b_b->data;
      for (i3 = 0; i3 < e_loop_ub; i3++) {
        b_Sigma_data[i3] = Xs_data[b_i + Xs->size[0] * i3] - A_data[i3];
      }
    } else {
      b_st.site = &we_emlrtRSI;
      i_binary_expand_op(&b_st, b_b, Xs, b_i, A);
      b_Sigma_data = b_b->data;
    }
    b_st.site = &xc_emlrtRSI;
    if (b_b->size[0] != y->size[1]) {
      if ((y->size[1] == 1) || (b_b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (y->size[1] < 1) {
      b_y = 0.0;
    } else {
      n_t = (ptrdiff_t)y->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      b_y = ddot(&n_t, &y_data[0], &incx_t, &b_Sigma_data[0], &incy_t);
    }
    if (b_i + 1 > XT->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XT->size[1], &id_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i + 1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Y->size[0], &ld_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_y = Y_data[b_i] - b_y;
    e_loop_ub = XT->size[0];
    i3 = A->size[0];
    A->size[0] = XT->size[0];
    emxEnsureCapacity_real_T(sp, A, i3, &hf_emlrtRTEI);
    A_data = A->data;
    for (i3 = 0; i3 < e_loop_ub; i3++) {
      A_data[i3] = XT_data[i3 + XT->size[0] * b_i] * b_y;
    }
    e_loop_ub = d_sum->size[0];
    if ((d_sum->size[0] != A->size[0]) &&
        ((d_sum->size[0] != 1) && (A->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(d_sum->size[0], A->size[0], &cb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (d_sum->size[0] == A->size[0]) {
      for (i3 = 0; i3 < e_loop_ub; i3++) {
        sum_data[i3] += A_data[i3];
      }
    } else {
      st.site = &we_emlrtRSI;
      b_plus(&st, d_sum, A);
      sum_data = d_sum->data;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &inv_Sigma22);
  st.site = &xe_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (b0->size[0] != precB0->size[1]) {
    if (((precB0->size[0] == 1) && (precB0->size[1] == 1)) ||
        (b0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ad_emlrtRSI;
  b_mtimes(&b_st, precB0, b0, A);
  A_data = A->data;
  st.site = &xe_emlrtRSI;
  i1 = b_Sigma->size[0] * b_Sigma->size[1];
  b_Sigma->size[0] = b_loop_ub;
  b_Sigma->size[1] = c_loop_ub;
  emxEnsureCapacity_real_T(&st, b_Sigma, i1, &ye_emlrtRTEI);
  b_Sigma_data = b_Sigma->data;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      b_Sigma_data[i3 + b_Sigma->size[0] * i1] =
          Sigma_data[(i2 + i3) + Sigma->size[0] * (i4 + i1)];
    }
  }
  b_st.site = &xe_emlrtRSI;
  inv(&b_st, b_Sigma, XT);
  b_st.site = &xc_emlrtRSI;
  emxFree_real_T(&b_st, &b_Sigma);
  if (d_loop_ub != XT->size[0]) {
    if ((d_loop_ub == 1) || ((XT->size[0] == 1) && (XT->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  i1 = c_Sigma->size[0] * c_Sigma->size[1];
  c_Sigma->size[0] = 1;
  c_Sigma->size[1] = d_loop_ub;
  emxEnsureCapacity_real_T(&st, c_Sigma, i1, &af_emlrtRTEI);
  b_Sigma_data = c_Sigma->data;
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    b_Sigma_data[i1] = Sigma_data[Sigma->size[0] * ((i + i1) + 1)];
  }
  b_st.site = &ad_emlrtRSI;
  e_mtimes(&b_st, c_Sigma, XT, y);
  y_data = y->data;
  st.site = &xe_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  emxFree_real_T(&b_st, &c_Sigma);
  if (loop_ub != y->size[1]) {
    if ((y->size[1] == 1) || (loop_ub == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (y->size[1] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)y->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &y_data[0], &incx_t, &Sigma21_data[0], &incy_t);
  }
  emxFree_real_T(&st, &y);
  emxFree_real_T(&st, &Sigma21);
  st.site = &xe_emlrtRSI;
  b_y = b_inv(&st, Sigma11 - b_y);
  loop_ub = d_sum->size[0];
  for (i = 0; i < loop_ub; i++) {
    sum_data[i] *= b_y;
  }
  if ((A->size[0] != d_sum->size[0]) &&
      ((A->size[0] != 1) && (d_sum->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[0], d_sum->size[0], &db_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (A->size[0] == d_sum->size[0]) {
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] += sum_data[i];
    }
  } else {
    st.site = &xe_emlrtRSI;
    b_plus(&st, A, d_sum);
  }
  emxFree_real_T(sp, &d_sum);
  st.site = &ye_emlrtRSI;
  i = XT->size[0] * XT->size[1];
  XT->size[0] = B1->size[0];
  XT->size[1] = B1->size[1];
  emxEnsureCapacity_real_T(&st, XT, i, &gf_emlrtRTEI);
  XT_data = XT->data;
  loop_ub = B1->size[0] * B1->size[1];
  for (i = 0; i < loop_ub; i++) {
    XT_data[i] = B1_data[i];
  }
  b_st.site = &bf_emlrtRSI;
  cholesky(&b_st, XT);
  st.site = &ye_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (A->size[0] != B1->size[1]) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ad_emlrtRSI;
  b_mtimes(&b_st, B1, A, b);
  b_Sigma_data = b->data;
  st.site = &ye_emlrtRSI;
  b_st.site = &ye_emlrtRSI;
  b_randn(&b_st, b0->size[0], b_b);
  b_st.site = &xc_emlrtRSI;
  emxFree_real_T(&b_st, &B1);
  if (XT->size[0] != b_b->size[0]) {
    if (((XT->size[0] == 1) && (XT->size[1] == 1)) || (b_b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ad_emlrtRSI;
  f_mtimes(&b_st, XT, b_b, A);
  A_data = A->data;
  emxFree_real_T(sp, &b_b);
  emxFree_real_T(sp, &XT);
  if ((b->size[0] != A->size[0]) && ((b->size[0] != 1) && (A->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b->size[0], A->size[0], &eb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b->size[0] == A->size[0]) {
    loop_ub = b->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_Sigma_data[i] += A_data[i];
    }
  } else {
    st.site = &ye_emlrtRSI;
    b_plus(&st, b, A);
  }
  emxFree_real_T(sp, &A);
  /*  sampling beta */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_gamma(const emlrtStack *sp, const emxArray_real_T *Y,
                      const emxArray_real_T *X, const emxArray_real_T *Xs,
                      const emxArray_real_T *XZ, const emxArray_real_T *beta,
                      const emxArray_real_T *precG0,
                      const emxArray_real_T *gamma0,
                      const emxArray_real_T *Sigma, emxArray_real_T *b_gamma)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *GAMMA;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_Sigma;
  emxArray_real_T *b_b;
  emxArray_real_T *d_sum;
  emxArray_real_T *e_sum;
  emxArray_real_T *inv_comSig;
  emxArray_real_T *y;
  const real_T *Sigma_data;
  const real_T *XZ_data;
  const real_T *X_data;
  const real_T *Xs_data;
  const real_T *Y_data;
  const real_T *beta_data;
  const real_T *precG0_data;
  real_T Sigma11;
  real_T alpha1;
  real_T beta1;
  real_T *GAMMA_data;
  real_T *b_Sigma_data;
  real_T *b_data;
  real_T *b_sum_data;
  real_T *gamma_data;
  real_T *sum_data;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T loop_ub;
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
  Sigma_data = Sigma->data;
  precG0_data = precG0->data;
  beta_data = beta->data;
  XZ_data = XZ->data;
  Xs_data = Xs->data;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (1 > Sigma->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &md_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (1 > Sigma->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &nd_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  Sigma11 = Sigma_data[0];
  if (2 > Sigma->size[1]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = Sigma->size[1];
  }
  if (1 > Sigma->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &od_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (2 > Sigma->size[0]) {
    i2 = 0;
    i3 = 0;
  } else {
    i2 = 1;
    i3 = Sigma->size[0];
  }
  if (1 > Sigma->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &pd_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (2 > Sigma->size[0]) {
    b_i = -1;
    i4 = -1;
  } else {
    b_i = 0;
    i4 = Sigma->size[0] - 1;
  }
  if (2 > Sigma->size[1]) {
    i5 = -1;
    i6 = -1;
  } else {
    i5 = 0;
    i6 = Sigma->size[1] - 1;
  }
  emxInit_real_T(sp, &b_Sigma, 2, &nf_emlrtRTEI);
  st.site = &hf_emlrtRSI;
  beta1 = b_inv(&st, Sigma11);
  loop_ub = i3 - i2;
  i3 = b_Sigma->size[0] * b_Sigma->size[1];
  b_Sigma->size[0] = loop_ub;
  b_loop_ub = i1 - i;
  b_Sigma->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_Sigma, i3, &mf_emlrtRTEI);
  b_Sigma_data = b_Sigma->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i3 = 0; i3 < loop_ub; i3++) {
      b_Sigma_data[i3 + b_Sigma->size[0] * i1] =
          Sigma_data[i2 + i3] * beta1 * Sigma_data[Sigma->size[0] * (i + i1)];
    }
  }
  b_loop_ub = i4 - b_i;
  if ((b_loop_ub != b_Sigma->size[0]) &&
      ((b_loop_ub != 1) && (b_Sigma->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_loop_ub, b_Sigma->size[0], &fb_emlrtECI,
                                (emlrtCTX)sp);
  }
  c_loop_ub = i6 - i5;
  if ((c_loop_ub != b_Sigma->size[1]) &&
      ((c_loop_ub != 1) && (b_Sigma->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(c_loop_ub, b_Sigma->size[1], &gb_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &inv_comSig, 2, &xf_emlrtRTEI);
  if ((b_loop_ub == b_Sigma->size[0]) && (c_loop_ub == b_Sigma->size[1])) {
    i = b_Sigma->size[0] * b_Sigma->size[1];
    b_Sigma->size[0] = b_loop_ub;
    b_Sigma->size[1] = c_loop_ub;
    emxEnsureCapacity_real_T(sp, b_Sigma, i, &nf_emlrtRTEI);
    b_Sigma_data = b_Sigma->data;
    for (i = 0; i < c_loop_ub; i++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_Sigma_data[i1 + b_Sigma->size[0] * i] =
            Sigma_data[((b_i + i1) + Sigma->size[0] * ((i5 + i) + 1)) + 1] -
            b_Sigma_data[i1 + b_Sigma->size[0] * i];
      }
    }
    st.site = &hf_emlrtRSI;
    inv(&st, b_Sigma, inv_comSig);
  } else {
    st.site = &hf_emlrtRSI;
    k_binary_expand_op(&st, inv_comSig, hf_emlrtRSI, Sigma, b_i + 1, i4, i5 + 1,
                       i6, b_Sigma);
  }
  emxInit_real_T(sp, &d_sum, 2, &of_emlrtRTEI);
  /*  number of columns */
  i = d_sum->size[0] * d_sum->size[1];
  d_sum->size[0] = precG0->size[0];
  d_sum->size[1] = precG0->size[1];
  emxEnsureCapacity_real_T(sp, d_sum, i, &of_emlrtRTEI);
  sum_data = d_sum->data;
  b_loop_ub = precG0->size[0] * precG0->size[1];
  for (i = 0; i < b_loop_ub; i++) {
    sum_data[i] = 0.0;
  }
  i = Y->size[0];
  emxInit_real_T(sp, &y, 2, &rf_emlrtRTEI);
  emxInit_real_T(sp, &b, 2, &sf_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > XZ->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XZ->size[2], &qd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &if_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    b_loop_ub = XZ->size[0];
    if (XZ->size[0] != inv_comSig->size[0]) {
      if (((XZ->size[0] == 1) && (XZ->size[1] == 1)) ||
          ((inv_comSig->size[0] == 1) && (inv_comSig->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    c_loop_ub = XZ->size[1];
    i1 = b_Sigma->size[0] * b_Sigma->size[1];
    b_Sigma->size[0] = XZ->size[0];
    b_Sigma->size[1] = XZ->size[1];
    emxEnsureCapacity_real_T(&st, b_Sigma, i1, &rf_emlrtRTEI);
    b_Sigma_data = b_Sigma->data;
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        b_Sigma_data[i3 + b_Sigma->size[0] * i1] =
            XZ_data[(i3 + XZ->size[0] * i1) + XZ->size[0] * XZ->size[1] * b_i];
      }
    }
    b_st.site = &ad_emlrtRSI;
    d_mtimes(&b_st, b_Sigma, inv_comSig, y);
    gamma_data = y->data;
    st.site = &if_emlrtRSI;
    if (b_i + 1 > XZ->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XZ->size[2], &rd_emlrtBCI, &st);
    }
    b_loop_ub = XZ->size[0];
    c_loop_ub = XZ->size[1];
    i1 = b->size[0] * b->size[1];
    b->size[0] = XZ->size[0];
    b->size[1] = XZ->size[1];
    emxEnsureCapacity_real_T(&st, b, i1, &sf_emlrtRTEI);
    b_data = b->data;
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        b_data[i3 + b->size[0] * i1] =
            XZ_data[(i3 + XZ->size[0] * i1) + XZ->size[0] * XZ->size[1] * b_i];
      }
    }
    b_st.site = &xc_emlrtRSI;
    if (XZ->size[0] != y->size[1]) {
      if (((y->size[0] == 1) && (y->size[1] == 1)) ||
          ((XZ->size[0] == 1) && (XZ->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_st.site = &ad_emlrtRSI;
    if ((y->size[0] == 0) || (y->size[1] == 0) || (XZ->size[0] == 0) ||
        (XZ->size[1] == 0)) {
      i1 = b_Sigma->size[0] * b_Sigma->size[1];
      b_Sigma->size[0] = y->size[0];
      b_Sigma->size[1] = XZ->size[1];
      emxEnsureCapacity_real_T(&b_st, b_Sigma, i1, &rf_emlrtRTEI);
      b_Sigma_data = b_Sigma->data;
      b_loop_ub = y->size[0] * XZ->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_Sigma_data[i1] = 0.0;
      }
    } else {
      c_st.site = &bd_emlrtRSI;
      d_st.site = &cd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)y->size[0];
      n_t = (ptrdiff_t)XZ->size[1];
      k_t = (ptrdiff_t)y->size[1];
      lda_t = (ptrdiff_t)y->size[0];
      ldb_t = (ptrdiff_t)XZ->size[0];
      ldc_t = (ptrdiff_t)y->size[0];
      i1 = b_Sigma->size[0] * b_Sigma->size[1];
      b_Sigma->size[0] = y->size[0];
      b_Sigma->size[1] = XZ->size[1];
      emxEnsureCapacity_real_T(&d_st, b_Sigma, i1, &be_emlrtRTEI);
      b_Sigma_data = b_Sigma->data;
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &gamma_data[0],
            &lda_t, &b_data[0], &ldb_t, &beta1, &b_Sigma_data[0], &ldc_t);
    }
    if ((d_sum->size[0] != b_Sigma->size[0]) &&
        ((d_sum->size[0] != 1) && (b_Sigma->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(d_sum->size[0], b_Sigma->size[0],
                                  &hb_emlrtECI, (emlrtCTX)sp);
    }
    if ((d_sum->size[1] != b_Sigma->size[1]) &&
        ((d_sum->size[1] != 1) && (b_Sigma->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(d_sum->size[1], b_Sigma->size[1],
                                  &ib_emlrtECI, (emlrtCTX)sp);
    }
    if ((d_sum->size[0] == b_Sigma->size[0]) &&
        (d_sum->size[1] == b_Sigma->size[1])) {
      b_loop_ub = d_sum->size[0] * d_sum->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        sum_data[i1] += b_Sigma_data[i1];
      }
    } else {
      st.site = &if_emlrtRSI;
      plus(&st, d_sum, b_Sigma);
      sum_data = d_sum->data;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b);
  if ((precG0->size[0] != d_sum->size[0]) &&
      ((precG0->size[0] != 1) && (d_sum->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precG0->size[0], d_sum->size[0], &jb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((precG0->size[1] != d_sum->size[1]) &&
      ((precG0->size[1] != 1) && (d_sum->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precG0->size[1], d_sum->size[1], &kb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((precG0->size[0] == d_sum->size[0]) &&
      (precG0->size[1] == d_sum->size[1])) {
    i = b_Sigma->size[0] * b_Sigma->size[1];
    b_Sigma->size[0] = precG0->size[0];
    b_Sigma->size[1] = precG0->size[1];
    emxEnsureCapacity_real_T(sp, b_Sigma, i, &pf_emlrtRTEI);
    b_Sigma_data = b_Sigma->data;
    b_loop_ub = precG0->size[0] * precG0->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      b_Sigma_data[i] = precG0_data[i] + sum_data[i];
    }
    st.site = &jf_emlrtRSI;
    inv(&st, b_Sigma, d_sum);
    sum_data = d_sum->data;
  } else {
    st.site = &jf_emlrtRSI;
    h_binary_expand_op(&st, d_sum, jf_emlrtRSI, precG0);
    sum_data = d_sum->data;
  }
  emxInit_real_T(sp, &e_sum, 1, &of_emlrtRTEI);
  i = e_sum->size[0];
  e_sum->size[0] = precG0->size[0];
  emxEnsureCapacity_real_T(sp, e_sum, i, &qf_emlrtRTEI);
  b_sum_data = e_sum->data;
  b_loop_ub = precG0->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    b_sum_data[i] = 0.0;
  }
  i = Y->size[0];
  emxInit_real_T(sp, &GAMMA, 1, &yf_emlrtRTEI);
  emxInit_real_T(sp, &a, 2, &tf_emlrtRTEI);
  emxInit_real_T(sp, &b_b, 1, &wf_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > XZ->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XZ->size[2], &sd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i + 1 > Xs->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Xs->size[0], &td_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &kf_emlrtRSI;
    beta1 = b_inv(&st, Sigma11);
    st.site = &kf_emlrtRSI;
    if (b_i + 1 > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, X->size[0], &ud_emlrtBCI, &st);
    }
    b_loop_ub = X->size[1];
    i1 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, a, i1, &tf_emlrtRTEI);
    gamma_data = a->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      gamma_data[i1] = X_data[b_i + X->size[0] * i1];
    }
    b_st.site = &xc_emlrtRSI;
    if (beta->size[0] != X->size[1]) {
      if ((X->size[1] == 1) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (X->size[1] < 1) {
      alpha1 = 0.0;
    } else {
      n_t = (ptrdiff_t)X->size[1];
      m_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)1;
      alpha1 = ddot(&n_t, &gamma_data[0], &m_t, &beta_data[0], &k_t);
    }
    if (b_i + 1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Y->size[0], &vd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    alpha1 = Y_data[b_i] - alpha1;
    i1 = GAMMA->size[0];
    GAMMA->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, GAMMA, i1, &uf_emlrtRTEI);
    GAMMA_data = GAMMA->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      GAMMA_data[i1] = Sigma_data[i2 + i1] * beta1 * alpha1;
    }
    if ((GAMMA->size[0] != Xs->size[1]) &&
        ((Xs->size[1] != 1) && (GAMMA->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Xs->size[1], GAMMA->size[0], &lb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    st.site = &kf_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    b_loop_ub = XZ->size[0];
    if (XZ->size[0] != inv_comSig->size[0]) {
      if (((XZ->size[0] == 1) && (XZ->size[1] == 1)) ||
          ((inv_comSig->size[0] == 1) && (inv_comSig->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    c_loop_ub = XZ->size[1];
    i1 = b_Sigma->size[0] * b_Sigma->size[1];
    b_Sigma->size[0] = XZ->size[0];
    b_Sigma->size[1] = XZ->size[1];
    emxEnsureCapacity_real_T(&st, b_Sigma, i1, &vf_emlrtRTEI);
    b_Sigma_data = b_Sigma->data;
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        b_Sigma_data[i3 + b_Sigma->size[0] * i1] =
            XZ_data[(i3 + XZ->size[0] * i1) + XZ->size[0] * XZ->size[1] * b_i];
      }
    }
    b_st.site = &ad_emlrtRSI;
    d_mtimes(&b_st, b_Sigma, inv_comSig, y);
    st.site = &kf_emlrtRSI;
    b_loop_ub = Xs->size[1];
    if (GAMMA->size[0] == Xs->size[1]) {
      i1 = b_b->size[0];
      b_b->size[0] = Xs->size[1];
      emxEnsureCapacity_real_T(&st, b_b, i1, &wf_emlrtRTEI);
      b_data = b_b->data;
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_data[i1] = Xs_data[b_i + Xs->size[0] * i1] - GAMMA_data[i1];
      }
    } else {
      b_st.site = &kf_emlrtRSI;
      i_binary_expand_op(&b_st, b_b, Xs, b_i, GAMMA);
    }
    b_st.site = &xc_emlrtRSI;
    if (b_b->size[0] != y->size[1]) {
      if (((y->size[0] == 1) && (y->size[1] == 1)) || (b_b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &f_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_st.site = &ad_emlrtRSI;
    b_mtimes(&b_st, y, b_b, GAMMA);
    GAMMA_data = GAMMA->data;
    b_loop_ub = e_sum->size[0];
    if ((e_sum->size[0] != GAMMA->size[0]) &&
        ((e_sum->size[0] != 1) && (GAMMA->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(e_sum->size[0], GAMMA->size[0], &mb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (e_sum->size[0] == GAMMA->size[0]) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_sum_data[i1] += GAMMA_data[i1];
      }
    } else {
      st.site = &kf_emlrtRSI;
      b_plus(&st, e_sum, GAMMA);
      b_sum_data = e_sum->data;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &a);
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &inv_comSig);
  st.site = &lf_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (gamma0->size[0] != precG0->size[1]) {
    if (((precG0->size[0] == 1) && (precG0->size[1] == 1)) ||
        (gamma0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ad_emlrtRSI;
  b_mtimes(&b_st, precG0, gamma0, GAMMA);
  GAMMA_data = GAMMA->data;
  if ((GAMMA->size[0] != e_sum->size[0]) &&
      ((GAMMA->size[0] != 1) && (e_sum->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(GAMMA->size[0], e_sum->size[0], &nb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (GAMMA->size[0] == e_sum->size[0]) {
    loop_ub = GAMMA->size[0];
    for (i = 0; i < loop_ub; i++) {
      GAMMA_data[i] += b_sum_data[i];
    }
  } else {
    st.site = &lf_emlrtRSI;
    b_plus(&st, GAMMA, e_sum);
  }
  emxFree_real_T(sp, &e_sum);
  st.site = &mf_emlrtRSI;
  i = b_Sigma->size[0] * b_Sigma->size[1];
  b_Sigma->size[0] = d_sum->size[0];
  b_Sigma->size[1] = d_sum->size[1];
  emxEnsureCapacity_real_T(&st, b_Sigma, i, &gf_emlrtRTEI);
  b_Sigma_data = b_Sigma->data;
  loop_ub = d_sum->size[0] * d_sum->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Sigma_data[i] = sum_data[i];
  }
  b_st.site = &bf_emlrtRSI;
  cholesky(&b_st, b_Sigma);
  st.site = &mf_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (GAMMA->size[0] != d_sum->size[1]) {
    if (((d_sum->size[0] == 1) && (d_sum->size[1] == 1)) ||
        (GAMMA->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ad_emlrtRSI;
  b_mtimes(&b_st, d_sum, GAMMA, b_gamma);
  gamma_data = b_gamma->data;
  st.site = &mf_emlrtRSI;
  b_st.site = &mf_emlrtRSI;
  b_randn(&b_st, gamma0->size[0], b_b);
  b_st.site = &xc_emlrtRSI;
  emxFree_real_T(&b_st, &d_sum);
  if (b_Sigma->size[0] != b_b->size[0]) {
    if (((b_Sigma->size[0] == 1) && (b_Sigma->size[1] == 1)) ||
        (b_b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ad_emlrtRSI;
  f_mtimes(&b_st, b_Sigma, b_b, GAMMA);
  GAMMA_data = GAMMA->data;
  emxFree_real_T(sp, &b_Sigma);
  emxFree_real_T(sp, &b_b);
  if ((b_gamma->size[0] != GAMMA->size[0]) &&
      ((b_gamma->size[0] != 1) && (GAMMA->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_gamma->size[0], GAMMA->size[0], &ob_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b_gamma->size[0] == GAMMA->size[0]) {
    loop_ub = b_gamma->size[0];
    for (i = 0; i < loop_ub; i++) {
      gamma_data[i] += GAMMA_data[i];
    }
  } else {
    st.site = &mf_emlrtRSI;
    b_plus(&st, b_gamma, GAMMA);
  }
  emxFree_real_T(sp, &GAMMA);
  /*  sampling beta */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[37])
{
  static const int32_T iv[2] = {1, 37};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *d_sum,
                   const emxArray_real_T *A)
{
  emxArray_real_T *e_sum;
  const real_T *A_data;
  real_T *b_sum_data;
  real_T *sum_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  A_data = A->data;
  sum_data = d_sum->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &e_sum, 1, &hh_emlrtRTEI);
  i = e_sum->size[0];
  if (A->size[0] == 1) {
    e_sum->size[0] = d_sum->size[0];
  } else {
    e_sum->size[0] = A->size[0];
  }
  emxEnsureCapacity_real_T(sp, e_sum, i, &hh_emlrtRTEI);
  b_sum_data = e_sum->data;
  stride_0_0 = (d_sum->size[0] != 1);
  stride_1_0 = (A->size[0] != 1);
  if (A->size[0] == 1) {
    loop_ub = d_sum->size[0];
  } else {
    loop_ub = A->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_sum_data[i] = sum_data[i * stride_0_0] + A_data[i * stride_1_0];
  }
  i = d_sum->size[0];
  d_sum->size[0] = e_sum->size[0];
  emxEnsureCapacity_real_T(sp, d_sum, i, &hh_emlrtRTEI);
  sum_data = d_sum->data;
  loop_ub = e_sum->size[0];
  for (i = 0; i < loop_ub; i++) {
    sum_data[i] = b_sum_data[i];
  }
  emxFree_real_T(sp, &e_sum);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *b_hat, real_T Sigma_hat,
                               const emxArray_real_T *xf_exo,
                               const emxArray_real_T *r2,
                               const emxArray_real_T *varargin_1)
{
  emlrtStack st;
  emxArray_real_T *b_b_hat;
  emxArray_real_T *b_xf_exo;
  emxArray_real_T *r1;
  const real_T *b_hat_data;
  const real_T *r;
  const real_T *varargin_1_data;
  const real_T *xf_exo_data;
  real_T ln_joint_post;
  real_T *b_b_hat_data;
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
  varargin_1_data = varargin_1->data;
  r = r2->data;
  xf_exo_data = xf_exo->data;
  b_hat_data = b_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b_hat, 1, &hc_emlrtRTEI);
  i = b_b_hat->size[0];
  b_b_hat->size[0] = b_hat->size[0] + 1;
  emxEnsureCapacity_real_T(sp, b_b_hat, i, &hc_emlrtRTEI);
  b_b_hat_data = b_b_hat->data;
  loop_ub = b_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = b_hat_data[i];
  }
  emxInit_real_T(sp, &b_xf_exo, 1, &jc_emlrtRTEI);
  b_b_hat_data[b_hat->size[0]] = Sigma_hat;
  i = b_xf_exo->size[0];
  b_xf_exo->size[0] = xf_exo->size[1];
  emxEnsureCapacity_real_T(sp, b_xf_exo, i, &jc_emlrtRTEI);
  b_b_hat_data = b_xf_exo->data;
  loop_ub = xf_exo->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = xf_exo_data[i];
  }
  emxInit_real_T(sp, &r1, 2, &ib_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  if (varargin_1->size[1] == 1) {
    r1->size[0] = r2->size[0];
  } else {
    r1->size[0] = varargin_1->size[1];
  }
  if (varargin_1->size[0] == 1) {
    r1->size[1] = r2->size[1];
  } else {
    r1->size[1] = varargin_1->size[0];
  }
  emxEnsureCapacity_real_T(sp, r1, i, &ib_emlrtRTEI);
  b_b_hat_data = r1->data;
  stride_0_0 = (r2->size[0] != 1);
  stride_0_1 = (r2->size[1] != 1);
  stride_1_0 = (varargin_1->size[1] != 1);
  stride_1_1 = (varargin_1->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (varargin_1->size[0] == 1) {
    loop_ub = r2->size[1];
  } else {
    loop_ub = varargin_1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (varargin_1->size[1] == 1) {
      b_loop_ub = r2->size[0];
    } else {
      b_loop_ub = varargin_1->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_hat_data[i1 + r1->size[0] * i] =
          0.5 *
          (r[i1 * stride_0_0 + r2->size[0] * aux_0_1] +
           varargin_1_data[aux_1_1 + varargin_1->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &qi_emlrtRSI;
  ln_joint_post = lnpdfmvn(&st, b_b_hat, b_xf_exo, r1);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &b_xf_exo);
  emxFree_real_T(sp, &b_b_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return ln_joint_post;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[8])
{
  static const int32_T iv[2] = {1, 8};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 8, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  iv[0] = 1;
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[9])
{
  static const int32_T iv[2] = {1, 9};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 9, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[6])
{
  static const int32_T iv[2] = {1, 6};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 6, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[10])
{
  static const int32_T iv[2] = {1, 10};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 10, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"format", true, location);
}

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *d_sum,
                               emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *R0_inv)
{
  emlrtStack st;
  emxArray_real_T *b_R0_inv;
  const real_T *R0_inv_data;
  real_T *b_R0_inv_data;
  real_T *sum_data;
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
  R0_inv_data = R0_inv->data;
  sum_data = d_sum->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_R0_inv, 2, &le_emlrtRTEI);
  i = b_R0_inv->size[0] * b_R0_inv->size[1];
  if (d_sum->size[0] == 1) {
    b_R0_inv->size[0] = R0_inv->size[0];
  } else {
    b_R0_inv->size[0] = d_sum->size[0];
  }
  if (d_sum->size[1] == 1) {
    b_R0_inv->size[1] = R0_inv->size[1];
  } else {
    b_R0_inv->size[1] = d_sum->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_R0_inv, i, &le_emlrtRTEI);
  b_R0_inv_data = b_R0_inv->data;
  stride_0_0 = (R0_inv->size[0] != 1);
  stride_0_1 = (R0_inv->size[1] != 1);
  stride_1_0 = (d_sum->size[0] != 1);
  stride_1_1 = (d_sum->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (d_sum->size[1] == 1) {
    loop_ub = R0_inv->size[1];
  } else {
    loop_ub = d_sum->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (d_sum->size[0] == 1) {
      b_loop_ub = R0_inv->size[0];
    } else {
      b_loop_ub = d_sum->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_R0_inv_data[i1 + b_R0_inv->size[0] * i] =
          R0_inv_data[i1 * stride_0_0 + R0_inv->size[0] * aux_0_1] +
          sum_data[i1 * stride_1_0 + d_sum->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &qi_emlrtRSI;
  inv(&st, b_R0_inv, d_sum);
  emxFree_real_T(sp, &b_R0_inv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38])
{
  static const int32_T iv[2] = {1, 38};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 38, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *b,
                               const emxArray_real_T *Xs, int32_T i,
                               const emxArray_real_T *A)
{
  const real_T *A_data;
  const real_T *Xs_data;
  real_T *b_data;
  int32_T b_i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  A_data = A->data;
  Xs_data = Xs->data;
  b_i = Xs->size[1];
  stride_0_0 = b->size[0];
  if (A->size[0] == 1) {
    b->size[0] = b_i;
  } else {
    b->size[0] = A->size[0];
  }
  emxEnsureCapacity_real_T(sp, b, stride_0_0, &ff_emlrtRTEI);
  b_data = b->data;
  stride_0_0 = (b_i != 1);
  stride_1_0 = (A->size[0] != 1);
  if (A->size[0] == 1) {
    loop_ub = b_i;
  } else {
    loop_ub = A->size[0];
  }
  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_data[b_i] = Xs_data[i + Xs->size[0] * (b_i * stride_0_0)] -
                  A_data[b_i * stride_1_0];
  }
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[23])
{
  static const int32_T iv[2] = {1, 23};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
                               emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *precB0,
                               const emxArray_real_T *XT)
{
  emlrtStack st;
  emxArray_real_T *b_precB0;
  const real_T *XT_data;
  const real_T *precB0_data;
  real_T *b_precB0_data;
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
  XT_data = XT->data;
  precB0_data = precB0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_precB0, 2, &bf_emlrtRTEI);
  i = b_precB0->size[0] * b_precB0->size[1];
  if (XT->size[0] == 1) {
    b_precB0->size[0] = precB0->size[0];
  } else {
    b_precB0->size[0] = XT->size[0];
  }
  if (XT->size[1] == 1) {
    b_precB0->size[1] = precB0->size[1];
  } else {
    b_precB0->size[1] = XT->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_precB0, i, &bf_emlrtRTEI);
  b_precB0_data = b_precB0->data;
  stride_0_0 = (precB0->size[0] != 1);
  stride_0_1 = (precB0->size[1] != 1);
  stride_1_0 = (XT->size[0] != 1);
  stride_1_1 = (XT->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (XT->size[1] == 1) {
    loop_ub = precB0->size[1];
  } else {
    loop_ub = XT->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (XT->size[0] == 1) {
      b_loop_ub = precB0->size[0];
    } else {
      b_loop_ub = XT->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_precB0_data[i1 + b_precB0->size[0] * i] =
          precB0_data[i1 * stride_0_0 + precB0->size[0] * aux_0_1] +
          XT_data[i1 * stride_1_0 + XT->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &qi_emlrtRSI;
  inv(&st, b_precB0, B1);
  emxFree_real_T(sp, &b_precB0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7])
{
  static const int32_T iv[2] = {1, 7};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void k_binary_expand_op(const emlrtStack *sp,
                               emxArray_real_T *inv_comSig,
                               emlrtRSInfo qi_emlrtRSI,
                               const emxArray_real_T *Sigma, int32_T i2,
                               int32_T i3, int32_T i4, int32_T i5,
                               const emxArray_real_T *r1)
{
  emlrtStack st;
  emxArray_real_T *b_Sigma;
  const real_T *Sigma_data;
  const real_T *r;
  real_T *b_Sigma_data;
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
  r = r1->data;
  Sigma_data = Sigma->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Sigma, 2, &nf_emlrtRTEI);
  i = b_Sigma->size[0] * b_Sigma->size[1];
  if (r1->size[0] == 1) {
    b_Sigma->size[0] = (i3 - i2) + 1;
  } else {
    b_Sigma->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    b_Sigma->size[1] = (i5 - i4) + 1;
  } else {
    b_Sigma->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_Sigma, i, &nf_emlrtRTEI);
  b_Sigma_data = b_Sigma->data;
  stride_0_0 = ((i3 - i2) + 1 != 1);
  stride_0_1 = ((i5 - i4) + 1 != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = (i5 - i4) + 1;
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = (i3 - i2) + 1;
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Sigma_data[i1 + b_Sigma->size[0] * i] =
          Sigma_data[(i2 + i1 * stride_0_0) + Sigma->size[0] * (i4 + aux_0_1)] -
          r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &qi_emlrtRSI;
  inv(&st, b_Sigma, inv_comSig);
  emxFree_real_T(sp, &b_Sigma);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *k_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *m_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  return y;
}

static void plus(const emlrtStack *sp, emxArray_real_T *d_sum,
                 const emxArray_real_T *r1)
{
  emxArray_real_T *e_sum;
  const real_T *r;
  real_T *b_sum_data;
  real_T *sum_data;
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
  sum_data = d_sum->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &e_sum, 2, &eh_emlrtRTEI);
  i = e_sum->size[0] * e_sum->size[1];
  if (r1->size[0] == 1) {
    e_sum->size[0] = d_sum->size[0];
  } else {
    e_sum->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    e_sum->size[1] = d_sum->size[1];
  } else {
    e_sum->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, e_sum, i, &eh_emlrtRTEI);
  b_sum_data = e_sum->data;
  stride_0_0 = (d_sum->size[0] != 1);
  stride_0_1 = (d_sum->size[1] != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = d_sum->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = d_sum->size[0];
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_sum_data[i1 + e_sum->size[0] * i] =
          sum_data[i1 * stride_0_0 + d_sum->size[0] * aux_0_1] +
          r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = d_sum->size[0] * d_sum->size[1];
  d_sum->size[0] = e_sum->size[0];
  d_sum->size[1] = e_sum->size[1];
  emxEnsureCapacity_real_T(sp, d_sum, i, &eh_emlrtRTEI);
  sum_data = d_sum->data;
  loop_ub = e_sum->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = e_sum->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      sum_data[i1 + d_sum->size[0] * i] = b_sum_data[i1 + e_sum->size[0] * i];
    }
  }
  emxFree_real_T(sp, &e_sum);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void IV_Regression(const emlrtStack *sp, const emxArray_real_T *data,
                   const emxArray_real_T *b0, const emxArray_real_T *B0,
                   real_T v0, const emxArray_real_T *R0,
                   const emxArray_real_T *gamma0, const emxArray_real_T *G0,
                   real_T n0, real_T n1, real_T yind,
                   const emxArray_real_T *exoind,
                   const emxArray_real_T *endoind, const emxArray_real_T *zind,
                   char_T forecast, const emxArray_real_T *x_f, char_T ML,
                   struct0_T *Output)
{
  static const char_T cv2[38] = {
      'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n', 'g', ' ', 't', 'h',
      'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ', 'P', 'l',
      'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.'};
  static const char_T cv4[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv7[10] = {'[', 's', 'i', 'g', 'm',
                                 'a', '2', ':', ' ', ']'};
  static const char_T cv6[9] = {'[', 'g', 'a', 'm', 'm', 'a', ':', ' ', ']'};
  static const char_T cv5[8] = {'[', 'b', 'e', 't', 'a', ':', ' ', ']'};
  static const char_T cv3[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T b_cv[6] = {'s', 'h', 'o', 'r', 't', 'G'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *b_exoind;
  emxArray_real_T *R0_inv;
  emxArray_real_T *Sigma;
  emxArray_real_T *X;
  emxArray_real_T *XZ;
  emxArray_real_T *X_f;
  emxArray_real_T *Xs;
  emxArray_real_T *Xs_tmp;
  emxArray_real_T *Y;
  emxArray_real_T *b;
  emxArray_real_T *b_hat;
  emxArray_real_T *e;
  emxArray_real_T *gam;
  emxArray_real_T *gammam;
  emxArray_real_T *precB0;
  emxArray_real_T *precG0;
  emxArray_real_T *r;
  emxArray_real_T *varargin_1;
  emxArray_real_T *vec_Sigma;
  emxArray_real_T *xf_exo;
  const real_T *R0_data;
  const real_T *b0_data;
  const real_T *data_data;
  const real_T *endoind_data;
  const real_T *exoind_data;
  const real_T *gamma0_data;
  const real_T *x_f_data;
  const real_T *zind_data;
  real_T Sigma_hat;
  real_T alpha;
  real_T b_prior;
  real_T beta;
  real_T d;
  real_T lnlik1;
  real_T lnpost_hat;
  real_T n;
  real_T sig2;
  real_T *R0_inv_data;
  real_T *Sigma_data;
  real_T *X_data;
  real_T *Xs_tmp_data;
  real_T *Y_data;
  real_T *b_data;
  real_T *b_hat_data;
  real_T *gam_data;
  real_T *gammam_data;
  real_T *r1;
  real_T *vec_Sigma_data;
  real_T *xf_exo_data;
  int32_T b_result[2];
  int32_T sizes[2];
  int32_T Is_forecasting;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T input_sizes_idx_1;
  int32_T k2;
  int32_T loop_ub;
  int32_T result;
  int32_T *b_exoind_data;
  uint32_T u;
  char_T cv1[37];
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  x_f_data = x_f->data;
  zind_data = zind->data;
  endoind_data = endoind->data;
  exoind_data = exoind->data;
  gamma0_data = gamma0->data;
  R0_data = R0->data;
  b0_data = b0->data;
  data_data = data->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &precB0, 2, &lc_emlrtRTEI);
  emxInit_real_T(sp, &precG0, 2, &mc_emlrtRTEI);
  emxInit_real_T(sp, &R0_inv, 2, &nc_emlrtRTEI);
  st.site = &ph_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);
  st.site = &emlrtRSI;
  invpd(&st, B0, precB0);
  /*  Precision matrix of B_0(역행렬) */
  st.site = &b_emlrtRSI;
  invpd(&st, G0, precG0);
  st.site = &c_emlrtRSI;
  inv(&st, R0, R0_inv);
  R0_inv_data = R0_inv->data;
  n = n0 + n1;
  /*  total number of iteration(n0: 번인 되는 개수) */
  if (forecast == 'Y') {
    Is_forecasting = 1;
    /*   예측하기 */
  } else {
    Is_forecasting = 0;
    /*  예측 안하기 */
  }
  /*  number of columns */
  k2 = endoind->size[1];
  /*  number of columns */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->yfm->size[0];
  loop_ub = (int32_T)n;
  Output->yfm->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Output->yfm, i1, &cb_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->yfm->data[i1] = 0.0;
  }
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = (int32_T)n;
  i2 = Output->bm->size[0] * Output->bm->size[1];
  Output->bm->size[0] = i1;
  emxEnsureCapacity_real_T(sp, Output->bm, i2, &db_emlrtRTEI);
  u = (uint32_T)exoind->size[1] + endoind->size[1];
  if ((real_T)u != (int32_T)u) {
    emlrtIntegerCheckR2012b(u, &g_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = Output->bm->size[0] * Output->bm->size[1];
  Output->bm->size[1] = (int32_T)u;
  emxEnsureCapacity_real_T(sp, Output->bm, i2, &db_emlrtRTEI);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &o_emlrtDCI, (emlrtCTX)sp);
  }
  u = (uint32_T)exoind->size[1] + endoind->size[1];
  if ((real_T)u != (int32_T)u) {
    emlrtIntegerCheckR2012b(u, &o_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = i1 * (int32_T)u;
  for (i2 = 0; i2 < loop_ub; i2++) {
    Output->bm->data[i2] = 0.0;
  }
  emxInit_real_T(sp, &gammam, 2, &eb_emlrtRTEI);
  /*  b 저장 공간 */
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = gammam->size[0] * gammam->size[1];
  gammam->size[0] = i1;
  emxEnsureCapacity_real_T(sp, gammam, i2, &eb_emlrtRTEI);
  d = (real_T)endoind->size[1] *
      (real_T)((uint32_T)exoind->size[1] + zind->size[1]);
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &i_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = gammam->size[0] * gammam->size[1];
  gammam->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, gammam, i2, &eb_emlrtRTEI);
  gammam_data = gammam->data;
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &p_emlrtDCI, (emlrtCTX)sp);
  }
  d = (real_T)endoind->size[1] *
      (real_T)((uint32_T)exoind->size[1] + zind->size[1]);
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &p_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = i1 * (int32_T)d;
  for (i2 = 0; i2 < loop_ub; i2++) {
    gammam_data[i2] = 0.0;
  }
  st.site = &d_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  c_st.site = &ed_emlrtRSI;
  lnlik1 = ((real_T)endoind->size[1] + 1.0) * ((real_T)endoind->size[1] + 1.0);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = Output->Sigmam->size[0] * Output->Sigmam->size[1];
  Output->Sigmam->size[0] = i1;
  emxEnsureCapacity_real_T(sp, Output->Sigmam, i2, &fb_emlrtRTEI);
  if (lnlik1 != (int32_T)lnlik1) {
    emlrtIntegerCheckR2012b(lnlik1, &k_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = Output->Sigmam->size[0] * Output->Sigmam->size[1];
  Output->Sigmam->size[1] = (int32_T)lnlik1;
  emxEnsureCapacity_real_T(sp, Output->Sigmam, i2, &fb_emlrtRTEI);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &q_emlrtDCI, (emlrtCTX)sp);
  }
  if (lnlik1 != (int32_T)lnlik1) {
    emlrtIntegerCheckR2012b(lnlik1, &q_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = i1 * (int32_T)lnlik1;
  for (i = 0; i < loop_ub; i++) {
    Output->Sigmam->data[i] = 0.0;
  }
  emxInit_real_T(sp, &b, 1, &gb_emlrtRTEI);
  /*  초기값 설정 */
  i = b->size[0];
  b->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b, i, &gb_emlrtRTEI);
  b_data = b->data;
  loop_ub = b0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = b0_data[i];
  }
  emxInit_real_T(sp, &gam, 1, &hb_emlrtRTEI);
  i = gam->size[0];
  gam->size[0] = gamma0->size[0];
  emxEnsureCapacity_real_T(sp, gam, i, &hb_emlrtRTEI);
  gam_data = gam->data;
  loop_ub = gamma0->size[0];
  for (i = 0; i < loop_ub; i++) {
    gam_data[i] = gamma0_data[i];
  }
  emxInit_real_T(sp, &X, 2, &lb_emlrtRTEI);
  i = X->size[0] * X->size[1];
  X->size[0] = R0->size[0];
  X->size[1] = R0->size[1];
  emxEnsureCapacity_real_T(sp, X, i, &ib_emlrtRTEI);
  X_data = X->data;
  loop_ub = R0->size[0] * R0->size[1];
  for (i = 0; i < loop_ub; i++) {
    X_data[i] = v0 * R0_data[i];
  }
  emxInit_real_T(sp, &Sigma, 2, &oc_emlrtRTEI);
  st.site = &e_emlrtRSI;
  inv(&st, X, Sigma);
  if (yind != (int32_T)muDoubleScalarFloor(yind)) {
    emlrtIntegerCheckR2012b(yind, &emlrtDCI, (emlrtCTX)sp);
  }
  if (((int32_T)yind < 1) || ((int32_T)yind > data->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)yind, 1, data->size[1], &emlrtBCI,
                                  (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Y, 1, &jb_emlrtRTEI);
  loop_ub = data->size[0];
  i = Y->size[0];
  Y->size[0] = data->size[0];
  emxEnsureCapacity_real_T(sp, Y, i, &jb_emlrtRTEI);
  Y_data = Y->data;
  for (i = 0; i < loop_ub; i++) {
    Y_data[i] = data_data[i + data->size[0] * ((int32_T)yind - 1)];
  }
  emxInit_int32_T(sp, &b_exoind, 1, &kb_emlrtRTEI);
  input_sizes_idx_1 = data->size[1];
  i = b_exoind->size[0];
  b_exoind->size[0] = exoind->size[1] + endoind->size[1];
  emxEnsureCapacity_int32_T(sp, b_exoind, i, &kb_emlrtRTEI);
  b_exoind_data = b_exoind->data;
  loop_ub = exoind->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (exoind_data[i] != (int32_T)muDoubleScalarFloor(exoind_data[i])) {
      emlrtIntegerCheckR2012b(exoind_data[i], &r_emlrtDCI, (emlrtCTX)sp);
    }
    i2 = (int32_T)exoind_data[i];
    if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)exoind_data[i], 1,
                                    input_sizes_idx_1, &bb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_exoind_data[i] = i2 - 1;
  }
  loop_ub = endoind->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (endoind_data[i] != (int32_T)muDoubleScalarFloor(endoind_data[i])) {
      emlrtIntegerCheckR2012b(endoind_data[i], &r_emlrtDCI, (emlrtCTX)sp);
    }
    i2 = (int32_T)endoind_data[i];
    if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)endoind_data[i], 1,
                                    input_sizes_idx_1, &bb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_exoind_data[i + exoind->size[1]] = i2 - 1;
  }
  loop_ub = data->size[0];
  i = X->size[0] * X->size[1];
  X->size[0] = data->size[0];
  X->size[1] = b_exoind->size[0];
  emxEnsureCapacity_real_T(sp, X, i, &lb_emlrtRTEI);
  X_data = X->data;
  input_sizes_idx_1 = b_exoind->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      X_data[i2 + X->size[0] * i] =
          data_data[i2 + data->size[0] * b_exoind_data[i]];
    }
  }
  emxFree_int32_T(sp, &b_exoind);
  emxInit_real_T(sp, &Xs_tmp, 1, &mb_emlrtRTEI);
  /*  X = (x' xs') */
  i = Xs_tmp->size[0];
  Xs_tmp->size[0] = endoind->size[1];
  emxEnsureCapacity_real_T(sp, Xs_tmp, i, &mb_emlrtRTEI);
  Xs_tmp_data = Xs_tmp->data;
  loop_ub = endoind->size[1];
  for (i = 0; i < loop_ub; i++) {
    Xs_tmp_data[i] = endoind_data[i];
  }
  emxInit_real_T(sp, &Xs, 2, &nb_emlrtRTEI);
  loop_ub = data->size[0];
  i = Xs->size[0] * Xs->size[1];
  Xs->size[0] = data->size[0];
  Xs->size[1] = Xs_tmp->size[0];
  emxEnsureCapacity_real_T(sp, Xs, i, &nb_emlrtRTEI);
  X_data = Xs->data;
  input_sizes_idx_1 = Xs_tmp->size[0];
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      if (Xs_tmp_data[i] != (int32_T)muDoubleScalarFloor(Xs_tmp_data[i])) {
        emlrtIntegerCheckR2012b(Xs_tmp_data[i], &s_emlrtDCI, (emlrtCTX)sp);
      }
      i3 = (int32_T)Xs_tmp_data[i];
      if ((i3 < 1) || (i3 > data->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, data->size[1], &cb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[i2 + Xs->size[0] * i] = data_data[i2 + data->size[0] * (i3 - 1)];
    }
  }
  emxInit_real_T(sp, &XZ, 3, &ob_emlrtRTEI);
  /*  xs' */
  i = XZ->size[0] * XZ->size[1] * XZ->size[2];
  XZ->size[0] = endoind->size[1];
  emxEnsureCapacity_real_T(sp, XZ, i, &ob_emlrtRTEI);
  d = (real_T)exoind->size[1] * (real_T)endoind->size[1] +
      (real_T)endoind->size[1] * (real_T)zind->size[1];
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &l_emlrtDCI, (emlrtCTX)sp);
  }
  i = XZ->size[0] * XZ->size[1] * XZ->size[2];
  XZ->size[1] = (int32_T)d;
  XZ->size[2] = data->size[0];
  emxEnsureCapacity_real_T(sp, XZ, i, &ob_emlrtRTEI);
  X_data = XZ->data;
  d = (real_T)exoind->size[1] * (real_T)endoind->size[1] +
      (real_T)endoind->size[1] * (real_T)zind->size[1];
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &t_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = endoind->size[1] * (int32_T)d * data->size[0];
  for (i = 0; i < loop_ub; i++) {
    X_data[i] = 0.0;
  }
  /*  Xs = [(kron(I,x') kron(I,z')] */
  i = data->size[0];
  emxInit_real_T(sp, &vec_Sigma, 2, &ub_emlrtRTEI);
  emxInit_real_T(sp, &xf_exo, 2, &ec_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 2, &pc_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &qc_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > XZ->size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, XZ->size[2], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &f_emlrtRSI;
    b_st.site = &f_emlrtRSI;
    eye(&b_st, k2, r);
    if (b_i + 1 > data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, data->size[0], &b_emlrtBCI,
                                    &st);
    }
    i2 = xf_exo->size[0] * xf_exo->size[1];
    xf_exo->size[0] = 1;
    loop_ub = exoind->size[1];
    xf_exo->size[1] = exoind->size[1];
    emxEnsureCapacity_real_T(&st, xf_exo, i2, &qb_emlrtRTEI);
    xf_exo_data = xf_exo->data;
    for (i2 = 0; i2 < loop_ub; i2++) {
      if (exoind_data[i2] != (int32_T)muDoubleScalarFloor(exoind_data[i2])) {
        emlrtIntegerCheckR2012b(exoind_data[i2], &u_emlrtDCI, &st);
      }
      i3 = (int32_T)exoind_data[i2];
      if ((i3 < 1) || (i3 > data->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, data->size[1], &db_emlrtBCI, &st);
      }
      xf_exo_data[i2] = data_data[b_i + data->size[0] * (i3 - 1)];
    }
    b_st.site = &f_emlrtRSI;
    kron(&b_st, r, xf_exo, varargin_1);
    Sigma_data = varargin_1->data;
    b_st.site = &f_emlrtRSI;
    eye(&b_st, k2, r);
    if (b_i + 1 > data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, data->size[0], &c_emlrtBCI,
                                    &st);
    }
    i2 = xf_exo->size[0] * xf_exo->size[1];
    xf_exo->size[0] = 1;
    loop_ub = zind->size[1];
    xf_exo->size[1] = zind->size[1];
    emxEnsureCapacity_real_T(&st, xf_exo, i2, &rb_emlrtRTEI);
    xf_exo_data = xf_exo->data;
    for (i2 = 0; i2 < loop_ub; i2++) {
      if (zind_data[i2] != (int32_T)muDoubleScalarFloor(zind_data[i2])) {
        emlrtIntegerCheckR2012b(zind_data[i2], &v_emlrtDCI, &st);
      }
      i3 = (int32_T)zind_data[i2];
      if ((i3 < 1) || (i3 > data->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, data->size[1], &eb_emlrtBCI, &st);
      }
      xf_exo_data[i2] = data_data[b_i + data->size[0] * (i3 - 1)];
    }
    b_st.site = &f_emlrtRSI;
    kron(&b_st, r, xf_exo, vec_Sigma);
    vec_Sigma_data = vec_Sigma->data;
    b_st.site = &ge_emlrtRSI;
    if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
      result = varargin_1->size[0];
    } else if ((vec_Sigma->size[0] != 0) && (vec_Sigma->size[1] != 0)) {
      result = vec_Sigma->size[0];
    } else {
      result = varargin_1->size[0];
      if (vec_Sigma->size[0] > varargin_1->size[0]) {
        result = vec_Sigma->size[0];
      }
    }
    c_st.site = &he_emlrtRSI;
    if ((varargin_1->size[0] != result) &&
        ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((vec_Sigma->size[0] != result) &&
        ((vec_Sigma->size[0] != 0) && (vec_Sigma->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes ||
        ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0))) {
      loop_ub = varargin_1->size[1];
    } else {
      loop_ub = 0;
    }
    if (empty_non_axis_sizes ||
        ((vec_Sigma->size[0] != 0) && (vec_Sigma->size[1] != 0))) {
      sizes[1] = vec_Sigma->size[1];
    } else {
      sizes[1] = 0;
    }
    i2 = r->size[0] * r->size[1];
    r->size[0] = result;
    r->size[1] = loop_ub + sizes[1];
    emxEnsureCapacity_real_T(&b_st, r, i2, &cc_emlrtRTEI);
    r1 = r->data;
    for (i2 = 0; i2 < loop_ub; i2++) {
      for (i3 = 0; i3 < result; i3++) {
        r1[i3 + r->size[0] * i2] = Sigma_data[i3 + result * i2];
      }
    }
    input_sizes_idx_1 = sizes[1];
    for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
      for (i3 = 0; i3 < result; i3++) {
        r1[i3 + r->size[0] * (i2 + loop_ub)] = vec_Sigma_data[i3 + result * i2];
      }
    }
    sizes[0] = XZ->size[0];
    sizes[1] = XZ->size[1];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &r->size[0], 2, &emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      input_sizes_idx_1 = r->size[0];
      for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
        X_data[(i3 + XZ->size[0] * i2) + XZ->size[0] * XZ->size[1] * b_i] =
            r1[i3 + r->size[0] * i2];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &b_hat, 1, &pb_emlrtRTEI);
  lnpost_hat = -4.8516519540979028E+8;
  /*  임의로 값을 주고 시작함 */
  i = b_hat->size[0];
  b_hat->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b_hat, i, &pb_emlrtRTEI);
  b_hat_data = b_hat->data;
  loop_ub = b0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_hat_data[i] = b0_data[i];
  }
  Sigma_hat = 0.0;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &X_f, 2, &gc_emlrtRTEI);
  emxInit_real_T(sp, &e, 1, &ic_emlrtRTEI);
  for (k2 = 0; k2 < i1; k2++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((k2 - (int32_T)muDoubleScalarFloor(((real_T)k2 + 1.0) / 100.0) * 100) +
            1 ==
        0) {
      st.site = &ii_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i = 0; i < 37; i++) {
        cv1[i] = '=';
      }
      st.site = &rh_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv1), &f_emlrtMCI);
      st.site = &g_emlrtRSI;
      b_st.site = &ie_emlrtRSI;
      c_st.site = &xh_emlrtRSI;
      d_st.site = &wh_emlrtRSI;
      c_emlrt_marshallIn(
          &c_st,
          d_feval(&c_st, j_emlrt_marshallOut(&c_st, cv3),
                  k_emlrt_marshallOut(1.0), i_emlrt_marshallOut(&d_st, cv4),
                  k_emlrt_marshallOut((real_T)k2 + 1.0), &v_emlrtMCI),
          "<output of feval>");
      for (i = 0; i < 37; i++) {
        cv1[i] = '=';
      }
      st.site = &qh_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv1), &g_emlrtMCI);
      st.site = &hi_emlrtRSI;
      disp(&st, m_emlrt_marshallOut(), &h_emlrtMCI);
      st.site = &sh_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
      i = xf_exo->size[0] * xf_exo->size[1];
      xf_exo->size[0] = 1;
      loop_ub = b->size[0];
      xf_exo->size[1] = b->size[0];
      emxEnsureCapacity_real_T(sp, xf_exo, i, &wb_emlrtRTEI);
      xf_exo_data = xf_exo->data;
      for (i = 0; i < loop_ub; i++) {
        xf_exo_data[i] = b_data[i];
      }
      st.site = &gi_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(xf_exo), &j_emlrtMCI);
      st.site = &th_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv6), &k_emlrtMCI);
      i = xf_exo->size[0] * xf_exo->size[1];
      xf_exo->size[0] = 1;
      loop_ub = gam->size[0];
      xf_exo->size[1] = gam->size[0];
      emxEnsureCapacity_real_T(sp, xf_exo, i, &ac_emlrtRTEI);
      xf_exo_data = xf_exo->data;
      for (i = 0; i < loop_ub; i++) {
        xf_exo_data[i] = gam_data[i];
      }
      st.site = &fi_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(xf_exo), &l_emlrtMCI);
      st.site = &uh_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(&st, cv7), &m_emlrtMCI);
      st.site = &ei_emlrtRSI;
      disp(&st, g_emlrt_marshallOut(Sigma), &n_emlrtMCI);
    }
    /*  Step 1: Sampling Sigma */
    st.site = &h_emlrtRSI;
    Gen_Sigma(&st, Y, X, Xs, XZ, b, gam, v0, R0_inv, Sigma);
    Sigma_data = Sigma->data;
    i = r->size[0] * r->size[1];
    r->size[0] = Sigma->size[0];
    r->size[1] = Sigma->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &tb_emlrtRTEI);
    r1 = r->data;
    loop_ub = Sigma->size[0] * Sigma->size[1];
    for (i = 0; i < loop_ub; i++) {
      r1[i] = Sigma_data[i];
    }
    st.site = &i_emlrtRSI;
    vec(&st, r);
    r1 = r->data;
    i = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = r->size[1];
    vec_Sigma->size[1] = r->size[0];
    emxEnsureCapacity_real_T(sp, vec_Sigma, i, &ub_emlrtRTEI);
    vec_Sigma_data = vec_Sigma->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = r->size[1];
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        vec_Sigma_data[i2 + vec_Sigma->size[0] * i] = r1[i + r->size[0] * i2];
      }
    }
    if (k2 + 1 > Output->Sigmam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k2 + 1, 1, Output->Sigmam->size[0],
                                    &s_emlrtBCI, (emlrtCTX)sp);
    }
    if (1 > vec_Sigma->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_Sigma->size[0], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = vec_Sigma->size[1];
    i = xf_exo->size[0] * xf_exo->size[1];
    xf_exo->size[0] = 1;
    xf_exo->size[1] = vec_Sigma->size[1];
    emxEnsureCapacity_real_T(sp, xf_exo, i, &yb_emlrtRTEI);
    xf_exo_data = xf_exo->data;
    for (i = 0; i < loop_ub; i++) {
      xf_exo_data[i] = vec_Sigma_data[vec_Sigma->size[0] * i];
    }
    sizes[0] = 1;
    sizes[1] = Output->Sigmam->size[1];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &xf_exo->size[0], 2,
                                  &c_emlrtECI, (emlrtCTX)sp);
    loop_ub = vec_Sigma->size[1];
    for (i = 0; i < loop_ub; i++) {
      Output->Sigmam->data[k2 + Output->Sigmam->size[0] * i] =
          vec_Sigma_data[vec_Sigma->size[0] * i];
    }
    /*  Step 2: Sampling beta */
    st.site = &j_emlrtRSI;
    Gen_beta(&st, Y, X, Xs, XZ, b0, precB0, gam, Sigma, b);
    b_data = b->data;
    if (k2 + 1 > Output->bm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k2 + 1, 1, Output->bm->size[0], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    sizes[0] = 1;
    sizes[1] = Output->bm->size[1];
    b_result[0] = 1;
    loop_ub = b->size[0];
    b_result[1] = b->size[0];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &b_result[0], 2, &b_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Output->bm->data[k2 + Output->bm->size[0] * i] = b_data[i];
    }
    /*  Step 3: Sampling gamma */
    st.site = &k_emlrtRSI;
    Gen_gamma(&st, Y, X, Xs, XZ, b, precG0, gamma0, Sigma, gam);
    gam_data = gam->data;
    if (k2 + 1 > gammam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k2 + 1, 1, gammam->size[0], &v_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    sizes[0] = 1;
    sizes[1] = gammam->size[1];
    b_result[0] = 1;
    loop_ub = gam->size[0];
    b_result[1] = gam->size[0];
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &b_result[0], 2, &d_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      gammam_data[k2 + gammam->size[0] * i] = gam_data[i];
    }
    if (Is_forecasting == 1) {
      i = xf_exo->size[0] * xf_exo->size[1];
      xf_exo->size[0] = 1;
      loop_ub = exoind->size[1];
      xf_exo->size[1] = exoind->size[1];
      emxEnsureCapacity_real_T(sp, xf_exo, i, &ec_emlrtRTEI);
      xf_exo_data = xf_exo->data;
      for (i = 0; i < loop_ub; i++) {
        if (exoind_data[i] != (int32_T)muDoubleScalarFloor(exoind_data[i])) {
          emlrtIntegerCheckR2012b(exoind_data[i], &w_emlrtDCI, (emlrtCTX)sp);
        }
        i2 = (int32_T)exoind_data[i];
        if ((i2 < 1) || (i2 > x_f->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, x_f->size[0], &fb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        xf_exo_data[i] = x_f_data[i2 - 1];
      }
      loop_ub = Xs_tmp->size[0];
      for (i = 0; i < loop_ub; i++) {
        i2 = (int32_T)Xs_tmp_data[i];
        if ((i2 < 1) || (i2 > x_f->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, x_f->size[0], &gb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      /*          zf = x_f(zind,1)'; */
      i = X_f->size[0] * X_f->size[1];
      X_f->size[0] = 1;
      X_f->size[1] = Xs_tmp->size[0] + xf_exo->size[1];
      emxEnsureCapacity_real_T(sp, X_f, i, &gc_emlrtRTEI);
      X_data = X_f->data;
      loop_ub = xf_exo->size[1];
      for (i = 0; i < loop_ub; i++) {
        X_data[i] = xf_exo_data[i];
      }
      loop_ub = Xs_tmp->size[0];
      for (i = 0; i < loop_ub; i++) {
        X_data[i + xf_exo->size[1]] = x_f_data[(int32_T)Xs_tmp_data[i] - 1];
      }
      /*          XZ_f = [kron(eye(k2),xf_exo) kron(eye(k2),zf)]; */
      if (1 > Sigma->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &f_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (1 > Sigma->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &g_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &l_emlrtRSI;
      b_st.site = &xc_emlrtRSI;
      dynamic_size_checks(&b_st, X_f, b, X_f->size[1], b->size[0]);
      d = Sigma_data[0];
      st.site = &l_emlrtRSI;
      if (d < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &u_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      d = muDoubleScalarSqrt(d);
      if ((int32_T)(k2 + 1U) > Output->yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k2 + 1U), 1,
                                      Output->yfm->size[0], &hb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &l_emlrtRSI;
      Output->yfm->data[k2] = mtimes(X_f, b) + d * c_randn();
    }
    if ((ML == 'Y') && ((real_T)k2 + 1.0 > n0)) {
      if (1 > Sigma->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &h_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (1 > Sigma->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &i_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &m_emlrtRSI;
      b_st.site = &xc_emlrtRSI;
      b_dynamic_size_checks(&b_st, X, b, exoind->size[1] + endoind->size[1],
                            b->size[0]);
      b_st.site = &ad_emlrtRSI;
      b_mtimes(&b_st, X, b, e);
      st.site = &m_emlrtRSI;
      b_prior = Sigma_data[0];
      /*  log pdf of normal */
      /*  x = normal variates */
      /*  mu = vector of means */
      /*  sig2vec = vector of variances */
      d = 2.0 * b_prior * 3.1415926535897931;
      b_st.site = &nf_emlrtRSI;
      if (d < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &ab_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      d = muDoubleScalarLog(d);
      lnlik1 = -0.5 * d;
      if ((data->size[0] != e->size[0]) &&
          ((data->size[0] != 1) && (e->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(data->size[0], e->size[0], &g_emlrtECI,
                                    &st);
      }
      if (Y->size[0] == e->size[0]) {
        i = e->size[0];
        e->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(&st, e, i, &ic_emlrtRTEI);
        X_data = e->data;
        loop_ub = Y->size[0];
        for (i = 0; i < loop_ub; i++) {
          X_data[i] = Y_data[i] - X_data[i];
        }
      } else {
        b_st.site = &mi_emlrtRSI;
        minus(&b_st, e, Y);
        X_data = e->data;
      }
      loop_ub = e->size[0];
      for (i = 0; i < loop_ub; i++) {
        X_data[i] = lnlik1 - 0.5 * (X_data[i] * X_data[i]) / b_prior;
      }
      st.site = &m_emlrtRSI;
      lnlik1 = c_sum(&st, e);
      st.site = &n_emlrtRSI;
      b_prior = lnpdfmvn(&st, b, b0, B0);
      if (1 > Sigma->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &j_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (1 > Sigma->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &k_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (1 > R0_inv->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, R0_inv->size[0], &l_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (1 > R0_inv->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, R0_inv->size[1], &m_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &o_emlrtRSI;
      sig2 = Sigma_data[0];
      alpha = (v0 + 2.0) / 2.0;
      beta = R0_inv_data[0] / 2.0;
      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &wg_emlrtRSI;
      if (beta < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &ab_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      d = alpha;
      b_st.site = &wg_emlrtRSI;
      gammaln(&b_st, &d);
      b_st.site = &xg_emlrtRSI;
      if (sig2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &ab_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      lnlik1 += b_prior + (((alpha * muDoubleScalarLog(beta) - d) -
                            (alpha + 1.0) * muDoubleScalarLog(sig2)) -
                           beta / sig2);
      if (lnlik1 > lnpost_hat) {
        loop_ub = b->size[0];
        i = b_hat->size[0];
        b_hat->size[0] = b->size[0];
        emxEnsureCapacity_real_T(sp, b_hat, i, &kc_emlrtRTEI);
        b_hat_data = b_hat->data;
        for (i = 0; i < loop_ub; i++) {
          b_hat_data[i] = b_data[i];
        }
        if (1 > Sigma->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[0], &n_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (1 > Sigma->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Sigma->size[1], &o_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Sigma_hat = Sigma_data[0];
        lnpost_hat = lnlik1;
        /*  최빈값 후보의 사후 커널값 */
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &Xs_tmp);
  emxFree_real_T(sp, &e);
  emxFree_real_T(sp, &X_f);
  emxFree_real_T(sp, &XZ);
  emxFree_real_T(sp, &Xs);
  emxFree_real_T(sp, &Y);
  emxFree_real_T(sp, &Sigma);
  emxFree_real_T(sp, &R0_inv);
  emxFree_real_T(sp, &precG0);
  emxFree_real_T(sp, &precB0);
  st.site = &di_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &b_emlrtMCI);
  st.site = &vh_emlrtRSI;
  disp(&st, h_emlrt_marshallOut(&st, cv2), &c_emlrtMCI);
  st.site = &ci_emlrtRSI;
  disp(&st, m_emlrt_marshallOut(), &d_emlrtMCI);
  if (n0 + 1.0 > n) {
    i = -1;
    i2 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Output->bm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->bm->size[0],
                                    &q_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (i1 > Output->bm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->bm->size[0],
                                    &r_emlrtBCI, (emlrtCTX)sp);
    }
    i2 = i1 - 1;
  }
  b_i = Output->bm->size[1] - 1;
  for (i3 = 0; i3 <= b_i; i3++) {
    input_sizes_idx_1 = i2 - i;
    for (result = 0; result < input_sizes_idx_1; result++) {
      Output->bm->data[result + input_sizes_idx_1 * i3] =
          Output->bm->data[((i + result) + Output->bm->size[0] * i3) + 1];
    }
  }
  i3 = Output->bm->size[0] * Output->bm->size[1];
  Output->bm->size[0] = i2 - i;
  Output->bm->size[1] = b_i + 1;
  emxEnsureCapacity_real_T(sp, Output->bm, i3, &sb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = -1;
    i2 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Output->Sigmam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1,
                                    Output->Sigmam->size[0], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (i1 > Output->Sigmam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Sigmam->size[0],
                                    &u_emlrtBCI, (emlrtCTX)sp);
    }
    i2 = (int32_T)n - 1;
  }
  k2 = Output->Sigmam->size[1] - 1;
  for (i3 = 0; i3 <= k2; i3++) {
    input_sizes_idx_1 = i2 - i;
    for (result = 0; result < input_sizes_idx_1; result++) {
      Output->Sigmam->data[result + input_sizes_idx_1 * i3] =
          Output->Sigmam
              ->data[((i + result) + Output->Sigmam->size[0] * i3) + 1];
    }
  }
  i3 = Output->Sigmam->size[0] * Output->Sigmam->size[1];
  Output->Sigmam->size[0] = i2 - i;
  Output->Sigmam->size[1] = k2 + 1;
  emxEnsureCapacity_real_T(sp, Output->Sigmam, i3, &vb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i2 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > gammam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, gammam->size[0],
                                    &w_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (i1 > gammam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, gammam->size[0], &x_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i2 = i1;
  }
  loop_ub = gammam->size[1];
  input_sizes_idx_1 = i2 - i;
  i2 = Output->gammam->size[0] * Output->gammam->size[1];
  Output->gammam->size[0] = input_sizes_idx_1;
  Output->gammam->size[1] = gammam->size[1];
  emxEnsureCapacity_real_T(sp, Output->gammam, i2, &xb_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (i3 = 0; i3 < input_sizes_idx_1; i3++) {
      Output->gammam->data[i3 + Output->gammam->size[0] * i2] =
          gammam_data[(i + i3) + gammam->size[0] * i2];
    }
  }
  emxFree_real_T(sp, &gammam);
  if (Is_forecasting == 1) {
    if (n0 + 1.0 > n) {
      i = 0;
      i1 = 0;
    } else {
      if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
        emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)(n0 + 1.0) < 1) ||
          ((int32_T)(n0 + 1.0) > Output->yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1,
                                      Output->yfm->size[0], &y_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = (int32_T)(n0 + 1.0) - 1;
      if ((n < 1.0) || (i1 > Output->yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->yfm->size[0],
                                      &ab_emlrtBCI, (emlrtCTX)sp);
      }
    }
    input_sizes_idx_1 = i1 - i;
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      Output->yfm->data[i1] = Output->yfm->data[i + i1];
    }
    i = Output->yfm->size[0];
    Output->yfm->size[0] = input_sizes_idx_1;
    emxEnsureCapacity_real_T(sp, Output->yfm, i, &bc_emlrtRTEI);
  }
  Output->lnML = 0.0;
  if (ML == 'Y') {
    st.site = &p_emlrtRSI;
    b_st.site = &ge_emlrtRSI;
    if ((Output->bm->size[0] != 0) && (b_i + 1 != 0)) {
      result = Output->bm->size[0];
    } else if (Output->Sigmam->size[0] != 0) {
      result = Output->Sigmam->size[0];
    } else {
      result = Output->bm->size[0];
      if (Output->Sigmam->size[0] > Output->bm->size[0]) {
        result = Output->Sigmam->size[0];
      }
    }
    c_st.site = &he_emlrtRSI;
    if ((Output->bm->size[0] != result) &&
        ((Output->bm->size[0] != 0) && (b_i + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Output->Sigmam->size[0] != result) && (Output->Sigmam->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes ||
        ((Output->bm->size[0] != 0) && (b_i + 1 != 0))) {
      input_sizes_idx_1 = b_i + 1;
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || (Output->Sigmam->size[0] != 0)) {
      sizes[1] = 1;
    } else {
      sizes[1] = 0;
    }
    loop_ub = Output->Sigmam->size[0];
    i = b->size[0];
    b->size[0] = Output->Sigmam->size[0];
    emxEnsureCapacity_real_T(&b_st, b, i, &dc_emlrtRTEI);
    b_data = b->data;
    for (i = 0; i < loop_ub; i++) {
      b_data[i] = Output->Sigmam->data[i];
    }
    i = vec_Sigma->size[0] * vec_Sigma->size[1];
    vec_Sigma->size[0] = result;
    vec_Sigma->size[1] = input_sizes_idx_1 + sizes[1];
    emxEnsureCapacity_real_T(&b_st, vec_Sigma, i, &fc_emlrtRTEI);
    vec_Sigma_data = vec_Sigma->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        vec_Sigma_data[i1 + vec_Sigma->size[0] * i] =
            Output->bm->data[i1 + result * i];
      }
    }
    loop_ub = sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < result; i1++) {
        vec_Sigma_data[i1 + vec_Sigma->size[0] * input_sizes_idx_1] =
            b_data[i1];
      }
    }
    st.site = &q_emlrtRSI;
    b_st.site = &fh_emlrtRSI;
    mean(&b_st, vec_Sigma, xf_exo);
    xf_exo_data = xf_exo->data;
    st.site = &r_emlrtRSI;
    cov(&st, vec_Sigma, r);
    r1 = r->data;
    st.site = &r_emlrtRSI;
    cov(&st, vec_Sigma, varargin_1);
    Sigma_data = varargin_1->data;
    if ((r->size[0] != varargin_1->size[1]) &&
        ((r->size[0] != 1) && (varargin_1->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[0], varargin_1->size[1], &e_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((varargin_1->size[0] != r->size[1]) &&
        ((r->size[1] != 1) && (varargin_1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[1], varargin_1->size[0], &f_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((r->size[0] == varargin_1->size[1]) &&
        (varargin_1->size[0] == r->size[1])) {
      i = gam->size[0];
      gam->size[0] = b_hat->size[0] + 1;
      emxEnsureCapacity_real_T(sp, gam, i, &hc_emlrtRTEI);
      gam_data = gam->data;
      loop_ub = b_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        gam_data[i] = b_hat_data[i];
      }
      gam_data[b_hat->size[0]] = Sigma_hat;
      i = b->size[0];
      b->size[0] = xf_exo->size[1];
      emxEnsureCapacity_real_T(sp, b, i, &jc_emlrtRTEI);
      b_data = b->data;
      loop_ub = xf_exo->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_data[i] = xf_exo_data[i];
      }
      i = X->size[0] * X->size[1];
      X->size[0] = r->size[0];
      X->size[1] = r->size[1];
      emxEnsureCapacity_real_T(sp, X, i, &ib_emlrtRTEI);
      X_data = X->data;
      loop_ub = r->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = r->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          X_data[i1 + X->size[0] * i] =
              0.5 * (r1[i1 + r->size[0] * i] +
                     Sigma_data[i + varargin_1->size[0] * i1]);
        }
      }
      st.site = &s_emlrtRSI;
      lnlik1 = lnpdfmvn(&st, gam, b, X);
    } else {
      st.site = &s_emlrtRSI;
      lnlik1 = binary_expand_op(&st, s_emlrtRSI, b_hat, Sigma_hat, xf_exo, r,
                                varargin_1);
    }
    Output->lnML = lnpost_hat - lnlik1;
  }
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &varargin_1);
  emxFree_real_T(sp, &xf_exo);
  emxFree_real_T(sp, &vec_Sigma);
  emxFree_real_T(sp, &b_hat);
  emxFree_real_T(sp, &X);
  emxFree_real_T(sp, &gam);
  emxFree_real_T(sp, &b);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (IV_Regression.c) */

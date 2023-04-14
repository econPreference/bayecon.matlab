/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Ordinary_Regression.c
 *
 * Code generation for function 'Ordinary_Regression'
 *
 */

/* Include files */
#include "Ordinary_Regression.h"
#include "Ordinary_Regression_data.h"
#include "Ordinary_Regression_emxutil.h"
#include "Ordinary_Regression_mexutil.h"
#include "Ordinary_Regression_types.h"
#include "cov.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "gammaln.h"
#include "inv.h"
#include "invpd.h"
#include "lnpdfmvn.h"
#include "lnpdfn.h"
#include "mean.h"
#include "mpower.h"
#include "mtimes.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "std.h"
#include "sum.h"
#include "var.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    6,                     /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    24,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    37,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    49,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    65,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    69,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    70,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    75,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    80,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    81,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    82,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    106,                   /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    107,                   /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    108,                   /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    109,                   /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    4,                                                       /* lineNo */
    "stdc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/stdc.m" /* pathName */
};

static emlrtRSInfo
    kd_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    126,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI = {
    127,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = {
    129,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    130,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    131,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    133,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo ne_emlrtRSI = {
    74,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo oe_emlrtRSI = {
    91,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo pe_emlrtRSI = {
    92,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo qe_emlrtRSI = {
    79,             /* lineNo */
    "ceval_xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    13,       /* lineNo */
    "xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    141,        /* lineNo */
    "Gen_sig2", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI = {
    142,        /* lineNo */
    "Gen_sig2", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    144,        /* lineNo */
    "Gen_sig2", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    12,                                                        /* lineNo */
    "randig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    18,                                                         /* lineNo */
    "randgam",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    11,                                                          /* lineNo */
    "gamrnd",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m" /* pathName */
};

static emlrtRSInfo
    ye_emlrtRSI =
        {
            1,     /* lineNo */
            "rnd", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "rnd.p" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    1,        /* lineNo */
    "gamrnd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "gamrnd.p" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    1,       /* lineNo */
    "randg", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "randg.p" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    7,                                                         /* lineNo */
    "lnpdfn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pathName */
};

static emlrtRSInfo ng_emlrtRSI = {
    8,                                                          /* lineNo */
    "lnpdfig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pathName */
};

static emlrtRSInfo og_emlrtRSI = {
    9,                                                          /* lineNo */
    "lnpdfig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pathName */
};

static emlrtRSInfo
    vg_emlrtRSI =
        {
            28,    /* lineNo */
            "cat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    wg_emlrtRSI =
        {
            100,        /* lineNo */
            "cat_impl", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = {
    3,                                                        /* lineNo */
    "meanc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    93,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    94,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    95,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    35,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    36,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    38,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    39,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    40,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    41,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    42,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo k_emlrtMCI = {
    43,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtMCInfo
    p_emlrtMCI =
        {
            66,        /* lineNo */
            18,        /* colNo */
            "fprintf", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI = {
    31,                    /* lineNo */
    10,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    50,                    /* lineNo */
    8,                     /* colNo */
    "bm",                  /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                    /* nDims */
    50,                    /* lineNo */
    5,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    96,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    96,                    /* lineNo */
    9,                     /* colNo */
    "bm",                  /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    96,                    /* lineNo */
    14,                    /* colNo */
    "bm",                  /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    97,                    /* lineNo */
    15,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    97,                    /* lineNo */
    15,                    /* colNo */
    "sig2m",               /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    97,                    /* lineNo */
    20,                    /* colNo */
    "sig2m",               /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    98,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    98,                    /* lineNo */
    9,                     /* colNo */
    "R2",                  /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    98,                    /* lineNo */
    14,                    /* colNo */
    "R2",                  /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    100,                   /* lineNo */
    15,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    100,                   /* lineNo */
    15,                    /* colNo */
    "yfm",                 /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    100,                   /* lineNo */
    20,                    /* colNo */
    "yfm",                 /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    1,                     /* nDims */
    108,                   /* lineNo */
    22,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    2,                     /* nDims */
    108,                   /* lineNo */
    22,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
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

static emlrtECInfo d_emlrtECI = {
    1,                                                         /* nDims */
    8,                                                         /* lineNo */
    7,                                                         /* colNo */
    "lnpdfn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pName */
};

static emlrtDCInfo e_emlrtDCI = {
    16,                    /* lineNo */
    12,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    16,                    /* lineNo */
    12,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    4                                   /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    17,                    /* lineNo */
    15,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    18,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    19,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    1                                   /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    66,                    /* lineNo */
    11,                    /* colNo */
    "sig2m",               /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    72,                    /* lineNo */
    8,                     /* colNo */
    "R2",                  /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    76,                    /* lineNo */
    13,                    /* colNo */
    "yfm",                 /* aName */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m", /* pName */
    0                                   /* checkKind */
};

static emlrtECInfo n_emlrtECI = {
    1,          /* nDims */
    129,        /* lineNo */
    11,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtECInfo o_emlrtECI = {
    2,          /* nDims */
    129,        /* lineNo */
    11,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    1,          /* nDims */
    130,        /* lineNo */
    5,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtECInfo q_emlrtECI = {
    1,          /* nDims */
    133,        /* lineNo */
    8,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    54,         /* lineNo */
    15,         /* colNo */
    "cholesky", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtRTEInfo o_emlrtRTEI = {
    80,         /* lineNo */
    23,         /* colNo */
    "cholesky", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtECInfo r_emlrtECI = {
    1,          /* nDims */
    141,        /* lineNo */
    5,          /* colNo */
    "Gen_sig2", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    16,                    /* lineNo */
    6,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    17,                    /* lineNo */
    9,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    18,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    19,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    26,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    28,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    96,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    97,                    /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    119,                   /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    100,                   /* lineNo */
    5,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    41,                    /* lineNo */
    14,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    8,                                                         /* lineNo */
    3,                                                         /* colNo */
    "lnpdfn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    106,                   /* lineNo */
    5,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    109,                   /* lineNo */
    30,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    4,                                                        /* lineNo */
    8,                                                        /* colNo */
    "meanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    87,                    /* lineNo */
    13,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    76,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    6,                     /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    69,                    /* lineNo */
    5,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    1,                     /* lineNo */
    19,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    1,                                                        /* lineNo */
    10,                                                       /* colNo */
    "meanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    126,                   /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    129,                   /* lineNo */
    11,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    127,                   /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    123,                   /* lineNo */
    21,                    /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    141,                   /* lineNo */
    1,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    133,                   /* lineNo */
    8,                     /* colNo */
    "Ordinary_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pName */
};

static emlrtRSInfo ih_emlrtRSI = {
    94,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo mh_emlrtRSI = {
    95,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo nh_emlrtRSI = {
    93,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo oh_emlrtRSI = {
    43,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    42,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    41,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    40,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    39,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    38,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    36,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    35,                    /* lineNo */
    "Ordinary_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Ordinary_Regression.m" /* pathName */
};

static emlrtRSInfo
    yh_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    8,                                                         /* lineNo */
    "lnpdfn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pathName */
};

/* Function Declarations */
static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y,
                     const emxArray_real_T *X, const emxArray_real_T *b_0,
                     const emxArray_real_T *precB_0, real_T sig2,
                     emxArray_real_T *beta);

static real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, const emxArray_real_T *beta,
                       real_T a_0, real_T d_0);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38]);

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo di_emlrtRSI,
                               const emxArray_real_T *b_hat, real_T sig2_hat,
                               const emxArray_real_T *retf,
                               const emxArray_real_T *r3,
                               const emxArray_real_T *r4);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
                               emlrtRSInfo di_emlrtRSI,
                               const emxArray_real_T *precB_0);

static void plus(const emlrtStack *sp, emxArray_real_T *beta,
                 const emxArray_real_T *r1);

/* Function Definitions */
static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y,
                     const emxArray_real_T *X, const emxArray_real_T *b_0,
                     const emxArray_real_T *precB_0, real_T sig2,
                     emxArray_real_T *beta)
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
  emxArray_real_T *XX;
  emxArray_real_T *XY;
  emxArray_real_T *b_XX;
  emxArray_real_T *r;
  const real_T *X_data;
  const real_T *precB_0_data;
  real_T alpha1;
  real_T beta1;
  real_T *XX_data;
  real_T *XY_data;
  real_T *beta_data;
  real_T *r1;
  int32_T i;
  int32_T info;
  int32_T jmax;
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
  precB_0_data = precB_0->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  number of columns */
  st.site = &ld_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  b_st.site = &vc_emlrtRSI;
  emxInit_real_T(&b_st, &XX, 2, &ld_emlrtRTEI);
  if ((X->size[0] == 0) || (X->size[1] == 0)) {
    info = XX->size[0] * XX->size[1];
    XX->size[0] = X->size[1];
    XX->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&b_st, XX, info, &ld_emlrtRTEI);
    XX_data = XX->data;
    n = X->size[1] * X->size[1];
    for (info = 0; info < n; info++) {
      XX_data[info] = 0.0;
    }
  } else {
    c_st.site = &wc_emlrtRSI;
    d_st.site = &xc_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)X->size[1];
    n_t = (ptrdiff_t)X->size[1];
    k_t = (ptrdiff_t)X->size[0];
    lda_t = (ptrdiff_t)X->size[0];
    ldb_t = (ptrdiff_t)X->size[0];
    ldc_t = (ptrdiff_t)X->size[1];
    info = XX->size[0] * XX->size[1];
    XX->size[0] = X->size[1];
    XX->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&d_st, XX, info, &ac_emlrtRTEI);
    XX_data = XX->data;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &X_data[0], &lda_t,
          &X_data[0], &ldb_t, &beta1, &XX_data[0], &ldc_t);
  }
  st.site = &md_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (X->size[0] != Y->size[0]) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (Y->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &XY, 1, &nd_emlrtRTEI);
  b_st.site = &vc_emlrtRSI;
  c_mtimes(&b_st, X, Y, XY);
  XY_data = XY->data;
  alpha1 = 1.0 / sig2;
  n = XX->size[0] * XX->size[1];
  for (info = 0; info < n; info++) {
    XX_data[info] *= alpha1;
  }
  if ((XX->size[0] != precB_0->size[0]) &&
      ((XX->size[0] != 1) && (precB_0->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], precB_0->size[0], &n_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((XX->size[1] != precB_0->size[1]) &&
      ((XX->size[1] != 1) && (precB_0->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], precB_0->size[1], &o_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((XX->size[0] == precB_0->size[0]) && (XX->size[1] == precB_0->size[1])) {
    emxInit_real_T(sp, &b_XX, 2, &md_emlrtRTEI);
    info = b_XX->size[0] * b_XX->size[1];
    b_XX->size[0] = XX->size[0];
    b_XX->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, b_XX, info, &md_emlrtRTEI);
    beta_data = b_XX->data;
    n = XX->size[0] * XX->size[1];
    for (info = 0; info < n; info++) {
      beta_data[info] = XX_data[info] + precB_0_data[info];
    }
    st.site = &nd_emlrtRSI;
    inv(&st, b_XX, XX);
    XX_data = XX->data;
    emxFree_real_T(sp, &b_XX);
  } else {
    st.site = &nd_emlrtRSI;
    f_binary_expand_op(&st, XX, nd_emlrtRSI, precB_0);
    XX_data = XX->data;
  }
  n = XY->size[0];
  for (info = 0; info < n; info++) {
    XY_data[info] *= alpha1;
  }
  st.site = &od_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (b_0->size[0] != precB_0->size[1]) {
    if (((precB_0->size[0] == 1) && (precB_0->size[1] == 1)) ||
        (b_0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &r, 1, &od_emlrtRTEI);
  b_st.site = &vc_emlrtRSI;
  b_mtimes(&b_st, precB_0, b_0, r);
  r1 = r->data;
  if ((XY->size[0] != r->size[0]) &&
      ((XY->size[0] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XY->size[0], r->size[0], &p_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (XY->size[0] == r->size[0]) {
    n = XY->size[0];
    for (info = 0; info < n; info++) {
      XY_data[info] += r1[info];
    }
  } else {
    st.site = &od_emlrtRSI;
    plus(&st, XY, r);
  }
  st.site = &pd_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (XY->size[0] != XX->size[1]) {
    if (((XX->size[0] == 1) && (XX->size[1] == 1)) || (XY->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &vc_emlrtRSI;
  b_mtimes(&b_st, XX, XY, beta);
  beta_data = beta->data;
  st.site = &qd_emlrtRSI;
  b_st.site = &me_emlrtRSI;
  n = XX->size[1];
  if (XX->size[0] != XX->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if (XX->size[1] != 0) {
    c_st.site = &ne_emlrtRSI;
    d_st.site = &re_emlrtRSI;
    m_t = LAPACKE_dpotrf_work(102, 'U', (ptrdiff_t)XX->size[1], &XX_data[0],
                              (ptrdiff_t)XX->size[1]);
    info = (int32_T)m_t;
    e_st.site = &qe_emlrtRSI;
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &p_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &fname[0], 12, info);
      }
    }
    if (info == 0) {
      jmax = n;
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI, "Coder:MATLAB:posdef",
                                    "Coder:MATLAB:posdef", 0);
    }
    c_st.site = &oe_emlrtRSI;
    if ((1 <= jmax) && (jmax > 2147483646)) {
      d_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (info = 0; info < jmax; info++) {
      n = info + 2;
      c_st.site = &pe_emlrtRSI;
      for (i = n; i <= jmax; i++) {
        XX_data[(i + XX->size[0] * info) - 1] = 0.0;
      }
    }
  }
  st.site = &qd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  randn(&b_st, X->size[1], XY);
  b_st.site = &tc_emlrtRSI;
  if (XX->size[0] != XY->size[0]) {
    if (((XX->size[0] == 1) && (XX->size[1] == 1)) || (XY->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &vc_emlrtRSI;
  c_mtimes(&b_st, XX, XY, r);
  r1 = r->data;
  emxFree_real_T(sp, &XY);
  emxFree_real_T(sp, &XX);
  if ((beta->size[0] != r->size[0]) &&
      ((beta->size[0] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], r->size[0], &q_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (beta->size[0] == r->size[0]) {
    n = beta->size[0];
    for (info = 0; info < n; info++) {
      beta_data[info] += r1[info];
    }
  } else {
    st.site = &qd_emlrtRSI;
    plus(&st, beta, r);
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, const emxArray_real_T *beta,
                       real_T a_0, real_T d_0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *e;
  real_T ur[2];
  const real_T *Y_data;
  real_T b;
  real_T c;
  real_T d;
  real_T gam;
  real_T sig2;
  real_T u;
  real_T v;
  real_T x;
  real_T *e_data;
  int32_T exitg1;
  int32_T i;
  int32_T iter;
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
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &se_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (beta->size[0] != X->size[1]) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &e, 1, &xd_emlrtRTEI);
  b_st.site = &vc_emlrtRSI;
  b_mtimes(&b_st, X, beta, e);
  if ((Y->size[0] != e->size[0]) && ((Y->size[0] != 1) && (e->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], e->size[0], &r_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (Y->size[0] == e->size[0]) {
    i = e->size[0];
    e->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, e, i, &xd_emlrtRTEI);
    e_data = e->data;
    iter = Y->size[0];
    for (i = 0; i < iter; i++) {
      e_data[i] = Y_data[i] - e_data[i];
    }
  } else {
    st.site = &se_emlrtRSI;
    minus(&st, e, Y);
    e_data = e->data;
  }
  st.site = &te_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (e->size[0] < 1) {
    gam = 0.0;
  } else {
    n_t = (ptrdiff_t)e->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    gam = ddot(&n_t, &e_data[0], &incx_t, &e_data[0], &incy_t);
  }
  emxFree_real_T(&st, &e);
  st.site = &ue_emlrtRSI;
  c = ((real_T)X->size[0] + a_0) / 2.0;
  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &ve_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b = 1.0 / ((d_0 + gam) / 2.0);
  c_st.site = &we_emlrtRSI;
  d_st.site = &xe_emlrtRSI;
  e_st.site = &ye_emlrtRSI;
  f_st.site = &af_emlrtRSI;
  g_st.site = &bf_emlrtRSI;
  if (c <= 0.0) {
    if (c == 0.0) {
      c = 0.0;
    } else {
      c = rtNaN;
    }
  } else if ((!muDoubleScalarIsInf(c)) && (!muDoubleScalarIsNaN(c))) {
    if (c >= 1.0) {
      d = c - 0.33333333333333331;
      u = b_rand();
      gam = 1.0;
    } else {
      d = (c + 1.0) - 0.33333333333333331;
      c_rand(ur);
      u = ur[0];
      if (c < 7.4567656047833286E-20) {
        gam = 0.0;
      } else {
        h_st.site = &bf_emlrtRSI;
        gam = mpower(&h_st, ur[1], 1.0 / c);
      }
    }
    c = 1.0 / muDoubleScalarSqrt(9.0 * d);
    iter = 0;
    x = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * x + 1.0) {
        x = b_randn();
      }
      v *= v * v;
      x *= x;
      if (u < 1.0 - 0.0331 * x * x) {
        exitg1 = 1;
      } else {
        h_st.site = &bf_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &h_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        if (muDoubleScalarLog(u) <
            0.5 * x + d * ((1.0 - v) + muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            h_st.site = &bf_emlrtRSI;
            c_warning(&h_st);
            exitg1 = 1;
          } else {
            u = b_rand();
          }
        }
      }
    } while (exitg1 == 0);
    c = d * v * gam;
  }
  gam = b * c;
  if (b < 0.0) {
    gam = rtNaN;
  }
  sig2 = 1.0 / gam;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return sig2;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
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

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo di_emlrtRSI,
                               const emxArray_real_T *b_hat, real_T sig2_hat,
                               const emxArray_real_T *retf,
                               const emxArray_real_T *r3,
                               const emxArray_real_T *r4)
{
  emlrtStack st;
  emxArray_real_T *b_b_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r2;
  const real_T *b_hat_data;
  const real_T *r;
  const real_T *r1;
  const real_T *retf_data;
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
  r = r4->data;
  r1 = r3->data;
  retf_data = retf->data;
  b_hat_data = b_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b_hat, 1, &pb_emlrtRTEI);
  i = b_b_hat->size[0];
  b_b_hat->size[0] = b_hat->size[0] + 1;
  emxEnsureCapacity_real_T(sp, b_b_hat, i, &pb_emlrtRTEI);
  b_b_hat_data = b_b_hat->data;
  loop_ub = b_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = b_hat_data[i];
  }
  emxInit_real_T(sp, &b_retf, 1, &qb_emlrtRTEI);
  b_b_hat_data[b_hat->size[0]] = sig2_hat;
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &qb_emlrtRTEI);
  b_b_hat_data = b_retf->data;
  loop_ub = retf->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = retf_data[i];
  }
  emxInit_real_T(sp, &r2, 2, &sb_emlrtRTEI);
  i = r2->size[0] * r2->size[1];
  if (r4->size[1] == 1) {
    r2->size[0] = r3->size[0];
  } else {
    r2->size[0] = r4->size[1];
  }
  if (r4->size[0] == 1) {
    r2->size[1] = r3->size[1];
  } else {
    r2->size[1] = r4->size[0];
  }
  emxEnsureCapacity_real_T(sp, r2, i, &sb_emlrtRTEI);
  b_b_hat_data = r2->data;
  stride_0_0 = (r3->size[0] != 1);
  stride_0_1 = (r3->size[1] != 1);
  stride_1_0 = (r4->size[1] != 1);
  stride_1_1 = (r4->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r4->size[0] == 1) {
    loop_ub = r3->size[1];
  } else {
    loop_ub = r4->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r4->size[1] == 1) {
      b_loop_ub = r3->size[0];
    } else {
      b_loop_ub = r4->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_hat_data[i1 + r2->size[0] * i] =
          0.5 * (r1[i1 * stride_0_0 + r3->size[0] * aux_0_1] +
                 r[aux_1_1 + r4->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &di_emlrtRSI;
  ln_joint_post = lnpdfmvn(&st, b_b_hat, b_retf, r2);
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_b_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return ln_joint_post;
}

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
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

static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
                               emlrtRSInfo di_emlrtRSI,
                               const emxArray_real_T *precB_0)
{
  emlrtStack st;
  emxArray_real_T *b_XX;
  const real_T *precB_0_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  precB_0_data = precB_0->data;
  XX_data = XX->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_XX, 2, &md_emlrtRTEI);
  i = b_XX->size[0] * b_XX->size[1];
  if (precB_0->size[0] == 1) {
    b_XX->size[0] = XX->size[0];
  } else {
    b_XX->size[0] = precB_0->size[0];
  }
  if (precB_0->size[1] == 1) {
    b_XX->size[1] = XX->size[1];
  } else {
    b_XX->size[1] = precB_0->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_XX, i, &md_emlrtRTEI);
  b_XX_data = b_XX->data;
  stride_0_0 = (XX->size[0] != 1);
  stride_0_1 = (XX->size[1] != 1);
  stride_1_0 = (precB_0->size[0] != 1);
  stride_1_1 = (precB_0->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (precB_0->size[1] == 1) {
    loop_ub = XX->size[1];
  } else {
    loop_ub = precB_0->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (precB_0->size[0] == 1) {
      b_loop_ub = XX->size[0];
    } else {
      b_loop_ub = precB_0->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_XX_data[i1 + b_XX->size[0] * i] =
          XX_data[i1 * stride_0_0 + XX->size[0] * aux_0_1] +
          precB_0_data[i1 * stride_1_0 + precB_0->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &di_emlrtRSI;
  inv(&st, b_XX, XX);
  emxFree_real_T(sp, &b_XX);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *beta,
                 const emxArray_real_T *r1)
{
  emxArray_real_T *b_beta;
  const real_T *r;
  real_T *b_beta_data;
  real_T *beta_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  beta_data = beta->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta, 1, &cf_emlrtRTEI);
  i = b_beta->size[0];
  if (r1->size[0] == 1) {
    b_beta->size[0] = beta->size[0];
  } else {
    b_beta->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_beta, i, &cf_emlrtRTEI);
  b_beta_data = b_beta->data;
  stride_0_0 = (beta->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = beta->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_beta_data[i] = beta_data[i * stride_0_0] + r[i * stride_1_0];
  }
  i = beta->size[0];
  beta->size[0] = b_beta->size[0];
  emxEnsureCapacity_real_T(sp, beta, i, &cf_emlrtRTEI);
  beta_data = beta->data;
  loop_ub = b_beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = b_beta_data[i];
  }
  emxFree_real_T(sp, &b_beta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Ordinary_Regression(const emlrtStack *sp, const emxArray_real_T *Y,
                         const emxArray_real_T *X, const emxArray_real_T *b_0,
                         const emxArray_real_T *B_0, real_T a_0, real_T d_0,
                         real_T n0, real_T n1, char_T forecast,
                         const emxArray_real_T *x_f, char_T ML,
                         struct0_T *Output)
{
  static const int32_T iv[2] = {1, 37};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 23};
  static const int32_T iv3[2] = {1, 37};
  static const int32_T iv4[2] = {1, 8};
  static const int32_T iv5[2] = {1, 10};
  static const char_T b_cv[38] = {
      'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n', 'g', ' ', 't', 'h',
      'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ', 'P', 'l',
      'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.'};
  static const char_T c_u[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T e_u[10] = {'[', 's', 'i', 'g', 'm',
                                 'a', '2', ':', ' ', ']'};
  static const char_T d_u[8] = {'[', 'b', 'e', 't', 'a', ':', ' ', ']'};
  static const char_T b_u[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *R2;
  emxArray_real_T *b_1;
  emxArray_real_T *b_hat;
  emxArray_real_T *fitted;
  emxArray_real_T *precB_0;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *retf;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  const real_T *Y_data;
  const real_T *b_0_data;
  real_T alpha;
  real_T b_prior;
  real_T beta;
  real_T lnlik1;
  real_T lnpost_hat;
  real_T n;
  real_T numer;
  real_T sig2;
  real_T sig2_hat;
  real_T *R2_data;
  real_T *b_1_data;
  real_T *b_hat_data;
  real_T *r2;
  real_T *r3;
  real_T *retf_data;
  int32_T b_R2[2];
  int32_T result[2];
  int32_T Is_forecasting;
  int32_T b_loop_ub_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T iter;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  char_T u[37];
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_0_data = b_0->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &precB_0, 2, &tb_emlrtRTEI);
  st.site = &emlrtRSI;
  invpd(&st, B_0, precB_0);
  n = n0 + n1;
  if (forecast == 'Y') {
    Is_forecasting = 1;
    /*   예측하기 */
  } else {
    Is_forecasting = 0;
    /*  예측 안하기 */
  }
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &e_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->bm->size[0] * Output->bm->size[1];
  Output->bm->size[0] = (int32_T)n;
  Output->bm->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, Output->bm, i1, &cb_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &g_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &R2, 1, &eb_emlrtRTEI);
  loop_ub_tmp = (int32_T)n;
  i1 = Output->sig2m->size[0];
  Output->sig2m->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->sig2m, i1, &db_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = R2->size[0];
  R2->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, R2, i1, &eb_emlrtRTEI);
  R2_data = R2->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    R2_data[i1] = 0.0;
  }
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->yfm->size[0];
  Output->yfm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->yfm, i1, &fb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    Output->yfm->data[i] = 0.0;
  }
  if (a_0 * d_0 > 0.0) {
    sig2 = 0.5 * d_0 / (0.5 * a_0 - 1.0);
  } else {
    st.site = &b_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    /*  gauss function */
    c_st.site = &ed_emlrtRSI;
    numer = b_std(&c_st, Y);
    b_st.site = &yc_emlrtRSI;
    c_st.site = &ad_emlrtRSI;
    sig2 = numer * numer;
  }
  emxInit_real_T(sp, &b_1, 1, &gb_emlrtRTEI);
  i = b_1->size[0];
  b_1->size[0] = b_0->size[0];
  emxEnsureCapacity_real_T(sp, b_1, i, &gb_emlrtRTEI);
  b_1_data = b_1->data;
  loop_ub = b_0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_1_data[i] = b_0_data[i];
  }
  emxInit_real_T(sp, &b_hat, 1, &hb_emlrtRTEI);
  lnpost_hat = -4.8516519540979028E+8;
  /*  임의로 값을 주고 시작함 */
  i = b_hat->size[0];
  b_hat->size[0] = b_0->size[0];
  emxEnsureCapacity_real_T(sp, b_hat, i, &hb_emlrtRTEI);
  b_hat_data = b_hat->data;
  loop_ub = b_0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_hat_data[i] = b_0_data[i];
  }
  sig2_hat = 0.5 * d_0 / (0.5 * a_0 - 1.0);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= n - 1.0) {
    result[0] = 1;
  }
  emxInit_real_T(sp, &fitted, 1, &ub_emlrtRTEI);
  emxInit_real_T(sp, &retf, 2, &wb_emlrtRTEI);
  for (iter = 0; iter < loop_ub_tmp; iter++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((iter -
         (int32_T)muDoubleScalarFloor(((real_T)iter + 1.0) / 100.0) * 100) +
            1 ==
        0) {
      st.site = &vh_emlrtRSI;
      clc(&st, &d_emlrtMCI);
      for (i = 0; i < 37; i++) {
        u[i] = '=';
      }
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
      emlrtAssign(&c_y, m);
      st.site = &uh_emlrtRSI;
      disp(&st, c_y, &e_emlrtMCI);
      st.site = &c_emlrtRSI;
      b_st.site = &kd_emlrtRSI;
      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      e_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 23, m, &c_u[0]);
      emlrtAssign(&f_y, m);
      g_y = NULL;
      m = emlrtCreateDoubleScalar((real_T)iter + 1.0);
      emlrtAssign(&g_y, m);
      c_st.site = &yh_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, d_y, e_y, f_y, g_y, &p_emlrtMCI),
                       "<output of feval>");
      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
      emlrtAssign(&h_y, m);
      st.site = &th_emlrtRSI;
      disp(&st, h_y, &f_emlrtMCI);
      i_y = NULL;
      m = emlrtCreateString1(' ');
      emlrtAssign(&i_y, m);
      st.site = &sh_emlrtRSI;
      disp(&st, i_y, &g_emlrtMCI);
      j_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 8, m, &d_u[0]);
      emlrtAssign(&j_y, m);
      st.site = &rh_emlrtRSI;
      disp(&st, j_y, &h_emlrtMCI);
      i = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      loop_ub = b_1->size[0];
      retf->size[1] = b_1->size[0];
      emxEnsureCapacity_real_T(sp, retf, i, &mb_emlrtRTEI);
      retf_data = retf->data;
      for (i = 0; i < loop_ub; i++) {
        retf_data[i] = b_1_data[i];
      }
      st.site = &qh_emlrtRSI;
      disp(&st, emlrt_marshallOut(retf), &i_emlrtMCI);
      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 10, m, &e_u[0]);
      emlrtAssign(&k_y, m);
      st.site = &ph_emlrtRSI;
      disp(&st, k_y, &j_emlrtMCI);
      l_y = NULL;
      m = emlrtCreateDoubleScalar(sig2);
      emlrtAssign(&l_y, m);
      st.site = &oh_emlrtRSI;
      disp(&st, l_y, &k_emlrtMCI);
    }
    /* ====================================================================== */
    /*  Origianl version */
    /* ---------------------------------------------------------------------- */
    st.site = &d_emlrtRSI;
    Gen_beta(&st, Y, X, b_0, precB_0, sig2, b_1);
    b_1_data = b_1->data;
    if (iter + 1 > Output->bm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Output->bm->size[0], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_R2[0] = 1;
    b_R2[1] = Output->bm->size[1];
    loop_ub = b_1->size[0];
    result[1] = b_1->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_R2[0], 2, &result[0], 2, &emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Output->bm->data[iter + Output->bm->size[0] * i] = b_1_data[i];
    }
    /* ---------------------------------------------------------------------- */
    /*  Modified version for restriction */
    /* ---------------------------------------------------------------------- */
    /*      if iter == n */
    /*          warning('There are some restrictions on betas in current
     * algorithm') */
    /*      end */
    /*       */
    /*      b_1_ = Gen_beta(Y,X,b_0,precB_0,sig2); */
    /*      if b_1_(2) <= 1 */
    /*          b_1 = b_1_; */
    /*      end */
    /*      bm(iter,:) = b_1'; */
    /* ====================================================================== */
    st.site = &e_emlrtRSI;
    sig2 = Gen_sig2(&st, Y, X, b_1, a_0, d_0);
    if ((int32_T)(iter + 1U) > Output->sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1,
                                    Output->sig2m->size[0], &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    Output->sig2m->data[iter] = sig2;
    /*  Bayesian R-sqaured */
    st.site = &f_emlrtRSI;
    b_st.site = &tc_emlrtRSI;
    b_dynamic_size_checks(&b_st, X, b_1, X->size[1], b_1->size[0]);
    b_st.site = &vc_emlrtRSI;
    b_mtimes(&b_st, X, b_1, fitted);
    st.site = &g_emlrtRSI;
    numer = var(&st, fitted);
    if ((int32_T)(iter + 1U) > R2->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, R2->size[0],
                                    &k_emlrtBCI, (emlrtCTX)sp);
    }
    R2_data[iter] = numer / (numer + sig2);
    if (Is_forecasting == 1) {
      st.site = &h_emlrtRSI;
      b_st.site = &tc_emlrtRSI;
      c_dynamic_size_checks(&b_st, x_f, b_1, x_f->size[0], b_1->size[0]);
      st.site = &h_emlrtRSI;
      if (sig2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &ab_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      if ((int32_T)(iter + 1U) > Output->yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1,
                                      Output->yfm->size[0], &l_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &h_emlrtRSI;
      Output->yfm->data[iter] =
          d_mtimes(x_f, b_1) + muDoubleScalarSqrt(sig2) * b_randn();
    }
    if ((ML == 'Y') && ((real_T)iter + 1.0 > n0)) {
      st.site = &i_emlrtRSI;
      b_st.site = &tc_emlrtRSI;
      b_dynamic_size_checks(&b_st, X, b_1, X->size[1], b_1->size[0]);
      b_st.site = &vc_emlrtRSI;
      b_mtimes(&b_st, X, b_1, fitted);
      st.site = &i_emlrtRSI;
      /*  log pdf of normal */
      /*  x = normal variates */
      /*  mu = vector of means */
      /*  sig2vec = vector of variances */
      numer = 2.0 * sig2 * 3.1415926535897931;
      b_st.site = &ef_emlrtRSI;
      if (numer < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      numer = muDoubleScalarLog(numer);
      numer *= -0.5;
      if ((Y->size[0] != fitted->size[0]) &&
          ((Y->size[0] != 1) && (fitted->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(Y->size[0], fitted->size[0], &d_emlrtECI,
                                    &st);
      }
      if (Y->size[0] == fitted->size[0]) {
        i = fitted->size[0];
        fitted->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(&st, fitted, i, &nb_emlrtRTEI);
        retf_data = fitted->data;
        loop_ub = Y->size[0];
        for (i = 0; i < loop_ub; i++) {
          retf_data[i] = Y_data[i] - retf_data[i];
        }
      } else {
        b_st.site = &bi_emlrtRSI;
        minus(&b_st, fitted, Y);
        retf_data = fitted->data;
      }
      loop_ub = fitted->size[0];
      for (i = 0; i < loop_ub; i++) {
        retf_data[i] = numer - 0.5 * (retf_data[i] * retf_data[i]) / sig2;
      }
      st.site = &i_emlrtRSI;
      lnlik1 = c_sum(&st, fitted);
      st.site = &j_emlrtRSI;
      b_prior = lnpdfmvn(&st, b_1, b_0, B_0);
      st.site = &k_emlrtRSI;
      alpha = a_0 / 2.0;
      beta = d_0 / 2.0;
      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &ng_emlrtRSI;
      if (beta < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      numer = alpha;
      b_st.site = &ng_emlrtRSI;
      gammaln(&b_st, &numer);
      b_st.site = &og_emlrtRSI;
      if (sig2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      numer = lnlik1 + (b_prior + (((alpha * muDoubleScalarLog(beta) - numer) -
                                    (alpha + 1.0) * muDoubleScalarLog(sig2)) -
                                   beta / sig2));
      if (numer > lnpost_hat) {
        loop_ub = b_1->size[0];
        i = b_hat->size[0];
        b_hat->size[0] = b_1->size[0];
        emxEnsureCapacity_real_T(sp, b_hat, i, &rb_emlrtRTEI);
        b_hat_data = b_hat->data;
        for (i = 0; i < loop_ub; i++) {
          b_hat_data[i] = b_1_data[i];
        }
        sig2_hat = sig2;
        lnpost_hat = numer;
        /*  최빈값 후보의 사후 커널값 */
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &fitted);
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  st.site = &nh_emlrtRSI;
  disp(&st, y, &emlrtMCI);
  st.site = &ih_emlrtRSI;
  disp(&st, b_emlrt_marshallOut(&st, b_cv), &b_emlrtMCI);
  b_y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m);
  st.site = &mh_emlrtRSI;
  disp(&st, b_y, &c_emlrtMCI);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Output->bm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Output->bm->size[0],
                                    &b_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->bm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->bm->size[0],
                                    &c_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp - 1;
  }
  iter = Output->bm->size[1] - 1;
  for (loop_ub = 0; loop_ub <= iter; loop_ub++) {
    b_loop_ub_tmp = i1 - i;
    for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
      Output->bm->data[i2 + b_loop_ub_tmp * loop_ub] =
          Output->bm->data[((i + i2) + Output->bm->size[0] * loop_ub) + 1];
    }
  }
  loop_ub = Output->bm->size[0] * Output->bm->size[1];
  Output->bm->size[0] = i1 - i;
  Output->bm->size[1] = iter + 1;
  emxEnsureCapacity_real_T(sp, Output->bm, loop_ub, &ib_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Output->sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1,
                                    Output->sig2m->size[0], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Output->sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->sig2m->size[0],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  b_loop_ub_tmp = i1 - i;
  for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
    Output->sig2m->data[i1] = Output->sig2m->data[i + i1];
  }
  i = Output->sig2m->size[0];
  Output->sig2m->size[0] = b_loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->sig2m, i, &jb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > R2->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, R2->size[0],
                                    &f_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > R2->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, R2->size[0], &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = i1 - i;
  i1 = Output->R2->size[0];
  Output->R2->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->R2, i1, &kb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->R2->data[i1] = R2_data[i + i1];
  }
  if (Is_forecasting == 1) {
    if (n0 + 1.0 > n) {
      i = 0;
      loop_ub_tmp = 0;
    } else {
      if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
        emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)(n0 + 1.0) < 1) ||
          ((int32_T)(n0 + 1.0) > Output->yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1,
                                      Output->yfm->size[0], &h_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = (int32_T)(n0 + 1.0) - 1;
      if ((n < 1.0) || (loop_ub_tmp > Output->yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->yfm->size[0],
                                      &i_emlrtBCI, (emlrtCTX)sp);
      }
    }
    loop_ub_tmp -= i;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      Output->yfm->data[i1] = Output->yfm->data[i + i1];
    }
    i = Output->yfm->size[0];
    Output->yfm->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, Output->yfm, i, &lb_emlrtRTEI);
  }
  Output->lnML = 0.0;
  if (ML == 'Y') {
    st.site = &l_emlrtRSI;
    b_st.site = &vg_emlrtRSI;
    if ((Output->bm->size[0] != 0) && (iter + 1 != 0)) {
      loop_ub_tmp = Output->bm->size[0];
    } else if (b_loop_ub_tmp != 0) {
      loop_ub_tmp = b_loop_ub_tmp;
    } else {
      loop_ub_tmp = Output->bm->size[0];
    }
    c_st.site = &wg_emlrtRSI;
    if ((Output->bm->size[0] != loop_ub_tmp) &&
        ((Output->bm->size[0] != 0) && (iter + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((b_loop_ub_tmp != loop_ub_tmp) && (b_loop_ub_tmp != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (loop_ub_tmp == 0);
    if (empty_non_axis_sizes ||
        ((Output->bm->size[0] != 0) && (iter + 1 != 0))) {
      Is_forecasting = iter + 1;
    } else {
      Is_forecasting = 0;
    }
    if (empty_non_axis_sizes || (b_loop_ub_tmp != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    i = precB_0->size[0] * precB_0->size[1];
    precB_0->size[0] = loop_ub_tmp;
    precB_0->size[1] = Is_forecasting + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, precB_0, i, &ob_emlrtRTEI);
    retf_data = precB_0->data;
    for (i = 0; i < Is_forecasting; i++) {
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        retf_data[i1 + precB_0->size[0] * i] =
            Output->bm->data[i1 + loop_ub_tmp * i];
      }
    }
    loop_ub = sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        retf_data[i1 + precB_0->size[0] * Is_forecasting] =
            Output->sig2m->data[i1];
      }
    }
    emxInit_real_T(&b_st, &r, 2, &vb_emlrtRTEI);
    emxInit_real_T(&b_st, &r1, 2, &vb_emlrtRTEI);
    st.site = &m_emlrtRSI;
    b_st.site = &xg_emlrtRSI;
    mean(&b_st, precB_0, retf);
    retf_data = retf->data;
    st.site = &n_emlrtRSI;
    cov(&st, precB_0, r);
    r2 = r->data;
    st.site = &n_emlrtRSI;
    cov(&st, precB_0, r1);
    r3 = r1->data;
    if ((r->size[0] != r1->size[1]) &&
        ((r->size[0] != 1) && (r1->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[0], r1->size[1], &b_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((r1->size[0] != r->size[1]) &&
        ((r->size[1] != 1) && (r1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[1], r1->size[0], &c_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((r->size[0] == r1->size[1]) && (r1->size[0] == r->size[1])) {
      i = b_1->size[0];
      b_1->size[0] = b_hat->size[0] + 1;
      emxEnsureCapacity_real_T(sp, b_1, i, &pb_emlrtRTEI);
      b_1_data = b_1->data;
      loop_ub = b_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_1_data[i] = b_hat_data[i];
      }
      b_1_data[b_hat->size[0]] = sig2_hat;
      i = R2->size[0];
      R2->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, R2, i, &qb_emlrtRTEI);
      R2_data = R2->data;
      loop_ub = retf->size[1];
      for (i = 0; i < loop_ub; i++) {
        R2_data[i] = retf_data[i];
      }
      i = precB_0->size[0] * precB_0->size[1];
      precB_0->size[0] = r->size[0];
      precB_0->size[1] = r->size[1];
      emxEnsureCapacity_real_T(sp, precB_0, i, &sb_emlrtRTEI);
      retf_data = precB_0->data;
      loop_ub = r->size[1];
      for (i = 0; i < loop_ub; i++) {
        Is_forecasting = r->size[0];
        for (i1 = 0; i1 < Is_forecasting; i1++) {
          retf_data[i1 + precB_0->size[0] * i] =
              0.5 * (r2[i1 + r->size[0] * i] + r3[i + r1->size[0] * i1]);
        }
      }
      st.site = &o_emlrtRSI;
      numer = lnpdfmvn(&st, b_1, R2, precB_0);
    } else {
      st.site = &o_emlrtRSI;
      numer = binary_expand_op(&st, o_emlrtRSI, b_hat, sig2_hat, retf, r, r1);
    }
    emxFree_real_T(sp, &r1);
    emxFree_real_T(sp, &r);
    Output->lnML = lnpost_hat - numer;
  }
  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &b_hat);
  emxFree_real_T(sp, &b_1);
  emxFree_real_T(sp, &R2);
  emxFree_real_T(sp, &precB_0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Ordinary_Regression.c) */

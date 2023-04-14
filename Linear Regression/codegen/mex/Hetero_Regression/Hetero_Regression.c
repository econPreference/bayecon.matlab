/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hetero_Regression.c
 *
 * Code generation for function 'Hetero_Regression'
 *
 */

/* Include files */
#include "Hetero_Regression.h"
#include "Hetero_Regression_data.h"
#include "Hetero_Regression_emxutil.h"
#include "Hetero_Regression_mexutil.h"
#include "Hetero_Regression_types.h"
#include "cov.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "gammaln.h"
#include "indexShapeCheck.h"
#include "invpd.h"
#include "lnpdfmvn.h"
#include "log.h"
#include "mean.h"
#include "mtimes.h"
#include "randg.h"
#include "randmvt.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "std.h"
#include "sum.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    8,                   /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    29,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    46,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    55,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    58,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    62,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    66,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    72,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    73,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    74,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    75,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    91,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    102,                 /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    103,                 /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    104,                 /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    105,                 /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    4,                                                       /* lineNo */
    "stdc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/stdc.m" /* pathName */
};

static emlrtRSInfo
    jd_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    122,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    123,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI = {
    125,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = {
    126,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    128,        /* lineNo */
    "Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo qd_emlrtRSI = {
    74,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo rd_emlrtRSI = {
    91,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo sd_emlrtRSI = {
    92,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo td_emlrtRSI = {
    79,             /* lineNo */
    "ceval_xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    13,       /* lineNo */
    "xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    150,        /* lineNo */
    "Gen_sig2", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    151,        /* lineNo */
    "Gen_sig2", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    152,        /* lineNo */
    "Gen_sig2", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    154,        /* lineNo */
    "Gen_sig2", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = {
    16,     /* lineNo */
    "sqrt", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pathName
                                                                           */
};

static emlrtRSInfo ce_emlrtRSI = {
    12,                                                        /* lineNo */
    "randig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    18,                                                         /* lineNo */
    "randgam",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    11,                                                          /* lineNo */
    "gamrnd",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    1,        /* lineNo */
    "gamrnd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "gamrnd.p" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    136,       /* lineNo */
    "Gen_Lam", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI = {
    142,       /* lineNo */
    "Gen_Lam", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI = {
    8,                                                          /* lineNo */
    "lnpdfig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pathName */
};

static emlrtRSInfo gg_emlrtRSI = {
    9,                                                          /* lineNo */
    "lnpdfig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pathName */
};

static emlrtRSInfo
    pg_emlrtRSI =
        {
            28,    /* lineNo */
            "cat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    qg_emlrtRSI =
        {
            100,        /* lineNo */
            "cat_impl", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    3,                                                        /* lineNo */
    "meanc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    6,                   /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    87,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    88,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    89,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    44,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    45,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    47,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    48,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    49,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    50,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo k_emlrtMCI = {
    51,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo l_emlrtMCI = {
    52,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtMCInfo
    q_emlrtMCI =
        {
            66,        /* lineNo */
            18,        /* colNo */
            "fprintf", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI = {
    40,                  /* lineNo */
    12,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    56,                  /* lineNo */
    8,                   /* colNo */
    "bm",                /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                  /* nDims */
    56,                  /* lineNo */
    5,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    90,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    90,                  /* lineNo */
    9,                   /* colNo */
    "bm",                /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    90,                  /* lineNo */
    14,                  /* colNo */
    "bm",                /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    91,                  /* lineNo */
    15,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    91,                  /* lineNo */
    15,                  /* colNo */
    "Sig2m",             /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    91,                  /* lineNo */
    20,                  /* colNo */
    "Sig2m",             /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    63,                  /* lineNo */
    13,                  /* colNo */
    "Lambdam",           /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                  /* nDims */
    63,                  /* lineNo */
    5,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtDCInfo c_emlrtDCI = {
    92,                  /* lineNo */
    19,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    92,                  /* lineNo */
    19,                  /* colNo */
    "Lambdam",           /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    92,                  /* lineNo */
    24,                  /* colNo */
    "Lambdam",           /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    95,                  /* lineNo */
    15,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    95,                  /* lineNo */
    15,                  /* colNo */
    "yfm",               /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    95,                  /* lineNo */
    20,                  /* colNo */
    "yfm",               /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    1,                   /* nDims */
    104,                 /* lineNo */
    22,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    2,                   /* nDims */
    104,                 /* lineNo */
    22,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
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

static emlrtECInfo e_emlrtECI = {
    1,                                                          /* nDims */
    9,                                                          /* lineNo */
    8,                                                          /* colNo */
    "lnpdfig",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pName */
};

static emlrtDCInfo e_emlrtDCI = {
    20,                  /* lineNo */
    12,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    20,                  /* lineNo */
    12,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    4                                 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    21,                  /* lineNo */
    15,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    22,                  /* lineNo */
    17,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    24,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    1                                 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    60,                  /* lineNo */
    11,                  /* colNo */
    "Sig2m",             /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    67,                  /* lineNo */
    13,                  /* colNo */
    "yfm",               /* aName */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtECInfo o_emlrtECI = {
    1,          /* nDims */
    123,        /* lineNo */
    9,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    2,          /* nDims */
    123,        /* lineNo */
    9,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo q_emlrtECI = {
    1,          /* nDims */
    124,        /* lineNo */
    14,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo r_emlrtECI = {
    2,          /* nDims */
    124,        /* lineNo */
    14,         /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo s_emlrtECI = {
    1,          /* nDims */
    126,        /* lineNo */
    5,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo t_emlrtECI = {
    1,          /* nDims */
    128,        /* lineNo */
    8,          /* colNo */
    "Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
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

static emlrtECInfo u_emlrtECI = {
    1,          /* nDims */
    150,        /* lineNo */
    8,          /* colNo */
    "Gen_sig2", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo v_emlrtECI = {
    1,          /* nDims */
    151,        /* lineNo */
    9,          /* colNo */
    "Gen_sig2", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtECInfo w_emlrtECI = {
    1,         /* nDims */
    136,       /* lineNo */
    8,         /* colNo */
    "Gen_Lam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    141,       /* lineNo */
    32,        /* colNo */
    "ehat2",   /* aName */
    "Gen_Lam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    142,       /* lineNo */
    9,         /* colNo */
    "Lam",     /* aName */
    "Gen_Lam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m", /* pName */
    0                                 /* checkKind */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    20,                  /* lineNo */
    6,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    21,                  /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    22,                  /* lineNo */
    11,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    23,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    24,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    33,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    35,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    37,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    90,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    91,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    50,                  /* lineNo */
    14,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    92,                  /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    95,                  /* lineNo */
    5,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo
    pb_emlrtRTEI =
        {
            52,    /* lineNo */
            9,     /* colNo */
            "div", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    72,                  /* lineNo */
    42,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    102,                 /* lineNo */
    5,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    9,                                                          /* lineNo */
    23,                                                         /* colNo */
    "lnpdfig",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    105,                 /* lineNo */
    30,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    79,                  /* lineNo */
    13,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    4,                                                        /* lineNo */
    8,                                                        /* colNo */
    "meanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    81,                  /* lineNo */
    13,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    76,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    8,                   /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    1,                   /* lineNo */
    19,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    72,                  /* lineNo */
    30,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    1,                                                        /* lineNo */
    10,                                                       /* colNo */
    "meanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    72,                  /* lineNo */
    37,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    74,                  /* lineNo */
    31,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    74,                  /* lineNo */
    9,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    128,                 /* lineNo */
    20,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    128,                 /* lineNo */
    15,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    123,                 /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    125,                 /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    126,                 /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    120,                 /* lineNo */
    30,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    120,                 /* lineNo */
    17,                  /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    150,                 /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo de_emlrtRTEI = {
    151,                 /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = {
    151,                 /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    135,                 /* lineNo */
    7,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    136,                 /* lineNo */
    1,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    9,                                                          /* lineNo */
    8,                                                          /* colNo */
    "lnpdfig",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfig.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    128,                 /* lineNo */
    8,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    123,                 /* lineNo */
    9,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    150,                 /* lineNo */
    8,                   /* colNo */
    "Hetero_Regression", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pName */
};

static emlrtRSInfo ch_emlrtRSI = {
    6,                   /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = {
    47,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo eh_emlrtRSI = {
    45,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo fh_emlrtRSI = {
    49,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo gh_emlrtRSI = {
    51,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo hh_emlrtRSI = {
    88,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo
    ih_emlrtRSI =
        {
            68,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo
    jh_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo nh_emlrtRSI = {
    89,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo oh_emlrtRSI = {
    87,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    52,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    50,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    48,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    44,                  /* lineNo */
    "Hetero_Regression", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Linear "
    "Regression/Hetero_Regression.m" /* pathName */
};

/* Function Declarations */
static void Gen_Lam(const emlrtStack *sp, const emxArray_real_T *Y,
                    const emxArray_real_T *X, const emxArray_real_T *beta,
                    real_T sig2_inv, real_T nu_, emxArray_real_T *Lam);

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X,
                     const emxArray_real_T *Y, const emxArray_real_T *Lam,
                     const emxArray_real_T *b0, const emxArray_real_T *precb0,
                     real_T sig2_inv, emxArray_real_T *beta);

static real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, const emxArray_real_T *Lam,
                       const emxArray_real_T *beta, real_T a0, real_T d0);

static real_T b_binary_expand_op(const emlrtStack *sp, emlrtRSInfo xh_emlrtRSI,
                                 const emxArray_real_T *b_hat, real_T sig2_hat,
                                 const emxArray_real_T *Lambda_hat,
                                 const emxArray_real_T *retf,
                                 const emxArray_real_T *r3,
                                 const emxArray_real_T *r4);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[37]);

static void b_plus(const emlrtStack *sp, emxArray_real_T *B1inv,
                   const emxArray_real_T *precb0);

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo xh_emlrtRSI,
                               real_T c, const emxArray_real_T *y,
                               const emxArray_real_T *z_tmp);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[8]);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[10]);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[6]);

static const mxArray *f_emlrt_marshallOut(const real_T u);

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location);

static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
                               emlrtRSInfo xh_emlrtRSI,
                               const emxArray_real_T *B1inv);

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38]);

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[23]);

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7]);

static void minus(const emlrtStack *sp, emxArray_real_T *ehat,
                  const emxArray_real_T *Y);

static void plus(const emlrtStack *sp, emxArray_real_T *beta,
                 const emxArray_real_T *r1);

static void times(const emlrtStack *sp, emxArray_real_T *ehat1,
                  const emxArray_real_T *ehat);

/* Function Definitions */
static void Gen_Lam(const emlrtStack *sp, const emxArray_real_T *Y,
                    const emxArray_real_T *X, const emxArray_real_T *beta,
                    real_T sig2_inv, real_T nu_, emxArray_real_T *Lam)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *ehat;
  const real_T *Y_data;
  real_T b;
  real_T *Lam_data;
  real_T *ehat_data;
  int32_T i;
  int32_T loop_ub;
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
  i = Lam->size[0];
  Lam->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, Lam, i, &fe_emlrtRTEI);
  Lam_data = Lam->data;
  st.site = &ie_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
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
  emxInit_real_T(&b_st, &ehat, 1, &ge_emlrtRTEI);
  b_st.site = &uc_emlrtRSI;
  b_mtimes(&b_st, X, beta, ehat);
  if ((Y->size[0] != ehat->size[0]) &&
      ((Y->size[0] != 1) && (ehat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], ehat->size[0], &w_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (Y->size[0] == ehat->size[0]) {
    i = ehat->size[0];
    ehat->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ehat, i, &ge_emlrtRTEI);
    ehat_data = ehat->data;
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      ehat_data[i] = Y_data[i] - ehat_data[i];
    }
  } else {
    st.site = &ie_emlrtRSI;
    minus(&st, ehat, Y);
    ehat_data = ehat->data;
  }
  loop_ub = ehat->size[0];
  for (i = 0; i < loop_ub; i++) {
    ehat_data[i] *= ehat_data[i];
  }
  i = Y->size[0];
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    if ((loop_ub + 1 < 1) || (loop_ub + 1 > ehat->size[0])) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, ehat->size[0], &ac_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &je_emlrtRSI;
    /*  Note that */
    /*  Suppose that x = randgam(alpha,beta,1,1) */
    /*  E(x) = alpha/beta */
    /*  Var(x) = alpha/(beta^2) */
    /*  Notice that in matlab alpha = a and beta = 1/b */
    b = 1.0 / ((nu_ + sig2_inv * ehat_data[loop_ub]) / 2.0);
    b_st.site = &de_emlrtRSI;
    c_st.site = &ee_emlrtRSI;
    d_st.site = &fe_emlrtRSI;
    if ((loop_ub + 1 < 1) || (loop_ub + 1 > Lam->size[0])) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, Lam->size[0], &bc_emlrtBCI,
                                    &d_st);
    }
    e_st.site = &ge_emlrtRSI;
    Lam_data[loop_ub] = b * randg(&e_st, (nu_ + 1.0) / 2.0);
    if (b < 0.0) {
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > Lam->size[0])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, Lam->size[0],
                                      &bc_emlrtBCI, &d_st);
      }
      Lam_data[loop_ub] = rtNaN;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &ehat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_beta(const emlrtStack *sp, const emxArray_real_T *X,
                     const emxArray_real_T *Y, const emxArray_real_T *Lam,
                     const emxArray_real_T *b0, const emxArray_real_T *precb0,
                     real_T sig2_inv, emxArray_real_T *beta)
{
  static const char_T fname[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'p', 'o', 't', 'r', 'f',
                                   '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t info_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *B1;
  emxArray_real_T *B1inv;
  emxArray_real_T *b_Lam;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *y_tmp;
  const real_T *X_data;
  const real_T *precb0_data;
  real_T alpha1;
  real_T beta1;
  real_T *A_data;
  real_T *B1_data;
  real_T *B1inv_data;
  real_T *r1;
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
  precb0_data = precb0->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Lam, 2, &yd_emlrtRTEI);
  emxInit_real_T(sp, &y_tmp, 2, &rd_emlrtRTEI);
  st.site = &kd_emlrtRSI;
  b_diag(&st, Lam, b_Lam);
  i = y_tmp->size[0] * y_tmp->size[1];
  y_tmp->size[0] = X->size[1];
  y_tmp->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, y_tmp, i, &rd_emlrtRTEI);
  A_data = y_tmp->data;
  n = X->size[0];
  for (i = 0; i < n; i++) {
    loop_ub = X->size[1];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      A_data[b_i + y_tmp->size[0] * i] = X_data[i + X->size[0] * b_i];
    }
  }
  emxInit_real_T(sp, &B1inv, 2, &vd_emlrtRTEI);
  i = B1inv->size[0] * B1inv->size[1];
  B1inv->size[0] = y_tmp->size[0];
  B1inv->size[1] = y_tmp->size[1];
  emxEnsureCapacity_real_T(sp, B1inv, i, &sd_emlrtRTEI);
  B1inv_data = B1inv->data;
  n = y_tmp->size[0] * y_tmp->size[1];
  for (i = 0; i < n; i++) {
    B1inv_data[i] = sig2_inv * A_data[i];
  }
  emxInit_real_T(sp, &B1, 2, &wd_emlrtRTEI);
  st.site = &ld_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  if (b_Lam->size[0] != B1inv->size[1]) {
    if (((B1inv->size[0] == 1) && (B1inv->size[1] == 1)) ||
        ((b_Lam->size[0] == 1) && (b_Lam->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &uc_emlrtRSI;
  c_mtimes(&b_st, B1inv, b_Lam, B1);
  st.site = &ld_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  if (X->size[0] != B1->size[1]) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) ||
        ((X->size[0] == 1) && (X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &uc_emlrtRSI;
  c_mtimes(&b_st, B1, X, B1inv);
  B1inv_data = B1inv->data;
  if ((B1inv->size[0] != precb0->size[0]) &&
      ((B1inv->size[0] != 1) && (precb0->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(B1inv->size[0], precb0->size[0], &o_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((B1inv->size[1] != precb0->size[1]) &&
      ((B1inv->size[1] != 1) && (precb0->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(B1inv->size[1], precb0->size[1], &p_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((B1inv->size[0] == precb0->size[0]) &&
      (B1inv->size[1] == precb0->size[1])) {
    n = B1inv->size[0] * B1inv->size[1];
    for (i = 0; i < n; i++) {
      B1inv_data[i] += precb0_data[i];
    }
  } else {
    st.site = &ld_emlrtRSI;
    b_plus(&st, B1inv, precb0);
    B1inv_data = B1inv->data;
  }
  if ((B1inv->size[0] != B1inv->size[1]) &&
      ((B1inv->size[0] != 1) && (B1inv->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(B1inv->size[0], B1inv->size[1], &q_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((B1inv->size[0] != B1inv->size[1]) &&
      ((B1inv->size[1] != 1) && (B1inv->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(B1inv->size[1], B1inv->size[0], &r_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (B1inv->size[0] == B1inv->size[1]) {
    emxInit_real_T(sp, &r, 2, &xb_emlrtRTEI);
    i = r->size[0] * r->size[1];
    r->size[0] = B1inv->size[0];
    r->size[1] = B1inv->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &xb_emlrtRTEI);
    r1 = r->data;
    n = B1inv->size[1];
    for (i = 0; i < n; i++) {
      loop_ub = B1inv->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        r1[b_i + r->size[0] * i] = 0.5 * (B1inv_data[b_i + B1inv->size[0] * i] +
                                          B1inv_data[i + B1inv->size[0] * b_i]);
      }
    }
    st.site = &md_emlrtRSI;
    invpd(&st, r, B1);
    B1_data = B1->data;
    emxFree_real_T(sp, &r);
  } else {
    st.site = &md_emlrtRSI;
    g_binary_expand_op(&st, B1, md_emlrtRSI, B1inv);
    B1_data = B1->data;
  }
  n = y_tmp->size[0] * y_tmp->size[1];
  for (i = 0; i < n; i++) {
    A_data[i] *= sig2_inv;
  }
  st.site = &nd_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  if (b_Lam->size[0] != y_tmp->size[1]) {
    if (((y_tmp->size[0] == 1) && (y_tmp->size[1] == 1)) ||
        ((b_Lam->size[0] == 1) && (b_Lam->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &uc_emlrtRSI;
  c_mtimes(&b_st, y_tmp, b_Lam, B1inv);
  st.site = &nd_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  emxFree_real_T(&b_st, &y_tmp);
  emxFree_real_T(&b_st, &b_Lam);
  if (Y->size[0] != B1inv->size[1]) {
    if (((B1inv->size[0] == 1) && (B1inv->size[1] == 1)) || (Y->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &A, 1, &xd_emlrtRTEI);
  b_st.site = &uc_emlrtRSI;
  b_mtimes(&b_st, B1inv, Y, A);
  A_data = A->data;
  st.site = &nd_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  if (b0->size[0] != precb0->size[1]) {
    if (((precb0->size[0] == 1) && (precb0->size[1] == 1)) ||
        (b0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &r2, 1, &ae_emlrtRTEI);
  b_st.site = &uc_emlrtRSI;
  b_mtimes(&b_st, precb0, b0, r2);
  r1 = r2->data;
  if ((A->size[0] != r2->size[0]) &&
      ((A->size[0] != 1) && (r2->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(A->size[0], r2->size[0], &s_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (A->size[0] == r2->size[0]) {
    n = A->size[0];
    for (i = 0; i < n; i++) {
      A_data[i] += r1[i];
    }
  } else {
    st.site = &nd_emlrtRSI;
    plus(&st, A, r2);
  }
  st.site = &od_emlrtRSI;
  i = B1inv->size[0] * B1inv->size[1];
  B1inv->size[0] = B1->size[0];
  B1inv->size[1] = B1->size[1];
  emxEnsureCapacity_real_T(&st, B1inv, i, &td_emlrtRTEI);
  B1inv_data = B1inv->data;
  n = B1->size[0] * B1->size[1];
  for (i = 0; i < n; i++) {
    B1inv_data[i] = B1_data[i];
  }
  b_st.site = &pd_emlrtRSI;
  n = B1inv->size[1];
  if (B1inv->size[0] != B1inv->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if (B1inv->size[1] != 0) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &ud_emlrtRSI;
    info_t = LAPACKE_dpotrf_work(102, 'U', (ptrdiff_t)B1inv->size[1],
                                 &B1inv_data[0], (ptrdiff_t)B1inv->size[1]);
    loop_ub = (int32_T)info_t;
    e_st.site = &td_emlrtRSI;
    if (loop_ub < 0) {
      if (loop_ub == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &p_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &q_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &fname[0], 12, loop_ub);
      }
    }
    if (loop_ub == 0) {
      jmax = n;
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI, "Coder:MATLAB:posdef",
                                    "Coder:MATLAB:posdef", 0);
    }
    c_st.site = &rd_emlrtRSI;
    if ((1 <= jmax) && (jmax > 2147483646)) {
      d_st.site = &jb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (loop_ub = 0; loop_ub < jmax; loop_ub++) {
      n = loop_ub + 2;
      c_st.site = &sd_emlrtRSI;
      for (i = n; i <= jmax; i++) {
        B1inv_data[(i + B1inv->size[0] * loop_ub) - 1] = 0.0;
      }
    }
  }
  st.site = &od_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  if (A->size[0] != B1->size[1]) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &uc_emlrtRSI;
  b_mtimes(&b_st, B1, A, beta);
  B1_data = beta->data;
  st.site = &od_emlrtRSI;
  /*  number of columns */
  b_st.site = &od_emlrtRSI;
  randn(&b_st, X->size[1], A);
  A_data = A->data;
  b_st.site = &sc_emlrtRSI;
  emxFree_real_T(&b_st, &B1);
  if (B1inv->size[0] != A->size[0]) {
    if (((B1inv->size[0] == 1) && (B1inv->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &uc_emlrtRSI;
  if ((B1inv->size[0] == 0) || (B1inv->size[1] == 0) || (A->size[0] == 0)) {
    i = r2->size[0];
    r2->size[0] = B1inv->size[1];
    emxEnsureCapacity_real_T(&b_st, r2, i, &ud_emlrtRTEI);
    r1 = r2->data;
    n = B1inv->size[1];
    for (i = 0; i < n; i++) {
      r1[i] = 0.0;
    }
  } else {
    c_st.site = &vc_emlrtRSI;
    d_st.site = &wc_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    info_t = (ptrdiff_t)B1inv->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)B1inv->size[0];
    lda_t = (ptrdiff_t)B1inv->size[0];
    ldb_t = (ptrdiff_t)A->size[0];
    ldc_t = (ptrdiff_t)B1inv->size[1];
    i = r2->size[0];
    r2->size[0] = B1inv->size[1];
    emxEnsureCapacity_real_T(&d_st, r2, i, &gc_emlrtRTEI);
    r1 = r2->data;
    dgemm(&TRANSA1, &TRANSB1, &info_t, &n_t, &k_t, &alpha1, &B1inv_data[0],
          &lda_t, &A_data[0], &ldb_t, &beta1, &r1[0], &ldc_t);
  }
  emxFree_real_T(&b_st, &A);
  emxFree_real_T(&b_st, &B1inv);
  if ((beta->size[0] != r2->size[0]) &&
      ((beta->size[0] != 1) && (r2->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], r2->size[0], &t_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (beta->size[0] == r2->size[0]) {
    n = beta->size[0];
    for (i = 0; i < n; i++) {
      B1_data[i] += r1[i];
    }
  } else {
    st.site = &od_emlrtRSI;
    plus(&st, beta, r2);
  }
  emxFree_real_T(sp, &r2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, const emxArray_real_T *Lam,
                       const emxArray_real_T *beta, real_T a0, real_T d0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *ehat;
  emxArray_real_T *ehat1;
  const real_T *Lam_data;
  const real_T *Y_data;
  real_T gam;
  real_T sig2;
  real_T y;
  real_T *ehat1_data;
  real_T *ehat_data;
  int32_T i;
  int32_T k;
  int32_T nx;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  Lam_data = Lam->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &vd_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
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
  emxInit_real_T(&b_st, &ehat, 1, &ce_emlrtRTEI);
  b_st.site = &uc_emlrtRSI;
  b_mtimes(&b_st, X, beta, ehat);
  if ((Y->size[0] != ehat->size[0]) &&
      ((Y->size[0] != 1) && (ehat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], ehat->size[0], &u_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (Y->size[0] == ehat->size[0]) {
    i = ehat->size[0];
    ehat->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ehat, i, &ce_emlrtRTEI);
    ehat_data = ehat->data;
    nx = Y->size[0];
    for (i = 0; i < nx; i++) {
      ehat_data[i] = Y_data[i] - ehat_data[i];
    }
  } else {
    st.site = &vd_emlrtRSI;
    minus(&st, ehat, Y);
    ehat_data = ehat->data;
  }
  emxInit_real_T(sp, &ehat1, 1, &ee_emlrtRTEI);
  st.site = &wd_emlrtRSI;
  i = ehat1->size[0];
  ehat1->size[0] = Lam->size[0];
  emxEnsureCapacity_real_T(&st, ehat1, i, &de_emlrtRTEI);
  ehat1_data = ehat1->data;
  nx = Lam->size[0];
  for (i = 0; i < nx; i++) {
    ehat1_data[i] = Lam_data[i];
  }
  p = false;
  i = Lam->size[0];
  for (k = 0; k < i; k++) {
    if (p || (Lam_data[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &r_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_st.site = &ae_emlrtRSI;
  nx = Lam->size[0];
  c_st.site = &be_emlrtRSI;
  if ((1 <= Lam->size[0]) && (Lam->size[0] > 2147483646)) {
    d_st.site = &jb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < nx; k++) {
    ehat1_data[k] = muDoubleScalarSqrt(ehat1_data[k]);
  }
  if ((ehat1->size[0] != ehat->size[0]) &&
      ((ehat1->size[0] != 1) && (ehat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(ehat1->size[0], ehat->size[0], &v_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (ehat1->size[0] == ehat->size[0]) {
    nx = ehat1->size[0];
    for (i = 0; i < nx; i++) {
      ehat1_data[i] *= ehat_data[i];
    }
  } else {
    st.site = &wd_emlrtRSI;
    times(&st, ehat1, ehat);
    ehat1_data = ehat1->data;
  }
  st.site = &xd_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  if (ehat->size[0] != ehat1->size[0]) {
    if ((ehat->size[0] == 1) || (ehat1->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (ehat->size[0] < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)ehat->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    y = ddot(&n_t, &ehat_data[0], &incx_t, &ehat1_data[0], &incy_t);
  }
  emxFree_real_T(&st, &ehat1);
  emxFree_real_T(&st, &ehat);
  st.site = &yd_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &ce_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  y = 1.0 / ((d0 + y) / 2.0);
  c_st.site = &de_emlrtRSI;
  d_st.site = &ee_emlrtRSI;
  e_st.site = &fe_emlrtRSI;
  f_st.site = &ge_emlrtRSI;
  gam = y * randg(&f_st, (a0 + (real_T)X->size[0]) / 2.0);
  if (y < 0.0) {
    gam = rtNaN;
  }
  sig2 = 1.0 / gam;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return sig2;
}

static real_T b_binary_expand_op(const emlrtStack *sp, emlrtRSInfo xh_emlrtRSI,
                                 const emxArray_real_T *b_hat, real_T sig2_hat,
                                 const emxArray_real_T *Lambda_hat,
                                 const emxArray_real_T *retf,
                                 const emxArray_real_T *r3,
                                 const emxArray_real_T *r4)
{
  emlrtStack st;
  emxArray_real_T *b_b_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r2;
  const real_T *Lambda_hat_data;
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
  Lambda_hat_data = Lambda_hat->data;
  b_hat_data = b_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_b_hat, 1, &tb_emlrtRTEI);
  i = b_b_hat->size[0];
  b_b_hat->size[0] = (b_hat->size[0] + Lambda_hat->size[0]) + 1;
  emxEnsureCapacity_real_T(sp, b_b_hat, i, &tb_emlrtRTEI);
  b_b_hat_data = b_b_hat->data;
  loop_ub = b_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = b_hat_data[i];
  }
  b_b_hat_data[b_hat->size[0]] = sig2_hat;
  loop_ub = Lambda_hat->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[(i + b_hat->size[0]) + 1] = Lambda_hat_data[i];
  }
  emxInit_real_T(sp, &b_retf, 1, &vb_emlrtRTEI);
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &vb_emlrtRTEI);
  b_b_hat_data = b_retf->data;
  loop_ub = retf->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_hat_data[i] = retf_data[i];
  }
  emxInit_real_T(sp, &r2, 2, &xb_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, r2, i, &xb_emlrtRTEI);
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
  st.site = &xh_emlrtRSI;
  ln_joint_post = lnpdfmvn(&st, b_b_hat, b_retf, r2);
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_b_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return ln_joint_post;
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

static void b_plus(const emlrtStack *sp, emxArray_real_T *B1inv,
                   const emxArray_real_T *precb0)
{
  emxArray_real_T *b_B1inv;
  const real_T *precb0_data;
  real_T *B1inv_data;
  real_T *b_B1inv_data;
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
  precb0_data = precb0->data;
  B1inv_data = B1inv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_B1inv, 2, &lf_emlrtRTEI);
  i = b_B1inv->size[0] * b_B1inv->size[1];
  if (precb0->size[0] == 1) {
    b_B1inv->size[0] = B1inv->size[0];
  } else {
    b_B1inv->size[0] = precb0->size[0];
  }
  if (precb0->size[1] == 1) {
    b_B1inv->size[1] = B1inv->size[1];
  } else {
    b_B1inv->size[1] = precb0->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_B1inv, i, &lf_emlrtRTEI);
  b_B1inv_data = b_B1inv->data;
  stride_0_0 = (B1inv->size[0] != 1);
  stride_0_1 = (B1inv->size[1] != 1);
  stride_1_0 = (precb0->size[0] != 1);
  stride_1_1 = (precb0->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (precb0->size[1] == 1) {
    loop_ub = B1inv->size[1];
  } else {
    loop_ub = precb0->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (precb0->size[0] == 1) {
      b_loop_ub = B1inv->size[0];
    } else {
      b_loop_ub = precb0->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_B1inv_data[i1 + b_B1inv->size[0] * i] =
          B1inv_data[i1 * stride_0_0 + B1inv->size[0] * aux_0_1] +
          precb0_data[i1 * stride_1_0 + precb0->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = B1inv->size[0] * B1inv->size[1];
  B1inv->size[0] = b_B1inv->size[0];
  B1inv->size[1] = b_B1inv->size[1];
  emxEnsureCapacity_real_T(sp, B1inv, i, &lf_emlrtRTEI);
  B1inv_data = B1inv->data;
  loop_ub = b_B1inv->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_B1inv->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      B1inv_data[i1 + B1inv->size[0] * i] =
          b_B1inv_data[i1 + b_B1inv->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_B1inv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T binary_expand_op(const emlrtStack *sp, emlrtRSInfo xh_emlrtRSI,
                               real_T c, const emxArray_real_T *y,
                               const emxArray_real_T *z_tmp)
{
  emlrtStack st;
  emxArray_real_T *b_c;
  const real_T *y_data;
  const real_T *z_tmp_data;
  real_T Lambda_prior;
  real_T *c_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  z_tmp_data = z_tmp->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_c, 1, &jf_emlrtRTEI);
  i = b_c->size[0];
  if (z_tmp->size[0] == 1) {
    b_c->size[0] = y->size[0];
  } else {
    b_c->size[0] = z_tmp->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_c, i, &jf_emlrtRTEI);
  c_data = b_c->data;
  stride_0_0 = (y->size[0] != 1);
  stride_1_0 = (z_tmp->size[0] != 1);
  if (z_tmp->size[0] == 1) {
    loop_ub = y->size[0];
  } else {
    loop_ub = z_tmp->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    c_data[i] = (c - y_data[i * stride_0_0]) - z_tmp_data[i * stride_1_0];
  }
  st.site = &xh_emlrtRSI;
  Lambda_prior = c_sum(&st, b_c);
  emxFree_real_T(sp, &b_c);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return Lambda_prior;
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

static const mxArray *f_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
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

static void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *B1,
                               emlrtRSInfo xh_emlrtRSI,
                               const emxArray_real_T *B1inv)
{
  emlrtStack st;
  emxArray_real_T *r;
  const real_T *B1inv_data;
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
  B1inv_data = B1inv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &xb_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (B1inv->size[1] == 1) {
    r->size[0] = B1inv->size[0];
  } else {
    r->size[0] = B1inv->size[1];
  }
  if (B1inv->size[0] == 1) {
    r->size[1] = B1inv->size[1];
  } else {
    r->size[1] = B1inv->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &xb_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (B1inv->size[0] != 1);
  stride_0_1 = (B1inv->size[1] != 1);
  stride_1_0 = (B1inv->size[1] != 1);
  stride_1_1 = (B1inv->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (B1inv->size[0] == 1) {
    loop_ub = B1inv->size[1];
  } else {
    loop_ub = B1inv->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (B1inv->size[1] == 1) {
      b_loop_ub = B1inv->size[0];
    } else {
      b_loop_ub = B1inv->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (B1inv_data[i1 * stride_0_0 + B1inv->size[0] * aux_0_1] +
                 B1inv_data[aux_1_1 + B1inv->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &xh_emlrtRSI;
  invpd(&st, r, B1);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
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

static void minus(const emlrtStack *sp, emxArray_real_T *ehat,
                  const emxArray_real_T *Y)
{
  emxArray_real_T *b_Y;
  const real_T *Y_data;
  real_T *b_Y_data;
  real_T *ehat_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  Y_data = Y->data;
  ehat_data = ehat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y, 1, &mf_emlrtRTEI);
  i = b_Y->size[0];
  if (ehat->size[0] == 1) {
    b_Y->size[0] = Y->size[0];
  } else {
    b_Y->size[0] = ehat->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Y, i, &mf_emlrtRTEI);
  b_Y_data = b_Y->data;
  stride_0_0 = (Y->size[0] != 1);
  stride_1_0 = (ehat->size[0] != 1);
  if (ehat->size[0] == 1) {
    loop_ub = Y->size[0];
  } else {
    loop_ub = ehat->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_Y_data[i] = Y_data[i * stride_0_0] - ehat_data[i * stride_1_0];
  }
  i = ehat->size[0];
  ehat->size[0] = b_Y->size[0];
  emxEnsureCapacity_real_T(sp, ehat, i, &mf_emlrtRTEI);
  ehat_data = ehat->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    ehat_data[i] = b_Y_data[i];
  }
  emxFree_real_T(sp, &b_Y);
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
  emxInit_real_T(sp, &b_beta, 1, &kf_emlrtRTEI);
  i = b_beta->size[0];
  if (r1->size[0] == 1) {
    b_beta->size[0] = beta->size[0];
  } else {
    b_beta->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_beta, i, &kf_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, beta, i, &kf_emlrtRTEI);
  beta_data = beta->data;
  loop_ub = b_beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = b_beta_data[i];
  }
  emxFree_real_T(sp, &b_beta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void times(const emlrtStack *sp, emxArray_real_T *ehat1,
                  const emxArray_real_T *ehat)
{
  emxArray_real_T *b_ehat1;
  const real_T *ehat_data;
  real_T *b_ehat1_data;
  real_T *ehat1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  ehat_data = ehat->data;
  ehat1_data = ehat1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_ehat1, 1, &de_emlrtRTEI);
  i = b_ehat1->size[0];
  if (ehat->size[0] == 1) {
    b_ehat1->size[0] = ehat1->size[0];
  } else {
    b_ehat1->size[0] = ehat->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_ehat1, i, &de_emlrtRTEI);
  b_ehat1_data = b_ehat1->data;
  stride_0_0 = (ehat1->size[0] != 1);
  stride_1_0 = (ehat->size[0] != 1);
  if (ehat->size[0] == 1) {
    loop_ub = ehat1->size[0];
  } else {
    loop_ub = ehat->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_ehat1_data[i] = ehat1_data[i * stride_0_0] * ehat_data[i * stride_1_0];
  }
  i = ehat1->size[0];
  ehat1->size[0] = b_ehat1->size[0];
  emxEnsureCapacity_real_T(sp, ehat1, i, &de_emlrtRTEI);
  ehat1_data = ehat1->data;
  loop_ub = b_ehat1->size[0];
  for (i = 0; i < loop_ub; i++) {
    ehat1_data[i] = b_ehat1_data[i];
  }
  emxFree_real_T(sp, &b_ehat1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Hetero_Regression(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, const emxArray_real_T *b0,
                       const emxArray_real_T *B0, real_T a0, real_T d0,
                       real_T v, real_T n0, real_T n1, char_T forecast,
                       const emxArray_real_T *x_f, char_T ML, struct0_T *Output)
{
  static const char_T cv1[38] = {
      'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n', 'g', ' ', 't', 'h',
      'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ', 'P', 'l',
      'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.'};
  static const char_T cv4[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv6[10] = {'[', 's', 'i', 'g', 'm',
                                 'a', '2', ':', ' ', ']'};
  static const char_T cv5[8] = {'[', 'b', 'e', 't', 'a', ':', ' ', ']'};
  static const char_T cv3[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T b_cv[6] = {'s', 'h', 'o', 'r', 't', 'G'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *Lam;
  emxArray_real_T *Lambda_hat;
  emxArray_real_T *b_1;
  emxArray_real_T *b_hat;
  emxArray_real_T *b_sig2;
  emxArray_real_T *precb0;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *retf;
  emxArray_real_T *y;
  emxArray_real_T *z_tmp;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const real_T *b0_data;
  real_T alpha;
  real_T alpha_tmp;
  real_T b_prior;
  real_T beta;
  real_T c;
  real_T d;
  real_T lnlik1;
  real_T lnpost_hat;
  real_T n;
  real_T sig2;
  real_T sig2_hat;
  real_T sig2_inv;
  real_T *Lam_data;
  real_T *Lambda_hat_data;
  real_T *b_1_data;
  real_T *b_hat_data;
  real_T *r2;
  real_T *retf_data;
  real_T *z_tmp_data;
  int32_T b_Output[2];
  int32_T result[2];
  int32_T Is_forecasting;
  int32_T c_Output;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T sizes_idx_1;
  char_T cv2[37];
  int8_T b_input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  b0_data = b0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &precb0, 2, &yb_emlrtRTEI);
  st.site = &ch_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);
  st.site = &emlrtRSI;
  invpd(&st, B0, precb0);
  n = n0 + n1;
  if (forecast == 'Y') {
    Is_forecasting = 1;
    /*   예측하기 */
  } else {
    Is_forecasting = 0;
    /*  예측 안하기 */
  }
  /*  number of columns */
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
  loop_ub_tmp = (int32_T)n;
  i1 = Output->Sig2m->size[0];
  Output->Sig2m->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->Sig2m, i1, &db_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Lam, 1, &fb_emlrtRTEI);
  i1 = Output->lambdam->size[0] * Output->lambdam->size[1];
  Output->lambdam->size[0] = loop_ub_tmp;
  Output->lambdam->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, Output->lambdam, i1, &eb_emlrtRTEI);
  i1 = Lam->size[0];
  Lam->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, Lam, i1, &fb_emlrtRTEI);
  Lam_data = Lam->data;
  loop_ub = X->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Lam_data[i1] = 1.0;
  }
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->yfm->size[0];
  Output->yfm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Output->yfm, i1, &gb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    Output->yfm->data[i] = 0.0;
  }
  if (a0 * d0 > 0.0) {
    sig2 = 0.5 * d0 / (0.5 * a0 - 1.0);
  } else {
    st.site = &b_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    /*  gauss function */
    c_st.site = &dd_emlrtRSI;
    c = b_std(&c_st, Y);
    b_st.site = &xc_emlrtRSI;
    c_st.site = &yc_emlrtRSI;
    sig2 = c * c;
  }
  emxInit_real_T(sp, &b_1, 1, &hb_emlrtRTEI);
  sig2_inv = 1.0 / sig2;
  i = b_1->size[0];
  b_1->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b_1, i, &hb_emlrtRTEI);
  b_1_data = b_1->data;
  loop_ub = b0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_1_data[i] = b0_data[i];
  }
  emxInit_real_T(sp, &b_hat, 1, &ib_emlrtRTEI);
  i = b_hat->size[0];
  b_hat->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(sp, b_hat, i, &ib_emlrtRTEI);
  b_hat_data = b_hat->data;
  loop_ub = b0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_hat_data[i] = b0_data[i];
  }
  emxInit_real_T(sp, &Lambda_hat, 1, &jb_emlrtRTEI);
  sig2_hat = sig2;
  i = Lambda_hat->size[0];
  Lambda_hat->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, Lambda_hat, i, &jb_emlrtRTEI);
  Lambda_hat_data = Lambda_hat->data;
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    Lambda_hat_data[i] = 0.0;
  }
  lnpost_hat = -4.8516519540979028E+8;
  /*  임의로 값을 주고 시작함 */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &y, 1, &bc_emlrtRTEI);
  emxInit_real_T(sp, &retf, 2, &cc_emlrtRTEI);
  emxInit_real_T(sp, &z_tmp, 1, &pb_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &dc_emlrtRTEI);
  emxInit_real_T(sp, &b_sig2, 1, &qb_emlrtRTEI);
  for (sizes_idx_1 = 0; sizes_idx_1 < loop_ub_tmp; sizes_idx_1++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((sizes_idx_1 -
         (int32_T)muDoubleScalarFloor(((real_T)sizes_idx_1 + 1.0) / 100.0) *
             100) +
            1 ==
        0) {
      st.site = &sh_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i = 0; i < 37; i++) {
        cv2[i] = '=';
      }
      st.site = &eh_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv2), &f_emlrtMCI);
      st.site = &c_emlrtRSI;
      b_st.site = &jd_emlrtRSI;
      c_st.site = &jh_emlrtRSI;
      d_st.site = &ih_emlrtRSI;
      emlrt_marshallIn(
          &c_st,
          feval(&c_st, i_emlrt_marshallOut(&c_st, cv3),
                f_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, cv4),
                f_emlrt_marshallOut((real_T)sizes_idx_1 + 1.0), &q_emlrtMCI),
          "<output of feval>");
      for (i = 0; i < 37; i++) {
        cv2[i] = '=';
      }
      st.site = &dh_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv2), &g_emlrtMCI);
      d_y = NULL;
      m = emlrtCreateString1(' ');
      emlrtAssign(&d_y, m);
      st.site = &rh_emlrtRSI;
      disp(&st, d_y, &h_emlrtMCI);
      st.site = &fh_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
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
      disp(&st, d_emlrt_marshallOut(retf), &j_emlrtMCI);
      st.site = &gh_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv6), &k_emlrtMCI);
      st.site = &ph_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(sig2), &l_emlrtMCI);
    }
    st.site = &d_emlrtRSI;
    Gen_beta(&st, X, Y, Lam, b0, precb0, sig2_inv, b_1);
    b_1_data = b_1->data;
    if (sizes_idx_1 + 1 > Output->bm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, Output->bm->size[0],
                                    &emlrtBCI, (emlrtCTX)sp);
    }
    b_Output[0] = 1;
    b_Output[1] = Output->bm->size[1];
    result[0] = 1;
    loop_ub = b_1->size[0];
    result[1] = b_1->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_Output[0], 2, &result[0], 2, &emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Output->bm->data[sizes_idx_1 + Output->bm->size[0] * i] = b_1_data[i];
    }
    st.site = &e_emlrtRSI;
    sig2 = Gen_sig2(&st, Y, X, Lam, b_1, a0, d0);
    sig2_inv = 1.0 / sig2;
    if ((int32_T)(sizes_idx_1 + 1U) > Output->Sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sizes_idx_1 + 1U), 1,
                                    Output->Sig2m->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    Output->Sig2m->data[sizes_idx_1] = sig2;
    st.site = &f_emlrtRSI;
    Gen_Lam(&st, Y, X, b_1, sig2_inv, v, Lam);
    Lam_data = Lam->data;
    if (sizes_idx_1 + 1 > Output->lambdam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1,
                                    Output->lambdam->size[0], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_Output[0] = 1;
    b_Output[1] = Output->lambdam->size[1];
    result[0] = 1;
    result[1] = Lam->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_Output[0], 2, &result[0], 2, &b_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = Lam->size[0];
    for (i = 0; i < loop_ub; i++) {
      Output->lambdam->data[sizes_idx_1 + Output->lambdam->size[0] * i] =
          Lam_data[i];
    }
    if (Is_forecasting == 1) {
      st.site = &g_emlrtRSI;
      b_st.site = &sc_emlrtRSI;
      c_dynamic_size_checks(&b_st, x_f, b_1, x_f->size[0], b_1->size[0]);
      if ((int32_T)(sizes_idx_1 + 1U) > Output->yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(sizes_idx_1 + 1U), 1,
                                      Output->yfm->size[0], &l_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &g_emlrtRSI;
      Output->yfm->data[sizes_idx_1] =
          randmvt(&st, v, d_mtimes(x_f, b_1), sig2);
    }
    if ((ML == 'Y') && ((real_T)sizes_idx_1 + 1.0 > n0)) {
      st.site = &h_emlrtRSI;
      b_st.site = &sc_emlrtRSI;
      b_dynamic_size_checks(&b_st, X, b_1, X->size[1], b_1->size[0]);
      b_st.site = &uc_emlrtRSI;
      b_mtimes(&b_st, X, b_1, y);
      i = z_tmp->size[0];
      z_tmp->size[0] = Lam->size[0];
      emxEnsureCapacity_real_T(sp, z_tmp, i, &pb_emlrtRTEI);
      z_tmp_data = z_tmp->data;
      loop_ub = Lam->size[0];
      for (i = 0; i < loop_ub; i++) {
        z_tmp_data[i] = 1.0 / Lam_data[i];
      }
      i = b_sig2->size[0];
      b_sig2->size[0] = z_tmp->size[0];
      emxEnsureCapacity_real_T(sp, b_sig2, i, &qb_emlrtRTEI);
      retf_data = b_sig2->data;
      loop_ub = z_tmp->size[0];
      for (i = 0; i < loop_ub; i++) {
        retf_data[i] = sig2 * z_tmp_data[i];
      }
      st.site = &h_emlrtRSI;
      b_diag(&st, b_sig2, r);
      st.site = &h_emlrtRSI;
      lnlik1 = lnpdfmvn(&st, Y, y, r);
      st.site = &i_emlrtRSI;
      b_prior = lnpdfmvn(&st, b_1, b0, B0);
      st.site = &j_emlrtRSI;
      alpha = a0 / 2.0;
      beta = d0 / 2.0;
      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &fg_emlrtRSI;
      if (beta < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      d = alpha;
      b_st.site = &fg_emlrtRSI;
      gammaln(&b_st, &d);
      b_st.site = &gg_emlrtRSI;
      if (sig2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      st.site = &k_emlrtRSI;
      alpha_tmp = v / 2.0;
      /*  to compute the log inverted gamma density on a grid */
      /*  beta is also a vector  */
      /*  alpha = shape parameter */
      /*  beta = scale parameter */
      /*  mean = beta / (alpha - 1) */
      b_st.site = &fg_emlrtRSI;
      if (alpha_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &s_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      c = alpha_tmp;
      b_st.site = &fg_emlrtRSI;
      gammaln(&b_st, &c);
      c = alpha_tmp * muDoubleScalarLog(alpha_tmp) - c;
      i = y->size[0];
      y->size[0] = z_tmp->size[0];
      emxEnsureCapacity_real_T(&st, y, i, &sb_emlrtRTEI);
      retf_data = y->data;
      loop_ub = z_tmp->size[0];
      for (i = 0; i < loop_ub; i++) {
        retf_data[i] = z_tmp_data[i];
      }
      b_st.site = &gg_emlrtRSI;
      b_log(&b_st, y);
      retf_data = y->data;
      loop_ub = y->size[0];
      for (i = 0; i < loop_ub; i++) {
        retf_data[i] *= alpha_tmp + 1.0;
      }
      loop_ub = z_tmp->size[0];
      for (i = 0; i < loop_ub; i++) {
        z_tmp_data[i] = alpha_tmp / z_tmp_data[i];
      }
      if ((y->size[0] != z_tmp->size[0]) &&
          ((y->size[0] != 1) && (z_tmp->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(y->size[0], z_tmp->size[0], &e_emlrtECI,
                                    &st);
      }
      if (y->size[0] == z_tmp->size[0]) {
        loop_ub = y->size[0];
        for (i = 0; i < loop_ub; i++) {
          retf_data[i] = (c - retf_data[i]) - z_tmp_data[i];
        }
        st.site = &k_emlrtRSI;
        c = c_sum(&st, y);
      } else {
        st.site = &k_emlrtRSI;
        c = binary_expand_op(&st, k_emlrtRSI, c, y, z_tmp);
      }
      c = lnlik1 + ((b_prior + (((alpha * muDoubleScalarLog(beta) - d) -
                                 (alpha + 1.0) * muDoubleScalarLog(sig2)) -
                                beta / sig2)) +
                    c);
      if (c > lnpost_hat) {
        loop_ub = b_1->size[0];
        i = b_hat->size[0];
        b_hat->size[0] = b_1->size[0];
        emxEnsureCapacity_real_T(sp, b_hat, i, &ub_emlrtRTEI);
        b_hat_data = b_hat->data;
        for (i = 0; i < loop_ub; i++) {
          b_hat_data[i] = b_1_data[i];
        }
        sig2_hat = sig2;
        i = Lambda_hat->size[0];
        Lambda_hat->size[0] = Lam->size[0];
        emxEnsureCapacity_real_T(sp, Lambda_hat, i, &wb_emlrtRTEI);
        Lambda_hat_data = Lambda_hat->data;
        loop_ub = Lam->size[0];
        for (i = 0; i < loop_ub; i++) {
          Lambda_hat_data[i] = Lam_data[i];
        }
        lnpost_hat = c;
        /*  최빈값 후보의 사후 커널값 */
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_sig2);
  emxFree_real_T(sp, &z_tmp);
  emxFree_real_T(sp, &y);
  b_y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m);
  st.site = &oh_emlrtRSI;
  disp(&st, b_y, &b_emlrtMCI);
  st.site = &hh_emlrtRSI;
  disp(&st, g_emlrt_marshallOut(&st, cv1), &c_emlrtMCI);
  c_y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&c_y, m);
  st.site = &nh_emlrtRSI;
  disp(&st, c_y, &d_emlrtMCI);
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
  input_sizes_idx_1 = Output->bm->size[1] - 1;
  for (i2 = 0; i2 <= input_sizes_idx_1; i2++) {
    sizes_idx_1 = i1 - i;
    for (i3 = 0; i3 < sizes_idx_1; i3++) {
      Output->bm->data[i3 + sizes_idx_1 * i2] =
          Output->bm->data[((i + i3) + Output->bm->size[0] * i2) + 1];
    }
  }
  i2 = Output->bm->size[0] * Output->bm->size[1];
  Output->bm->size[0] = i1 - i;
  Output->bm->size[1] = input_sizes_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, Output->bm, i2, &kb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Output->Sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1,
                                    Output->Sig2m->size[0], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Output->Sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->Sig2m->size[0],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  b_Output[0] = 1;
  loop_ub = i1 - i;
  b_Output[1] = loop_ub;
  st.site = &l_emlrtRSI;
  indexShapeCheck(&st, Output->Sig2m->size[0], b_Output);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->Sig2m->data[i1] = Output->Sig2m->data[i + i1];
  }
  i = Output->Sig2m->size[0];
  Output->Sig2m->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->Sig2m, i, &lb_emlrtRTEI);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -1;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Output->lambdam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1,
                                    Output->lambdam->size[0], &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 2;
    if ((n < 1.0) || (loop_ub_tmp > Output->lambdam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->lambdam->size[0],
                                    &h_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)n - 1;
  }
  c_Output = Output->lambdam->size[1] - 1;
  for (i2 = 0; i2 <= c_Output; i2++) {
    sizes_idx_1 = i1 - i;
    for (i3 = 0; i3 < sizes_idx_1; i3++) {
      Output->lambdam->data[i3 + sizes_idx_1 * i2] =
          Output->lambdam->data[((i + i3) + Output->lambdam->size[0] * i2) + 1];
    }
  }
  i2 = Output->lambdam->size[0] * Output->lambdam->size[1];
  Output->lambdam->size[0] = i1 - i;
  Output->lambdam->size[1] = c_Output + 1;
  emxEnsureCapacity_real_T(sp, Output->lambdam, i2, &nb_emlrtRTEI);
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
                                      Output->yfm->size[0], &i_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = (int32_T)(n0 + 1.0) - 1;
      if ((n < 1.0) || (loop_ub_tmp > Output->yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Output->yfm->size[0],
                                      &j_emlrtBCI, (emlrtCTX)sp);
      }
    }
    loop_ub_tmp -= i;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      Output->yfm->data[i1] = Output->yfm->data[i + i1];
    }
    i = Output->yfm->size[0];
    Output->yfm->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, Output->yfm, i, &ob_emlrtRTEI);
  }
  Output->lnML = 0.0;
  if (ML == 'Y') {
    st.site = &m_emlrtRSI;
    b_st.site = &pg_emlrtRSI;
    if ((Output->bm->size[0] != 0) && (input_sizes_idx_1 + 1 != 0)) {
      Is_forecasting = Output->bm->size[0];
    } else if (loop_ub != 0) {
      Is_forecasting = loop_ub;
    } else if ((Output->lambdam->size[0] != 0) && (c_Output + 1 != 0)) {
      Is_forecasting = Output->lambdam->size[0];
    } else {
      Is_forecasting = Output->bm->size[0];
      if (Output->lambdam->size[0] > Output->bm->size[0]) {
        Is_forecasting = Output->lambdam->size[0];
      }
    }
    c_st.site = &qg_emlrtRSI;
    if ((Output->bm->size[0] != Is_forecasting) &&
        ((Output->bm->size[0] != 0) && (input_sizes_idx_1 + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((loop_ub != Is_forecasting) && (loop_ub != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Output->lambdam->size[0] != Is_forecasting) &&
        ((Output->lambdam->size[0] != 0) && (c_Output + 1 != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (Is_forecasting == 0);
    if (empty_non_axis_sizes ||
        ((Output->bm->size[0] != 0) && (input_sizes_idx_1 + 1 != 0))) {
      input_sizes_idx_1++;
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || (loop_ub != 0)) {
      b_input_sizes_idx_1 = 1;
    } else {
      b_input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((Output->lambdam->size[0] != 0) && (c_Output + 1 != 0))) {
      sizes_idx_1 = c_Output + 1;
    } else {
      sizes_idx_1 = 0;
    }
    i = precb0->size[0] * precb0->size[1];
    precb0->size[0] = Is_forecasting;
    precb0->size[1] = (input_sizes_idx_1 + b_input_sizes_idx_1) + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, precb0, i, &rb_emlrtRTEI);
    retf_data = precb0->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < Is_forecasting; i1++) {
        retf_data[i1 + precb0->size[0] * i] =
            Output->bm->data[i1 + Is_forecasting * i];
      }
    }
    loop_ub = b_input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < Is_forecasting; i1++) {
        retf_data[i1 + precb0->size[0] * input_sizes_idx_1] =
            Output->Sig2m->data[i1];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < Is_forecasting; i1++) {
        retf_data[i1 + precb0->size[0] *
                           ((i + input_sizes_idx_1) + b_input_sizes_idx_1)] =
            Output->lambdam->data[i1 + Is_forecasting * i];
      }
    }
    emxInit_real_T(&b_st, &r1, 2, &ac_emlrtRTEI);
    st.site = &n_emlrtRSI;
    b_st.site = &rg_emlrtRSI;
    mean(&b_st, precb0, retf);
    retf_data = retf->data;
    st.site = &o_emlrtRSI;
    cov(&st, precb0, r);
    z_tmp_data = r->data;
    st.site = &o_emlrtRSI;
    cov(&st, precb0, r1);
    r2 = r1->data;
    if ((r->size[0] != r1->size[1]) &&
        ((r->size[0] != 1) && (r1->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[0], r1->size[1], &c_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((r1->size[0] != r->size[1]) &&
        ((r->size[1] != 1) && (r1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[1], r1->size[0], &d_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((r->size[0] == r1->size[1]) && (r1->size[0] == r->size[1])) {
      i = b_1->size[0];
      b_1->size[0] = (b_hat->size[0] + Lambda_hat->size[0]) + 1;
      emxEnsureCapacity_real_T(sp, b_1, i, &tb_emlrtRTEI);
      b_1_data = b_1->data;
      loop_ub = b_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_1_data[i] = b_hat_data[i];
      }
      b_1_data[b_hat->size[0]] = sig2_hat;
      loop_ub = Lambda_hat->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_1_data[(i + b_hat->size[0]) + 1] = Lambda_hat_data[i];
      }
      i = Lam->size[0];
      Lam->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, Lam, i, &vb_emlrtRTEI);
      Lam_data = Lam->data;
      loop_ub = retf->size[1];
      for (i = 0; i < loop_ub; i++) {
        Lam_data[i] = retf_data[i];
      }
      i = precb0->size[0] * precb0->size[1];
      precb0->size[0] = r->size[0];
      precb0->size[1] = r->size[1];
      emxEnsureCapacity_real_T(sp, precb0, i, &xb_emlrtRTEI);
      retf_data = precb0->data;
      loop_ub = r->size[1];
      for (i = 0; i < loop_ub; i++) {
        sizes_idx_1 = r->size[0];
        for (i1 = 0; i1 < sizes_idx_1; i1++) {
          retf_data[i1 + precb0->size[0] * i] =
              0.5 *
              (z_tmp_data[i1 + r->size[0] * i] + r2[i + r1->size[0] * i1]);
        }
      }
      st.site = &p_emlrtRSI;
      c = lnpdfmvn(&st, b_1, Lam, precb0);
    } else {
      st.site = &p_emlrtRSI;
      c = b_binary_expand_op(&st, p_emlrtRSI, b_hat, sig2_hat, Lambda_hat, retf,
                             r, r1);
    }
    emxFree_real_T(sp, &r1);
    Output->lnML = lnpost_hat - c;
  }
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &Lambda_hat);
  emxFree_real_T(sp, &b_hat);
  emxFree_real_T(sp, &b_1);
  emxFree_real_T(sp, &Lam);
  emxFree_real_T(sp, &precb0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Hetero_Regression.c) */

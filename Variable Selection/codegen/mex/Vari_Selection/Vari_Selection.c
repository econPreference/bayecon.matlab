/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Vari_Selection.c
 *
 * Code generation for function 'Vari_Selection'
 *
 */

/* Include files */
#include "Vari_Selection.h"
#include "Vari_Selection_data.h"
#include "Vari_Selection_emxutil.h"
#include "Vari_Selection_mexutil.h"
#include "Vari_Selection_types.h"
#include "chol.h"
#include "diag.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "gamrnd.h"
#include "inv.h"
#include "mtimes.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "std.h"
#include "warning.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    8,                /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    25,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    28,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    29,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    49,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    52,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    53,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    55,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    59,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    63,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    67,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    72,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    73,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    76,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    77,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    82,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo
    q_emlrtRSI =
        {
            28,    /* lineNo */
            "cat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    r_emlrtRSI =
        {
            100,        /* lineNo */
            "cat_impl", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    4,                                                       /* lineNo */
    "stdc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/stdc.m" /* pathName */
};

static emlrtRSInfo
    rb_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    107,           /* lineNo */
    "Gen_beta_VS", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    108,           /* lineNo */
    "Gen_beta_VS", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    109,           /* lineNo */
    "Gen_beta_VS", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    114,           /* lineNo */
    "Gen_beta_VS", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    115,           /* lineNo */
    "Gen_beta_VS", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    116,           /* lineNo */
    "Gen_beta_VS", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    117,           /* lineNo */
    "Gen_beta_VS", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    25,    /* lineNo */
    "inv", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                           */
};

static emlrtRSInfo ec_emlrtRSI = {
    90,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo hd_emlrtRSI = {
    151,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    152,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    154,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    12,                                                        /* lineNo */
    "randig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    18,                                                         /* lineNo */
    "randgam",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    129,       /* lineNo */
    "Gen_gam", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    130,       /* lineNo */
    "Gen_gam", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    132,       /* lineNo */
    "Gen_gam", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    7,                                                         /* lineNo */
    "lnpdfn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfn.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    141,           /* lineNo */
    "Gen_Sigma_B", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    143,           /* lineNo */
    "Gen_Sigma_B", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    6,                /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    88,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    89,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    90,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    91,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    47,               /* lineNo */
    9,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    48,               /* lineNo */
    9,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    50,               /* lineNo */
    9,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    51,               /* lineNo */
    9,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    54,               /* lineNo */
    9,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtMCInfo
    k_emlrtMCI =
        {
            66,        /* lineNo */
            18,        /* colNo */
            "fprintf", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI = {
    42,               /* lineNo */
    12,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    1,                /* nDims */
    81,               /* lineNo */
    20,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    60,               /* lineNo */
    11,               /* colNo */
    "betam",          /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,               /* nDims */
    60,               /* lineNo */
    5,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    93,               /* lineNo */
    15,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    93,               /* lineNo */
    15,               /* colNo */
    "betam",          /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    93,               /* lineNo */
    20,               /* colNo */
    "betam",          /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    94,               /* lineNo */
    15,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    94,               /* lineNo */
    15,               /* colNo */
    "sig2m",          /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    94,               /* lineNo */
    20,               /* colNo */
    "sig2m",          /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    68,               /* lineNo */
    9,                /* colNo */
    "Gam",            /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,               /* nDims */
    68,               /* lineNo */
    5,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtDCInfo c_emlrtDCI = {
    95,               /* lineNo */
    14,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    95,               /* lineNo */
    14,               /* colNo */
    "Gam",            /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    95,               /* lineNo */
    19,               /* colNo */
    "Gam",            /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    96,               /* lineNo */
    11,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    96,               /* lineNo */
    11,               /* colNo */
    "yfm",            /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    96,               /* lineNo */
    16,               /* colNo */
    "yfm",            /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    71,               /* lineNo */
    20,               /* colNo */
    "beta",           /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    75,               /* lineNo */
    20,               /* colNo */
    "beta",           /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
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

static emlrtDCInfo e_emlrtDCI = {
    9,                /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    4                             /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    36,               /* lineNo */
    13,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    36,               /* lineNo */
    13,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    4                             /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    37,               /* lineNo */
    15,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    38,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    39,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    1                             /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    64,               /* lineNo */
    11,               /* colNo */
    "sig2m",          /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    84,               /* lineNo */
    13,               /* colNo */
    "yfm",            /* aName */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    1,             /* nDims */
    117,           /* lineNo */
    8,             /* colNo */
    "Gen_beta_VS", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    1,           /* nDims */
    151,         /* lineNo */
    8,           /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    129,       /* lineNo */
    27,        /* colNo */
    "beta",    /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    129,       /* lineNo */
    37,        /* colNo */
    "beta0",   /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    130,       /* lineNo */
    27,        /* colNo */
    "beta",    /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    130,       /* lineNo */
    37,        /* colNo */
    "beta1",   /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    129,       /* lineNo */
    44,        /* colNo */
    "B0",      /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    129,       /* lineNo */
    46,        /* colNo */
    "B0",      /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    130,       /* lineNo */
    44,        /* colNo */
    "B1",      /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    130,       /* lineNo */
    46,        /* colNo */
    "B1",      /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    132,       /* lineNo */
    9,         /* colNo */
    "gam",     /* aName */
    "Gen_gam", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m", /* pName */
    0                             /* checkKind */
};

static emlrtRTEInfo n_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

static emlrtRTEInfo q_emlrtRTEI = {
    9,                /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    33,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    36,               /* lineNo */
    7,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    37,               /* lineNo */
    9,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    38,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    39,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    59,               /* lineNo */
    59,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    98,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    99,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    100,              /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    101,              /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    1,                /* lineNo */
    19,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    71,               /* lineNo */
    15,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    75,               /* lineNo */
    15,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    28,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    29,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    36,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    37,               /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    59,               /* lineNo */
    5,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    71,               /* lineNo */
    20,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    75,               /* lineNo */
    20,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    107,              /* lineNo */
    12,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    90,                  /* lineNo */
    5,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    114,              /* lineNo */
    9,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    74,                  /* lineNo */
    9,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    34,     /* lineNo */
    5,      /* colNo */
    "chol", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    117,              /* lineNo */
    15,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    116,              /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    105,              /* lineNo */
    17,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    114,              /* lineNo */
    18,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    151,              /* lineNo */
    1,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    126,              /* lineNo */
    7,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    81,               /* lineNo */
    20,               /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    117,              /* lineNo */
    8,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    151,              /* lineNo */
    8,                /* colNo */
    "Vari_Selection", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pName */
};

static emlrtRSInfo wd_emlrtRSI = {
    50,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    48,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    90,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo
    ae_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo
    be_emlrtRSI =
        {
            68,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = {
    6,                /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    88,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    47,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = {
    91,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    89,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    54,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    51,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI = {
    81,               /* lineNo */
    "Vari_Selection", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/Vari_Selection.m" /* pathName */
};

/* Function Declarations */
static real_T Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, const emxArray_real_T *beta,
                        real_T alpha0, real_T delta0);

static real_T Gen_Sigma_B(const emlrtStack *sp, const emxArray_real_T *Y,
                          real_T alpha0, real_T delta0);

static void Gen_beta_VS(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, real_T sig2,
                        const emxArray_real_T *gam,
                        const emxArray_real_T *beta0, const emxArray_real_T *B0,
                        const emxArray_real_T *beta1, emxArray_real_T *B1,
                        emxArray_real_T *beta);

static void Gen_gam(const emlrtStack *sp, const emxArray_real_T *beta,
                    const emxArray_real_T *beta0, const emxArray_real_T *B0,
                    const emxArray_real_T *beta1, const emxArray_real_T *B1,
                    emxArray_real_T *gam);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38]);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7]);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static const mxArray *d_emlrt_marshallOut(const real_T u);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[12]);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[37]);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, emlrtMCInfo *location);

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location);

static void minus(const emlrtStack *sp, emxArray_real_T *ehat,
                  const emxArray_real_T *Y);

static void plus(const emlrtStack *sp, emxArray_real_T *beta,
                 const emxArray_real_T *r1);

static void times(const emlrtStack *sp, emxArray_real_T *beta,
                  const emxArray_real_T *gam);

/* Function Definitions */
static real_T Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, const emxArray_real_T *beta,
                        real_T alpha0, real_T delta0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *ehat;
  const real_T *Y_data;
  real_T gam;
  real_T sig2;
  real_T *ehat_data;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  */
  /*  레짐 1 */
  st.site = &hd_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (beta->size[0] != X->size[1]) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || (beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &ehat, 1, &nc_emlrtRTEI);
  b_st.site = &ec_emlrtRSI;
  b_mtimes(&b_st, X, beta, ehat);
  if ((Y->size[0] != ehat->size[0]) &&
      ((Y->size[0] != 1) && (ehat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], ehat->size[0], &e_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (Y->size[0] == ehat->size[0]) {
    i = ehat->size[0];
    ehat->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ehat, i, &nc_emlrtRTEI);
    ehat_data = ehat->data;
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      ehat_data[i] = Y_data[i] - ehat_data[i];
    }
  } else {
    st.site = &hd_emlrtRSI;
    minus(&st, ehat, Y);
    ehat_data = ehat->data;
  }
  st.site = &id_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (ehat->size[0] < 1) {
    gam = 0.0;
  } else {
    n_t = (ptrdiff_t)ehat->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    gam = ddot(&n_t, &ehat_data[0], &incx_t, &ehat_data[0], &incy_t);
  }
  emxFree_real_T(&st, &ehat);
  st.site = &jd_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &kd_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  c_st.site = &ld_emlrtRSI;
  gam = gamrnd(&c_st, (alpha0 + (real_T)X->size[0]) / 2.0,
               1.0 / ((delta0 + gam) / 2.0));
  sig2 = 1.0 / gam;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return sig2;
}

static real_T Gen_Sigma_B(const emlrtStack *sp, const emxArray_real_T *Y,
                          real_T alpha0, real_T delta0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *Y_data;
  real_T gam;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  Y_data = Y->data;
  /*  */
  /*  레짐 1 */
  st.site = &ud_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (Y->size[0] < 1) {
    gam = 0.0;
  } else {
    n_t = (ptrdiff_t)Y->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    gam = ddot(&n_t, &Y_data[0], &incx_t, &Y_data[0], &incy_t);
  }
  st.site = &vd_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &kd_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  c_st.site = &ld_emlrtRSI;
  gam = gamrnd(&c_st, (alpha0 + (real_T)Y->size[0]) / 2.0,
               1.0 / ((delta0 + gam) / 2.0));
  return 1.0 / gam;
}

static void Gen_beta_VS(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, real_T sig2,
                        const emxArray_real_T *gam,
                        const emxArray_real_T *beta0, const emxArray_real_T *B0,
                        const emxArray_real_T *beta1, emxArray_real_T *B1,
                        emxArray_real_T *beta)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *a_tmp;
  emxArray_real_T *d_y;
  emxArray_real_T *r;
  emxArray_real_T *sig2inv;
  const mxArray *c_y;
  const mxArray *e_y;
  const mxArray *m;
  const real_T *X_data;
  const real_T *beta0_data;
  const real_T *beta1_data;
  const real_T *gam_data;
  real_T B_inv;
  real_T b_y;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  real_T y;
  real_T *A_data;
  real_T *B1_data;
  real_T *r1;
  real_T *y_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T str[14];
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
  beta1_data = beta1->data;
  beta0_data = beta0->data;
  gam_data = gam->data;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &a_tmp, 2, &pb_emlrtRTEI);
  /*  */
  st.site = &sb_emlrtRSI;
  i = a_tmp->size[0] * a_tmp->size[1];
  a_tmp->size[0] = 1;
  a_tmp->size[1] = gam->size[0];
  emxEnsureCapacity_real_T(&st, a_tmp, i, &pb_emlrtRTEI);
  B1_data = a_tmp->data;
  loop_ub = gam->size[0];
  for (i = 0; i < loop_ub; i++) {
    B1_data[i] = 1.0 - gam_data[i];
  }
  emxInit_real_T(&st, &A, 1, &wb_emlrtRTEI);
  b_st.site = &sb_emlrtRSI;
  diag(&b_st, B0, A);
  A_data = A->data;
  b_st.site = &ac_emlrtRSI;
  if (A->size[0] != a_tmp->size[1]) {
    if ((a_tmp->size[1] == 1) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (a_tmp->size[1] < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)a_tmp->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    y = ddot(&n_t, &B1_data[0], &incx_t, &A_data[0], &incy_t);
  }
  st.site = &sb_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  diag(&b_st, B1, A);
  A_data = A->data;
  b_st.site = &ac_emlrtRSI;
  if (gam->size[0] != A->size[0]) {
    if ((gam->size[0] == 1) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (gam->size[0] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)gam->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &gam_data[0], &incx_t, &A_data[0], &incy_t);
  }
  n1x = y + b_y;
  st.site = &tb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (beta0->size[0] != a_tmp->size[1]) {
    if ((a_tmp->size[1] == 1) || (beta0->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (a_tmp->size[1] < 1) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)a_tmp->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    y = ddot(&n_t, &B1_data[0], &incx_t, &beta0_data[0], &incy_t);
  }
  emxFree_real_T(&st, &a_tmp);
  st.site = &tb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (gam->size[0] != beta1->size[0]) {
    if ((gam->size[0] == 1) || (beta1->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (gam->size[0] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)gam->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &gam_data[0], &incx_t, &beta1_data[0], &incy_t);
  }
  st.site = &ub_emlrtRSI;
  B_inv = 1.0 / n1x;
  b_st.site = &bc_emlrtRSI;
  n1x = muDoubleScalarAbs(n1x);
  n1xinv = muDoubleScalarAbs(B_inv);
  rc = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
    c_st.site = &cc_emlrtRSI;
    warning(&c_st);
  } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
    c_st.site = &dc_emlrtRSI;
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
    emlrtAssign(&c_y, m);
    e_y = NULL;
    m = emlrtCreateDoubleScalar(rc);
    emlrtAssign(&e_y, m);
    d_st.site = &ke_emlrtRSI;
    c_emlrt_marshallIn(&d_st, b_sprintf(&d_st, c_y, e_y, &n_emlrtMCI),
                       "<output of sprintf>", str);
    c_st.site = &dc_emlrtRSI;
    b_warning(&c_st, str);
  }
  emxInit_real_T(&b_st, &d_y, 2, &yb_emlrtRTEI);
  /*  number of columns */
  /*  레짐 1 */
  n1x = 1.0 / sig2;
  st.site = &vb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if ((X->size[0] == 0) || (X->size[1] == 0)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = X->size[1];
    d_y->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&b_st, d_y, i, &qb_emlrtRTEI);
    y_data = d_y->data;
    loop_ub = X->size[1] * X->size[1];
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = 0.0;
    }
  } else {
    c_st.site = &fc_emlrtRSI;
    d_st.site = &gc_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    n1xinv = 1.0;
    rc = 0.0;
    incx_t = (ptrdiff_t)X->size[1];
    n_t = (ptrdiff_t)X->size[1];
    incy_t = (ptrdiff_t)X->size[0];
    lda_t = (ptrdiff_t)X->size[0];
    ldb_t = (ptrdiff_t)X->size[0];
    ldc_t = (ptrdiff_t)X->size[1];
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = X->size[1];
    d_y->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&d_st, d_y, i, &tb_emlrtRTEI);
    y_data = d_y->data;
    dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &n1xinv, &X_data[0],
          &lda_t, &X_data[0], &ldb_t, &rc, &y_data[0], &ldc_t);
  }
  emxInit_real_T(&b_st, &sig2inv, 2, &rb_emlrtRTEI);
  i = sig2inv->size[0] * sig2inv->size[1];
  sig2inv->size[0] = d_y->size[0];
  sig2inv->size[1] = d_y->size[1];
  emxEnsureCapacity_real_T(sp, sig2inv, i, &rb_emlrtRTEI);
  B1_data = sig2inv->data;
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    B1_data[i] = n1x * y_data[i] + B_inv;
  }
  st.site = &wb_emlrtRSI;
  inv(&st, sig2inv, B1);
  B1_data = B1->data;
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = X->size[1];
  d_y->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, d_y, i, &sb_emlrtRTEI);
  y_data = d_y->data;
  loop_ub = X->size[0];
  emxFree_real_T(sp, &sig2inv);
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = X->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      y_data[i1 + d_y->size[0] * i] = n1x * X_data[i + X->size[0] * i1];
    }
  }
  st.site = &xb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (Y->size[0] != d_y->size[1]) {
    if (((d_y->size[0] == 1) && (d_y->size[1] == 1)) || (Y->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ec_emlrtRSI;
  b_mtimes(&b_st, d_y, Y, A);
  A_data = A->data;
  B_inv *= y + b_y;
  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    A_data[i] += B_inv;
  }
  st.site = &yb_emlrtRSI;
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = B1->size[0];
  d_y->size[1] = B1->size[1];
  emxEnsureCapacity_real_T(&st, d_y, i, &ub_emlrtRTEI);
  y_data = d_y->data;
  loop_ub = B1->size[0] * B1->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = B1_data[i];
  }
  b_st.site = &bd_emlrtRSI;
  cholesky(&b_st, d_y);
  y_data = d_y->data;
  st.site = &yb_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (A->size[0] != B1->size[1]) {
    if (((B1->size[0] == 1) && (B1->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ec_emlrtRSI;
  b_mtimes(&b_st, B1, A, beta);
  B1_data = beta->data;
  st.site = &yb_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  randn(&b_st, X->size[1], A);
  A_data = A->data;
  b_st.site = &ac_emlrtRSI;
  if (d_y->size[0] != A->size[0]) {
    if (((d_y->size[0] == 1) && (d_y->size[1] == 1)) || (A->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ec_emlrtRSI;
  emxInit_real_T(&b_st, &r, 1, &xb_emlrtRTEI);
  if ((d_y->size[0] == 0) || (d_y->size[1] == 0) || (A->size[0] == 0)) {
    i = r->size[0];
    r->size[0] = d_y->size[1];
    emxEnsureCapacity_real_T(&b_st, r, i, &vb_emlrtRTEI);
    r1 = r->data;
    loop_ub = d_y->size[1];
    for (i = 0; i < loop_ub; i++) {
      r1[i] = 0.0;
    }
  } else {
    c_st.site = &fc_emlrtRSI;
    d_st.site = &gc_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    n1xinv = 1.0;
    rc = 0.0;
    incx_t = (ptrdiff_t)d_y->size[1];
    n_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)d_y->size[0];
    lda_t = (ptrdiff_t)d_y->size[0];
    ldb_t = (ptrdiff_t)A->size[0];
    ldc_t = (ptrdiff_t)d_y->size[1];
    i = r->size[0];
    r->size[0] = d_y->size[1];
    emxEnsureCapacity_real_T(&d_st, r, i, &tb_emlrtRTEI);
    r1 = r->data;
    dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &incy_t, &n1xinv, &y_data[0],
          &lda_t, &A_data[0], &ldb_t, &rc, &r1[0], &ldc_t);
  }
  emxFree_real_T(&b_st, &d_y);
  emxFree_real_T(&b_st, &A);
  if ((beta->size[0] != r->size[0]) &&
      ((beta->size[0] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], r->size[0], &d_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (beta->size[0] == r->size[0]) {
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      B1_data[i] += r1[i];
    }
  } else {
    st.site = &yb_emlrtRSI;
    plus(&st, beta, r);
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_gam(const emlrtStack *sp, const emxArray_real_T *beta,
                    const emxArray_real_T *beta0, const emxArray_real_T *B0,
                    const emxArray_real_T *beta1, const emxArray_real_T *B1,
                    emxArray_real_T *gam)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *B0_data;
  const real_T *B1_data;
  const real_T *beta_data;
  real_T b_x;
  real_T p1j;
  real_T p1j_tmp;
  real_T sig2vec;
  real_T x;
  real_T *gam_data;
  int32_T i;
  int32_T j;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B1_data = B1->data;
  B0_data = B0->data;
  beta_data = beta->data;
  /*  */
  i = gam->size[0];
  gam->size[0] = beta->size[0];
  emxEnsureCapacity_real_T(sp, gam, i, &oc_emlrtRTEI);
  gam_data = gam->data;
  i = beta->size[0];
  for (j = 0; j < i; j++) {
    if (j + 1 > beta0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, beta0->size[0], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &qd_emlrtRSI;
    if (j + 1 > beta->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, beta->size[0], &o_emlrtBCI, &st);
    }
    if (j + 1 > B0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, B0->size[0], &s_emlrtBCI, &st);
    }
    if (j + 1 > B0->size[1]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, B0->size[1], &t_emlrtBCI, &st);
    }
    sig2vec = B0_data[j + B0->size[0] * j];
    /*  log pdf of normal */
    /*  x = normal variates */
    /*  mu = vector of means */
    /*  sig2vec = vector of variances */
    b_st.site = &td_emlrtRSI;
    x = 2.0 * sig2vec * 3.1415926535897931;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
    }
    x = muDoubleScalarLog(x);
    if (j + 1 > beta1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, beta1->size[0], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &rd_emlrtRSI;
    if (j + 1 > beta->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, beta->size[0], &q_emlrtBCI, &st);
    }
    if (j + 1 > B1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, B1->size[0], &u_emlrtBCI, &st);
    }
    if (j + 1 > B1->size[1]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, B1->size[1], &v_emlrtBCI, &st);
    }
    p1j = B1_data[j + B1->size[0] * j];
    /*  log pdf of normal */
    /*  x = normal variates */
    /*  mu = vector of means */
    /*  sig2vec = vector of variances */
    b_st.site = &td_emlrtRSI;
    b_x = 2.0 * p1j * 3.1415926535897931;
    if (b_x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
    }
    b_x = muDoubleScalarLog(b_x);
    p1j_tmp = 0.5 * (beta_data[j] * beta_data[j]);
    p1j = muDoubleScalarExp(-0.5 * b_x - p1j_tmp / p1j);
    if (j + 1 > gam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, gam->size[0], &w_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &sd_emlrtRSI;
    gam_data[j] =
        (b_rand() <
         p1j / (muDoubleScalarExp(-0.5 * x - p1j_tmp / sig2vec) + p1j));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
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

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
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

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"disp", true, location);
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[12])
{
  static const int32_T iv[2] = {1, 12};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 4, &pArrays[0],
                               (const char_T *)"feval", true, location);
}

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"format", true, location);
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
  emxInit_real_T(sp, &b_Y, 1, &sc_emlrtRTEI);
  i = b_Y->size[0];
  if (ehat->size[0] == 1) {
    b_Y->size[0] = Y->size[0];
  } else {
    b_Y->size[0] = ehat->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Y, i, &sc_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, ehat, i, &sc_emlrtRTEI);
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
  emxInit_real_T(sp, &b_beta, 1, &rc_emlrtRTEI);
  i = b_beta->size[0];
  if (r1->size[0] == 1) {
    b_beta->size[0] = beta->size[0];
  } else {
    b_beta->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_beta, i, &rc_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, beta, i, &rc_emlrtRTEI);
  beta_data = beta->data;
  loop_ub = b_beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = b_beta_data[i];
  }
  emxFree_real_T(sp, &b_beta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void times(const emlrtStack *sp, emxArray_real_T *beta,
                  const emxArray_real_T *gam)
{
  emxArray_real_T *b_beta;
  const real_T *gam_data;
  real_T *b_beta_data;
  real_T *beta_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  gam_data = gam->data;
  beta_data = beta->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta, 1, &qc_emlrtRTEI);
  i = b_beta->size[0];
  if (gam->size[0] == 1) {
    b_beta->size[0] = beta->size[0];
  } else {
    b_beta->size[0] = gam->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_beta, i, &qc_emlrtRTEI);
  b_beta_data = b_beta->data;
  stride_0_0 = (beta->size[0] != 1);
  stride_1_0 = (gam->size[0] != 1);
  if (gam->size[0] == 1) {
    loop_ub = beta->size[0];
  } else {
    loop_ub = gam->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_beta_data[i] = beta_data[i * stride_0_0] * gam_data[i * stride_1_0];
  }
  i = beta->size[0];
  beta->size[0] = b_beta->size[0];
  emxEnsureCapacity_real_T(sp, beta, i, &qc_emlrtRTEI);
  beta_data = beta->data;
  loop_ub = b_beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_data[i] = b_beta_data[i];
  }
  emxFree_real_T(sp, &b_beta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Vari_Selection(const emlrtStack *sp, const emxArray_real_T *Y,
                    const emxArray_real_T *X, real_T n0, real_T n1,
                    real_T alpha0, real_T delta0, const real_T IG0[2],
                    const real_T IG1[2], char_T forecast,
                    const emxArray_real_T *x_f, struct0_T *Output)
{
  static const int32_T iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 23};
  static const char_T cv1[38] = {
      'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n', 'g', ' ', 't', 'h',
      'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ', 'P', 'l',
      'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.'};
  static const char_T b_u[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv3[12] = {'s', 'i', 'g', '2', '_',  '0',
                                 ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv4[12] = {'s', 'i', 'g', '2', '_',  '1',
                                 ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv5[12] = {'s', 'i', 'g', 'm', 'a',  '2',
                                 ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv2[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T u[6] = {'s', 'h', 'o', 'r', 't', 'G'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *B0;
  emxArray_real_T *B1;
  emxArray_real_T *Gam;
  emxArray_real_T *b_B1;
  emxArray_real_T *b_beta;
  emxArray_real_T *beta;
  emxArray_real_T *beta0;
  emxArray_real_T *betam;
  emxArray_real_T *gam;
  emxArray_real_T *sig2m;
  emxArray_real_T *yfm;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T b0;
  real_T b1;
  real_T n;
  real_T sig2;
  real_T *B1_data;
  real_T *Gam_data;
  real_T *beta0_data;
  real_T *beta_data;
  real_T *betam_data;
  real_T *gam_data;
  real_T *sig2m_data;
  real_T *yfm_data;
  int32_T iv2[2];
  int32_T sizes[2];
  int32_T Is_forecasting;
  int32_T b_i;
  int32_T i;
  int32_T input_sizes_idx_1;
  int32_T iter;
  int32_T k;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T *r2;
  char_T cv[37];
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 6, m, &u[0]);
  emlrtAssign(&y, m);
  st.site = &ce_emlrtRSI;
  format(&st, y, &emlrtMCI);
  st.site = &emlrtRSI;
  b_st.site = &q_emlrtRSI;
  if (Y->size[0] != 0) {
    input_sizes_idx_1 = Y->size[0];
  } else if ((X->size[0] != 0) && (X->size[1] != 0)) {
    input_sizes_idx_1 = X->size[0];
  } else {
    input_sizes_idx_1 = 0;
    if (X->size[0] > 0) {
      input_sizes_idx_1 = X->size[0];
    }
  }
  c_st.site = &r_emlrtRSI;
  if ((Y->size[0] != input_sizes_idx_1) && (Y->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((X->size[0] != input_sizes_idx_1) &&
      ((X->size[0] != 0) && (X->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (input_sizes_idx_1 == 0);
  if (empty_non_axis_sizes || (Y->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
    sizes[1] = X->size[1];
  } else {
    sizes[1] = 0;
  }
  emxInit_real_T(&b_st, &beta0, 1, &q_emlrtRTEI);
  input_sizes_idx_1 += sizes[1];
  /*  number of columns */
  if (input_sizes_idx_1 - 1 < 0) {
    emlrtNonNegativeCheckR2012b(input_sizes_idx_1 - 1, &e_emlrtDCI,
                                (emlrtCTX)sp);
  }
  i = beta0->size[0];
  beta0->size[0] = input_sizes_idx_1 - 1;
  emxEnsureCapacity_real_T(sp, beta0, i, &q_emlrtRTEI);
  beta0_data = beta0->data;
  if (input_sizes_idx_1 - 1 < 0) {
    emlrtNonNegativeCheckR2012b(input_sizes_idx_1 - 1, &e_emlrtDCI,
                                (emlrtCTX)sp);
  }
  loop_ub = input_sizes_idx_1 - 1;
  for (i = 0; i < loop_ub; i++) {
    beta0_data[i] = 0.0;
  }
  n = n0 + n1;
  /*  number of columns */
  k = X->size[1];
  if (forecast == 'Y') {
    Is_forecasting = 1;
    /*   예측하기 */
  } else {
    Is_forecasting = 0;
    /*  예측 안하기 */
  }
  /*  초기값 설정 */
  if (alpha0 > 2.0) {
    sig2 = delta0 / alpha0;
  } else {
    st.site = &b_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    /*  gauss function */
    c_st.site = &s_emlrtRSI;
    b0 = b_std(&c_st, Y);
    b_st.site = &mb_emlrtRSI;
    c_st.site = &nb_emlrtRSI;
    sig2 = b0 * b0;
  }
  emxInit_real_T(sp, &B0, 2, &fb_emlrtRTEI);
  b0 = IG0[1] / IG0[0];
  st.site = &c_emlrtRSI;
  eye(&st, X->size[1], B0);
  beta0_data = B0->data;
  loop_ub = B0->size[0] * B0->size[1];
  for (i = 0; i < loop_ub; i++) {
    beta0_data[i] *= b0;
  }
  emxInit_real_T(sp, &B1, 2, &gb_emlrtRTEI);
  b0 = IG1[1] / IG1[0];
  st.site = &d_emlrtRSI;
  eye(&st, X->size[1], B1);
  B1_data = B1->data;
  loop_ub = B1->size[0] * B1->size[1];
  for (i = 0; i < loop_ub; i++) {
    B1_data[i] *= b0;
  }
  emxInit_real_T(sp, &gam, 1, &r_emlrtRTEI);
  b0 = 0.0;
  b1 = 0.0;
  i = gam->size[0];
  gam->size[0] = X->size[1];
  emxEnsureCapacity_real_T(sp, gam, i, &r_emlrtRTEI);
  gam_data = gam->data;
  loop_ub = X->size[1];
  for (i = 0; i < loop_ub; i++) {
    gam_data[i] = 1.0;
  }
  /*  전부 다 중요한 변수라고 놓고 시작하는 것 */
  /*  저장할 방 */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &g_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Gam, 2, &hb_emlrtRTEI);
  b_i = Gam->size[0] * Gam->size[1];
  Gam->size[0] = (int32_T)n;
  Gam->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, Gam, b_i, &s_emlrtRTEI);
  Gam_data = Gam->data;
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &betam, 2, &ib_emlrtRTEI);
  emxInit_real_T(sp, &sig2m, 1, &u_emlrtRTEI);
  loop_ub_tmp = (int32_T)n;
  b_i = betam->size[0] * betam->size[1];
  betam->size[0] = loop_ub_tmp;
  betam->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, betam, b_i, &t_emlrtRTEI);
  betam_data = betam->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  b_i = sig2m->size[0];
  sig2m->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, sig2m, b_i, &u_emlrtRTEI);
  sig2m_data = sig2m->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    sig2m_data[b_i] = 0.0;
  }
  emxInit_real_T(sp, &yfm, 1, &v_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }
  b_i = yfm->size[0];
  yfm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, yfm, b_i, &v_emlrtRTEI);
  yfm_data = yfm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    yfm_data[i] = 0.0;
  }
  /*  MCMC 시작 */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &beta, 1, &jb_emlrtRTEI);
  emxInit_int32_T(sp, &r, 1, &kb_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 1, &lb_emlrtRTEI);
  emxInit_real_T(sp, &b_beta, 1, &db_emlrtRTEI);
  emxInit_real_T(sp, &b_B1, 2, &w_emlrtRTEI);
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
      st.site = &ee_emlrtRSI;
      clc(&st, &f_emlrtMCI);
      for (i = 0; i < 37; i++) {
        cv[i] = '=';
      }
      st.site = &xd_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, cv), &g_emlrtMCI);
      st.site = &e_emlrtRSI;
      b_st.site = &rb_emlrtRSI;
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 23, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      c_st.site = &ae_emlrtRSI;
      emlrt_marshallIn(&c_st,
                       feval(&c_st, c_emlrt_marshallOut(&c_st, cv2),
                             d_emlrt_marshallOut(1.0), c_y,
                             d_emlrt_marshallOut((real_T)iter + 1.0),
                             &k_emlrtMCI),
                       "<output of feval>");
      for (i = 0; i < 37; i++) {
        cv[i] = '=';
      }
      st.site = &wd_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, cv), &h_emlrtMCI);
      e_y = NULL;
      m = emlrtCreateString1(' ');
      emlrtAssign(&e_y, m);
      st.site = &ie_emlrtRSI;
      disp(&st, e_y, &i_emlrtMCI);
      st.site = &f_emlrtRSI;
      b_st.site = &rb_emlrtRSI;
      c_st.site = &ae_emlrtRSI;
      d_st.site = &be_emlrtRSI;
      emlrt_marshallIn(&c_st,
                       feval(&c_st, c_emlrt_marshallOut(&c_st, cv2),
                             d_emlrt_marshallOut(1.0),
                             e_emlrt_marshallOut(&d_st, cv3),
                             d_emlrt_marshallOut(b0), &k_emlrtMCI),
                       "<output of feval>");
      st.site = &g_emlrtRSI;
      b_st.site = &rb_emlrtRSI;
      c_st.site = &ae_emlrtRSI;
      d_st.site = &be_emlrtRSI;
      emlrt_marshallIn(&c_st,
                       feval(&c_st, c_emlrt_marshallOut(&c_st, cv2),
                             d_emlrt_marshallOut(1.0),
                             e_emlrt_marshallOut(&d_st, cv4),
                             d_emlrt_marshallOut(b1), &k_emlrtMCI),
                       "<output of feval>");
      f_y = NULL;
      m = emlrtCreateString1(' ');
      emlrtAssign(&f_y, m);
      st.site = &he_emlrtRSI;
      disp(&st, f_y, &j_emlrtMCI);
      st.site = &h_emlrtRSI;
      b_st.site = &rb_emlrtRSI;
      c_st.site = &ae_emlrtRSI;
      d_st.site = &be_emlrtRSI;
      emlrt_marshallIn(&c_st,
                       feval(&c_st, c_emlrt_marshallOut(&c_st, cv2),
                             d_emlrt_marshallOut(1.0),
                             e_emlrt_marshallOut(&d_st, cv5),
                             d_emlrt_marshallOut(sig2), &k_emlrtMCI),
                       "<output of feval>");
    }
    /*   Step 1 : beta 샘플링 */
    i = b_B1->size[0] * b_B1->size[1];
    b_B1->size[0] = B1->size[0];
    b_B1->size[1] = B1->size[1];
    emxEnsureCapacity_real_T(sp, b_B1, i, &w_emlrtRTEI);
    beta0_data = b_B1->data;
    loop_ub = B1->size[0] * B1->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      beta0_data[i] = B1_data[i];
    }
    st.site = &i_emlrtRSI;
    Gen_beta_VS(&st, Y, X, sig2, gam, beta0, B0, beta0, b_B1, beta);
    beta_data = beta->data;
    if (iter + 1 > betam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, betam->size[0], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv2[0] = 1;
    iv2[1] = betam->size[1];
    sizes[0] = 1;
    sizes[1] = beta->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv2[0], 2, &sizes[0], 2, &b_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      betam_data[iter + betam->size[0] * i] = beta_data[i];
    }
    /*   Step 2 : sig2 샘플링 */
    st.site = &j_emlrtRSI;
    sig2 = Gen_Sigma(&st, Y, X, beta, alpha0, delta0);
    if ((int32_T)(iter + 1U) > sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, sig2m->size[0],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    sig2m_data[iter] = sig2;
    /*   Step 3 : gam 샘플링 */
    st.site = &k_emlrtRSI;
    Gen_gam(&st, beta, beta0, B0, beta0, B1, gam);
    gam_data = gam->data;
    if (iter + 1 > Gam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Gam->size[0], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv2[0] = 1;
    iv2[1] = Gam->size[1];
    sizes[0] = 1;
    sizes[1] = gam->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv2[0], 2, &sizes[0], 2, &c_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = gam->size[0];
    for (i = 0; i < loop_ub; i++) {
      Gam_data[iter + Gam->size[0] * i] = gam_data[i];
    }
    /*  Step 4 : B0, B1 샘플링 */
    loop_ub = gam->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if ((gam_data[b_i] == 0.0) && (b_i + 1 > beta->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, beta->size[0], &k_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    loop_ub = gam->size[0] - 1;
    input_sizes_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (gam_data[b_i] == 0.0) {
        input_sizes_idx_1++;
      }
    }
    i = r->size[0];
    r->size[0] = input_sizes_idx_1;
    emxEnsureCapacity_int32_T(sp, r, i, &cb_emlrtRTEI);
    r2 = r->data;
    input_sizes_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (gam_data[b_i] == 0.0) {
        r2[input_sizes_idx_1] = b_i + 1;
        input_sizes_idx_1++;
      }
    }
    loop_ub = r->size[0];
    i = b_beta->size[0];
    b_beta->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, b_beta, i, &db_emlrtRTEI);
    beta0_data = b_beta->data;
    for (i = 0; i < loop_ub; i++) {
      beta0_data[i] = beta_data[r2[i] - 1];
    }
    st.site = &l_emlrtRSI;
    b0 = Gen_Sigma_B(&st, b_beta, IG0[0], IG0[1]);
    st.site = &m_emlrtRSI;
    eye(&st, k, B0);
    beta0_data = B0->data;
    loop_ub = B0->size[0] * B0->size[1];
    for (i = 0; i < loop_ub; i++) {
      beta0_data[i] *= b0;
    }
    loop_ub = gam->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if ((gam_data[b_i] == 1.0) && (b_i + 1 > beta->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, beta->size[0], &l_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    loop_ub = gam->size[0] - 1;
    input_sizes_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (gam_data[b_i] == 1.0) {
        input_sizes_idx_1++;
      }
    }
    i = r1->size[0];
    r1->size[0] = input_sizes_idx_1;
    emxEnsureCapacity_int32_T(sp, r1, i, &cb_emlrtRTEI);
    r2 = r1->data;
    input_sizes_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (gam_data[b_i] == 1.0) {
        r2[input_sizes_idx_1] = b_i + 1;
        input_sizes_idx_1++;
      }
    }
    loop_ub = r1->size[0];
    i = b_beta->size[0];
    b_beta->size[0] = r1->size[0];
    emxEnsureCapacity_real_T(sp, b_beta, i, &eb_emlrtRTEI);
    beta0_data = b_beta->data;
    for (i = 0; i < loop_ub; i++) {
      beta0_data[i] = beta_data[r2[i] - 1];
    }
    st.site = &n_emlrtRSI;
    b1 = Gen_Sigma_B(&st, b_beta, IG1[0], IG1[1]);
    st.site = &o_emlrtRSI;
    eye(&st, k, B1);
    B1_data = B1->data;
    loop_ub = B1->size[0] * B1->size[1];
    for (i = 0; i < loop_ub; i++) {
      B1_data[i] *= b1;
    }
    /*   Step 5 : 예측하기 */
    if (Is_forecasting == 1) {
      if ((beta->size[0] != gam->size[0]) &&
          ((beta->size[0] != 1) && (gam->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(beta->size[0], gam->size[0], &emlrtECI,
                                    (emlrtCTX)sp);
      }
      if (beta->size[0] == gam->size[0]) {
        loop_ub = beta->size[0];
        for (i = 0; i < loop_ub; i++) {
          beta_data[i] *= gam_data[i];
        }
      } else {
        st.site = &le_emlrtRSI;
        times(&st, beta, gam);
      }
      st.site = &p_emlrtRSI;
      b_st.site = &ac_emlrtRSI;
      dynamic_size_checks(&b_st, x_f, beta, x_f->size[0], beta->size[0]);
      st.site = &p_emlrtRSI;
      if (sig2 < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      if ((int32_T)(iter + 1U) > yfm->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, yfm->size[0],
                                      &n_emlrtBCI, (emlrtCTX)sp);
      }
      st.site = &p_emlrtRSI;
      yfm_data[iter] = mtimes(x_f, beta) + muDoubleScalarSqrt(sig2) * b_randn();
      /*  x_f : 예측하고자 하는 지점에서의 설명변수 값 */
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_B1);
  emxFree_real_T(sp, &b_beta);
  emxFree_int32_T(sp, &r1);
  emxFree_int32_T(sp, &r);
  emxFree_real_T(sp, &beta);
  emxFree_real_T(sp, &gam);
  emxFree_real_T(sp, &B1);
  emxFree_real_T(sp, &B0);
  emxFree_real_T(sp, &beta0);
  st.site = &de_emlrtRSI;
  clc(&st, &b_emlrtMCI);
  b_y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m);
  st.site = &ge_emlrtRSI;
  disp(&st, b_y, &c_emlrtMCI);
  st.site = &yd_emlrtRSI;
  disp(&st, b_emlrt_marshallOut(&st, cv1), &d_emlrtMCI);
  d_y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&d_y, m);
  st.site = &fe_emlrtRSI;
  disp(&st, d_y, &e_emlrtMCI);
  if (n0 + 1.0 > n) {
    i = 0;
    b_i = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, betam->size[0],
                                    &b_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, betam->size[0], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_i = loop_ub_tmp;
  }
  loop_ub = betam->size[1];
  input_sizes_idx_1 = b_i - i;
  b_i = Output->bm->size[0] * Output->bm->size[1];
  Output->bm->size[0] = input_sizes_idx_1;
  Output->bm->size[1] = betam->size[1];
  emxEnsureCapacity_real_T(sp, Output->bm, b_i, &x_emlrtRTEI);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    for (k = 0; k < input_sizes_idx_1; k++) {
      Output->bm->data[k + Output->bm->size[0] * b_i] =
          betam_data[(i + k) + betam->size[0] * b_i];
    }
  }
  emxFree_real_T(sp, &betam);
  /*  번인 버리기 */
  if (n0 + 1.0 > n) {
    i = 0;
    b_i = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, sig2m->size[0],
                                    &d_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2m->size[0], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_i = loop_ub_tmp;
  }
  loop_ub = b_i - i;
  b_i = Output->sigma2m->size[0];
  Output->sigma2m->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->sigma2m, b_i, &y_emlrtRTEI);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    Output->sigma2m->data[b_i] = sig2m_data[i + b_i];
  }
  emxFree_real_T(sp, &sig2m);
  /*  번인 버리기 */
  if (n0 + 1.0 > n) {
    i = 0;
    b_i = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Gam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Gam->size[0],
                                    &g_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Gam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Gam->size[0], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_i = loop_ub_tmp;
  }
  loop_ub = Gam->size[1];
  input_sizes_idx_1 = b_i - i;
  b_i = Output->gammam->size[0] * Output->gammam->size[1];
  Output->gammam->size[0] = input_sizes_idx_1;
  Output->gammam->size[1] = Gam->size[1];
  emxEnsureCapacity_real_T(sp, Output->gammam, b_i, &ab_emlrtRTEI);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    for (k = 0; k < input_sizes_idx_1; k++) {
      Output->gammam->data[k + Output->gammam->size[0] * b_i] =
          Gam_data[(i + k) + Gam->size[0] * b_i];
    }
  }
  emxFree_real_T(sp, &Gam);
  /*  번인 버리기 */
  if (n0 + 1.0 > n) {
    i = 0;
    loop_ub_tmp = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > yfm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, yfm->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > yfm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, yfm->size[0], &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  loop_ub = loop_ub_tmp - i;
  b_i = Output->yfm->size[0];
  Output->yfm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->yfm, b_i, &bb_emlrtRTEI);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    Output->yfm->data[b_i] = yfm_data[i + b_i];
  }
  emxFree_real_T(sp, &yfm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Vari_Selection.c) */

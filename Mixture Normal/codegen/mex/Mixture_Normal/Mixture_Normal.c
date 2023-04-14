/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Mixture_Normal.c
 *
 * Code generation for function 'Mixture_Normal'
 *
 */

/* Include files */
#include "Mixture_Normal.h"
#include "Gen_Omega.h"
#include "Gen_S.h"
#include "Gen_beta.h"
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_mexutil.h"
#include "Mixture_Normal_types.h"
#include "cholmod.h"
#include "eml_mtimes_helper.h"
#include "inv.h"
#include "kron.h"
#include "mtimes.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "vec.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    15,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    24,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    27,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    38,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    44,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    48,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    50,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    53,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo
    k_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI =
    {
        5,           /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI =
    {
        6,           /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI =
    {
        9,           /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI =
    {
        11,          /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI =
    {
        12,          /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    7,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo nf_emlrtRSI = {
    8,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo of_emlrtRSI = {
    9,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtMCInfo emlrtMCI = {
    6,                /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    22,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    23,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    25,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    28,               /* lineNo */
    13,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    29,               /* lineNo */
    13,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    30,               /* lineNo */
    13,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    31,               /* lineNo */
    13,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    32,               /* lineNo */
    13,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    33,               /* lineNo */
    13,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
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

static emlrtBCInfo emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    13,               /* lineNo */
    17,               /* colNo */
    "betam",          /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    18,               /* lineNo */
    12,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    26,               /* lineNo */
    17,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    30,               /* lineNo */
    26,               /* colNo */
    "betam",          /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    32,               /* lineNo */
    31,               /* colNo */
    "Omegam",         /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    41,               /* lineNo */
    13,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    44,               /* lineNo */
    40,               /* colNo */
    "Omegam",         /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    44,               /* lineNo */
    51,               /* colNo */
    "bm_",            /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    44,               /* lineNo */
    64,               /* colNo */
    "varm_",          /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    45,               /* lineNo */
    18,               /* colNo */
    "betam",          /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,               /* nDims */
    45,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    48,               /* lineNo */
    40,               /* colNo */
    "betam",          /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    49,               /* lineNo */
    22,               /* colNo */
    "Omegam",         /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,               /* nDims */
    49,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    51,               /* lineNo */
    45,               /* colNo */
    "vec_Omega",      /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    54,               /* lineNo */
    37,               /* colNo */
    "vec_betam",      /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    54,               /* lineNo */
    16,               /* colNo */
    "Post_betam",     /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,               /* nDims */
    54,               /* lineNo */
    5,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    58,               /* lineNo */
    25,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    58,               /* lineNo */
    25,               /* colNo */
    "Post_betam",     /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    58,               /* lineNo */
    30,               /* colNo */
    "Post_betam",     /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    39,               /* lineNo */
    8,                /* colNo */
    "Sm",             /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,               /* nDims */
    39,               /* lineNo */
    5,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    59,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    59,               /* lineNo */
    9,                /* colNo */
    "Sm",             /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    59,               /* lineNo */
    14,               /* colNo */
    "Sm",             /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    51,               /* lineNo */
    21,               /* colNo */
    "Post_Omegam",    /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    51,               /* lineNo */
    30,               /* colNo */
    "Post_Omegam",    /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,               /* nDims */
    51,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtDCInfo c_emlrtDCI = {
    60,               /* lineNo */
    27,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    60,               /* lineNo */
    27,               /* colNo */
    "Post_Omegam",    /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    60,               /* lineNo */
    32,               /* colNo */
    "Post_Omegam",    /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtECInfo f_emlrtECI =
    {
        1,           /* nDims */
        5,           /* lineNo */
        6,           /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

static emlrtECInfo g_emlrtECI =
    {
        2,           /* nDims */
        5,           /* lineNo */
        6,           /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

static emlrtECInfo h_emlrtECI =
    {
        1,           /* nDims */
        10,          /* lineNo */
        16,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

static emlrtECInfo i_emlrtECI =
    {
        2,           /* nDims */
        10,          /* lineNo */
        16,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

static emlrtDCInfo d_emlrtDCI = {
    14,               /* lineNo */
    20,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    14,               /* lineNo */
    20,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    4                          /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    14,               /* lineNo */
    23,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    14,               /* lineNo */
    23,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    4                          /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    15,               /* lineNo */
    21,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    15,               /* lineNo */
    24,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    15,               /* lineNo */
    28,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    15,               /* lineNo */
    28,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    4                          /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    14,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    14,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    4                          /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    15,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    16,               /* lineNo */
    12,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    1                          /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    42,               /* lineNo */
    16,               /* colNo */
    "Y",              /* aName */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m", /* pName */
    0                          /* checkKind */
};

static emlrtRTEInfo w_emlrtRTEI = {
    12,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    14,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    15,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    16,               /* lineNo */
    6,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    62,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    63,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    53,               /* lineNo */
    17,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    1,                /* lineNo */
    19,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    64,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    53,               /* lineNo */
    5,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    42,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    54,               /* lineNo */
    27,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    44,               /* lineNo */
    29,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    44,               /* lineNo */
    44,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    44,               /* lineNo */
    55,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI =
    {
        5,           /* lineNo */
        15,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    30,               /* lineNo */
    18,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI =
    {
        5,           /* lineNo */
        27,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    32,               /* lineNo */
    18,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    9,                                                              /* lineNo */
    5,                                                              /* colNo */
    "randwishart",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    9,                                                              /* lineNo */
    7,                                                              /* colNo */
    "randwishart",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    50,               /* lineNo */
    9,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    51,               /* lineNo */
    35,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    13,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    16,               /* lineNo */
    1,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    38,               /* lineNo */
    5,                /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    42,               /* lineNo */
    16,               /* colNo */
    "Mixture_Normal", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI =
    {
        6,           /* lineNo */
        1,           /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

static emlrtRSInfo yg_emlrtRSI = {
    6,                /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo ah_emlrtRSI = {
    22,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo bh_emlrtRSI = {
    33,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo ch_emlrtRSI = {
    32,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = {
    31,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo eh_emlrtRSI = {
    30,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo fh_emlrtRSI = {
    29,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo gh_emlrtRSI = {
    28,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo hh_emlrtRSI = {
    25,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo ih_emlrtRSI = {
    23,               /* lineNo */
    "Mixture_Normal", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
    "Normal/Mixture_Normal.m" /* pathName */
};

static emlrtRSInfo
    kh_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

/* Function Declarations */
static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location);

/* Function Definitions */
static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"disp", true, location);
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

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"format", true, location);
}

void Mixture_Normal(const emlrtStack *sp, const emxArray_real_T *Y, real_T M,
                    const emxArray_real_T *bm_, const emxArray_real_T *varm_,
                    emxArray_real_T *Omegam, real_T n0, real_T n1,
                    struct0_T *Output)
{
  static const int32_T iv[2] = {1, 6};
  static const int32_T iv2[2] = {1, 37};
  static const int32_T iv3[2] = {1, 7};
  static const int32_T iv4[2] = {1, 23};
  static const int32_T iv5[2] = {1, 37};
  static const int32_T iv6[2] = {1, 7};
  static const int32_T iv7[2] = {1, 13};
  static const int32_T iv8[2] = {1, 8};
  static const int32_T iv9[2] = {1, 12};
  static const char_T d_u[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T e_u[13] = {'[', 'G', 'r', 'u', 'o',  'p', ' ',
                                 '%', 'G', ']', ' ', '\\', 'n'};
  static const char_T g_u[12] = {'[', 'v', 'a', 'r', 'i', 'a',
                                 'n', 'c', 'e', ':', ' ', ']'};
  static const char_T f_u[8] = {'[', 'm', 'e', 'a', 'n', ':', ' ', ']'};
  static const char_T c_u[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T u[6] = {'s', 'h', 'o', 'r', 't', 'G'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_real_T *Post_Omegam;
  emxArray_real_T *Post_betam;
  emxArray_real_T *S;
  emxArray_real_T *Sm;
  emxArray_real_T *Ym;
  emxArray_real_T *b_Omegam;
  emxArray_real_T *b_betam;
  emxArray_real_T *b_bm_;
  emxArray_real_T *b_varm_;
  emxArray_real_T *beta;
  emxArray_real_T *betam;
  emxArray_real_T *ehat2;
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
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *y;
  const real_T *Y_data;
  const real_T *bm__data;
  const real_T *varm__data;
  real_T c;
  real_T d;
  real_T n;
  real_T *Omegam_data;
  real_T *Post_Omegam_data;
  real_T *Post_betam_data;
  real_T *S_data;
  real_T *Sm_data;
  real_T *Ym_data;
  real_T *beta_data;
  real_T *betam_data;
  int32_T c_Omegam[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T b_m;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T iter;
  int32_T loop_ub;
  int32_T trueCount;
  int32_T *r1;
  char_T b_u[37];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  Omegam_data = Omegam->data;
  varm__data = varm_->data;
  bm__data = bm_->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &betam, 2, &w_emlrtRTEI);
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 6, m, &u[0]);
  emlrtAssign(&y, m);
  st.site = &yg_emlrtRSI;
  format(&st, y, &emlrtMCI);
  /*  number of columns */
  n = n0 + n1;
  i = betam->size[0] * betam->size[1];
  betam->size[0] = bm_->size[0];
  betam->size[1] = bm_->size[1];
  emxEnsureCapacity_real_T(sp, betam, i, &w_emlrtRTEI);
  betam_data = betam->data;
  loop_ub = bm_->size[0] * bm_->size[1];
  for (i = 0; i < loop_ub; i++) {
    betam_data[i] = bm__data[i];
  }
  if (1 > bm_->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, bm_->size[1], &emlrtBCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Post_betam, 2, &x_emlrtRTEI);
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &e_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &d_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Post_betam->size[0] * Post_betam->size[1];
  Post_betam->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, Post_betam, i1, &x_emlrtRTEI);
  d = M * (real_T)Y->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &g_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &f_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Post_betam->size[0] * Post_betam->size[1];
  Post_betam->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, Post_betam, i1, &x_emlrtRTEI);
  Post_betam_data = Post_betam->data;
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, (emlrtCTX)sp);
  }
  d = M * (real_T)Y->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &m_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &l_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = (int32_T)n * (int32_T)d;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Post_betam_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &Post_Omegam, 3, &y_emlrtRTEI);
  st.site = &emlrtRSI;
  b_st.site = &i_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  c = (real_T)Y->size[1] * (real_T)Y->size[1];
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = (int32_T)n;
  i2 = Post_Omegam->size[0] * Post_Omegam->size[1] * Post_Omegam->size[2];
  Post_Omegam->size[0] = i1;
  emxEnsureCapacity_real_T(sp, Post_Omegam, i2, &y_emlrtRTEI);
  if (c != (int32_T)c) {
    emlrtIntegerCheckR2012b(c, &i_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = Post_Omegam->size[0] * Post_Omegam->size[1] * Post_Omegam->size[2];
  Post_Omegam->size[1] = (int32_T)c;
  emxEnsureCapacity_real_T(sp, Post_Omegam, i2, &y_emlrtRTEI);
  if (!(M >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M, &k_emlrtDCI, (emlrtCTX)sp);
  }
  d = (int32_T)muDoubleScalarFloor(M);
  if (M != d) {
    emlrtIntegerCheckR2012b(M, &j_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = Post_Omegam->size[0] * Post_Omegam->size[1] * Post_Omegam->size[2];
  i3 = (int32_T)M;
  Post_Omegam->size[2] = (int32_T)M;
  emxEnsureCapacity_real_T(sp, Post_Omegam, i2, &y_emlrtRTEI);
  Post_Omegam_data = Post_Omegam->data;
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }
  if (c != (int32_T)c) {
    emlrtIntegerCheckR2012b(c, &n_emlrtDCI, (emlrtCTX)sp);
  }
  if (M != d) {
    emlrtIntegerCheckR2012b(M, &n_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = i1 * (int32_T)c * (int32_T)M;
  for (i2 = 0; i2 < loop_ub; i2++) {
    Post_Omegam_data[i2] = 0.0;
  }
  if (i1 != i) {
    emlrtIntegerCheckR2012b(n, &o_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Sm, 2, &xb_emlrtRTEI);
  i = Sm->size[0] * Sm->size[1];
  Sm->size[0] = i1;
  Sm->size[1] = Y->size[0];
  emxEnsureCapacity_real_T(sp, Sm, i, &ab_emlrtRTEI);
  Sm_data = Sm->data;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= n - 1.0) {
    iv1[0] = 1;
    i4 = (int32_T)M;
  }
  emxInit_real_T(sp, &beta, 1, &wb_emlrtRTEI);
  emxInit_real_T(sp, &S, 1, &yb_emlrtRTEI);
  emxInit_real_T(sp, &Ym, 2, &hb_emlrtRTEI);
  emxInit_int32_T(sp, &r, 1, &ac_emlrtRTEI);
  emxInit_real_T(sp, &ehat2, 2, &bc_emlrtRTEI);
  emxInit_real_T(sp, &b_bm_, 1, &kb_emlrtRTEI);
  emxInit_real_T(sp, &b_varm_, 1, &lb_emlrtRTEI);
  emxInit_real_T(sp, &b_betam, 2, &nb_emlrtRTEI);
  emxInit_real_T(sp, &b_Omegam, 2, &pb_emlrtRTEI);
  for (iter = 0; iter < i1; iter++) {
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
      st.site = &ah_emlrtRSI;
      clc(&st, &b_emlrtMCI);
      for (i = 0; i < 37; i++) {
        b_u[i] = '=';
      }
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &ih_emlrtRSI;
      disp(&st, b_y, &c_emlrtMCI);
      st.site = &b_emlrtRSI;
      b_st.site = &k_emlrtRSI;
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      d_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&d_y, m);
      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&b_st, 23, m, &d_u[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      m = emlrtCreateDoubleScalar((real_T)iter + 1.0);
      emlrtAssign(&f_y, m);
      c_st.site = &kh_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, c_y, d_y, e_y, f_y, &k_emlrtMCI),
                       "<output of feval>");
      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &b_u[0]);
      emlrtAssign(&g_y, m);
      st.site = &hh_emlrtRSI;
      disp(&st, g_y, &d_emlrtMCI);
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                    &b_emlrtRTEI, (emlrtCTX)sp);
      for (b_i = 0; b_i < i3; b_i++) {
        st.site = &c_emlrtRSI;
        b_st.site = &k_emlrtRSI;
        h_y = NULL;
        m = emlrtCreateCharArray(2, &iv6[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &c_u[0]);
        emlrtAssign(&h_y, m);
        i_y = NULL;
        m = emlrtCreateDoubleScalar(1.0);
        emlrtAssign(&i_y, m);
        j_y = NULL;
        m = emlrtCreateCharArray(2, &iv7[0]);
        emlrtInitCharArrayR2013a(&b_st, 13, m, &e_u[0]);
        emlrtAssign(&j_y, m);
        k_y = NULL;
        m = emlrtCreateDoubleScalar((real_T)b_i + 1.0);
        emlrtAssign(&k_y, m);
        c_st.site = &kh_emlrtRSI;
        emlrt_marshallIn(&c_st, feval(&c_st, h_y, i_y, j_y, k_y, &k_emlrtMCI),
                         "<output of feval>");
        l_y = NULL;
        m = emlrtCreateString1(' ');
        emlrtAssign(&l_y, m);
        st.site = &gh_emlrtRSI;
        disp(&st, l_y, &e_emlrtMCI);
        m_y = NULL;
        m = emlrtCreateCharArray(2, &iv8[0]);
        emlrtInitCharArrayR2013a((emlrtCTX)sp, 8, m, &f_u[0]);
        emlrtAssign(&m_y, m);
        st.site = &fh_emlrtRSI;
        disp(&st, m_y, &f_emlrtMCI);
        if (((int32_T)(b_i + 1U) < 1) ||
            ((int32_T)(b_i + 1U) > betam->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, betam->size[1],
                                        &b_emlrtBCI, (emlrtCTX)sp);
        }
        loop_ub = betam->size[0];
        i = b_betam->size[0] * b_betam->size[1];
        b_betam->size[0] = 1;
        b_betam->size[1] = betam->size[0];
        emxEnsureCapacity_real_T(sp, b_betam, i, &nb_emlrtRTEI);
        beta_data = b_betam->data;
        for (i = 0; i < loop_ub; i++) {
          beta_data[i] = betam_data[i + betam->size[0] * b_i];
        }
        st.site = &eh_emlrtRSI;
        disp(&st, emlrt_marshallOut(b_betam), &g_emlrtMCI);
        n_y = NULL;
        m = emlrtCreateCharArray(2, &iv9[0]);
        emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &g_u[0]);
        emlrtAssign(&n_y, m);
        st.site = &dh_emlrtRSI;
        disp(&st, n_y, &h_emlrtMCI);
        if (((int32_T)(b_i + 1U) < 1) ||
            ((int32_T)(b_i + 1U) > Omegam->size[2])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, Omegam->size[2],
                                        &c_emlrtBCI, (emlrtCTX)sp);
        }
        loop_ub = Omegam->size[0];
        b_loop_ub = Omegam->size[1];
        i = b_Omegam->size[0] * b_Omegam->size[1];
        b_Omegam->size[0] = Omegam->size[0];
        b_Omegam->size[1] = Omegam->size[1];
        emxEnsureCapacity_real_T(sp, b_Omegam, i, &pb_emlrtRTEI);
        beta_data = b_Omegam->data;
        for (i = 0; i < b_loop_ub; i++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            beta_data[i2 + b_Omegam->size[0] * i] =
                Omegam_data[(i2 + Omegam->size[0] * i) +
                            Omegam->size[0] * Omegam->size[1] * b_i];
          }
        }
        st.site = &ch_emlrtRSI;
        disp(&st, b_emlrt_marshallOut(b_Omegam), &i_emlrtMCI);
        o_y = NULL;
        m = emlrtCreateString1(' ');
        emlrtAssign(&o_y, m);
        st.site = &bh_emlrtRSI;
        disp(&st, o_y, &j_emlrtMCI);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    }
    /*     %% s ������ */
    st.site = &d_emlrtRSI;
    Gen_S(&st, Y, betam, Omegam, S);
    S_data = S->data;
    if (iter + 1 > Sm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Sm->size[0], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    c_Omegam[0] = 1;
    c_Omegam[1] = Sm->size[1];
    iv1[1] = S->size[0];
    emlrtSubAssignSizeCheckR2012b(&c_Omegam[0], 2, &iv1[0], 2, &d_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = S->size[0];
    for (i = 0; i < loop_ub; i++) {
      Sm_data[iter + Sm->size[0] * i] = S_data[i];
    }
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                  &c_emlrtRTEI, (emlrtCTX)sp);
    for (b_m = 0; b_m < i4; b_m++) {
      loop_ub = S->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        if (S_data[b_i] == (real_T)b_m + 1.0) {
          trueCount++;
        }
      }
      i = r->size[0];
      r->size[0] = trueCount;
      emxEnsureCapacity_int32_T(sp, r, i, &eb_emlrtRTEI);
      r1 = r->data;
      trueCount = 0;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        if (S_data[b_i] == (real_T)b_m + 1.0) {
          r1[trueCount] = b_i + 1;
          trueCount++;
        }
      }
      loop_ub = Y->size[1];
      i = Ym->size[0] * Ym->size[1];
      Ym->size[0] = r->size[0];
      Ym->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(sp, Ym, i, &hb_emlrtRTEI);
      Ym_data = Ym->data;
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = r->size[0];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          if (r1[i2] > Y->size[0]) {
            emlrtDynamicBoundsCheckR2012b(r1[i2], 1, Y->size[0], &v_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          Ym_data[i2 + Ym->size[0] * i] = Y_data[(r1[i2] + Y->size[0] * i) - 1];
        }
      }
      /*         %% m ������ */
      if (((int32_T)(b_m + 1U) < 1) ||
          ((int32_T)(b_m + 1U) > Omegam->size[2])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_m + 1U), 1, Omegam->size[2],
                                      &d_emlrtBCI, (emlrtCTX)sp);
      }
      if (((int32_T)(b_m + 1U) < 1) || ((int32_T)(b_m + 1U) > bm_->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_m + 1U), 1, bm_->size[1],
                                      &e_emlrtBCI, (emlrtCTX)sp);
      }
      if (((int32_T)(b_m + 1U) < 1) || ((int32_T)(b_m + 1U) > varm_->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_m + 1U), 1, varm_->size[1],
                                      &f_emlrtBCI, (emlrtCTX)sp);
      }
      loop_ub = Omegam->size[0];
      b_loop_ub = Omegam->size[1];
      i = b_Omegam->size[0] * b_Omegam->size[1];
      b_Omegam->size[0] = Omegam->size[0];
      b_Omegam->size[1] = Omegam->size[1];
      emxEnsureCapacity_real_T(sp, b_Omegam, i, &jb_emlrtRTEI);
      beta_data = b_Omegam->data;
      for (i = 0; i < b_loop_ub; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          beta_data[i2 + b_Omegam->size[0] * i] =
              Omegam_data[(i2 + Omegam->size[0] * i) +
                          Omegam->size[0] * Omegam->size[1] * b_m];
        }
      }
      loop_ub = bm_->size[0];
      i = b_bm_->size[0];
      b_bm_->size[0] = bm_->size[0];
      emxEnsureCapacity_real_T(sp, b_bm_, i, &kb_emlrtRTEI);
      beta_data = b_bm_->data;
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = bm__data[i + bm_->size[0] * b_m];
      }
      loop_ub = varm_->size[0];
      i = b_varm_->size[0];
      b_varm_->size[0] = varm_->size[0];
      emxEnsureCapacity_real_T(sp, b_varm_, i, &lb_emlrtRTEI);
      beta_data = b_varm_->data;
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = varm__data[i + varm_->size[0] * b_m];
      }
      st.site = &e_emlrtRSI;
      Gen_beta(&st, Ym, b_Omegam, b_bm_, b_varm_, beta);
      beta_data = beta->data;
      if ((b_m + 1 < 1) || (b_m + 1 > betam->size[1])) {
        emlrtDynamicBoundsCheckR2012b(b_m + 1, 1, betam->size[1], &g_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      emlrtSubAssignSizeCheckR2012b(&betam->size[0], 1, &beta->size[0], 1,
                                    &emlrtECI, (emlrtCTX)sp);
      loop_ub = beta->size[0];
      for (i = 0; i < loop_ub; i++) {
        betam_data[i + betam->size[0] * b_m] = beta_data[i];
      }
      /*         %% Omega ������ */
      st.site = &f_emlrtRSI;
      if ((b_m + 1 < 1) || (b_m + 1 > betam->size[1])) {
        emlrtDynamicBoundsCheckR2012b(b_m + 1, 1, betam->size[1], &h_emlrtBCI,
                                      &st);
      }
      i = b_bm_->size[0];
      b_bm_->size[0] = r->size[0];
      emxEnsureCapacity_real_T(&st, b_bm_, i, &mb_emlrtRTEI);
      beta_data = b_bm_->data;
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = 1.0;
      }
      loop_ub = betam->size[0];
      i = b_betam->size[0] * b_betam->size[1];
      b_betam->size[0] = 1;
      b_betam->size[1] = betam->size[0];
      emxEnsureCapacity_real_T(&st, b_betam, i, &ob_emlrtRTEI);
      beta_data = b_betam->data;
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = betam_data[i + betam->size[0] * b_m];
      }
      b_st.site = &ff_emlrtRSI;
      kron(&b_st, b_bm_, b_betam, b_Omegam);
      beta_data = b_Omegam->data;
      if ((r->size[0] != b_Omegam->size[0]) &&
          ((r->size[0] != 1) && (b_Omegam->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r->size[0], b_Omegam->size[0], &f_emlrtECI,
                                    &st);
      }
      if ((Y->size[1] != b_Omegam->size[1]) &&
          ((Y->size[1] != 1) && (b_Omegam->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(Y->size[1], b_Omegam->size[1], &g_emlrtECI,
                                    &st);
      }
      if ((Ym->size[0] == b_Omegam->size[0]) &&
          (Ym->size[1] == b_Omegam->size[1])) {
        loop_ub = Ym->size[0] * Ym->size[1];
        for (i = 0; i < loop_ub; i++) {
          Ym_data[i] -= beta_data[i];
        }
      } else {
        b_st.site = &ff_emlrtRSI;
        minus(&b_st, Ym, b_Omegam);
      }
      b_st.site = &gf_emlrtRSI;
      c_st.site = &ve_emlrtRSI;
      dynamic_size_checks(&c_st, Ym, Ym, Ym->size[0], Ym->size[0]);
      c_st.site = &ue_emlrtRSI;
      mtimes(&c_st, Ym, Ym, ehat2);
      b_st.site = &hf_emlrtRSI;
      inv(&b_st, ehat2, Ym);
      Ym_data = Ym->data;
      if ((Ym->size[0] != Ym->size[1]) &&
          ((Ym->size[0] != 1) && (Ym->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(Ym->size[0], Ym->size[1], &h_emlrtECI, &st);
      }
      if ((Ym->size[0] != Ym->size[1]) &&
          ((Ym->size[1] != 1) && (Ym->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(Ym->size[1], Ym->size[0], &i_emlrtECI, &st);
      }
      if (Ym->size[0] == Ym->size[1]) {
        i = b_Omegam->size[0] * b_Omegam->size[1];
        b_Omegam->size[0] = Ym->size[0];
        b_Omegam->size[1] = Ym->size[1];
        emxEnsureCapacity_real_T(&st, b_Omegam, i, &qb_emlrtRTEI);
        beta_data = b_Omegam->data;
        loop_ub = Ym->size[1];
        for (i = 0; i < loop_ub; i++) {
          b_loop_ub = Ym->size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            beta_data[i2 + b_Omegam->size[0] * i] =
                0.5 *
                (Ym_data[i2 + Ym->size[0] * i] + Ym_data[i + Ym->size[0] * i2]);
          }
        }
        i = Ym->size[0] * Ym->size[1];
        Ym->size[0] = b_Omegam->size[0];
        Ym->size[1] = b_Omegam->size[1];
        emxEnsureCapacity_real_T(&st, Ym, i, &rb_emlrtRTEI);
        Ym_data = Ym->data;
        loop_ub = b_Omegam->size[0] * b_Omegam->size[1];
        for (i = 0; i < loop_ub; i++) {
          Ym_data[i] = beta_data[i];
        }
      } else {
        b_st.site = &nh_emlrtRSI;
        binary_expand_op(&b_st, Ym);
      }
      b_st.site = &if_emlrtRSI;
      /*  sampling Wishart dist */
      /*  E(V) = Omega*nu */
      /*  X ~ Wishart(R,nu) <=> inv(X) ~ IW(inv(R),nu);  */
      c_st.site = &mf_emlrtRSI;
      cholmod(&c_st, Ym, b_Omegam);
      c_st.site = &nf_emlrtRSI;
      d_st.site = &nf_emlrtRSI;
      b_randn(&d_st, Ym->size[0], r->size[0], ehat2);
      d_st.site = &ve_emlrtRSI;
      dynamic_size_checks(&d_st, b_Omegam, ehat2, b_Omegam->size[0],
                          ehat2->size[0]);
      d_st.site = &ue_emlrtRSI;
      mtimes(&d_st, b_Omegam, ehat2, Ym);
      Ym_data = Ym->data;
      /*  k by nu */
      c_st.site = &of_emlrtRSI;
      d_st.site = &ve_emlrtRSI;
      dynamic_size_checks(&d_st, Ym, Ym, Ym->size[1], Ym->size[1]);
      i = b_Omegam->size[0] * b_Omegam->size[1];
      b_Omegam->size[0] = Ym->size[0];
      b_Omegam->size[1] = Ym->size[1];
      emxEnsureCapacity_real_T(&c_st, b_Omegam, i, &sb_emlrtRTEI);
      beta_data = b_Omegam->data;
      loop_ub = Ym->size[0] * Ym->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        beta_data[i] = Ym_data[i];
      }
      i = ehat2->size[0] * ehat2->size[1];
      ehat2->size[0] = Ym->size[0];
      ehat2->size[1] = Ym->size[1];
      emxEnsureCapacity_real_T(&c_st, ehat2, i, &tb_emlrtRTEI);
      beta_data = ehat2->data;
      loop_ub = Ym->size[0] * Ym->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        beta_data[i] = Ym_data[i];
      }
      d_st.site = &ue_emlrtRSI;
      d_mtimes(&d_st, b_Omegam, ehat2, Ym);
      /*  k by k */
      b_st.site = &jf_emlrtRSI;
      inv(&b_st, Ym, ehat2);
      beta_data = ehat2->data;
      if ((b_m + 1 < 1) || (b_m + 1 > Omegam->size[2])) {
        emlrtDynamicBoundsCheckR2012b(b_m + 1, 1, Omegam->size[2], &i_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      c_Omegam[0] = Omegam->size[0];
      c_Omegam[1] = Omegam->size[1];
      emlrtSubAssignSizeCheckR2012b(&c_Omegam[0], 2, &ehat2->size[0], 2,
                                    &b_emlrtECI, (emlrtCTX)sp);
      loop_ub = ehat2->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = ehat2->size[0];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          Omegam_data[(i2 + Omegam->size[0] * i) +
                      Omegam->size[0] * Omegam->size[1] * b_m] =
              beta_data[i2 + ehat2->size[0] * i];
        }
      }
      st.site = &g_emlrtRSI;
      vec(&st, ehat2);
      beta_data = ehat2->data;
      i = Ym->size[0] * Ym->size[1];
      Ym->size[0] = ehat2->size[1];
      Ym->size[1] = ehat2->size[0];
      emxEnsureCapacity_real_T(sp, Ym, i, &ub_emlrtRTEI);
      Ym_data = Ym->data;
      loop_ub = ehat2->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = ehat2->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          Ym_data[i2 + Ym->size[0] * i] = beta_data[i + ehat2->size[0] * i2];
        }
      }
      if (iter + 1 > Post_Omegam->size[0]) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Post_Omegam->size[0],
                                      &r_emlrtBCI, (emlrtCTX)sp);
      }
      if ((b_m + 1 < 1) || (b_m + 1 > Post_Omegam->size[2])) {
        emlrtDynamicBoundsCheckR2012b(b_m + 1, 1, Post_Omegam->size[2],
                                      &s_emlrtBCI, (emlrtCTX)sp);
      }
      if (1 > Ym->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Ym->size[0], &j_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = Ym->size[1];
      i = b_betam->size[0] * b_betam->size[1];
      b_betam->size[0] = 1;
      b_betam->size[1] = Ym->size[1];
      emxEnsureCapacity_real_T(sp, b_betam, i, &vb_emlrtRTEI);
      beta_data = b_betam->data;
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] = Ym_data[Ym->size[0] * i];
      }
      c_Omegam[0] = 1;
      c_Omegam[1] = Post_Omegam->size[1];
      emlrtSubAssignSizeCheckR2012b(&c_Omegam[0], 2, &b_betam->size[0], 2,
                                    &e_emlrtECI, (emlrtCTX)sp);
      loop_ub = Ym->size[1];
      for (i = 0; i < loop_ub; i++) {
        Post_Omegam_data[(iter + Post_Omegam->size[0] * i) +
                         Post_Omegam->size[0] * Post_Omegam->size[1] * b_m] =
            Ym_data[Ym->size[0] * i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    i = b_Omegam->size[0] * b_Omegam->size[1];
    b_Omegam->size[0] = betam->size[0];
    b_Omegam->size[1] = betam->size[1];
    emxEnsureCapacity_real_T(sp, b_Omegam, i, &db_emlrtRTEI);
    beta_data = b_Omegam->data;
    loop_ub = betam->size[0] * betam->size[1];
    for (i = 0; i < loop_ub; i++) {
      beta_data[i] = betam_data[i];
    }
    st.site = &h_emlrtRSI;
    vec(&st, b_Omegam);
    beta_data = b_Omegam->data;
    i = Ym->size[0] * Ym->size[1];
    Ym->size[0] = b_Omegam->size[1];
    Ym->size[1] = b_Omegam->size[0];
    emxEnsureCapacity_real_T(sp, Ym, i, &gb_emlrtRTEI);
    Ym_data = Ym->data;
    loop_ub = b_Omegam->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = b_Omegam->size[1];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        Ym_data[i2 + Ym->size[0] * i] = beta_data[i + b_Omegam->size[0] * i2];
      }
    }
    if (iter + 1 > Post_betam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Post_betam->size[0],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    if (1 > Ym->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Ym->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = Ym->size[1];
    i = b_betam->size[0] * b_betam->size[1];
    b_betam->size[0] = 1;
    b_betam->size[1] = Ym->size[1];
    emxEnsureCapacity_real_T(sp, b_betam, i, &ib_emlrtRTEI);
    beta_data = b_betam->data;
    for (i = 0; i < loop_ub; i++) {
      beta_data[i] = Ym_data[Ym->size[0] * i];
    }
    c_Omegam[0] = 1;
    c_Omegam[1] = Post_betam->size[1];
    emlrtSubAssignSizeCheckR2012b(&c_Omegam[0], 2, &b_betam->size[0], 2,
                                  &c_emlrtECI, (emlrtCTX)sp);
    loop_ub = Ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      Post_betam_data[iter + Post_betam->size[0] * i] =
          Ym_data[Ym->size[0] * i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_Omegam);
  emxFree_real_T(sp, &b_betam);
  emxFree_real_T(sp, &b_varm_);
  emxFree_real_T(sp, &b_bm_);
  emxFree_real_T(sp, &ehat2);
  emxFree_int32_T(sp, &r);
  emxFree_real_T(sp, &Ym);
  emxFree_real_T(sp, &S);
  emxFree_real_T(sp, &beta);
  emxFree_real_T(sp, &betam);
  if (n0 + 1.0 > n) {
    i = 0;
    i2 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Post_betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Post_betam->size[0],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (i1 > Post_betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Post_betam->size[0],
                                    &n_emlrtBCI, (emlrtCTX)sp);
    }
    i2 = i1;
  }
  loop_ub = Post_betam->size[1];
  b_loop_ub = i2 - i;
  i2 = Output->mum->size[0] * Output->mum->size[1];
  Output->mum->size[0] = b_loop_ub;
  Output->mum->size[1] = Post_betam->size[1];
  emxEnsureCapacity_real_T(sp, Output->mum, i2, &bb_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      Output->mum->data[i3 + Output->mum->size[0] * i2] =
          Post_betam_data[(i + i3) + Post_betam->size[0] * i2];
    }
  }
  emxFree_real_T(sp, &Post_betam);
  if (n0 + 1.0 > n) {
    i = 0;
    i2 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Sm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Sm->size[0],
                                    &p_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (i1 > Sm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Sm->size[0], &q_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i2 = i1;
  }
  loop_ub = Sm->size[1];
  b_loop_ub = i2 - i;
  i2 = Output->Sm->size[0] * Output->Sm->size[1];
  Output->Sm->size[0] = b_loop_ub;
  Output->Sm->size[1] = Sm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Sm, i2, &cb_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      Output->Sm->data[i3 + Output->Sm->size[0] * i2] =
          Sm_data[(i + i3) + Sm->size[0] * i2];
    }
  }
  emxFree_real_T(sp, &Sm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) ||
        ((int32_T)(n0 + 1.0) > Post_Omegam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1,
                                    Post_Omegam->size[0], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (i1 > Post_Omegam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Post_Omegam->size[0],
                                    &u_emlrtBCI, (emlrtCTX)sp);
    }
  }
  loop_ub = Post_Omegam->size[1];
  b_loop_ub = Post_Omegam->size[2];
  trueCount = i1 - i;
  i1 = Output->Sigmam->size[0] * Output->Sigmam->size[1] *
       Output->Sigmam->size[2];
  Output->Sigmam->size[0] = trueCount;
  Output->Sigmam->size[1] = Post_Omegam->size[1];
  Output->Sigmam->size[2] = Post_Omegam->size[2];
  emxEnsureCapacity_real_T(sp, Output->Sigmam, i1, &fb_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      for (i3 = 0; i3 < trueCount; i3++) {
        Output->Sigmam
            ->data[(i3 + Output->Sigmam->size[0] * i2) +
                   Output->Sigmam->size[0] * Output->Sigmam->size[1] * i1] =
            Post_Omegam_data[((i + i3) + Post_Omegam->size[0] * i2) +
                             Post_Omegam->size[0] * Post_Omegam->size[1] * i1];
      }
    }
  }
  emxFree_real_T(sp, &Post_Omegam);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Mixture_Normal.c) */

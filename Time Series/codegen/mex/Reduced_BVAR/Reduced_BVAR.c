/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Reduced_BVAR.c
 *
 * Code generation for function 'Reduced_BVAR'
 *
 */

/* Include files */
#include "Reduced_BVAR.h"
#include "Reduced_BVAR_data.h"
#include "Reduced_BVAR_emxutil.h"
#include "Reduced_BVAR_mexutil.h"
#include "Reduced_BVAR_types.h"
#include "assertValidSizeArg.h"
#include "cholmod.h"
#include "cov.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "inv.h"
#include "invpd.h"
#include "lnpdfmvn.h"
#include "lnpdfwishart.h"
#include "mean.h"
#include "mtimes.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "vec.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI =
    {
        14,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI =
    {
        18,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        25,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI =
    {
        29,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI =
    {
        42,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI =
    {
        52,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI =
    {
        55,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI =
    {
        58,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI =
    {
        63,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI =
    {
        65,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI =
    {
        72,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI =
    {
        74,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI =
    {
        75,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI =
    {
        91,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI =
    {
        93,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI =
    {
        94,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI =
    {
        95,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI =
    {
        115,      /* lineNo */
        "makeYX", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI =
    {
        123,      /* lineNo */
        "makeYX", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI =
    {
        130,      /* lineNo */
        "makeYX", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    3,                                                        /* lineNo */
    "meanc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    32,     /* lineNo */
    "kron", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pathName
                                                                         */
};

static emlrtRSInfo qc_emlrtRSI = {
    33,     /* lineNo */
    "kron", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pathName
                                                                         */
};

static emlrtRSInfo rc_emlrtRSI = {
    34,     /* lineNo */
    "kron", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    sc_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI =
    {
        147,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI =
    {
        148,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI =
    {
        151,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI =
    {
        154,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI =
    {
        156,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI =
    {
        157,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI =
    {
        159,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI =
    {
        160,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI =
    {
        162,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI =
    {
        176,         /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI =
    {
        181,         /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI =
    {
        184,         /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI =
    {
        185,         /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI =
    {
        188,         /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    7,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo cf_emlrtRSI = {
    8,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo df_emlrtRSI = {
    9,             /* lineNo */
    "randwishart", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pathName
                                                                     */
};

static emlrtRSInfo ef_emlrtRSI =
    {
        199,            /* lineNo */
        "Gen_Forecast", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI =
    {
        206,            /* lineNo */
        "Gen_Forecast", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI =
    {
        209,            /* lineNo */
        "Gen_Forecast", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = {
    37,     /* lineNo */
    "flip", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/flip.m" /* pathName
                                                                           */
};

static emlrtRSInfo if_emlrtRSI = {
    29,     /* lineNo */
    "flip", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/flip.m" /* pathName
                                                                           */
};

static emlrtRSInfo jf_emlrtRSI = {
    50,         /* lineNo */
    "prodsize", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/shared/coder/coder/+coder/"
    "+internal/prodsize.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo uf_emlrtRSI = {
    74,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo vf_emlrtRSI = {
    91,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo wf_emlrtRSI = {
    92,         /* lineNo */
    "cholesky", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo xf_emlrtRSI = {
    79,             /* lineNo */
    "ceval_xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtRSInfo yf_emlrtRSI = {
    13,       /* lineNo */
    "xpotrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xpotrf.m" /* pathName */
};

static emlrtRSInfo
    xh_emlrtRSI =
        {
            28,    /* lineNo */
            "cat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    yh_emlrtRSI =
        {
            100,        /* lineNo */
            "cat_impl", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtMCInfo emlrtMCI =
    {
        6,              /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI =
    {
        85,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI =
    {
        86,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI =
    {
        87,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI =
    {
        40,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI =
    {
        41,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI =
    {
        43,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI =
    {
        44,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI =
    {
        45,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI =
    {
        46,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo k_emlrtMCI =
    {
        47,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtMCInfo l_emlrtMCI =
    {
        48,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
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

static emlrtRTEInfo emlrtRTEI =
    {
        36,             /* lineNo */
        12,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        61,             /* lineNo */
        32,             /* colNo */
        "Phi",          /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo b_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        64,             /* lineNo */
        33,             /* colNo */
        "aux1",         /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo c_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        66,             /* lineNo */
        39,             /* colNo */
        "vec_Omega",    /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo d_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        72,             /* lineNo */
        43,             /* colNo */
        "Y0",           /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo e_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        72,             /* lineNo */
        57,             /* colNo */
        "YLm",          /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtDCInfo emlrtDCI =
    {
        64,             /* lineNo */
        15,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtBCInfo f_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        64,             /* lineNo */
        15,             /* colNo */
        "betam",        /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtECInfo emlrtECI =
    {
        -1,             /* nDims */
        64,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI =
    {
        66,             /* lineNo */
        16,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtBCInfo g_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        66,             /* lineNo */
        16,             /* colNo */
        "Omegam",       /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtECInfo b_emlrtECI =
    {
        -1,             /* nDims */
        66,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo c_emlrtECI =
    {
        1,              /* nDims */
        94,             /* lineNo */
        22,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo d_emlrtECI =
    {
        2,              /* nDims */
        94,             /* lineNo */
        22,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtDCInfo c_emlrtDCI =
    {
        61,             /* lineNo */
        15,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtBCInfo h_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        61,             /* lineNo */
        15,             /* colNo */
        "consm",        /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtECInfo e_emlrtECI =
    {
        -1,             /* nDims */
        61,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtDCInfo d_emlrtDCI =
    {
        67,             /* lineNo */
        16,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtBCInfo i_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        67,             /* lineNo */
        16,             /* colNo */
        "y_pred",       /* aName */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtECInfo f_emlrtECI =
    {
        -1,             /* nDims */
        67,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    57,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo
    e_emlrtRTEI =
        {
            275,                   /* lineNo */
            27,                    /* colNo */
            "check_non_axis_size", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtDCInfo e_emlrtDCI =
    {
        23,             /* lineNo */
        15,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo f_emlrtDCI =
    {
        23,             /* lineNo */
        15,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo g_emlrtDCI =
    {
        24,             /* lineNo */
        15,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo h_emlrtDCI =
    {
        24,             /* lineNo */
        18,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo i_emlrtDCI =
    {
        24,             /* lineNo */
        18,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo j_emlrtDCI =
    {
        25,             /* lineNo */
        16,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo k_emlrtDCI =
    {
        25,             /* lineNo */
        19,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo l_emlrtDCI =
    {
        26,             /* lineNo */
        16,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo m_emlrtDCI =
    {
        23,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo n_emlrtDCI =
    {
        24,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo o_emlrtDCI =
    {
        25,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo p_emlrtDCI =
    {
        26,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtECInfo g_emlrtECI =
    {
        -1,       /* nDims */
        131,      /* lineNo */
        5,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo j_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        131,      /* lineNo */
        13,       /* colNo */
        "YLm",    /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo k_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        130,      /* lineNo */
        29,       /* colNo */
        "YL",     /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI =
    {
        129,      /* lineNo */
        9,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo h_emlrtECI =
    {
        -1,       /* nDims */
        120,      /* lineNo */
        5,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo l_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        120,      /* lineNo */
        20,       /* colNo */
        "YL",     /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo m_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        120,      /* lineNo */
        10,       /* colNo */
        "YL",     /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo n_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        120,      /* lineNo */
        37,       /* colNo */
        "Y",      /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo o_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        120,      /* lineNo */
        29,       /* colNo */
        "Y",      /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtDCInfo q_emlrtDCI =
    {
        120,      /* lineNo */
        29,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtRTEInfo j_emlrtRTEI =
    {
        119,      /* lineNo */
        9,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo p_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        114,      /* lineNo */
        12,       /* colNo */
        "Y",      /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo q_emlrtBCI =
    {
        -1,       /* iFirst */
        -1,       /* iLast */
        114,      /* lineNo */
        8,        /* colNo */
        "Y",      /* aName */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtDCInfo r_emlrtDCI =
    {
        114,      /* lineNo */
        8,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo s_emlrtDCI =
    {
        118,      /* lineNo */
        12,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo t_emlrtDCI =
    {
        118,      /* lineNo */
        12,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo u_emlrtDCI =
    {
        118,      /* lineNo */
        16,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo v_emlrtDCI =
    {
        118,      /* lineNo */
        16,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo w_emlrtDCI =
    {
        128,      /* lineNo */
        15,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo x_emlrtDCI =
    {
        128,      /* lineNo */
        15,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo y_emlrtDCI =
    {
        128,      /* lineNo */
        23,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI =
    {
        128,      /* lineNo */
        23,       /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI =
    {
        118,      /* lineNo */
        1,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI =
    {
        118,      /* lineNo */
        1,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo db_emlrtDCI =
    {
        128,      /* lineNo */
        1,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI =
    {
        128,      /* lineNo */
        1,        /* colNo */
        "makeYX", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtBCInfo r_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        146,       /* lineNo */
        16,        /* colNo */
        "X",       /* aName */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtECInfo i_emlrtECI =
    {
        1,         /* nDims */
        147,       /* lineNo */
        10,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo j_emlrtECI =
    {
        2,         /* nDims */
        147,       /* lineNo */
        10,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo s_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        148,       /* lineNo */
        32,        /* colNo */
        "Y0",      /* aName */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtECInfo k_emlrtECI =
    {
        1,         /* nDims */
        148,       /* lineNo */
        10,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo l_emlrtECI =
    {
        1,         /* nDims */
        152,       /* lineNo */
        10,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo m_emlrtECI =
    {
        2,         /* nDims */
        152,       /* lineNo */
        10,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo n_emlrtECI =
    {
        1,         /* nDims */
        153,       /* lineNo */
        15,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo o_emlrtECI =
    {
        2,         /* nDims */
        153,       /* lineNo */
        15,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo p_emlrtECI =
    {
        1,         /* nDims */
        155,       /* lineNo */
        11,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo q_emlrtECI =
    {
        2,         /* nDims */
        155,       /* lineNo */
        11,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo r_emlrtECI =
    {
        1,         /* nDims */
        156,       /* lineNo */
        5,         /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo s_emlrtECI =
    {
        1,         /* nDims */
        160,       /* lineNo */
        8,         /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtDCInfo fb_emlrtDCI =
    {
        140,       /* lineNo */
        12,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI =
    {
        140,       /* lineNo */
        12,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI =
    {
        140,       /* lineNo */
        22,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI =
    {
        140,       /* lineNo */
        22,        /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI =
    {
        140,       /* lineNo */
        1,         /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI =
    {
        140,       /* lineNo */
        1,         /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI =
    {
        141,       /* lineNo */
        1,         /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI =
    {
        141,       /* lineNo */
        1,         /* colNo */
        "Gen_Phi", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtECInfo db_emlrtECI =
    {
        2,           /* nDims */
        181,         /* lineNo */
        14,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo eb_emlrtECI =
    {
        1,           /* nDims */
        181,         /* lineNo */
        14,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo fb_emlrtECI =
    {
        2,           /* nDims */
        177,         /* lineNo */
        13,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo gb_emlrtECI =
    {
        1,           /* nDims */
        177,         /* lineNo */
        13,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo hb_emlrtECI =
    {
        1,           /* nDims */
        176,         /* lineNo */
        12,          /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo hc_emlrtBCI =
    {
        -1,          /* iFirst */
        -1,          /* iLast */
        176,         /* lineNo */
        14,          /* colNo */
        "Y",         /* aName */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI =
    {
        -1,          /* iFirst */
        -1,          /* iLast */
        175,         /* lineNo */
        16,          /* colNo */
        "X",         /* aName */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = {
    80,         /* lineNo */
    23,         /* colNo */
    "cholesky", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtRTEInfo y_emlrtRTEI = {
    54,         /* lineNo */
    15,         /* colNo */
    "cholesky", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtECInfo ib_emlrtECI =
    {
        1,              /* nDims */
        209,            /* lineNo */
        6,              /* colNo */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtECInfo jb_emlrtECI =
    {
        -1,             /* nDims */
        206,            /* lineNo */
        5,              /* colNo */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo jc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        206,            /* lineNo */
        12,             /* colNo */
        "PhiX",         /* aName */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        206,            /* lineNo */
        53,             /* colNo */
        "yf_X",         /* aName */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        206,            /* lineNo */
        41,             /* colNo */
        "Phi",          /* aName */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        206,            /* lineNo */
        25,             /* colNo */
        "Phi",          /* aName */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtRTEInfo ab_emlrtRTEI =
    {
        205,            /* lineNo */
        11,             /* colNo */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtBCInfo nc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        202,            /* lineNo */
        14,             /* colNo */
        "Phi",          /* aName */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        198,            /* lineNo */
        19,             /* colNo */
        "Y",            /* aName */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI =
    {
        -1,             /* iFirst */
        -1,             /* iLast */
        198,            /* lineNo */
        10,             /* colNo */
        "Y",            /* aName */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        0                        /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI =
    {
        198,            /* lineNo */
        10,             /* colNo */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI =
    {
        200,            /* lineNo */
        17,             /* colNo */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        1                        /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI =
    {
        200,            /* lineNo */
        17,             /* colNo */
        "Gen_Forecast", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m", /* pName */
        4                        /* checkKind */
};

static emlrtRTEInfo lb_emlrtRTEI =
    {
        15,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI =
    {
        18,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI =
    {
        23,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI =
    {
        24,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI =
    {
        25,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI =
    {
        26,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI =
    {
        31,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI =
    {
        32,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI =
    {
        104,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI =
    {
        52,             /* lineNo */
        6,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI =
    {
        46,             /* lineNo */
        14,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI =
    {
        91,             /* lineNo */
        5,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI =
    {
        61,             /* lineNo */
        28,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI =
    {
        79,             /* lineNo */
        13,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI =
    {
        72,             /* lineNo */
        49,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI =
    {
        80,             /* lineNo */
        13,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI =
    {
        63,             /* lineNo */
        16,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI =
    {
        72,             /* lineNo */
        40,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI =
    {
        63,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI =
    {
        64,             /* lineNo */
        28,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo
    gc_emlrtRTEI =
        {
            295,   /* lineNo */
            14,    /* colNo */
            "cat", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI =
    {
        65,             /* lineNo */
        21,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    4,                                                        /* lineNo */
    8,                                                        /* colNo */
    "meanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI =
    {
        65,             /* lineNo */
        9,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI =
    {
        66,             /* lineNo */
        29,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI =
    {
        14,             /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI =
    {
        58,             /* lineNo */
        5,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI =
    {
        1,              /* lineNo */
        19,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    1,                                                        /* lineNo */
    10,                                                       /* colNo */
    "meanc",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/meanc.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI =
    {
        114,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI =
    {
        114,            /* lineNo */
        6,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI =
    {
        118,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI =
    {
        128,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI =
    {
        130,            /* lineNo */
        23,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    30,     /* lineNo */
    20,     /* colNo */
    "kron", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/kron.m" /* pName
                                                                         */
};

static emlrtRTEInfo dd_emlrtRTEI =
    {
        130,            /* lineNo */
        5,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI =
    {
        109,            /* lineNo */
        40,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI =
    {
        140,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI =
    {
        141,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI =
    {
        152,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI =
    {
        146,            /* lineNo */
        10,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI =
    {
        148,            /* lineNo */
        29,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI =
    {
        162,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI =
    {
        151,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI =
    {
        136,            /* lineNo */
        23,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI =
    {
        172,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI =
    {
        181,            /* lineNo */
        14,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI =
    {
        175,            /* lineNo */
        10,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI =
    {
        176,            /* lineNo */
        5,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI =
    {
        177,            /* lineNo */
        21,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    9,                                                              /* lineNo */
    5,                                                              /* colNo */
    "randwishart",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    9,                                                              /* lineNo */
    7,                                                              /* colNo */
    "randwishart",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randwishart.m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI =
    {
        167,            /* lineNo */
        30,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI =
    {
        198,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI =
    {
        200,            /* lineNo */
        8,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI =
    {
        201,            /* lineNo */
        7,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI =
    {
        201,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI =
    {
        202,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI =
    {
        203,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo pf_emlrtRTEI =
    {
        209,            /* lineNo */
        32,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI =
    {
        206,            /* lineNo */
        19,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI =
    {
        206,            /* lineNo */
        48,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI =
    {
        200,            /* lineNo */
        1,              /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo tf_emlrtRTEI =
    {
        193,            /* lineNo */
        15,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo uf_emlrtRTEI =
    {
        209,            /* lineNo */
        40,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo hh_emlrtRTEI =
    {
        148,            /* lineNo */
        10,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo ih_emlrtRTEI =
    {
        147,            /* lineNo */
        10,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRTEInfo jh_emlrtRTEI =
    {
        152,            /* lineNo */
        10,             /* colNo */
        "Reduced_BVAR", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pName */
};

static emlrtRSInfo oi_emlrtRSI =
    {
        6,              /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo pi_emlrtRSI =
    {
        43,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo qi_emlrtRSI =
    {
        41,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo ri_emlrtRSI =
    {
        45,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo si_emlrtRSI =
    {
        47,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo
    ti_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo ui_emlrtRSI =
    {
        86,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo
    vi_emlrtRSI =
        {
            68,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo aj_emlrtRSI =
    {
        87,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo bj_emlrtRSI =
    {
        85,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo cj_emlrtRSI =
    {
        48,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo dj_emlrtRSI =
    {
        46,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo ej_emlrtRSI =
    {
        44,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo fj_emlrtRSI =
    {
        40,             /* lineNo */
        "Reduced_BVAR", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo jj_emlrtRSI =
    {
        177,         /* lineNo */
        "Gen_Omega", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

static emlrtRSInfo kj_emlrtRSI = {
    76,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo lj_emlrtRSI =
    {
        152,       /* lineNo */
        "Gen_Phi", /* fcnName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Time "
        "Series/Reduced_BVAR.m" /* pathName */
};

/* Function Declarations */
static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *Y,
                         emxArray_real_T *Phi, const emxArray_real_T *Omega,
                         real_T p, real_T k, emxArray_real_T *yf);

static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *Y,
                      const emxArray_real_T *X, const emxArray_real_T *beta,
                      real_T nu, const emxArray_real_T *R0,
                      emxArray_real_T *Omega, emxArray_real_T *Omega_inv);

static void Gen_Phi(const emlrtStack *sp, const emxArray_real_T *Y0,
                    const emxArray_real_T *YLm, real_T p,
                    const emxArray_real_T *b_, const emxArray_real_T *var_,
                    const emxArray_real_T *Omega_inv, emxArray_real_T *Phi,
                    emxArray_real_T *beta);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[37]);

static void b_plus(const emlrtStack *sp, emxArray_real_T *XX,
                   const emxArray_real_T *r1);

static void
binary_expand_op(const emlrtStack *sp, emxArray_real_T *yf,
                 emlrtRSInfo nj_emlrtRSI, const emxArray_real_T *beta_hat,
                 const int32_T input_sizes[2], const int32_T sizes[2],
                 const emxArray_real_T *Omega_hat, const emxArray_real_T *retf,
                 const emxArray_real_T *r2, const emxArray_real_T *vec_Omega);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
                               emlrtRSInfo nj_emlrtRSI);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[34]);

static void c_plus(const emlrtStack *sp, emxArray_real_T *XX,
                   const emxArray_real_T *precb_);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7]);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[6]);

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38]);

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location);

static const mxArray *g_emlrt_marshallOut(const real_T u);

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat,
                               const emxArray_real_T *Y, int32_T t,
                               const emxArray_real_T *r1);

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[23]);

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat2,
                               emlrtRSInfo nj_emlrtRSI,
                               const emxArray_real_T *r1);

static const mxArray *j_emlrt_marshallOut(void);

static void makeYX(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                   emxArray_real_T *Y0, emxArray_real_T *YLm,
                   emxArray_real_T *YL);

static void plus(const emlrtStack *sp, emxArray_real_T *XY,
                 const emxArray_real_T *r1);

/* Function Definitions */
static void Gen_Forecast(const emlrtStack *sp, const emxArray_real_T *Y,
                         emxArray_real_T *Phi, const emxArray_real_T *Omega,
                         real_T p, real_T k, emxArray_real_T *yf)
{
  static const char_T fname[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'p', 'o', 't', 'r', 'f',
                                   '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *PhiX;
  emxArray_real_T *b;
  emxArray_real_T *b_Phi;
  emxArray_real_T *b_yf_X;
  emxArray_real_T *r;
  emxArray_real_T *yf_X;
  const real_T *Omega_data;
  const real_T *Y_data;
  real_T d;
  real_T tmp;
  real_T *PhiX_data;
  real_T *Phi_data;
  real_T *b_Phi_data;
  real_T *yf_X_data;
  real_T *yf_data;
  int32_T iv[2];
  int32_T b_i;
  int32_T b_k;
  int32_T dim;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T jmax;
  int32_T loop_ub;
  int32_T nd2;
  int32_T npages;
  int32_T pagelen;
  int32_T vstride;
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
  Omega_data = Omega->data;
  Phi_data = Phi->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  */
  /*  1기 뒤의 예측값에 대한 사후예측분포를 sampling 해보는 것 */
  /*  Sample size */
  tmp = ((real_T)Y->size[0] - p) + 1.0;
  if (tmp > Y->size[0]) {
    i = -1;
    i1 = -1;
  } else {
    if (tmp != (int32_T)muDoubleScalarFloor(tmp)) {
      emlrtIntegerCheckR2012b(tmp, &qb_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)tmp < 1) || ((int32_T)tmp > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)tmp, 1, Y->size[0], &pc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = (int32_T)tmp - 2;
    if (Y->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(Y->size[0], 1, Y->size[0], &oc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = Y->size[0] - 1;
  }
  emxInit_real_T(sp, &yf_X, 2, &jf_emlrtRTEI);
  dim = Y->size[1];
  loop_ub = i1 - i;
  i1 = yf_X->size[0] * yf_X->size[1];
  yf_X->size[0] = loop_ub;
  yf_X->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, yf_X, i1, &jf_emlrtRTEI);
  yf_X_data = yf_X->data;
  for (i1 = 0; i1 < dim; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      yf_X_data[i2 + yf_X->size[0] * i1] =
          Y_data[((i + i2) + Y->size[0] * i1) + 1];
    }
  }
  /*  예측에 쓰이는 시차설명변수 */
  st.site = &ef_emlrtRSI;
  dim = 1;
  if (loop_ub != 1) {
    dim = 0;
  }
  if ((loop_ub != 0) && (Y->size[1] != 0)) {
    iv[0] = loop_ub;
    iv[1] = Y->size[1];
    if (iv[dim] > 1) {
      b_st.site = &if_emlrtRSI;
      vstride = 1;
      c_st.site = &jf_emlrtRSI;
      for (b_k = 0; b_k < dim; b_k++) {
        vstride *= loop_ub;
      }
      iv[0] = loop_ub;
      iv[1] = Y->size[1];
      pagelen = vstride * iv[dim];
      npages = 1;
      i = dim + 2;
      for (b_k = i; b_k < 3; b_k++) {
        npages *= Y->size[1];
      }
      iv[0] = loop_ub;
      iv[1] = Y->size[1];
      i = iv[dim] - 1;
      iv[0] = loop_ub;
      iv[1] = Y->size[1];
      nd2 = iv[dim] >> 1;
      i1 = npages - 1;
      for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
        i2 = vstride - 1;
        for (b_i = 0; b_i <= i2; b_i++) {
          dim = loop_ub * pagelen + b_i;
          b_st.site = &hf_emlrtRSI;
          for (b_k = 0; b_k < nd2; b_k++) {
            npages = dim + b_k * vstride;
            tmp = yf_X_data[npages];
            i3 = dim + (i - b_k) * vstride;
            yf_X_data[npages] = yf_X_data[i3];
            yf_X_data[i3] = tmp;
          }
        }
      }
    }
  }
  emxInit_real_T(&st, &PhiX, 2, &sf_emlrtRTEI);
  i = PhiX->size[0] * PhiX->size[1];
  PhiX->size[0] = (int32_T)k;
  emxEnsureCapacity_real_T(sp, PhiX, i, &kf_emlrtRTEI);
  if (!(p >= 0.0)) {
    emlrtNonNegativeCheckR2012b(p, &sb_emlrtDCI, (emlrtCTX)sp);
  }
  if (p != (int32_T)muDoubleScalarFloor(p)) {
    emlrtIntegerCheckR2012b(p, &rb_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b_Phi, 2, &lf_emlrtRTEI);
  i = PhiX->size[0] * PhiX->size[1];
  i1 = (int32_T)p;
  PhiX->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T(sp, PhiX, i, &kf_emlrtRTEI);
  PhiX_data = PhiX->data;
  i = b_Phi->size[0] * b_Phi->size[1];
  b_Phi->size[0] = Phi->size[1];
  b_Phi->size[1] = Phi->size[0];
  emxEnsureCapacity_real_T(sp, b_Phi, i, &lf_emlrtRTEI);
  b_Phi_data = b_Phi->data;
  dim = Phi->size[0];
  for (i = 0; i < dim; i++) {
    loop_ub = Phi->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_Phi_data[i2 + b_Phi->size[0] * i] = Phi_data[i + Phi->size[0] * i2];
    }
  }
  i = Phi->size[0] * Phi->size[1];
  Phi->size[0] = b_Phi->size[0];
  Phi->size[1] = b_Phi->size[1];
  emxEnsureCapacity_real_T(sp, Phi, i, &mf_emlrtRTEI);
  Phi_data = Phi->data;
  dim = b_Phi->size[0] * b_Phi->size[1];
  for (i = 0; i < dim; i++) {
    Phi_data[i] = b_Phi_data[i];
  }
  if (1 > Phi->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Phi->size[1], &nc_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  dim = Phi->size[0];
  i = yf->size[0];
  yf->size[0] = Phi->size[0];
  emxEnsureCapacity_real_T(sp, yf, i, &nf_emlrtRTEI);
  yf_data = yf->data;
  for (i = 0; i < dim; i++) {
    yf_data[i] = Phi_data[i];
  }
  if (2 > Phi->size[1]) {
    i = 0;
    i2 = 0;
  } else {
    i = 1;
    i2 = Phi->size[1];
  }
  npages = Phi->size[0] - 1;
  dim = Phi->size[0];
  nd2 = i2 - i;
  for (i2 = 0; i2 < nd2; i2++) {
    for (i3 = 0; i3 < dim; i3++) {
      Phi_data[i3 + (npages + 1) * i2] = Phi_data[i3 + Phi->size[0] * (i + i2)];
    }
  }
  i = Phi->size[0] * Phi->size[1];
  Phi->size[0] = npages + 1;
  Phi->size[1] = nd2;
  emxEnsureCapacity_real_T(sp, Phi, i, &of_emlrtRTEI);
  Phi_data = Phi->data;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, p, mxDOUBLE_CLASS, (int32_T)p,
                                &ab_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &r, 1, &tf_emlrtRTEI);
  emxInit_real_T(sp, &b_yf_X, 2, &rf_emlrtRTEI);
  for (vstride = 0; vstride < i1; vstride++) {
    tmp = (((real_T)vstride + 1.0) - 1.0) * k + 1.0;
    d = ((real_T)vstride + 1.0) * k;
    if (tmp > d) {
      i = -1;
      i2 = -1;
    } else {
      if (((int32_T)tmp < 1) || ((int32_T)tmp > nd2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)tmp, 1, nd2, &mc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = (int32_T)tmp - 2;
      if (((int32_T)d < 1) || ((int32_T)d > nd2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, nd2, &lc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d - 1;
    }
    if ((vstride + 1 < 1) || (vstride + 1 > yf_X->size[0])) {
      emlrtDynamicBoundsCheckR2012b(vstride + 1, 1, yf_X->size[0], &kc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((vstride + 1 < 1) || (vstride + 1 > PhiX->size[1])) {
      emlrtDynamicBoundsCheckR2012b(vstride + 1, 1, PhiX->size[1], &jc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &ff_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    loop_ub = i2 - i;
    if (loop_ub != yf_X->size[1]) {
      if (((npages + 1 == 1) && (loop_ub == 1)) || (yf_X->size[1] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &n_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    i2 = b_Phi->size[0] * b_Phi->size[1];
    b_Phi->size[0] = npages + 1;
    b_Phi->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, b_Phi, i2, &qf_emlrtRTEI);
    b_Phi_data = b_Phi->data;
    for (i2 = 0; i2 < loop_ub; i2++) {
      for (i3 = 0; i3 < dim; i3++) {
        b_Phi_data[i3 + b_Phi->size[0] * i2] =
            Phi_data[i3 + Phi->size[0] * ((i + i2) + 1)];
      }
    }
    loop_ub = yf_X->size[1];
    i = b_yf_X->size[0] * b_yf_X->size[1];
    b_yf_X->size[0] = 1;
    b_yf_X->size[1] = yf_X->size[1];
    emxEnsureCapacity_real_T(&st, b_yf_X, i, &rf_emlrtRTEI);
    b_Phi_data = b_yf_X->data;
    for (i = 0; i < loop_ub; i++) {
      b_Phi_data[i] = yf_X_data[vstride + yf_X->size[0] * i];
    }
    b_st.site = &dd_emlrtRSI;
    c_mtimes(&b_st, b_Phi, b_yf_X, r);
    b_Phi_data = r->data;
    emlrtSubAssignSizeCheckR2012b(&PhiX->size[0], 1, &r->size[0], 1,
                                  &jb_emlrtECI, (emlrtCTX)sp);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      PhiX_data[i + PhiX->size[0] * vstride] = b_Phi_data[i];
    }
    /*  k by k * k by 1 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_yf_X);
  emxFree_real_T(sp, &b_Phi);
  /* 각 (p시차의 Phi)*(p 시차 설명변수) 값을 PhiX의 p열에 저장 */
  st.site = &gf_emlrtRSI;
  c_sum(&st, PhiX, r);
  b_Phi_data = r->data;
  emxFree_real_T(sp, &PhiX);
  if ((yf->size[0] != r->size[0]) &&
      ((yf->size[0] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(yf->size[0], r->size[0], &ib_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &gf_emlrtRSI;
  i = yf_X->size[0] * yf_X->size[1];
  yf_X->size[0] = Omega->size[0];
  yf_X->size[1] = Omega->size[1];
  emxEnsureCapacity_real_T(&st, yf_X, i, &pf_emlrtRTEI);
  yf_X_data = yf_X->data;
  dim = Omega->size[0] * Omega->size[1];
  for (i = 0; i < dim; i++) {
    yf_X_data[i] = Omega_data[i];
  }
  b_st.site = &tf_emlrtRSI;
  dim = yf_X->size[1];
  if (yf_X->size[0] != yf_X->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &y_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if (yf_X->size[1] != 0) {
    c_st.site = &uf_emlrtRSI;
    d_st.site = &yf_emlrtRSI;
    info_t = LAPACKE_dpotrf_work(102, 'U', (ptrdiff_t)yf_X->size[1],
                                 &yf_X_data[0], (ptrdiff_t)yf_X->size[1]);
    npages = (int32_T)info_t;
    e_st.site = &xf_emlrtRSI;
    if (npages < 0) {
      if (npages == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &w_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &v_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &fname[0], 12, npages);
      }
    }
    if (npages == 0) {
      jmax = dim;
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI, "Coder:MATLAB:posdef",
                                    "Coder:MATLAB:posdef", 0);
    }
    c_st.site = &vf_emlrtRSI;
    if ((1 <= jmax) && (jmax > 2147483646)) {
      d_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (loop_ub = 0; loop_ub < jmax; loop_ub++) {
      dim = loop_ub + 2;
      c_st.site = &wf_emlrtRSI;
      for (b_i = dim; b_i <= jmax; b_i++) {
        yf_X_data[(b_i + yf_X->size[0] * loop_ub) - 1] = 0.0;
      }
    }
  }
  if (yf->size[0] == r->size[0]) {
    dim = yf->size[0];
    for (i = 0; i < dim; i++) {
      yf_data[i] += b_Phi_data[i];
    }
  } else {
    st.site = &gf_emlrtRSI;
    plus(&st, yf, r);
    yf_data = yf->data;
  }
  emxInit_real_T(sp, &b, 1, &uf_emlrtRTEI);
  st.site = &gf_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  randn(&b_st, k, b);
  b_st.site = &ed_emlrtRSI;
  if (yf_X->size[0] != b->size[0]) {
    if (((yf_X->size[0] == 1) && (yf_X->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &dd_emlrtRSI;
  g_mtimes(&b_st, yf_X, b, r);
  b_Phi_data = r->data;
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &yf_X);
  if ((yf->size[0] != r->size[0]) &&
      ((yf->size[0] != 1) && (r->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(yf->size[0], r->size[0], &ib_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (yf->size[0] == r->size[0]) {
    dim = yf->size[0];
    for (i = 0; i < dim; i++) {
      yf_data[i] += b_Phi_data[i];
    }
  } else {
    st.site = &gf_emlrtRSI;
    plus(&st, yf, r);
  }
  emxFree_real_T(sp, &r);
  /*  sum(~,2)를 하면 sum을 행벡터에 대해 행함 */
  /*  sampling된 phi로 yf의 평균을 계산하고 오차충격을 더해 yf를 sampling */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Omega(const emlrtStack *sp, const emxArray_real_T *Y,
                      const emxArray_real_T *X, const emxArray_real_T *beta,
                      real_T nu, const emxArray_real_T *R0,
                      emxArray_real_T *Omega, emxArray_real_T *Omega_inv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_X;
  emxArray_real_T *ehat;
  emxArray_real_T *ehat2;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  const real_T *X_data;
  const real_T *Y_data;
  real_T *b_X_data;
  real_T *ehat2_data;
  real_T *ehat_data;
  real_T *r2;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &ehat2, 2, &bf_emlrtRTEI);
  /*  Omega 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  i = ehat2->size[0] * ehat2->size[1];
  ehat2->size[0] = Y->size[1];
  ehat2->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, ehat2, i, &bf_emlrtRTEI);
  ehat2_data = ehat2->data;
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    ehat2_data[i] = 0.0;
  }
  /*  잔차항의 제곱의 합 */
  i = Y->size[0];
  emxInit_real_T(sp, &ehat, 1, &ef_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &if_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &if_emlrtRTEI);
  emxInit_real_T(sp, &b_X, 2, &df_emlrtRTEI);
  for (t = 0; t < i; t++) {
    if (t + 1 > X->size[2]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, X->size[2], &ic_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (t + 1 > Y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, Y->size[0], &hc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &ve_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    loop_ub = X->size[1];
    if (beta->size[0] != X->size[1]) {
      if (((X->size[0] == 1) && (X->size[1] == 1)) || (beta->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &n_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_loop_ub = X->size[0];
    i1 = b_X->size[0] * b_X->size[1];
    b_X->size[0] = X->size[0];
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&st, b_X, i1, &df_emlrtRTEI);
    b_X_data = b_X->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_X_data[i2 + b_X->size[0] * i1] =
            X_data[(i2 + X->size[0] * i1) + X->size[0] * X->size[1] * t];
      }
    }
    b_st.site = &dd_emlrtRSI;
    e_mtimes(&b_st, b_X, beta, r);
    r2 = r->data;
    loop_ub = Y->size[1];
    if ((r->size[0] != Y->size[1]) &&
        ((Y->size[1] != 1) && (r->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Y->size[1], r->size[0], &hb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (r->size[0] == Y->size[1]) {
      i1 = ehat->size[0];
      ehat->size[0] = Y->size[1];
      emxEnsureCapacity_real_T(sp, ehat, i1, &ef_emlrtRTEI);
      ehat_data = ehat->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        ehat_data[i1] = Y_data[t + Y->size[0] * i1] - r2[i1];
      }
    } else {
      st.site = &ve_emlrtRSI;
      h_binary_expand_op(&st, ehat, Y, t, r);
      ehat_data = ehat->data;
    }
    /*  잔차항 */
    i1 = r1->size[0] * r1->size[1];
    r1->size[0] = ehat->size[0];
    r1->size[1] = ehat->size[0];
    emxEnsureCapacity_real_T(sp, r1, i1, &ff_emlrtRTEI);
    r2 = r1->data;
    loop_ub = ehat->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = ehat->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        r2[i2 + r1->size[0] * i1] = ehat_data[i2] * ehat_data[i1];
      }
    }
    if ((ehat2->size[0] != r1->size[0]) &&
        ((ehat2->size[0] != 1) && (r1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(ehat2->size[0], r1->size[0], &gb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((ehat2->size[1] != r1->size[1]) &&
        ((ehat2->size[1] != 1) && (r1->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(ehat2->size[1], r1->size[1], &fb_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((ehat2->size[0] == r1->size[0]) && (ehat2->size[1] == r1->size[1])) {
      loop_ub = ehat2->size[0] * ehat2->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        ehat2_data[i1] += r2[i1];
      }
    } else {
      st.site = &jj_emlrtRSI;
      b_plus(&st, ehat2, r1);
      ehat2_data = ehat2->data;
    }
    /*  k by k */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &ehat);
  /*  Wishart와 역Wishart의 관계를 이용 */
  st.site = &we_emlrtRSI;
  invpd(&st, R0, r1);
  r2 = r1->data;
  if ((ehat2->size[0] != r1->size[0]) &&
      ((ehat2->size[0] != 1) && (r1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(ehat2->size[0], r1->size[0], &eb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((ehat2->size[1] != r1->size[1]) &&
      ((ehat2->size[1] != 1) && (r1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(ehat2->size[1], r1->size[1], &db_emlrtECI,
                                (emlrtCTX)sp);
  }
  /*  R0는 Wishart의 hyper-parameter이므로 invpd(R0)를 통해 */
  /*  Inverse-Wishart의 hyperparameter로 전환 */
  if ((ehat2->size[0] == r1->size[0]) && (ehat2->size[1] == r1->size[1])) {
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = ehat2->size[0];
    b_X->size[1] = ehat2->size[1];
    emxEnsureCapacity_real_T(sp, b_X, i, &cf_emlrtRTEI);
    b_X_data = b_X->data;
    loop_ub = ehat2->size[0] * ehat2->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_X_data[i] = ehat2_data[i] + r2[i];
    }
    st.site = &xe_emlrtRSI;
    invpd(&st, b_X, ehat2);
  } else {
    st.site = &xe_emlrtRSI;
    i_binary_expand_op(&st, ehat2, xe_emlrtRSI, r1);
  }
  /*  Wishart의 hyper-parameter로 전환 */
  st.site = &ye_emlrtRSI;
  /*  sampling Wishart dist */
  /*  E(V) = Omega*nu */
  /*  X ~ Wishart(R,nu) <=> inv(X) ~ IW(inv(R),nu);  */
  b_st.site = &bf_emlrtRSI;
  b_cholmod(&b_st, ehat2, r1);
  b_st.site = &cf_emlrtRSI;
  c_st.site = &cf_emlrtRSI;
  b_randn(&c_st, ehat2->size[0], (real_T)Y->size[0] + nu, b_X);
  c_st.site = &ed_emlrtRSI;
  if (r1->size[0] != b_X->size[0]) {
    if (((r1->size[0] == 1) && (r1->size[1] == 1)) ||
        ((b_X->size[0] == 1) && (b_X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  c_st.site = &dd_emlrtRSI;
  mtimes(&c_st, r1, b_X, Omega_inv);
  ehat_data = Omega_inv->data;
  /*  k by nu */
  b_st.site = &df_emlrtRSI;
  i = ehat2->size[0] * ehat2->size[1];
  ehat2->size[0] = Omega_inv->size[0];
  ehat2->size[1] = Omega_inv->size[1];
  emxEnsureCapacity_real_T(&b_st, ehat2, i, &gf_emlrtRTEI);
  ehat2_data = ehat2->data;
  loop_ub = Omega_inv->size[0] * Omega_inv->size[1] - 1;
  emxFree_real_T(&b_st, &r1);
  for (i = 0; i <= loop_ub; i++) {
    ehat2_data[i] = ehat_data[i];
  }
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = Omega_inv->size[0];
  b_X->size[1] = Omega_inv->size[1];
  emxEnsureCapacity_real_T(&b_st, b_X, i, &hf_emlrtRTEI);
  b_X_data = b_X->data;
  loop_ub = Omega_inv->size[0] * Omega_inv->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_X_data[i] = ehat_data[i];
  }
  c_st.site = &dd_emlrtRSI;
  f_mtimes(&c_st, ehat2, b_X, Omega_inv);
  /*  k by k */
  /*  nu(W,prior)-> nu+p+1(IW,prior) */
  /*  -> nu+p+1+T(IW,poster) -> nu+T(W,posterior) */
  st.site = &af_emlrtRSI;
  invpd(&st, Omega_inv, Omega);
  emxFree_real_T(sp, &b_X);
  emxFree_real_T(sp, &ehat2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_Phi(const emlrtStack *sp, const emxArray_real_T *Y0,
                    const emxArray_real_T *YLm, real_T p,
                    const emxArray_real_T *b_, const emxArray_real_T *var_,
                    const emxArray_real_T *Omega_inv, emxArray_real_T *Phi,
                    emxArray_real_T *beta)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *XX;
  emxArray_real_T *XY;
  emxArray_real_T *b_Y0;
  emxArray_real_T *b_YLm;
  emxArray_real_T *precb_;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  const real_T *Y0_data;
  const real_T *YLm_data;
  real_T d;
  real_T varargin_1;
  real_T *XX_data;
  real_T *XY_data;
  real_T *precb__data;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T nx;
  int32_T t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  YLm_data = YLm->data;
  Y0_data = Y0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &XX, 2, &jd_emlrtRTEI);
  /*  Phi 샘플링 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  설명변수, 3차원 */
  /*  number of columns */
  varargin_1 =
      p * (real_T)Y0->size[1] * (real_T)Y0->size[1] + (real_T)Y0->size[1];
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &gb_emlrtDCI, (emlrtCTX)sp);
  }
  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &fb_emlrtDCI, (emlrtCTX)sp);
  }
  i = XX->size[0] * XX->size[1];
  XX->size[0] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T(sp, XX, i, &jd_emlrtRTEI);
  varargin_1 =
      p * (real_T)Y0->size[1] * (real_T)Y0->size[1] + (real_T)Y0->size[1];
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &ib_emlrtDCI, (emlrtCTX)sp);
  }
  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &hb_emlrtDCI, (emlrtCTX)sp);
  }
  i = XX->size[0] * XX->size[1];
  XX->size[1] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T(sp, XX, i, &jd_emlrtRTEI);
  XX_data = XX->data;
  varargin_1 =
      p * (real_T)Y0->size[1] * (real_T)Y0->size[1] + (real_T)Y0->size[1];
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &kb_emlrtDCI, (emlrtCTX)sp);
  }
  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &jb_emlrtDCI, (emlrtCTX)sp);
  }
  d = p * (real_T)Y0->size[1] * (real_T)Y0->size[1] + (real_T)Y0->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &kb_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &jb_emlrtDCI, (emlrtCTX)sp);
  }
  nx = (int32_T)varargin_1 * (int32_T)d;
  for (i = 0; i < nx; i++) {
    XX_data[i] = 0.0;
  }
  emxInit_real_T(sp, &XY, 1, &kd_emlrtRTEI);
  varargin_1 =
      p * (real_T)Y0->size[1] * (real_T)Y0->size[1] + (real_T)Y0->size[1];
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &mb_emlrtDCI, (emlrtCTX)sp);
  }
  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &lb_emlrtDCI, (emlrtCTX)sp);
  }
  i = XY->size[0];
  XY->size[0] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T(sp, XY, i, &kd_emlrtRTEI);
  XY_data = XY->data;
  varargin_1 =
      p * (real_T)Y0->size[1] * (real_T)Y0->size[1] + (real_T)Y0->size[1];
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &mb_emlrtDCI, (emlrtCTX)sp);
  }
  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &lb_emlrtDCI, (emlrtCTX)sp);
  }
  nx = (int32_T)varargin_1;
  for (i = 0; i < nx; i++) {
    XY_data[i] = 0.0;
  }
  /*  = T-p */
  i = Y0->size[0];
  emxInit_real_T(sp, &precb_, 2, &qd_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &kb_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &rd_emlrtRTEI);
  emxInit_real_T(sp, &b_YLm, 2, &md_emlrtRTEI);
  emxInit_real_T(sp, &b_Y0, 2, &od_emlrtRTEI);
  for (t = 0; t < i; t++) {
    if (t + 1 > YLm->size[2]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, YLm->size[2], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    /*  x(t)' for SUR regressor k by pkk */
    st.site = &tc_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    nx = YLm->size[0];
    if (YLm->size[0] != Omega_inv->size[0]) {
      if (((YLm->size[0] == 1) && (YLm->size[1] == 1)) ||
          ((Omega_inv->size[0] == 1) && (Omega_inv->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &n_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    loop_ub = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &md_emlrtRTEI);
    precb__data = b_YLm->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < nx; i2++) {
        precb__data[i2 + b_YLm->size[0] * i1] =
            YLm_data[(i2 + YLm->size[0] * i1) +
                     YLm->size[0] * YLm->size[1] * t];
      }
    }
    b_st.site = &dd_emlrtRSI;
    mtimes(&b_st, b_YLm, Omega_inv, precb_);
    st.site = &tc_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    nx = YLm->size[0];
    if (YLm->size[0] != precb_->size[1]) {
      if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) ||
          ((YLm->size[0] == 1) && (YLm->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &n_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    loop_ub = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &md_emlrtRTEI);
    precb__data = b_YLm->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < nx; i2++) {
        precb__data[i2 + b_YLm->size[0] * i1] =
            YLm_data[(i2 + YLm->size[0] * i1) +
                     YLm->size[0] * YLm->size[1] * t];
      }
    }
    b_st.site = &dd_emlrtRSI;
    b_mtimes(&b_st, precb_, b_YLm, r);
    precb__data = r->data;
    if ((XX->size[0] != r->size[0]) &&
        ((XX->size[0] != 1) && (r->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(XX->size[0], r->size[0], &i_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((XX->size[1] != r->size[1]) &&
        ((XX->size[1] != 1) && (r->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(XX->size[1], r->size[1], &j_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((XX->size[0] == r->size[0]) && (XX->size[1] == r->size[1])) {
      nx = XX->size[0] * XX->size[1];
      for (i1 = 0; i1 < nx; i1++) {
        XX_data[i1] += precb__data[i1];
      }
    } else {
      st.site = &tc_emlrtRSI;
      b_plus(&st, XX, r);
      XX_data = XX->data;
    }
    /*  B1에서의 summation 부분 */
    if (t + 1 > Y0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, Y0->size[0], &s_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &uc_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    nx = YLm->size[0];
    if (YLm->size[0] != Omega_inv->size[0]) {
      if (((YLm->size[0] == 1) && (YLm->size[1] == 1)) ||
          ((Omega_inv->size[0] == 1) && (Omega_inv->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &n_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    loop_ub = YLm->size[1];
    i1 = b_YLm->size[0] * b_YLm->size[1];
    b_YLm->size[0] = YLm->size[0];
    b_YLm->size[1] = YLm->size[1];
    emxEnsureCapacity_real_T(&st, b_YLm, i1, &md_emlrtRTEI);
    precb__data = b_YLm->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < nx; i2++) {
        precb__data[i2 + b_YLm->size[0] * i1] =
            YLm_data[(i2 + YLm->size[0] * i1) +
                     YLm->size[0] * YLm->size[1] * t];
      }
    }
    b_st.site = &dd_emlrtRSI;
    mtimes(&b_st, b_YLm, Omega_inv, precb_);
    st.site = &uc_emlrtRSI;
    b_st.site = &ed_emlrtRSI;
    nx = Y0->size[1];
    if (precb_->size[1] != Y0->size[1]) {
      if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) ||
          (Y0->size[1] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &n_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    i1 = b_Y0->size[0] * b_Y0->size[1];
    b_Y0->size[0] = 1;
    b_Y0->size[1] = Y0->size[1];
    emxEnsureCapacity_real_T(&st, b_Y0, i1, &od_emlrtRTEI);
    precb__data = b_Y0->data;
    for (i1 = 0; i1 < nx; i1++) {
      precb__data[i1] = Y0_data[t + Y0->size[0] * i1];
    }
    b_st.site = &dd_emlrtRSI;
    c_mtimes(&b_st, precb_, b_Y0, r1);
    precb__data = r1->data;
    nx = XY->size[0];
    if ((XY->size[0] != r1->size[0]) &&
        ((XY->size[0] != 1) && (r1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(XY->size[0], r1->size[0], &k_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (XY->size[0] == r1->size[0]) {
      for (i1 = 0; i1 < nx; i1++) {
        XY_data[i1] += precb__data[i1];
      }
    } else {
      st.site = &uc_emlrtRSI;
      plus(&st, XY, r1);
      XY_data = XY->data;
    }
    /*  A에서의 summation 부분 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_Y0);
  emxFree_real_T(sp, &b_YLm);
  st.site = &vc_emlrtRSI;
  invpd(&st, var_, precb_);
  precb__data = precb_->data;
  if ((precb_->size[0] != XX->size[0]) &&
      ((precb_->size[0] != 1) && (XX->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[0], XX->size[0], &l_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((precb_->size[1] != XX->size[1]) &&
      ((precb_->size[1] != 1) && (XX->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(precb_->size[1], XX->size[1], &m_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((precb_->size[0] == XX->size[0]) && (precb_->size[1] == XX->size[1])) {
    nx = precb_->size[0] * precb_->size[1];
    i = XX->size[0] * XX->size[1];
    XX->size[0] = precb_->size[0];
    XX->size[1] = precb_->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &ld_emlrtRTEI);
    XX_data = XX->data;
    for (i = 0; i < nx; i++) {
      XX_data[i] += precb__data[i];
    }
  } else {
    st.site = &lj_emlrtRSI;
    c_plus(&st, XX, precb_);
    XX_data = XX->data;
  }
  if ((XX->size[0] != XX->size[1]) &&
      ((XX->size[0] != 1) && (XX->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], XX->size[1], &n_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((XX->size[0] != XX->size[1]) &&
      ((XX->size[1] != 1) && (XX->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], XX->size[0], &o_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (XX->size[0] == XX->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = XX->size[0];
    r->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &kb_emlrtRTEI);
    precb__data = r->data;
    nx = XX->size[1];
    for (i = 0; i < nx; i++) {
      loop_ub = XX->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        precb__data[i1 + r->size[0] * i] =
            0.5 *
            (XX_data[i1 + XX->size[0] * i] + XX_data[i + XX->size[0] * i1]);
      }
    }
    st.site = &wc_emlrtRSI;
    invpd(&st, r, XX);
    XX_data = XX->data;
  } else {
    st.site = &wc_emlrtRSI;
    c_binary_expand_op(&st, XX, wc_emlrtRSI);
    XX_data = XX->data;
  }
  if ((XX->size[0] != XX->size[1]) &&
      ((XX->size[0] != 1) && (XX->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[0], XX->size[1], &p_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((XX->size[0] != XX->size[1]) &&
      ((XX->size[1] != 1) && (XX->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XX->size[1], XX->size[0], &q_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (XX->size[0] == XX->size[1]) {
    i = r->size[0] * r->size[1];
    r->size[0] = XX->size[0];
    r->size[1] = XX->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &kb_emlrtRTEI);
    precb__data = r->data;
    nx = XX->size[1];
    for (i = 0; i < nx; i++) {
      loop_ub = XX->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        precb__data[i1 + r->size[0] * i] =
            0.5 *
            (XX_data[i1 + XX->size[0] * i] + XX_data[i + XX->size[0] * i1]);
      }
    }
    i = XX->size[0] * XX->size[1];
    XX->size[0] = r->size[0];
    XX->size[1] = r->size[1];
    emxEnsureCapacity_real_T(sp, XX, i, &nd_emlrtRTEI);
    XX_data = XX->data;
    nx = r->size[0] * r->size[1];
    for (i = 0; i < nx; i++) {
      XX_data[i] = precb__data[i];
    }
  } else {
    st.site = &kj_emlrtRSI;
    b_binary_expand_op(&st, XX);
  }
  st.site = &xc_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  if (b_->size[0] != precb_->size[1]) {
    if (((precb_->size[0] == 1) && (precb_->size[1] == 1)) ||
        (b_->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &dd_emlrtRSI;
  e_mtimes(&b_st, precb_, b_, r1);
  precb__data = r1->data;
  emxFree_real_T(sp, &precb_);
  if ((XY->size[0] != r1->size[0]) &&
      ((XY->size[0] != 1) && (r1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(XY->size[0], r1->size[0], &r_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (XY->size[0] == r1->size[0]) {
    nx = XY->size[0];
    for (i = 0; i < nx; i++) {
      XY_data[i] += precb__data[i];
    }
  } else {
    st.site = &xc_emlrtRSI;
    plus(&st, XY, r1);
  }
  /*  b_ = b0 */
  st.site = &yc_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  if (XY->size[0] != XX->size[1]) {
    if (((XX->size[0] == 1) && (XX->size[1] == 1)) || (XY->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &dd_emlrtRSI;
  e_mtimes(&b_st, XX, XY, beta);
  XX_data = beta->data;
  /*  full conditional mean */
  st.site = &ad_emlrtRSI;
  b_cholmod(&st, XX, r);
  st.site = &bd_emlrtRSI;
  b_st.site = &bd_emlrtRSI;
  randn(&b_st,
        p * (real_T)Y0->size[1] * (real_T)Y0->size[1] + (real_T)Y0->size[1],
        XY);
  b_st.site = &ed_emlrtRSI;
  emxFree_real_T(&b_st, &XX);
  if (r->size[0] != XY->size[0]) {
    if (((r->size[0] == 1) && (r->size[1] == 1)) || (XY->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &dd_emlrtRSI;
  g_mtimes(&b_st, r, XY, r1);
  precb__data = r1->data;
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &XY);
  if ((beta->size[0] != r1->size[0]) &&
      ((beta->size[0] != 1) && (r1->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(beta->size[0], r1->size[0], &s_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (beta->size[0] == r1->size[0]) {
    nx = beta->size[0];
    for (i = 0; i < nx; i++) {
      XX_data[i] += precb__data[i];
    }
  } else {
    st.site = &bd_emlrtRSI;
    plus(&st, beta, r1);
    XX_data = beta->data;
  }
  emxFree_real_T(sp, &r1);
  /*  beta sampling 하기 */
  st.site = &cd_emlrtRSI;
  varargin_1 = p * (real_T)Y0->size[1] + 1.0;
  nx = beta->size[0];
  b_st.site = &ob_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  assertValidSizeArg(&c_st, varargin_1);
  c_st.site = &pb_emlrtRSI;
  assertValidSizeArg(&c_st, Y0->size[1]);
  loop_ub = beta->size[0];
  if (1 > beta->size[0]) {
    loop_ub = 1;
  }
  nx = muIntScalarMax_sint32(nx, loop_ub);
  if ((int32_T)varargin_1 > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (Y0->size[1] > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)varargin_1 < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)varargin_1 * Y0->size[1] != beta->size[0]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &d_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  i = Phi->size[0] * Phi->size[1];
  Phi->size[0] = (int32_T)varargin_1;
  Phi->size[1] = Y0->size[1];
  emxEnsureCapacity_real_T(sp, Phi, i, &pd_emlrtRTEI);
  precb__data = Phi->data;
  nx = (int32_T)varargin_1 * Y0->size[1];
  for (i = 0; i < nx; i++) {
    precb__data[i] = XX_data[i];
  }
  /*  p*k by k; Phi의 전치는 각 시차별 기울기 계수행렬을 오른쪽으로 나열한
   * 것이다. */
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
  emxInit_real_T(sp, &b_XX, 2, &ih_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, b_XX, i, &ih_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, XX, i, &ih_emlrtRTEI);
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

static void
binary_expand_op(const emlrtStack *sp, emxArray_real_T *yf,
                 emlrtRSInfo nj_emlrtRSI, const emxArray_real_T *beta_hat,
                 const int32_T input_sizes[2], const int32_T sizes[2],
                 const emxArray_real_T *Omega_hat, const emxArray_real_T *retf,
                 const emxArray_real_T *r2, const emxArray_real_T *vec_Omega)
{
  emlrtStack st;
  emxArray_real_T *b_beta_hat;
  emxArray_real_T *b_retf;
  emxArray_real_T *r1;
  const real_T *Omega_hat_data;
  const real_T *beta_hat_data;
  const real_T *r;
  const real_T *retf_data;
  const real_T *vec_Omega_data;
  real_T *b_beta_hat_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_0;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  vec_Omega_data = vec_Omega->data;
  r = r2->data;
  retf_data = retf->data;
  Omega_hat_data = Omega_hat->data;
  beta_hat_data = beta_hat->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_beta_hat, 2, &gc_emlrtRTEI);
  input_sizes_idx_0 = input_sizes[0];
  input_sizes_idx_1 = sizes[1];
  sizes_idx_0 = sizes[0];
  sizes_idx_1 = sizes[1];
  i = b_beta_hat->size[0] * b_beta_hat->size[1];
  b_beta_hat->size[0] = input_sizes_idx_0 + sizes_idx_0;
  b_beta_hat->size[1] = input_sizes_idx_1;
  emxEnsureCapacity_real_T(sp, b_beta_hat, i, &gc_emlrtRTEI);
  b_beta_hat_data = b_beta_hat->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      b_beta_hat_data[i1 + b_beta_hat->size[0] * i] =
          beta_hat_data[i1 + input_sizes_idx_0 * i];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      b_beta_hat_data[(i1 + input_sizes_idx_0) + b_beta_hat->size[0] * i] =
          Omega_hat_data[i1 + sizes_idx_0 * i];
    }
  }
  emxInit_real_T(sp, &b_retf, 1, &ic_emlrtRTEI);
  i = b_retf->size[0];
  b_retf->size[0] = retf->size[1];
  emxEnsureCapacity_real_T(sp, b_retf, i, &ic_emlrtRTEI);
  b_beta_hat_data = b_retf->data;
  input_sizes_idx_0 = retf->size[1];
  for (i = 0; i < input_sizes_idx_0; i++) {
    b_beta_hat_data[i] = retf_data[i];
  }
  emxInit_real_T(sp, &r1, 2, &kb_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  if (vec_Omega->size[1] == 1) {
    r1->size[0] = r2->size[0];
  } else {
    r1->size[0] = vec_Omega->size[1];
  }
  if (vec_Omega->size[0] == 1) {
    r1->size[1] = r2->size[1];
  } else {
    r1->size[1] = vec_Omega->size[0];
  }
  emxEnsureCapacity_real_T(sp, r1, i, &kb_emlrtRTEI);
  b_beta_hat_data = r1->data;
  input_sizes_idx_1 = (r2->size[0] != 1);
  sizes_idx_0 = (r2->size[1] != 1);
  sizes_idx_1 = (vec_Omega->size[1] != 1);
  stride_1_1 = (vec_Omega->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (vec_Omega->size[0] == 1) {
    input_sizes_idx_0 = r2->size[1];
  } else {
    input_sizes_idx_0 = vec_Omega->size[0];
  }
  for (i = 0; i < input_sizes_idx_0; i++) {
    if (vec_Omega->size[1] == 1) {
      loop_ub = r2->size[0];
    } else {
      loop_ub = vec_Omega->size[1];
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_beta_hat_data[i1 + r1->size[0] * i] =
          0.5 *
          (r[i1 * input_sizes_idx_1 + r2->size[0] * aux_0_1] +
           vec_Omega_data[aux_1_1 + vec_Omega->size[0] * (i1 * sizes_idx_1)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += sizes_idx_0;
  }
  st.site = &nj_emlrtRSI;
  b_lnpdfmvn(&st, b_beta_hat, b_retf, r1, yf);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &b_retf);
  emxFree_real_T(sp, &b_beta_hat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *XX,
                               emlrtRSInfo nj_emlrtRSI)
{
  emlrtStack st;
  emxArray_real_T *r;
  real_T *XX_data;
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
  emxInit_real_T(sp, &r, 2, &kb_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, r, i, &kb_emlrtRTEI);
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
  st.site = &nj_emlrtRSI;
  invpd(&st, r, XX);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[34])
{
  static const int32_T iv[2] = {1, 34};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 34, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
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
  emxInit_real_T(sp, &b_precb_, 2, &jh_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, b_precb_, i, &jh_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, XX, i, &jh_emlrtRTEI);
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

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
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

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"format", true, location);
}

static const mxArray *g_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat,
                               const emxArray_real_T *Y, int32_T t,
                               const emxArray_real_T *r1)
{
  const real_T *Y_data;
  const real_T *r;
  real_T *ehat_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  Y_data = Y->data;
  i = Y->size[1];
  stride_0_0 = ehat->size[0];
  if (r1->size[0] == 1) {
    ehat->size[0] = i;
  } else {
    ehat->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, ehat, stride_0_0, &ef_emlrtRTEI);
  ehat_data = ehat->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    ehat_data[i] =
        Y_data[t + Y->size[0] * (i * stride_0_0)] - r[i * stride_1_0];
  }
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

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *ehat2,
                               emlrtRSInfo nj_emlrtRSI,
                               const emxArray_real_T *r1)
{
  emlrtStack st;
  emxArray_real_T *b_ehat2;
  const real_T *r;
  real_T *b_ehat2_data;
  real_T *ehat2_data;
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
  ehat2_data = ehat2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_ehat2, 2, &cf_emlrtRTEI);
  i = b_ehat2->size[0] * b_ehat2->size[1];
  if (r1->size[0] == 1) {
    b_ehat2->size[0] = ehat2->size[0];
  } else {
    b_ehat2->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    b_ehat2->size[1] = ehat2->size[1];
  } else {
    b_ehat2->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_ehat2, i, &cf_emlrtRTEI);
  b_ehat2_data = b_ehat2->data;
  stride_0_0 = (ehat2->size[0] != 1);
  stride_0_1 = (ehat2->size[1] != 1);
  stride_1_0 = (r1->size[0] != 1);
  stride_1_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (r1->size[1] == 1) {
    loop_ub = ehat2->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      b_loop_ub = ehat2->size[0];
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_ehat2_data[i1 + b_ehat2->size[0] * i] =
          ehat2_data[i1 * stride_0_0 + ehat2->size[0] * aux_0_1] +
          r[i1 * stride_1_0 + r1->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &nj_emlrtRSI;
  invpd(&st, b_ehat2, ehat2);
  emxFree_real_T(sp, &b_ehat2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *j_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  return y;
}

static void makeYX(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                   emxArray_real_T *Y0, emxArray_real_T *YLm,
                   emxArray_real_T *YL)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *B;
  emxArray_real_T *b_Y;
  emxArray_real_T *nj_emlrtRSI;
  emxArray_real_T *oj_emlrtRSI;
  emxArray_real_T *xt;
  const real_T *Y_data;
  real_T d;
  real_T kki;
  real_T *B_data;
  real_T *Y0_data;
  real_T *YL_data;
  real_T *b_Y_data;
  real_T *xt_data;
  int32_T b_YL[2];
  int32_T iv[2];
  int32_T b_j1;
  int32_T i;
  int32_T i1;
  int32_T j2;
  int32_T k;
  int32_T kidx;
  int32_T ma;
  int32_T na;
  int32_T nb;
  int32_T t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  종속, 설명변수 만들기 %%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  number of columns */
  k = Y->size[1];
  /*  변수의 수 */
  /*  시계열의 크기 */
  if (p + 1.0 > Y->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    if (p + 1.0 != (int32_T)muDoubleScalarFloor(p + 1.0)) {
      emlrtIntegerCheckR2012b(p + 1.0, &r_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(p + 1.0) < 1) || ((int32_T)(p + 1.0) > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(p + 1.0), 1, Y->size[0],
                                    &q_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(p + 1.0) - 1;
    if (Y->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(Y->size[0], 1, Y->size[0], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = Y->size[0];
  }
  na = Y->size[1];
  kidx = i1 - i;
  i1 = Y0->size[0] * Y0->size[1];
  Y0->size[0] = kidx;
  Y0->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, Y0, i1, &wc_emlrtRTEI);
  Y0_data = Y0->data;
  for (i1 = 0; i1 < na; i1++) {
    for (j2 = 0; j2 < kidx; j2++) {
      Y0_data[j2 + Y0->size[0] * i1] = Y_data[(i + j2) + Y->size[0] * i1];
    }
  }
  emxInit_real_T(sp, &b_Y, 2, &xc_emlrtRTEI);
  /*  종속변수 */
  st.site = &sb_emlrtRSI;
  na = Y->size[1];
  i1 = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = kidx;
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i1, &xc_emlrtRTEI);
  b_Y_data = b_Y->data;
  for (i1 = 0; i1 < na; i1++) {
    for (j2 = 0; j2 < kidx; j2++) {
      b_Y_data[j2 + b_Y->size[0] * i1] = Y_data[(i + j2) + Y->size[0] * i1];
    }
  }
  emxInit_real_T(&st, &nj_emlrtRSI, 2, &ed_emlrtRTEI);
  b_st.site = &vb_emlrtRSI;
  mean(&b_st, b_Y, nj_emlrtRSI);
  /*  Y0 = demeanc(Y0); */
  /*  설명변수(=Y의 과거값) 만들기 */
  d = (real_T)Y->size[0] - p;
  emxFree_real_T(sp, &nj_emlrtRSI);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &t_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &s_emlrtDCI, (emlrtCTX)sp);
  }
  i = YL->size[0] * YL->size[1];
  YL->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, YL, i, &yc_emlrtRTEI);
  d = p * (real_T)Y->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &v_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &u_emlrtDCI, (emlrtCTX)sp);
  }
  i = YL->size[0] * YL->size[1];
  YL->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, YL, i, &yc_emlrtRTEI);
  YL_data = YL->data;
  d = (real_T)Y->size[0] - p;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &cb_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, (emlrtCTX)sp);
  }
  kki = p * (real_T)Y->size[1];
  if (!(kki >= 0.0)) {
    emlrtNonNegativeCheckR2012b(kki, &cb_emlrtDCI, (emlrtCTX)sp);
  }
  if (kki != (int32_T)muDoubleScalarFloor(kki)) {
    emlrtIntegerCheckR2012b(kki, &bb_emlrtDCI, (emlrtCTX)sp);
  }
  na = (int32_T)d * (int32_T)kki;
  for (i = 0; i < na; i++) {
    YL_data[i] = 0.0;
  }
  i = (int32_T)p;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, p, mxDOUBLE_CLASS, (int32_T)p,
                                &j_emlrtRTEI, (emlrtCTX)sp);
  if (0 <= (int32_T)p - 1) {
    iv[1] = Y->size[1];
    ma = Y->size[1];
  }
  for (nb = 0; nb < i; nb++) {
    d = (p + 1.0) - ((real_T)nb + 1.0);
    i1 = (int32_T)((real_T)Y->size[0] - ((real_T)nb + 1.0));
    if (d > i1) {
      j2 = 0;
      i1 = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Y->size[0], &o_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      j2 = (int32_T)d - 1;
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &n_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    d = (real_T)k * (((real_T)nb + 1.0) - 1.0) + 1.0;
    kki = (real_T)k * ((real_T)nb + 1.0);
    if (d > kki) {
      kidx = 0;
      b_j1 = 0;
    } else {
      if (((int32_T)d < 1) || ((int32_T)d > YL->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, YL->size[1], &m_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      kidx = (int32_T)d - 1;
      if (((int32_T)kki < 1) || ((int32_T)kki > YL->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)kki, 1, YL->size[1], &l_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_j1 = (int32_T)kki;
    }
    b_YL[0] = YL->size[0];
    b_YL[1] = b_j1 - kidx;
    na = i1 - j2;
    iv[0] = na;
    emlrtSubAssignSizeCheckR2012b(&b_YL[0], 2, &iv[0], 2, &h_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < ma; i1++) {
      for (b_j1 = 0; b_j1 < na; b_j1++) {
        YL_data[b_j1 + YL->size[0] * (kidx + i1)] =
            Y_data[(j2 + b_j1) + Y->size[0] * i1];
      }
    }
    /*  p 시차에 해당하는 전체 설명변수 데이터 블록을 YL의 (p-1) 시차 블록의
     * 우측에 저장 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &oj_emlrtRSI, 2, &ed_emlrtRTEI);
  st.site = &tb_emlrtRSI;
  b_st.site = &vb_emlrtRSI;
  mean(&b_st, YL, oj_emlrtRSI);
  /*  YL = demeanc(YL); */
  /*  각 식에 있는 설명변수의 수 */
  kki = (real_T)Y->size[1] * (p * (real_T)Y->size[1]);
  /*  축약형 VAR의 회귀계수의 수 */
  i = YLm->size[0] * YLm->size[1] * YLm->size[2];
  YLm->size[0] = Y->size[1];
  emxEnsureCapacity_real_T(sp, YLm, i, &ad_emlrtRTEI);
  d = kki + (real_T)Y->size[1];
  emxFree_real_T(sp, &oj_emlrtRSI);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &x_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &w_emlrtDCI, (emlrtCTX)sp);
  }
  i = YLm->size[0] * YLm->size[1] * YLm->size[2];
  YLm->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, YLm, i, &ad_emlrtRTEI);
  d = (real_T)Y->size[0] - p;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ab_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &y_emlrtDCI, (emlrtCTX)sp);
  }
  i = YLm->size[0] * YLm->size[1] * YLm->size[2];
  YLm->size[2] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, YLm, i, &ad_emlrtRTEI);
  Y0_data = YLm->data;
  d = kki + (real_T)Y->size[1];
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &eb_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &db_emlrtDCI, (emlrtCTX)sp);
  }
  kki = (real_T)Y->size[0] - p;
  if (!(kki >= 0.0)) {
    emlrtNonNegativeCheckR2012b(kki, &eb_emlrtDCI, (emlrtCTX)sp);
  }
  if (kki != (int32_T)muDoubleScalarFloor(kki)) {
    emlrtIntegerCheckR2012b(kki, &db_emlrtDCI, (emlrtCTX)sp);
  }
  na = Y->size[1] * (int32_T)d * (int32_T)kki;
  for (i = 0; i < na; i++) {
    Y0_data[i] = 0.0;
  }
  /*  설명변수를 3차원으로 새롭게 저장할 방 */
  d = (real_T)Y->size[0] - p;
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
                                &i_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &xt, 2, &dd_emlrtRTEI);
  emxInit_real_T(sp, &B, 2, &bd_emlrtRTEI);
  for (t = 0; t < i; t++) {
    st.site = &ub_emlrtRSI;
    b_st.site = &ub_emlrtRSI;
    eye(&b_st, k, b_Y);
    b_Y_data = b_Y->data;
    if (((int32_T)(t + 1U) < 1) || ((int32_T)(t + 1U) > YL->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(t + 1U), 1, YL->size[0],
                                    &k_emlrtBCI, &st);
    }
    na = YL->size[1];
    i1 = B->size[0] * B->size[1];
    B->size[0] = 1;
    B->size[1] = YL->size[1] + 1;
    emxEnsureCapacity_real_T(&st, B, i1, &bd_emlrtRTEI);
    B_data = B->data;
    B_data[0] = 1.0;
    for (i1 = 0; i1 < na; i1++) {
      B_data[i1 + 1] = YL_data[t + YL->size[0] * i1];
    }
    ma = b_Y->size[0];
    na = b_Y->size[1];
    nb = B->size[1];
    i1 = xt->size[0] * xt->size[1];
    xt->size[0] = b_Y->size[0];
    xt->size[1] = b_Y->size[1] * B->size[1];
    emxEnsureCapacity_real_T(&st, xt, i1, &cd_emlrtRTEI);
    xt_data = xt->data;
    kidx = -1;
    b_st.site = &pc_emlrtRSI;
    if ((1 <= b_Y->size[1]) && (b_Y->size[1] > 2147483646)) {
      c_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (b_j1 = 0; b_j1 < na; b_j1++) {
      b_st.site = &qc_emlrtRSI;
      if (nb > 2147483646) {
        c_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (j2 = 0; j2 < nb; j2++) {
        b_st.site = &rc_emlrtRSI;
        if ((1 <= ma) && (ma > 2147483646)) {
          c_st.site = &ib_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i1 = 0; i1 < ma; i1++) {
          xt_data[(kidx + i1) + 1] =
              b_Y_data[i1 + b_Y->size[0] * b_j1] * B_data[j2];
        }
        kidx += ma;
      }
    }
    /*  x(t)' for regressor of SUR */
    if ((t + 1 < 1) || (t + 1 > YLm->size[2])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, YLm->size[2], &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_YL[0] = YLm->size[0];
    b_YL[1] = YLm->size[1];
    emlrtSubAssignSizeCheckR2012b(&b_YL[0], 2, &xt->size[0], 2, &g_emlrtECI,
                                  (emlrtCTX)sp);
    na = xt->size[1];
    for (i1 = 0; i1 < na; i1++) {
      kidx = xt->size[0];
      for (j2 = 0; j2 < kidx; j2++) {
        Y0_data[(j2 + YLm->size[0] * i1) + YLm->size[0] * YLm->size[1] * t] =
            xt_data[j2 + xt->size[0] * i1];
      }
    }
    /*  p by k, x(t)'를 한층 한층 쌓는 것 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_Y);
  emxFree_real_T(sp, &B);
  emxFree_real_T(sp, &xt);
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
  emxInit_real_T(sp, &b_XY, 1, &hh_emlrtRTEI);
  i = b_XY->size[0];
  if (r1->size[0] == 1) {
    b_XY->size[0] = XY->size[0];
  } else {
    b_XY->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_XY, i, &hh_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, XY, i, &hh_emlrtRTEI);
  XY_data = XY->data;
  loop_ub = b_XY->size[0];
  for (i = 0; i < loop_ub; i++) {
    XY_data[i] = b_XY_data[i];
  }
  emxFree_real_T(sp, &b_XY);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Reduced_BVAR(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                  real_T n0, real_T n1, real_T nu, const emxArray_real_T *R0,
                  const emxArray_real_T *b_, const emxArray_real_T *var_,
                  char_T ML, struct0_T *Output)
{
  static const char_T cv1[38] = {
      'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n', 'g', ' ', 't', 'h',
      'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ', 'P', 'l',
      'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.'};
  static const char_T cv5[34] = {'[', 'C', 'o', 'n', 's', ' ', 'p', 'h', 'i',
                                 '(', '1', ')', ' ', 'p', 'h', 'i', '(', '2',
                                 ')', ' ', '.', '.', '.', ' ', 'p', 'h', 'i',
                                 '(', 'p', ')', ']', ' ', '=', ' '};
  static const char_T cv4[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv3[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T cv6[7] = {'O', 'm', 'e', 'g', 'a', ':', ' '};
  static const char_T b_cv[6] = {'s', 'h', 'o', 'r', 't', 'G'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *Omega0;
  emxArray_real_T *Omega_hat;
  emxArray_real_T *Omega_inv;
  emxArray_real_T *Phi;
  emxArray_real_T *Y0;
  emxArray_real_T *YLm;
  emxArray_real_T *aux1;
  emxArray_real_T *b_Y0;
  emxArray_real_T *b_aux1;
  emxArray_real_T *beta;
  emxArray_real_T *beta_hat;
  emxArray_real_T *retf;
  emxArray_real_T *vec_Omega;
  emxArray_real_T *yf;
  const real_T *R0_data;
  const real_T *b__data;
  real_T beta_prior;
  real_T d;
  real_T lnlik1;
  real_T lnpost_hat;
  real_T n;
  real_T pkk;
  real_T *Omega0_data;
  real_T *Omega_hat_data;
  real_T *Omega_inv_data;
  real_T *Phi_data;
  real_T *Y0_data;
  real_T *YLm_data;
  real_T *aux1_data;
  real_T *b_aux1_data;
  real_T *beta_hat_data;
  real_T *retf_data;
  real_T *vec_Omega_data;
  int32_T input_sizes[2];
  int32_T result[2];
  int32_T sizes[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T input_sizes_idx_1;
  int32_T iter;
  int32_T loop_ub;
  int32_T nx;
  char_T cv2[37];
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  b__data = b_->data;
  R0_data = R0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &aux1, 2, &ec_emlrtRTEI);
  st.site = &oi_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, b_cv), &emlrtMCI);
  /*  number of columns */
  /*  변수의 개수 */
  pkk = p * (real_T)Y->size[1] * (real_T)Y->size[1];
  n = n0 + n1;
  /*  초기값 */
  /*  yf = zeros(k,1); */
  i = aux1->size[0] * aux1->size[1];
  aux1->size[0] = R0->size[0];
  aux1->size[1] = R0->size[1];
  emxEnsureCapacity_real_T(sp, aux1, i, &kb_emlrtRTEI);
  aux1_data = aux1->data;
  loop_ub = R0->size[0] * R0->size[1];
  for (i = 0; i < loop_ub; i++) {
    aux1_data[i] = R0_data[i] * nu;
  }
  emxInit_real_T(sp, &Omega0, 2, &lc_emlrtRTEI);
  emxInit_real_T(sp, &Omega_inv, 2, &lb_emlrtRTEI);
  st.site = &emlrtRSI;
  inv(&st, aux1, Omega0);
  Omega0_data = Omega0->data;
  i = Omega_inv->size[0] * Omega_inv->size[1];
  Omega_inv->size[0] = R0->size[0];
  Omega_inv->size[1] = R0->size[1];
  emxEnsureCapacity_real_T(sp, Omega_inv, i, &lb_emlrtRTEI);
  Omega_inv_data = Omega_inv->data;
  loop_ub = R0->size[0] * R0->size[1];
  for (i = 0; i < loop_ub; i++) {
    Omega_inv_data[i] = R0_data[i] * nu;
  }
  /*  beta = b_; */
  st.site = &b_emlrtRSI;
  beta_prior = p * (real_T)Y->size[1] + 1.0;
  nx = b_->size[0];
  b_st.site = &ob_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  assertValidSizeArg(&c_st, beta_prior);
  c_st.site = &pb_emlrtRSI;
  assertValidSizeArg(&c_st, Y->size[1]);
  input_sizes_idx_1 = b_->size[0];
  if (1 > b_->size[0]) {
    input_sizes_idx_1 = 1;
  }
  nx = muIntScalarMax_sint32(nx, input_sizes_idx_1);
  if ((int32_T)beta_prior > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (Y->size[1] > nx) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)beta_prior < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)beta_prior * Y->size[1] != b_->size[0]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &d_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  emxInit_real_T(&st, &Phi, 2, &mb_emlrtRTEI);
  i = Phi->size[0] * Phi->size[1];
  Phi->size[0] = (int32_T)beta_prior;
  Phi->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, Phi, i, &mb_emlrtRTEI);
  Phi_data = Phi->data;
  loop_ub = (int32_T)beta_prior * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    Phi_data[i] = b__data[i];
  }
  /*  축약형 방정식의 오차항의 precision matrix(공분산행렬의 역행렬)의
   * 사전평균을 초기값으로 둔 것 */
  /*  축약형 모형계수를 저장할 방 */
  if (!(n1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n1, &f_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n1);
  if (n1 != i) {
    emlrtIntegerCheckR2012b(n1, &e_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->consm->size[0] * Output->consm->size[1];
  Output->consm->size[0] = (int32_T)n1;
  Output->consm->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, Output->consm, i1, &nb_emlrtRTEI);
  if (n1 != i) {
    emlrtIntegerCheckR2012b(n1, &m_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = (int32_T)n1 * Y->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->consm->data[i1] = 0.0;
  }
  if (n1 != i) {
    emlrtIntegerCheckR2012b(n1, &g_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->betam->size[0] * Output->betam->size[1];
  nx = (int32_T)n1;
  Output->betam->size[0] = nx;
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &ob_emlrtRTEI);
  if (!(pkk >= 0.0)) {
    emlrtNonNegativeCheckR2012b(pkk, &i_emlrtDCI, (emlrtCTX)sp);
  }
  d = (int32_T)muDoubleScalarFloor(pkk);
  if (pkk != d) {
    emlrtIntegerCheckR2012b(pkk, &h_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[1] = (int32_T)pkk;
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &ob_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(n1, &n_emlrtDCI, (emlrtCTX)sp);
  }
  if (pkk != d) {
    emlrtIntegerCheckR2012b(pkk, &n_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = nx * (int32_T)pkk;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->betam->data[i1] = 0.0;
  }
  st.site = &c_emlrtRSI;
  b_st.site = &qb_emlrtRSI;
  c_st.site = &rb_emlrtRSI;
  beta_prior = (real_T)Y->size[1] * (real_T)Y->size[1];
  if (nx != i) {
    emlrtIntegerCheckR2012b(n1, &j_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->Omegam->size[0] * Output->Omegam->size[1];
  Output->Omegam->size[0] = nx;
  emxEnsureCapacity_real_T(sp, Output->Omegam, i1, &pb_emlrtRTEI);
  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &k_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->Omegam->size[0] * Output->Omegam->size[1];
  Output->Omegam->size[1] = (int32_T)beta_prior;
  emxEnsureCapacity_real_T(sp, Output->Omegam, i1, &pb_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(n1, &o_emlrtDCI, (emlrtCTX)sp);
  }
  if (beta_prior != (int32_T)beta_prior) {
    emlrtIntegerCheckR2012b(beta_prior, &o_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = nx * (int32_T)beta_prior;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->Omegam->data[i1] = 0.0;
  }
  if (nx != i) {
    emlrtIntegerCheckR2012b(n1, &l_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Output->yfm->size[0] * Output->yfm->size[1];
  Output->yfm->size[0] = nx;
  Output->yfm->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, Output->yfm, i1, &qb_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(n1, &p_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = (int32_T)n1 * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    Output->yfm->data[i] = 0.0;
  }
  emxInit_real_T(sp, &beta_hat, 1, &rb_emlrtRTEI);
  emxInit_real_T(sp, &Y0, 2, &nc_emlrtRTEI);
  emxInit_real_T(sp, &YLm, 3, &nc_emlrtRTEI);
  /*  사후분포 추출하기 */
  st.site = &d_emlrtRSI;
  makeYX(&st, Y, p, Y0, YLm, aux1);
  YLm_data = YLm->data;
  Y0_data = Y0->data;
  /*  종속변수(Y0)와 설명변수(YLm) 만들기 */
  i = beta_hat->size[0];
  beta_hat->size[0] = b_->size[0];
  emxEnsureCapacity_real_T(sp, beta_hat, i, &rb_emlrtRTEI);
  beta_hat_data = beta_hat->data;
  loop_ub = b_->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta_hat_data[i] = b__data[i];
  }
  emxInit_real_T(sp, &Omega_hat, 2, &sb_emlrtRTEI);
  i = Omega_hat->size[0] * Omega_hat->size[1];
  Omega_hat->size[0] = Omega0->size[0];
  Omega_hat->size[1] = Omega0->size[1];
  emxEnsureCapacity_real_T(sp, Omega_hat, i, &sb_emlrtRTEI);
  Omega_hat_data = Omega_hat->data;
  loop_ub = Omega0->size[0] * Omega0->size[1];
  for (i = 0; i < loop_ub; i++) {
    Omega_hat_data[i] = Omega0_data[i];
  }
  lnpost_hat = -4.8516519540979028E+8;
  /*  임의로 값을 주고 시작함 */
  lnlik1 = 0.0;
  i = (int32_T)n;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &yf, 1, &mc_emlrtRTEI);
  emxInit_real_T(sp, &vec_Omega, 2, &jc_emlrtRTEI);
  emxInit_real_T(sp, &beta, 1, &nc_emlrtRTEI);
  emxInit_real_T(sp, &retf, 2, &oc_emlrtRTEI);
  emxInit_real_T(sp, &b_Y0, 1, &dc_emlrtRTEI);
  emxInit_real_T(sp, &b_aux1, 2, &ub_emlrtRTEI);
  for (iter = 0; iter < i; iter++) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if (((real_T)iter + 1.0) -
            muDoubleScalarFloor(((real_T)iter + 1.0) / 100.0) * 100.0 ==
        0.0) {
      st.site = &fj_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i1 = 0; i1 < 37; i1++) {
        cv2[i1] = '=';
      }
      st.site = &qi_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv2), &f_emlrtMCI);
      st.site = &e_emlrtRSI;
      b_st.site = &sc_emlrtRSI;
      c_st.site = &ti_emlrtRSI;
      d_st.site = &vi_emlrtRSI;
      c_emlrt_marshallIn(
          &c_st,
          d_feval(&c_st, e_emlrt_marshallOut(&c_st, cv3),
                  g_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, cv4),
                  g_emlrt_marshallOut((real_T)iter + 1.0), &p_emlrtMCI),
          "<output of feval>");
      for (i1 = 0; i1 < 37; i1++) {
        cv2[i1] = '=';
      }
      st.site = &pi_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv2), &g_emlrtMCI);
      st.site = &ej_emlrtRSI;
      disp(&st, j_emlrt_marshallOut(), &h_emlrtMCI);
      st.site = &ri_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
      i1 = aux1->size[0] * aux1->size[1];
      aux1->size[0] = Phi->size[1];
      loop_ub = Phi->size[0];
      aux1->size[1] = Phi->size[0];
      emxEnsureCapacity_real_T(sp, aux1, i1, &vb_emlrtRTEI);
      aux1_data = aux1->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = Phi->size[1];
        for (nx = 0; nx < input_sizes_idx_1; nx++) {
          aux1_data[nx + aux1->size[0] * i1] = Phi_data[i1 + Phi->size[0] * nx];
        }
      }
      st.site = &dj_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(aux1), &j_emlrtMCI);
      st.site = &si_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv6), &k_emlrtMCI);
      st.site = &cj_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(Omega0), &l_emlrtMCI);
    }
    /*  Phi sampling 하기 */
    st.site = &f_emlrtRSI;
    Gen_Phi(&st, Y0, YLm, p, b_, var_, Omega_inv, aux1, beta);
    Omega_hat_data = beta->data;
    aux1_data = aux1->data;
    i1 = Phi->size[0] * Phi->size[1];
    Phi->size[0] = aux1->size[0];
    Phi->size[1] = aux1->size[1];
    emxEnsureCapacity_real_T(sp, Phi, i1, &ub_emlrtRTEI);
    Phi_data = Phi->data;
    loop_ub = aux1->size[0] * aux1->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Phi_data[i1] = aux1_data[i1];
    }
    /*  Omega sampling 하기 */
    st.site = &g_emlrtRSI;
    Gen_Omega(&st, Y0, YLm, beta, nu, R0, Omega0, Omega_inv);
    Omega0_data = Omega0->data;
    /*  sampling된 1기 뒤의 예측값 */
    i1 = b_aux1->size[0] * b_aux1->size[1];
    b_aux1->size[0] = aux1->size[0];
    b_aux1->size[1] = aux1->size[1];
    emxEnsureCapacity_real_T(sp, b_aux1, i1, &ub_emlrtRTEI);
    b_aux1_data = b_aux1->data;
    loop_ub = aux1->size[0] * aux1->size[1] - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_aux1_data[i1] = aux1_data[i1];
    }
    st.site = &h_emlrtRSI;
    Gen_Forecast(&st, Y, b_aux1, Omega0, p, Y->size[1], yf);
    Omega_inv_data = yf->data;
    if ((real_T)iter + 1.0 > n0) {
      /*  burn - in을 고려한 과정 */
      d = ((real_T)iter + 1.0) - n0;
      beta_prior = (int32_T)muDoubleScalarFloor(d);
      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > Output->consm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Output->consm->size[0],
                                      &h_emlrtBCI, (emlrtCTX)sp);
      }
      if (1 > aux1->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, aux1->size[0], &emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = aux1->size[1];
      i1 = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = aux1->size[1];
      emxEnsureCapacity_real_T(sp, retf, i1, &xb_emlrtRTEI);
      retf_data = retf->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        retf_data[i1] = aux1_data[aux1->size[0] * i1];
      }
      result[0] = 1;
      result[1] = Output->consm->size[1];
      emlrtSubAssignSizeCheckR2012b(&result[0], 2, &retf->size[0], 2,
                                    &e_emlrtECI, (emlrtCTX)sp);
      loop_ub = aux1->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Output->consm->data[((int32_T)d + Output->consm->size[0] * i1) - 1] =
            aux1_data[aux1->size[0] * i1];
      }
      if (2 > aux1->size[0]) {
        i1 = 0;
        nx = 0;
      } else {
        i1 = 1;
        nx = aux1->size[0];
      }
      loop_ub = aux1->size[1];
      i2 = b_aux1->size[0] * b_aux1->size[1];
      b_aux1->size[0] = aux1->size[1];
      input_sizes_idx_1 = nx - i1;
      b_aux1->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(sp, b_aux1, i2, &cc_emlrtRTEI);
      b_aux1_data = b_aux1->data;
      for (nx = 0; nx < input_sizes_idx_1; nx++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_aux1_data[i2 + b_aux1->size[0] * nx] =
              aux1_data[(i1 + nx) + aux1->size[0] * i2];
        }
      }
      st.site = &i_emlrtRSI;
      vec(&st, b_aux1);
      b_aux1_data = b_aux1->data;
      i1 = aux1->size[0] * aux1->size[1];
      aux1->size[0] = b_aux1->size[1];
      aux1->size[1] = b_aux1->size[0];
      emxEnsureCapacity_real_T(sp, aux1, i1, &ec_emlrtRTEI);
      aux1_data = aux1->data;
      loop_ub = b_aux1->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = b_aux1->size[1];
        for (nx = 0; nx < input_sizes_idx_1; nx++) {
          aux1_data[nx + aux1->size[0] * i1] =
              b_aux1_data[i1 + b_aux1->size[0] * nx];
        }
      }
      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > Output->betam->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Output->betam->size[0],
                                      &f_emlrtBCI, (emlrtCTX)sp);
      }
      if (1 > aux1->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, aux1->size[0], &b_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = aux1->size[1];
      i1 = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = aux1->size[1];
      emxEnsureCapacity_real_T(sp, retf, i1, &fc_emlrtRTEI);
      retf_data = retf->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        retf_data[i1] = aux1_data[aux1->size[0] * i1];
      }
      result[0] = 1;
      result[1] = Output->betam->size[1];
      emlrtSubAssignSizeCheckR2012b(&result[0], 2, &retf->size[0], 2, &emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = aux1->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Output->betam->data[((int32_T)d + Output->betam->size[0] * i1) - 1] =
            aux1_data[aux1->size[0] * i1];
      }
      i1 = b_aux1->size[0] * b_aux1->size[1];
      b_aux1->size[0] = Omega0->size[0];
      b_aux1->size[1] = Omega0->size[1];
      emxEnsureCapacity_real_T(sp, b_aux1, i1, &hc_emlrtRTEI);
      b_aux1_data = b_aux1->data;
      loop_ub = Omega0->size[0] * Omega0->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_aux1_data[i1] = Omega0_data[i1];
      }
      st.site = &j_emlrtRSI;
      vec(&st, b_aux1);
      b_aux1_data = b_aux1->data;
      i1 = vec_Omega->size[0] * vec_Omega->size[1];
      vec_Omega->size[0] = b_aux1->size[1];
      vec_Omega->size[1] = b_aux1->size[0];
      emxEnsureCapacity_real_T(sp, vec_Omega, i1, &jc_emlrtRTEI);
      vec_Omega_data = vec_Omega->data;
      loop_ub = b_aux1->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = b_aux1->size[1];
        for (nx = 0; nx < input_sizes_idx_1; nx++) {
          vec_Omega_data[nx + vec_Omega->size[0] * i1] =
              b_aux1_data[i1 + b_aux1->size[0] * nx];
        }
      }
      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > Output->Omegam->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Output->Omegam->size[0],
                                      &g_emlrtBCI, (emlrtCTX)sp);
      }
      if (1 > vec_Omega->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, vec_Omega->size[0], &c_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = vec_Omega->size[1];
      i1 = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = vec_Omega->size[1];
      emxEnsureCapacity_real_T(sp, retf, i1, &kc_emlrtRTEI);
      retf_data = retf->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        retf_data[i1] = vec_Omega_data[vec_Omega->size[0] * i1];
      }
      result[0] = 1;
      result[1] = Output->Omegam->size[1];
      emlrtSubAssignSizeCheckR2012b(&result[0], 2, &retf->size[0], 2,
                                    &b_emlrtECI, (emlrtCTX)sp);
      loop_ub = vec_Omega->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Output->Omegam->data[((int32_T)d + Output->Omegam->size[0] * i1) - 1] =
            vec_Omega_data[vec_Omega->size[0] * i1];
      }
      if (d != beta_prior) {
        emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > Output->yfm->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Output->yfm->size[0],
                                      &i_emlrtBCI, (emlrtCTX)sp);
      }
      result[0] = 1;
      result[1] = Output->yfm->size[1];
      sizes[0] = 1;
      sizes[1] = yf->size[0];
      emlrtSubAssignSizeCheckR2012b(&result[0], 2, &sizes[0], 2, &f_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = yf->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Output->yfm->data[((int32_T)d + Output->yfm->size[0] * i1) - 1] =
            Omega_inv_data[i1];
      }
    }
    if ((ML == 'Y') && ((real_T)iter + 1.0 > n0)) {
      i1 = Y0->size[0];
      for (b_i = 0; b_i < i1; b_i++) {
        st.site = &k_emlrtRSI;
        if (b_i + 1 > YLm->size[2]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, YLm->size[2], &e_emlrtBCI,
                                        &st);
        }
        loop_ub = YLm->size[1];
        input_sizes_idx_1 = YLm->size[0];
        nx = aux1->size[0] * aux1->size[1];
        aux1->size[0] = YLm->size[0];
        aux1->size[1] = YLm->size[1];
        emxEnsureCapacity_real_T(&st, aux1, nx, &ac_emlrtRTEI);
        aux1_data = aux1->data;
        for (nx = 0; nx < loop_ub; nx++) {
          for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
            aux1_data[i2 + aux1->size[0] * nx] =
                YLm_data[(i2 + YLm->size[0] * nx) +
                         YLm->size[0] * YLm->size[1] * b_i];
          }
        }
        b_st.site = &ed_emlrtRSI;
        b_dynamic_size_checks(&b_st, aux1, beta, YLm->size[1], beta->size[0]);
        loop_ub = YLm->size[0];
        input_sizes_idx_1 = YLm->size[1];
        nx = aux1->size[0] * aux1->size[1];
        aux1->size[0] = YLm->size[0];
        aux1->size[1] = YLm->size[1];
        emxEnsureCapacity_real_T(&st, aux1, nx, &ac_emlrtRTEI);
        aux1_data = aux1->data;
        for (nx = 0; nx < input_sizes_idx_1; nx++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            aux1_data[i2 + aux1->size[0] * nx] =
                YLm_data[(i2 + YLm->size[0] * nx) +
                         YLm->size[0] * YLm->size[1] * b_i];
          }
        }
        b_st.site = &dd_emlrtRSI;
        e_mtimes(&b_st, aux1, beta, yf);
        if (b_i + 1 > Y0->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Y0->size[0], &d_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        loop_ub = Y0->size[1];
        nx = b_Y0->size[0];
        b_Y0->size[0] = Y0->size[1];
        emxEnsureCapacity_real_T(sp, b_Y0, nx, &dc_emlrtRTEI);
        Omega_inv_data = b_Y0->data;
        for (nx = 0; nx < loop_ub; nx++) {
          Omega_inv_data[nx] = Y0_data[b_i + Y0->size[0] * nx];
        }
        st.site = &k_emlrtRSI;
        lnlik1 += lnpdfmvn(&st, b_Y0, yf, Omega0);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
      st.site = &l_emlrtRSI;
      beta_prior = lnpdfmvn(&st, beta, b_, var_);
      st.site = &m_emlrtRSI;
      inv(&st, Omega0, b_aux1);
      st.site = &m_emlrtRSI;
      pkk = lnpdfwishart(&st, b_aux1, R0, nu);
      /*  결합 사전밀도함수값 */
      beta_prior = lnlik1 + (beta_prior + pkk);
      /*  해당 파라미터의 사후 커널값 */
      if (beta_prior > lnpost_hat) {
        i1 = beta_hat->size[0];
        beta_hat->size[0] = beta->size[0];
        emxEnsureCapacity_real_T(sp, beta_hat, i1, &yb_emlrtRTEI);
        beta_hat_data = beta_hat->data;
        loop_ub = beta->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          beta_hat_data[i1] = Omega_hat_data[i1];
        }
        i1 = Omega_hat->size[0] * Omega_hat->size[1];
        Omega_hat->size[0] = Omega0->size[0];
        Omega_hat->size[1] = Omega0->size[1];
        emxEnsureCapacity_real_T(sp, Omega_hat, i1, &bc_emlrtRTEI);
        Omega_hat_data = Omega_hat->data;
        loop_ub = Omega0->size[0] * Omega0->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          Omega_hat_data[i1] = Omega0_data[i1];
        }
        lnpost_hat = beta_prior;
        /*  최빈값 후보의 사전밀도함수값 */
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_Y0);
  emxFree_real_T(sp, &beta);
  emxFree_real_T(sp, &YLm);
  emxFree_real_T(sp, &Y0);
  emxFree_real_T(sp, &Phi);
  emxFree_real_T(sp, &Omega0);
  st.site = &bj_emlrtRSI;
  disp(&st, j_emlrt_marshallOut(), &b_emlrtMCI);
  st.site = &ui_emlrtRSI;
  disp(&st, f_emlrt_marshallOut(&st, cv1), &c_emlrtMCI);
  st.site = &aj_emlrtRSI;
  disp(&st, j_emlrt_marshallOut(), &d_emlrtMCI);
  i = Output->lnML->size[0];
  Output->lnML->size[0] = 1;
  emxEnsureCapacity_real_T(sp, Output->lnML, i, &tb_emlrtRTEI);
  Output->lnML->data[0] = 0.0;
  if (ML == 'Y') {
    st.site = &n_emlrtRSI;
    b_st.site = &xh_emlrtRSI;
    if ((Output->betam->size[0] != 0) && (Output->betam->size[1] != 0)) {
      nx = Output->betam->size[0];
    } else if ((Output->Omegam->size[0] != 0) &&
               (Output->Omegam->size[1] != 0)) {
      nx = Output->Omegam->size[0];
    } else {
      nx = Output->betam->size[0];
      if (Output->Omegam->size[0] > Output->betam->size[0]) {
        nx = Output->Omegam->size[0];
      }
    }
    c_st.site = &yh_emlrtRSI;
    if ((Output->betam->size[0] != nx) &&
        ((Output->betam->size[0] != 0) && (Output->betam->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &e_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Output->Omegam->size[0] != nx) &&
        ((Output->Omegam->size[0] != 0) && (Output->Omegam->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &e_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes ||
        ((Output->betam->size[0] != 0) && (Output->betam->size[1] != 0))) {
      input_sizes_idx_1 = Output->betam->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((Output->Omegam->size[0] != 0) && (Output->Omegam->size[1] != 0))) {
      sizes[1] = Output->Omegam->size[1];
    } else {
      sizes[1] = 0;
    }
    i = aux1->size[0] * aux1->size[1];
    aux1->size[0] = nx;
    aux1->size[1] = input_sizes_idx_1 + sizes[1];
    emxEnsureCapacity_real_T(&b_st, aux1, i, &wb_emlrtRTEI);
    aux1_data = aux1->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        aux1_data[i1 + aux1->size[0] * i] = Output->betam->data[i1 + nx * i];
      }
    }
    loop_ub = sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        aux1_data[i1 + aux1->size[0] * (i + input_sizes_idx_1)] =
            Output->Omegam->data[i1 + nx * i];
      }
    }
    st.site = &o_emlrtRSI;
    b_st.site = &vb_emlrtRSI;
    mean(&b_st, aux1, retf);
    retf_data = retf->data;
    st.site = &p_emlrtRSI;
    cov(&st, aux1, b_aux1);
    b_aux1_data = b_aux1->data;
    st.site = &p_emlrtRSI;
    cov(&st, aux1, vec_Omega);
    vec_Omega_data = vec_Omega->data;
    if ((b_aux1->size[0] != vec_Omega->size[1]) &&
        ((b_aux1->size[0] != 1) && (vec_Omega->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_aux1->size[0], vec_Omega->size[1],
                                  &c_emlrtECI, (emlrtCTX)sp);
    }
    if ((vec_Omega->size[0] != b_aux1->size[1]) &&
        ((b_aux1->size[1] != 1) && (vec_Omega->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_aux1->size[1], vec_Omega->size[0],
                                  &d_emlrtECI, (emlrtCTX)sp);
    }
    st.site = &q_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    vec(&b_st, Omega_hat);
    Omega_hat_data = Omega_hat->data;
    b_st.site = &xh_emlrtRSI;
    if (beta_hat->size[0] != 0) {
      sizes[1] = 1;
    } else if ((Omega_hat->size[0] != 0) && (Omega_hat->size[1] != 0)) {
      sizes[1] = Omega_hat->size[1];
    } else {
      sizes[1] = 1;
    }
    c_st.site = &yh_emlrtRSI;
    if ((1 != sizes[1]) && (beta_hat->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &e_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Omega_hat->size[1] != sizes[1]) &&
        ((Omega_hat->size[0] != 0) && (Omega_hat->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &e_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if (beta_hat->size[0] != 0) {
      input_sizes[0] = beta_hat->size[0];
    } else {
      input_sizes[0] = 0;
    }
    if ((Omega_hat->size[0] != 0) && (Omega_hat->size[1] != 0)) {
      sizes[0] = Omega_hat->size[0];
    } else {
      sizes[0] = 0;
    }
    if ((b_aux1->size[0] == vec_Omega->size[1]) &&
        (vec_Omega->size[0] == b_aux1->size[1])) {
      nx = input_sizes[0];
      result[0] = sizes[0];
      i = Omega_inv->size[0] * Omega_inv->size[1];
      Omega_inv->size[0] = input_sizes[0] + sizes[0];
      Omega_inv->size[1] = sizes[1];
      emxEnsureCapacity_real_T(sp, Omega_inv, i, &gc_emlrtRTEI);
      Omega_inv_data = Omega_inv->data;
      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < nx; i1++) {
          Omega_inv_data[i1 + Omega_inv->size[0] * i] =
              beta_hat_data[i1 + nx * i];
        }
      }
      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = result[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          Omega_inv_data[(i1 + nx) + Omega_inv->size[0] * i] =
              Omega_hat_data[i1 + result[0] * i];
        }
      }
      i = beta_hat->size[0];
      beta_hat->size[0] = retf->size[1];
      emxEnsureCapacity_real_T(sp, beta_hat, i, &ic_emlrtRTEI);
      beta_hat_data = beta_hat->data;
      loop_ub = retf->size[1];
      for (i = 0; i < loop_ub; i++) {
        beta_hat_data[i] = retf_data[i];
      }
      i = aux1->size[0] * aux1->size[1];
      aux1->size[0] = b_aux1->size[0];
      aux1->size[1] = b_aux1->size[1];
      emxEnsureCapacity_real_T(sp, aux1, i, &kb_emlrtRTEI);
      aux1_data = aux1->data;
      loop_ub = b_aux1->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = b_aux1->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          aux1_data[i1 + aux1->size[0] * i] =
              0.5 * (b_aux1_data[i1 + b_aux1->size[0] * i] +
                     vec_Omega_data[i + vec_Omega->size[0] * i1]);
        }
      }
      st.site = &q_emlrtRSI;
      b_lnpdfmvn(&st, Omega_inv, beta_hat, aux1, yf);
      Omega_inv_data = yf->data;
    } else {
      st.site = &q_emlrtRSI;
      binary_expand_op(&st, yf, q_emlrtRSI, beta_hat, input_sizes, sizes,
                       Omega_hat, retf, b_aux1, vec_Omega);
      Omega_inv_data = yf->data;
    }
    i = Output->lnML->size[0];
    Output->lnML->size[0] = yf->size[0];
    emxEnsureCapacity_real_T(sp, Output->lnML, i, &tb_emlrtRTEI);
    loop_ub = yf->size[0];
    for (i = 0; i < loop_ub; i++) {
      Output->lnML->data[i] = lnpost_hat - Omega_inv_data[i];
    }
  }
  emxFree_real_T(sp, &b_aux1);
  emxFree_real_T(sp, &retf);
  emxFree_real_T(sp, &vec_Omega);
  emxFree_real_T(sp, &aux1);
  emxFree_real_T(sp, &yf);
  emxFree_real_T(sp, &Omega_hat);
  emxFree_real_T(sp, &beta_hat);
  emxFree_real_T(sp, &Omega_inv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (Reduced_BVAR.c) */

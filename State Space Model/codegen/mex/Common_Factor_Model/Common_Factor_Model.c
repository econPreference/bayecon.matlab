/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Common_Factor_Model.c
 *
 * Code generation for function 'Common_Factor_Model'
 *
 */

/* Include files */
#include "Common_Factor_Model.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_mexutil.h"
#include "Common_Factor_Model_types.h"
#include "PCA.h"
#include "abs.h"
#include "assertCompatibleDims.h"
#include "cholmod.h"
#include "diag.h"
#include "div.h"
#include "eml_erfcore.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "invpd.h"
#include "mldivide.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "norminv.h"
#include "rand.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "warning.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    22,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    28,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    30,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    31,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    36,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    38,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    44,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    45,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    46,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    48,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    70,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    82,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    87,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    95,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    97,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    99,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    105,                   /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    106,                   /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    108,                   /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo
    ff_emlrtRSI =
        {
            26,    /* lineNo */
            "cat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    gf_emlrtRSI =
        {
            100,        /* lineNo */
            "cat_impl", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo
    xf_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo yf_emlrtRSI = {
    236,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo ag_emlrtRSI = {
    237,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI = {
    248,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    249,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo dg_emlrtRSI = {
    250,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo eg_emlrtRSI = {
    272,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI = {
    295,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    190,       /* lineNo */
    "Gen_phi", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    194,       /* lineNo */
    "Gen_phi", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    195,       /* lineNo */
    "Gen_phi", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    197,       /* lineNo */
    "Gen_phi", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    199,       /* lineNo */
    "Gen_phi", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    209,       /* lineNo */
    "Gen_phi", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo si_emlrtRSI = {
    158,         /* lineNo */
    "Gen_coef1", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo ti_emlrtRSI = {
    162,         /* lineNo */
    "Gen_coef1", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo ui_emlrtRSI = {
    164,         /* lineNo */
    "Gen_coef1", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo vi_emlrtRSI = {
    165,         /* lineNo */
    "Gen_coef1", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo wi_emlrtRSI = {
    167,         /* lineNo */
    "Gen_coef1", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo bj_emlrtRSI = {
    10,                                                        /* lineNo */
    "trandn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/trandn.m" /* pathName */
};

static emlrtRSInfo cj_emlrtRSI = {
    11,                                                        /* lineNo */
    "trandn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/trandn.m" /* pathName */
};

static emlrtRSInfo dj_emlrtRSI = {
    13,                                                        /* lineNo */
    "trandn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/trandn.m" /* pathName */
};

static emlrtRSInfo ej_emlrtRSI = {
    14,                                                        /* lineNo */
    "trandn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/trandn.m" /* pathName */
};

static emlrtRSInfo fj_emlrtRSI = {
    15,                                                        /* lineNo */
    "trandn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/trandn.m" /* pathName */
};

static emlrtRSInfo gj_emlrtRSI = {
    24,                                                        /* lineNo */
    "trandn",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/trandn.m" /* pathName */
};

static emlrtRSInfo uj_emlrtRSI = {
    5,                                                        /* lineNo */
    "cdfni",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cdfni.m" /* pathName */
};

static emlrtRSInfo hk_emlrtRSI = {
    139,        /* lineNo */
    "Gen_coef", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo ik_emlrtRSI = {
    143,        /* lineNo */
    "Gen_coef", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo jk_emlrtRSI = {
    145,        /* lineNo */
    "Gen_coef", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo kk_emlrtRSI = {
    146,        /* lineNo */
    "Gen_coef", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo lk_emlrtRSI = {
    148,        /* lineNo */
    "Gen_coef", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo mk_emlrtRSI = {
    221,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo nk_emlrtRSI = {
    223,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = {
    12,                                                        /* lineNo */
    "randig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m" /* pathName */
};

static emlrtRSInfo pk_emlrtRSI = {
    18,                                                         /* lineNo */
    "randgam",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m" /* pathName */
};

static emlrtRSInfo qk_emlrtRSI = {
    11,                                                          /* lineNo */
    "gamrnd",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/gamrnd.m" /* pathName */
};

static emlrtRSInfo
    rk_emlrtRSI =
        {
            1,     /* lineNo */
            "rnd", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "rnd.p" /* pathName */
};

static emlrtRSInfo sk_emlrtRSI = {
    1,        /* lineNo */
    "gamrnd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "gamrnd.p" /* pathName */
};

static emlrtRSInfo tk_emlrtRSI = {
    1,       /* lineNo */
    "randg", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/private/"
    "randg.p" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    68,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    69,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    71,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    72,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    73,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    74,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    75,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    76,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    77,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    78,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtMCInfo
    m_emlrtMCI =
        {
            66,        /* lineNo */
            18,        /* colNo */
            "fprintf", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    99,                    /* lineNo */
    14,                    /* colNo */
    "sig2",                /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    99,                    /* lineNo */
    65,                    /* colNo */
    "d0",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    99,                    /* lineNo */
    56,                    /* colNo */
    "a0",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    99,                    /* lineNo */
    47,                    /* colNo */
    "H",                   /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    97,                    /* lineNo */
    15,                    /* colNo */
    "H",                   /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    97,                    /* lineNo */
    68,                    /* colNo */
    "H0",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    97,                    /* lineNo */
    59,                    /* colNo */
    "h0",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    97,                    /* lineNo */
    50,                    /* colNo */
    "sig2",                /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    89,                    /* lineNo */
    8,                     /* colNo */
    "Gm",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    88,                    /* lineNo */
    9,                     /* colNo */
    "mum",                 /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    16,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    15,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    14,                    /* lineNo */
    15,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    13,                    /* lineNo */
    15,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    12,                    /* lineNo */
    12,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    4                              /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    12,                    /* lineNo */
    12,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtRTEInfo
    emlrtRTEI =
        {
            275,                   /* lineNo */
            27,                    /* colNo */
            "check_non_axis_size", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    121,                   /* lineNo */
    22,                    /* colNo */
    "decomm",              /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    121,                   /* lineNo */
    17,                    /* colNo */
    "decomm",              /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    121,                   /* lineNo */
    17,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                    /* nDims */
    109,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    109,                   /* lineNo */
    12,                    /* colNo */
    "decomm",              /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    120,                   /* lineNo */
    22,                    /* colNo */
    "sig2vm",              /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    120,                   /* lineNo */
    17,                    /* colNo */
    "sig2vm",              /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    120,                   /* lineNo */
    17,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    119,                   /* lineNo */
    16,                    /* colNo */
    "mum",                 /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    119,                   /* lineNo */
    11,                    /* colNo */
    "mum",                 /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    119,                   /* lineNo */
    11,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    118,                   /* lineNo */
    14,                    /* colNo */
    "Gm",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    118,                   /* lineNo */
    9,                     /* colNo */
    "Gm",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    118,                   /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    117,                   /* lineNo */
    20,                    /* colNo */
    "sig2m",               /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    117,                   /* lineNo */
    15,                    /* colNo */
    "sig2m",               /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    117,                   /* lineNo */
    15,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                    /* nDims */
    102,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    102,                   /* lineNo */
    11,                    /* colNo */
    "sig2m",               /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    116,                   /* lineNo */
    20,                    /* colNo */
    "betam",               /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    116,                   /* lineNo */
    15,                    /* colNo */
    "betam",               /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    116,                   /* lineNo */
    15,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                    /* nDims */
    83,                    /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    83,                    /* lineNo */
    11,                    /* colNo */
    "betam",               /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    115,                   /* lineNo */
    14,                    /* colNo */
    "Hm",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    115,                   /* lineNo */
    9,                     /* colNo */
    "Hm",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    115,                   /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,                    /* nDims */
    101,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    101,                   /* lineNo */
    8,                     /* colNo */
    "Hm",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    1,                     /* nDims */
    108,                   /* lineNo */
    24,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    99,                    /* lineNo */
    35,                    /* colNo */
    "y",                   /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    97,                    /* lineNo */
    35,                    /* colNo */
    "y",                   /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    95,                    /* lineNo */
    15,                    /* colNo */
    "H",                   /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    95,                    /* lineNo */
    69,                    /* colNo */
    "H0",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    95,                    /* lineNo */
    60,                    /* colNo */
    "h0",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    95,                    /* lineNo */
    51,                    /* colNo */
    "sig2",                /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    95,                    /* lineNo */
    36,                    /* colNo */
    "y",                   /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    87,                    /* lineNo */
    54,                    /* colNo */
    "beta",                /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    87,                    /* lineNo */
    52,                    /* colNo */
    "beta",                /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    87,                    /* lineNo */
    40,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    4                              /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    64,                    /* lineNo */
    12,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    50,                    /* lineNo */
    6,                     /* colNo */
    "H",                   /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    2,                     /* nDims */
    48,                    /* lineNo */
    18,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    1,                     /* nDims */
    48,                    /* lineNo */
    18,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    36,                    /* lineNo */
    32,                    /* colNo */
    "PC",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    36,                    /* lineNo */
    30,                    /* colNo */
    "PC",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    36,                    /* lineNo */
    11,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    4                              /* checkKind */
};

static emlrtECInfo h_emlrtECI = {
    2,                     /* nDims */
    31,                    /* lineNo */
    14,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtECInfo i_emlrtECI = {
    1,                     /* nDims */
    31,                    /* lineNo */
    14,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    28,                    /* lineNo */
    32,                    /* colNo */
    "PC",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    28,                    /* lineNo */
    30,                    /* colNo */
    "PC",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    28,                    /* lineNo */
    11,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    4                              /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    24,                    /* lineNo */
    11,                    /* colNo */
    "PC",                  /* aName */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    17,                    /* lineNo */
    16,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    1                              /* checkKind */
};

static emlrtECInfo s_emlrtECI = {
    1,           /* nDims */
    220,         /* lineNo */
    8,           /* colNo */
    "Gen_Sigma", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    82,         /* lineNo */
    5,          /* colNo */
    "fltpower", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pName
                                                                          */
};

static emlrtECInfo t_emlrtECI = {
    1,              /* nDims */
    244,            /* lineNo */
    14,             /* colNo */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtECInfo u_emlrtECI = {
    2,              /* nDims */
    244,            /* lineNo */
    14,             /* colNo */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtECInfo v_emlrtECI = {
    1,              /* nDims */
    245,            /* lineNo */
    19,             /* colNo */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtECInfo w_emlrtECI = {
    2,              /* nDims */
    245,            /* lineNo */
    19,             /* colNo */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    247,            /* lineNo */
    14,             /* colNo */
    "y",            /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtECInfo x_emlrtECI = {
    1,              /* nDims */
    247,            /* lineNo */
    12,             /* colNo */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    266,            /* lineNo */
    14,             /* colNo */
    "f_ttm",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    278,            /* lineNo */
    18,             /* colNo */
    "f_ttm",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    279,            /* lineNo */
    18,             /* colNo */
    "P_ttm",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    283,            /* lineNo */
    18,             /* colNo */
    "Betam",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtRTEInfo y_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    265,            /* lineNo */
    14,             /* colNo */
    "P_ttm",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    273,            /* lineNo */
    7,              /* colNo */
    "Betam",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    296,            /* lineNo */
    11,             /* colNo */
    "Betam",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    253,            /* lineNo */
    11,             /* colNo */
    "f_ttm",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    254,            /* lineNo */
    11,             /* colNo */
    "P_ttm",        /* aName */
    "CFM_Gen_beta", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m", /* pName */
    0                              /* checkKind */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    12,                    /* lineNo */
    6,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    13,                    /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    15,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    16,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    28,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    31,                    /* lineNo */
    14,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    1,                     /* lineNo */
    19,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    34,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    36,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    44,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    85,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    47,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    48,                    /* lineNo */
    18,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    85,                  /* lineNo */
    9,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    54,                    /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    51,                    /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    58,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    125,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    126,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    74,                    /* lineNo */
    14,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    127,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    76,                    /* lineNo */
    14,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    128,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    129,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo
    bc_emlrtRTEI =
        {
            297,   /* lineNo */
            14,    /* colNo */
            "cat", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    130,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    131,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    97,                    /* lineNo */
    31,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    95,                    /* lineNo */
    32,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    99,                    /* lineNo */
    31,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    108,                   /* lineNo */
    24,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    12,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    13,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    14,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    18,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    22,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    30,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    46,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    82,                    /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    48,                    /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    30,                    /* lineNo */
    7,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    31,                    /* lineNo */
    10,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    22,                    /* lineNo */
    7,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    48,                    /* lineNo */
    8,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = {
    191,                   /* lineNo */
    11,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo og_emlrtRTEI = {
    74,                  /* lineNo */
    9,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = {
    165,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = {
    159,                   /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = {
    146,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = {
    140,                   /* lineNo */
    9,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = {
    220,                   /* lineNo */
    12,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = {
    220,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = {
    233,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = {
    234,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = {
    262,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = {
    244,                   /* lineNo */
    14,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = {
    247,                   /* lineNo */
    22,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = {
    247,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = {
    237,                   /* lineNo */
    1,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = {
    244,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = {
    248,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = {
    227,                   /* lineNo */
    17,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = {
    248,                   /* lineNo */
    16,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = {
    220,                   /* lineNo */
    8,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRSInfo uk_emlrtRSI = {
    71,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo vk_emlrtRSI = {
    69,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo wk_emlrtRSI = {
    73,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo xk_emlrtRSI = {
    75,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo yk_emlrtRSI = {
    77,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo
    al_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo
    bl_emlrtRSI =
        {
            68,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo dl_emlrtRSI = {
    68,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo el_emlrtRSI = {
    78,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo fl_emlrtRSI = {
    76,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo gl_emlrtRSI = {
    74,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo hl_emlrtRSI = {
    72,                    /* lineNo */
    "Common_Factor_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo nl_emlrtRSI = {
    220,         /* lineNo */
    "Gen_Sigma", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo ol_emlrtRSI = {
    76,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo pl_emlrtRSI = {
    244,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

static emlrtRSInfo ql_emlrtRSI = {
    247,            /* lineNo */
    "CFM_Gen_beta", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pathName */
};

/* Function Declarations */
static void CFM_Gen_beta(const emlrtStack *sp, const emxArray_real_T *y,
                         const emxArray_real_T *H, const emxArray_real_T *sig2,
                         real_T mu, real_T G, emxArray_real_T *beta);

static real_T Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, real_T coef, real_T a0,
                        real_T d0, real_T scale);

static real_T Gen_coef(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, real_T sig2, real_T coef0,
                       real_T B0);

static real_T Gen_coef1(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, real_T sig2, real_T coef0,
                        real_T B0);

static void Gen_phi(const emlrtStack *sp, const emxArray_real_T *Y,
                    const emxArray_real_T *X, const real_T phi0[2],
                    const real_T PHI0[4], const real_T phi_before[2],
                    real_T phi[2]);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[3]);

static void b_minus(const emlrtStack *sp, emxArray_real_T *ehat,
                    const emxArray_real_T *Y);

static void b_plus(const emlrtStack *sp, emxArray_real_T *var_tl,
                   const emxArray_real_T *Sigma);

static void binary_expand_op(const emlrtStack *sp, emxArray_creal_T *Pm,
                             const emxArray_real_T *sig2m);

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[6]);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[14]);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[37]);

static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *e_tl,
                               const emxArray_real_T *y, int32_T t,
                               const emxArray_real_T *r1);

static const mxArray *f_emlrt_marshallOut(const real_T u[3]);

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7]);

static const mxArray *h_emlrt_marshallOut(const real_T u);

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[23]);

static const mxArray *n_emlrt_marshallOut(void);

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *beta, const emxArray_real_T *sig2);

/* Function Definitions */
static void CFM_Gen_beta(const emlrtStack *sp, const emxArray_real_T *y,
                         const emxArray_real_T *H, const emxArray_real_T *sig2,
                         real_T mu, real_T G, emxArray_real_T *beta)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *Kalgain;
  emxArray_real_T *P_ttm;
  emxArray_real_T *Sigma;
  emxArray_real_T *b_y;
  emxArray_real_T *e_tl;
  emxArray_real_T *f_ttm;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *var_tl;
  const real_T *H_data;
  const real_T *y_data;
  real_T PGG;
  real_T P_tl;
  real_T f_tl;
  real_T *P_ttm_data;
  real_T *Sigma_data;
  real_T *e_tl_data;
  real_T *f_ttm_data;
  real_T *r2;
  real_T *var_tl_data;
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
  H_data = H->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &f_ttm, 1, &xg_emlrtRTEI);
  /*  Kalman filtering step */
  i = f_ttm->size[0];
  f_ttm->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, f_ttm, i, &xg_emlrtRTEI);
  f_ttm_data = f_ttm->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_ttm_data[i] = 0.0;
  }
  emxInit_real_T(sp, &P_ttm, 1, &yg_emlrtRTEI);
  i = P_ttm->size[0];
  P_ttm->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, P_ttm, i, &yg_emlrtRTEI);
  P_ttm_data = P_ttm->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    P_ttm_data[i] = 0.0;
  }
  emxInit_real_T(sp, &Sigma, 2, &gh_emlrtRTEI);
  f_tl = 0.0;
  st.site = &yf_emlrtRSI;
  P_tl = 1.0 / (1.0 - G * G);
  st.site = &ag_emlrtRSI;
  b_diag(&st, sig2, Sigma);
  Sigma_data = Sigma->data;
  i = y->size[0];
  emxInit_real_T(sp, &var_tl, 2, &hh_emlrtRTEI);
  emxInit_real_T(sp, &e_tl, 1, &fh_emlrtRTEI);
  emxInit_real_T(sp, &Kalgain, 2, &ih_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &jh_emlrtRTEI);
  emxInit_real_T(sp, &b_y, 2, &kh_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &ch_emlrtRTEI);
  for (t = 0; t < i; t++) {
    f_tl = mu + G * f_tl;
    P_tl = G * P_tl * G + 1.0;
    loop_ub = H->size[0];
    i1 = var_tl->size[0] * var_tl->size[1];
    var_tl->size[0] = H->size[0];
    var_tl->size[1] = H->size[0];
    emxEnsureCapacity_real_T(sp, var_tl, i1, &bh_emlrtRTEI);
    var_tl_data = var_tl->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = H->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        var_tl_data[i2 + var_tl->size[0] * i1] = H_data[i2] * P_tl * H_data[i1];
      }
    }
    if ((var_tl->size[0] != Sigma->size[0]) &&
        ((var_tl->size[0] != 1) && (Sigma->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(var_tl->size[0], Sigma->size[0], &t_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((var_tl->size[1] != Sigma->size[1]) &&
        ((var_tl->size[1] != 1) && (Sigma->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(var_tl->size[1], Sigma->size[1], &u_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((var_tl->size[0] == Sigma->size[0]) &&
        (var_tl->size[1] == Sigma->size[1])) {
      loop_ub = var_tl->size[0] * var_tl->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        var_tl_data[i1] += Sigma_data[i1];
      }
    } else {
      st.site = &pl_emlrtRSI;
      b_plus(&st, var_tl, Sigma);
      var_tl_data = var_tl->data;
    }
    if ((var_tl->size[0] != var_tl->size[1]) &&
        ((var_tl->size[0] != 1) && (var_tl->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(var_tl->size[0], var_tl->size[1], &v_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if ((var_tl->size[0] != var_tl->size[1]) &&
        ((var_tl->size[1] != 1) && (var_tl->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(var_tl->size[1], var_tl->size[0], &w_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (var_tl->size[0] == var_tl->size[1]) {
      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = var_tl->size[0];
      r1->size[1] = var_tl->size[1];
      emxEnsureCapacity_real_T(sp, r1, i1, &ch_emlrtRTEI);
      r2 = r1->data;
      loop_ub = var_tl->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = var_tl->size[0];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          r2[i2 + r1->size[0] * i1] =
              0.5 * (var_tl_data[i2 + var_tl->size[0] * i1] +
                     var_tl_data[i1 + var_tl->size[0] * i2]);
        }
      }
      i1 = var_tl->size[0] * var_tl->size[1];
      var_tl->size[0] = r1->size[0];
      var_tl->size[1] = r1->size[1];
      emxEnsureCapacity_real_T(sp, var_tl, i1, &eh_emlrtRTEI);
      var_tl_data = var_tl->data;
      loop_ub = r1->size[0] * r1->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        var_tl_data[i1] = r2[i1];
      }
    } else {
      st.site = &ol_emlrtRSI;
      g_binary_expand_op(&st, var_tl);
    }
    if (t + 1 > y->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, y->size[0], &jc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = H->size[0];
    i1 = r->size[0];
    r->size[0] = H->size[0];
    emxEnsureCapacity_real_T(sp, r, i1, &dh_emlrtRTEI);
    r2 = r->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2[i1] = H_data[i1] * f_tl;
    }
    loop_ub = y->size[1];
    if ((r->size[0] != y->size[1]) &&
        ((y->size[1] != 1) && (r->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(y->size[1], r->size[0], &x_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (r->size[0] == y->size[1]) {
      i1 = e_tl->size[0];
      e_tl->size[0] = y->size[1];
      emxEnsureCapacity_real_T(sp, e_tl, i1, &fh_emlrtRTEI);
      e_tl_data = e_tl->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        e_tl_data[i1] = y_data[t + y->size[0] * i1] - r2[i1];
      }
    } else {
      st.site = &ql_emlrtRSI;
      f_binary_expand_op(&st, e_tl, y, t, r);
      e_tl_data = e_tl->data;
    }
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    loop_ub = H->size[0];
    b_y->size[1] = H->size[0];
    emxEnsureCapacity_real_T(sp, b_y, i1, &og_emlrtRTEI);
    var_tl_data = b_y->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      var_tl_data[i1] = P_tl * H_data[i1];
    }
    st.site = &bg_emlrtRSI;
    if (var_tl->size[1] != b_y->size[1]) {
      emlrtErrorWithMessageIdR2018a(&st, &y_emlrtRTEI, "MATLAB:dimagree",
                                    "MATLAB:dimagree", 0);
    }
    b_st.site = &kf_emlrtRSI;
    b_mrdiv(&b_st, b_y, var_tl, Kalgain);
    var_tl_data = Kalgain->data;
    st.site = &cg_emlrtRSI;
    b_st.site = &ef_emlrtRSI;
    if (e_tl->size[0] != Kalgain->size[1]) {
      if ((Kalgain->size[1] == 1) || (e_tl->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &c_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (Kalgain->size[1] < 1) {
      PGG = 0.0;
    } else {
      n_t = (ptrdiff_t)Kalgain->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      PGG = ddot(&n_t, &var_tl_data[0], &incx_t, &e_tl_data[0], &incy_t);
    }
    f_tl += PGG;
    st.site = &dg_emlrtRSI;
    b_st.site = &ef_emlrtRSI;
    if (H->size[0] != Kalgain->size[1]) {
      if ((Kalgain->size[1] == 1) || (H->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &c_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (Kalgain->size[1] < 1) {
      PGG = 0.0;
    } else {
      n_t = (ptrdiff_t)Kalgain->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      PGG = ddot(&n_t, &var_tl_data[0], &incx_t, &H_data[0], &incy_t);
    }
    P_tl *= 1.0 - PGG;
    if (t + 1 > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, f_ttm->size[0], &rc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    f_ttm_data[t] = f_tl;
    if (t + 1 > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, P_ttm->size[0], &sc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    P_ttm_data[t] = P_tl;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &b_y);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &Kalgain);
  emxFree_real_T(sp, &e_tl);
  emxFree_real_T(sp, &var_tl);
  emxFree_real_T(sp, &Sigma);
  /*  Backward recursion */
  i = beta->size[0];
  beta->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, beta, i, &ah_emlrtRTEI);
  var_tl_data = beta->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    var_tl_data[i] = 0.0;
  }
  /*  T by k */
  /*  beta(T|T) sampling */
  if ((y->size[0] < 1) || (y->size[0] > P_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(y->size[0], 1, P_ttm->size[0], &oc_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  P_tl = P_ttm_data[y->size[0] - 1];
  /*  k by k */
  if ((y->size[0] < 1) || (y->size[0] > f_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(y->size[0], 1, f_ttm->size[0], &kc_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  /*  k by 1 */
  if (P_ttm_data[y->size[0] - 1] < 0.0) {
    P_tl = 4.1995579896506E-322;
  }
  st.site = &eg_emlrtRSI;
  if (P_tl < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  if (y->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[0], 1, y->size[0], &pc_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  st.site = &eg_emlrtRSI;
  var_tl_data[y->size[0] - 1] =
      f_ttm_data[y->size[0] - 1] + muDoubleScalarSqrt(P_tl) * randn();
  /*  k by 1 */
  /*  1 by k */
  t = y->size[0] - 1;
  /*  time index */
  while (t >= 1) {
    if (t > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, f_ttm->size[0], &lc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    /*  km3 by 1 */
    if (t > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, P_ttm->size[0], &mc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    /*  km3 by km3 */
    /*  P(t+1|t), k by k */
    if ((t + 1 < 1) || (t + 1 > beta->size[0])) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, beta->size[0], &nc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    /*  k by 1 */
    f_tl = P_ttm_data[t - 1];
    P_tl = G * f_tl;
    PGG = P_tl / (P_tl * G + 1.0);
    /*  km3 by k */
    /*  km3 by 1 */
    /*  km3 by km3 */
    P_tl = f_tl - PGG * G * f_tl;
    if (P_tl < 0.0) {
      P_tl = 4.1995579896506E-322;
    }
    /*  beta(t|t+1) sampling */
    st.site = &fg_emlrtRSI;
    if (t > beta->size[0]) {
      emlrtDynamicBoundsCheckR2012b(t, 1, beta->size[0], &qc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    f_tl = f_ttm_data[t - 1];
    st.site = &fg_emlrtRSI;
    var_tl_data[t - 1] = (f_tl + PGG * ((var_tl_data[t] - mu) - G * f_tl)) +
                         muDoubleScalarSqrt(P_tl) * randn();
    /*  1 by k */
    t--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &P_ttm);
  emxFree_real_T(sp, &f_ttm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static real_T Gen_Sigma(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, real_T coef, real_T a0,
                        real_T d0, real_T scale)
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
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  emxArray_real_T *ehat;
  real_T ur[2];
  const real_T *X_data;
  const real_T *Y_data;
  real_T b;
  real_T c;
  real_T d;
  real_T gam;
  real_T sig2;
  real_T u;
  real_T v;
  real_T x;
  real_T *ehat_data;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &ehat, 1, &vg_emlrtRTEI);
  i = ehat->size[0];
  ehat->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, ehat, i, &ug_emlrtRTEI);
  ehat_data = ehat->data;
  iter = X->size[0];
  for (i = 0; i < iter; i++) {
    ehat_data[i] = X_data[i] * coef;
  }
  if ((Y->size[0] != ehat->size[0]) &&
      ((Y->size[0] != 1) && (ehat->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Y->size[0], ehat->size[0], &s_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (Y->size[0] == ehat->size[0]) {
    i = ehat->size[0];
    ehat->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ehat, i, &vg_emlrtRTEI);
    ehat_data = ehat->data;
    iter = Y->size[0];
    for (i = 0; i < iter; i++) {
      ehat_data[i] = Y_data[i] - ehat_data[i];
    }
  } else {
    st.site = &nl_emlrtRSI;
    b_minus(&st, ehat, Y);
    ehat_data = ehat->data;
  }
  st.site = &mk_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  if (ehat->size[0] < 1) {
    gam = 0.0;
  } else {
    n_t = (ptrdiff_t)ehat->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    gam = ddot(&n_t, &ehat_data[0], &incx_t, &ehat_data[0], &incy_t);
  }
  emxFree_real_T(&st, &ehat);
  st.site = &nk_emlrtRSI;
  c = (a0 + (real_T)Y->size[0]) / 2.0;
  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &ok_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  b = 1.0 / ((d0 + scale * gam) / 2.0);
  c_st.site = &pk_emlrtRSI;
  d_st.site = &qk_emlrtRSI;
  e_st.site = &rk_emlrtRSI;
  f_st.site = &sk_emlrtRSI;
  g_st.site = &tk_emlrtRSI;
  if (c <= 0.0) {
    if (c == 0.0) {
      c = 0.0;
    } else {
      c = rtNaN;
    }
  } else if ((!muDoubleScalarIsInf(c)) && (!muDoubleScalarIsNaN(c))) {
    if (c >= 1.0) {
      d = c - 0.33333333333333331;
      h_st.site = &tk_emlrtRSI;
      u = b_rand();
      gam = 1.0;
    } else {
      d = (c + 1.0) - 0.33333333333333331;
      h_st.site = &tk_emlrtRSI;
      c_rand(ur);
      u = ur[0];
      if (c < 7.4567656047833286E-20) {
        gam = 0.0;
      } else {
        gam = 1.0 / c;
        h_st.site = &tk_emlrtRSI;
        i_st.site = &le_emlrtRSI;
        j_st.site = &me_emlrtRSI;
        if ((ur[1] < 0.0) && (!muDoubleScalarIsNaN(gam)) &&
            (muDoubleScalarFloor(gam) != gam)) {
          emlrtErrorWithMessageIdR2018a(&j_st, &x_emlrtRTEI,
                                        "Coder:toolbox:power_domainError",
                                        "Coder:toolbox:power_domainError", 0);
        }
        gam = muDoubleScalarPower(ur[1], gam);
      }
    }
    h_st.site = &tk_emlrtRSI;
    c = 1.0 / muDoubleScalarSqrt(9.0 * d);
    iter = 0;
    x = 0.0;
    do {
      exitg1 = 0;
      for (v = -1.0; v <= 0.0; v = c * x + 1.0) {
        h_st.site = &tk_emlrtRSI;
        x = randn();
      }
      v *= v * v;
      x *= x;
      if (u < 1.0 - 0.0331 * x * x) {
        exitg1 = 1;
      } else {
        h_st.site = &tk_emlrtRSI;
        if (u < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &h_st, &w_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        h_st.site = &tk_emlrtRSI;
        if (muDoubleScalarLog(u) <
            0.5 * x + d * ((1.0 - v) + muDoubleScalarLog(v))) {
          exitg1 = 1;
        } else {
          iter++;
          if (iter > 1000000) {
            h_st.site = &tk_emlrtRSI;
            e_warning(&h_st);
            exitg1 = 1;
          } else {
            h_st.site = &tk_emlrtRSI;
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
  sig2 = 1.0 / gam / scale;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return sig2;
}

static real_T Gen_coef(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, real_T sig2, real_T coef0,
                       real_T B0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *c_y;
  emxArray_real_T *y;
  real_T b_tmp_data[4];
  const real_T *X_data;
  const real_T *Y_data;
  real_T B0inv_data;
  real_T b_y;
  real_T c_tmp_data;
  real_T coef;
  real_T sig2inv;
  real_T tmp_data;
  real_T *b_y_data;
  real_T *y_data;
  int32_T B0inv_size[2];
  int32_T tmp_size[2];
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, 2, &tg_emlrtRTEI);
  /*  res: Test "res"th parameter is positive or not. (res is column vector) */
  /*  If res is zeros, then test will not be counducted. */
  st.site = &hk_emlrtRSI;
  b_invpd(&st, B0, (real_T *)&B0inv_data, B0inv_size);
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = 1;
  emxEnsureCapacity_real_T(sp, y, i, &gg_emlrtRTEI);
  y_data = y->data;
  y_data[0] = 0.5 * (B0inv_data + B0inv_data);
  sig2inv = 1.0 / sig2;
  st.site = &ik_emlrtRSI;
  if (X->size[0] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)X->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &X_data[0], &incx_t, &X_data[0], &incy_t);
  }
  emxInit_real_T(&st, &c_y, 2, &sg_emlrtRTEI);
  B0inv_data = sig2inv * b_y + y_data[0];
  tmp_size[0] = 1;
  tmp_size[1] = 1;
  tmp_data = 0.5 * (B0inv_data + B0inv_data);
  st.site = &jk_emlrtRSI;
  c_invpd(&st, (real_T *)&tmp_data, tmp_size, (real_T *)&B0inv_data,
          B0inv_size);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, c_y, i, &og_emlrtRTEI);
  b_y_data = c_y->data;
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = sig2inv * X_data[i];
  }
  st.site = &kk_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  if (Y->size[0] != c_y->size[1]) {
    if ((c_y->size[1] == 1) || (Y->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (c_y->size[1] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)c_y->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &b_y_data[0], &incx_t, &Y_data[0], &incy_t);
  }
  emxFree_real_T(&st, &c_y);
  st.site = &lk_emlrtRSI;
  cholmod(&st, (real_T *)&B0inv_data, B0inv_size, b_tmp_data, tmp_size);
  loop_ub = tmp_size[0] * tmp_size[1];
  for (i = 0; i < loop_ub; i++) {
    tmp_data = b_tmp_data[i];
  }
  st.site = &lk_emlrtRSI;
  sig2inv = b_y + y_data[0] * coef0;
  k_mtimes((real_T *)&B0inv_data, (real_T *)&sig2inv, (real_T *)&c_tmp_data,
           tmp_size);
  st.site = &lk_emlrtRSI;
  b_y = randn();
  coef = c_tmp_data + tmp_data * b_y;
  emxFree_real_T(sp, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return coef;
}

static real_T Gen_coef1(const emlrtStack *sp, const emxArray_real_T *Y,
                        const emxArray_real_T *X, real_T sig2, real_T coef0,
                        real_T B0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *c_y;
  emxArray_real_T *y;
  real_T tmp_data[4];
  const real_T *X_data;
  const real_T *Y_data;
  real_T B0inv_data;
  real_T b_y;
  real_T c_y_data;
  real_T coef;
  real_T sig2inv;
  real_T *b_y_data;
  real_T *y_data;
  int32_T B0inv_size[2];
  int32_T b_y_size[2];
  int32_T y_size[2];
  int32_T i;
  int32_T loop_ub;
  boolean_T isfeasible_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, 2, &rg_emlrtRTEI);
  /*  res: Test "res"th parameter is positive or not. (res is column vector) */
  /*  If res is zeros, then test will not be counducted. */
  st.site = &si_emlrtRSI;
  b_invpd(&st, B0, (real_T *)&B0inv_data, B0inv_size);
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = 1;
  emxEnsureCapacity_real_T(sp, y, i, &gg_emlrtRTEI);
  y_data = y->data;
  y_data[0] = 0.5 * (B0inv_data + B0inv_data);
  sig2inv = 1.0 / sig2;
  st.site = &ti_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  if (X->size[0] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)X->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &X_data[0], &incx_t, &X_data[0], &incy_t);
  }
  emxInit_real_T(&st, &c_y, 2, &pg_emlrtRTEI);
  B0inv_data = sig2inv * b_y + y_data[0];
  y_size[0] = 1;
  y_size[1] = 1;
  b_y = 0.5 * (B0inv_data + B0inv_data);
  st.site = &ui_emlrtRSI;
  c_invpd(&st, (real_T *)&b_y, y_size, (real_T *)&B0inv_data, B0inv_size);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = X->size[0];
  emxEnsureCapacity_real_T(sp, c_y, i, &og_emlrtRTEI);
  b_y_data = c_y->data;
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = sig2inv * X_data[i];
  }
  st.site = &vi_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  if (Y->size[0] != c_y->size[1]) {
    if ((c_y->size[1] == 1) || (Y->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (c_y->size[1] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)c_y->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &b_y_data[0], &incx_t, &Y_data[0], &incy_t);
  }
  emxFree_real_T(&st, &c_y);
  st.site = &wi_emlrtRSI;
  b_y += y_data[0] * coef0;
  b_st.site = &hf_emlrtRSI;
  k_mtimes((real_T *)&B0inv_data, (real_T *)&b_y, (real_T *)&c_y_data,
           b_y_size);
  st.site = &wi_emlrtRSI;
  b_st.site = &wi_emlrtRSI;
  cholmod(&b_st, (real_T *)&B0inv_data, B0inv_size, tmp_data, b_y_size);
  loop_ub = b_y_size[0] * b_y_size[1];
  for (i = 0; i < loop_ub; i++) {
    coef = tmp_data[i];
  }
  /*   sampling truncated normal */
  /*   mu : mean, k by 1 */
  /*     sd : standard deviation, k by 1 */
  /*     a : lower bound, k by 1 */
  /*     b : upper bound, k by 1 */
  /*   a < y < b  */
  b_st.site = &bj_emlrtRSI;
  b_st.site = &cj_emlrtRSI;
  b_st.site = &dj_emlrtRSI;
  d_rand((real_T *)&sig2inv, &loop_ub);
  b_st.site = &ej_emlrtRSI;
  /*  cumulative density of standard normal distribution */
  b_y = eml_erfcore(-((0.0 - c_y_data) / coef) / 1.4142135623730951);
  B0inv_data = 0.5 * b_y;
  b_st.site = &ej_emlrtRSI;
  /*  cumulative density of standard normal distribution */
  b_y = eml_erfcore(-((7.225973768125749E+86 - c_y_data) / coef) /
                    1.4142135623730951);
  b_st.site = &fj_emlrtRSI;
  /*  Normal inverse cumulative distribution function */
  /*  0<p<1 */
  sig2inv = B0inv_data * (1.0 - sig2inv) + sig2inv * (0.5 * b_y);
  c_st.site = &uj_emlrtRSI;
  norminv(&c_st, (real_T *)&sig2inv, (real_T *)&B0inv_data, b_y_size);
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = 1;
  emxEnsureCapacity_real_T(&st, y, i, &gg_emlrtRTEI);
  y_data = y->data;
  y_data[0] = 2.7 * coef;
  isfeasible_data = (0.0 - c_y_data < y_data[0]);
  /*  1 if true */
  B0inv_data = (real_T)isfeasible_data * (c_y_data + coef * B0inv_data);
  isfeasible_data = (c_y_data - 7.225973768125749E+86 < y_data[0]);
  /*  1 if true */
  coef = (1.0 - (real_T)isfeasible_data) * 7.225973768125749E+86 +
         (real_T)isfeasible_data * B0inv_data;
  /*  if not finite, then gives the closer one between a and b to mu  */
  y_size[0] = 1;
  y_size[1] = 1;
  b_y = 0.0 - c_y_data;
  b_st.site = &gj_emlrtRSI;
  c_abs((real_T *)&b_y, y_size, tmp_data, b_y_size);
  loop_ub = b_y_size[0] * b_y_size[1];
  emxFree_real_T(&st, &y);
  for (i = 0; i < loop_ub; i++) {
    B0inv_data = tmp_data[i];
  }
  y_size[0] = 1;
  y_size[1] = 1;
  b_y = 7.225973768125749E+86 - c_y_data;
  b_st.site = &gj_emlrtRSI;
  c_abs((real_T *)&b_y, y_size, tmp_data, b_y_size);
  loop_ub = b_y_size[0] * b_y_size[1];
  for (i = 0; i < loop_ub; i++) {
    sig2inv = tmp_data[i];
  }
  /*  1 if true */
  B0inv_data = (real_T)(B0inv_data > sig2inv) * 7.225973768125749E+86;
  isfeasible_data =
      ((!muDoubleScalarIsInf(coef)) && (!muDoubleScalarIsNaN(coef)));
  /*  1 if true */
  b_y = (1.0 - (real_T)isfeasible_data) * B0inv_data +
        (real_T)isfeasible_data * coef;
  coef = b_y;
  /*  1 if true */
  if (muDoubleScalarIsNaN(b_y)) {
    coef = B0inv_data;
  }
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }
  /*     disp('========================='); */
  /*          disp(retf'); */
  /*          disp(tmp'); */
  /*          disp(mu'); */
  /*          disp(sd'); */
  /*          disp(isfin'); */
  /*  disp(retf'); */
  /*  if minc(isfinite(retf)) ==  0 */
  /*      while minc(isfinite(retf)) ==  0 */
  /*          u = rand(k,1); */
  /*          x = cdfn(lb).*(1-u) + u.*cdfn(ub); */
  /*          disp(mu'); */
  /*          disp(sd'); */
  /*          retf = mu + sd.*cdfni(x); */
  /*      end */
  /*  end */
  /*  coef = B1*A + cholmod(B1)'*randn; */
  /*   */
  /*  iter = 1; */
  /*  while coef < 0.01 */
  /*      coef = B1*A + cholmod(B1)'*randn; */
  /*      if iter == 100 */
  /*          coef = coef_before; */
  /*          break, */
  /*      end */
  /*      iter = iter + 1; */
  /*  end */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return coef;
}

static void Gen_phi(const emlrtStack *sp, const emxArray_real_T *Y,
                    const emxArray_real_T *X, const real_T phi0[2],
                    const real_T PHI0[4], const real_T phi_before[2],
                    real_T phi[2])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *y;
  real_T B1inv[4];
  real_T PHI0inv_data[4];
  real_T b_tmp_data[4];
  real_T A[2];
  real_T b[2];
  real_T phi_data[2];
  real_T tmp_data[2];
  const real_T *X_data;
  const real_T *Y_data;
  real_T alpha1;
  real_T beta1;
  real_T *y_data;
  int32_T PHI0inv_size[2];
  int32_T tmp_size[2];
  int32_T B1inv_tmp;
  int32_T i;
  int32_T i1;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  X_data = X->data;
  Y_data = Y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, 2, &hg_emlrtRTEI);
  /*  res: Test "res"th parameter is positive or not. (res is column vector) */
  /*  If res is zeros, then test will not be counducted. */
  st.site = &qh_emlrtRSI;
  invpd(&st, PHI0, PHI0inv_data, PHI0inv_size);
  i = y->size[0] * y->size[1];
  y->size[0] = 2;
  y->size[1] = 2;
  emxEnsureCapacity_real_T(sp, y, i, &gg_emlrtRTEI);
  y_data = y->data;
  y_data[0] = 0.5 * (PHI0inv_data[0] + PHI0inv_data[0]);
  alpha1 = 0.5 * (PHI0inv_data[1] + PHI0inv_data[2]);
  y_data[1] = alpha1;
  y_data[y->size[0]] = alpha1;
  y_data[y->size[0] + 1] = 0.5 * (PHI0inv_data[3] + PHI0inv_data[3]);
  st.site = &rh_emlrtRSI;
  if (X->size[0] == 0) {
    B1inv[0] = 0.0;
    B1inv[1] = 0.0;
    B1inv[2] = 0.0;
    B1inv[3] = 0.0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)2;
    n_t = (ptrdiff_t)2;
    k_t = (ptrdiff_t)X->size[0];
    lda_t = (ptrdiff_t)X->size[0];
    ldb_t = (ptrdiff_t)X->size[0];
    ldc_t = (ptrdiff_t)2;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &X_data[0], &lda_t,
          &X_data[0], &ldb_t, &beta1, &B1inv[0], &ldc_t);
  }
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < 2; i1++) {
      B1inv_tmp = i1 + (i << 1);
      B1inv[B1inv_tmp] += y_data[i1 + y->size[0] * i];
    }
  }
  st.site = &sh_emlrtRSI;
  h_mtimes((real_T *)y->data, phi0, tmp_data, &B1inv_tmp);
  st.site = &sh_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  emxFree_real_T(&b_st, &y);
  if (X->size[0] != Y->size[0]) {
    if (Y->size[0] == 1) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if ((X->size[0] == 0) || (Y->size[0] == 0)) {
    A[0] = 0.0;
    A[1] = 0.0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)2;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)X->size[0];
    lda_t = (ptrdiff_t)X->size[0];
    ldb_t = (ptrdiff_t)Y->size[0];
    ldc_t = (ptrdiff_t)2;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &X_data[0], &lda_t,
          &Y_data[0], &ldb_t, &beta1, &A[0], &ldc_t);
  }
  A[0] += tmp_data[0];
  b_tmp_data[0] = 0.5 * (B1inv[0] + B1inv[0]);
  alpha1 = 0.5 * (B1inv[1] + B1inv[2]);
  b_tmp_data[1] = alpha1;
  A[1] += tmp_data[1];
  b_tmp_data[2] = alpha1;
  b_tmp_data[3] = 0.5 * (B1inv[3] + B1inv[3]);
  st.site = &th_emlrtRSI;
  invpd(&st, b_tmp_data, PHI0inv_data, PHI0inv_size);
  st.site = &uh_emlrtRSI;
  cholmod(&st, PHI0inv_data, PHI0inv_size, B1inv, tmp_size);
  B1inv_tmp = tmp_size[0] * tmp_size[1];
  if (0 <= B1inv_tmp - 1) {
    memcpy(&b_tmp_data[0], &B1inv[0], B1inv_tmp * sizeof(real_T));
  }
  st.site = &uh_emlrtRSI;
  h_mtimes(PHI0inv_data, A, phi_data, &B1inv_tmp);
  st.site = &uh_emlrtRSI;
  b_randn(b);
  i_mtimes(b_tmp_data, b, tmp_data, &B1inv_tmp);
  phi_data[0] += tmp_data[0];
  phi_data[1] += tmp_data[1];
  alpha1 = 0.0;
  exitg1 = false;
  while ((!exitg1) && (!(muDoubleScalarAbs(phi_data[1]) <= 1.0))) {
    alpha1++;
    if (alpha1 == 100.0) {
      phi_data[0] = phi_before[0];
      phi_data[1] = phi_before[1];
      exitg1 = true;
    } else {
      st.site = &vh_emlrtRSI;
      cholmod(&st, PHI0inv_data, PHI0inv_size, B1inv, tmp_size);
      B1inv_tmp = tmp_size[0] * tmp_size[1];
      if (0 <= B1inv_tmp - 1) {
        memcpy(&b_tmp_data[0], &B1inv[0], B1inv_tmp * sizeof(real_T));
      }
      st.site = &vh_emlrtRSI;
      h_mtimes(PHI0inv_data, A, phi_data, &B1inv_tmp);
      st.site = &vh_emlrtRSI;
      b_randn(b);
      i_mtimes(b_tmp_data, b, tmp_data, &B1inv_tmp);
      phi_data[0] += tmp_data[0];
      phi_data[1] += tmp_data[1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  }
  phi[0] = phi_data[0];
  phi[1] = phi_data[1];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[3])
{
  static const int32_T iv[2] = {1, 3};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void b_minus(const emlrtStack *sp, emxArray_real_T *ehat,
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
  emxInit_real_T(sp, &b_Y, 1, &vh_emlrtRTEI);
  i = b_Y->size[0];
  if (ehat->size[0] == 1) {
    b_Y->size[0] = Y->size[0];
  } else {
    b_Y->size[0] = ehat->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_Y, i, &vh_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, ehat, i, &vh_emlrtRTEI);
  ehat_data = ehat->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    ehat_data[i] = b_Y_data[i];
  }
  emxFree_real_T(sp, &b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *var_tl,
                   const emxArray_real_T *Sigma)
{
  emxArray_real_T *b_var_tl;
  const real_T *Sigma_data;
  real_T *b_var_tl_data;
  real_T *var_tl_data;
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
  Sigma_data = Sigma->data;
  var_tl_data = var_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_var_tl, 2, &bh_emlrtRTEI);
  i = b_var_tl->size[0] * b_var_tl->size[1];
  if (Sigma->size[0] == 1) {
    b_var_tl->size[0] = var_tl->size[0];
  } else {
    b_var_tl->size[0] = Sigma->size[0];
  }
  if (Sigma->size[1] == 1) {
    b_var_tl->size[1] = var_tl->size[1];
  } else {
    b_var_tl->size[1] = Sigma->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_var_tl, i, &bh_emlrtRTEI);
  b_var_tl_data = b_var_tl->data;
  stride_0_0 = (var_tl->size[0] != 1);
  stride_0_1 = (var_tl->size[1] != 1);
  stride_1_0 = (Sigma->size[0] != 1);
  stride_1_1 = (Sigma->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Sigma->size[1] == 1) {
    loop_ub = var_tl->size[1];
  } else {
    loop_ub = Sigma->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Sigma->size[0] == 1) {
      b_loop_ub = var_tl->size[0];
    } else {
      b_loop_ub = Sigma->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_var_tl_data[i1 + b_var_tl->size[0] * i] =
          var_tl_data[i1 * stride_0_0 + var_tl->size[0] * aux_0_1] +
          Sigma_data[i1 * stride_1_0 + Sigma->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = var_tl->size[0] * var_tl->size[1];
  var_tl->size[0] = b_var_tl->size[0];
  var_tl->size[1] = b_var_tl->size[1];
  emxEnsureCapacity_real_T(sp, var_tl, i, &bh_emlrtRTEI);
  var_tl_data = var_tl->data;
  loop_ub = b_var_tl->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_var_tl->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      var_tl_data[i1 + var_tl->size[0] * i] =
          b_var_tl_data[i1 + b_var_tl->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_var_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_creal_T *Pm,
                             const emxArray_real_T *sig2m)
{
  emxArray_creal_T *b_sig2m;
  creal_T *Pm_data;
  creal_T *b_sig2m_data;
  const real_T *sig2m_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  sig2m_data = sig2m->data;
  Pm_data = Pm->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_creal_T(sp, &b_sig2m, 2, &nb_emlrtRTEI);
  i = b_sig2m->size[0] * b_sig2m->size[1];
  if (Pm->size[0] == 1) {
    b_sig2m->size[0] = sig2m->size[0];
  } else {
    b_sig2m->size[0] = Pm->size[0];
  }
  if (Pm->size[1] == 1) {
    b_sig2m->size[1] = sig2m->size[1];
  } else {
    b_sig2m->size[1] = Pm->size[1];
  }
  emxEnsureCapacity_creal_T(sp, b_sig2m, i, &nb_emlrtRTEI);
  b_sig2m_data = b_sig2m->data;
  stride_0_0 = (sig2m->size[0] != 1);
  stride_0_1 = (sig2m->size[1] != 1);
  stride_1_0 = (Pm->size[0] != 1);
  stride_1_1 = (Pm->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Pm->size[1] == 1) {
    loop_ub = sig2m->size[1];
  } else {
    loop_ub = Pm->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Pm->size[0] == 1) {
      b_loop_ub = sig2m->size[0];
    } else {
      b_loop_ub = Pm->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      i2 = i1 * stride_1_0;
      b_sig2m_data[i1 + b_sig2m->size[0] * i].re =
          sig2m_data[i1 * stride_0_0 + sig2m->size[0] * aux_0_1] -
          Pm_data[i2 + Pm->size[0] * aux_1_1].re;
      b_sig2m_data[i1 + b_sig2m->size[0] * i].im =
          0.0 - Pm_data[i2 + Pm->size[0] * aux_1_1].im;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Pm->size[0] * Pm->size[1];
  Pm->size[0] = b_sig2m->size[0];
  Pm->size[1] = b_sig2m->size[1];
  emxEnsureCapacity_creal_T(sp, Pm, i, &nb_emlrtRTEI);
  Pm_data = Pm->data;
  loop_ub = b_sig2m->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_sig2m->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Pm_data[i1 + Pm->size[0] * i] = b_sig2m_data[i1 + b_sig2m->size[0] * i];
    }
  }
  emxFree_creal_T(sp, &b_sig2m);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
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

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[6])
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

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[14])
{
  static const int32_T iv[2] = {1, 14};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 14, m, &u[0]);
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

static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *e_tl,
                               const emxArray_real_T *y, int32_T t,
                               const emxArray_real_T *r1)
{
  const real_T *r;
  const real_T *y_data;
  real_T *e_tl_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  y_data = y->data;
  i = y->size[1];
  stride_0_0 = e_tl->size[0];
  if (r1->size[0] == 1) {
    e_tl->size[0] = i;
  } else {
    e_tl->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, e_tl, stride_0_0, &fh_emlrtRTEI);
  e_tl_data = e_tl->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    e_tl_data[i] =
        y_data[t + y->size[0] * (i * stride_0_0)] - r[i * stride_1_0];
  }
}

static const mxArray *f_emlrt_marshallOut(const real_T u[3])
{
  static const int32_T iv[2] = {1, 3};
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u[0];
  pData[1] = u[1];
  pData[2] = u[2];
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *h_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
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

static const mxArray *n_emlrt_marshallOut(void)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  return y;
}

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *beta, const emxArray_real_T *sig2)
{
  const real_T *beta_data;
  const real_T *sig2_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  sig2_data = sig2->data;
  beta_data = beta->data;
  i = y->size[0];
  if (sig2->size[0] == 1) {
    y->size[0] = beta->size[0];
  } else {
    y->size[0] = sig2->size[0];
  }
  emxEnsureCapacity_real_T(sp, y, i, &hc_emlrtRTEI);
  y_data = y->data;
  stride_0_0 = (beta->size[0] != 1);
  stride_1_0 = (sig2->size[0] != 1);
  if (sig2->size[0] == 1) {
    loop_ub = beta->size[0];
  } else {
    loop_ub = sig2->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = beta_data[i * stride_0_0] + sig2_data[i * stride_1_0];
  }
}

void Common_Factor_Model(const emlrtStack *sp, const emxArray_real_T *y,
                         const emxArray_real_T *h0, const emxArray_real_T *H0,
                         const real_T g0[2], const real_T G0[4],
                         const emxArray_real_T *a0, const emxArray_real_T *d0,
                         real_T scale, real_T n0, real_T n1, struct0_T *Output)
{
  static const char_T cv2[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T cv5[14] = {'[', 'm', 'u', ' ', 'G', ' ', 's',
                                 'i', 'g', '2', 'v', ']', ':', ' '};
  static const char_T b_cv1[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T cv4[6] = {'s', 'i', 'g', '2', ':', ' '};
  static const char_T cv3[3] = {'H', ':', ' '};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_creal_T *H;
  emxArray_creal_T *PC;
  emxArray_creal_T *PC_Principal_Component;
  emxArray_creal_T *Pm;
  emxArray_creal_T *X;
  emxArray_creal_T *Y;
  emxArray_creal_T *b_PC_Principal_Component;
  emxArray_creal_T *b_X;
  emxArray_creal_T *c_y;
  emxArray_creal_T *expl_temp;
  emxArray_real_T *Gm;
  emxArray_real_T *Hm;
  emxArray_real_T *b_H;
  emxArray_real_T *b_beta;
  emxArray_real_T *beta;
  emxArray_real_T *betam;
  emxArray_real_T *c_H;
  emxArray_real_T *d_H;
  emxArray_real_T *decomm;
  emxArray_real_T *f_y;
  emxArray_real_T *mum;
  emxArray_real_T *r;
  emxArray_real_T *sig2;
  emxArray_real_T *sig2m;
  creal_T b_y[4];
  creal_T e_y[2];
  creal_T phi[2];
  creal_T d_y;
  creal_T *PC_Principal_Component_data;
  creal_T *PC_data;
  creal_T *Pm_data;
  creal_T *X_data;
  creal_T *expl_temp_data;
  real_T c_phi[3];
  real_T b_phi[2];
  real_T d_phi[2];
  const real_T *H0_data;
  const real_T *a0_data;
  const real_T *d0_data;
  const real_T *h0_data;
  const real_T *y_data;
  real_T ar;
  real_T brm;
  real_T im;
  real_T mu;
  real_T n;
  real_T re;
  real_T *Gm_data;
  real_T *H_data;
  real_T *Hm_data;
  real_T *b_H_data;
  real_T *beta_data;
  real_T *betam_data;
  real_T *decomm_data;
  real_T *mum_data;
  real_T *sig2_data;
  real_T *sig2m_data;
  int32_T b_mum[2];
  int32_T iv[2];
  int32_T PC_idx_0;
  int32_T T;
  int32_T b_loop_ub;
  int32_T b_n;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T iter;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  char_T b_cv[37];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  d0_data = d0->data;
  a0_data = a0->data;
  H0_data = H0->data;
  h0_data = h0->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  n = n0 + n1;
  T = y->size[0];
  /*  number of columns */
  /*  Storage Room for sample */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &e_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Hm, 2, &ic_emlrtRTEI);
  loop_ub_tmp = (int32_T)n;
  i1 = Hm->size[0] * Hm->size[1];
  Hm->size[0] = loop_ub_tmp;
  Hm->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, Hm, i1, &bb_emlrtRTEI);
  Hm_data = Hm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &d_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &betam, 2, &jc_emlrtRTEI);
  i1 = betam->size[0] * betam->size[1];
  betam->size[0] = loop_ub_tmp;
  betam->size[1] = y->size[0];
  emxEnsureCapacity_real_T(sp, betam, i1, &cb_emlrtRTEI);
  betam_data = betam->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &c_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Gm, 1, &db_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &b_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = Gm->size[0];
  Gm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, Gm, i1, &db_emlrtRTEI);
  Gm_data = Gm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &b_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Gm_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &mum, 1, &eb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &emlrtDCI, (emlrtCTX)sp);
  }
  i1 = mum->size[0];
  mum->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, mum, i1, &eb_emlrtRTEI);
  mum_data = mum->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    mum_data[i1] = 0.0;
  }
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &q_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_creal_T(sp, &PC_Principal_Component, 2, &mc_emlrtRTEI);
  emxInit_creal_T(sp, &Pm, 2, &nc_emlrtRTEI);
  emxInit_creal_T(sp, &expl_temp, 2, &tc_emlrtRTEI);
  /*  Initial values */
  st.site = &emlrtRSI;
  PCA(&st, y, PC_Principal_Component, Pm, expl_temp);
  PC_Principal_Component_data = PC_Principal_Component->data;
  if (1 > PC_Principal_Component->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, PC_Principal_Component->size[1],
                                  &rb_emlrtBCI, (emlrtCTX)sp);
  }
  /*  Deriving initial values */
  if (1 > PC_Principal_Component->size[0] - 1) {
    loop_ub = 0;
  } else {
    if (1 > PC_Principal_Component->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, PC_Principal_Component->size[0],
                                    &qb_emlrtBCI, (emlrtCTX)sp);
    }
    if ((PC_Principal_Component->size[0] - 1 < 1) ||
        (PC_Principal_Component->size[0] - 1 >
         PC_Principal_Component->size[0])) {
      emlrtDynamicBoundsCheckR2012b(PC_Principal_Component->size[0] - 1, 1,
                                    PC_Principal_Component->size[0],
                                    &pb_emlrtBCI, (emlrtCTX)sp);
    }
    loop_ub = PC_Principal_Component->size[0] - 1;
  }
  st.site = &b_emlrtRSI;
  if (!((real_T)PC_Principal_Component->size[0] - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(-1.0, &p_emlrtDCI, &st);
  }
  b_st.site = &ff_emlrtRSI;
  c_st.site = &gf_emlrtRSI;
  if (loop_ub != PC_Principal_Component->size[0] - 1) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_creal_T(&c_st, &X, 2, &fb_emlrtRTEI);
  i = X->size[0] * X->size[1];
  X->size[0] = PC_Principal_Component->size[0] - 1;
  X->size[1] = 2;
  emxEnsureCapacity_creal_T(&b_st, X, i, &fb_emlrtRTEI);
  X_data = X->data;
  b_loop_ub = PC_Principal_Component->size[0] - 1;
  for (i = 0; i < b_loop_ub; i++) {
    X_data[i].re = 1.0;
    X_data[i].im = 0.0;
  }
  for (i = 0; i < loop_ub; i++) {
    X_data[i + X->size[0]] = PC_Principal_Component_data[i];
  }
  if (2 > PC_Principal_Component->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = PC_Principal_Component->size[0];
  }
  emxInit_creal_T(sp, &Y, 2, &rc_emlrtRTEI);
  st.site = &c_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  mtimes(X, X, b_y);
  st.site = &c_emlrtRSI;
  b_st.site = &kf_emlrtRSI;
  mrdiv(&b_st, X, b_y, Y);
  st.site = &c_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  b_mtimes(&b_st, Y, X, Pm);
  if ((Pm->size[0] == 0) || (Pm->size[1] == 0)) {
    b_n = 0;
  } else {
    b_n = muIntScalarMax_sint32(Pm->size[0], Pm->size[1]);
  }
  emxInit_real_T(sp, &sig2m, 2, &kc_emlrtRTEI);
  st.site = &d_emlrtRSI;
  eye(&st, b_n, sig2m);
  sig2m_data = sig2m->data;
  if ((sig2m->size[0] != Pm->size[0]) &&
      ((sig2m->size[0] != 1) && (Pm->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(sig2m->size[0], Pm->size[0], &i_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((sig2m->size[1] != Pm->size[1]) &&
      ((sig2m->size[1] != 1) && (Pm->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(sig2m->size[1], Pm->size[1], &h_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_creal_T(sp, &c_y, 2, &sc_emlrtRTEI);
  st.site = &d_emlrtRSI;
  if ((sig2m->size[0] == Pm->size[0]) && (sig2m->size[1] == Pm->size[1])) {
    loop_ub = sig2m->size[0] * sig2m->size[1];
    iter = Pm->size[0] * Pm->size[1];
    Pm->size[0] = sig2m->size[0];
    Pm->size[1] = sig2m->size[1];
    emxEnsureCapacity_creal_T(&st, Pm, iter, &gb_emlrtRTEI);
    Pm_data = Pm->data;
    for (iter = 0; iter < loop_ub; iter++) {
      Pm_data[iter].re = sig2m_data[iter] - Pm_data[iter].re;
      Pm_data[iter].im = 0.0 - Pm_data[iter].im;
    }
  } else {
    b_st.site = &d_emlrtRSI;
    binary_expand_op(&b_st, Pm, sig2m);
  }
  emxInit_creal_T(&st, &b_PC_Principal_Component, 1, &uc_emlrtRTEI);
  loop_ub = i1 - i;
  iter = b_PC_Principal_Component->size[0];
  b_PC_Principal_Component->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(&st, b_PC_Principal_Component, iter, &hb_emlrtRTEI);
  Pm_data = b_PC_Principal_Component->data;
  for (iter = 0; iter < loop_ub; iter++) {
    Pm_data[iter] = PC_Principal_Component_data[i + iter];
  }
  b_st.site = &ef_emlrtRSI;
  b_dynamic_size_checks(&b_st, b_PC_Principal_Component, Pm, i1 - i,
                        Pm->size[0]);
  iter = b_PC_Principal_Component->size[0];
  b_PC_Principal_Component->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(&st, b_PC_Principal_Component, iter, &hb_emlrtRTEI);
  Pm_data = b_PC_Principal_Component->data;
  for (iter = 0; iter < loop_ub; iter++) {
    Pm_data[iter] = PC_Principal_Component_data[i + iter];
  }
  b_st.site = &hf_emlrtRSI;
  c_mtimes(&b_st, b_PC_Principal_Component, Pm, c_y);
  st.site = &d_emlrtRSI;
  iter = b_PC_Principal_Component->size[0];
  b_PC_Principal_Component->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(&st, b_PC_Principal_Component, iter, &hb_emlrtRTEI);
  Pm_data = b_PC_Principal_Component->data;
  for (iter = 0; iter < loop_ub; iter++) {
    Pm_data[iter] = PC_Principal_Component_data[i + iter];
  }
  b_st.site = &ef_emlrtRSI;
  c_dynamic_size_checks(&b_st, c_y, b_PC_Principal_Component, c_y->size[1],
                        i1 - i);
  i1 = b_PC_Principal_Component->size[0];
  b_PC_Principal_Component->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(&st, b_PC_Principal_Component, i1, &hb_emlrtRTEI);
  Pm_data = b_PC_Principal_Component->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Pm_data[i1] = PC_Principal_Component_data[i + i1];
  }
  b_st.site = &hf_emlrtRSI;
  d_y = d_mtimes(&b_st, c_y, b_PC_Principal_Component);
  /*  Normalize sig2v to one */
  emxFree_creal_T(sp, &c_y);
  if (d_y.im == 0.0) {
    re = d_y.re / (((real_T)(loop_ub - 1) + 1.0) - 2.0);
    im = 0.0;
  } else if (d_y.re == 0.0) {
    re = 0.0;
    im = d_y.im / (((real_T)(loop_ub - 1) + 1.0) - 2.0);
  } else {
    re = d_y.re / (((real_T)(loop_ub - 1) + 1.0) - 2.0);
    im = d_y.im / (((real_T)(loop_ub - 1) + 1.0) - 2.0);
  }
  emxInit_creal_T(sp, &PC, 1, &mc_emlrtRTEI);
  d_y.re = re;
  d_y.im = im;
  b_sqrt(&d_y);
  loop_ub = PC_Principal_Component->size[0];
  i = PC->size[0];
  PC->size[0] = PC_Principal_Component->size[0];
  emxEnsureCapacity_creal_T(sp, PC, i, &ib_emlrtRTEI);
  PC_data = PC->data;
  for (i = 0; i < loop_ub; i++) {
    ar = PC_Principal_Component_data[i].re;
    mu = PC_Principal_Component_data[i].im;
    if (d_y.im == 0.0) {
      if (mu == 0.0) {
        PC_data[i].re = ar / d_y.re;
        PC_data[i].im = 0.0;
      } else if (ar == 0.0) {
        PC_data[i].re = 0.0;
        PC_data[i].im = mu / d_y.re;
      } else {
        PC_data[i].re = ar / d_y.re;
        PC_data[i].im = mu / d_y.re;
      }
    } else if (d_y.re == 0.0) {
      if (ar == 0.0) {
        PC_data[i].re = mu / d_y.im;
        PC_data[i].im = 0.0;
      } else if (mu == 0.0) {
        PC_data[i].re = 0.0;
        PC_data[i].im = -(ar / d_y.im);
      } else {
        PC_data[i].re = mu / d_y.im;
        PC_data[i].im = -(ar / d_y.im);
      }
    } else {
      brm = muDoubleScalarAbs(d_y.re);
      re = muDoubleScalarAbs(d_y.im);
      if (brm > re) {
        re = d_y.im / d_y.re;
        im = d_y.re + re * d_y.im;
        PC_data[i].re = (ar + re * mu) / im;
        PC_data[i].im = (mu - re * ar) / im;
      } else if (re == brm) {
        if (d_y.re > 0.0) {
          re = 0.5;
        } else {
          re = -0.5;
        }
        if (d_y.im > 0.0) {
          im = 0.5;
        } else {
          im = -0.5;
        }
        PC_data[i].re = (ar * re + mu * im) / brm;
        PC_data[i].im = (mu * re - ar * im) / brm;
      } else {
        re = d_y.re / d_y.im;
        im = d_y.im + re * d_y.re;
        PC_data[i].re = (re * ar + mu) / im;
        PC_data[i].im = (re * mu - ar) / im;
      }
    }
  }
  if (1 > PC->size[0] - 1) {
    loop_ub = 0;
  } else {
    if (1 > PC->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, PC->size[0], &ob_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((PC->size[0] - 1 < 1) || (PC->size[0] - 1 > PC->size[0])) {
      emlrtDynamicBoundsCheckR2012b(PC->size[0] - 1, 1, PC->size[0],
                                    &nb_emlrtBCI, (emlrtCTX)sp);
    }
    loop_ub = PC->size[0] - 1;
  }
  st.site = &e_emlrtRSI;
  if (!((real_T)PC->size[0] - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(-1.0, &o_emlrtDCI, &st);
  }
  b_st.site = &ff_emlrtRSI;
  c_st.site = &gf_emlrtRSI;
  if (loop_ub != PC->size[0] - 1) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  i = X->size[0] * X->size[1];
  X->size[0] = PC->size[0] - 1;
  X->size[1] = 2;
  emxEnsureCapacity_creal_T(&b_st, X, i, &jb_emlrtRTEI);
  X_data = X->data;
  b_loop_ub = PC->size[0] - 1;
  for (i = 0; i < b_loop_ub; i++) {
    X_data[i].re = 1.0;
    X_data[i].im = 0.0;
  }
  for (i = 0; i < loop_ub; i++) {
    X_data[i + X->size[0]] = PC_data[i];
  }
  if (2 > PC->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = PC->size[0];
  }
  st.site = &f_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  mtimes(X, X, b_y);
  st.site = &f_emlrtRSI;
  loop_ub = i1 - i;
  iter = b_PC_Principal_Component->size[0];
  b_PC_Principal_Component->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(&st, b_PC_Principal_Component, iter, &hb_emlrtRTEI);
  Pm_data = b_PC_Principal_Component->data;
  for (iter = 0; iter < loop_ub; iter++) {
    Pm_data[iter] = PC_data[i + iter];
  }
  b_st.site = &ef_emlrtRSI;
  d_dynamic_size_checks(&b_st, b_PC_Principal_Component, X->size[0], i1 - i);
  i1 = b_PC_Principal_Component->size[0];
  b_PC_Principal_Component->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(&st, b_PC_Principal_Component, i1, &hb_emlrtRTEI);
  Pm_data = b_PC_Principal_Component->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    Pm_data[i1] = PC_data[i + i1];
  }
  b_st.site = &hf_emlrtRSI;
  e_mtimes(X, b_PC_Principal_Component, e_y);
  st.site = &f_emlrtRSI;
  mldivide(&st, b_y, e_y, phi);
  /*  Pm = (X/(X'*X))*X'; */
  /*  sig2v = (Y'*(eye(length(Pm)) - Pm)*Y)/(rows(Y) - 2); */
  st.site = &g_emlrtRSI;
  b_st.site = &ff_emlrtRSI;
  c_st.site = &gf_emlrtRSI;
  PC_idx_0 = PC->size[0];
  i = X->size[0] * X->size[1];
  X->size[0] = PC->size[0];
  X->size[1] = 2;
  emxEnsureCapacity_creal_T(&b_st, X, i, &kb_emlrtRTEI);
  X_data = X->data;
  loop_ub = PC->size[0];
  for (i = 0; i < loop_ub; i++) {
    X_data[i].re = 1.0;
    X_data[i].im = 0.0;
  }
  loop_ub = PC->size[0];
  for (i = 0; i < loop_ub; i++) {
    X_data[i + X->size[0]] = PC_data[i];
  }
  st.site = &h_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  mtimes(X, X, b_y);
  st.site = &h_emlrtRSI;
  b_st.site = &kf_emlrtRSI;
  mrdiv(&b_st, X, b_y, Y);
  st.site = &h_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  b_mtimes(&b_st, Y, X, Pm);
  st.site = &i_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  mtimes(X, X, b_y);
  st.site = &i_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  e_dynamic_size_checks(&b_st, y, X->size[0], y->size[0]);
  i = expl_temp->size[0] * expl_temp->size[1];
  expl_temp->size[0] = y->size[0];
  expl_temp->size[1] = y->size[1];
  emxEnsureCapacity_creal_T(sp, expl_temp, i, &lb_emlrtRTEI);
  expl_temp_data = expl_temp->data;
  loop_ub = y->size[0] * y->size[1];
  emxFree_creal_T(sp, &Y);
  for (i = 0; i < loop_ub; i++) {
    expl_temp_data[i].re = y_data[i];
    expl_temp_data[i].im = 0.0;
  }
  emxInit_creal_T(sp, &b_X, 2, &lb_emlrtRTEI);
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = 2;
  b_X->size[1] = expl_temp->size[1];
  emxEnsureCapacity_creal_T(sp, b_X, i, &lb_emlrtRTEI);
  Pm_data = b_X->data;
  loop_ub = expl_temp->size[1];
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      iter = i + 2 * i1;
      Pm_data[iter].re = 0.0;
      Pm_data[iter].im = 0.0;
      b_loop_ub = X->size[0];
      for (b_n = 0; b_n < b_loop_ub; b_n++) {
        re = X_data[b_n + X->size[0] * i].re;
        im = -X_data[b_n + X->size[0] * i].im;
        mu = expl_temp_data[b_n + expl_temp->size[0] * i1].im;
        brm = expl_temp_data[b_n + expl_temp->size[0] * i1].re;
        Pm_data[iter].re += re * brm - im * mu;
        Pm_data[iter].im += re * mu + im * brm;
      }
    }
  }
  emxFree_creal_T(sp, &X);
  emxInit_creal_T(sp, &H, 2, &oc_emlrtRTEI);
  st.site = &i_emlrtRSI;
  b_mldivide(&st, b_y, b_X, H);
  Pm_data = H->data;
  loop_ub = H->size[1];
  i = PC->size[0];
  PC->size[0] = H->size[1];
  emxEnsureCapacity_creal_T(sp, PC, i, &mb_emlrtRTEI);
  PC_data = PC->data;
  emxFree_creal_T(sp, &b_X);
  for (i = 0; i < loop_ub; i++) {
    i1 = 2 * i + 1;
    PC_data[i].re = Pm_data[i1].re;
    PC_data[i].im = -Pm_data[i1].im;
  }
  emxFree_creal_T(sp, &H);
  if ((Pm->size[0] == 0) || (Pm->size[1] == 0)) {
    b_n = 0;
  } else {
    b_n = muIntScalarMax_sint32(Pm->size[0], Pm->size[1]);
  }
  st.site = &j_emlrtRSI;
  eye(&st, b_n, sig2m);
  sig2m_data = sig2m->data;
  if ((sig2m->size[0] != Pm->size[0]) &&
      ((sig2m->size[0] != 1) && (Pm->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(sig2m->size[0], Pm->size[0], &g_emlrtECI,
                                (emlrtCTX)sp);
  }
  if ((sig2m->size[1] != Pm->size[1]) &&
      ((sig2m->size[1] != 1) && (Pm->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(sig2m->size[1], Pm->size[1], &f_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &j_emlrtRSI;
  if ((sig2m->size[0] == Pm->size[0]) && (sig2m->size[1] == Pm->size[1])) {
    loop_ub = sig2m->size[0] * sig2m->size[1];
    i = Pm->size[0] * Pm->size[1];
    Pm->size[0] = sig2m->size[0];
    Pm->size[1] = sig2m->size[1];
    emxEnsureCapacity_creal_T(&st, Pm, i, &nb_emlrtRTEI);
    Pm_data = Pm->data;
    for (i = 0; i < loop_ub; i++) {
      Pm_data[i].re = sig2m_data[i] - Pm_data[i].re;
      Pm_data[i].im = 0.0 - Pm_data[i].im;
    }
  } else {
    b_st.site = &j_emlrtRSI;
    binary_expand_op(&b_st, Pm, sig2m);
    Pm_data = Pm->data;
  }
  b_st.site = &ef_emlrtRSI;
  dynamic_size_checks(&b_st, y, Pm, y->size[0], Pm->size[0]);
  i = PC_Principal_Component->size[0] * PC_Principal_Component->size[1];
  PC_Principal_Component->size[0] = y->size[1];
  PC_Principal_Component->size[1] = y->size[0];
  emxEnsureCapacity_creal_T(&st, PC_Principal_Component, i, &lb_emlrtRTEI);
  PC_Principal_Component_data = PC_Principal_Component->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = y->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      PC_Principal_Component_data[i1 + PC_Principal_Component->size[0] * i].re =
          y_data[i + y->size[0] * i1];
      PC_Principal_Component_data[i1 + PC_Principal_Component->size[0] * i].im =
          0.0;
    }
  }
  i = expl_temp->size[0] * expl_temp->size[1];
  expl_temp->size[0] = PC_Principal_Component->size[0];
  expl_temp->size[1] = Pm->size[1];
  emxEnsureCapacity_creal_T(&st, expl_temp, i, &ob_emlrtRTEI);
  expl_temp_data = expl_temp->data;
  loop_ub = PC_Principal_Component->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = Pm->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      expl_temp_data[i + expl_temp->size[0] * i1].re = 0.0;
      expl_temp_data[i + expl_temp->size[0] * i1].im = 0.0;
      b_n = PC_Principal_Component->size[1];
      for (iter = 0; iter < b_n; iter++) {
        re = PC_Principal_Component_data[i +
                                         PC_Principal_Component->size[0] * iter]
                 .re;
        im = Pm_data[iter + Pm->size[0] * i1].im;
        mu = PC_Principal_Component_data[i +
                                         PC_Principal_Component->size[0] * iter]
                 .im;
        brm = Pm_data[iter + Pm->size[0] * i1].re;
        expl_temp_data[i + expl_temp->size[0] * i1].re += re * brm - mu * im;
        expl_temp_data[i + expl_temp->size[0] * i1].im += re * im + mu * brm;
      }
    }
  }
  st.site = &j_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  f_dynamic_size_checks(&b_st, expl_temp, y, expl_temp->size[1], y->size[0]);
  i = PC_Principal_Component->size[0] * PC_Principal_Component->size[1];
  PC_Principal_Component->size[0] = y->size[0];
  PC_Principal_Component->size[1] = y->size[1];
  emxEnsureCapacity_creal_T(sp, PC_Principal_Component, i, &pb_emlrtRTEI);
  PC_Principal_Component_data = PC_Principal_Component->data;
  loop_ub = y->size[0] * y->size[1];
  for (i = 0; i < loop_ub; i++) {
    PC_Principal_Component_data[i].re = y_data[i];
    PC_Principal_Component_data[i].im = 0.0;
  }
  i = Pm->size[0] * Pm->size[1];
  Pm->size[0] = expl_temp->size[0];
  Pm->size[1] = PC_Principal_Component->size[1];
  emxEnsureCapacity_creal_T(sp, Pm, i, &pb_emlrtRTEI);
  Pm_data = Pm->data;
  loop_ub = expl_temp->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = PC_Principal_Component->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Pm_data[i + Pm->size[0] * i1].re = 0.0;
      Pm_data[i + Pm->size[0] * i1].im = 0.0;
      b_n = expl_temp->size[1];
      for (iter = 0; iter < b_n; iter++) {
        re = expl_temp_data[i + expl_temp->size[0] * iter].re;
        im = PC_Principal_Component_data[iter +
                                         PC_Principal_Component->size[0] * i1]
                 .im;
        mu = expl_temp_data[i + expl_temp->size[0] * iter].im;
        brm = PC_Principal_Component_data[iter +
                                          PC_Principal_Component->size[0] * i1]
                  .re;
        Pm_data[i + Pm->size[0] * i1].re += re * brm - mu * im;
        Pm_data[i + Pm->size[0] * i1].im += re * im + mu * brm;
      }
    }
  }
  emxFree_creal_T(sp, &expl_temp);
  emxFree_creal_T(sp, &PC_Principal_Component);
  st.site = &j_emlrtRSI;
  diag(&st, Pm, b_PC_Principal_Component);
  Pm_data = b_PC_Principal_Component->data;
  emxFree_creal_T(sp, &Pm);
  if (1 > PC->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, PC->size[0], &mb_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b_H, 1, &oc_emlrtRTEI);
  if (PC_data[0].re > 0.0) {
    i = b_H->size[0];
    b_H->size[0] = PC->size[0];
    emxEnsureCapacity_real_T(sp, b_H, i, &rb_emlrtRTEI);
    H_data = b_H->data;
    loop_ub = PC->size[0];
    for (i = 0; i < loop_ub; i++) {
      H_data[i] = PC_data[i].re;
    }
    mu = phi[0].re;
  } else {
    i = b_H->size[0];
    b_H->size[0] = PC->size[0];
    emxEnsureCapacity_real_T(sp, b_H, i, &qb_emlrtRTEI);
    H_data = b_H->data;
    loop_ub = PC->size[0];
    for (i = 0; i < loop_ub; i++) {
      H_data[i] = -PC_data[i].re;
    }
    mu = -phi[0].re;
  }
  emxFree_creal_T(sp, &PC);
  emxInit_real_T(sp, &sig2, 1, &qc_emlrtRTEI);
  d_y.re = (real_T)y->size[0] - 2.0;
  i = sig2->size[0];
  sig2->size[0] = b_PC_Principal_Component->size[0];
  emxEnsureCapacity_real_T(sp, sig2, i, &sb_emlrtRTEI);
  sig2_data = sig2->data;
  loop_ub = b_PC_Principal_Component->size[0];
  for (i = 0; i < loop_ub; i++) {
    ar = Pm_data[i].re;
    if (Pm_data[i].im == 0.0) {
      re = ar / d_y.re;
    } else if (ar == 0.0) {
      re = 0.0;
    } else {
      re = ar / d_y.re;
    }
    sig2_data[i] = re;
  }
  emxFree_creal_T(sp, &b_PC_Principal_Component);
  emxInit_real_T(sp, &decomm, 2, &lc_emlrtRTEI);
  re = phi[1].re;
  b_phi[0] = phi[0].re;
  b_phi[1] = phi[1].re;
  /*  Gibbs-Sampling */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &b_emlrtRTEI, (emlrtCTX)sp);
  i = sig2m->size[0] * sig2m->size[1];
  sig2m->size[0] = loop_ub_tmp;
  sig2m->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, sig2m, i, &cb_emlrtRTEI);
  sig2m_data = sig2m->data;
  i = decomm->size[0] * decomm->size[1];
  decomm->size[0] = loop_ub_tmp;
  decomm->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, decomm, i, &cb_emlrtRTEI);
  decomm_data = decomm->data;
  if (0.0 <= n - 1.0) {
    PC_idx_0 = y->size[0] - 1;
    c_loop_ub = y->size[0] - 1;
    i2 = y->size[1];
  }
  emxInit_real_T(sp, &beta, 1, &pc_emlrtRTEI);
  emxInit_real_T(sp, &f_y, 1, &hc_emlrtRTEI);
  emxInit_real_T(sp, &c_H, 2, &vb_emlrtRTEI);
  emxInit_real_T(sp, &b_beta, 1, &ec_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &bc_emlrtRTEI);
  emxInit_real_T(sp, &d_H, 2, &lb_emlrtRTEI);
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
      st.site = &dl_emlrtRSI;
      clc(&st, &emlrtMCI);
      for (i = 0; i < 37; i++) {
        b_cv[i] = '=';
      }
      st.site = &vk_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, b_cv), &b_emlrtMCI);
      st.site = &k_emlrtRSI;
      b_st.site = &xf_emlrtRSI;
      c_st.site = &al_emlrtRSI;
      d_st.site = &bl_emlrtRSI;
      emlrt_marshallIn(
          &c_st,
          c_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv1),
                  h_emlrt_marshallOut(1.0), i_emlrt_marshallOut(&d_st, cv2),
                  h_emlrt_marshallOut((real_T)iter + 1.0), &m_emlrtMCI),
          "<output of feval>");
      for (i = 0; i < 37; i++) {
        b_cv[i] = '=';
      }
      st.site = &uk_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, b_cv), &c_emlrtMCI);
      st.site = &hl_emlrtRSI;
      disp(&st, n_emlrt_marshallOut(), &d_emlrtMCI);
      st.site = &wk_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(&st, cv3), &e_emlrtMCI);
      i = c_H->size[0] * c_H->size[1];
      c_H->size[0] = 1;
      loop_ub = b_H->size[0];
      c_H->size[1] = b_H->size[0];
      emxEnsureCapacity_real_T(sp, c_H, i, &vb_emlrtRTEI);
      b_H_data = c_H->data;
      for (i = 0; i < loop_ub; i++) {
        b_H_data[i] = H_data[i];
      }
      st.site = &gl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(c_H), &f_emlrtMCI);
      st.site = &xk_emlrtRSI;
      disp(&st, d_emlrt_marshallOut(&st, cv4), &g_emlrtMCI);
      i = c_H->size[0] * c_H->size[1];
      c_H->size[0] = 1;
      loop_ub = sig2->size[0];
      c_H->size[1] = sig2->size[0];
      emxEnsureCapacity_real_T(sp, c_H, i, &xb_emlrtRTEI);
      b_H_data = c_H->data;
      for (i = 0; i < loop_ub; i++) {
        b_H_data[i] = sig2_data[i];
      }
      st.site = &fl_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(c_H), &h_emlrtMCI);
      st.site = &yk_emlrtRSI;
      disp(&st, e_emlrt_marshallOut(&st, cv5), &i_emlrtMCI);
      c_phi[0] = b_phi[0];
      c_phi[1] = b_phi[1];
      c_phi[2] = 1.0;
      st.site = &el_emlrtRSI;
      disp(&st, f_emlrt_marshallOut(c_phi), &j_emlrtMCI);
    }
    /*  Step 1 : Sampling Factor Using Kalman filter */
    st.site = &l_emlrtRSI;
    CFM_Gen_beta(&st, y, b_H, sig2, mu, re, beta);
    beta_data = beta->data;
    if (iter + 1 > betam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, betam->size[0], &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_mum[0] = 1;
    b_mum[1] = betam->size[1];
    iv[0] = 1;
    iv[1] = beta->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_mum[0], 2, &iv[0], 2, &c_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      betam_data[iter + betam->size[0] * i] = beta_data[i];
    }
    /*  Step 2 : Sampling Parameters of the Transition equation */
    if (2 > beta->size[0]) {
      i = 0;
      i1 = 0;
      loop_ub = 0;
    } else {
      i = 1;
      i1 = beta->size[0];
      if (1 > beta->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, beta->size[0], &lb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((beta->size[0] - 1 < 1) || (beta->size[0] - 1 > beta->size[0])) {
        emlrtDynamicBoundsCheckR2012b(beta->size[0] - 1, 1, beta->size[0],
                                      &kb_emlrtBCI, (emlrtCTX)sp);
      }
      loop_ub = beta->size[0] - 1;
    }
    st.site = &m_emlrtRSI;
    if (!((real_T)T - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(-1.0, &n_emlrtDCI, &st);
    }
    b_st.site = &ff_emlrtRSI;
    c_st.site = &gf_emlrtRSI;
    if (loop_ub != T - 1) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    b_loop_ub = i1 - i;
    i1 = b_beta->size[0];
    b_beta->size[0] = b_loop_ub;
    emxEnsureCapacity_real_T(sp, b_beta, i1, &hb_emlrtRTEI);
    b_H_data = b_beta->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_H_data[i1] = beta_data[i + i1];
    }
    i = r->size[0] * r->size[1];
    r->size[0] = PC_idx_0;
    r->size[1] = 2;
    emxEnsureCapacity_real_T(sp, r, i, &bc_emlrtRTEI);
    b_H_data = r->data;
    for (i = 0; i < c_loop_ub; i++) {
      b_H_data[i] = 1.0;
    }
    for (i = 0; i < loop_ub; i++) {
      b_H_data[i + r->size[0]] = beta_data[i];
    }
    d_phi[0] = b_phi[0];
    d_phi[1] = b_phi[1];
    st.site = &m_emlrtRSI;
    Gen_phi(&st, b_beta, r, g0, G0, d_phi, b_phi);
    if ((int32_T)(iter + 1U) > mum->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, mum->size[0],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    mum_data[iter] = b_phi[0];
    if ((int32_T)(iter + 1U) > Gm->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, Gm->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    Gm_data[iter] = b_phi[1];
    /*  Step 3 : Sampling Parameters of the Measurement equations */
    for (b_n = 0; b_n < i2; b_n++) {
      if (b_n + 1 == 1) {
        if (b_n + 1 > b_H->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, b_H->size[0], &fb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (b_n + 1 > y->size[1]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, y->size[1], &jb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (b_n + 1 > sig2->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, sig2->size[0], &ib_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (b_n + 1 > h0->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, h0->size[0], &hb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (b_n + 1 > H0->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, H0->size[0], &gb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        loop_ub = y->size[0];
        i = b_beta->size[0];
        b_beta->size[0] = y->size[0];
        emxEnsureCapacity_real_T(sp, b_beta, i, &fc_emlrtRTEI);
        b_H_data = b_beta->data;
        for (i = 0; i < loop_ub; i++) {
          b_H_data[i] = y_data[i];
        }
        st.site = &n_emlrtRSI;
        H_data[0] =
            Gen_coef1(&st, b_beta, beta, sig2_data[0], h0_data[0], H0_data[0]);
      } else {
        if (b_n + 1 > y->size[1]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, y->size[1], &eb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        loop_ub = y->size[0];
        i = b_beta->size[0];
        b_beta->size[0] = y->size[0];
        emxEnsureCapacity_real_T(sp, b_beta, i, &ec_emlrtRTEI);
        b_H_data = b_beta->data;
        for (i = 0; i < loop_ub; i++) {
          b_H_data[i] = y_data[i + y->size[0] * b_n];
        }
        if (b_n + 1 > b_H->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, b_H->size[0], &e_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (b_n + 1 > H0->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, H0->size[0], &f_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (b_n + 1 > h0->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, h0->size[0], &g_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (b_n + 1 > sig2->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, sig2->size[0], &h_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        st.site = &o_emlrtRSI;
        H_data[b_n] = Gen_coef(&st, b_beta, beta, sig2_data[b_n], h0_data[b_n],
                               H0_data[b_n]);
      }
      if (b_n + 1 > y->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, y->size[1], &db_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      loop_ub = y->size[0];
      i = b_beta->size[0];
      b_beta->size[0] = y->size[0];
      emxEnsureCapacity_real_T(sp, b_beta, i, &gc_emlrtRTEI);
      b_H_data = b_beta->data;
      for (i = 0; i < loop_ub; i++) {
        b_H_data[i] = y_data[i + y->size[0] * b_n];
      }
      if (b_n + 1 > sig2->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, sig2->size[0], &emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_n + 1 > d0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, d0->size[0], &b_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_n + 1 > a0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, a0->size[0], &c_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_n + 1 > b_H->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_n + 1, 1, b_H->size[0], &d_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &p_emlrtRSI;
      sig2_data[b_n] = Gen_Sigma(&st, b_beta, beta, H_data[b_n], a0_data[b_n],
                                 d0_data[b_n], scale);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (iter + 1 > Hm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Hm->size[0], &cb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_mum[0] = 1;
    b_mum[1] = Hm->size[1];
    iv[0] = 1;
    loop_ub = b_H->size[0];
    iv[1] = b_H->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_mum[0], 2, &iv[0], 2, &d_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Hm_data[iter + Hm->size[0] * i] = H_data[i];
    }
    if (iter + 1 > sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, sig2m->size[0], &v_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_mum[0] = 1;
    b_mum[1] = sig2m->size[1];
    iv[0] = 1;
    loop_ub = sig2->size[0];
    iv[1] = sig2->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_mum[0], 2, &iv[0], 2, &b_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      sig2m_data[iter + sig2m->size[0] * i] = sig2_data[i];
    }
    /*  Variance decomposition */
    st.site = &q_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    c_st.site = &me_emlrtRSI;
    im = 1.0 / (1.0 - b_phi[1] * b_phi[1]);
    loop_ub = b_H->size[0];
    i = d_H->size[0] * d_H->size[1];
    d_H->size[0] = b_H->size[0];
    d_H->size[1] = b_H->size[0];
    emxEnsureCapacity_real_T(sp, d_H, i, &lb_emlrtRTEI);
    b_H_data = d_H->data;
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = b_H->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_H_data[i1 + d_H->size[0] * i] = H_data[i1] * im * H_data[i];
      }
    }
    st.site = &r_emlrtRSI;
    c_diag(&st, d_H, beta);
    beta_data = beta->data;
    if ((beta->size[0] != sig2->size[0]) &&
        ((beta->size[0] != 1) && (sig2->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(beta->size[0], sig2->size[0], &e_emlrtECI,
                                  (emlrtCTX)sp);
    }
    st.site = &s_emlrtRSI;
    if (beta->size[0] == sig2->size[0]) {
      i = f_y->size[0];
      f_y->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(&st, f_y, i, &hc_emlrtRTEI);
      b_H_data = f_y->data;
      loop_ub = beta->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_H_data[i] = beta_data[i] + sig2_data[i];
      }
    } else {
      b_st.site = &s_emlrtRSI;
      plus(&b_st, f_y, beta, sig2);
      b_H_data = f_y->data;
    }
    b_st.site = &gc_emlrtRSI;
    c_st.site = &hc_emlrtRSI;
    assertCompatibleDims(&c_st, beta, f_y);
    if (beta->size[0] == f_y->size[0]) {
      loop_ub = beta->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta_data[i] /= b_H_data[i];
      }
    } else {
      c_st.site = &ll_emlrtRSI;
      rdivide(&c_st, beta, f_y);
      beta_data = beta->data;
    }
    if (iter + 1 > decomm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, decomm->size[0], &m_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_mum[0] = 1;
    b_mum[1] = decomm->size[1];
    iv[0] = 1;
    iv[1] = beta->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_mum[0], 2, &iv[0], 2, &emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      decomm_data[iter + decomm->size[0] * i] = beta_data[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &d_H);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &b_beta);
  emxFree_real_T(sp, &c_H);
  emxFree_real_T(sp, &f_y);
  emxFree_real_T(sp, &sig2);
  emxFree_real_T(sp, &b_H);
  emxFree_real_T(sp, &beta);
  /*  Burn-In */
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &m_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Hm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Hm->size[0],
                                    &bb_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Hm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Hm->size[0], &ab_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = Hm->size[1];
  b_loop_ub = i1 - i;
  i1 = Output->Hm->size[0] * Output->Hm->size[1];
  Output->Hm->size[0] = b_loop_ub;
  Output->Hm->size[1] = Hm->size[1];
  emxEnsureCapacity_real_T(sp, Output->Hm, i1, &tb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (iter = 0; iter < b_loop_ub; iter++) {
      Output->Hm->data[iter + Output->Hm->size[0] * i1] =
          Hm_data[(i + iter) + Hm->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &Hm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &l_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, betam->size[0],
                                    &x_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > betam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, betam->size[0], &w_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = betam->size[1];
  b_loop_ub = i1 - i;
  i1 = Output->betam->size[0] * Output->betam->size[1];
  Output->betam->size[0] = b_loop_ub;
  Output->betam->size[1] = betam->size[1];
  emxEnsureCapacity_real_T(sp, Output->betam, i1, &ub_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (iter = 0; iter < b_loop_ub; iter++) {
      Output->betam->data[iter + Output->betam->size[0] * i1] =
          betam_data[(i + iter) + betam->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &betam);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &k_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, sig2m->size[0],
                                    &u_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2m->size[0], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = sig2m->size[1];
  b_loop_ub = i1 - i;
  i1 = Output->sig2m->size[0] * Output->sig2m->size[1];
  Output->sig2m->size[0] = b_loop_ub;
  Output->sig2m->size[1] = sig2m->size[1];
  emxEnsureCapacity_real_T(sp, Output->sig2m, i1, &wb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (iter = 0; iter < b_loop_ub; iter++) {
      Output->sig2m->data[iter + Output->sig2m->size[0] * i1] =
          sig2m_data[(i + iter) + sig2m->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &sig2m);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &j_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Gm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Gm->size[0],
                                    &s_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Gm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Gm->size[0], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = i1 - i;
  i1 = Output->Gm->size[0];
  Output->Gm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->Gm, i1, &yb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->Gm->data[i1] = Gm_data[i + i1];
  }
  emxFree_real_T(sp, &Gm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &i_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > mum->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, mum->size[0],
                                    &q_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > mum->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, mum->size[0], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = i1 - i;
  i1 = Output->mum->size[0];
  Output->mum->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->mum, i1, &ac_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->mum->data[i1] = mum_data[i + i1];
  }
  emxFree_real_T(sp, &mum);
  if (n0 + 1.0 > n) {
    i = -1;
    i1 = -2;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &h_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > loop_ub_tmp)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, (int32_T)n,
                                    &o_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 2;
    if (n < 1.0) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, (int32_T)n, &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp - 2;
  }
  loop_ub = i1 - i;
  i = Output->sig2vm->size[0];
  Output->sig2vm->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(sp, Output->sig2vm, i, &cc_emlrtRTEI);
  for (i = 0; i <= loop_ub; i++) {
    Output->sig2vm->data[i] = 0.0;
  }
  if (n0 + 1.0 > n) {
    i = 0;
    loop_ub_tmp = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &g_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > decomm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, decomm->size[0],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > decomm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, decomm->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  loop_ub = decomm->size[1];
  b_loop_ub = loop_ub_tmp - i;
  i1 = Output->decomm->size[0] * Output->decomm->size[1];
  Output->decomm->size[0] = b_loop_ub;
  Output->decomm->size[1] = decomm->size[1];
  emxEnsureCapacity_real_T(sp, Output->decomm, i1, &dc_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (iter = 0; iter < b_loop_ub; iter++) {
      Output->decomm->data[iter + Output->decomm->size[0] * i1] =
          decomm_data[(i + iter) + decomm->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &decomm);
  /*  Saving Output */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Common_Factor_Model.c) */

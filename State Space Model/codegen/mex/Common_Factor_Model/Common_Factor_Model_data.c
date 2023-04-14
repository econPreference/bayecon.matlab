/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Common_Factor_Model_data.c
 *
 * Code generation for function 'Common_Factor_Model_data'
 *
 */

/* Include files */
#include "Common_Factor_Model_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                               /* bFirstTime */
    false,                                              /* bInitialized */
    131611U,                                            /* fVersionInfo */
    NULL,                                               /* fErrorFunction */
    "Common_Factor_Model",                              /* fFunctionName */
    NULL,                                               /* fRTCallStack */
    false,                                              /* bDebugMode */
    {1764267121U, 892124745U, 566995601U, 1444085946U}, /* fSigWrd */
    NULL                                                /* fSigMem */
};

emlrtRSInfo kb_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo tb_emlrtRSI = {
    74,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

emlrtRSInfo ub_emlrtRSI = {
    107,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo vb_emlrtRSI = {
    22,                    /* lineNo */
    "sumMatrixIncludeNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo wb_emlrtRSI = {
    42,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo yb_emlrtRSI = {
    57,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo gc_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "rdivide_helper.m" /* pathName */
};

emlrtRSInfo
    hc_emlrtRSI =
        {
            51,    /* lineNo */
            "div", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pathName */
};

emlrtRSInfo je_emlrtRSI = {
    96,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

emlrtRSInfo ke_emlrtRSI = {
    21,                           /* lineNo */
    "checkAndSaturateExpandSize", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "checkAndSaturateExpandSize.m" /* pathName */
};

emlrtRSInfo
    le_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

emlrtRSInfo me_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

emlrtRSInfo df_emlrtRSI = {
    90,     /* lineNo */
    "diag", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/diag.m" /* pathName
                                                                           */
};

emlrtRSInfo ef_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo hf_emlrtRSI = {
    90,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo mf_emlrtRSI =
    {
        55,        /* lineNo */
        "lusolve", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

emlrtRSInfo nf_emlrtRSI =
    {
        210,          /* lineNo */
        "lusolve2x2", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

emlrtRSInfo pf_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

emlrtRSInfo qg_emlrtRSI = {
    28,      /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

emlrtRSInfo yh_emlrtRSI = {
    29,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo ai_emlrtRSI = {
    31,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo bi_emlrtRSI = {
    41,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo ci_emlrtRSI = {
    59,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo di_emlrtRSI = {
    61,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo ei_emlrtRSI = {
    62,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo fi_emlrtRSI = {
    63,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo gi_emlrtRSI = {
    66,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo hi_emlrtRSI = {
    77,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo ki_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                            */
};

emlrtRSInfo li_emlrtRSI = {
    44,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

emlrtRSInfo mi_emlrtRSI = {
    79,        /* lineNo */
    "maximum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

emlrtRSInfo oi_emlrtRSI = {
    37,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo pi_emlrtRSI = {
    38,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo qi_emlrtRSI = {
    39,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo ri_emlrtRSI = {
    50,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtMCInfo o_emlrtMCI = {
    27,      /* lineNo */
    5,       /* colNo */
    "error", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" /* pName
                                                                           */
};

emlrtRTEInfo c_emlrtRTEI = {
    129,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo d_emlrtRTEI = {
    134,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    13,                     /* lineNo */
    27,                     /* colNo */
    "assertCompatibleDims", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/assertCompatibleDims.m" /* pName */
};

emlrtRTEInfo j_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo k_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtECInfo m_emlrtECI = {
    -1,                                                         /* nDims */
    67,                                                         /* lineNo */
    9,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

emlrtRTEInfo p_emlrtRTEI = {
    28,              /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

emlrtRTEInfo q_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

emlrtECInfo r_emlrtECI = {
    -1,                                                         /* nDims */
    77,                                                         /* lineNo */
    5,                                                          /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

emlrtRTEInfo v_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

emlrtRTEInfo w_emlrtRTEI = {
    14,    /* lineNo */
    9,     /* colNo */
    "log", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/log.m" /* pName
                                                                          */
};

emlrtRTEInfo pb_emlrtRTEI = {
    87,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo xc_emlrtRTEI = {
    9,                                                      /* lineNo */
    17,                                                     /* colNo */
    "PCA",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/PCA.m" /* pName */
};

emlrtRTEInfo gg_emlrtRTEI = {
    76,                  /* lineNo */
    9,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo ig_emlrtRTEI = {
    59,                                                         /* lineNo */
    23,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

emlrtRTEInfo jg_emlrtRTEI = {
    59,                                                         /* lineNo */
    31,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

emlrtRTEInfo mg_emlrtRTEI = {
    39,                                                         /* lineNo */
    22,                                                         /* colNo */
    "cholmod",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pName */
};

emlrtRTEInfo ch_emlrtRTEI = {
    76,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo eh_emlrtRTEI = {
    245,                   /* lineNo */
    5,                     /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

const char_T cv[18] = {'A', ' ', 'i', 's', ' ', 'n', 'o', 't', ' ',
                       's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c'};

emlrtRSInfo il_emlrtRSI = {
    27,      /* lineNo */
    "error", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" /* pathName
                                                                           */
};

emlrtRSInfo
    ll_emlrtRSI =
        {
            52,    /* lineNo */
            "div", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pathName */
};

/* End of code generation (Common_Factor_Model_data.c) */

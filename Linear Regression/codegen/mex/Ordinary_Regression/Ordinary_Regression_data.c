/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Ordinary_Regression_data.c
 *
 * Code generation for function 'Ordinary_Regression_data'
 *
 */

/* Include files */
#include "Ordinary_Regression_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                               /* bFirstTime */
    false,                                              /* bInitialized */
    131611U,                                            /* fVersionInfo */
    NULL,                                               /* fErrorFunction */
    "Ordinary_Regression",                              /* fFunctionName */
    NULL,                                               /* fRTCallStack */
    false,                                              /* bDebugMode */
    {1764267121U, 892124745U, 566995601U, 1444085946U}, /* fSigWrd */
    NULL                                                /* fSigMem */
};

emlrtRSInfo ib_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo jb_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pathName
                                                                            */
};

emlrtRSInfo kb_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pathName */
};

emlrtRSInfo lb_emlrtRSI = {
    74,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

emlrtRSInfo mb_emlrtRSI = {
    107,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo nb_emlrtRSI = {
    22,                    /* lineNo */
    "sumMatrixIncludeNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo pb_emlrtRSI = {
    42,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo sb_emlrtRSI = {
    57,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo ac_emlrtRSI = {
    99,                 /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo rc_emlrtRSI = {
    96,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

emlrtRSInfo tc_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo uc_emlrtRSI = {
    28,      /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

emlrtRSInfo vc_emlrtRSI = {
    90,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo wc_emlrtRSI = {
    142,      /* lineNo */
    "mtimes", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pathName */
};

emlrtRSInfo xc_emlrtRSI = {
    178,           /* lineNo */
    "mtimes_blas", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pathName */
};

emlrtRSInfo
    yc_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

emlrtRSInfo ad_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

emlrtRSInfo gd_emlrtRSI = {
    102,      /* lineNo */
    "varstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" /* pathName */
};

emlrtRSInfo hd_emlrtRSI = {
    96,        /* lineNo */
    "vvarstd", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" /* pathName */
};

emlrtRSInfo ae_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo be_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo ce_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo ie_emlrtRSI = {
    67,      /* lineNo */
    "xtrsm", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsm.m" /* pathName */
};

emlrtMCInfo s_emlrtMCI =
    {
        53,        /* lineNo */
        19,        /* colNo */
        "flt2str", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" /* pName */
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

emlrtRTEInfo p_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo q_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo s_emlrtRTEI = {
    14,    /* lineNo */
    9,     /* colNo */
    "log", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/log.m" /* pName
                                                                          */
};

emlrtRTEInfo ab_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

emlrtRTEInfo ac_emlrtRTEI = {
    218,      /* lineNo */
    20,       /* colNo */
    "mtimes", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pName */
};

emlrtRTEInfo fe_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

emlrtRTEInfo he_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

emlrtRTEInfo je_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

const char_T cv[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                       'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

emlrtRSInfo ai_emlrtRSI =
    {
        53,        /* lineNo */
        "flt2str", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" /* pathName */
};

/* End of code generation (Ordinary_Regression_data.c) */

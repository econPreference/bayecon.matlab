/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Mixture_Normal_data.c
 *
 * Code generation for function 'Mixture_Normal_data'
 *
 */

/* Include files */
#include "Mixture_Normal_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131611U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "Mixture_Normal",                                     /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo
    i_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

emlrtRSInfo j_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

emlrtRSInfo t_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo u_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo v_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo x_emlrtRSI = {
    28,      /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

emlrtRSInfo cb_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo mb_emlrtRSI = {
    67,      /* lineNo */
    "xtrsm", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsm.m" /* pathName */
};

emlrtRSInfo jc_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pathName
                                                                            */
};

emlrtRSInfo kc_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pathName */
};

emlrtRSInfo lc_emlrtRSI = {
    74,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

emlrtRSInfo mc_emlrtRSI = {
    99,                 /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo nc_emlrtRSI = {
    22,                    /* lineNo */
    "sumMatrixIncludeNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo oc_emlrtRSI = {
    42,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo qc_emlrtRSI = {
    57,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo bd_emlrtRSI = {
    107,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo ue_emlrtRSI = {
    90,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo ve_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo we_emlrtRSI = {
    142,      /* lineNo */
    "mtimes", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pathName */
};

emlrtRSInfo xe_emlrtRSI = {
    178,           /* lineNo */
    "mtimes_blas", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pathName */
};

emlrtMCInfo n_emlrtMCI =
    {
        53,        /* lineNo */
        19,        /* colNo */
        "flt2str", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

emlrtRTEInfo i_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo j_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo n_emlrtRTEI = {
    134,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo o_emlrtRTEI = {
    129,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo q_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" /* pName */
};

emlrtRTEInfo qb_emlrtRTEI = {
    76,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo rb_emlrtRTEI =
    {
        10,          /* lineNo */
        2,           /* colNo */
        "Gen_Omega", /* fName */
        "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture "
        "Normal/Gen_Omega.m" /* pName */
};

emlrtRTEInfo ec_emlrtRTEI = {
    9,       /* lineNo */
    13,      /* colNo */
    "Gen_S", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Mixture Normal/Gen_S.m" /* pName
                                                                            */
};

emlrtRTEInfo ic_emlrtRTEI = {
    9,                                                           /* lineNo */
    14,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

emlrtRTEInfo jc_emlrtRTEI = {
    9,                                                           /* lineNo */
    26,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

emlrtRTEInfo kc_emlrtRTEI = {
    9,                                                           /* lineNo */
    13,                                                          /* colNo */
    "lnpdfmvn",                                                  /* fName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/lnpdfmvn.m" /* pName */
};

emlrtRTEInfo xc_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

emlrtRTEInfo yc_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

emlrtRTEInfo bd_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

emlrtRTEInfo rd_emlrtRTEI = {
    218,      /* lineNo */
    20,       /* colNo */
    "mtimes", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" /* pName */
};

const char_T cv[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                       'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

emlrtRSInfo mh_emlrtRSI =
    {
        53,        /* lineNo */
        "flt2str", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" /* pathName */
};

emlrtRSInfo nh_emlrtRSI = {
    76,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

/* End of code generation (Mixture_Normal_data.c) */

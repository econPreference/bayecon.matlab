/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unobserved_Component_Model_data.c
 *
 * Code generation for function 'Unobserved_Component_Model_data'
 *
 */

/* Include files */
#include "Unobserved_Component_Model_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                               /* bFirstTime */
    false,                                              /* bInitialized */
    131611U,                                            /* fVersionInfo */
    NULL,                                               /* fErrorFunction */
    "Unobserved_Component_Model",                       /* fFunctionName */
    NULL,                                               /* fRTCallStack */
    false,                                              /* bDebugMode */
    {1764267121U, 892124745U, 566995601U, 1444085946U}, /* fSigWrd */
    NULL                                                /* fSigMem */
};

emlrtRSInfo s_emlrtRSI = {
    28,      /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

emlrtRSInfo w_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo
    dc_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

emlrtRSInfo ec_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

emlrtRSInfo gc_emlrtRSI = {
    74,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

emlrtRSInfo hc_emlrtRSI = {
    107,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo ic_emlrtRSI = {
    22,                    /* lineNo */
    "sumMatrixIncludeNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo jc_emlrtRSI = {
    42,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo lc_emlrtRSI = {
    57,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo ad_emlrtRSI = {
    96,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

emlrtRSInfo fd_emlrtRSI = {
    90,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo gd_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo kd_emlrtRSI = {
    109,               /* lineNo */
    "computeDimsData", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pathName */
};

emlrtRSInfo ld_emlrtRSI = {
    29,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pathName */
};

emlrtRSInfo me_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

emlrtRSInfo ne_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

emlrtRSInfo pe_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

emlrtRTEInfo c_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo d_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    52,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    59,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" /* pName */
};

emlrtRTEInfo k_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" /* pName */
};

emlrtRTEInfo l_emlrtRTEI = {
    134,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo m_emlrtRTEI = {
    129,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo o_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

emlrtRTEInfo ab_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

/* End of code generation (Unobserved_Component_Model_data.c) */

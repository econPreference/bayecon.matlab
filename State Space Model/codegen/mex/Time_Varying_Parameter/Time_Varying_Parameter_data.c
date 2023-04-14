/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Time_Varying_Parameter_data.c
 *
 * Code generation for function 'Time_Varying_Parameter_data'
 *
 */

/* Include files */
#include "Time_Varying_Parameter_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                               /* bFirstTime */
    false,                                              /* bInitialized */
    131611U,                                            /* fVersionInfo */
    NULL,                                               /* fErrorFunction */
    "Time_Varying_Parameter",                           /* fFunctionName */
    NULL,                                               /* fRTCallStack */
    false,                                              /* bDebugMode */
    {1764267121U, 892124745U, 566995601U, 1444085946U}, /* fSigWrd */
    NULL                                                /* fSigMem */
};

emlrtRSInfo ab_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo bb_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo cb_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pathName */
};

emlrtRSInfo eb_emlrtRSI = {
    28,      /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

emlrtRSInfo ib_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo kb_emlrtRSI = {
    67,      /* lineNo */
    "xtrsm", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsm.m" /* pathName */
};

emlrtRSInfo
    ob_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

emlrtRSInfo pb_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

emlrtRSInfo pc_emlrtRSI = {
    90,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo qc_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

emlrtRSInfo uc_emlrtRSI = {
    96,    /* lineNo */
    "eye", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName
                                                                          */
};

emlrtRSInfo yc_emlrtRSI = {
    29,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo ad_emlrtRSI = {
    31,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo bd_emlrtRSI = {
    41,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo cd_emlrtRSI = {
    77,                                                         /* lineNo */
    "cholmod",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/cholmod.m" /* pathName */
};

emlrtRSInfo dd_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/sum.m" /* pathName
                                                                            */
};

emlrtRSInfo ed_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" /* pathName */
};

emlrtRSInfo fd_emlrtRSI = {
    74,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

emlrtRSInfo gd_emlrtRSI = {
    99,                 /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo hd_emlrtRSI = {
    22,                    /* lineNo */
    "sumMatrixIncludeNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo id_emlrtRSI = {
    42,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo rd_emlrtRSI = {
    107,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

emlrtRSInfo td_emlrtRSI = {
    57,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

emlrtRSInfo ie_emlrtRSI = {
    18,    /* lineNo */
    "abs", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/abs.m" /* pathName
                                                                          */
};

emlrtRSInfo je_emlrtRSI = {
    74,                    /* lineNo */
    "applyScalarFunction", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" /* pathName */
};

emlrtRSInfo re_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

emlrtRSInfo se_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

emlrtRSInfo te_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

emlrtRSInfo ue_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

emlrtRSInfo kg_emlrtRSI = {
    4,                                                       /* lineNo */
    "minc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/minc.m" /* pathName */
};

emlrtRSInfo lg_emlrtRSI = {
    17,    /* lineNo */
    "min", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                            */
};

emlrtRSInfo mg_emlrtRSI = {
    40,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

emlrtRSInfo ng_emlrtRSI = {
    90,        /* lineNo */
    "minimum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

emlrtRSInfo pk_emlrtRSI =
    {
        10,        /* lineNo */
        "gammaln", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/specfun/"
        "gammaln.m" /* pathName */
};

emlrtMCInfo q_emlrtMCI =
    {
        53,        /* lineNo */
        19,        /* colNo */
        "flt2str", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" /* pName */
};

emlrtMCInfo s_emlrtMCI = {
    27,      /* lineNo */
    5,       /* colNo */
    "error", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" /* pName
                                                                           */
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t Time_Varying_Parameter_nestLockGlobal;

emlrtRTEInfo d_emlrtRTEI = {
    134,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    129,                   /* lineNo */
    23,                    /* colNo */
    "dynamic_size_checks", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" /* pName */
};

emlrtRTEInfo i_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

emlrtRTEInfo n_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo o_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo r_emlrtRTEI = {
    14,    /* lineNo */
    9,     /* colNo */
    "log", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/log.m" /* pName
                                                                          */
};

emlrtRTEInfo t_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

emlrtRTEInfo kb_emlrtRTEI = {
    76,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo gf_emlrtRTEI = {
    30,                    /* lineNo */
    21,                    /* colNo */
    "applyScalarFunction", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" /* pName */
};

emlrtRTEInfo uf_emlrtRTEI = {
    165,                      /* lineNo */
    1,                        /* colNo */
    "Time_Varying_Parameter", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Time_Varying_Parameter.m" /* pName */
};

emlrtRTEInfo ci_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

emlrtRTEInfo ei_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

emlrtRTEInfo gi_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrf.m" /* pName */
};

const char_T cv[18] = {'A', ' ', 'i', 's', ' ', 'n', 'o', 't', ' ',
                       's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c'};

const char_T cv2[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                        'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

emlrtRSInfo em_emlrtRSI = {
    27,      /* lineNo */
    "error", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" /* pathName
                                                                           */
};

emlrtRSInfo gm_emlrtRSI =
    {
        53,        /* lineNo */
        "flt2str", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" /* pathName */
};

/* End of code generation (Time_Varying_Parameter_data.c) */

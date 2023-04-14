/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * VS_dirac.c
 *
 * Code generation for function 'VS_dirac'
 *
 */

/* Include files */
#include "VS_dirac.h"
#include "VS_dirac_data.h"
#include "VS_dirac_emxutil.h"
#include "VS_dirac_mexutil.h"
#include "VS_dirac_types.h"
#include "chol.h"
#include "eml_mtimes_helper.h"
#include "find.h"
#include "gamrnd.h"
#include "inv.h"
#include "mean.h"
#include "mpower.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "rand.h"
#include "randg.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "std.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    20,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    22,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    39,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    52,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    58,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    63,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo
    bb_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    4,                                                          /* lineNo */
    "randDir",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randDir.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    5,                                                          /* lineNo */
    "randDir",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randDir.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    144,              /* lineNo */
    "Sampling_alpha", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    146,              /* lineNo */
    "Sampling_alpha", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    148,              /* lineNo */
    "Sampling_alpha", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    150,              /* lineNo */
    "Sampling_alpha", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    151,              /* lineNo */
    "Sampling_alpha", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    153,              /* lineNo */
    "Sampling_alpha", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    6,                                                          /* lineNo */
    "demeanc",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/demeanc.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    39,     /* lineNo */
    "find", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pathName
                                                                           */
};

static emlrtRSInfo xb_emlrtRSI = {
    90,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo ed_emlrtRSI = {
    88,                       /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    91,                       /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    109,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    110,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    113,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    114,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    116,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    117,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI = {
    120,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = {
    127,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    128,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    132,                      /* lineNo */
    "Sampling_delta_sig2_mu", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    12,                                                        /* lineNo */
    "randig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    18,                                                         /* lineNo */
    "randgam",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    6,          /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    37,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    38,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    40,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    41,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    42,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    43,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    46,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    47,         /* lineNo */
    9,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtMCInfo
    j_emlrtMCI =
        {
            66,        /* lineNo */
            18,        /* colNo */
            "fprintf", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    -1,               /* nDims */
    153,              /* lineNo */
    1,                /* colNo */
    "Sampling_alpha", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    1,                /* nDims */
    153,              /* lineNo */
    18,               /* colNo */
    "Sampling_alpha", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    75,         /* lineNo */
    16,         /* colNo */
    "mum",      /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    75,         /* lineNo */
    11,         /* colNo */
    "mum",      /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    75,         /* lineNo */
    11,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    74,         /* lineNo */
    20,         /* colNo */
    "sig2m",    /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    74,         /* lineNo */
    15,         /* colNo */
    "sig2m",    /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    74,         /* lineNo */
    15,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    73,         /* lineNo */
    22,         /* colNo */
    "deltam",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    73,         /* lineNo */
    17,         /* colNo */
    "deltam",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    73,         /* lineNo */
    17,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,         /* nDims */
    64,         /* lineNo */
    5,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    64,         /* lineNo */
    12,         /* colNo */
    "deltam",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    72,         /* lineNo */
    22,         /* colNo */
    "alpham",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    72,         /* lineNo */
    17,         /* colNo */
    "alpham",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    72,         /* lineNo */
    17,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,         /* nDims */
    59,         /* lineNo */
    5,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    59,         /* lineNo */
    12,         /* colNo */
    "alpham",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    71,         /* lineNo */
    22,         /* colNo */
    "omegam",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    71,         /* lineNo */
    17,         /* colNo */
    "omegam",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    71,         /* lineNo */
    17,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    33,         /* lineNo */
    12,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtDCInfo f_emlrtDCI = {
    27,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    27,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    4                       /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    28,         /* lineNo */
    16,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    30,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    31,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    1                       /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    54,         /* lineNo */
    12,         /* colNo */
    "omegam",   /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    147,              /* lineNo */
    8,                /* colNo */
    "alpha1",         /* aName */
    "Sampling_alpha", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    149,              /* lineNo */
    10,               /* colNo */
    "X",              /* aName */
    "Sampling_alpha", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    153,              /* lineNo */
    8,                /* colNo */
    "alpha1",         /* aName */
    "Sampling_alpha", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    65,         /* lineNo */
    11,         /* colNo */
    "sig2m",    /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    66,         /* lineNo */
    9,          /* colNo */
    "mum",      /* aName */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtRTEInfo n_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

static emlrtRTEInfo p_emlrtRTEI = {
    13,               /* lineNo */
    13,               /* colNo */
    "toLogicalCheck", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "toLogicalCheck.m" /* pName */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    100,                      /* lineNo */
    16,                       /* colNo */
    "delta_aux0",             /* aName */
    "Sampling_delta_sig2_mu", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    101,                      /* lineNo */
    16,                       /* colNo */
    "delta_aux1",             /* aName */
    "Sampling_delta_sig2_mu", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    126,                      /* lineNo */
    10,                       /* colNo */
    "X",                      /* aName */
    "Sampling_delta_sig2_mu", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    103,                      /* lineNo */
    14,                       /* colNo */
    "X",                      /* aName */
    "Sampling_delta_sig2_mu", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    106,                      /* lineNo */
    14,                       /* colNo */
    "X",                      /* aName */
    "Sampling_delta_sig2_mu", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    120,                      /* lineNo */
    12,                       /* colNo */
    "delta1",                 /* aName */
    "Sampling_delta_sig2_mu", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m", /* pName */
    0                       /* checkKind */
};

static emlrtRTEInfo t_emlrtRTEI = {
    19,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    27,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    30,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    31,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    28,         /* lineNo */
    10,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    78,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    79,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    80,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    81,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    82,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    58,         /* lineNo */
    5,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    43,         /* lineNo */
    14,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    144,        /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    146,        /* lineNo */
    13,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    148,        /* lineNo */
    13,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    149,        /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    63,         /* lineNo */
    6,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    28,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    29,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    150,        /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    151,        /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    1,          /* lineNo */
    19,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    31,     /* lineNo */
    6,      /* colNo */
    "find", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" /* pName
                                                                           */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    150,        /* lineNo */
    21,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    88,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    91,         /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    98,         /* lineNo */
    5,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    99,         /* lineNo */
    5,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    86,         /* lineNo */
    31,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    126,        /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    103,        /* lineNo */
    5,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    127,        /* lineNo */
    21,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    106,        /* lineNo */
    5,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    113,        /* lineNo */
    25,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    137,        /* lineNo */
    1,          /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    86,         /* lineNo */
    11,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    126,        /* lineNo */
    10,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    103,        /* lineNo */
    14,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    106,        /* lineNo */
    14,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    113,        /* lineNo */
    44,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    153,        /* lineNo */
    18,         /* colNo */
    "VS_dirac", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pName */
};

static emlrtRSInfo we_emlrtRSI = {
    6,          /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    37,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    47,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    46,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    43,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = {
    42,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo df_emlrtRSI = {
    41,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    40,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = {
    38,         /* lineNo */
    "VS_dirac", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/Variable "
    "Selection/VS_dirac.m" /* pathName */
};

static emlrtRSInfo
    hf_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

/* Function Declarations */
static void
Sampling_delta_sig2_mu(const emlrtStack *sp, const emxArray_real_T *y,
                       const emxArray_real_T *X, const emxArray_real_T *delta,
                       real_T omega, real_T g, real_T cons_option,
                       emxArray_real_T *delta1, real_T *sig2, real_T *mu);

static const mxArray *b_emlrt_marshallOut(const real_T u[3]);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location);

static void plus(const emlrtStack *sp, emxArray_real_T *ad,
                 const emxArray_real_T *r1);

/* Function Definitions */
static void
Sampling_delta_sig2_mu(const emlrtStack *sp, const emxArray_real_T *y,
                       const emxArray_real_T *X, const emxArray_real_T *delta,
                       real_T omega, real_T g, real_T cons_option,
                       emxArray_real_T *delta1, real_T *sig2, real_T *mu)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *b_delta1;
  emxArray_boolean_T *delta_aux0;
  emxArray_boolean_T *delta_aux1;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *X0;
  emxArray_real_T *X1;
  emxArray_real_T *Y;
  emxArray_real_T *a_tmp;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *yc;
  const real_T *X_data;
  const real_T *delta_data;
  const real_T *y_data;
  real_T R;
  real_T b_g;
  real_T b_y;
  real_T e_y;
  real_T f_y;
  real_T g_y;
  real_T sN;
  real_T x;
  real_T *X0_data;
  real_T *yc_data;
  int32_T b_X;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_X;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T idx;
  int32_T loop_ub;
  int32_T *r3;
  boolean_T *delta1_data;
  boolean_T *delta_aux0_data;
  boolean_T *delta_aux1_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  delta_data = delta->data;
  X_data = X->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &yc, 1, &kc_emlrtRTEI);
  st.site = &ed_emlrtRSI;
  /*  demeaning vectors */
  b_st.site = &qb_emlrtRSI;
  R = mean(&b_st, y);
  i = yc->size[0];
  yc->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, yc, i, &kc_emlrtRTEI);
  yc_data = yc->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    yc_data[i] = y_data[i] - R;
  }
  /*  number of columns */
  st.site = &fd_emlrtRSI;
  i = delta->size[0];
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    if (muDoubleScalarIsNaN(delta_data[loop_ub])) {
      emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI, "MATLAB:nologicalnan",
                                    "MATLAB:nologicalnan", 0);
    }
  }
  emxInit_boolean_T(&st, &b_delta1, &vc_emlrtRTEI);
  i = b_delta1->size[0];
  b_delta1->size[0] = delta->size[0];
  emxEnsureCapacity_boolean_T(sp, b_delta1, i, &lc_emlrtRTEI);
  delta1_data = b_delta1->data;
  loop_ub = delta->size[0];
  for (i = 0; i < loop_ub; i++) {
    delta1_data[i] = (delta_data[i] != 0.0);
  }
  sN = ((real_T)X->size[0] - 1.0) / 2.0;
  /*  Sampling delta */
  i = X->size[1];
  if (0 <= X->size[1] - 1) {
    b_X = X->size[1];
    b_loop_ub = X->size[0];
    c_X = X->size[1];
    c_loop_ub = X->size[0];
    if (yc->size[0] < 1) {
      b_y = 0.0;
    } else {
      n_t = (ptrdiff_t)yc->size[0];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      b_y = ddot(&n_t, &yc_data[0], &incx_t, &yc_data[0], &incy_t);
    }
    b_g = g / (g + 1.0);
    d_loop_ub = yc->size[0];
    i1 = X->size[0];
    i2 = X->size[0];
    i3 = X->size[0];
    if (yc->size[0] < 1) {
      e_y = 0.0;
    } else {
      n_t = (ptrdiff_t)yc->size[0];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      e_y = ddot(&n_t, &yc_data[0], &incx_t, &yc_data[0], &incy_t);
    }
    i4 = X->size[0];
    i5 = X->size[0];
    i6 = X->size[0];
  }
  emxInit_boolean_T(sp, &delta_aux0, &mc_emlrtRTEI);
  emxInit_boolean_T(sp, &delta_aux1, &nc_emlrtRTEI);
  emxInit_real_T(sp, &X0, 2, &qc_emlrtRTEI);
  emxInit_real_T(sp, &X1, 2, &sc_emlrtRTEI);
  emxInit_int32_T(sp, &r, 1, &xc_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 1, &yc_emlrtRTEI);
  emxInit_real_T(sp, &c_y, 2, &tc_emlrtRTEI);
  emxInit_real_T(sp, &d_y, 2, &ad_emlrtRTEI);
  emxInit_real_T(sp, &Y, 2, &tc_emlrtRTEI);
  emxInit_real_T(sp, &a_tmp, 2, &tc_emlrtRTEI);
  for (idx = 0; idx < i; idx++) {
    loop_ub = b_delta1->size[0];
    b_i = delta_aux0->size[0];
    delta_aux0->size[0] = b_delta1->size[0];
    emxEnsureCapacity_boolean_T(sp, delta_aux0, b_i, &mc_emlrtRTEI);
    delta_aux0_data = delta_aux0->data;
    b_i = delta_aux1->size[0];
    delta_aux1->size[0] = b_delta1->size[0];
    emxEnsureCapacity_boolean_T(sp, delta_aux1, b_i, &nc_emlrtRTEI);
    delta_aux1_data = delta_aux1->data;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      delta_aux0_data[b_i] = delta1_data[b_i];
      delta_aux1_data[b_i] = delta1_data[b_i];
    }
    if (idx + 1 > b_delta1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_delta1->size[0], &s_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    delta_aux0_data[idx] = false;
    if (idx + 1 > b_delta1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_delta1->size[0], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    delta_aux1_data[idx] = true;
    end = delta_aux0->size[0] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (delta_aux0_data[b_i]) {
        loop_ub++;
      }
    }
    b_i = r->size[0];
    r->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r, b_i, &oc_emlrtRTEI);
    r3 = r->data;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (delta_aux0_data[b_i]) {
        r3[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }
    b_i = X0->size[0] * X0->size[1];
    X0->size[0] = b_loop_ub;
    loop_ub = r->size[0];
    X0->size[1] = r->size[0];
    emxEnsureCapacity_real_T(sp, X0, b_i, &qc_emlrtRTEI);
    X0_data = X0->data;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      for (end = 0; end < b_loop_ub; end++) {
        if (r3[b_i] > b_X) {
          emlrtDynamicBoundsCheckR2012b(r3[b_i], 1, b_X, &v_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        X0_data[end + X0->size[0] * b_i] =
            X_data[end + X->size[0] * (r3[b_i] - 1)];
      }
    }
    /*  number of columns */
    end = delta_aux1->size[0] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (delta_aux1_data[b_i]) {
        loop_ub++;
      }
    }
    b_i = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r1, b_i, &oc_emlrtRTEI);
    r3 = r1->data;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (delta_aux1_data[b_i]) {
        r3[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }
    b_i = X1->size[0] * X1->size[1];
    X1->size[0] = c_loop_ub;
    loop_ub = r1->size[0];
    X1->size[1] = r1->size[0];
    emxEnsureCapacity_real_T(sp, X1, b_i, &sc_emlrtRTEI);
    X0_data = X1->data;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      for (end = 0; end < c_loop_ub; end++) {
        if (r3[b_i] > c_X) {
          emlrtDynamicBoundsCheckR2012b(r3[b_i], 1, c_X, &w_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        X0_data[end + X1->size[0] * b_i] =
            X_data[end + X->size[0] * (r3[b_i] - 1)];
      }
    }
    /*  number of columns */
    st.site = &gd_emlrtRSI;
    x = mpower(&st, g + 1.0, -(real_T)r->size[0]);
    st.site = &hd_emlrtRSI;
    R = mpower(&st, g + 1.0, -(real_T)r1->size[0]);
    /*      NCons = sym(sqrt(T)*(2*pi)^((T-1)/2)); */
    st.site = &id_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    c_dynamic_size_checks(&b_st, yc, yc, yc->size[0], yc->size[0]);
    st.site = &id_emlrtRSI;
    b_i = a_tmp->size[0] * a_tmp->size[1];
    a_tmp->size[0] = 1;
    a_tmp->size[1] = yc->size[0];
    emxEnsureCapacity_real_T(&st, a_tmp, b_i, &tc_emlrtRTEI);
    X0_data = a_tmp->data;
    for (b_i = 0; b_i < d_loop_ub; b_i++) {
      X0_data[b_i] = b_g * yc_data[b_i];
    }
    b_st.site = &yb_emlrtRSI;
    d_dynamic_size_checks(&b_st, a_tmp, X0, a_tmp->size[1], i1);
    b_st.site = &xb_emlrtRSI;
    e_mtimes(&b_st, a_tmp, X0, c_y);
    st.site = &id_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    dynamic_size_checks(&b_st, X0, X0, i2, i3);
    b_st.site = &xb_emlrtRSI;
    mtimes(&b_st, X0, X0, d_y);
    st.site = &id_emlrtRSI;
    if (d_y->size[1] != c_y->size[1]) {
      emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:dimagree",
                                    "MATLAB:dimagree", 0);
    }
    b_st.site = &qd_emlrtRSI;
    mrdiv(&b_st, c_y, d_y, Y);
    st.site = &id_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    d_dynamic_size_checks(&b_st, Y, X0, Y->size[1], r->size[0]);
    b_st.site = &xb_emlrtRSI;
    f_mtimes(&b_st, Y, X0, c_y);
    X0_data = c_y->data;
    st.site = &id_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    e_dynamic_size_checks(&b_st, c_y, yc, c_y->size[1], yc->size[0]);
    if (c_y->size[1] < 1) {
      f_y = 0.0;
    } else {
      n_t = (ptrdiff_t)c_y->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      f_y = ddot(&n_t, &X0_data[0], &incx_t, &yc_data[0], &incy_t);
    }
    st.site = &jd_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    c_dynamic_size_checks(&b_st, yc, yc, yc->size[0], yc->size[0]);
    st.site = &jd_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    d_dynamic_size_checks(&b_st, a_tmp, X1, a_tmp->size[1], i4);
    b_st.site = &xb_emlrtRSI;
    e_mtimes(&b_st, a_tmp, X1, c_y);
    st.site = &jd_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    dynamic_size_checks(&b_st, X1, X1, i5, i6);
    b_st.site = &xb_emlrtRSI;
    mtimes(&b_st, X1, X1, d_y);
    st.site = &jd_emlrtRSI;
    if (d_y->size[1] != c_y->size[1]) {
      emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:dimagree",
                                    "MATLAB:dimagree", 0);
    }
    b_st.site = &qd_emlrtRSI;
    mrdiv(&b_st, c_y, d_y, Y);
    st.site = &jd_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    d_dynamic_size_checks(&b_st, Y, X1, Y->size[1], r1->size[0]);
    b_st.site = &xb_emlrtRSI;
    f_mtimes(&b_st, Y, X1, c_y);
    X0_data = c_y->data;
    st.site = &jd_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    e_dynamic_size_checks(&b_st, c_y, yc, c_y->size[1], yc->size[0]);
    if (c_y->size[1] < 1) {
      g_y = 0.0;
    } else {
      n_t = (ptrdiff_t)c_y->size[1];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      g_y = ddot(&n_t, &X0_data[0], &incx_t, &yc_data[0], &incy_t);
    }
    st.site = &kd_emlrtRSI;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &o_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    x = muDoubleScalarSqrt(x);
    st.site = &ld_emlrtRSI;
    if (R < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &o_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    R = muDoubleScalarSqrt(R);
    st.site = &kd_emlrtRSI;
    R = x * mpower(&st, 0.5 * (e_y - g_y) / (0.5 * (b_y - f_y)), sN) / R;
    if (idx + 1 > b_delta1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(idx + 1, 1, b_delta1->size[0], &x_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &md_emlrtRSI;
    delta1_data[idx] = (b_rand() < 1.0 / ((1.0 - omega) * R / omega + 1.0));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_int32_T(sp, &r1);
  emxFree_int32_T(sp, &r);
  emxFree_real_T(sp, &X1);
  emxFree_boolean_T(sp, &delta_aux1);
  emxFree_boolean_T(sp, &delta_aux0);
  /*  Sampling sig2 */
  end = b_delta1->size[0] - 1;
  loop_ub = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (delta1_data[b_i]) {
      loop_ub++;
    }
  }
  emxInit_int32_T(sp, &r2, 1, &wc_emlrtRTEI);
  i = r2->size[0];
  r2->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r2, i, &oc_emlrtRTEI);
  r3 = r2->data;
  loop_ub = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (delta1_data[b_i]) {
      r3[loop_ub] = b_i + 1;
      loop_ub++;
    }
  }
  loop_ub = X->size[0];
  i = X0->size[0] * X0->size[1];
  X0->size[0] = X->size[0];
  X0->size[1] = r2->size[0];
  emxEnsureCapacity_real_T(sp, X0, i, &pc_emlrtRTEI);
  X0_data = X0->data;
  b_loop_ub = r2->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (r3[i] > X->size[1]) {
        emlrtDynamicBoundsCheckR2012b(r3[i], 1, X->size[1], &u_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X0_data[i1 + X0->size[0] * i] = X_data[i1 + X->size[0] * (r3[i] - 1)];
    }
  }
  st.site = &nd_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_dynamic_size_checks(&b_st, yc, yc, yc->size[0], yc->size[0]);
  if (yc->size[0] < 1) {
    b_y = 0.0;
  } else {
    n_t = (ptrdiff_t)yc->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    b_y = ddot(&n_t, &yc_data[0], &incx_t, &yc_data[0], &incy_t);
  }
  st.site = &nd_emlrtRSI;
  b_g = g / (g + 1.0);
  i = a_tmp->size[0] * a_tmp->size[1];
  a_tmp->size[0] = 1;
  a_tmp->size[1] = yc->size[0];
  emxEnsureCapacity_real_T(&st, a_tmp, i, &rc_emlrtRTEI);
  X0_data = a_tmp->data;
  loop_ub = yc->size[0];
  for (i = 0; i < loop_ub; i++) {
    X0_data[i] = b_g * yc_data[i];
  }
  b_st.site = &yb_emlrtRSI;
  d_dynamic_size_checks(&b_st, a_tmp, X0, a_tmp->size[1], X->size[0]);
  b_st.site = &xb_emlrtRSI;
  e_mtimes(&b_st, a_tmp, X0, c_y);
  st.site = &nd_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  dynamic_size_checks(&b_st, X0, X0, X->size[0], X->size[0]);
  b_st.site = &xb_emlrtRSI;
  mtimes(&b_st, X0, X0, d_y);
  st.site = &nd_emlrtRSI;
  emxFree_real_T(&st, &a_tmp);
  if (d_y->size[1] != c_y->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &qd_emlrtRSI;
  mrdiv(&b_st, c_y, d_y, Y);
  st.site = &nd_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  d_dynamic_size_checks(&b_st, Y, X0, Y->size[1], r2->size[0]);
  b_st.site = &xb_emlrtRSI;
  f_mtimes(&b_st, Y, X0, c_y);
  X0_data = c_y->data;
  st.site = &nd_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  e_dynamic_size_checks(&b_st, c_y, yc, c_y->size[1], yc->size[0]);
  emxFree_real_T(&st, &Y);
  emxFree_real_T(&st, &d_y);
  emxFree_int32_T(&st, &r2);
  emxFree_real_T(&st, &X0);
  if (c_y->size[1] < 1) {
    e_y = 0.0;
  } else {
    n_t = (ptrdiff_t)c_y->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    e_y = ddot(&n_t, &X0_data[0], &incx_t, &yc_data[0], &incy_t);
  }
  emxFree_real_T(&st, &c_y);
  emxFree_real_T(&st, &yc);
  st.site = &od_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &ue_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  c_st.site = &ve_emlrtRSI;
  R = gamrnd(&c_st, sN, 1.0 / (0.5 * (b_y - e_y)));
  *sig2 = 1.0 / R;
  /*  Sampling mu */
  if (cons_option == 1.0) {
    st.site = &pd_emlrtRSI;
    x = *sig2 / (real_T)X->size[0];
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &o_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    x = muDoubleScalarSqrt(x);
    st.site = &pd_emlrtRSI;
    *mu = mean(&st, y) + x * randn();
  } else {
    *mu = 0.0;
  }
  i = delta1->size[0];
  delta1->size[0] = b_delta1->size[0];
  emxEnsureCapacity_real_T(sp, delta1, i, &uc_emlrtRTEI);
  X0_data = delta1->data;
  loop_ub = b_delta1->size[0];
  for (i = 0; i < loop_ub; i++) {
    X0_data[i] = delta1_data[i];
  }
  emxFree_boolean_T(sp, &b_delta1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[3])
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

static void plus(const emlrtStack *sp, emxArray_real_T *ad,
                 const emxArray_real_T *r1)
{
  emxArray_real_T *b_ad;
  const real_T *r;
  real_T *ad_data;
  real_T *b_ad_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  ad_data = ad->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_ad, 1, &sd_emlrtRTEI);
  i = b_ad->size[0];
  if (r1->size[0] == 1) {
    b_ad->size[0] = ad->size[0];
  } else {
    b_ad->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_ad, i, &sd_emlrtRTEI);
  b_ad_data = b_ad->data;
  stride_0_0 = (ad->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = ad->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_ad_data[i] = ad_data[i * stride_0_0] + r[i * stride_1_0];
  }
  i = ad->size[0];
  ad->size[0] = b_ad->size[0];
  emxEnsureCapacity_real_T(sp, ad, i, &sd_emlrtRTEI);
  ad_data = ad->data;
  loop_ub = b_ad->size[0];
  for (i = 0; i < loop_ub; i++) {
    ad_data[i] = b_ad_data[i];
  }
  emxFree_real_T(sp, &b_ad);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void VS_dirac(const emlrtStack *sp, const emxArray_real_T *y,
              const emxArray_real_T *X, real_T aw, real_T bw,
              real_T cons_option, real_T n0, real_T n1, struct0_T *Output)
{
  static const int32_T iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 37};
  static const int32_T iv2[2] = {1, 7};
  static const int32_T iv3[2] = {1, 23};
  static const int32_T iv4[2] = {1, 37};
  static const int32_T iv5[2] = {1, 7};
  static const int32_T iv6[2] = {1, 15};
  static const char_T d_u[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T f_u[15] = {'[', 'm', 'u', ' ', 's', 'i', 'g', '2',
                                 ' ', 'o', 'm', 'e', 'g', 'a', ']'};
  static const char_T c_u[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T e_u[7] = {'d', 'e', 'l', 't', 'a', ':', ' '};
  static const char_T u[6] = {'s', 'h', 'o', 'r', 't', 'G'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emlrtStack *r1;
  emlrtStack *r2;
  emxArray_boolean_T *c_delta;
  emxArray_int32_T *ii;
  emxArray_real_T *Ad;
  emxArray_real_T *Xd;
  emxArray_real_T *ad;
  emxArray_real_T *alpha;
  emxArray_real_T *alpham;
  emxArray_real_T *b_delta;
  emxArray_real_T *c_y;
  emxArray_real_T *delta;
  emxArray_real_T *deltam;
  emxArray_real_T *mum;
  emxArray_real_T *omegam;
  emxArray_real_T *r;
  emxArray_real_T *sig2m;
  emxArray_real_T *yc;
  const mxArray *b_y;
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
  real_T b_mu[3];
  real_T b_omega[2];
  const real_T *X_data;
  const real_T *y_data;
  real_T b_g;
  real_T g;
  real_T mu;
  real_T n;
  real_T omega;
  real_T sig2;
  real_T *alpha_data;
  real_T *alpham_data;
  real_T *delta_data;
  real_T *deltam_data;
  real_T *mum_data;
  real_T *omegam_data;
  real_T *sig2m_data;
  real_T *yc_data;
  int32_T b_omegam[2];
  int32_T iv7[2];
  int32_T b_X;
  int32_T b_loop_ub;
  int32_T c_X;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T iter;
  int32_T loop_ub;
  int32_T *ii_data;
  char_T b_u[37];
  boolean_T *b_delta_data;
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
  X_data = X->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &delta, 1, &t_emlrtRTEI);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 6, m, &u[0]);
  emlrtAssign(&b_y, m);
  st.site = &we_emlrtRSI;
  format(&st, b_y, &emlrtMCI);
  /*  Description */
  /*  It follow notations of Malsiner-Walli, Wagner(2011) under g-prior. */
  /*  X: Do not include constant term. */
  /*  cons_option: 1 if want to include constant term. */
  /*  Setting */
  n = n0 + n1;
  /*  number of columns */
  /*  Initial value */
  i = delta->size[0];
  delta->size[0] = X->size[1];
  emxEnsureCapacity_real_T(sp, delta, i, &t_emlrtRTEI);
  delta_data = delta->data;
  loop_ub = X->size[1];
  for (i = 0; i < loop_ub; i++) {
    delta_data[i] = 1.0;
  }
  emxInit_real_T(sp, &omegam, 1, &u_emlrtRTEI);
  st.site = &emlrtRSI;
  sig2 = b_std(&st, y);
  st.site = &b_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  g = muDoubleScalarMax(y->size[0], (real_T)X->size[1] * (real_T)X->size[1]);
  mu = 0.0;
  omega = 1.0;
  /*  Saving room */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &g_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = omegam->size[0];
  loop_ub = (int32_T)n;
  omegam->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, omegam, i1, &u_emlrtRTEI);
  omegam_data = omegam->data;
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    omegam_data[i1] = 0.0;
  }
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &sig2m, 1, &v_emlrtRTEI);
  loop_ub = (int32_T)n;
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = sig2m->size[0];
  sig2m->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, sig2m, i1, &v_emlrtRTEI);
  sig2m_data = sig2m->data;
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    sig2m_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &mum, 1, &w_emlrtRTEI);
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = mum->size[0];
  mum->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, mum, i1, &w_emlrtRTEI);
  mum_data = mum->data;
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub; i++) {
    mum_data[i] = 0.0;
  }
  emxInit_real_T(sp, &alpham, 2, &lb_emlrtRTEI);
  emxInit_real_T(sp, &deltam, 2, &mb_emlrtRTEI);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  i = alpham->size[0] * alpham->size[1];
  alpham->size[0] = loop_ub;
  alpham->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, alpham, i, &x_emlrtRTEI);
  alpham_data = alpham->data;
  i = deltam->size[0] * deltam->size[1];
  deltam->size[0] = loop_ub;
  deltam->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, deltam, i, &x_emlrtRTEI);
  deltam_data = deltam->data;
  if (0.0 <= n - 1.0) {
    b_loop_ub = X->size[1];
    b_X = X->size[1];
    c_X = X->size[1];
    c_loop_ub = X->size[0];
    i2 = X->size[0];
    i3 = X->size[0];
    b_g = g / (g + 1.0);
  }
  emxInit_real_T(sp, &alpha, 1, &eb_emlrtRTEI);
  emxInit_real_T(sp, &yc, 1, &gb_emlrtRTEI);
  emxInit_real_T(sp, &Xd, 2, &jb_emlrtRTEI);
  emxInit_real_T(sp, &Ad, 2, &nb_emlrtRTEI);
  emxInit_real_T(sp, &ad, 1, &ob_emlrtRTEI);
  emxInit_real_T(sp, &r, 1, &pb_emlrtRTEI);
  emxInit_int32_T(sp, &ii, 1, &qb_emlrtRTEI);
  emxInit_real_T(sp, &c_y, 2, &rb_emlrtRTEI);
  emxInit_real_T(sp, &b_delta, 2, &fb_emlrtRTEI);
  emxInit_boolean_T(sp, &c_delta, &hb_emlrtRTEI);
  for (iter = 0; iter < loop_ub; iter++) {
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
      st.site = &xe_emlrtRSI;
      clc(&st, &b_emlrtMCI);
      for (i = 0; i < 37; i++) {
        b_u[i] = '=';
      }
      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &ff_emlrtRSI;
      disp(&st, d_y, &c_emlrtMCI);
      st.site = &c_emlrtRSI;
      b_st.site = &bb_emlrtRSI;
      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &c_u[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&f_y, m);
      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 23, m, &d_u[0]);
      emlrtAssign(&g_y, m);
      h_y = NULL;
      m = emlrtCreateDoubleScalar((real_T)iter + 1.0);
      emlrtAssign(&h_y, m);
      c_st.site = &hf_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, e_y, f_y, g_y, h_y, &j_emlrtMCI),
                       "<output of feval>");
      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &b_u[0]);
      emlrtAssign(&i_y, m);
      st.site = &ef_emlrtRSI;
      disp(&st, i_y, &d_emlrtMCI);
      j_y = NULL;
      m = emlrtCreateString1(' ');
      emlrtAssign(&j_y, m);
      st.site = &df_emlrtRSI;
      disp(&st, j_y, &e_emlrtMCI);
      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &e_u[0]);
      emlrtAssign(&k_y, m);
      st.site = &cf_emlrtRSI;
      disp(&st, k_y, &f_emlrtMCI);
      i = b_delta->size[0] * b_delta->size[1];
      b_delta->size[0] = 1;
      d_loop_ub = delta->size[0];
      b_delta->size[1] = delta->size[0];
      emxEnsureCapacity_real_T(sp, b_delta, i, &fb_emlrtRTEI);
      yc_data = b_delta->data;
      for (i = 0; i < d_loop_ub; i++) {
        yc_data[i] = delta_data[i];
      }
      st.site = &bf_emlrtRSI;
      disp(&st, emlrt_marshallOut(b_delta), &g_emlrtMCI);
      /*          disp('alpha: ') */
      /*          disp(alpha') */
      l_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 15, m, &f_u[0]);
      emlrtAssign(&l_y, m);
      st.site = &af_emlrtRSI;
      disp(&st, l_y, &h_emlrtMCI);
      b_mu[0] = mu;
      b_mu[1] = sig2;
      b_mu[2] = omega;
      st.site = &ye_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(b_mu), &i_emlrtMCI);
    }
    /*     %% Step 1. Sampling omega */
    st.site = &d_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    r1 = &b_st;
    mu = sum(r1, delta);
    c_st.site = &d_emlrtRSI;
    r2 = &c_st;
    omega = sum(r2, delta);
    /*  random number generator : Dirichlet Dis  */
    d_st.site = &eb_emlrtRSI;
    e_st.site = &gb_emlrtRSI;
    f_st.site = &hb_emlrtRSI;
    g_st.site = &ib_emlrtRSI;
    h_st.site = &jb_emlrtRSI;
    b_omega[0] = scalar_randg(&h_st, aw + mu);
    h_st.site = &jb_emlrtRSI;
    b_omega[1] = scalar_randg(&h_st, (bw + (real_T)X->size[1]) - omega);
    d_st.site = &fb_emlrtRSI;
    e_st.site = &cb_emlrtRSI;
    f_st.site = &db_emlrtRSI;
    g_st.site = &l_emlrtRSI;
    mu = b_sumColumnB(b_omega);
    b_omega[0] /= mu;
    omega = b_omega[0];
    if ((int32_T)(iter + 1U) > omegam->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, omegam->size[0],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    omegam_data[iter] = b_omega[0];
    /*     %% Step 2. Sampling alpha */
    st.site = &e_emlrtRSI;
    /*  number of columns */
    i = alpha->size[0];
    alpha->size[0] = X->size[1];
    emxEnsureCapacity_real_T(&st, alpha, i, &eb_emlrtRTEI);
    alpha_data = alpha->data;
    for (i = 0; i < b_loop_ub; i++) {
      alpha_data[i] = 0.0;
    }
    b_st.site = &kb_emlrtRSI;
    /*  demeaning vectors */
    c_st.site = &qb_emlrtRSI;
    mu = mean(&c_st, y);
    i = yc->size[0];
    yc->size[0] = y->size[0];
    emxEnsureCapacity_real_T(&b_st, yc, i, &gb_emlrtRTEI);
    yc_data = yc->data;
    d_loop_ub = y->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      yc_data[i] = y_data[i] - mu;
    }
    b_st.site = &lb_emlrtRSI;
    d_loop_ub = delta->size[0];
    i = c_delta->size[0];
    c_delta->size[0] = delta->size[0];
    emxEnsureCapacity_boolean_T(&b_st, c_delta, i, &hb_emlrtRTEI);
    b_delta_data = c_delta->data;
    for (i = 0; i < d_loop_ub; i++) {
      b_delta_data[i] = (delta_data[i] == 0.0);
    }
    c_st.site = &sb_emlrtRSI;
    eml_find(&c_st, c_delta, ii);
    ii_data = ii->data;
    d_loop_ub = ii->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      if ((ii_data[i] < 1) || (ii_data[i] > b_X)) {
        emlrtDynamicBoundsCheckR2012b(ii_data[i], 1, b_X, &n_emlrtBCI, &st);
      }
    }
    d_loop_ub = ii->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      alpha_data[ii_data[i] - 1] = 0.0;
    }
    b_st.site = &mb_emlrtRSI;
    d_loop_ub = delta->size[0];
    i = c_delta->size[0];
    c_delta->size[0] = delta->size[0];
    emxEnsureCapacity_boolean_T(&b_st, c_delta, i, &ib_emlrtRTEI);
    b_delta_data = c_delta->data;
    for (i = 0; i < d_loop_ub; i++) {
      b_delta_data[i] = (delta_data[i] == 1.0);
    }
    c_st.site = &sb_emlrtRSI;
    eml_find(&c_st, c_delta, ii);
    ii_data = ii->data;
    i = Xd->size[0] * Xd->size[1];
    Xd->size[0] = c_loop_ub;
    Xd->size[1] = ii->size[0];
    emxEnsureCapacity_real_T(&st, Xd, i, &jb_emlrtRTEI);
    yc_data = Xd->data;
    d_loop_ub = ii->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        if ((ii_data[i] < 1) || (ii_data[i] > c_X)) {
          emlrtDynamicBoundsCheckR2012b(ii_data[i], 1, c_X, &o_emlrtBCI, &st);
        }
        yc_data[i1 + Xd->size[0] * i] =
            X_data[i1 + X->size[0] * (ii_data[i] - 1)];
      }
    }
    b_st.site = &nb_emlrtRSI;
    c_st.site = &yb_emlrtRSI;
    dynamic_size_checks(&c_st, Xd, Xd, i2, i3);
    c_st.site = &xb_emlrtRSI;
    mtimes(&c_st, Xd, Xd, c_y);
    b_st.site = &nb_emlrtRSI;
    inv(&b_st, c_y, Ad);
    yc_data = Ad->data;
    d_loop_ub = Ad->size[0] * Ad->size[1];
    for (i = 0; i < d_loop_ub; i++) {
      yc_data[i] *= b_g;
    }
    b_st.site = &ob_emlrtRSI;
    c_st.site = &yb_emlrtRSI;
    dynamic_size_checks(&c_st, Ad, Xd, Ad->size[1], ii->size[0]);
    c_st.site = &xb_emlrtRSI;
    b_mtimes(&c_st, Ad, Xd, c_y);
    b_st.site = &ob_emlrtRSI;
    c_st.site = &yb_emlrtRSI;
    b_dynamic_size_checks(&c_st, c_y, yc, c_y->size[1], yc->size[0]);
    c_st.site = &xb_emlrtRSI;
    c_mtimes(&c_st, c_y, yc, ad);
    delta_data = ad->data;
    b_st.site = &pb_emlrtRSI;
    d_loop_ub = Ad->size[0] * Ad->size[1];
    for (i = 0; i < d_loop_ub; i++) {
      yc_data[i] *= sig2;
    }
    c_st.site = &xc_emlrtRSI;
    cholesky(&c_st, Ad);
    b_st.site = &pb_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    b_randn(&c_st, sum(&c_st, delta), yc);
    c_st.site = &yb_emlrtRSI;
    b_dynamic_size_checks(&c_st, Ad, yc, Ad->size[0], yc->size[0]);
    c_st.site = &xb_emlrtRSI;
    d_mtimes(&c_st, Ad, yc, r);
    yc_data = r->data;
    if ((ad->size[0] != r->size[0]) &&
        ((ad->size[0] != 1) && (r->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(ad->size[0], r->size[0], &b_emlrtECI, &st);
    }
    d_loop_ub = ii->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      if ((ii_data[i] < 1) || (ii_data[i] > alpha->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ii_data[i], 1, alpha->size[0],
                                      &p_emlrtBCI, &st);
      }
      ii_data[i]--;
    }
    if (ad->size[0] == r->size[0]) {
      d_loop_ub = ad->size[0];
      for (i = 0; i < d_loop_ub; i++) {
        delta_data[i] += yc_data[i];
      }
    } else {
      b_st.site = &pb_emlrtRSI;
      plus(&b_st, ad, r);
      delta_data = ad->data;
    }
    emlrtSubAssignSizeCheckR2012b(&ii->size[0], 1, &ad->size[0], 1, &emlrtECI,
                                  &st);
    d_loop_ub = ad->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      alpha_data[ii_data[i]] = delta_data[i];
    }
    if (iter + 1 > alpham->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, alpham->size[0], &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_omegam[0] = 1;
    b_omegam[1] = alpham->size[1];
    iv7[0] = 1;
    iv7[1] = alpha->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_omegam[0], 2, &iv7[0], 2, &d_emlrtECI,
                                  (emlrtCTX)sp);
    d_loop_ub = alpha->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      alpham_data[iter + alpham->size[0] * i] = alpha_data[i];
    }
    /*     %% Step 3. Sampling delta, sig2, mu */
    st.site = &f_emlrtRSI;
    Sampling_delta_sig2_mu(&st, y, X, delta, b_omega[0], g, cons_option, yc,
                           &sig2, &mu);
    yc_data = yc->data;
    i = delta->size[0];
    delta->size[0] = yc->size[0];
    emxEnsureCapacity_real_T(sp, delta, i, &kb_emlrtRTEI);
    delta_data = delta->data;
    d_loop_ub = yc->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      delta_data[i] = yc_data[i];
    }
    if (iter + 1 > deltam->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, deltam->size[0], &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_omegam[0] = 1;
    b_omegam[1] = deltam->size[1];
    iv7[0] = 1;
    iv7[1] = yc->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_omegam[0], 2, &iv7[0], 2, &c_emlrtECI,
                                  (emlrtCTX)sp);
    d_loop_ub = yc->size[0];
    for (i = 0; i < d_loop_ub; i++) {
      deltam_data[iter + deltam->size[0] * i] = yc_data[i];
    }
    if ((int32_T)(iter + 1U) > sig2m->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, sig2m->size[0],
                                    &q_emlrtBCI, (emlrtCTX)sp);
    }
    sig2m_data[iter] = sig2;
    if ((int32_T)(iter + 1U) > mum->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, mum->size[0],
                                    &r_emlrtBCI, (emlrtCTX)sp);
    }
    mum_data[iter] = mu;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_boolean_T(sp, &c_delta);
  emxFree_real_T(sp, &b_delta);
  emxFree_real_T(sp, &c_y);
  emxFree_int32_T(sp, &ii);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &ad);
  emxFree_real_T(sp, &Ad);
  emxFree_real_T(sp, &Xd);
  emxFree_real_T(sp, &yc);
  emxFree_real_T(sp, &alpha);
  emxFree_real_T(sp, &delta);
  /*  burn-in */
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > omegam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, omegam->size[0],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub > omegam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, omegam->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub;
  }
  b_loop_ub = i1 - i;
  i1 = Output->omegam->size[0];
  Output->omegam->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, Output->omegam, i1, &y_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    Output->omegam->data[i1] = omegam_data[i + i1];
  }
  emxFree_real_T(sp, &omegam);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > alpham->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, alpham->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub > alpham->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, alpham->size[0], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub;
  }
  b_loop_ub = alpham->size[1];
  c_loop_ub = i1 - i;
  i1 = Output->alpham->size[0] * Output->alpham->size[1];
  Output->alpham->size[0] = c_loop_ub;
  Output->alpham->size[1] = alpham->size[1];
  emxEnsureCapacity_real_T(sp, Output->alpham, i1, &ab_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i2 = 0; i2 < c_loop_ub; i2++) {
      Output->alpham->data[i2 + Output->alpham->size[0] * i1] =
          alpham_data[(i + i2) + alpham->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &alpham);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > deltam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, deltam->size[0],
                                    &f_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub > deltam->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, deltam->size[0], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub;
  }
  b_loop_ub = deltam->size[1];
  c_loop_ub = i1 - i;
  i1 = Output->gammam->size[0] * Output->gammam->size[1];
  Output->gammam->size[0] = c_loop_ub;
  Output->gammam->size[1] = deltam->size[1];
  emxEnsureCapacity_real_T(sp, Output->gammam, i1, &bb_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i2 = 0; i2 < c_loop_ub; i2++) {
      Output->gammam->data[i2 + Output->gammam->size[0] * i1] =
          deltam_data[(i + i2) + deltam->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &deltam);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, sig2m->size[0],
                                    &d_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub > sig2m->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2m->size[0], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub;
  }
  b_loop_ub = i1 - i;
  i1 = Output->sig2m->size[0];
  Output->sig2m->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, Output->sig2m, i1, &cb_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    Output->sig2m->data[i1] = sig2m_data[i + i1];
  }
  emxFree_real_T(sp, &sig2m);
  if (n0 + 1.0 > n) {
    i = 0;
    loop_ub = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > mum->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, mum->size[0],
                                    &b_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub > mum->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, mum->size[0], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  loop_ub -= i;
  i1 = Output->mum->size[0];
  Output->mum->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->mum, i1, &db_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->mum->data[i1] = mum_data[i + i1];
  }
  emxFree_real_T(sp, &mum);
  /*  Saving Output */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (VS_dirac.c) */

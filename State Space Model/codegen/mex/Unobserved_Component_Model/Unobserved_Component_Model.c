/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unobserved_Component_Model.c
 *
 * Code generation for function 'Unobserved_Component_Model'
 *
 */

/* Include files */
#include "Unobserved_Component_Model.h"
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_emxutil.h"
#include "Unobserved_Component_Model_mexutil.h"
#include "Unobserved_Component_Model_types.h"
#include "abs.h"
#include "assertValidSizeArg.h"
#include "chol.h"
#include "cholmod.h"
#include "diag.h"
#include "diff.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "gamrnd.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "invpd.h"
#include "mean.h"
#include "mtimes.h"
#include "power.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "var.h"
#include "vec.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    10,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    36,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    46,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    52,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    57,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    61,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo
    db_emlrtRSI =
        {
            38,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    153,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    154,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    155,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    156,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    157,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    162,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    163,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    165,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    167,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    170,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    172,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    175,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    186,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    188,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    191,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    198,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    200,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    203,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    205,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    207,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    208,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    210,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    214,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    216,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo
    cd_emlrtRSI =
        {
            28,    /* lineNo */
            "cat", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo
    dd_emlrtRSI =
        {
            100,        /* lineNo */
            "cat_impl", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = {
    102,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo df_emlrtRSI = {
    104,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    105,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = {
    110,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = {
    111,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = {
    112,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    113,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    114,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = {
    115,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = {
    116,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    125,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = {
    127,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI = {
    135,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    137,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    139,      /* lineNo */
    "Gen_yc", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                            */
};

static emlrtRSInfo sf_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI = {
    204,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo vf_emlrtRSI = {
    893,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo wf_emlrtRSI = {
    34,     /* lineNo */
    "chol", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pathName
                                                                            */
};

static emlrtRSInfo ih_emlrtRSI = {
    12,                                                        /* lineNo */
    "randig",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randig.m" /* pathName */
};

static emlrtRSInfo jh_emlrtRSI = {
    18,                                                         /* lineNo */
    "randgam",                                                  /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/M_library/randgam.m" /* pathName */
};

static emlrtRSInfo oh_emlrtRSI = {
    231,      /* lineNo */
    "Gen_yp", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    233,      /* lineNo */
    "Gen_yp", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    235,      /* lineNo */
    "Gen_yp", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    237,      /* lineNo */
    "Gen_yp", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    245,     /* lineNo */
    "Gen_z", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    248,     /* lineNo */
    "Gen_z", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    250,     /* lineNo */
    "Gen_z", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    5,                            /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    66,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    67,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    68,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    34,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    35,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    37,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    38,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    39,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    40,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo k_emlrtMCI = {
    41,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtMCInfo l_emlrtMCI = {
    42,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
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

static emlrtECInfo emlrtECI = {
    1,        /* nDims */
    233,      /* lineNo */
    8,        /* colNo */
    "Gen_yp", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    233,      /* lineNo */
    22,       /* colNo */
    "F3",     /* aName */
    "Gen_yp", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    233,      /* lineNo */
    20,       /* colNo */
    "F3",     /* aName */
    "Gen_yp", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    78,                           /* lineNo */
    14,                           /* colNo */
    "Fx",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    78,                           /* lineNo */
    9,                            /* colNo */
    "Fx",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    78,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                           /* nDims */
    49,                           /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    49,                           /* lineNo */
    8,                            /* colNo */
    "Fx",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    77,                           /* lineNo */
    14,                           /* colNo */
    "Fc",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    77,                           /* lineNo */
    9,                            /* colNo */
    "Fc",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    77,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                           /* nDims */
    48,                           /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    48,                           /* lineNo */
    8,                            /* colNo */
    "Fc",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    76,                           /* lineNo */
    14,                           /* colNo */
    "Fp",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    76,                           /* lineNo */
    9,                            /* colNo */
    "Fp",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    76,                           /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,                           /* nDims */
    47,                           /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    47,                           /* lineNo */
    8,                            /* colNo */
    "Fp",                         /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    75,                           /* lineNo */
    24,                           /* colNo */
    "sig2_zm",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    75,                           /* lineNo */
    19,                           /* colNo */
    "sig2_zm",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    75,                           /* lineNo */
    19,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    74,                           /* lineNo */
    24,                           /* colNo */
    "sig2_em",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    74,                           /* lineNo */
    19,                           /* colNo */
    "sig2_em",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    74,                           /* lineNo */
    19,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    73,                           /* lineNo */
    24,                           /* colNo */
    "sig2_wm",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    73,                           /* lineNo */
    19,                           /* colNo */
    "sig2_wm",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    73,                           /* lineNo */
    19,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    72,                           /* lineNo */
    18,                           /* colNo */
    "phim",                       /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    72,                           /* lineNo */
    13,                           /* colNo */
    "phim",                       /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    72,                           /* lineNo */
    13,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                           /* nDims */
    53,                           /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    53,                           /* lineNo */
    10,                           /* colNo */
    "phim",                       /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    28,                           /* lineNo */
    12,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtDCInfo h_emlrtDCI = {
    20,                           /* lineNo */
    14,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    20,                           /* lineNo */
    14,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    4                                     /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    20,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    21,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    22,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    23,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    24,                           /* lineNo */
    12,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    54,                           /* lineNo */
    13,                           /* colNo */
    "sig2_em",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    58,                           /* lineNo */
    13,                           /* colNo */
    "sig2_wm",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    62,                           /* lineNo */
    13,                           /* colNo */
    "sig2_zm",                    /* aName */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    155,      /* lineNo */
    34,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    156,      /* lineNo */
    38,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    4                                     /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    156,      /* lineNo */
    60,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    4                                     /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    1,        /* nDims */
    163,      /* lineNo */
    12,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    2,        /* nDims */
    163,      /* lineNo */
    12,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo h_emlrtECI = {
    1,        /* nDims */
    171,      /* lineNo */
    12,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo i_emlrtECI = {
    1,        /* nDims */
    172,      /* lineNo */
    12,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo j_emlrtECI = {
    2,        /* nDims */
    172,      /* lineNo */
    12,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    176,        /* lineNo */
    27,         /* colNo */
    "vec_P_tt", /* aName */
    "Gen_Fm",   /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    176,      /* lineNo */
    11,       /* colNo */
    "P_ttm",  /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo k_emlrtECI = {
    -1,       /* nDims */
    176,      /* lineNo */
    5,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    186,      /* lineNo */
    22,       /* colNo */
    "P_ttm",  /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    174,      /* lineNo */
    11,       /* colNo */
    "f_ttm",  /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo l_emlrtECI = {
    -1,       /* nDims */
    174,      /* lineNo */
    5,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    190,      /* lineNo */
    14,       /* colNo */
    "f_ttm",  /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo m_emlrtECI = {
    1,        /* nDims */
    191,      /* lineNo */
    6,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    197,      /* lineNo */
    18,       /* colNo */
    "f_ttm",  /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    198,      /* lineNo */
    26,       /* colNo */
    "P_ttm",  /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo n_emlrtECI = {
    1,        /* nDims */
    200,      /* lineNo */
    13,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo o_emlrtECI = {
    2,        /* nDims */
    200,      /* lineNo */
    13,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    1,        /* nDims */
    201,      /* lineNo */
    18,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo q_emlrtECI = {
    2,        /* nDims */
    201,      /* lineNo */
    18,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    192,      /* lineNo */
    4,        /* colNo */
    "Fm",     /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo r_emlrtECI = {
    -1,       /* nDims */
    192,      /* lineNo */
    1,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    205,      /* lineNo */
    15,       /* colNo */
    "Fm",     /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo s_emlrtECI = {
    1,        /* nDims */
    205,      /* lineNo */
    12,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo t_emlrtECI = {
    1,        /* nDims */
    208,      /* lineNo */
    13,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo u_emlrtECI = {
    1,        /* nDims */
    211,      /* lineNo */
    13,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo v_emlrtECI = {
    2,        /* nDims */
    211,      /* lineNo */
    13,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo w_emlrtECI = {
    1,        /* nDims */
    213,      /* lineNo */
    14,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo x_emlrtECI = {
    2,        /* nDims */
    213,      /* lineNo */
    14,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo y_emlrtECI = {
    1,        /* nDims */
    216,      /* lineNo */
    10,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    218,      /* lineNo */
    8,        /* colNo */
    "Fm",     /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo ab_emlrtECI = {
    -1,       /* nDims */
    218,      /* lineNo */
    5,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    225,      /* lineNo */
    11,       /* colNo */
    "Fm",     /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtRTEInfo
    g_emlrtRTEI =
        {
            275,                   /* lineNo */
            27,                    /* colNo */
            "check_non_axis_size", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtDCInfo r_emlrtDCI = {
    152,      /* lineNo */
    17,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    153,      /* lineNo */
    17,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    184,      /* lineNo */
    14,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    152,      /* lineNo */
    1,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    153,      /* lineNo */
    1,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    155,      /* lineNo */
    49,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    156,      /* lineNo */
    76,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    157,      /* lineNo */
    35,       /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    4                                     /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    184,      /* lineNo */
    1,        /* colNo */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    1                                     /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    169,      /* lineNo */
    17,       /* colNo */
    "data",   /* aName */
    "Gen_Fm", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    119,      /* lineNo */
    18,       /* colNo */
    "test",   /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    121,      /* lineNo */
    18,       /* colNo */
    "test",   /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    118,      /* lineNo */
    16,       /* colNo */
    "ind",    /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    96,       /* lineNo */
    1,        /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    4                                     /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    96,       /* lineNo */
    11,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    4                                     /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    95,       /* lineNo */
    8,        /* colNo */
    "F2",     /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    95,       /* lineNo */
    12,       /* colNo */
    "F2",     /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    98,       /* lineNo */
    17,       /* colNo */
    "F2",     /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    98,       /* lineNo */
    25,       /* colNo */
    "F2",     /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    98,       /* lineNo */
    9,        /* colNo */
    "X",      /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo kb_emlrtECI = {
    -1,       /* nDims */
    98,       /* lineNo */
    5,        /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo lb_emlrtECI = {
    1,        /* nDims */
    102,      /* lineNo */
    13,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo mb_emlrtECI = {
    2,        /* nDims */
    102,      /* lineNo */
    13,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo nb_emlrtECI = {
    1,        /* nDims */
    103,      /* lineNo */
    18,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo ob_emlrtECI = {
    2,        /* nDims */
    103,      /* lineNo */
    18,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo pb_emlrtECI = {
    1,        /* nDims */
    105,      /* lineNo */
    13,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtECInfo qb_emlrtECI = {
    1,        /* nDims */
    111,      /* lineNo */
    11,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtDCInfo fb_emlrtDCI = {
    112,      /* lineNo */
    33,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    4                                     /* checkKind */
};

static emlrtECInfo rb_emlrtECI = {
    1,        /* nDims */
    116,      /* lineNo */
    16,       /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    126,      /* lineNo */
    20,       /* colNo */
    "phim",   /* aName */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m", /* pName */
    0                                     /* checkKind */
};

static emlrtECInfo sb_emlrtECI = {
    1,        /* nDims */
    135,      /* lineNo */
    8,        /* colNo */
    "Gen_yc", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    14,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    20,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    21,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    22,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    23,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    24,                           /* lineNo */
    6,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    80,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    81,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    82,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    83,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    84,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    40,                           /* lineNo */
    14,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    85,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    86,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    10,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    24,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    25,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    26,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    1,                            /* lineNo */
    19,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    231,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    152,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    153,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    154,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo
    lc_emlrtRTEI =
        {
            28,    /* lineNo */
            5,     /* colNo */
            "cat", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    155,                          /* lineNo */
    41,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    155,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    156,                          /* lineNo */
    6,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    156,                          /* lineNo */
    22,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    156,                          /* lineNo */
    68,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    156,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    157,                          /* lineNo */
    14,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    158,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    184,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    186,                          /* lineNo */
    16,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    187,                          /* lineNo */
    8,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    171,                          /* lineNo */
    19,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    190,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    171,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    87,                  /* lineNo */
    9,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    175,                          /* lineNo */
    16,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    223,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    197,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    224,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    175,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    198,                          /* lineNo */
    20,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    225,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    176,                          /* lineNo */
    18,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    76,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    205,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    211,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    213,                          /* lineNo */
    13,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    213,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    157,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    162,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    163,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    170,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    188,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    156,                          /* lineNo */
    32,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    163,                          /* lineNo */
    12,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    96,                           /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    102,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    90,                           /* lineNo */
    23,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    107,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    109,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    34,     /* lineNo */
    5,      /* colNo */
    "chol", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/chol.m" /* pName
                                                                            */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    135,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    111,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    112,                          /* lineNo */
    17,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    112,                          /* lineNo */
    11,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo
    tf_emlrtRTEI =
        {
            295,   /* lineNo */
            14,    /* colNo */
            "cat", /* fName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "cat.m" /* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = {
    114,                          /* lineNo */
    15,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = {
    107,                          /* lineNo */
    8,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = {
    126,                          /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = {
    128,                          /* lineNo */
    9,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    104,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    105,                          /* lineNo */
    1,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    113,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = {
    114,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = {
    115,                          /* lineNo */
    5,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = {
    233,                          /* lineNo */
    8,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = {
    172,                          /* lineNo */
    12,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = {
    171,                          /* lineNo */
    12,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = {
    216,                          /* lineNo */
    10,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = {
    211,                          /* lineNo */
    13,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = {
    135,                          /* lineNo */
    8,                            /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = {
    102,                          /* lineNo */
    13,                           /* colNo */
    "Unobserved_Component_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pName */
};

static emlrtRSInfo wh_emlrtRSI = {
    5,                            /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    67,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    68,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    66,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    42,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo fi_emlrtRSI = {
    41,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo gi_emlrtRSI = {
    40,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo hi_emlrtRSI = {
    39,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ii_emlrtRSI = {
    38,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ji_emlrtRSI = {
    37,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ki_emlrtRSI = {
    35,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo li_emlrtRSI = {
    34,                           /* lineNo */
    "Unobserved_Component_Model", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo
    pi_emlrtRSI =
        {
            66,        /* lineNo */
            "fprintf", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/iofun/"
            "fprintf.m" /* pathName */
};

static emlrtRSInfo qi_emlrtRSI = {
    171,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo si_emlrtRSI = {
    213,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

static emlrtRSInfo ti_emlrtRSI = {
    211,      /* lineNo */
    "Gen_Fm", /* fcnName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Unobserved_Component_Model.m" /* pathName */
};

/* Function Declarations */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *data,
                   const emxArray_real_T *phi, real_T sig2_w, real_T sig2_e,
                   real_T sig2_z, emxArray_real_T *Fp, emxArray_real_T *Fc,
                   emxArray_real_T *Fx);

static void Gen_yc(const emlrtStack *sp, const emxArray_real_T *F2,
                   const emxArray_real_T *phi0,
                   const emxArray_real_T *Prec_PHI0, real_T e01, real_T e02,
                   real_T sig2_e, const emxArray_real_T *phim, real_T d,
                   real_T iter, emxArray_real_T *phi, real_T *sig2);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static void b_plus(const emlrtStack *sp, emxArray_real_T *P_tl,
                   const emxArray_real_T *Sigma);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *diff_y,
                             const emxArray_real_T *F3, int32_T i1);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *vec_P_tt,
                               const emxArray_real_T *r3, int32_T p);

static const mxArray *c_emlrt_marshallOut(const real_T u[3]);

static void c_plus(const emlrtStack *sp, emxArray_real_T *f_tt,
                   const emxArray_real_T *r1);

static void clc(const emlrtStack *sp, emlrtMCInfo *location);

static void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Kalgain,
                               const emxArray_real_T *P_tl, int32_T t,
                               const emxArray_real_T *f_tl);

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38]);

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, emlrtMCInfo *location);

static void d_plus(const emlrtStack *sp, emxArray_real_T *varb1_inv,
                   const emxArray_real_T *Prec_PHI0);

static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
                               emlrtRSInfo ui_emlrtRSI);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[6]);

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location);

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *test,
                               const emxArray_real_T *F2, int32_T i1,
                               int32_T i2);

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *varb1,
                               emlrtRSInfo ui_emlrtRSI,
                               const emxArray_real_T *varb1_inv);

static void minus(const emlrtStack *sp, emxArray_real_T *P_tl,
                  const emxArray_real_T *cP_tt);

static void plus(const emlrtStack *sp, emxArray_real_T *f_tt,
                 const emxArray_real_T *f_tl);

/* Function Definitions */
static void Gen_Fm(const emlrtStack *sp, const emxArray_real_T *data,
                   const emxArray_real_T *phi, real_T sig2_w, real_T sig2_e,
                   real_T sig2_z, emxArray_real_T *Fp, emxArray_real_T *Fc,
                   emxArray_real_T *Fx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emlrtStack *r;
  emlrtStack *r1;
  emlrtStack *r2;
  emxArray_int8_T *varargin_4;
  emxArray_real_T c_sig2_w;
  emxArray_real_T *F;
  emxArray_real_T *Kalgain;
  emxArray_real_T *P_tl;
  emxArray_real_T *P_ttm;
  emxArray_real_T *Sigma;
  emxArray_real_T *TX;
  emxArray_real_T *b_result;
  emxArray_real_T *b_sig2_w;
  emxArray_real_T *cP_tt;
  emxArray_real_T *f_tl;
  emxArray_real_T *f_tt;
  emxArray_real_T *f_ttm;
  emxArray_real_T *varargin_1;
  emxArray_real_T *vec_P_tt;
  emxArray_real_T *y;
  const real_T *data_data;
  const real_T *phi_data;
  real_T b;
  real_T c;
  real_T *F_data;
  real_T *P_tl_data;
  real_T *P_ttm_data;
  real_T *Sigma_data;
  real_T *TX_data;
  real_T *cP_tt_data;
  real_T *f_tt_data;
  real_T *f_ttm_data;
  real_T *varargin_1_data;
  real_T *vec_P_tt_data;
  int32_T b_input_sizes[2];
  int32_T c_input_sizes[2];
  int32_T c_result[2];
  int32_T d_input_sizes[2];
  int32_T e_input_sizes[2];
  int32_T f_input_sizes[2];
  int32_T g_input_sizes[2];
  int32_T input_sizes[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T p;
  int32_T result;
  int32_T sizes_idx_1;
  int8_T b_input_sizes_idx_1;
  int8_T *varargin_4_data;
  boolean_T empty_non_axis_sizes;
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
  phi_data = phi->data;
  data_data = data->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &f_ttm, 2, &ic_emlrtRTEI);
  /*  Fm 샘플랭 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  p = phi->size[0] + 2;
  /* %%%% Kalman filtering step */
  i = f_ttm->size[0] * f_ttm->size[1];
  f_ttm->size[0] = data->size[0];
  emxEnsureCapacity_real_T(sp, f_ttm, i, &ic_emlrtRTEI);
  if ((real_T)phi->size[0] + 2.0 != phi->size[0] + 2) {
    emlrtIntegerCheckR2012b((real_T)phi->size[0] + 2.0, &r_emlrtDCI,
                            (emlrtCTX)sp);
  }
  i = f_ttm->size[0] * f_ttm->size[1];
  f_ttm->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(sp, f_ttm, i, &ic_emlrtRTEI);
  f_ttm_data = f_ttm->data;
  if ((real_T)phi->size[0] + 2.0 != phi->size[0] + 2) {
    emlrtIntegerCheckR2012b((real_T)phi->size[0] + 2.0, &u_emlrtDCI,
                            (emlrtCTX)sp);
  }
  loop_ub = data->size[0] * (phi->size[0] + 2);
  for (i = 0; i < loop_ub; i++) {
    f_ttm_data[i] = 0.0;
  }
  emxInit_real_T(sp, &P_ttm, 2, &jc_emlrtRTEI);
  /*  은닉인자를 저장 */
  st.site = &eb_emlrtRSI;
  b_st.site = &dc_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  c = ((real_T)phi->size[0] + 2.0) * ((real_T)phi->size[0] + 2.0);
  i = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[0] = data->size[0];
  emxEnsureCapacity_real_T(sp, P_ttm, i, &jc_emlrtRTEI);
  if (c != (int32_T)c) {
    emlrtIntegerCheckR2012b(c, &s_emlrtDCI, (emlrtCTX)sp);
  }
  i = P_ttm->size[0] * P_ttm->size[1];
  P_ttm->size[1] = (int32_T)c;
  emxEnsureCapacity_real_T(sp, P_ttm, i, &jc_emlrtRTEI);
  P_ttm_data = P_ttm->data;
  if (c != (int32_T)c) {
    emlrtIntegerCheckR2012b(c, &v_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = data->size[0] * (int32_T)c;
  for (i = 0; i < loop_ub; i++) {
    P_ttm_data[i] = 0.0;
  }
  emxInit_real_T(sp, &f_tt, 1, &ad_emlrtRTEI);
  emxInit_real_T(sp, &b_sig2_w, 1, &sc_emlrtRTEI);
  /*  은닉인자의 분산을 저장 */
  st.site = &fb_emlrtRSI;
  diff(&st, data, b_sig2_w);
  st.site = &fb_emlrtRSI;
  r = &st;
  c = mean(r, data);
  b_st.site = &fb_emlrtRSI;
  r1 = &b_st;
  b = mean(r1, b_sig2_w);
  i = f_tt->size[0];
  f_tt->size[0] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&b_st, f_tt, i, &kc_emlrtRTEI);
  f_tt_data = f_tt->data;
  f_tt_data[0] = c;
  loop_ub = phi->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_tt_data[i + 1] = 0.0;
  }
  emxInit_real_T(&b_st, &cP_tt, 2, &td_emlrtRTEI);
  f_tt_data[phi->size[0] + 1] = b;
  /*  초기값은 무조건부 평균 */
  c_st.site = &gb_emlrtRSI;
  c = var(&c_st, data);
  c_st.site = &gb_emlrtRSI;
  eye(&c_st, (real_T)phi->size[0] + 1.0, cP_tt);
  cP_tt_data = cP_tt->data;
  loop_ub = cP_tt->size[0] * cP_tt->size[1];
  for (i = 0; i < loop_ub; i++) {
    cP_tt_data[i] *= c;
  }
  emxInit_real_T(&b_st, &vec_P_tt, 2, &gd_emlrtRTEI);
  c_st.site = &gb_emlrtRSI;
  if ((real_T)phi->size[0] + 1.0 != phi->size[0] + 1) {
    emlrtIntegerCheckR2012b((real_T)phi->size[0] + 1.0, &o_emlrtDCI, &c_st);
  }
  d_st.site = &cd_emlrtRSI;
  if ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)) {
    result = cP_tt->size[0];
  } else if (phi->size[0] + 1 != 0) {
    result = phi->size[0] + 1;
  } else {
    result = cP_tt->size[0];
    if (phi->size[0] + 1 > cP_tt->size[0]) {
      result = phi->size[0] + 1;
    }
  }
  e_st.site = &dd_emlrtRSI;
  if ((cP_tt->size[0] != result) &&
      ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((phi->size[0] + 1 != result) && (phi->size[0] + 1 != 0)) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes ||
      ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0))) {
    input_sizes_idx_1 = cP_tt->size[1];
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (phi->size[0] + 1 != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  i = vec_P_tt->size[0] * vec_P_tt->size[1];
  vec_P_tt->size[0] = result;
  vec_P_tt->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(&d_st, vec_P_tt, i, &lc_emlrtRTEI);
  vec_P_tt_data = vec_P_tt->data;
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < result; i1++) {
      vec_P_tt_data[i1 + vec_P_tt->size[0] * i] = cP_tt_data[i1 + result * i];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < result; i1++) {
      vec_P_tt_data[i1 + vec_P_tt->size[0] * input_sizes_idx_1] = 0.0;
    }
  }
  c_st.site = &gb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  diff(&d_st, data, b_sig2_w);
  if ((real_T)phi->size[0] + 1.0 != phi->size[0] + 1) {
    emlrtIntegerCheckR2012b((real_T)phi->size[0] + 1.0, &w_emlrtDCI, &c_st);
  }
  emxInit_real_T(&c_st, &TX, 2, &tc_emlrtRTEI);
  d_st.site = &gb_emlrtRSI;
  r2 = &d_st;
  c = var(r2, b_sig2_w);
  i = TX->size[0] * TX->size[1];
  TX->size[0] = 1;
  TX->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&d_st, TX, i, &mc_emlrtRTEI);
  TX_data = TX->data;
  loop_ub = phi->size[0] + 1;
  for (i = 0; i < loop_ub; i++) {
    TX_data[i] = 0.0;
  }
  TX_data[phi->size[0] + 1] = c;
  e_st.site = &cd_emlrtRSI;
  if ((vec_P_tt->size[0] != 0) && (vec_P_tt->size[1] != 0)) {
    sizes_idx_1 = vec_P_tt->size[1];
  } else {
    sizes_idx_1 = TX->size[1];
  }
  f_st.site = &dd_emlrtRSI;
  if ((vec_P_tt->size[1] != sizes_idx_1) &&
      ((vec_P_tt->size[0] != 0) && (vec_P_tt->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&f_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (TX->size[1] != sizes_idx_1) {
    emlrtErrorWithMessageIdR2018a(&f_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_real_T(&f_st, &P_tl, 2, &rd_emlrtRTEI);
  if ((vec_P_tt->size[0] != 0) && (vec_P_tt->size[1] != 0)) {
    input_sizes_idx_1 = vec_P_tt->size[0];
  } else {
    input_sizes_idx_1 = 0;
  }
  i = P_tl->size[0] * P_tl->size[1];
  if ((vec_P_tt->size[0] != 0) && (vec_P_tt->size[1] != 0)) {
    loop_ub = vec_P_tt->size[0];
  } else {
    loop_ub = 0;
  }
  P_tl->size[0] = loop_ub + 1;
  P_tl->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(&e_st, P_tl, i, &nc_emlrtRTEI);
  P_tl_data = P_tl->data;
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] =
          vec_P_tt_data[i1 + input_sizes_idx_1 * i];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    P_tl_data[input_sizes_idx_1 + P_tl->size[0] * i] = TX_data[i];
  }
  emxInit_real_T(&e_st, &b_result, 2, &ud_emlrtRTEI);
  c_st.site = &hb_emlrtRSI;
  if (!((real_T)phi->size[0] - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(-1.0, &p_emlrtDCI, &c_st);
  }
  d_st.site = &hb_emlrtRSI;
  eye(&d_st, (real_T)phi->size[0] - 1.0, cP_tt);
  cP_tt_data = cP_tt->data;
  if (!((real_T)phi->size[0] - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(-1.0, &q_emlrtDCI, &c_st);
  }
  d_st.site = &cd_emlrtRSI;
  if (phi->size[0] - 1 != 0) {
    result = phi->size[0] - 1;
  } else if ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0)) {
    result = cP_tt->size[0];
  } else if (phi->size[0] - 1 != 0) {
    result = phi->size[0] - 1;
  } else {
    i = phi->size[0] - 1;
    result = muIntScalarMax_sint32(i, 0);
    if (cP_tt->size[0] > result) {
      result = cP_tt->size[0];
    }
    if (phi->size[0] - 1 > result) {
      result = phi->size[0] - 1;
    }
  }
  e_st.site = &dd_emlrtRSI;
  if ((phi->size[0] - 1 != result) && (phi->size[0] - 1 != 0)) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((cP_tt->size[0] != result) &&
      ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((phi->size[0] - 1 != result) && (phi->size[0] - 1 != 0)) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (phi->size[0] - 1 != 0)) {
    b_input_sizes_idx_1 = 1;
  } else {
    b_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((cP_tt->size[0] != 0) && (cP_tt->size[1] != 0))) {
    input_sizes_idx_1 = cP_tt->size[1];
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (phi->size[0] - 1 != 0)) {
    sizes_idx_1 = 2;
  } else {
    sizes_idx_1 = 0;
  }
  i = b_result->size[0] * b_result->size[1];
  b_result->size[0] = result;
  b_result->size[1] = (b_input_sizes_idx_1 + input_sizes_idx_1) + sizes_idx_1;
  emxEnsureCapacity_real_T(&d_st, b_result, i, &lc_emlrtRTEI);
  vec_P_tt_data = b_result->data;
  loop_ub = b_input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < result; i1++) {
      vec_P_tt_data[i1] = 0.0;
    }
  }
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i1 = 0; i1 < result; i1++) {
      vec_P_tt_data[i1 + b_result->size[0] * (i + b_input_sizes_idx_1)] =
          cP_tt_data[i1 + result * i];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < result; i1++) {
      vec_P_tt_data[i1 + b_result->size[0] * ((i + b_input_sizes_idx_1) +
                                              input_sizes_idx_1)] = 0.0;
    }
  }
  emxInit_real_T(&d_st, &varargin_1, 2, &oc_emlrtRTEI);
  c_st.site = &hb_emlrtRSI;
  i = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&c_st, varargin_1, i, &oc_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  varargin_1_data[0] = 1.0;
  loop_ub = phi->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1_data[i + 1] = 0.0;
  }
  varargin_1_data[phi->size[0] + 1] = 1.0;
  i = TX->size[0] * TX->size[1];
  TX->size[0] = 1;
  TX->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&c_st, TX, i, &pc_emlrtRTEI);
  TX_data = TX->data;
  TX_data[0] = 0.0;
  loop_ub = phi->size[0];
  for (i = 0; i < loop_ub; i++) {
    TX_data[i + 1] = phi_data[i];
  }
  TX_data[phi->size[0] + 1] = 0.0;
  if ((real_T)phi->size[0] + 1.0 != phi->size[0] + 1) {
    emlrtIntegerCheckR2012b((real_T)phi->size[0] + 1.0, &x_emlrtDCI, &c_st);
  }
  emxInit_int8_T(&c_st, &varargin_4, &qc_emlrtRTEI);
  i = varargin_4->size[0] * varargin_4->size[1];
  varargin_4->size[0] = 1;
  varargin_4->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_int8_T(&c_st, varargin_4, i, &qc_emlrtRTEI);
  varargin_4_data = varargin_4->data;
  loop_ub = phi->size[0] + 1;
  for (i = 0; i < loop_ub; i++) {
    varargin_4_data[i] = 0;
  }
  varargin_4_data[phi->size[0] + 1] = 1;
  d_st.site = &cd_emlrtRSI;
  e_st.site = &dd_emlrtRSI;
  empty_non_axis_sizes = (TX->size[1] == varargin_1->size[1]);
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((b_result->size[1] != varargin_1->size[1]) &&
      ((b_result->size[0] != 0) && (b_result->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (varargin_4->size[1] != varargin_1->size[1]) {
    emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_real_T(&e_st, &F, 2, &rc_emlrtRTEI);
  input_sizes[0] = 1;
  if ((b_result->size[0] != 0) && (b_result->size[1] != 0)) {
    input_sizes_idx_1 = b_result->size[0];
  } else {
    input_sizes_idx_1 = 0;
  }
  i = F->size[0] * F->size[1];
  if ((b_result->size[0] != 0) && (b_result->size[1] != 0)) {
    result = b_result->size[0];
  } else {
    result = 0;
  }
  F->size[0] = result + 3;
  F->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&d_st, F, i, &rc_emlrtRTEI);
  F_data = F->data;
  loop_ub = varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    F_data[F->size[0] * i] = varargin_1_data[i];
  }
  loop_ub = varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    F_data[F->size[0] * i + 1] = TX_data[i];
  }
  loop_ub = varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      F_data[(i1 + F->size[0] * i) + 2] =
          vec_P_tt_data[i1 + input_sizes_idx_1 * i];
    }
  }
  emxFree_real_T(&d_st, &b_result);
  loop_ub = varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    F_data[(input_sizes_idx_1 + F->size[0] * i) + 2] = varargin_4_data[i];
  }
  emxFree_int8_T(&d_st, &varargin_4);
  if (phi->size[0] - 1 < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &y_emlrtDCI, &b_st);
  }
  i = b_sig2_w->size[0];
  b_sig2_w->size[0] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&b_st, b_sig2_w, i, &sc_emlrtRTEI);
  varargin_1_data = b_sig2_w->data;
  varargin_1_data[0] = sig2_w;
  varargin_1_data[1] = sig2_e;
  loop_ub = phi->size[0] - 1;
  for (i = 0; i < loop_ub; i++) {
    varargin_1_data[i + 2] = 0.0;
  }
  emxInit_real_T(&b_st, &Sigma, 2, &pd_emlrtRTEI);
  varargin_1_data[phi->size[0] + 1] = sig2_z;
  c_st.site = &ib_emlrtRSI;
  diag(&c_st, b_sig2_w, Sigma);
  Sigma_data = Sigma->data;
  i = TX->size[0] * TX->size[1];
  TX->size[0] = 1;
  TX->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&b_st, TX, i, &tc_emlrtRTEI);
  TX_data = TX->data;
  TX_data[0] = 1.0;
  TX_data[1] = 1.0;
  loop_ub = phi->size[0];
  for (i = 0; i < loop_ub; i++) {
    TX_data[i + 2] = 0.0;
  }
  i = data->size[0];
  if (0 <= data->size[0] - 1) {
    b_loop_ub = TX->size[1];
    input_sizes[0] = 1;
  }
  emxInit_real_T(&b_st, &f_tl, 1, &qd_emlrtRTEI);
  emxInit_real_T(&b_st, &Kalgain, 1, &sd_emlrtRTEI);
  emxInit_real_T(&b_st, &y, 2, &vd_emlrtRTEI);
  for (sizes_idx_1 = 0; sizes_idx_1 < i; sizes_idx_1++) {
    c_st.site = &jb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    dynamic_size_checks(&d_st, F, f_tt, F->size[1], f_tt->size[0]);
    d_st.site = &fd_emlrtRSI;
    mtimes(&d_st, F, f_tt, f_tl);
    F_data = f_tl->data;
    c_st.site = &kb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, F, P_tl, F->size[1], P_tl->size[0]);
    d_st.site = &fd_emlrtRSI;
    b_mtimes(&d_st, F, P_tl, y);
    c_st.site = &kb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, y, F, y->size[1], F->size[1]);
    d_st.site = &fd_emlrtRSI;
    c_mtimes(&d_st, y, F, P_tl);
    P_tl_data = P_tl->data;
    if ((P_tl->size[0] != Sigma->size[0]) &&
        ((P_tl->size[0] != 1) && (Sigma->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[0], Sigma->size[0], &f_emlrtECI,
                                  &b_st);
    }
    if ((P_tl->size[1] != Sigma->size[1]) &&
        ((P_tl->size[1] != 1) && (Sigma->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], Sigma->size[1], &g_emlrtECI,
                                  &b_st);
    }
    if ((P_tl->size[0] == Sigma->size[0]) &&
        (P_tl->size[1] == Sigma->size[1])) {
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        P_tl_data[i1] += Sigma_data[i1];
      }
    } else {
      c_st.site = &kb_emlrtRSI;
      b_plus(&c_st, P_tl, Sigma);
      P_tl_data = P_tl->data;
    }
    c_st.site = &lb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    c_dynamic_size_checks(&d_st, P_tl, TX->size[1], P_tl->size[0]);
    d_st.site = &fd_emlrtRSI;
    d_mtimes(&d_st, TX, P_tl, varargin_1);
    c_st.site = &lb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    d_dynamic_size_checks(&d_st, varargin_1, varargin_1->size[1], TX->size[1]);
    c = 1.0 / e_mtimes(varargin_1, TX);
    c_st.site = &mb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    e_dynamic_size_checks(&d_st, TX, f_tl, TX->size[1], f_tl->size[0]);
    if (sizes_idx_1 + 1 > data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, data->size[0],
                                    &jb_emlrtBCI, &b_st);
    }
    b = data_data[sizes_idx_1] - e_mtimes(TX, f_tl);
    c_st.site = &nb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    c_dynamic_size_checks(&d_st, P_tl, P_tl->size[1], TX->size[1]);
    d_st.site = &fd_emlrtRSI;
    f_mtimes(&d_st, P_tl, TX, Kalgain);
    vec_P_tt_data = Kalgain->data;
    loop_ub = Kalgain->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      vec_P_tt_data[i1] *= c;
    }
    /*  변환된 종속변수에 대해 Gamma는 단위행렬 */
    i1 = f_tt->size[0];
    f_tt->size[0] = Kalgain->size[0];
    emxEnsureCapacity_real_T(&b_st, f_tt, i1, &xc_emlrtRTEI);
    f_tt_data = f_tt->data;
    loop_ub = Kalgain->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      f_tt_data[i1] = vec_P_tt_data[i1] * b;
    }
    if ((f_tl->size[0] != f_tt->size[0]) &&
        ((f_tl->size[0] != 1) && (f_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tl->size[0], f_tt->size[0], &h_emlrtECI,
                                  &b_st);
    }
    if (f_tl->size[0] == f_tt->size[0]) {
      i1 = f_tt->size[0];
      f_tt->size[0] = f_tl->size[0];
      emxEnsureCapacity_real_T(&b_st, f_tt, i1, &ad_emlrtRTEI);
      f_tt_data = f_tt->data;
      loop_ub = f_tl->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_tt_data[i1] += F_data[i1];
      }
    } else {
      c_st.site = &qi_emlrtRSI;
      plus(&c_st, f_tt, f_tl);
      f_tt_data = f_tt->data;
    }
    i1 = y->size[0] * y->size[1];
    y->size[0] = Kalgain->size[0];
    y->size[1] = TX->size[1];
    emxEnsureCapacity_real_T(&b_st, y, i1, &bd_emlrtRTEI);
    F_data = y->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      loop_ub = Kalgain->size[0];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < loop_ub;
           input_sizes_idx_1++) {
        F_data[input_sizes_idx_1 + y->size[0] * i1] =
            vec_P_tt_data[input_sizes_idx_1] * TX_data[i1];
      }
    }
    c_st.site = &ob_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, y, P_tl, y->size[1], P_tl->size[0]);
    d_st.site = &fd_emlrtRSI;
    b_mtimes(&d_st, y, P_tl, cP_tt);
    cP_tt_data = cP_tt->data;
    if ((P_tl->size[0] != cP_tt->size[0]) &&
        ((P_tl->size[0] != 1) && (cP_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[0], cP_tt->size[0], &i_emlrtECI,
                                  &b_st);
    }
    if ((P_tl->size[1] != cP_tt->size[1]) &&
        ((P_tl->size[1] != 1) && (cP_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], cP_tt->size[1], &j_emlrtECI,
                                  &b_st);
    }
    if ((P_tl->size[0] == cP_tt->size[0]) &&
        (P_tl->size[1] == cP_tt->size[1])) {
      loop_ub = P_tl->size[0] * P_tl->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        P_tl_data[i1] -= cP_tt_data[i1];
      }
    } else {
      c_st.site = &ob_emlrtRSI;
      minus(&c_st, P_tl, cP_tt);
      P_tl_data = P_tl->data;
    }
    if (sizes_idx_1 + 1 > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, f_ttm->size[0],
                                    &bb_emlrtBCI, &b_st);
    }
    c_result[0] = 1;
    c_result[1] = f_ttm->size[1];
    input_sizes[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&c_result[0], 2, &input_sizes[0], 2,
                                  &l_emlrtECI, &b_st);
    loop_ub = f_tt->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      f_ttm_data[sizes_idx_1 + f_ttm->size[0] * i1] = f_tt_data[i1];
    }
    i1 = cP_tt->size[0] * cP_tt->size[1];
    cP_tt->size[0] = P_tl->size[0];
    cP_tt->size[1] = P_tl->size[1];
    emxEnsureCapacity_real_T(&b_st, cP_tt, i1, &cd_emlrtRTEI);
    cP_tt_data = cP_tt->data;
    loop_ub = P_tl->size[0] * P_tl->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      cP_tt_data[i1] = P_tl_data[i1];
    }
    c_st.site = &pb_emlrtRSI;
    vec(&c_st, cP_tt);
    cP_tt_data = cP_tt->data;
    i1 = vec_P_tt->size[0] * vec_P_tt->size[1];
    vec_P_tt->size[0] = cP_tt->size[1];
    vec_P_tt->size[1] = cP_tt->size[0];
    emxEnsureCapacity_real_T(&b_st, vec_P_tt, i1, &gd_emlrtRTEI);
    vec_P_tt_data = vec_P_tt->data;
    loop_ub = cP_tt->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      result = cP_tt->size[1];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < result;
           input_sizes_idx_1++) {
        vec_P_tt_data[input_sizes_idx_1 + vec_P_tt->size[0] * i1] =
            cP_tt_data[i1 + cP_tt->size[0] * input_sizes_idx_1];
      }
    }
    if (sizes_idx_1 + 1 > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, P_ttm->size[0],
                                    &y_emlrtBCI, &b_st);
    }
    if (1 > vec_P_tt->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, vec_P_tt->size[0], &x_emlrtBCI,
                                    &b_st);
    }
    loop_ub = vec_P_tt->size[1];
    i1 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = vec_P_tt->size[1];
    emxEnsureCapacity_real_T(&b_st, varargin_1, i1, &jd_emlrtRTEI);
    varargin_1_data = varargin_1->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargin_1_data[i1] = vec_P_tt_data[vec_P_tt->size[0] * i1];
    }
    c_result[0] = 1;
    c_result[1] = P_ttm->size[1];
    emlrtSubAssignSizeCheckR2012b(&c_result[0], 2, &varargin_1->size[0], 2,
                                  &k_emlrtECI, &b_st);
    loop_ub = vec_P_tt->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      P_ttm_data[sizes_idx_1 + P_ttm->size[0] * i1] =
          vec_P_tt_data[vec_P_tt->size[0] * i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }
  }
  emxFree_real_T(&b_st, &varargin_1);
  emxFree_real_T(&b_st, &TX);
  /* %% Backward recursion */
  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = data->size[0];
  emxEnsureCapacity_real_T(&b_st, P_tl, i, &uc_emlrtRTEI);
  if ((real_T)phi->size[0] + 2.0 != phi->size[0] + 2) {
    emlrtIntegerCheckR2012b((real_T)phi->size[0] + 2.0, &t_emlrtDCI, &b_st);
  }
  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&b_st, P_tl, i, &uc_emlrtRTEI);
  P_tl_data = P_tl->data;
  if ((real_T)phi->size[0] + 2.0 != phi->size[0] + 2) {
    emlrtIntegerCheckR2012b((real_T)phi->size[0] + 2.0, &ab_emlrtDCI, &b_st);
  }
  loop_ub = data->size[0] * (phi->size[0] + 2);
  for (i = 0; i < loop_ub; i++) {
    P_tl_data[i] = 0.0;
  }
  /*  T by km 샘플링된 값들을 저장하는 공간 */
  if ((data->size[0] < 1) || (data->size[0] > P_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(data->size[0], 1, P_ttm->size[0],
                                  &ab_emlrtBCI, &b_st);
  }
  loop_ub = P_ttm->size[1];
  i = b_sig2_w->size[0];
  b_sig2_w->size[0] = P_ttm->size[1];
  emxEnsureCapacity_real_T(&b_st, b_sig2_w, i, &vc_emlrtRTEI);
  varargin_1_data = b_sig2_w->data;
  for (i = 0; i < loop_ub; i++) {
    varargin_1_data[i] = P_ttm_data[(data->size[0] + P_ttm->size[0] * i) - 1];
  }
  c_st.site = &qb_emlrtRSI;
  input_sizes_idx_1 = b_sig2_w->size[0];
  d_st.site = &ld_emlrtRSI;
  e_st.site = &kd_emlrtRSI;
  assertValidSizeArg(&e_st, (real_T)phi->size[0] + 2.0);
  e_st.site = &kd_emlrtRSI;
  assertValidSizeArg(&e_st, (real_T)phi->size[0] + 2.0);
  result = b_sig2_w->size[0];
  if (phi->size[0] + 2 > muIntScalarMax_sint32(input_sizes_idx_1, result)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((phi->size[0] + 2) * (phi->size[0] + 2) != b_sig2_w->size[0]) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &f_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  /*  km by km 초기값으로 마지막 관측치 */
  input_sizes[0] = phi->size[0] + 2;
  input_sizes_idx_1 = phi->size[0] + 2;
  i = y->size[0] * y->size[1];
  y->size[0] = phi->size[0] + 2;
  y->size[1] = phi->size[0] + 2;
  emxEnsureCapacity_real_T(&b_st, y, i, &wc_emlrtRTEI);
  F_data = y->data;
  loop_ub = phi->size[0] + 2;
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = input_sizes[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      F_data[i1 + y->size[0] * i] =
          (varargin_1_data[i1 + input_sizes[0] * i] +
           varargin_1_data[i + input_sizes_idx_1 * i1]) /
          2.0;
    }
  }
  c_st.site = &rb_emlrtRSI;
  cholmod(&c_st, y, cP_tt);
  /*  km by km */
  if ((data->size[0] < 1) || (data->size[0] > f_ttm->size[0])) {
    emlrtDynamicBoundsCheckR2012b(data->size[0], 1, f_ttm->size[0],
                                  &cb_emlrtBCI, &b_st);
  }
  loop_ub = f_ttm->size[1];
  i = f_tt->size[0];
  f_tt->size[0] = f_ttm->size[1];
  emxEnsureCapacity_real_T(&b_st, f_tt, i, &yc_emlrtRTEI);
  f_tt_data = f_tt->data;
  for (i = 0; i < loop_ub; i++) {
    f_tt_data[i] = f_ttm_data[(data->size[0] + f_ttm->size[0] * i) - 1];
  }
  /*  km by 1 */
  c_st.site = &sb_emlrtRSI;
  d_st.site = &sb_emlrtRSI;
  randn(&d_st, (real_T)phi->size[0] + 2.0, f_tl);
  d_st.site = &gd_emlrtRSI;
  dynamic_size_checks(&d_st, cP_tt, f_tl, cP_tt->size[0], f_tl->size[0]);
  d_st.site = &fd_emlrtRSI;
  g_mtimes(&d_st, cP_tt, f_tl, b_sig2_w);
  varargin_1_data = b_sig2_w->data;
  if ((f_tt->size[0] != b_sig2_w->size[0]) &&
      ((f_tt->size[0] != 1) && (b_sig2_w->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(f_tt->size[0], b_sig2_w->size[0], &m_emlrtECI,
                                &b_st);
  }
  if (f_tt->size[0] == b_sig2_w->size[0]) {
    loop_ub = f_tt->size[0];
    for (i = 0; i < loop_ub; i++) {
      f_tt_data[i] += varargin_1_data[i];
    }
  } else {
    c_st.site = &sb_emlrtRSI;
    c_plus(&c_st, f_tt, b_sig2_w);
    f_tt_data = f_tt->data;
  }
  /*  km by 1 */
  if (data->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(data->size[0], 1, data->size[0], &fb_emlrtBCI,
                                  &b_st);
  }
  c_result[0] = 1;
  c_result[1] = phi->size[0] + 2;
  input_sizes[0] = 1;
  input_sizes[1] = f_tt->size[0];
  emlrtSubAssignSizeCheckR2012b(&c_result[0], 2, &input_sizes[0], 2,
                                &r_emlrtECI, &b_st);
  loop_ub = f_tt->size[0];
  for (i = 0; i < loop_ub; i++) {
    P_tl_data[(data->size[0] + P_tl->size[0] * i) - 1] = f_tt_data[i];
  }
  /*  1 by by km 마지막 기의 은닉인자를 sampling */
  sizes_idx_1 = data->size[0] - 1;
  /*   time index */
  if (sizes_idx_1 >= 1) {
    c_result[0] = 1;
  }
  sizes_idx_1 = data->size[0] - 1;
  while (sizes_idx_1 >= 1) {
    if (sizes_idx_1 > f_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1, 1, f_ttm->size[0],
                                    &db_emlrtBCI, &b_st);
    }
    loop_ub = f_ttm->size[1];
    i = f_tt->size[0];
    f_tt->size[0] = f_ttm->size[1];
    emxEnsureCapacity_real_T(&b_st, f_tt, i, &ed_emlrtRTEI);
    f_tt_data = f_tt->data;
    for (i = 0; i < loop_ub; i++) {
      f_tt_data[i] = f_ttm_data[(sizes_idx_1 + f_ttm->size[0] * i) - 1];
    }
    /*  km3 by 1 */
    if (sizes_idx_1 > P_ttm->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1, 1, P_ttm->size[0],
                                    &eb_emlrtBCI, &b_st);
    }
    loop_ub = P_ttm->size[1];
    i = b_sig2_w->size[0];
    b_sig2_w->size[0] = P_ttm->size[1];
    emxEnsureCapacity_real_T(&b_st, b_sig2_w, i, &hd_emlrtRTEI);
    varargin_1_data = b_sig2_w->data;
    for (i = 0; i < loop_ub; i++) {
      varargin_1_data[i] = P_ttm_data[(sizes_idx_1 + P_ttm->size[0] * i) - 1];
    }
    c_st.site = &tb_emlrtRSI;
    input_sizes_idx_1 = b_sig2_w->size[0];
    d_st.site = &ld_emlrtRSI;
    e_st.site = &kd_emlrtRSI;
    assertValidSizeArg(&e_st, (real_T)(p - 2) + 2.0);
    e_st.site = &kd_emlrtRSI;
    assertValidSizeArg(&e_st, (real_T)(p - 2) + 2.0);
    result = b_sig2_w->size[0];
    if (p > muIntScalarMax_sint32(input_sizes_idx_1, result)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &e_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    if (p * p != b_sig2_w->size[0]) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &f_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
          "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }
    /*  km3 by km3 */
    c_st.site = &ub_emlrtRSI;
    c_sig2_w = *b_sig2_w;
    b_input_sizes[0] = p;
    b_input_sizes[1] = p;
    c_sig2_w.size = &b_input_sizes[0];
    c_sig2_w.numDimensions = 2;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, F, &c_sig2_w, F->size[1], p);
    c_sig2_w = *b_sig2_w;
    c_input_sizes[0] = p;
    c_input_sizes[1] = p;
    c_sig2_w.size = &c_input_sizes[0];
    c_sig2_w.numDimensions = 2;
    d_st.site = &fd_emlrtRSI;
    b_mtimes(&d_st, F, &c_sig2_w, y);
    c_st.site = &ub_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, y, F, y->size[1], F->size[1]);
    d_st.site = &fd_emlrtRSI;
    c_mtimes(&d_st, y, F, cP_tt);
    cP_tt_data = cP_tt->data;
    if ((cP_tt->size[0] != Sigma->size[0]) &&
        ((cP_tt->size[0] != 1) && (Sigma->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], Sigma->size[0], &n_emlrtECI,
                                  &b_st);
    }
    if ((cP_tt->size[1] != Sigma->size[1]) &&
        ((cP_tt->size[1] != 1) && (Sigma->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], Sigma->size[1], &o_emlrtECI,
                                  &b_st);
    }
    if ((cP_tt->size[0] == Sigma->size[0]) &&
        (cP_tt->size[1] == Sigma->size[1])) {
      loop_ub = cP_tt->size[0] * cP_tt->size[1];
      for (i = 0; i < loop_ub; i++) {
        cP_tt_data[i] += Sigma_data[i];
      }
    } else {
      c_st.site = &ub_emlrtRSI;
      b_plus(&c_st, cP_tt, Sigma);
      cP_tt_data = cP_tt->data;
    }
    /*  km by km */
    if ((cP_tt->size[0] != cP_tt->size[1]) &&
        ((cP_tt->size[0] != 1) && (cP_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[0], cP_tt->size[1], &p_emlrtECI,
                                  &b_st);
    }
    if ((cP_tt->size[0] != cP_tt->size[1]) &&
        ((cP_tt->size[1] != 1) && (cP_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(cP_tt->size[1], cP_tt->size[0], &q_emlrtECI,
                                  &b_st);
    }
    if (cP_tt->size[0] == cP_tt->size[1]) {
      i = y->size[0] * y->size[1];
      y->size[0] = cP_tt->size[0];
      y->size[1] = cP_tt->size[1];
      emxEnsureCapacity_real_T(&b_st, y, i, &kd_emlrtRTEI);
      F_data = y->data;
      loop_ub = cP_tt->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = cP_tt->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          F_data[i1 + y->size[0] * i] =
              0.5 * (cP_tt_data[i1 + cP_tt->size[0] * i] +
                     cP_tt_data[i + cP_tt->size[0] * i1]);
        }
      }
      c_st.site = &vb_emlrtRSI;
      invpd(&c_st, y, cP_tt);
    } else {
      c_st.site = &vb_emlrtRSI;
      e_binary_expand_op(&c_st, cP_tt, vb_emlrtRSI);
    }
    /*  km by km */
    if (sizes_idx_1 + 1 > P_tl->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1 + 1, 1, P_tl->size[0],
                                    &gb_emlrtBCI, &b_st);
    }
    c_st.site = &wb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    dynamic_size_checks(&d_st, F, f_tt, F->size[1], f_tt->size[0]);
    d_st.site = &fd_emlrtRSI;
    mtimes(&d_st, F, f_tt, f_tl);
    F_data = f_tl->data;
    if ((f_tl->size[0] != P_tl->size[1]) &&
        ((P_tl->size[1] != 1) && (f_tl->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(P_tl->size[1], f_tl->size[0], &s_emlrtECI,
                                  &b_st);
    }
    if (f_tl->size[0] == P_tl->size[1]) {
      loop_ub = P_tl->size[1];
      i = Kalgain->size[0];
      Kalgain->size[0] = P_tl->size[1];
      emxEnsureCapacity_real_T(&b_st, Kalgain, i, &ld_emlrtRTEI);
      vec_P_tt_data = Kalgain->data;
      for (i = 0; i < loop_ub; i++) {
        vec_P_tt_data[i] =
            P_tl_data[sizes_idx_1 + P_tl->size[0] * i] - F_data[i];
      }
    } else {
      c_st.site = &wb_emlrtRSI;
      d_binary_expand_op(&c_st, Kalgain, P_tl, sizes_idx_1, f_tl);
    }
    /*  km by 1 */
    c_st.site = &xb_emlrtRSI;
    c_sig2_w = *b_sig2_w;
    d_input_sizes[0] = p;
    d_input_sizes[1] = p;
    c_sig2_w.size = &d_input_sizes[0];
    c_sig2_w.numDimensions = 2;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, &c_sig2_w, F, p, F->size[1]);
    c_sig2_w = *b_sig2_w;
    e_input_sizes[0] = p;
    e_input_sizes[1] = p;
    c_sig2_w.size = &e_input_sizes[0];
    c_sig2_w.numDimensions = 2;
    d_st.site = &fd_emlrtRSI;
    c_mtimes(&d_st, &c_sig2_w, F, y);
    c_st.site = &xb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, y, cP_tt, y->size[1], cP_tt->size[0]);
    d_st.site = &fd_emlrtRSI;
    b_mtimes(&d_st, y, cP_tt, vec_P_tt);
    /*  km3 by km */
    c_st.site = &yb_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    dynamic_size_checks(&d_st, vec_P_tt, Kalgain, vec_P_tt->size[1],
                        Kalgain->size[0]);
    d_st.site = &fd_emlrtRSI;
    mtimes(&d_st, vec_P_tt, Kalgain, f_tl);
    F_data = f_tl->data;
    if ((f_tt->size[0] != f_tl->size[0]) &&
        ((f_tt->size[0] != 1) && (f_tl->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tt->size[0], f_tl->size[0], &t_emlrtECI,
                                  &b_st);
    }
    if (f_tt->size[0] == f_tl->size[0]) {
      loop_ub = f_tt->size[0];
      for (i = 0; i < loop_ub; i++) {
        f_tt_data[i] += F_data[i];
      }
    } else {
      c_st.site = &yb_emlrtRSI;
      c_plus(&c_st, f_tt, f_tl);
      f_tt_data = f_tt->data;
    }
    /*  km3 by 1 */
    c_st.site = &ac_emlrtRSI;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, vec_P_tt, F, vec_P_tt->size[1], F->size[0]);
    d_st.site = &fd_emlrtRSI;
    b_mtimes(&d_st, vec_P_tt, F, y);
    c_st.site = &ac_emlrtRSI;
    c_sig2_w = *b_sig2_w;
    f_input_sizes[0] = p;
    f_input_sizes[1] = p;
    c_sig2_w.size = &f_input_sizes[0];
    c_sig2_w.numDimensions = 2;
    d_st.site = &gd_emlrtRSI;
    b_dynamic_size_checks(&d_st, y, &c_sig2_w, y->size[1], p);
    c_sig2_w = *b_sig2_w;
    g_input_sizes[0] = p;
    g_input_sizes[1] = p;
    c_sig2_w.size = &g_input_sizes[0];
    c_sig2_w.numDimensions = 2;
    d_st.site = &fd_emlrtRSI;
    b_mtimes(&d_st, y, &c_sig2_w, vec_P_tt);
    /*  km3 by km3 */
    if ((p != vec_P_tt->size[0]) && ((p != 1) && (vec_P_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(p, vec_P_tt->size[0], &u_emlrtECI, &b_st);
    }
    if ((p != vec_P_tt->size[1]) && ((p != 1) && (vec_P_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(p, vec_P_tt->size[1], &v_emlrtECI, &b_st);
    }
    if ((p == vec_P_tt->size[0]) && (p == vec_P_tt->size[1])) {
      loop_ub = p * p - 1;
      i = vec_P_tt->size[0] * vec_P_tt->size[1];
      vec_P_tt->size[0] = p;
      vec_P_tt->size[1] = p;
      emxEnsureCapacity_real_T(&b_st, vec_P_tt, i, &md_emlrtRTEI);
      vec_P_tt_data = vec_P_tt->data;
      for (i = 0; i <= loop_ub; i++) {
        vec_P_tt_data[i] = varargin_1_data[i] - vec_P_tt_data[i];
      }
    } else {
      c_st.site = &ti_emlrtRSI;
      c_binary_expand_op(&c_st, vec_P_tt, b_sig2_w, p);
      vec_P_tt_data = vec_P_tt->data;
    }
    if ((vec_P_tt->size[0] != vec_P_tt->size[1]) &&
        ((vec_P_tt->size[0] != 1) && (vec_P_tt->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(vec_P_tt->size[0], vec_P_tt->size[1],
                                  &w_emlrtECI, &b_st);
    }
    if ((vec_P_tt->size[0] != vec_P_tt->size[1]) &&
        ((vec_P_tt->size[1] != 1) && (vec_P_tt->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(vec_P_tt->size[1], vec_P_tt->size[0],
                                  &x_emlrtECI, &b_st);
    }
    if (vec_P_tt->size[0] == vec_P_tt->size[1]) {
      i = y->size[0] * y->size[1];
      y->size[0] = vec_P_tt->size[0];
      y->size[1] = vec_P_tt->size[1];
      emxEnsureCapacity_real_T(&b_st, y, i, &nd_emlrtRTEI);
      F_data = y->data;
      loop_ub = vec_P_tt->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = vec_P_tt->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          F_data[i1 + y->size[0] * i] =
              (vec_P_tt_data[i1 + vec_P_tt->size[0] * i] +
               vec_P_tt_data[i + vec_P_tt->size[0] * i1]) /
              2.0;
        }
      }
      i = vec_P_tt->size[0] * vec_P_tt->size[1];
      vec_P_tt->size[0] = y->size[0];
      vec_P_tt->size[1] = y->size[1];
      emxEnsureCapacity_real_T(&b_st, vec_P_tt, i, &od_emlrtRTEI);
      vec_P_tt_data = vec_P_tt->data;
      loop_ub = y->size[0] * y->size[1];
      for (i = 0; i < loop_ub; i++) {
        vec_P_tt_data[i] = F_data[i];
      }
    } else {
      c_st.site = &si_emlrtRSI;
      b_binary_expand_op(&c_st, vec_P_tt);
    }
    c_st.site = &bc_emlrtRSI;
    cholmod(&c_st, vec_P_tt, cP_tt);
    c_st.site = &cc_emlrtRSI;
    d_st.site = &cc_emlrtRSI;
    randn(&d_st, (real_T)(p - 2) + 2.0, f_tl);
    d_st.site = &gd_emlrtRSI;
    dynamic_size_checks(&d_st, cP_tt, f_tl, cP_tt->size[0], f_tl->size[0]);
    d_st.site = &fd_emlrtRSI;
    g_mtimes(&d_st, cP_tt, f_tl, b_sig2_w);
    varargin_1_data = b_sig2_w->data;
    if ((f_tt->size[0] != b_sig2_w->size[0]) &&
        ((f_tt->size[0] != 1) && (b_sig2_w->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(f_tt->size[0], b_sig2_w->size[0], &y_emlrtECI,
                                  &b_st);
    }
    if (f_tt->size[0] == b_sig2_w->size[0]) {
      loop_ub = f_tt->size[0];
      for (i = 0; i < loop_ub; i++) {
        f_tt_data[i] += varargin_1_data[i];
      }
    } else {
      c_st.site = &cc_emlrtRSI;
      c_plus(&c_st, f_tt, b_sig2_w);
      f_tt_data = f_tt->data;
    }
    if (sizes_idx_1 > P_tl->size[0]) {
      emlrtDynamicBoundsCheckR2012b(sizes_idx_1, 1, P_tl->size[0], &hb_emlrtBCI,
                                    &b_st);
    }
    c_result[1] = P_tl->size[1];
    input_sizes[0] = 1;
    input_sizes[1] = f_tt->size[0];
    emlrtSubAssignSizeCheckR2012b(&c_result[0], 2, &input_sizes[0], 2,
                                  &ab_emlrtECI, &b_st);
    loop_ub = f_tt->size[0];
    for (i = 0; i < loop_ub; i++) {
      P_tl_data[(sizes_idx_1 + P_tl->size[0] * i) - 1] = f_tt_data[i];
    }
    /*  1 by by km */
    sizes_idx_1--;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }
  }
  emxFree_real_T(&b_st, &b_sig2_w);
  emxFree_real_T(&b_st, &y);
  emxFree_real_T(&b_st, &cP_tt);
  emxFree_real_T(&b_st, &vec_P_tt);
  emxFree_real_T(&b_st, &f_tt);
  emxFree_real_T(&b_st, &Kalgain);
  emxFree_real_T(&b_st, &f_tl);
  emxFree_real_T(&b_st, &Sigma);
  emxFree_real_T(&b_st, &F);
  emxFree_real_T(&b_st, &P_ttm);
  emxFree_real_T(&b_st, &f_ttm);
  loop_ub = P_tl->size[0];
  i = Fp->size[0];
  Fp->size[0] = P_tl->size[0];
  emxEnsureCapacity_real_T(&b_st, Fp, i, &dd_emlrtRTEI);
  F_data = Fp->data;
  for (i = 0; i < loop_ub; i++) {
    F_data[i] = P_tl_data[i];
  }
  loop_ub = P_tl->size[0];
  i = Fc->size[0];
  Fc->size[0] = P_tl->size[0];
  emxEnsureCapacity_real_T(&b_st, Fc, i, &fd_emlrtRTEI);
  F_data = Fc->data;
  for (i = 0; i < loop_ub; i++) {
    F_data[i] = P_tl_data[i + P_tl->size[0]];
  }
  if (P_tl->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(P_tl->size[1], 1, P_tl->size[1], &ib_emlrtBCI,
                                  &b_st);
  }
  loop_ub = P_tl->size[0];
  i = Fx->size[0];
  Fx->size[0] = P_tl->size[0];
  emxEnsureCapacity_real_T(&b_st, Fx, i, &id_emlrtRTEI);
  F_data = Fx->data;
  for (i = 0; i < loop_ub; i++) {
    F_data[i] = P_tl_data[i + P_tl->size[0] * (P_tl->size[1] - 1)];
  }
  emxFree_real_T(&b_st, &P_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void Gen_yc(const emlrtStack *sp, const emxArray_real_T *F2,
                   const emxArray_real_T *phi0,
                   const emxArray_real_T *Prec_PHI0, real_T e01, real_T e02,
                   real_T sig2_e, const emxArray_real_T *phim, real_T d,
                   real_T iter, emxArray_real_T *phi, real_T *sig2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_creal_T *eigF;
  emxArray_real_T *X;
  emxArray_real_T *absolute;
  emxArray_real_T *b1;
  emxArray_real_T *b_phi;
  emxArray_real_T *imagine;
  emxArray_real_T *r;
  emxArray_real_T *test;
  emxArray_real_T *varargin_2;
  emxArray_real_T *varb1;
  emxArray_real_T *varb1_inv;
  creal_T *eigF_data;
  const real_T *F2_data;
  const real_T *Prec_PHI0_data;
  const real_T *phi0_data;
  const real_T *phim_data;
  real_T b_d;
  real_T ex;
  real_T sig2_inv;
  real_T *X_data;
  real_T *absolute_data;
  real_T *b1_data;
  real_T *phi_data;
  real_T *varb1_data;
  real_T *varb1_inv_data;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T last;
  int32_T loop_ub;
  int32_T p;
  int32_T result;
  int32_T result_size_idx_1_tmp;
  int32_T sizes_idx_1;
  int8_T input_sizes_idx_0;
  boolean_T empty_non_axis_sizes;
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
  phim_data = phim->data;
  Prec_PHI0_data = Prec_PHI0->data;
  phi0_data = phi0->data;
  F2_data = F2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  p = phi0->size[0] - 1;
  if (phi0->size[0] + 1U > (uint32_T)F2->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    if (((int32_T)(phi0->size[0] + 1U) < 1) ||
        ((int32_T)(phi0->size[0] + 1U) > F2->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(phi0->size[0] + 1U), 1,
                                    F2->size[0], &bd_emlrtBCI, (emlrtCTX)sp);
    }
    i = phi0->size[0];
    if (F2->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(F2->size[0], 1, F2->size[0], &cd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = F2->size[0];
  }
  emxInit_real_T(sp, &X, 2, &jf_emlrtRTEI);
  /*  종속변수 */
  i2 = F2->size[0] - phi0->size[0];
  if (i2 < 0) {
    emlrtNonNegativeCheckR2012b(i2, &eb_emlrtDCI, (emlrtCTX)sp);
  }
  i3 = X->size[0] * X->size[1];
  X->size[0] = i2;
  X->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, X, i3, &jf_emlrtRTEI);
  X_data = X->data;
  i2 = F2->size[0] - phi0->size[0];
  if (i2 < 0) {
    emlrtNonNegativeCheckR2012b(i2, &db_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = i2 * phi0->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    X_data[i2] = 0.0;
  }
  i2 = phi0->size[0];
  for (last = 0; last < i2; last++) {
    i3 = (int32_T)(((real_T)(p + 1) + 1.0) - ((real_T)last + 1.0));
    sizes_idx_1 = (F2->size[0] - last) - 1;
    if (i3 > sizes_idx_1) {
      i3 = 0;
      sizes_idx_1 = 0;
    } else {
      if ((i3 < 1) || (i3 > F2->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, F2->size[0], &dd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i3--;
      if ((sizes_idx_1 < 1) || (sizes_idx_1 > F2->size[0])) {
        emlrtDynamicBoundsCheckR2012b(sizes_idx_1, 1, F2->size[0], &ed_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    if (last + 1 > X->size[1]) {
      emlrtDynamicBoundsCheckR2012b(last + 1, 1, X->size[1], &fd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = sizes_idx_1 - i3;
    emlrtSubAssignSizeCheckR2012b(&X->size[0], 1, &loop_ub, 1, &kb_emlrtECI,
                                  (emlrtCTX)sp);
    for (sizes_idx_1 = 0; sizes_idx_1 < loop_ub; sizes_idx_1++) {
      X_data[sizes_idx_1 + X->size[0] * last] = F2_data[i3 + sizes_idx_1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &varb1_inv, 2, &kf_emlrtRTEI);
  sig2_inv = 1.0 / sig2_e;
  st.site = &cf_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  b_dynamic_size_checks(&b_st, X, X, X->size[0], X->size[0]);
  b_st.site = &fd_emlrtRSI;
  h_mtimes(&b_st, X, X, varb1_inv);
  varb1_inv_data = varb1_inv->data;
  loop_ub = varb1_inv->size[0] * varb1_inv->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    varb1_inv_data[i2] *= sig2_inv;
  }
  if ((Prec_PHI0->size[0] != varb1_inv->size[0]) &&
      ((Prec_PHI0->size[0] != 1) && (varb1_inv->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Prec_PHI0->size[0], varb1_inv->size[0],
                                &lb_emlrtECI, (emlrtCTX)sp);
  }
  if ((Prec_PHI0->size[1] != varb1_inv->size[1]) &&
      ((Prec_PHI0->size[1] != 1) && (varb1_inv->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(Prec_PHI0->size[1], varb1_inv->size[1],
                                &mb_emlrtECI, (emlrtCTX)sp);
  }
  if ((Prec_PHI0->size[0] == varb1_inv->size[0]) &&
      (Prec_PHI0->size[1] == varb1_inv->size[1])) {
    loop_ub = Prec_PHI0->size[0] * Prec_PHI0->size[1];
    i2 = varb1_inv->size[0] * varb1_inv->size[1];
    varb1_inv->size[0] = Prec_PHI0->size[0];
    varb1_inv->size[1] = Prec_PHI0->size[1];
    emxEnsureCapacity_real_T(sp, varb1_inv, i2, &kf_emlrtRTEI);
    varb1_inv_data = varb1_inv->data;
    for (i2 = 0; i2 < loop_ub; i2++) {
      varb1_inv_data[i2] += Prec_PHI0_data[i2];
    }
  } else {
    st.site = &cf_emlrtRSI;
    d_plus(&st, varb1_inv, Prec_PHI0);
    varb1_inv_data = varb1_inv->data;
  }
  if ((varb1_inv->size[0] != varb1_inv->size[1]) &&
      ((varb1_inv->size[1] != 1) && (varb1_inv->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(varb1_inv->size[1], varb1_inv->size[0],
                                &nb_emlrtECI, (emlrtCTX)sp);
  }
  if ((varb1_inv->size[0] != varb1_inv->size[1]) &&
      ((varb1_inv->size[0] != 1) && (varb1_inv->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(varb1_inv->size[0], varb1_inv->size[1],
                                &ob_emlrtECI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &varb1, 2, &yf_emlrtRTEI);
  if (varb1_inv->size[0] == varb1_inv->size[1]) {
    emxInit_real_T(sp, &r, 2, &kd_emlrtRTEI);
    i2 = r->size[0] * r->size[1];
    r->size[0] = varb1_inv->size[1];
    r->size[1] = varb1_inv->size[0];
    emxEnsureCapacity_real_T(sp, r, i2, &kd_emlrtRTEI);
    X_data = r->data;
    loop_ub = varb1_inv->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      last = varb1_inv->size[1];
      for (i3 = 0; i3 < last; i3++) {
        X_data[i3 + r->size[0] * i2] =
            0.5 * (varb1_inv_data[i2 + varb1_inv->size[0] * i3] +
                   varb1_inv_data[i3 + varb1_inv->size[0] * i2]);
      }
    }
    st.site = &df_emlrtRSI;
    invpd(&st, r, varb1);
    varb1_data = varb1->data;
    emxFree_real_T(sp, &r);
  } else {
    st.site = &df_emlrtRSI;
    j_binary_expand_op(&st, varb1, df_emlrtRSI, varb1_inv);
    varb1_data = varb1->data;
  }
  emxInit_real_T(sp, &test, 1, &mf_emlrtRTEI);
  emxInit_real_T(sp, &imagine, 1, &cg_emlrtRTEI);
  emxInit_real_T(sp, &absolute, 1, &dg_emlrtRTEI);
  /*  full conditional variance */
  st.site = &ef_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  dynamic_size_checks(&b_st, Prec_PHI0, phi0, Prec_PHI0->size[1],
                      phi0->size[0]);
  b_st.site = &fd_emlrtRSI;
  mtimes(&b_st, Prec_PHI0, phi0, imagine);
  X_data = imagine->data;
  st.site = &ef_emlrtRSI;
  loop_ub = i1 - i;
  i2 = absolute->size[0];
  absolute->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, absolute, i2, &lf_emlrtRTEI);
  absolute_data = absolute->data;
  for (i2 = 0; i2 < loop_ub; i2++) {
    absolute_data[i2] = F2_data[i + i2];
  }
  b_st.site = &gd_emlrtRSI;
  dynamic_size_checks(&b_st, X, absolute, X->size[0], i1 - i);
  i2 = absolute->size[0];
  absolute->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, absolute, i2, &lf_emlrtRTEI);
  absolute_data = absolute->data;
  for (i2 = 0; i2 < loop_ub; i2++) {
    absolute_data[i2] = F2_data[i + i2];
  }
  b_st.site = &fd_emlrtRSI;
  g_mtimes(&b_st, X, absolute, test);
  varb1_inv_data = test->data;
  last = test->size[0];
  for (i2 = 0; i2 < last; i2++) {
    varb1_inv_data[i2] *= sig2_inv;
  }
  if ((imagine->size[0] != test->size[0]) &&
      ((imagine->size[0] != 1) && (test->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(imagine->size[0], test->size[0], &pb_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &ef_emlrtRSI;
  if (imagine->size[0] == test->size[0]) {
    last = imagine->size[0];
    for (i2 = 0; i2 < last; i2++) {
      X_data[i2] += varb1_inv_data[i2];
    }
  } else {
    b_st.site = &ef_emlrtRSI;
    c_plus(&b_st, imagine, test);
  }
  emxInit_real_T(&st, &b1, 1, &ag_emlrtRTEI);
  b_st.site = &gd_emlrtRSI;
  dynamic_size_checks(&b_st, varb1, imagine, varb1->size[1], imagine->size[0]);
  b_st.site = &fd_emlrtRSI;
  mtimes(&b_st, varb1, imagine, b1);
  b1_data = b1->data;
  /*  full conditional mean */
  i2 = test->size[0];
  test->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, test, i2, &mf_emlrtRTEI);
  varb1_inv_data = test->data;
  last = phi0->size[0];
  for (i2 = 0; i2 < last; i2++) {
    varb1_inv_data[i2] = 0.0;
  }
  sig2_inv = 0.0;
  i2 = phi->size[0];
  phi->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phi, i2, &nf_emlrtRTEI);
  phi_data = phi->data;
  last = phi0->size[0];
  for (i2 = 0; i2 < last; i2++) {
    phi_data[i2] = 0.0;
  }
  emxInit_creal_T(sp, &eigF, &bg_emlrtRTEI);
  emxInit_real_T(sp, &varargin_2, 2, &rf_emlrtRTEI);
  emxInit_real_T(sp, &b_phi, 2, &sf_emlrtRTEI);
  do {
    exitg1 = 0;
    st.site = &ff_emlrtRSI;
    b_st.site = &rf_emlrtRSI;
    c_st.site = &sf_emlrtRSI;
    d_st.site = &tf_emlrtRSI;
    if (test->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &o_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &uf_emlrtRSI;
    f_st.site = &vf_emlrtRSI;
    last = test->size[0];
    if (test->size[0] <= 2) {
      if (test->size[0] == 1) {
        ex = varb1_inv_data[0];
      } else if (varb1_inv_data[0] > varb1_inv_data[1]) {
        ex = varb1_inv_data[1];
      } else {
        ex = varb1_inv_data[0];
      }
    } else {
      g_st.site = &ne_emlrtRSI;
      g_st.site = &me_emlrtRSI;
      ex = varb1_inv_data[0];
      h_st.site = &pe_emlrtRSI;
      if (test->size[0] > 2147483646) {
        i_st.site = &w_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (sizes_idx_1 = 2; sizes_idx_1 <= last; sizes_idx_1++) {
        b_d = varb1_inv_data[sizes_idx_1 - 1];
        if (ex > b_d) {
          ex = b_d;
        }
      }
    }
    if (ex == 0.0) {
      st.site = &gf_emlrtRSI;
      i2 = varb1_inv->size[0] * varb1_inv->size[1];
      varb1_inv->size[0] = varb1->size[0];
      varb1_inv->size[1] = varb1->size[1];
      emxEnsureCapacity_real_T(&st, varb1_inv, i2, &of_emlrtRTEI);
      varb1_inv_data = varb1_inv->data;
      last = varb1->size[0] * varb1->size[1];
      for (i2 = 0; i2 < last; i2++) {
        varb1_inv_data[i2] = varb1_data[i2];
      }
      b_st.site = &wf_emlrtRSI;
      cholesky(&b_st, varb1_inv);
      st.site = &gf_emlrtRSI;
      b_st.site = &gf_emlrtRSI;
      randn(&b_st, p + 1, imagine);
      b_st.site = &gd_emlrtRSI;
      dynamic_size_checks(&b_st, varb1_inv, imagine, varb1_inv->size[0],
                          imagine->size[0]);
      b_st.site = &fd_emlrtRSI;
      g_mtimes(&b_st, varb1_inv, imagine, phi);
      if ((b1->size[0] != phi->size[0]) &&
          ((b1->size[0] != 1) && (phi->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(b1->size[0], phi->size[0], &qb_emlrtECI,
                                    (emlrtCTX)sp);
      }
      if (b1->size[0] == phi->size[0]) {
        i2 = phi->size[0];
        phi->size[0] = b1->size[0];
        emxEnsureCapacity_real_T(sp, phi, i2, &qf_emlrtRTEI);
        phi_data = phi->data;
        last = b1->size[0];
        for (i2 = 0; i2 < last; i2++) {
          phi_data[i2] += b1_data[i2];
        }
      } else {
        st.site = &gf_emlrtRSI;
        plus(&st, phi, b1);
        phi_data = phi->data;
      }
      /*  beta sampling 하기 */
      st.site = &hf_emlrtRSI;
      b_st.site = &hf_emlrtRSI;
      eye(&b_st, (real_T)(p + 1) - 1.0, varb1_inv);
      varb1_inv_data = varb1_inv->data;
      if (!((real_T)(p + 1) - 1.0 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(-1.0, &fb_emlrtDCI, &st);
      }
      b_st.site = &cd_emlrtRSI;
      if ((varb1_inv->size[0] != 0) && (varb1_inv->size[1] != 0)) {
        result = varb1_inv->size[0];
      } else if (p != 0) {
        result = p;
      } else {
        result = varb1_inv->size[0];
      }
      c_st.site = &dd_emlrtRSI;
      if ((varb1_inv->size[0] != result) &&
          ((varb1_inv->size[0] != 0) && (varb1_inv->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &g_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((p != result) && (p != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &g_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes ||
          ((varb1_inv->size[0] != 0) && (varb1_inv->size[1] != 0))) {
        last = varb1_inv->size[1];
      } else {
        last = 0;
      }
      if (empty_non_axis_sizes || (p != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      result_size_idx_1_tmp = last + sizes_idx_1;
      st.site = &hf_emlrtRSI;
      i2 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = result;
      varargin_2->size[1] = result_size_idx_1_tmp;
      emxEnsureCapacity_real_T(&st, varargin_2, i2, &rf_emlrtRTEI);
      X_data = varargin_2->data;
      for (i2 = 0; i2 < last; i2++) {
        for (i3 = 0; i3 < result; i3++) {
          X_data[i3 + varargin_2->size[0] * i2] =
              varb1_inv_data[i3 + result * i2];
        }
      }
      for (i2 = 0; i2 < sizes_idx_1; i2++) {
        for (i3 = 0; i3 < result; i3++) {
          X_data[i3 + varargin_2->size[0] * last] = 0.0;
        }
      }
      b_st.site = &cd_emlrtRSI;
      if (phi->size[0] != 0) {
        result = phi->size[0];
      } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
        result = result_size_idx_1_tmp;
      } else {
        if (phi->size[0] > 0) {
          result = phi->size[0];
        } else {
          result = 0;
        }
        if (result_size_idx_1_tmp > result) {
          result = result_size_idx_1_tmp;
        }
      }
      c_st.site = &dd_emlrtRSI;
      if ((phi->size[0] != result) && (phi->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &g_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((result_size_idx_1_tmp != result) &&
          ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &g_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || (phi->size[0] != 0)) {
        input_sizes_idx_0 = 1;
      } else {
        input_sizes_idx_0 = 0;
      }
      if (empty_non_axis_sizes ||
          ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
        sizes_idx_1 = varargin_2->size[0];
      } else {
        sizes_idx_1 = 0;
      }
      i2 = b_phi->size[0] * b_phi->size[1];
      b_phi->size[0] = 1;
      b_phi->size[1] = phi->size[0];
      emxEnsureCapacity_real_T(sp, b_phi, i2, &sf_emlrtRTEI);
      absolute_data = b_phi->data;
      last = phi->size[0];
      for (i2 = 0; i2 < last; i2++) {
        absolute_data[i2] = phi_data[i2];
      }
      last = input_sizes_idx_0;
      i2 = varb1_inv->size[0] * varb1_inv->size[1];
      varb1_inv->size[0] = input_sizes_idx_0 + sizes_idx_1;
      varb1_inv->size[1] = result;
      emxEnsureCapacity_real_T(sp, varb1_inv, i2, &tf_emlrtRTEI);
      varb1_inv_data = varb1_inv->data;
      for (i2 = 0; i2 < result; i2++) {
        for (i3 = 0; i3 < last; i3++) {
          varb1_inv_data[varb1_inv->size[0] * i2] =
              absolute_data[input_sizes_idx_0 * i2];
        }
      }
      for (i2 = 0; i2 < result; i2++) {
        for (i3 = 0; i3 < sizes_idx_1; i3++) {
          varb1_inv_data[(i3 + input_sizes_idx_0) + varb1_inv->size[0] * i2] =
              X_data[i3 + sizes_idx_1 * i2];
        }
      }
      st.site = &if_emlrtRSI;
      eig(&st, varb1_inv, eigF);
      eigF_data = eigF->data;
      i2 = absolute->size[0];
      absolute->size[0] = eigF->size[0];
      emxEnsureCapacity_real_T(sp, absolute, i2, &uf_emlrtRTEI);
      absolute_data = absolute->data;
      last = eigF->size[0];
      for (i2 = 0; i2 < last; i2++) {
        absolute_data[i2] = eigF_data[i2].im;
      }
      st.site = &jf_emlrtRSI;
      power(&st, absolute, imagine);
      X_data = imagine->data;
      st.site = &kf_emlrtRSI;
      d_abs(&st, eigF, test);
      st.site = &kf_emlrtRSI;
      power(&st, test, absolute);
      absolute_data = absolute->data;
      if ((absolute->size[0] != imagine->size[0]) &&
          ((absolute->size[0] != 1) && (imagine->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(absolute->size[0], imagine->size[0],
                                    &rb_emlrtECI, (emlrtCTX)sp);
      }
      if (absolute->size[0] == imagine->size[0]) {
        last = absolute->size[0];
        for (i2 = 0; i2 < last; i2++) {
          absolute_data[i2] += X_data[i2];
        }
      } else {
        c_plus(sp, absolute, imagine);
      }
      st.site = &lf_emlrtRSI;
      b_sqrt(&st, absolute);
      absolute_data = absolute->data;
      i2 = test->size[0];
      test->size[0] = phi0->size[0];
      emxEnsureCapacity_real_T(sp, test, i2, &vf_emlrtRTEI);
      varb1_inv_data = test->data;
      for (last = 0; last <= p; last++) {
        if (last + 1 > absolute->size[0]) {
          emlrtDynamicBoundsCheckR2012b(last + 1, 1, absolute->size[0],
                                        &ad_emlrtBCI, (emlrtCTX)sp);
        }
        if (absolute_data[last] < 1.0) {
          if (last + 1 > test->size[0]) {
            emlrtDynamicBoundsCheckR2012b(last + 1, 1, test->size[0],
                                          &xc_emlrtBCI, (emlrtCTX)sp);
          }
          varb1_inv_data[last] = 1.0;
        } else {
          if (last + 1 > test->size[0]) {
            emlrtDynamicBoundsCheckR2012b(last + 1, 1, test->size[0],
                                          &yc_emlrtBCI, (emlrtCTX)sp);
          }
          varb1_inv_data[last] = 0.0;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
      st.site = &mf_emlrtRSI;
      b_st.site = &rf_emlrtRSI;
      c_st.site = &sf_emlrtRSI;
      d_st.site = &tf_emlrtRSI;
      if (test->size[0] < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &o_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      e_st.site = &uf_emlrtRSI;
      f_st.site = &vf_emlrtRSI;
      last = test->size[0];
      if (test->size[0] <= 2) {
        if (test->size[0] == 1) {
          ex = varb1_inv_data[0];
        } else if (varb1_inv_data[0] > varb1_inv_data[1]) {
          ex = varb1_inv_data[1];
        } else {
          ex = varb1_inv_data[0];
        }
      } else {
        g_st.site = &ne_emlrtRSI;
        g_st.site = &me_emlrtRSI;
        ex = varb1_inv_data[0];
        h_st.site = &pe_emlrtRSI;
        if (test->size[0] > 2147483646) {
          i_st.site = &w_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (sizes_idx_1 = 2; sizes_idx_1 <= last; sizes_idx_1++) {
          b_d = varb1_inv_data[sizes_idx_1 - 1];
          if (ex > b_d) {
            ex = b_d;
          }
        }
      }
      if ((ex == 0.0) && (sig2_inv > 10.0) && (iter > 1.0)) {
        if (((int32_T)(iter - 1.0) < 1) ||
            ((int32_T)(iter - 1.0) > phim->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(iter - 1.0), 1, phim->size[0],
                                        &gd_emlrtBCI, (emlrtCTX)sp);
        }
        last = phim->size[1];
        i2 = phi->size[0];
        phi->size[0] = phim->size[1];
        emxEnsureCapacity_real_T(sp, phi, i2, &wf_emlrtRTEI);
        phi_data = phi->data;
        for (i2 = 0; i2 < last; i2++) {
          phi_data[i2] =
              phim_data[((int32_T)(iter - 1.0) + phim->size[0] * i2) - 1];
        }
        exitg1 = 1;
      } else {
        st.site = &nf_emlrtRSI;
        b_st.site = &rf_emlrtRSI;
        c_st.site = &sf_emlrtRSI;
        d_st.site = &tf_emlrtRSI;
        e_st.site = &uf_emlrtRSI;
        f_st.site = &vf_emlrtRSI;
        last = test->size[0];
        if (test->size[0] <= 2) {
          if (test->size[0] == 1) {
            ex = varb1_inv_data[0];
          } else if (varb1_inv_data[0] > varb1_inv_data[1]) {
            ex = varb1_inv_data[1];
          } else {
            ex = varb1_inv_data[0];
          }
        } else {
          g_st.site = &ne_emlrtRSI;
          g_st.site = &me_emlrtRSI;
          ex = varb1_inv_data[0];
          h_st.site = &pe_emlrtRSI;
          for (sizes_idx_1 = 2; sizes_idx_1 <= last; sizes_idx_1++) {
            b_d = varb1_inv_data[sizes_idx_1 - 1];
            if (ex > b_d) {
              ex = b_d;
            }
          }
        }
        if ((ex == 0.0) && (sig2_inv > 10.0) && (iter == 1.0)) {
          i2 = phi->size[0];
          phi->size[0] = phi0->size[0];
          emxEnsureCapacity_real_T(sp, phi, i2, &xf_emlrtRTEI);
          phi_data = phi->data;
          last = phi0->size[0];
          for (i2 = 0; i2 < last; i2++) {
            phi_data[i2] = phi0_data[i2];
          }
          exitg1 = 1;
        } else {
          sig2_inv++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  emxFree_real_T(sp, &b_phi);
  emxFree_real_T(sp, &varargin_2);
  emxFree_real_T(sp, &absolute);
  emxFree_real_T(sp, &imagine);
  emxFree_creal_T(sp, &eigF);
  emxFree_real_T(sp, &b1);
  emxFree_real_T(sp, &varb1);
  emxFree_real_T(sp, &varb1_inv);
  st.site = &of_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  dynamic_size_checks(&b_st, X, phi, X->size[1], phi->size[0]);
  b_st.site = &fd_emlrtRSI;
  mtimes(&b_st, X, phi, test);
  emxFree_real_T(sp, &X);
  if ((loop_ub != test->size[0]) && ((loop_ub != 1) && (test->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(loop_ub, test->size[0], &sb_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (loop_ub == test->size[0]) {
    i1 = test->size[0];
    test->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, test, i1, &pf_emlrtRTEI);
    varb1_inv_data = test->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      varb1_inv_data[i1] = F2_data[i + i1] - varb1_inv_data[i1];
    }
  } else {
    st.site = &of_emlrtRSI;
    i_binary_expand_op(&st, test, F2, i, i1 - 1);
  }
  /*  잔차항 */
  st.site = &pf_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  f_dynamic_size_checks(&b_st, test, test, test->size[0], test->size[0]);
  st.site = &qf_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randig(alpha,beta,1,1) */
  /*  E(x) = beta/(alpha-1) */
  /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
  b_st.site = &ih_emlrtRSI;
  /*  Note that */
  /*  Suppose that x = randgam(alpha,beta,1,1) */
  /*  E(x) = alpha/beta */
  /*  Var(x) = alpha/(beta^2) */
  /*  Notice that in matlab alpha = a and beta = 1/b */
  c_st.site = &jh_emlrtRSI;
  sig2_inv = gamrnd(&c_st, (e01 + (real_T)(F2->size[0] - phi0->size[0])) / 2.0,
                    1.0 / ((e02 + d * i_mtimes(test, test)) / 2.0));
  *sig2 = 1.0 / sig2_inv / d;
  emxFree_real_T(sp, &test);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
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

static void b_plus(const emlrtStack *sp, emxArray_real_T *P_tl,
                   const emxArray_real_T *Sigma)
{
  emxArray_real_T *b_P_tl;
  const real_T *Sigma_data;
  real_T *P_tl_data;
  real_T *b_P_tl_data;
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
  P_tl_data = P_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_tl, 2, &vd_emlrtRTEI);
  i = b_P_tl->size[0] * b_P_tl->size[1];
  if (Sigma->size[0] == 1) {
    b_P_tl->size[0] = P_tl->size[0];
  } else {
    b_P_tl->size[0] = Sigma->size[0];
  }
  if (Sigma->size[1] == 1) {
    b_P_tl->size[1] = P_tl->size[1];
  } else {
    b_P_tl->size[1] = Sigma->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_P_tl, i, &vd_emlrtRTEI);
  b_P_tl_data = b_P_tl->data;
  stride_0_0 = (P_tl->size[0] != 1);
  stride_0_1 = (P_tl->size[1] != 1);
  stride_1_0 = (Sigma->size[0] != 1);
  stride_1_1 = (Sigma->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Sigma->size[1] == 1) {
    loop_ub = P_tl->size[1];
  } else {
    loop_ub = Sigma->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Sigma->size[0] == 1) {
      b_loop_ub = P_tl->size[0];
    } else {
      b_loop_ub = Sigma->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_P_tl_data[i1 + b_P_tl->size[0] * i] =
          P_tl_data[i1 * stride_0_0 + P_tl->size[0] * aux_0_1] +
          Sigma_data[i1 * stride_1_0 + Sigma->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = b_P_tl->size[0];
  P_tl->size[1] = b_P_tl->size[1];
  emxEnsureCapacity_real_T(sp, P_tl, i, &vd_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = b_P_tl->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_P_tl->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] = b_P_tl_data[i1 + b_P_tl->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_P_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *diff_y,
                             const emxArray_real_T *F3, int32_T i1)
{
  emxArray_real_T *b_diff_y;
  const real_T *F3_data;
  real_T *b_diff_y_data;
  real_T *diff_y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  F3_data = F3->data;
  diff_y_data = diff_y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_diff_y, 1, &gh_emlrtRTEI);
  i = b_diff_y->size[0];
  if (i1 + 1 == 1) {
    b_diff_y->size[0] = diff_y->size[0];
  } else {
    b_diff_y->size[0] = i1 + 1;
  }
  emxEnsureCapacity_real_T(sp, b_diff_y, i, &gh_emlrtRTEI);
  b_diff_y_data = b_diff_y->data;
  stride_0_0 = (diff_y->size[0] != 1);
  stride_1_0 = (i1 + 1 != 1);
  if (i1 + 1 == 1) {
    loop_ub = diff_y->size[0];
  } else {
    loop_ub = i1 + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_diff_y_data[i] = diff_y_data[i * stride_0_0] - F3_data[i * stride_1_0];
  }
  i = diff_y->size[0];
  diff_y->size[0] = b_diff_y->size[0];
  emxEnsureCapacity_real_T(sp, diff_y, i, &gh_emlrtRTEI);
  diff_y_data = diff_y->data;
  loop_ub = b_diff_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    diff_y_data[i] = b_diff_y_data[i];
  }
  emxFree_real_T(sp, &b_diff_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *vec_P_tt,
                               const emxArray_real_T *r3, int32_T p)
{
  emxArray_real_T *r1;
  const real_T *r;
  real_T *r2;
  real_T *vec_P_tt_data;
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
  r = r3->data;
  vec_P_tt_data = vec_P_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r1, 2, &kh_emlrtRTEI);
  i = r1->size[0] * r1->size[1];
  if (vec_P_tt->size[0] == 1) {
    r1->size[0] = p;
  } else {
    r1->size[0] = vec_P_tt->size[0];
  }
  if (vec_P_tt->size[1] == 1) {
    r1->size[1] = p;
  } else {
    r1->size[1] = vec_P_tt->size[1];
  }
  emxEnsureCapacity_real_T(sp, r1, i, &kh_emlrtRTEI);
  r2 = r1->data;
  stride_0_0 = (p != 1);
  stride_0_1 = (p != 1);
  stride_1_0 = (vec_P_tt->size[0] != 1);
  stride_1_1 = (vec_P_tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (vec_P_tt->size[1] == 1) {
    loop_ub = p;
  } else {
    loop_ub = vec_P_tt->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (vec_P_tt->size[0] == 1) {
      b_loop_ub = p;
    } else {
      b_loop_ub = vec_P_tt->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r2[i1 + r1->size[0] * i] =
          r[i1 * stride_0_0 + p * aux_0_1] -
          vec_P_tt_data[i1 * stride_1_0 + vec_P_tt->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = vec_P_tt->size[0] * vec_P_tt->size[1];
  vec_P_tt->size[0] = r1->size[0];
  vec_P_tt->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(sp, vec_P_tt, i, &kh_emlrtRTEI);
  vec_P_tt_data = vec_P_tt->data;
  loop_ub = r1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      vec_P_tt_data[i1 + vec_P_tt->size[0] * i] = r2[i1 + r1->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[3])
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

static void c_plus(const emlrtStack *sp, emxArray_real_T *f_tt,
                   const emxArray_real_T *r1)
{
  emxArray_real_T *b_f_tt;
  const real_T *r;
  real_T *b_f_tt_data;
  real_T *f_tt_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  r = r1->data;
  f_tt_data = f_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_tt, 1, &jh_emlrtRTEI);
  i = b_f_tt->size[0];
  if (r1->size[0] == 1) {
    b_f_tt->size[0] = f_tt->size[0];
  } else {
    b_f_tt->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_f_tt, i, &jh_emlrtRTEI);
  b_f_tt_data = b_f_tt->data;
  stride_0_0 = (f_tt->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = f_tt->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_f_tt_data[i] = f_tt_data[i * stride_0_0] + r[i * stride_1_0];
  }
  i = f_tt->size[0];
  f_tt->size[0] = b_f_tt->size[0];
  emxEnsureCapacity_real_T(sp, f_tt, i, &jh_emlrtRTEI);
  f_tt_data = f_tt->data;
  loop_ub = b_f_tt->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_tt_data[i] = b_f_tt_data[i];
  }
  emxFree_real_T(sp, &b_f_tt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 0, NULL, (const char_T *)"clc",
                        true, location);
}

static void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Kalgain,
                               const emxArray_real_T *P_tl, int32_T t,
                               const emxArray_real_T *f_tl)
{
  const real_T *P_tl_data;
  const real_T *f_tl_data;
  real_T *Kalgain_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_tl_data = f_tl->data;
  P_tl_data = P_tl->data;
  i = P_tl->size[1];
  stride_0_0 = Kalgain->size[0];
  if (f_tl->size[0] == 1) {
    Kalgain->size[0] = i;
  } else {
    Kalgain->size[0] = f_tl->size[0];
  }
  emxEnsureCapacity_real_T(sp, Kalgain, stride_0_0, &ld_emlrtRTEI);
  Kalgain_data = Kalgain->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (f_tl->size[0] != 1);
  if (f_tl->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = f_tl->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    Kalgain_data[i] = P_tl_data[t + P_tl->size[0] * (i * stride_0_0)] -
                      f_tl_data[i * stride_1_0];
  }
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *m1,
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

static void d_plus(const emlrtStack *sp, emxArray_real_T *varb1_inv,
                   const emxArray_real_T *Prec_PHI0)
{
  emxArray_real_T *b_Prec_PHI0;
  const real_T *Prec_PHI0_data;
  real_T *b_Prec_PHI0_data;
  real_T *varb1_inv_data;
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
  Prec_PHI0_data = Prec_PHI0->data;
  varb1_inv_data = varb1_inv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Prec_PHI0, 2, &mh_emlrtRTEI);
  i = b_Prec_PHI0->size[0] * b_Prec_PHI0->size[1];
  if (varb1_inv->size[0] == 1) {
    b_Prec_PHI0->size[0] = Prec_PHI0->size[0];
  } else {
    b_Prec_PHI0->size[0] = varb1_inv->size[0];
  }
  if (varb1_inv->size[1] == 1) {
    b_Prec_PHI0->size[1] = Prec_PHI0->size[1];
  } else {
    b_Prec_PHI0->size[1] = varb1_inv->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_Prec_PHI0, i, &mh_emlrtRTEI);
  b_Prec_PHI0_data = b_Prec_PHI0->data;
  stride_0_0 = (Prec_PHI0->size[0] != 1);
  stride_0_1 = (Prec_PHI0->size[1] != 1);
  stride_1_0 = (varb1_inv->size[0] != 1);
  stride_1_1 = (varb1_inv->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (varb1_inv->size[1] == 1) {
    loop_ub = Prec_PHI0->size[1];
  } else {
    loop_ub = varb1_inv->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (varb1_inv->size[0] == 1) {
      b_loop_ub = Prec_PHI0->size[0];
    } else {
      b_loop_ub = varb1_inv->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Prec_PHI0_data[i1 + b_Prec_PHI0->size[0] * i] =
          Prec_PHI0_data[i1 * stride_0_0 + Prec_PHI0->size[0] * aux_0_1] +
          varb1_inv_data[i1 * stride_1_0 + varb1_inv->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = varb1_inv->size[0] * varb1_inv->size[1];
  varb1_inv->size[0] = b_Prec_PHI0->size[0];
  varb1_inv->size[1] = b_Prec_PHI0->size[1];
  emxEnsureCapacity_real_T(sp, varb1_inv, i, &mh_emlrtRTEI);
  varb1_inv_data = varb1_inv->data;
  loop_ub = b_Prec_PHI0->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Prec_PHI0->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      varb1_inv_data[i1 + varb1_inv->size[0] * i] =
          b_Prec_PHI0_data[i1 + b_Prec_PHI0->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_Prec_PHI0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *cP_tt,
                               emlrtRSInfo ui_emlrtRSI)
{
  emlrtStack st;
  emxArray_real_T *r;
  real_T *cP_tt_data;
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
  cP_tt_data = cP_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &kd_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (cP_tt->size[1] == 1) {
    r->size[0] = cP_tt->size[0];
  } else {
    r->size[0] = cP_tt->size[1];
  }
  if (cP_tt->size[0] == 1) {
    r->size[1] = cP_tt->size[1];
  } else {
    r->size[1] = cP_tt->size[0];
  }
  emxEnsureCapacity_real_T(sp, r, i, &kd_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (cP_tt->size[0] != 1);
  stride_0_1 = (cP_tt->size[1] != 1);
  stride_1_0 = (cP_tt->size[1] != 1);
  stride_1_1 = (cP_tt->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (cP_tt->size[0] == 1) {
    loop_ub = cP_tt->size[1];
  } else {
    loop_ub = cP_tt->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (cP_tt->size[1] == 1) {
      b_loop_ub = cP_tt->size[0];
    } else {
      b_loop_ub = cP_tt->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (cP_tt_data[i1 * stride_0_0 + cP_tt->size[0] * aux_0_1] +
                 cP_tt_data[aux_1_1 + cP_tt->size[0] * (i1 * stride_1_0)]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &ui_emlrtRSI;
  invpd(&st, r, cP_tt);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
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

static void format(const emlrtStack *sp, const mxArray *m,
                   emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"format", true, location);
}

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *test,
                               const emxArray_real_T *F2, int32_T i1,
                               int32_T i2)
{
  emxArray_real_T *b_F2;
  const real_T *F2_data;
  real_T *b_F2_data;
  real_T *test_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  F2_data = F2->data;
  test_data = test->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_F2, 1, &lh_emlrtRTEI);
  i = b_F2->size[0];
  if (test->size[0] == 1) {
    b_F2->size[0] = (i2 - i1) + 1;
  } else {
    b_F2->size[0] = test->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_F2, i, &lh_emlrtRTEI);
  b_F2_data = b_F2->data;
  stride_0_0 = ((i2 - i1) + 1 != 1);
  stride_1_0 = (test->size[0] != 1);
  if (test->size[0] == 1) {
    loop_ub = (i2 - i1) + 1;
  } else {
    loop_ub = test->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_F2_data[i] = F2_data[i1 + i * stride_0_0] - test_data[i * stride_1_0];
  }
  i = test->size[0];
  test->size[0] = b_F2->size[0];
  emxEnsureCapacity_real_T(sp, test, i, &lh_emlrtRTEI);
  test_data = test->data;
  loop_ub = b_F2->size[0];
  for (i = 0; i < loop_ub; i++) {
    test_data[i] = b_F2_data[i];
  }
  emxFree_real_T(sp, &b_F2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *varb1,
                               emlrtRSInfo ui_emlrtRSI,
                               const emxArray_real_T *varb1_inv)
{
  emlrtStack st;
  emxArray_real_T *r;
  const real_T *varb1_inv_data;
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
  varb1_inv_data = varb1_inv->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 2, &kd_emlrtRTEI);
  i = r->size[0] * r->size[1];
  if (varb1_inv->size[0] == 1) {
    r->size[0] = varb1_inv->size[1];
  } else {
    r->size[0] = varb1_inv->size[0];
  }
  if (varb1_inv->size[1] == 1) {
    r->size[1] = varb1_inv->size[0];
  } else {
    r->size[1] = varb1_inv->size[1];
  }
  emxEnsureCapacity_real_T(sp, r, i, &kd_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (varb1_inv->size[1] != 1);
  stride_0_1 = (varb1_inv->size[0] != 1);
  stride_1_0 = (varb1_inv->size[0] != 1);
  stride_1_1 = (varb1_inv->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (varb1_inv->size[1] == 1) {
    loop_ub = varb1_inv->size[0];
  } else {
    loop_ub = varb1_inv->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (varb1_inv->size[0] == 1) {
      b_loop_ub = varb1_inv->size[1];
    } else {
      b_loop_ub = varb1_inv->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 *
          (varb1_inv_data[aux_0_1 + varb1_inv->size[0] * (i1 * stride_0_0)] +
           varb1_inv_data[i1 * stride_1_0 + varb1_inv->size[0] * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = &ui_emlrtRSI;
  invpd(&st, r, varb1);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void minus(const emlrtStack *sp, emxArray_real_T *P_tl,
                  const emxArray_real_T *cP_tt)
{
  emxArray_real_T *b_P_tl;
  const real_T *cP_tt_data;
  real_T *P_tl_data;
  real_T *b_P_tl_data;
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
  cP_tt_data = cP_tt->data;
  P_tl_data = P_tl->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_P_tl, 2, &hh_emlrtRTEI);
  i = b_P_tl->size[0] * b_P_tl->size[1];
  if (cP_tt->size[0] == 1) {
    b_P_tl->size[0] = P_tl->size[0];
  } else {
    b_P_tl->size[0] = cP_tt->size[0];
  }
  if (cP_tt->size[1] == 1) {
    b_P_tl->size[1] = P_tl->size[1];
  } else {
    b_P_tl->size[1] = cP_tt->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_P_tl, i, &hh_emlrtRTEI);
  b_P_tl_data = b_P_tl->data;
  stride_0_0 = (P_tl->size[0] != 1);
  stride_0_1 = (P_tl->size[1] != 1);
  stride_1_0 = (cP_tt->size[0] != 1);
  stride_1_1 = (cP_tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (cP_tt->size[1] == 1) {
    loop_ub = P_tl->size[1];
  } else {
    loop_ub = cP_tt->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (cP_tt->size[0] == 1) {
      b_loop_ub = P_tl->size[0];
    } else {
      b_loop_ub = cP_tt->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_P_tl_data[i1 + b_P_tl->size[0] * i] =
          P_tl_data[i1 * stride_0_0 + P_tl->size[0] * aux_0_1] -
          cP_tt_data[i1 * stride_1_0 + cP_tt->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = P_tl->size[0] * P_tl->size[1];
  P_tl->size[0] = b_P_tl->size[0];
  P_tl->size[1] = b_P_tl->size[1];
  emxEnsureCapacity_real_T(sp, P_tl, i, &hh_emlrtRTEI);
  P_tl_data = P_tl->data;
  loop_ub = b_P_tl->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_P_tl->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      P_tl_data[i1 + P_tl->size[0] * i] = b_P_tl_data[i1 + b_P_tl->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_P_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *f_tt,
                 const emxArray_real_T *f_tl)
{
  emxArray_real_T *b_f_tl;
  const real_T *f_tl_data;
  real_T *b_f_tl_data;
  real_T *f_tt_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  f_tl_data = f_tl->data;
  f_tt_data = f_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_f_tl, 1, &ih_emlrtRTEI);
  i = b_f_tl->size[0];
  if (f_tt->size[0] == 1) {
    b_f_tl->size[0] = f_tl->size[0];
  } else {
    b_f_tl->size[0] = f_tt->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_f_tl, i, &ih_emlrtRTEI);
  b_f_tl_data = b_f_tl->data;
  stride_0_0 = (f_tl->size[0] != 1);
  stride_1_0 = (f_tt->size[0] != 1);
  if (f_tt->size[0] == 1) {
    loop_ub = f_tl->size[0];
  } else {
    loop_ub = f_tt->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_f_tl_data[i] = f_tl_data[i * stride_0_0] + f_tt_data[i * stride_1_0];
  }
  i = f_tt->size[0];
  f_tt->size[0] = b_f_tl->size[0];
  emxEnsureCapacity_real_T(sp, f_tt, i, &ih_emlrtRTEI);
  f_tt_data = f_tt->data;
  loop_ub = b_f_tl->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_tt_data[i] = b_f_tl_data[i];
  }
  emxFree_real_T(sp, &b_f_tl);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void Unobserved_Component_Model(const emlrtStack *sp,
                                const emxArray_real_T *data,
                                const emxArray_real_T *phi0,
                                const emxArray_real_T *PHI0, real_T w01,
                                real_T w02, real_T e01, real_T e02, real_T z01,
                                real_T z02, real_T n0, real_T n1, real_T d,
                                struct0_T *Output)
{
  static const int32_T iv[2] = {1, 37};
  static const int32_T iv2[2] = {1, 7};
  static const int32_T iv3[2] = {1, 23};
  static const int32_T iv4[2] = {1, 37};
  static const int32_T iv5[2] = {1, 7};
  static const int32_T iv6[2] = {1, 23};
  static const char_T cv1[38] = {
      'O', 'r', 'g', 'a', 'n', 'i', 'z', 'i', 'n', 'g', ' ', 't', 'h',
      'e', ' ', 'r', 'e', 's', 'u', 'l', 't', 's', '.', ' ', 'P', 'l',
      'e', 'a', 's', 'e', ' ', 'w', 'a', 'i', 't', '.', '.', '.'};
  static const char_T c_u[23] = {'C', 'u', 'r', 'r', 'e', 'n',  't', ' ',
                                 'i', 't', 'e', 'r', 'a', 't',  'i', 'o',
                                 'n', ':', ' ', '%', 'G', '\\', 'n'};
  static const char_T e_u[23] = {'[', 's', 'i', 'g', '2', '_', 'w', ' ',
                                 's', 'i', 'g', '2', '_', 'e', ' ', 's',
                                 'i', 'g', '_', 'z', ':', ' ', ']'};
  static const char_T b_u[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T d_u[7] = {'[', 'p', 'h', 'i', ':', ' ', ']'};
  static const char_T cv[6] = {'s', 'h', 'o', 'r', 't', 'G'};
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *F1;
  emxArray_real_T *F3;
  emxArray_real_T *Fc;
  emxArray_real_T *Fp;
  emxArray_real_T *Fx;
  emxArray_real_T *Prec_PHI0;
  emxArray_real_T *b_phi;
  emxArray_real_T *diff_y;
  emxArray_real_T *phi;
  emxArray_real_T *phim;
  emxArray_real_T *sig2_em;
  emxArray_real_T *sig2_wm;
  emxArray_real_T *sig2_zm;
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
  const mxArray *m;
  const mxArray *y;
  real_T b_sig2_w[3];
  const real_T *phi0_data;
  real_T n;
  real_T sig2_e;
  real_T sig2_w;
  real_T sig2_z;
  real_T *F3_data;
  real_T *Fc_data;
  real_T *Fp_data;
  real_T *Fx_data;
  real_T *b_phi_data;
  real_T *diff_y_data;
  real_T *phi_data;
  real_T *phim_data;
  real_T *sig2_em_data;
  real_T *sig2_wm_data;
  real_T *sig2_zm_data;
  int32_T b_sig2_em[2];
  int32_T iv1[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T iter;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  char_T u[37];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  phi0_data = phi0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Prec_PHI0, 2, &sb_emlrtRTEI);
  emxInit_real_T(sp, &phi, 1, &eb_emlrtRTEI);
  st.site = &wh_emlrtRSI;
  format(&st, emlrt_marshallOut(&st, cv), &emlrtMCI);
  n = n0 + n1;
  st.site = &emlrtRSI;
  inv(&st, PHI0, Prec_PHI0);
  /*  초기값 설정하기 */
  i = phi->size[0];
  phi->size[0] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phi, i, &eb_emlrtRTEI);
  phi_data = phi->data;
  loop_ub = phi0->size[0];
  for (i = 0; i < loop_ub; i++) {
    phi_data[i] = phi0_data[i];
  }
  emxInit_real_T(sp, &phim, 2, &fb_emlrtRTEI);
  sig2_w = w02 / w01;
  sig2_e = e02 / e01;
  sig2_z = z02 / z01;
  /*  MCMC output을 저장할 방 */
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &i_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(n);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &h_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = phim->size[0] * phim->size[1];
  phim->size[0] = (int32_T)n;
  phim->size[1] = phi0->size[0];
  emxEnsureCapacity_real_T(sp, phim, i1, &fb_emlrtRTEI);
  phim_data = phim->data;
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &j_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = (int32_T)n * phi0->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    phim_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &sig2_wm, 1, &gb_emlrtRTEI);
  if (n != i) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub_tmp = (int32_T)n;
  i1 = sig2_wm->size[0];
  sig2_wm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, sig2_wm, i1, &gb_emlrtRTEI);
  sig2_wm_data = sig2_wm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &k_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    sig2_wm_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &sig2_em, 1, &hb_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = sig2_em->size[0];
  sig2_em->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, sig2_em, i1, &hb_emlrtRTEI);
  sig2_em_data = sig2_em->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &l_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    sig2_em_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &sig2_zm, 1, &ib_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = sig2_zm->size[0];
  sig2_zm->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, sig2_zm, i1, &ib_emlrtRTEI);
  sig2_zm_data = sig2_zm->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &m_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    sig2_zm_data[i1] = 0.0;
  }
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(n, &n_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &Fp, 2, &tb_emlrtRTEI);
  emxInit_real_T(sp, &Fc, 2, &ub_emlrtRTEI);
  emxInit_real_T(sp, &Fx, 2, &vb_emlrtRTEI);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
                                &emlrtRTEI, (emlrtCTX)sp);
  i = Fp->size[0] * Fp->size[1];
  Fp->size[0] = loop_ub_tmp;
  Fp->size[1] = data->size[0];
  emxEnsureCapacity_real_T(sp, Fp, i, &jb_emlrtRTEI);
  Fp_data = Fp->data;
  i = Fc->size[0] * Fc->size[1];
  Fc->size[0] = loop_ub_tmp;
  Fc->size[1] = data->size[0];
  emxEnsureCapacity_real_T(sp, Fc, i, &jb_emlrtRTEI);
  Fc_data = Fc->data;
  i = Fx->size[0] * Fx->size[1];
  Fx->size[0] = loop_ub_tmp;
  Fx->size[1] = data->size[0];
  emxEnsureCapacity_real_T(sp, Fx, i, &jb_emlrtRTEI);
  Fx_data = Fx->data;
  emxInit_real_T(sp, &F1, 1, &wb_emlrtRTEI);
  emxInit_real_T(sp, &F3, 1, &wb_emlrtRTEI);
  emxInit_real_T(sp, &diff_y, 1, &xb_emlrtRTEI);
  emxInit_real_T(sp, &b_phi, 2, &pb_emlrtRTEI);
  for (iter = 0; iter < loop_ub_tmp; iter++) {
    /*  report intermediate results */
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
      st.site = &li_emlrtRSI;
      clc(&st, &e_emlrtMCI);
      for (i = 0; i < 37; i++) {
        u[i] = '=';
      }
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
      emlrtAssign(&c_y, m);
      st.site = &ki_emlrtRSI;
      disp(&st, c_y, &f_emlrtMCI);
      st.site = &b_emlrtRSI;
      b_st.site = &db_emlrtRSI;
      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      e_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 23, m, &c_u[0]);
      emlrtAssign(&f_y, m);
      g_y = NULL;
      m = emlrtCreateDoubleScalar((real_T)iter + 1.0);
      emlrtAssign(&g_y, m);
      c_st.site = &pi_emlrtRSI;
      c_emlrt_marshallIn(&c_st, d_feval(&c_st, d_y, e_y, f_y, g_y, &p_emlrtMCI),
                         "<output of feval>");
      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
      emlrtAssign(&h_y, m);
      st.site = &ji_emlrtRSI;
      disp(&st, h_y, &g_emlrtMCI);
      i_y = NULL;
      m = emlrtCreateString1(' ');
      emlrtAssign(&i_y, m);
      st.site = &ii_emlrtRSI;
      disp(&st, i_y, &h_emlrtMCI);
      j_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &d_u[0]);
      emlrtAssign(&j_y, m);
      st.site = &hi_emlrtRSI;
      disp(&st, j_y, &i_emlrtMCI);
      i = b_phi->size[0] * b_phi->size[1];
      b_phi->size[0] = 1;
      loop_ub = phi->size[0];
      b_phi->size[1] = phi->size[0];
      emxEnsureCapacity_real_T(sp, b_phi, i, &pb_emlrtRTEI);
      b_phi_data = b_phi->data;
      for (i = 0; i < loop_ub; i++) {
        b_phi_data[i] = phi_data[i];
      }
      st.site = &gi_emlrtRSI;
      disp(&st, b_emlrt_marshallOut(b_phi), &j_emlrtMCI);
      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &e_u[0]);
      emlrtAssign(&k_y, m);
      st.site = &fi_emlrtRSI;
      disp(&st, k_y, &k_emlrtMCI);
      b_sig2_w[0] = sig2_w;
      b_sig2_w[1] = sig2_e;
      b_sig2_w[2] = sig2_z;
      st.site = &ei_emlrtRSI;
      disp(&st, c_emlrt_marshallOut(b_sig2_w), &l_emlrtMCI);
    }
    /*   Step 1 : Sampling Hidden state */
    st.site = &c_emlrtRSI;
    Gen_Fm(&st, data, phi, sig2_w, sig2_e, sig2_z, F1, diff_y, F3);
    F3_data = F3->data;
    diff_y_data = diff_y->data;
    b_phi_data = F1->data;
    if (iter + 1 > Fp->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Fp->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_sig2_em[0] = 1;
    b_sig2_em[1] = Fp->size[1];
    iv1[0] = 1;
    loop_ub = F1->size[0];
    iv1[1] = F1->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_sig2_em[0], 2, &iv1[0], 2, &d_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Fp_data[iter + Fp->size[0] * i] = b_phi_data[i];
    }
    if (iter + 1 > Fc->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Fc->size[0], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_sig2_em[0] = 1;
    b_sig2_em[1] = Fc->size[1];
    iv1[0] = 1;
    loop_ub = diff_y->size[0];
    iv1[1] = diff_y->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_sig2_em[0], 2, &iv1[0], 2, &c_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Fc_data[iter + Fc->size[0] * i] = diff_y_data[i];
    }
    if (iter + 1 > Fx->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, Fx->size[0], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_sig2_em[0] = 1;
    b_sig2_em[1] = Fx->size[1];
    iv1[0] = 1;
    loop_ub = F3->size[0];
    iv1[1] = F3->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_sig2_em[0], 2, &iv1[0], 2, &b_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      Fx_data[iter + Fx->size[0] * i] = F3_data[i];
    }
    /*   Step 2 : phi and sig2_e sammpling */
    st.site = &d_emlrtRSI;
    Gen_yc(&st, diff_y, phi0, Prec_PHI0, e01, e02, sig2_e, phim, d,
           (real_T)iter + 1.0, phi, &sig2_z);
    phi_data = phi->data;
    sig2_e = sig2_z;
    if (iter + 1 > phim->size[0]) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, phim->size[0], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_sig2_em[0] = 1;
    b_sig2_em[1] = phim->size[1];
    iv1[0] = 1;
    loop_ub = phi->size[0];
    iv1[1] = phi->size[0];
    emlrtSubAssignSizeCheckR2012b(&b_sig2_em[0], 2, &iv1[0], 2, &e_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      phim_data[iter + phim->size[0] * i] = phi_data[i];
    }
    /*  mu와 phi 저장하기 */
    if ((int32_T)(iter + 1U) > sig2_em->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, sig2_em->size[0],
                                    &u_emlrtBCI, (emlrtCTX)sp);
    }
    sig2_em_data[iter] = sig2_z;
    /*   Step 3 : sig2_w sampling */
    st.site = &e_emlrtRSI;
    b_st.site = &oh_emlrtRSI;
    diff(&b_st, F1, diff_y);
    diff_y_data = diff_y->data;
    if (1 > F3->size[0] - 1) {
      i = 0;
    } else {
      if (1 > F3->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, F3->size[0], &b_emlrtBCI, &st);
      }
      if ((F3->size[0] - 1 < 1) || (F3->size[0] - 1 > F3->size[0])) {
        emlrtDynamicBoundsCheckR2012b(F3->size[0] - 1, 1, F3->size[0],
                                      &emlrtBCI, &st);
      }
      i = F3->size[0] - 1;
    }
    b_sig2_em[0] = 1;
    b_sig2_em[1] = i;
    b_st.site = &ph_emlrtRSI;
    indexShapeCheck(&b_st, F3->size[0], b_sig2_em);
    loop_ub = diff_y->size[0];
    if ((diff_y->size[0] != i) && ((diff_y->size[0] != 1) && (i != 1))) {
      emlrtDimSizeImpxCheckR2021b(diff_y->size[0], i, &emlrtECI, &st);
    }
    if (diff_y->size[0] == i) {
      for (i = 0; i < loop_ub; i++) {
        diff_y_data[i] -= F3_data[i];
      }
    } else {
      b_st.site = &ph_emlrtRSI;
      binary_expand_op(&b_st, diff_y, F3, i - 1);
      diff_y_data = diff_y->data;
    }
    /*  잔차항 */
    b_st.site = &qh_emlrtRSI;
    c_st.site = &gd_emlrtRSI;
    b_st.site = &rh_emlrtRSI;
    /*  Note that */
    /*  Suppose that x = randig(alpha,beta,1,1) */
    /*  E(x) = beta/(alpha-1) */
    /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
    c_st.site = &ih_emlrtRSI;
    /*  Note that */
    /*  Suppose that x = randgam(alpha,beta,1,1) */
    /*  E(x) = alpha/beta */
    /*  Var(x) = alpha/(beta^2) */
    /*  Notice that in matlab alpha = a and beta = 1/b */
    if (diff_y->size[0] < 1) {
      sig2_z = 0.0;
    } else {
      n_t = (ptrdiff_t)diff_y->size[0];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      sig2_z = ddot(&n_t, &diff_y_data[0], &incx_t, &diff_y_data[0], &incy_t);
    }
    d_st.site = &jh_emlrtRSI;
    sig2_z = gamrnd(&d_st, (w01 + ((real_T)F1->size[0] - 1.0)) / 2.0,
                    1.0 / ((w02 + d * sig2_z) / 2.0));
    sig2_w = 1.0 / sig2_z / d;
    if ((int32_T)(iter + 1U) > sig2_wm->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, sig2_wm->size[0],
                                    &v_emlrtBCI, (emlrtCTX)sp);
    }
    sig2_wm_data[iter] = sig2_w;
    /*   Step 4 : sig2_z sampling */
    st.site = &f_emlrtRSI;
    b_st.site = &th_emlrtRSI;
    diff(&b_st, F3, diff_y);
    diff_y_data = diff_y->data;
    b_st.site = &uh_emlrtRSI;
    c_st.site = &gd_emlrtRSI;
    b_st.site = &vh_emlrtRSI;
    /*  Note that */
    /*  Suppose that x = randig(alpha,beta,1,1) */
    /*  E(x) = beta/(alpha-1) */
    /*  Var(x) = beta^2/[(alpha-2)*(alpha-1)^2] */
    c_st.site = &ih_emlrtRSI;
    /*  Note that */
    /*  Suppose that x = randgam(alpha,beta,1,1) */
    /*  E(x) = alpha/beta */
    /*  Var(x) = alpha/(beta^2) */
    /*  Notice that in matlab alpha = a and beta = 1/b */
    if (diff_y->size[0] < 1) {
      sig2_z = 0.0;
    } else {
      n_t = (ptrdiff_t)diff_y->size[0];
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      sig2_z = ddot(&n_t, &diff_y_data[0], &incx_t, &diff_y_data[0], &incy_t);
    }
    d_st.site = &jh_emlrtRSI;
    sig2_z = gamrnd(&d_st, (z01 + ((real_T)F3->size[0] - 1.0)) / 2.0,
                    1.0 / ((z02 + d * sig2_z) / 2.0));
    sig2_z = 1.0 / sig2_z / d;
    if ((int32_T)(iter + 1U) > sig2_zm->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(iter + 1U), 1, sig2_zm->size[0],
                                    &w_emlrtBCI, (emlrtCTX)sp);
    }
    sig2_zm_data[iter] = sig2_z;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_phi);
  emxFree_real_T(sp, &diff_y);
  emxFree_real_T(sp, &F3);
  emxFree_real_T(sp, &F1);
  emxFree_real_T(sp, &phi);
  emxFree_real_T(sp, &Prec_PHI0);
  y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&y, m);
  st.site = &di_emlrtRSI;
  disp(&st, y, &b_emlrtMCI);
  st.site = &xh_emlrtRSI;
  disp(&st, d_emlrt_marshallOut(&st, cv1), &c_emlrtMCI);
  b_y = NULL;
  m = emlrtCreateString1(' ');
  emlrtAssign(&b_y, m);
  st.site = &ci_emlrtRSI;
  disp(&st, b_y, &d_emlrtMCI);
  /*  Summary of Output */
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &g_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > phim->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, phim->size[0],
                                    &s_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > phim->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, phim->size[0], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = phim->size[1];
  iter = i1 - i;
  i1 = Output->phim->size[0] * Output->phim->size[1];
  Output->phim->size[0] = iter;
  Output->phim->size[1] = phim->size[1];
  emxEnsureCapacity_real_T(sp, Output->phim, i1, &kb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < iter; i2++) {
      Output->phim->data[i2 + Output->phim->size[0] * i1] =
          phim_data[(i + i2) + phim->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &phim);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &f_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > sig2_wm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, sig2_wm->size[0],
                                    &q_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > sig2_wm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2_wm->size[0],
                                    &p_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = i1 - i;
  i1 = Output->sig2_wm->size[0];
  Output->sig2_wm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->sig2_wm, i1, &lb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->sig2_wm->data[i1] = sig2_wm_data[i + i1];
  }
  emxFree_real_T(sp, &sig2_wm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &e_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > sig2_em->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, sig2_em->size[0],
                                    &o_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > sig2_em->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2_em->size[0],
                                    &n_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = i1 - i;
  i1 = Output->sig2_em->size[0];
  Output->sig2_em->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->sig2_em, i1, &mb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->sig2_em->data[i1] = sig2_em_data[i + i1];
  }
  emxFree_real_T(sp, &sig2_em);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &d_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > sig2_zm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, sig2_zm->size[0],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > sig2_zm->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, sig2_zm->size[0],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = i1 - i;
  i1 = Output->sig2_zm->size[0];
  Output->sig2_zm->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, Output->sig2_zm, i1, &nb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    Output->sig2_zm->data[i1] = sig2_zm_data[i + i1];
  }
  emxFree_real_T(sp, &sig2_zm);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Fp->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Fp->size[0],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Fp->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Fp->size[0], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = Fp->size[1];
  iter = i1 - i;
  i1 = Output->yp->size[0] * Output->yp->size[1];
  Output->yp->size[0] = iter;
  Output->yp->size[1] = Fp->size[1];
  emxEnsureCapacity_real_T(sp, Output->yp, i1, &ob_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < iter; i2++) {
      Output->yp->data[i2 + Output->yp->size[0] * i1] =
          Fp_data[(i + i2) + Fp->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &Fp);
  if (n0 + 1.0 > n) {
    i = 0;
    i1 = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Fc->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Fc->size[0],
                                    &g_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Fc->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Fc->size[0], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = loop_ub_tmp;
  }
  loop_ub = Fc->size[1];
  iter = i1 - i;
  i1 = Output->yc->size[0] * Output->yc->size[1];
  Output->yc->size[0] = iter;
  Output->yc->size[1] = Fc->size[1];
  emxEnsureCapacity_real_T(sp, Output->yc, i1, &qb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < iter; i2++) {
      Output->yc->data[i2 + Output->yc->size[0] * i1] =
          Fc_data[(i + i2) + Fc->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &Fc);
  if (n0 + 1.0 > n) {
    i = 0;
    loop_ub_tmp = 0;
  } else {
    if (n0 + 1.0 != (int32_T)muDoubleScalarFloor(n0 + 1.0)) {
      emlrtIntegerCheckR2012b(n0 + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(n0 + 1.0) < 1) || ((int32_T)(n0 + 1.0) > Fx->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n0 + 1.0), 1, Fx->size[0],
                                    &d_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(n0 + 1.0) - 1;
    if ((n < 1.0) || (loop_ub_tmp > Fx->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, Fx->size[0], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  loop_ub = Fx->size[1];
  iter = loop_ub_tmp - i;
  i1 = Output->x->size[0] * Output->x->size[1];
  Output->x->size[0] = iter;
  Output->x->size[1] = Fx->size[1];
  emxEnsureCapacity_real_T(sp, Output->x, i1, &rb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (i2 = 0; i2 < iter; i2++) {
      Output->x->data[i2 + Output->x->size[0] * i1] =
          Fx_data[(i + i2) + Fx->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &Fx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *vec_P_tt)
{
  emxArray_real_T *b_vec_P_tt;
  real_T *b_vec_P_tt_data;
  real_T *vec_P_tt_data;
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
  vec_P_tt_data = vec_P_tt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_vec_P_tt, 2, &nd_emlrtRTEI);
  i = b_vec_P_tt->size[0] * b_vec_P_tt->size[1];
  if (vec_P_tt->size[1] == 1) {
    b_vec_P_tt->size[0] = vec_P_tt->size[0];
  } else {
    b_vec_P_tt->size[0] = vec_P_tt->size[1];
  }
  if (vec_P_tt->size[0] == 1) {
    b_vec_P_tt->size[1] = vec_P_tt->size[1];
  } else {
    b_vec_P_tt->size[1] = vec_P_tt->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_vec_P_tt, i, &nd_emlrtRTEI);
  b_vec_P_tt_data = b_vec_P_tt->data;
  stride_0_0 = (vec_P_tt->size[0] != 1);
  stride_0_1 = (vec_P_tt->size[1] != 1);
  stride_1_0 = (vec_P_tt->size[1] != 1);
  stride_1_1 = (vec_P_tt->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (vec_P_tt->size[0] == 1) {
    loop_ub = vec_P_tt->size[1];
  } else {
    loop_ub = vec_P_tt->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    if (vec_P_tt->size[1] == 1) {
      b_loop_ub = vec_P_tt->size[0];
    } else {
      b_loop_ub = vec_P_tt->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_vec_P_tt_data[i1 + b_vec_P_tt->size[0] * i] =
          (vec_P_tt_data[i1 * stride_0_0 + vec_P_tt->size[0] * aux_0_1] +
           vec_P_tt_data[aux_1_1 + vec_P_tt->size[0] * (i1 * stride_1_0)]) /
          2.0;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = vec_P_tt->size[0] * vec_P_tt->size[1];
  vec_P_tt->size[0] = b_vec_P_tt->size[0];
  vec_P_tt->size[1] = b_vec_P_tt->size[1];
  emxEnsureCapacity_real_T(sp, vec_P_tt, i, &od_emlrtRTEI);
  vec_P_tt_data = vec_P_tt->data;
  loop_ub = b_vec_P_tt->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_vec_P_tt->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      vec_P_tt_data[i1 + vec_P_tt->size[0] * i] =
          b_vec_P_tt_data[i1 + b_vec_P_tt->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_vec_P_tt);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Unobserved_Component_Model.c) */

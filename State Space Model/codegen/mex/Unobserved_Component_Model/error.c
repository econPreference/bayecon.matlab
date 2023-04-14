/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "error.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtMCInfo q_emlrtMCI = {
    27,      /* lineNo */
    5,       /* colNo */
    "error", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" /* pName
                                                                           */
};

static emlrtRSInfo mi_emlrtRSI = {
    27,      /* lineNo */
    "error", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" /* pathName
                                                                           */
};

/* Function Declarations */
static void c_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"error", true, location);
}

void b_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 18};
  static const char_T varargin_1[18] = {'A', ' ', 'i', 's', ' ', 'n',
                                        'o', 't', ' ', 's', 'y', 'm',
                                        'm', 'e', 't', 'r', 'i', 'c'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 18, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  st.site = &mi_emlrtRSI;
  c_error(&st, y, &q_emlrtMCI);
}

/* End of code generation (error.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error1.c
 *
 * Code generation for function 'error1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "error1.h"

/* Variable Definitions */
static emlrtMCInfo w_emlrtMCI = { 27,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtRSInfo hl_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* Function Declarations */
static void m_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void m_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void d_error(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv26[2] = { 1, 18 };

  static const char_T varargin_1[18] = { 'A', ' ', 'i', 's', ' ', 'n', 'o', 't',
    ' ', 's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv26);
  emlrtInitCharArrayR2013a(sp, 18, m5, &varargin_1[0]);
  emlrtAssign(&y, m5);
  st.site = &hl_emlrtRSI;
  m_error(&st, y, &w_emlrtMCI);
}

/* End of code generation (error1.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "warning.h"

/* Variable Definitions */
static emlrtMCInfo ab_emlrtMCI = { 14, /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 14, /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtRSInfo wm_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void c_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m14;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m14, 2, pArrays, "feval", true, location);
}

static void c_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m16;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m16, 3, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp, const char_T varargin_1[14])
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv23[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv24[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv25[2] = { 1, 33 };

  static const char_T msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o',
    'n', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *d_y;
  static const int32_T iv26[2] = { 1, 14 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv23);
  emlrtInitCharArrayR2013a(sp, 7, m5, &u[0]);
  emlrtAssign(&y, m5);
  b_y = NULL;
  m5 = emlrtCreateCharArray(2, iv24);
  emlrtInitCharArrayR2013a(sp, 7, m5, &b_u[0]);
  emlrtAssign(&b_y, m5);
  c_y = NULL;
  m5 = emlrtCreateCharArray(2, iv25);
  emlrtInitCharArrayR2013a(sp, 33, m5, &msgID[0]);
  emlrtAssign(&c_y, m5);
  d_y = NULL;
  m5 = emlrtCreateCharArray(2, iv26);
  emlrtInitCharArrayR2013a(sp, 14, m5, &varargin_1[0]);
  emlrtAssign(&d_y, m5);
  st.site = &wm_emlrtRSI;
  c_feval(&st, y, d_feval(&st, b_y, c_y, d_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void c_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m7;
  static const int32_T iv30[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv31[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv32[2] = { 1, 26 };

  static const char_T msgID[26] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'c', 'h', 'u', 'r', '_', 'f', 'a', 'i', 'l',
    'e', 'd' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m7 = emlrtCreateCharArray(2, iv30);
  emlrtInitCharArrayR2013a(sp, 7, m7, &u[0]);
  emlrtAssign(&y, m7);
  b_y = NULL;
  m7 = emlrtCreateCharArray(2, iv31);
  emlrtInitCharArrayR2013a(sp, 7, m7, &b_u[0]);
  emlrtAssign(&b_y, m7);
  c_y = NULL;
  m7 = emlrtCreateCharArray(2, iv32);
  emlrtInitCharArrayR2013a(sp, 26, m7, &msgID[0]);
  emlrtAssign(&c_y, m7);
  st.site = &wm_emlrtRSI;
  c_feval(&st, y, b_feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void d_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m8;
  static const int32_T iv33[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv35[2] = { 1, 24 };

  static const char_T msgID[24] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'i',
    'g', ':', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g', 'e', 'n', 'c', 'e' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m8 = emlrtCreateCharArray(2, iv33);
  emlrtInitCharArrayR2013a(sp, 7, m8, &u[0]);
  emlrtAssign(&y, m8);
  b_y = NULL;
  m8 = emlrtCreateCharArray(2, iv34);
  emlrtInitCharArrayR2013a(sp, 7, m8, &b_u[0]);
  emlrtAssign(&b_y, m8);
  c_y = NULL;
  m8 = emlrtCreateCharArray(2, iv35);
  emlrtInitCharArrayR2013a(sp, 24, m8, &msgID[0]);
  emlrtAssign(&c_y, m8);
  st.site = &wm_emlrtRSI;
  c_feval(&st, y, b_feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void e_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m9;
  static const int32_T iv36[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv37[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv38[2] = { 1, 36 };

  static const char_T msgID[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'r', 'a', 'n', 'd', 'g', 'I', 't', 'e', 'r', 'L',
    'i', 'm', 'i', 't', 'E', 'x', 'c', 'e', 'e', 'd', 'e', 'd' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m9 = emlrtCreateCharArray(2, iv36);
  emlrtInitCharArrayR2013a(sp, 7, m9, &u[0]);
  emlrtAssign(&y, m9);
  b_y = NULL;
  m9 = emlrtCreateCharArray(2, iv37);
  emlrtInitCharArrayR2013a(sp, 7, m9, &b_u[0]);
  emlrtAssign(&b_y, m9);
  c_y = NULL;
  m9 = emlrtCreateCharArray(2, iv38);
  emlrtInitCharArrayR2013a(sp, 36, m9, &msgID[0]);
  emlrtAssign(&c_y, m9);
  st.site = &wm_emlrtRSI;
  c_feval(&st, y, b_feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv20[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv21[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv22[2] = { 1, 27 };

  static const char_T msgID[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m4 = emlrtCreateCharArray(2, iv20);
  emlrtInitCharArrayR2013a(sp, 7, m4, &u[0]);
  emlrtAssign(&y, m4);
  b_y = NULL;
  m4 = emlrtCreateCharArray(2, iv21);
  emlrtInitCharArrayR2013a(sp, 7, m4, &b_u[0]);
  emlrtAssign(&b_y, m4);
  c_y = NULL;
  m4 = emlrtCreateCharArray(2, iv22);
  emlrtInitCharArrayR2013a(sp, 27, m4, &msgID[0]);
  emlrtAssign(&c_y, m4);
  st.site = &wm_emlrtRSI;
  c_feval(&st, y, b_feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

/* End of code generation (warning.c) */

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
#include "Recursive_BVAR.h"
#include "warning.h"

/* Variable Definitions */
static emlrtMCInfo s_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtRSInfo il_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
};

/* Function Declarations */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m12;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m12, 3, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m10;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m10, 2, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp, const char_T varargin_1[14])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv18[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv19[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv20[2] = { 1, 33 };

  static const char_T msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o',
    'n', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *d_y;
  static const int32_T iv21[2] = { 1, 14 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m3 = emlrtCreateCharArray(2, iv18);
  emlrtInitCharArrayR2013a(sp, 7, m3, &u[0]);
  emlrtAssign(&y, m3);
  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv19);
  emlrtInitCharArrayR2013a(sp, 7, m3, &b_u[0]);
  emlrtAssign(&b_y, m3);
  c_y = NULL;
  m3 = emlrtCreateCharArray(2, iv20);
  emlrtInitCharArrayR2013a(sp, 33, m3, &msgID[0]);
  emlrtAssign(&c_y, m3);
  d_y = NULL;
  m3 = emlrtCreateCharArray(2, iv21);
  emlrtInitCharArrayR2013a(sp, 14, m3, &varargin_1[0]);
  emlrtAssign(&d_y, m3);
  st.site = &il_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &s_emlrtMCI), &t_emlrtMCI);
}

void c_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m6;
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
  m6 = emlrtCreateCharArray(2, iv30);
  emlrtInitCharArrayR2013a(sp, 7, m6, &u[0]);
  emlrtAssign(&y, m6);
  b_y = NULL;
  m6 = emlrtCreateCharArray(2, iv31);
  emlrtInitCharArrayR2013a(sp, 7, m6, &b_u[0]);
  emlrtAssign(&b_y, m6);
  c_y = NULL;
  m6 = emlrtCreateCharArray(2, iv32);
  emlrtInitCharArrayR2013a(sp, 26, m6, &msgID[0]);
  emlrtAssign(&c_y, m6);
  st.site = &il_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &s_emlrtMCI), &t_emlrtMCI);
}

void d_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m7;
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
  m7 = emlrtCreateCharArray(2, iv33);
  emlrtInitCharArrayR2013a(sp, 7, m7, &u[0]);
  emlrtAssign(&y, m7);
  b_y = NULL;
  m7 = emlrtCreateCharArray(2, iv34);
  emlrtInitCharArrayR2013a(sp, 7, m7, &b_u[0]);
  emlrtAssign(&b_y, m7);
  c_y = NULL;
  m7 = emlrtCreateCharArray(2, iv35);
  emlrtInitCharArrayR2013a(sp, 24, m7, &msgID[0]);
  emlrtAssign(&c_y, m7);
  st.site = &il_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &s_emlrtMCI), &t_emlrtMCI);
}

void warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv15[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv17[2] = { 1, 27 };

  static const char_T msgID[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m2 = emlrtCreateCharArray(2, iv15);
  emlrtInitCharArrayR2013a(sp, 7, m2, &u[0]);
  emlrtAssign(&y, m2);
  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv16);
  emlrtInitCharArrayR2013a(sp, 7, m2, &b_u[0]);
  emlrtAssign(&b_y, m2);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv17);
  emlrtInitCharArrayR2013a(sp, 27, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  st.site = &il_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &s_emlrtMCI), &t_emlrtMCI);
}

/* End of code generation (warning.c) */

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
#include "warning.h"
#include "Auto_Unit.h"
#include "Unit_Root.h"
#include "Unit_Root_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtMCInfo ab_emlrtMCI = { 14, /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 14, /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtRSInfo xo_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
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
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp, const char_T varargin_1[14])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 33 };

  static const char_T msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o',
    'n', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *d_y;
  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 14 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 33, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  d_y = NULL;
  m3 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 14, m3, &varargin_1[0]);
  emlrtAssign(&d_y, m3);
  st.site = &xo_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void c_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 36 };

  static const char_T msgID[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'r', 'a', 'n', 'd', 'g', 'I', 't', 'e', 'r', 'L',
    'i', 'm', 'i', 't', 'E', 'x', 'c', 'e', 'e', 'd', 'e', 'd' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 36, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  st.site = &xo_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void d_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 26 };

  static const char_T msgID[26] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'c', 'h', 'u', 'r', '_', 'f', 'a', 'i', 'l',
    'e', 'd' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 26, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  st.site = &xo_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void e_warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 24 };

  static const char_T msgID[24] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'i',
    'g', ':', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g', 'e', 'n', 'c', 'e' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 24, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  st.site = &xo_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void f_warning(const emlrtStack *sp, int32_T varargin_1, const char_T
               varargin_2[14])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 32 };

  static const char_T msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 14 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 32, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  d_y = NULL;
  e_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(e_y) = varargin_1;
  emlrtAssign(&d_y, e_y);
  e_y = NULL;
  m3 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 14, m3, &varargin_2[0]);
  emlrtAssign(&e_y, m3);
  st.site = &xo_emlrtRSI;
  b_feval(&st, y, d_feval(&st, b_y, c_y, d_y, e_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

void warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 21 };

  static const char_T msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 21, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  st.site = &xo_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &ab_emlrtMCI), &bb_emlrtMCI);
}

/* End of code generation (warning.c) */

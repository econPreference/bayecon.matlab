/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Unit_Root.h"
#include "fprintf.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtMCInfo ab_emlrtMCI = { 71, 18, "fprintf",
  "D:\\MATLAB\\R2015b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" };

static emlrtRSInfo ne_emlrtRSI = { 71, "fprintf",
  "D:\\MATLAB\\R2015b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_feval,
  const char_T *identifier);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_feval,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(d_feval), &thisId);
  emlrtDestroyArray(&d_feval);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m15;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 4, pArrays, "feval", true, location);
}

real_T b_fprintf(const emlrtStack *sp, real_T varargin_1)
{
  int32_T i6;
  static const char_T cv12[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  char_T u[7];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 7 };

  const mxArray *m0;
  const mxArray *b_y;
  static const char_T formatSpec[32] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', ' ',
    'i', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', '%', 'G', ' ', 'p',
    'e', 'r', 'c', 'e', 'n', 't', ' ', '\\', 'n' };

  char_T b_u[32];
  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 32 };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i6 = 0; i6 < 7; i6++) {
    u[i6] = cv12[i6];
  }

  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(sp, 7, m0, &u[0]);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  for (i6 = 0; i6 < 32; i6++) {
    b_u[i6] = formatSpec[i6];
  }

  c_y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 32, m0, &b_u[0]);
  emlrtAssign(&c_y, m0);
  d_y = NULL;
  m0 = emlrtCreateDoubleScalar(varargin_1);
  emlrtAssign(&d_y, m0);
  st.site = &ne_emlrtRSI;
  return emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, d_y, &ab_emlrtMCI),
    "feval");
}

/* End of code generation (fprintf.c) */

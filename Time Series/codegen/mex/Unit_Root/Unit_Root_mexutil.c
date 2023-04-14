/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unit_Root_mexutil.c
 *
 * Code generation for function 'Unit_Root_mexutil'
 *
 */

/* Include files */
#include "Unit_Root_mexutil.h"
#include "Auto_Unit.h"
#include "Unit_Root.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  int32_T iv[1];
  const mxArray *m;
  real_T *pData;
  int32_T i;
  int32_T b_i;
  y = NULL;
  iv[0] = u->size[0];
  m = emlrtCreateNumericArray(1, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "sprintf", true, location);
}

real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_feval_, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[23])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 23 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 23, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void clc(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "clc", true, location);
}

real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, pArrays, "feval", true, location);
}

void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
                      denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }

      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[6])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 6, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void emlrt_marshallIn(const emlrtStack *sp, const mxArray *a__output_of_sprintf_,
                      const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  int32_T iv[2];
  const mxArray *m;
  real_T *pData;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    for (c_i = 0; c_i < u->size[0]; c_i++) {
      pData[i] = u->data[c_i + u->size[0] * b_i];
      i++;
    }
  }

  emlrtAssign(&y, m);
  return y;
}

const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u[37])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 37 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 37, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void format(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "format", true, location);
}

const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 8 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 8, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u[5])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 5 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 5, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

const mxArray *i_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  int32_T iv[2];
  const mxArray *m;
  real_T *pData;
  int32_T i;
  int32_T b_i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u[10])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 10 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 10, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u[17])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 17 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 17, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u[38])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 38 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 38, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

/* End of code generation (Unit_Root_mexutil.c) */

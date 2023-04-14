/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ARMA_X_mexutil.c
 *
 * Code generation for function 'ARMA_X_mexutil'
 *
 */

/* Include files */
#include "ARMA_X_mexutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 2, &pArrays[0],
                               (const char_T *)"sprintf", true, location);
}

void c_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

void c_error(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"error", true, location);
}

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14])
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray,
                        (const char_T *)"disp", true, location);
}

real_T emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, const mxArray *m4,
                     emlrtMCInfo *location)
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

real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = {1, 14};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

/* End of code generation (ARMA_X_mexutil.c) */

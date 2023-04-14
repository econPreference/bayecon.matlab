/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Recursive_BVAR_mexutil.c
 *
 * Code generation for function 'Recursive_BVAR_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "Recursive_BVAR_mexutil.h"

/* Function Definitions */
real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *e_feval, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(e_feval), &thisId);
  emlrtDestroyArray(&e_feval);
  return y;
}

real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m8;
  real_T *pData;
  int32_T i41;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m8 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m8);
  i41 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i41] = u->data[b_i + u->size[0] * i];
      i41++;
    }
  }

  emlrtAssign(&y, m8);
  return y;
}

real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/* End of code generation (Recursive_BVAR_mexutil.c) */

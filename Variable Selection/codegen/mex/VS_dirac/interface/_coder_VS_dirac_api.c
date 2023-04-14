/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_VS_dirac_api.c
 *
 * Code generation for function '_coder_VS_dirac_api'
 *
 */

/* Include files */
#include "_coder_VS_dirac_api.h"
#include "VS_dirac.h"
#include "VS_dirac_data.h"
#include "VS_dirac_emxutil.h"
#include "VS_dirac_mexutil.h"
#include "VS_dirac_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo rd_emlrtRTEI = {
    1,                     /* lineNo */
    1,                     /* colNo */
    "_coder_VS_dirac_api", /* fName */
    ""                     /* pName */
};

/* Function Declarations */
static const mxArray *c_emlrt_marshallOut(const struct0_T u);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static const mxArray *c_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[5] = {"omegam", "alpham", "gammam", "sig2m", "mum"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"omegam",
                      d_emlrt_marshallOut(u.omegam), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"alpham",
                      e_emlrt_marshallOut(u.alpham), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"gammam",
                      e_emlrt_marshallOut(u.gammam), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2m",
                      d_emlrt_marshallOut(u.sig2m), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mum", d_emlrt_marshallOut(u.mum),
                      4);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, &u->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    for (c_i = 0; c_i < u->size[0]; c_i++) {
      pData[i] = u_data[c_i + u->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void VS_dirac_api(const mxArray *const prhs[7], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct0_T Output;
  real_T aw;
  real_T bw;
  real_T cons_option;
  real_T n0;
  real_T n1;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, &rd_emlrtRTEI);
  emxInit_real_T(&st, &X, 2, &rd_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &rd_emlrtRTEI);
  /* Marshall function inputs */
  y->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  aw = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "aw");
  bw = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "bw");
  cons_option = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "cons_option");
  n0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "n0");
  n1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "n1");
  /* Invoke the target function */
  VS_dirac(&st, y, X, aw, bw, cons_option, n0, n1, &Output);
  /* Marshall function outputs */
  *plhs = c_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &X);
  emxFree_real_T(&st, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_VS_dirac_api.c) */

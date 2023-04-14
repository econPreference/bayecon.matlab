/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_IV_Regression_api.c
 *
 * Code generation for function '_coder_IV_Regression_api'
 *
 */

/* Include files */
#include "_coder_IV_Regression_api.h"
#include "IV_Regression.h"
#include "IV_Regression_data.h"
#include "IV_Regression_emxutil.h"
#include "IV_Regression_mexutil.h"
#include "IV_Regression_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo bh_emlrtRTEI = {
    1,                          /* lineNo */
    1,                          /* colNo */
    "_coder_IV_Regression_api", /* fName */
    ""                          /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *exoind,
                               const char_T *identifier, emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier);

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *l_emlrt_marshallOut(const struct0_T u);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(data), &thisId, y);
  emlrtDestroyArray(&data);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b0), &thisId, y);
  emlrtDestroyArray(&b0);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *exoind,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(exoind), &thisId, y);
  emlrtDestroyArray(&exoind);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  char_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(forecast), &thisId);
  emlrtDestroyArray(&forecast);
  return y;
}

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[5] = {"yfm", "bm", "gammam", "Sigmam", "lnML"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, (const char_T **)&sv[0]));
  b_y = NULL;
  m = emlrtCreateNumericArray(1, &u.yfm->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u.yfm->size[0]; b_i++) {
    pData[i] = u.yfm->data[b_i];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yfm", b_y, 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bm", g_emlrt_marshallOut(u.bm), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"gammam",
                      g_emlrt_marshallOut(u.gammam), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Sigmam",
                      g_emlrt_marshallOut(u.Sigmam), 3);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u.lnML);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"lnML", c_y, 4);
  return y;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {false, true};
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

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  char_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 0U, (void *)&dims);
  emlrtImportCharR2015b((emlrtCTX)sp, src, &ret);
  emlrtDestroyArray(&src);
  return ret;
}

void IV_Regression_api(const mxArray *const prhs[16], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *B0;
  emxArray_real_T *G0;
  emxArray_real_T *R0;
  emxArray_real_T *b0;
  emxArray_real_T *data;
  emxArray_real_T *endoind;
  emxArray_real_T *exoind;
  emxArray_real_T *gamma0;
  emxArray_real_T *x_f;
  emxArray_real_T *zind;
  struct0_T Output;
  real_T n0;
  real_T n1;
  real_T v0;
  real_T yind;
  char_T ML;
  char_T forecast;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &data, 2, &bh_emlrtRTEI);
  emxInit_real_T(&st, &b0, 1, &bh_emlrtRTEI);
  emxInit_real_T(&st, &B0, 2, &bh_emlrtRTEI);
  emxInit_real_T(&st, &R0, 2, &bh_emlrtRTEI);
  emxInit_real_T(&st, &gamma0, 1, &bh_emlrtRTEI);
  emxInit_real_T(&st, &G0, 2, &bh_emlrtRTEI);
  emxInit_real_T(&st, &exoind, 2, &bh_emlrtRTEI);
  emxInit_real_T(&st, &endoind, 2, &bh_emlrtRTEI);
  emxInit_real_T(&st, &zind, 2, &bh_emlrtRTEI);
  emxInit_real_T(&st, &x_f, 1, &bh_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &bh_emlrtRTEI);
  /* Marshall function inputs */
  data->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "data", data);
  b0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "b0", b0);
  B0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "B0", B0);
  v0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "v0");
  R0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "R0", R0);
  gamma0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "gamma0", gamma0);
  G0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "G0", G0);
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "n1");
  yind = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "yind");
  exoind->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "exoind", exoind);
  endoind->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "endoind", endoind);
  zind->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "zind", zind);
  forecast = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "forecast");
  x_f->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "x_f", x_f);
  ML = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "ML");
  /* Invoke the target function */
  IV_Regression(&st, data, b0, B0, v0, R0, gamma0, G0, n0, n1, yind, exoind,
                endoind, zind, forecast, x_f, ML, &Output);
  /* Marshall function outputs */
  *plhs = l_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &x_f);
  emxFree_real_T(&st, &zind);
  emxFree_real_T(&st, &endoind);
  emxFree_real_T(&st, &exoind);
  emxFree_real_T(&st, &G0);
  emxFree_real_T(&st, &gamma0);
  emxFree_real_T(&st, &R0);
  emxFree_real_T(&st, &B0);
  emxFree_real_T(&st, &b0);
  emxFree_real_T(&st, &data);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_IV_Regression_api.c) */

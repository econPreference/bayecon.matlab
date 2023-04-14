/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Markov_Switching_api.c
 *
 * Code generation for function '_coder_Markov_Switching_api'
 *
 */

/* Include files */
#include "_coder_Markov_Switching_api.h"
#include "Markov_Switching.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_mexutil.h"
#include "Markov_Switching_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo gk_emlrtRTEI = {
    1,                             /* lineNo */
    1,                             /* colNo */
    "_coder_Markov_Switching_api", /* fName */
    ""                             /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *betaiden,
                               const char_T *identifier, emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier);

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *n_emlrt_marshallOut(const struct0_T u);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static const mxArray *o_emlrt_marshallOut(const emxArray_real_T *u);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(Y), &thisId, y);
  emlrtDestroyArray(&Y);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *betaiden,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(betaiden), &thisId, y);
  emlrtDestroyArray(&betaiden);
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

static const mxArray *n_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[7] = {"betam", "sig2m",        "Pm",  "Sm",
                                "Yfm",   "Changepointm", "lnML"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"betam",
                      h_emlrt_marshallOut(u.betam), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2m",
                      h_emlrt_marshallOut(u.sig2m), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Pm", h_emlrt_marshallOut(u.Pm), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Sm", h_emlrt_marshallOut(u.Sm), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Yfm", o_emlrt_marshallOut(u.Yfm),
                      4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Changepointm",
                      o_emlrt_marshallOut(u.Changepointm), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"lnML", o_emlrt_marshallOut(u.lnML),
                      6);
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

static const mxArray *o_emlrt_marshallOut(const emxArray_real_T *u)
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

void Markov_Switching_api(const mxArray *const prhs[18], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *B0;
  emxArray_real_T *X;
  emxArray_real_T *Y;
  emxArray_real_T *alpha0;
  emxArray_real_T *beta0;
  emxArray_real_T *betaiden;
  emxArray_real_T *delta0;
  emxArray_real_T *x_f;
  struct0_T Output;
  real_T a0;
  real_T a1;
  real_T idenind;
  real_T lowerbound;
  real_T n0;
  real_T n1;
  real_T s;
  real_T switchingind;
  char_T ML;
  char_T forecast;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &X, 2, &gk_emlrtRTEI);
  emxInit_real_T(&st, &Y, 1, &gk_emlrtRTEI);
  emxInit_real_T(&st, &beta0, 2, &gk_emlrtRTEI);
  emxInit_real_T(&st, &B0, 2, &gk_emlrtRTEI);
  emxInit_real_T(&st, &alpha0, 1, &gk_emlrtRTEI);
  emxInit_real_T(&st, &delta0, 1, &gk_emlrtRTEI);
  emxInit_real_T(&st, &betaiden, 2, &gk_emlrtRTEI);
  emxInit_real_T(&st, &x_f, 1, &gk_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &gk_emlrtRTEI);
  /* Marshall function inputs */
  X->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  Y->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Y", Y);
  s = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "s");
  n0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "n0");
  n1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "n1");
  beta0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "beta0", beta0);
  B0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "B0", B0);
  alpha0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "alpha0", alpha0);
  delta0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "delta0", delta0);
  a0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "a0");
  a1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "a1");
  switchingind = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "switchingind");
  idenind = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "idenind");
  betaiden->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "betaiden", betaiden);
  lowerbound = emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "lowerbound");
  forecast = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "forecast");
  x_f->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[16]), "x_f", x_f);
  ML = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "ML");
  /* Invoke the target function */
  Markov_Switching(&st, X, Y, s, n0, n1, beta0, B0, alpha0, delta0, a0, a1,
                   switchingind, idenind, betaiden, lowerbound, forecast, x_f,
                   ML, &Output);
  /* Marshall function outputs */
  *plhs = n_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &x_f);
  emxFree_real_T(&st, &betaiden);
  emxFree_real_T(&st, &delta0);
  emxFree_real_T(&st, &alpha0);
  emxFree_real_T(&st, &B0);
  emxFree_real_T(&st, &beta0);
  emxFree_real_T(&st, &Y);
  emxFree_real_T(&st, &X);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Markov_Switching_api.c) */

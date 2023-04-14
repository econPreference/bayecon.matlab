/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Stochastic_Volatility_api.c
 *
 * Code generation for function '_coder_Stochastic_Volatility_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Stochastic_Volatility.h"
#include "_coder_Stochastic_Volatility_api.h"
#include "Stochastic_Volatility_emxutil.h"
#include "Stochastic_Volatility_mexutil.h"
#include "Stochastic_Volatility_data.h"

/* Variable Definitions */
static emlrtRTEInfo fl_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_Stochastic_Volatility_api",  /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ym, const
  char_T *identifier, emxArray_real_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
  const char_T *identifier);
static char_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static char_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  static const char * sv0[7] = { "Yfm", "Hm", "betam", "gammam", "Sig2m", "lnML",
    "Volm" };

  int32_T i43;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m12;
  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_u, 1, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, sv0));
  i43 = b_u->size[0];
  b_u->size[0] = u.Yfm->size[0];
  emxEnsureCapacity_real_T(sp, b_u, i43, (emlrtRTEInfo *)NULL);
  loop_ub = u.Yfm->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    b_u->data[i43] = u.Yfm->data[i43];
  }

  b_y = NULL;
  m12 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m12);
  i43 = 0;
  for (loop_ub = 0; loop_ub < u.Yfm->size[0]; loop_ub++) {
    pData[i43] = u.Yfm->data[loop_ub];
    i43++;
  }

  emlrtAssign(&b_y, m12);
  emlrtSetFieldR2017b(y, 0, "Yfm", b_y, 0);
  emlrtSetFieldR2017b(y, 0, "Hm", c_emlrt_marshallOut(u.Hm), 1);
  emlrtSetFieldR2017b(y, 0, "betam", c_emlrt_marshallOut(u.betam), 2);
  emlrtSetFieldR2017b(y, 0, "gammam", c_emlrt_marshallOut(u.gammam), 3);
  i43 = b_u->size[0];
  b_u->size[0] = u.Sig2m->size[0];
  emxEnsureCapacity_real_T(sp, b_u, i43, (emlrtRTEInfo *)NULL);
  loop_ub = u.Sig2m->size[0];
  for (i43 = 0; i43 < loop_ub; i43++) {
    b_u->data[i43] = u.Sig2m->data[i43];
  }

  b_y = NULL;
  m12 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m12);
  i43 = 0;
  loop_ub = 0;
  emxFree_real_T(&b_u);
  while (loop_ub < u.Sig2m->size[0]) {
    pData[i43] = u.Sig2m->data[loop_ub];
    i43++;
    loop_ub++;
  }

  emlrtAssign(&b_y, m12);
  emlrtSetFieldR2017b(y, 0, "Sig2m", b_y, 4);
  b_y = NULL;
  m12 = emlrtCreateDoubleScalar(u.lnML);
  emlrtAssign(&b_y, m12);
  emlrtSetFieldR2017b(y, 0, "lnML", b_y, 5);
  emlrtSetFieldR2017b(y, 0, "Volm", c_emlrt_marshallOut(u.Volm), 6);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m13;
  real_T *pData;
  int32_T i44;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m13 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m13);
  i44 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i44] = u->data[b_i + u->size[0] * i];
      i44++;
    }
  }

  emlrtAssign(&y, m13);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ym, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(ym), &thisId, y);
  emlrtDestroyArray(&ym);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
  const char_T *identifier)
{
  char_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(forecast), &thisId);
  emlrtDestroyArray(&forecast);
  return y;
}

static char_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv0[1] = { true };

  int32_T iv41[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv41);
  ret->size[0] = iv41[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv42[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv42);
  ret->size[0] = iv42[0];
  ret->size[1] = iv42[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static char_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  char_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 0U, &dims);
  emlrtImportCharR2015b(sp, src, &ret);
  emlrtDestroyArray(&src);
  return ret;
}

void Stochastic_Volatility_api(const mxArray * const prhs[13], int32_T nlhs,
  const mxArray *plhs[1])
{
  emxArray_real_T *ym;
  emxArray_real_T *X;
  emxArray_real_T *beta0;
  emxArray_real_T *B0;
  emxArray_real_T *gamma0;
  emxArray_real_T *Gamma0;
  emxArray_real_T *x_f;
  struct0_T Output;
  real_T n0;
  real_T n1;
  real_T v0;
  real_T d0;
  char_T forecast;
  char_T ML;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &ym, 1, &fl_emlrtRTEI, true);
  emxInit_real_T1(&st, &X, 2, &fl_emlrtRTEI, true);
  emxInit_real_T(&st, &beta0, 1, &fl_emlrtRTEI, true);
  emxInit_real_T1(&st, &B0, 2, &fl_emlrtRTEI, true);
  emxInit_real_T(&st, &gamma0, 1, &fl_emlrtRTEI, true);
  emxInit_real_T1(&st, &Gamma0, 2, &fl_emlrtRTEI, true);
  emxInit_real_T(&st, &x_f, 1, &fl_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &Output, &fl_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ym", ym);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "n1");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "beta0", beta0);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "B0", B0);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "gamma0", gamma0);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "Gamma0", Gamma0);
  v0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "v0");
  d0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "d0");
  forecast = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "forecast");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "x_f", x_f);
  ML = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "ML");

  /* Invoke the target function */
  Stochastic_Volatility(&st, ym, X, n0, n1, beta0, B0, gamma0, Gamma0, v0, d0,
                        forecast, x_f, ML, &Output);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, Output);
  emxFreeStruct_struct0_T(&Output);
  x_f->canFreeData = false;
  emxFree_real_T(&x_f);
  Gamma0->canFreeData = false;
  emxFree_real_T(&Gamma0);
  gamma0->canFreeData = false;
  emxFree_real_T(&gamma0);
  B0->canFreeData = false;
  emxFree_real_T(&B0);
  beta0->canFreeData = false;
  emxFree_real_T(&beta0);
  X->canFreeData = false;
  emxFree_real_T(&X);
  ym->canFreeData = false;
  emxFree_real_T(&ym);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Stochastic_Volatility_api.c) */

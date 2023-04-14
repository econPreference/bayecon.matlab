/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Vari_Selection_api.c
 *
 * Code generation for function '_coder_Vari_Selection_api'
 *
 */

/* Include files */
#include "_coder_Vari_Selection_api.h"
#include "Vari_Selection.h"
#include "Vari_Selection_data.h"
#include "Vari_Selection_emxutil.h"
#include "Vari_Selection_mexutil.h"
#include "Vari_Selection_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo pc_emlrtRTEI = {
    1,                           /* lineNo */
    1,                           /* colNo */
    "_coder_Vari_Selection_api", /* fName */
    ""                           /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *f_emlrt_marshallOut(const struct0_T u);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *h_emlrt_marshallOut(const emxArray_real_T *u);

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *IG0,
                                   const char_T *identifier))[2];

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2];

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier);

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2];

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(Y), &thisId, y);
  emlrtDestroyArray(&Y);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[4] = {"bm", "sigma2m", "gammam", "yfm"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bm", g_emlrt_marshallOut(u.bm), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sigma2m",
                      h_emlrt_marshallOut(u.sigma2m), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"gammam",
                      g_emlrt_marshallOut(u.gammam), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yfm", h_emlrt_marshallOut(u.yfm),
                      3);
  return y;
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

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u)
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

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *h_emlrt_marshallOut(const emxArray_real_T *u)
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

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *IG0,
                                   const char_T *identifier))[2]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(IG0), &thisId);
  emlrtDestroyArray(&IG0);
  return y;
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2]
{
  real_T(*y)[2];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
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

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2]
{
  static const int32_T dims = 2;
  real_T(*ret)[2];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
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

void Vari_Selection_api(const mxArray *const prhs[10], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *Y;
  emxArray_real_T *x_f;
  struct0_T Output;
  real_T(*IG0)[2];
  real_T(*IG1)[2];
  real_T alpha0;
  real_T delta0;
  real_T n0;
  real_T n1;
  char_T forecast;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 1, &pc_emlrtRTEI);
  emxInit_real_T(&st, &X, 2, &pc_emlrtRTEI);
  emxInit_real_T(&st, &x_f, 1, &pc_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &pc_emlrtRTEI);
  /* Marshall function inputs */
  Y->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  X->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  n0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "n0");
  n1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "n1");
  alpha0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "alpha0");
  delta0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "delta0");
  IG0 = i_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "IG0");
  IG1 = i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "IG1");
  forecast = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "forecast");
  x_f->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "x_f", x_f);
  /* Invoke the target function */
  Vari_Selection(&st, Y, X, n0, n1, alpha0, delta0, *IG0, *IG1, forecast, x_f,
                 &Output);
  /* Marshall function outputs */
  *plhs = f_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &x_f);
  emxFree_real_T(&st, &X);
  emxFree_real_T(&st, &Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Vari_Selection_api.c) */

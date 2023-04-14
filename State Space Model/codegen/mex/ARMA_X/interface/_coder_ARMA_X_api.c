/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ARMA_X_api.c
 *
 * Code generation for function '_coder_ARMA_X_api'
 *
 */

/* Include files */
#include "_coder_ARMA_X_api.h"
#include "ARMA_X.h"
#include "ARMA_X_data.h"
#include "ARMA_X_emxutil.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo fl_emlrtRTEI = {
    1,                   /* lineNo */
    1,                   /* colNo */
    "_coder_ARMA_X_api", /* fName */
    ""                   /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *xind,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0,
                               const char_T *identifier, emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *j_emlrt_marshallOut(const struct0_T u);

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier);

static const mxArray *k_emlrt_marshallOut(const emxArray_real_T *u);

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u);

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

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *xind,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(xind), &thisId, y);
  emlrtDestroyArray(&xind);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b0), &thisId, y);
  emlrtDestroyArray(&b0);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *j_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[8] = {"Yfm",    "Vm",    "betam", "phim",
                                "thetam", "sig2m", "lnML",  "phi_0"};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Yfm", k_emlrt_marshallOut(u.Yfm),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Vm", l_emlrt_marshallOut(u.Vm), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"betam",
                      l_emlrt_marshallOut(u.betam), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"phim", l_emlrt_marshallOut(u.phim),
                      3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"thetam",
                      l_emlrt_marshallOut(u.thetam), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2m",
                      k_emlrt_marshallOut(u.sig2m), 5);
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u.lnML);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"lnML", b_y, 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"phi_0",
                      k_emlrt_marshallOut(u.phi_0), 7);
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

static const mxArray *k_emlrt_marshallOut(const emxArray_real_T *u)
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

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u)
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

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void ARMA_X_api(const mxArray *const prhs[17], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *B0;
  emxArray_real_T *PHI0;
  emxArray_real_T *THETA0;
  emxArray_real_T *b0;
  emxArray_real_T *data;
  emxArray_real_T *phi0;
  emxArray_real_T *theta0;
  emxArray_real_T *x_f;
  emxArray_real_T *xind;
  struct0_T Output;
  real_T a0;
  real_T d;
  real_T d0;
  real_T n0;
  real_T n1;
  real_T yind;
  char_T ML;
  char_T forecast;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &data, 2, &fl_emlrtRTEI);
  emxInit_real_T(&st, &xind, 2, &fl_emlrtRTEI);
  emxInit_real_T(&st, &b0, 1, &fl_emlrtRTEI);
  emxInit_real_T(&st, &B0, 2, &fl_emlrtRTEI);
  emxInit_real_T(&st, &phi0, 1, &fl_emlrtRTEI);
  emxInit_real_T(&st, &PHI0, 2, &fl_emlrtRTEI);
  emxInit_real_T(&st, &theta0, 1, &fl_emlrtRTEI);
  emxInit_real_T(&st, &THETA0, 2, &fl_emlrtRTEI);
  emxInit_real_T(&st, &x_f, 1, &fl_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &fl_emlrtRTEI);
  /* Marshall function inputs */
  data->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "data", data);
  xind->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "xind", xind);
  yind = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "yind");
  b0->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "b0", b0);
  B0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "B0", B0);
  a0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "a0");
  d0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "d0");
  phi0->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "phi0", phi0);
  PHI0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "PHI0", PHI0);
  theta0->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "theta0", theta0);
  THETA0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "THETA0", THETA0);
  n0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "n0");
  n1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "n1");
  forecast = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "forecast");
  x_f->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "x_f", x_f);
  ML = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "ML");
  d = emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "d");
  /* Invoke the target function */
  ARMA_X(&st, data, xind, yind, b0, B0, a0, d0, phi0, PHI0, theta0, THETA0, n0,
         n1, forecast, x_f, ML, d, &Output);
  /* Marshall function outputs */
  *plhs = j_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &x_f);
  emxFree_real_T(&st, &THETA0);
  emxFree_real_T(&st, &theta0);
  emxFree_real_T(&st, &PHI0);
  emxFree_real_T(&st, &phi0);
  emxFree_real_T(&st, &B0);
  emxFree_real_T(&st, &b0);
  emxFree_real_T(&st, &xind);
  emxFree_real_T(&st, &data);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_ARMA_X_api.c) */

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
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "_coder_ARMA_X_api.h"
#include "ARMA_X_emxutil.h"
#include "ARMA_X_mexutil.h"
#include "ARMA_X_data.h"

/* Variable Definitions */
static emlrtRTEInfo pn_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_ARMA_X_api",                 /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, emxArray_real_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *xind, const
  char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
  const char_T *identifier);
static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  static const char * sv0[8] = { "Yfm", "Vm", "betam", "phim", "thetam", "sig2m",
    "lnML", "phi_0" };

  int32_T i45;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m11;
  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &b_u, 1, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 8, sv0));
  i45 = b_u->size[0];
  b_u->size[0] = u.Yfm->size[0];
  emxEnsureCapacity_real_T1(sp, b_u, i45, (emlrtRTEInfo *)NULL);
  loop_ub = u.Yfm->size[0];
  for (i45 = 0; i45 < loop_ub; i45++) {
    b_u->data[i45] = u.Yfm->data[i45];
  }

  b_y = NULL;
  m11 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m11);
  i45 = 0;
  for (loop_ub = 0; loop_ub < u.Yfm->size[0]; loop_ub++) {
    pData[i45] = u.Yfm->data[loop_ub];
    i45++;
  }

  emlrtAssign(&b_y, m11);
  emlrtSetFieldR2017b(y, 0, "Yfm", b_y, 0);
  emlrtSetFieldR2017b(y, 0, "Vm", c_emlrt_marshallOut(u.Vm), 1);
  emlrtSetFieldR2017b(y, 0, "betam", c_emlrt_marshallOut(u.betam), 2);
  emlrtSetFieldR2017b(y, 0, "phim", c_emlrt_marshallOut(u.phim), 3);
  emlrtSetFieldR2017b(y, 0, "thetam", c_emlrt_marshallOut(u.thetam), 4);
  i45 = b_u->size[0];
  b_u->size[0] = u.sig2m->size[0];
  emxEnsureCapacity_real_T1(sp, b_u, i45, (emlrtRTEInfo *)NULL);
  loop_ub = u.sig2m->size[0];
  for (i45 = 0; i45 < loop_ub; i45++) {
    b_u->data[i45] = u.sig2m->data[i45];
  }

  b_y = NULL;
  m11 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m11);
  i45 = 0;
  for (loop_ub = 0; loop_ub < u.sig2m->size[0]; loop_ub++) {
    pData[i45] = u.sig2m->data[loop_ub];
    i45++;
  }

  emlrtAssign(&b_y, m11);
  emlrtSetFieldR2017b(y, 0, "sig2m", b_y, 5);
  b_y = NULL;
  m11 = emlrtCreateDoubleScalar(u.lnML);
  emlrtAssign(&b_y, m11);
  emlrtSetFieldR2017b(y, 0, "lnML", b_y, 6);
  i45 = b_u->size[0];
  b_u->size[0] = u.phi_0->size[0];
  emxEnsureCapacity_real_T1(sp, b_u, i45, (emlrtRTEInfo *)NULL);
  loop_ub = u.phi_0->size[0];
  for (i45 = 0; i45 < loop_ub; i45++) {
    b_u->data[i45] = u.phi_0->data[i45];
  }

  b_y = NULL;
  m11 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m11);
  i45 = 0;
  loop_ub = 0;
  emxFree_real_T(&b_u);
  while (loop_ub < u.phi_0->size[0]) {
    pData[i45] = u.phi_0->data[loop_ub];
    i45++;
    loop_ub++;
  }

  emlrtAssign(&b_y, m11);
  emlrtSetFieldR2017b(y, 0, "phi_0", b_y, 7);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m12;
  real_T *pData;
  int32_T i46;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m12 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m12);
  i46 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i46] = u->data[b_i + u->size[0] * i];
      i46++;
    }
  }

  emlrtAssign(&y, m12);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(data), &thisId, y);
  emlrtDestroyArray(&data);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *xind, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(xind), &thisId, y);
  emlrtDestroyArray(&xind);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b0, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b0), &thisId, y);
  emlrtDestroyArray(&b0);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
  const char_T *identifier)
{
  char_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(forecast), &thisId);
  emlrtDestroyArray(&forecast);
  return y;
}

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv40[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv40);
  ret->size[0] = iv40[0];
  ret->size[1] = iv40[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv1[2] = { false, true };

  int32_T iv41[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv41);
  ret->size[0] = iv41[0];
  ret->size[1] = iv41[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv2[1] = { true };

  int32_T iv42[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv2[0],
    iv42);
  ret->size[0] = iv42[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  char_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 0U, &dims);
  emlrtImportCharR2015b(sp, src, &ret);
  emlrtDestroyArray(&src);
  return ret;
}

void ARMA_X_api(const mxArray * const prhs[16], int32_T nlhs, const mxArray
                *plhs[1])
{
  emxArray_real_T *data;
  emxArray_real_T *xind;
  emxArray_real_T *yind;
  emxArray_real_T *b0;
  emxArray_real_T *B0;
  emxArray_real_T *phi0;
  emxArray_real_T *PHI0;
  emxArray_real_T *theta0;
  emxArray_real_T *THETA0;
  emxArray_real_T *x_f;
  struct0_T Output;
  real_T a0;
  real_T d0;
  real_T n0;
  real_T n1;
  char_T forecast;
  char_T ML;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &data, 2, &pn_emlrtRTEI, true);
  emxInit_real_T(&st, &xind, 2, &pn_emlrtRTEI, true);
  emxInit_real_T(&st, &yind, 2, &pn_emlrtRTEI, true);
  emxInit_real_T1(&st, &b0, 1, &pn_emlrtRTEI, true);
  emxInit_real_T(&st, &B0, 2, &pn_emlrtRTEI, true);
  emxInit_real_T1(&st, &phi0, 1, &pn_emlrtRTEI, true);
  emxInit_real_T(&st, &PHI0, 2, &pn_emlrtRTEI, true);
  emxInit_real_T1(&st, &theta0, 1, &pn_emlrtRTEI, true);
  emxInit_real_T(&st, &THETA0, 2, &pn_emlrtRTEI, true);
  emxInit_real_T1(&st, &x_f, 1, &pn_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &Output, &pn_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "data", data);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "xind", xind);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "yind", yind);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "b0", b0);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "B0", B0);
  a0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "a0");
  d0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "d0");
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "phi0", phi0);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "PHI0", PHI0);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "theta0", theta0);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "THETA0", THETA0);
  n0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "n0");
  n1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "n1");
  forecast = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "forecast");
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "x_f", x_f);
  ML = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "ML");

  /* Invoke the target function */
  ARMA_X(&st, data, xind, yind, b0, B0, a0, d0, phi0, PHI0, theta0, THETA0, n0,
         n1, forecast, x_f, ML, &Output);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, Output);
  emxFreeStruct_struct0_T(&Output);
  x_f->canFreeData = false;
  emxFree_real_T(&x_f);
  THETA0->canFreeData = false;
  emxFree_real_T(&THETA0);
  theta0->canFreeData = false;
  emxFree_real_T(&theta0);
  PHI0->canFreeData = false;
  emxFree_real_T(&PHI0);
  phi0->canFreeData = false;
  emxFree_real_T(&phi0);
  B0->canFreeData = false;
  emxFree_real_T(&B0);
  b0->canFreeData = false;
  emxFree_real_T(&b0);
  yind->canFreeData = false;
  emxFree_real_T(&yind);
  xind->canFreeData = false;
  emxFree_real_T(&xind);
  data->canFreeData = false;
  emxFree_real_T(&data);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_ARMA_X_api.c) */

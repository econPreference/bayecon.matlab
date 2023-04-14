/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Unobserved_Component_Model_api.c
 *
 * Code generation for function '_coder_Unobserved_Component_Model_api'
 *
 */

/* Include files */
#include "_coder_Unobserved_Component_Model_api.h"
#include "Unobserved_Component_Model.h"
#include "Unobserved_Component_Model_data.h"
#include "Unobserved_Component_Model_emxutil.h"
#include "Unobserved_Component_Model_mexutil.h"
#include "Unobserved_Component_Model_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ug_emlrtRTEI = {
    1,                                       /* lineNo */
    1,                                       /* colNo */
    "_coder_Unobserved_Component_Model_api", /* fName */
    ""                                       /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *e_emlrt_marshallOut(const struct0_T u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PHI0,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);

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

static const mxArray *e_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[7] = {"phim", "sig2_wm", "sig2_em", "sig2_zm",
                                "yp",   "yc",      "x"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"phim", f_emlrt_marshallOut(u.phim),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2_wm",
                      g_emlrt_marshallOut(u.sig2_wm), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2_em",
                      g_emlrt_marshallOut(u.sig2_em), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2_zm",
                      g_emlrt_marshallOut(u.sig2_zm), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yp", f_emlrt_marshallOut(u.yp), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yc", f_emlrt_marshallOut(u.yc), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"x", f_emlrt_marshallOut(u.x), 6);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u)
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

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PHI0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(PHI0), &thisId, y);
  emlrtDestroyArray(&PHI0);
}

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u)
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

void Unobserved_Component_Model_api(const mxArray *const prhs[12],
                                    const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *PHI0;
  emxArray_real_T *data;
  emxArray_real_T *phi0;
  struct0_T Output;
  real_T d;
  real_T e01;
  real_T e02;
  real_T n0;
  real_T n1;
  real_T w01;
  real_T w02;
  real_T z01;
  real_T z02;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &data, 1, &ug_emlrtRTEI);
  emxInit_real_T(&st, &phi0, 1, &ug_emlrtRTEI);
  emxInit_real_T(&st, &PHI0, 2, &ug_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &ug_emlrtRTEI);
  /* Marshall function inputs */
  data->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "data", data);
  phi0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "phi0", phi0);
  PHI0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "PHI0", PHI0);
  w01 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "w01");
  w02 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "w02");
  e01 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "e01");
  e02 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "e02");
  z01 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "z01");
  z02 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "z02");
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "n1");
  d = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "d");
  /* Invoke the target function */
  Unobserved_Component_Model(&st, data, phi0, PHI0, w01, w02, e01, e02, z01,
                             z02, n0, n1, d, &Output);
  /* Marshall function outputs */
  *plhs = e_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &PHI0);
  emxFree_real_T(&st, &phi0);
  emxFree_real_T(&st, &data);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Unobserved_Component_Model_api.c) */

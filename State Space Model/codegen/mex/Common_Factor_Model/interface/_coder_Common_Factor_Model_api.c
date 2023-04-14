/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Common_Factor_Model_api.c
 *
 * Code generation for function '_coder_Common_Factor_Model_api'
 *
 */

/* Include files */
#include "_coder_Common_Factor_Model_api.h"
#include "Common_Factor_Model.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_mexutil.h"
#include "Common_Factor_Model_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo wg_emlrtRTEI = {
    1,                                /* lineNo */
    1,                                /* colNo */
    "_coder_Common_Factor_Model_api", /* fName */
    ""                                /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h0,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *g0,
                                   const char_T *identifier))[2];

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2];

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *G0,
                                   const char_T *identifier))[4];

static const mxArray *k_emlrt_marshallOut(const struct0_T u);

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[4];

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u);

static const mxArray *m_emlrt_marshallOut(const emxArray_real_T *u);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2];

static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[4];

/* Function Definitions */
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

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(h0), &thisId, y);
  emlrtDestroyArray(&h0);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *g0,
                                   const char_T *identifier))[2]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(g0), &thisId);
  emlrtDestroyArray(&g0);
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

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *G0,
                                   const char_T *identifier))[4]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[4];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(G0), &thisId);
  emlrtDestroyArray(&G0);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[7] = {"Hm",  "betam",  "sig2m", "Gm",
                                "mum", "sig2vm", "decomm"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Hm", l_emlrt_marshallOut(u.Hm), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"betam",
                      l_emlrt_marshallOut(u.betam), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2m",
                      l_emlrt_marshallOut(u.sig2m), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Gm", m_emlrt_marshallOut(u.Gm), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mum", m_emlrt_marshallOut(u.mum),
                      4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sig2vm",
                      m_emlrt_marshallOut(u.sig2vm), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"decomm",
                      l_emlrt_marshallOut(u.decomm), 6);
  return y;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[4]
{
  real_T(*y)[4];
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

static const mxArray *m_emlrt_marshallOut(const emxArray_real_T *u)
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

static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[4]
{
  static const int32_T dims[2] = {2, 2};
  real_T(*ret)[4];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void Common_Factor_Model_api(const mxArray *const prhs[10],
                             const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *H0;
  emxArray_real_T *a0;
  emxArray_real_T *d0;
  emxArray_real_T *h0;
  emxArray_real_T *y;
  struct0_T Output;
  real_T(*G0)[4];
  real_T(*g0)[2];
  real_T n0;
  real_T n1;
  real_T scale;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 2, &wg_emlrtRTEI);
  emxInit_real_T(&st, &h0, 1, &wg_emlrtRTEI);
  emxInit_real_T(&st, &H0, 1, &wg_emlrtRTEI);
  emxInit_real_T(&st, &a0, 1, &wg_emlrtRTEI);
  emxInit_real_T(&st, &d0, 1, &wg_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &wg_emlrtRTEI);
  /* Marshall function inputs */
  y->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  h0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "h0", h0);
  H0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "H0", H0);
  g0 = i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "g0");
  G0 = k_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "G0");
  a0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "a0", a0);
  d0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "d0", d0);
  scale = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "scale");
  n0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "n0");
  n1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "n1");
  /* Invoke the target function */
  Common_Factor_Model(&st, y, h0, H0, *g0, *G0, a0, d0, scale, n0, n1, &Output);
  /* Marshall function outputs */
  *plhs = k_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &d0);
  emxFree_real_T(&st, &a0);
  emxFree_real_T(&st, &H0);
  emxFree_real_T(&st, &h0);
  emxFree_real_T(&st, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Common_Factor_Model_api.c) */

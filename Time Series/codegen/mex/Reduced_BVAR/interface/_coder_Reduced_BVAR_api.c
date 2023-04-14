/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Reduced_BVAR_api.c
 *
 * Code generation for function '_coder_Reduced_BVAR_api'
 *
 */

/* Include files */
#include "_coder_Reduced_BVAR_api.h"
#include "Reduced_BVAR.h"
#include "Reduced_BVAR_data.h"
#include "Reduced_BVAR_emxutil.h"
#include "Reduced_BVAR_mexutil.h"
#include "Reduced_BVAR_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo xg_emlrtRTEI = {
    1,                         /* lineNo */
    1,                         /* colNo */
    "_coder_Reduced_BVAR_api", /* fName */
    ""                         /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ML,
                                 const char_T *identifier);

static const mxArray *i_emlrt_marshallOut(const struct0_T u);

static char_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static char_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b_), &thisId, y);
  emlrtDestroyArray(&b_);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ML,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  char_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(ML), &thisId);
  emlrtDestroyArray(&ML);
  return y;
}

static const mxArray *i_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[5] = {"consm", "betam", "Omegam", "yfm", "lnML"};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"consm",
                      d_emlrt_marshallOut(u.consm), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"betam",
                      d_emlrt_marshallOut(u.betam), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Omegam",
                      d_emlrt_marshallOut(u.Omegam), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yfm", d_emlrt_marshallOut(u.yfm),
                      3);
  b_y = NULL;
  m = emlrtCreateNumericArray(1, &u.lnML->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u.lnML->size[0]; b_i++) {
    pData[i] = u.lnML->data[b_i];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"lnML", b_y, 4);
  return y;
}

static char_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static char_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void Reduced_BVAR_api(const mxArray *const prhs[9], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *R0;
  emxArray_real_T *Y;
  emxArray_real_T *b_;
  emxArray_real_T *var_;
  struct0_T Output;
  real_T n0;
  real_T n1;
  real_T nu;
  real_T p;
  char_T ML;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, &xg_emlrtRTEI);
  emxInit_real_T(&st, &R0, 2, &xg_emlrtRTEI);
  emxInit_real_T(&st, &b_, 1, &xg_emlrtRTEI);
  emxInit_real_T(&st, &var_, 2, &xg_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &xg_emlrtRTEI);
  /* Marshall function inputs */
  Y->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  p = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "p");
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "n1");
  nu = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "nu");
  R0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "R0", R0);
  b_->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "b_", b_);
  var_->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "var_", var_);
  ML = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "ML");
  /* Invoke the target function */
  Reduced_BVAR(&st, Y, p, n0, n1, nu, R0, b_, var_, ML, &Output);
  /* Marshall function outputs */
  *plhs = i_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &var_);
  emxFree_real_T(&st, &b_);
  emxFree_real_T(&st, &R0);
  emxFree_real_T(&st, &Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Reduced_BVAR_api.c) */

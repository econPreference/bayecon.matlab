/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Structure_BVAR_api.c
 *
 * Code generation for function '_coder_Structure_BVAR_api'
 *
 */

/* Include files */
#include "_coder_Structure_BVAR_api.h"
#include "Structure_BVAR.h"
#include "Structure_BVAR_data.h"
#include "Structure_BVAR_emxutil.h"
#include "Structure_BVAR_mexutil.h"
#include "Structure_BVAR_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo gi_emlrtRTEI = {
    1,                           /* lineNo */
    1,                           /* colNo */
    "_coder_Structure_BVAR_api", /* fName */
    ""                           /* pName */
};

/* Function Declarations */
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_,
                               const char_T *identifier, emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ML,
                                 const char_T *identifier);

static const mxArray *k_emlrt_marshallOut(const struct0_T u);

static char_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static char_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
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

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b_), &thisId, y);
  emlrtDestroyArray(&b_);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ML,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  char_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(ML), &thisId);
  emlrtDestroyArray(&ML);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[5] = {"Bm", "Gammam", "ImpulseRespm", "decomm",
                                "lnML"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Bm", d_emlrt_marshallOut(u.Bm), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Gammam",
                      d_emlrt_marshallOut(u.Gammam), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ImpulseRespm",
                      l_emlrt_marshallOut(u.ImpulseRespm), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"decomm",
                      l_emlrt_marshallOut(u.decomm), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"lnML", j_emlrt_marshallOut(u.lnML),
                      4);
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
  int32_T iv[3];
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  iv[2] = u->size[2];
  m = emlrtCreateNumericArray(3, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[2]; b_i++) {
    for (c_i = 0; c_i < u->size[1]; c_i++) {
      for (d_i = 0; d_i < u->size[0]; d_i++) {
        pData[i] =
            u_data[(d_i + u->size[0] * c_i) + u->size[0] * u->size[1] * b_i];
        i++;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
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

void Structure_BVAR_api(const mxArray *const prhs[13], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *R0;
  emxArray_real_T *Y;
  emxArray_real_T *b_;
  emxArray_real_T *ind_chol;
  emxArray_real_T *resindex;
  emxArray_real_T *var_;
  struct0_T Output;
  real_T mlag;
  real_T n0;
  real_T n1;
  real_T nu;
  real_T p;
  real_T restriction;
  char_T ML;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, &gi_emlrtRTEI);
  emxInit_real_T(&st, &R0, 2, &gi_emlrtRTEI);
  emxInit_real_T(&st, &b_, 1, &gi_emlrtRTEI);
  emxInit_real_T(&st, &var_, 2, &gi_emlrtRTEI);
  emxInit_real_T(&st, &resindex, 1, &gi_emlrtRTEI);
  emxInit_real_T(&st, &ind_chol, 1, &gi_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &gi_emlrtRTEI);
  /* Marshall function inputs */
  Y->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  p = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "p");
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "n1");
  mlag = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "mlag");
  nu = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nu");
  R0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "R0", R0);
  b_->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "b_", b_);
  var_->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "var_", var_);
  ML = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "ML");
  restriction = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "restriction");
  resindex->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "resindex", resindex);
  ind_chol->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "ind_chol", ind_chol);
  /* Invoke the target function */
  Structure_BVAR(&st, Y, p, n0, n1, mlag, nu, R0, b_, var_, ML, restriction,
                 resindex, ind_chol, &Output);
  /* Marshall function outputs */
  *plhs = k_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &ind_chol);
  emxFree_real_T(&st, &resindex);
  emxFree_real_T(&st, &var_);
  emxFree_real_T(&st, &b_);
  emxFree_real_T(&st, &R0);
  emxFree_real_T(&st, &Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Structure_BVAR_api.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Time_Varying_Parameter_api.c
 *
 * Code generation for function '_coder_Time_Varying_Parameter_api'
 *
 */

/* Include files */
#include "_coder_Time_Varying_Parameter_api.h"
#include "Time_Varying_Parameter.h"
#include "Time_Varying_Parameter_data.h"
#include "Time_Varying_Parameter_emxutil.h"
#include "Time_Varying_Parameter_mexutil.h"
#include "Time_Varying_Parameter_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo gj_emlrtRTEI = {
    1,                                   /* lineNo */
    1,                                   /* colNo */
    "_coder_Time_Varying_Parameter_api", /* fName */
    ""                                   /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Z,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier);

static char_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *k_emlrt_marshallOut(const struct0_T u);

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u);

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

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Z,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(Z), &thisId, y);
  emlrtDestroyArray(&Z);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forecast,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  char_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(forecast), &thisId);
  emlrtDestroyArray(&forecast);
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

static const mxArray *k_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[6] = {"Yfm",    "betam", "Omegam",
                                "Sigmam", "lnML",  "beta1m"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[3];
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Yfm", l_emlrt_marshallOut(u.Yfm),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"betam",
                      g_emlrt_marshallOut(u.betam), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Omegam",
                      g_emlrt_marshallOut(u.Omegam), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Sigmam",
                      l_emlrt_marshallOut(u.Sigmam), 3);
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u.lnML);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"lnML", b_y, 4);
  c_y = NULL;
  iv[0] = u.beta1m->size[0];
  iv[1] = u.beta1m->size[1];
  iv[2] = u.beta1m->size[2];
  m = emlrtCreateNumericArray(3, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u.beta1m->size[2]; b_i++) {
    for (c_i = 0; c_i < u.beta1m->size[1]; c_i++) {
      for (d_i = 0; d_i < u.beta1m->size[0]; d_i++) {
        pData[i] = u.beta1m->data[(d_i + u.beta1m->size[0] * c_i) +
                                  u.beta1m->size[0] * u.beta1m->size[1] * b_i];
        i++;
      }
    }
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta1m", c_y, 5);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emxArray_real_T *u)
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

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void Time_Varying_Parameter_api(const mxArray *const prhs[18],
                                const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *H;
  emxArray_real_T *R0;
  emxArray_real_T *Y;
  emxArray_real_T *Z;
  emxArray_real_T *b_;
  emxArray_real_T *res_x;
  emxArray_real_T *var_;
  emxArray_real_T *x0_f;
  emxArray_real_T *x1_f;
  const mxArray *prhs_copy_idx_1;
  struct0_T Output;
  real_T a0;
  real_T d;
  real_T d0;
  real_T n0;
  real_T n1;
  real_T nu;
  char_T ML;
  char_T forecast;
  char_T restriction;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 1, &gj_emlrtRTEI);
  emxInit_real_T(&st, &Z, 2, &gj_emlrtRTEI);
  emxInit_real_T(&st, &H, 2, &gj_emlrtRTEI);
  emxInit_real_T(&st, &b_, 1, &gj_emlrtRTEI);
  emxInit_real_T(&st, &var_, 2, &gj_emlrtRTEI);
  emxInit_real_T(&st, &R0, 2, &gj_emlrtRTEI);
  emxInit_real_T(&st, &x0_f, 1, &gj_emlrtRTEI);
  emxInit_real_T(&st, &x1_f, 1, &gj_emlrtRTEI);
  emxInit_real_T(&st, &res_x, 1, &gj_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &gj_emlrtRTEI);
  prhs_copy_idx_1 = emlrtProtectR2012b(prhs[1], 1, false, -1);
  /* Marshall function inputs */
  Y->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  Z->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_1), "Z", Z);
  H->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "H", H);
  b_->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "b_", b_);
  var_->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "var_", var_);
  nu = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nu");
  R0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "R0", R0);
  a0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "a0");
  d0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "d0");
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "n1");
  forecast = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "forecast");
  x0_f->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "x0_f", x0_f);
  x1_f->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "x1_f", x1_f);
  ML = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "ML");
  restriction = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "restriction");
  res_x->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[16]), "res_x", res_x);
  d = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "d");
  /* Invoke the target function */
  Time_Varying_Parameter(&st, Y, Z, H, b_, var_, nu, R0, a0, d0, n0, n1,
                         forecast, x0_f, x1_f, ML, restriction, res_x, d,
                         &Output);
  /* Marshall function outputs */
  *plhs = k_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &res_x);
  emxFree_real_T(&st, &x1_f);
  emxFree_real_T(&st, &x0_f);
  emxFree_real_T(&st, &R0);
  emxFree_real_T(&st, &var_);
  emxFree_real_T(&st, &b_);
  emxFree_real_T(&st, &H);
  emxFree_real_T(&st, &Z);
  emxFree_real_T(&st, &Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Time_Varying_Parameter_api.c) */

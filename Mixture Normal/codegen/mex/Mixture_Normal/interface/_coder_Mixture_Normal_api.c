/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Mixture_Normal_api.c
 *
 * Code generation for function '_coder_Mixture_Normal_api'
 *
 */

/* Include files */
#include "_coder_Mixture_Normal_api.h"
#include "Mixture_Normal.h"
#include "Mixture_Normal_data.h"
#include "Mixture_Normal_emxutil.h"
#include "Mixture_Normal_mexutil.h"
#include "Mixture_Normal_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo nf_emlrtRTEI = {
    1,                           /* lineNo */
    1,                           /* colNo */
    "_coder_Mixture_Normal_api", /* fName */
    ""                           /* pName */
};

/* Function Declarations */
static const mxArray *c_emlrt_marshallOut(const struct0_T u);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Omegam,
                               const char_T *identifier, emxArray_real_T *y);

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
static const mxArray *c_emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[3] = {"mum", "Sm", "Sigmam"};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[3];
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mum", b_emlrt_marshallOut(u.mum),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Sm", b_emlrt_marshallOut(u.Sm), 1);
  b_y = NULL;
  iv[0] = u.Sigmam->size[0];
  iv[1] = u.Sigmam->size[1];
  iv[2] = u.Sigmam->size[2];
  m = emlrtCreateNumericArray(3, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u.Sigmam->size[2]; b_i++) {
    for (c_i = 0; c_i < u.Sigmam->size[1]; c_i++) {
      for (d_i = 0; d_i < u.Sigmam->size[0]; d_i++) {
        pData[i] = u.Sigmam->data[(d_i + u.Sigmam->size[0] * c_i) +
                                  u.Sigmam->size[0] * u.Sigmam->size[1] * b_i];
        i++;
      }
    }
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Sigmam", b_y, 2);
  return y;
}

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
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Omegam,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(Omegam), &thisId, y);
  emlrtDestroyArray(&Omegam);
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

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[3] = {-1, -1, -1};
  int32_T iv[3];
  int32_T i;
  const boolean_T bv[3] = {true, true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 3U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1] * iv[2];
  i = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  ret->size[2] = iv[2];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void Mixture_Normal_api(const mxArray *const prhs[7], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *Omegam;
  emxArray_real_T *Y;
  emxArray_real_T *bm_;
  emxArray_real_T *varm_;
  const mxArray *prhs_copy_idx_4;
  struct0_T Output;
  real_T M;
  real_T n0;
  real_T n1;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, &nf_emlrtRTEI);
  emxInit_real_T(&st, &bm_, 2, &nf_emlrtRTEI);
  emxInit_real_T(&st, &varm_, 2, &nf_emlrtRTEI);
  emxInit_real_T(&st, &Omegam, 3, &nf_emlrtRTEI);
  emxInitStruct_struct0_T(&st, &Output, &nf_emlrtRTEI);
  prhs_copy_idx_4 = emlrtProtectR2012b(prhs[4], 4, false, -1);
  /* Marshall function inputs */
  Y->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  M = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "M");
  bm_->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bm_", bm_);
  varm_->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "varm_", varm_);
  Omegam->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_4), "Omegam", Omegam);
  n0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "n0");
  n1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "n1");
  /* Invoke the target function */
  Mixture_Normal(&st, Y, M, bm_, varm_, Omegam, n0, n1, &Output);
  /* Marshall function outputs */
  *plhs = c_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&st, &Output);
  emxFree_real_T(&st, &Omegam);
  emxFree_real_T(&st, &varm_);
  emxFree_real_T(&st, &bm_);
  emxFree_real_T(&st, &Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Mixture_Normal_api.c) */

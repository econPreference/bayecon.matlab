/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_Mixture_Normal_api.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <string.h>
#include "tmwtypes.h"
#include "_coder_Mixture_Normal_api.h"
#include "_coder_Mixture_Normal_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "Mixture_Normal",                    /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *M, const
  char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Omegam,
  const char_T *identifier, emxArray_real_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct0_T *u);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxFreeStruct_struct0_T(struct0_T *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  boolean_T doPush);
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static void emxInit_real_T1(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *plot,
  const char_T *identifier))[2];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i1;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m1 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m1);
  i1 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i1] = u->data[b_i + u->size[0] * i];
      i1++;
    }
  }

  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *M
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *M, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(M), &thisId);
  emlrtDestroyArray(&M);
  return y;
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  real_T *pData;
  int32_T i2;
  int32_T i;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m2);
  i2 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i2] = u->data[u->size[0] * i];
    i2++;
  }

  emlrtAssign(&y, m2);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Omegam
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Omegam,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(Omegam), &thisId, y);
  emlrtDestroyArray(&Omegam);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Y
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(Y), &thisId, y);
  emlrtDestroyArray(&Y);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const struct0_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct0_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  static const char * sv0[10] = { "mum", "Sm", "Sigmam", "Xa", "Ya", "Z", "plot",
    "Omega_hat", "x", "y" };

  int32_T i0;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m0;
  real_T *pData;
  int32_T i;
  int32_T b_i;
  static const int32_T iv0[1] = { 2 };

  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &b_u, 3, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 10, sv0));
  emlrtSetFieldR2017b(y, 0, "mum", b_emlrt_marshallOut(u->mum), 0);
  emlrtSetFieldR2017b(y, 0, "Sm", b_emlrt_marshallOut(u->Sm), 1);
  i0 = b_u->size[0] * b_u->size[1] * b_u->size[2];
  b_u->size[0] = u->Sigmam->size[0];
  b_u->size[1] = u->Sigmam->size[1];
  b_u->size[2] = u->Sigmam->size[2];
  emxEnsureCapacity_real_T(b_u, i0);
  loop_ub = u->Sigmam->size[0] * u->Sigmam->size[1] * u->Sigmam->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_u->data[i0] = u->Sigmam->data[i0];
  }

  b_y = NULL;
  m0 = emlrtCreateNumericArray(3, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m0);
  i0 = 0;
  loop_ub = 0;
  emxFree_real_T(&b_u);
  while (loop_ub < u->Sigmam->size[2]) {
    for (i = 0; i < u->Sigmam->size[1]; i++) {
      for (b_i = 0; b_i < u->Sigmam->size[0]; b_i++) {
        pData[i0] = u->Sigmam->data[(b_i + u->Sigmam->size[0] * i) + u->
          Sigmam->size[0] * u->Sigmam->size[1] * loop_ub];
        i0++;
      }
    }

    loop_ub++;
  }

  emlrtAssign(&b_y, m0);
  emlrtSetFieldR2017b(y, 0, "Sigmam", b_y, 2);
  emlrtSetFieldR2017b(y, 0, "Xa", b_emlrt_marshallOut(u->Xa), 3);
  emlrtSetFieldR2017b(y, 0, "Ya", b_emlrt_marshallOut(u->Ya), 4);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->Z);
  emlrtAssign(&b_y, m0);
  emlrtSetFieldR2017b(y, 0, "Z", b_y, 5);
  b_y = NULL;
  m0 = emlrtCreateNumericArray(1, iv0, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m0);
  i0 = 0;
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[i0] = u->plot[loop_ub];
    i0++;
  }

  emlrtAssign(&b_y, m0);
  emlrtSetFieldR2017b(y, 0, "plot", b_y, 6);
  emlrtSetFieldR2017b(y, 0, "Omega_hat", b_emlrt_marshallOut(u->Omega_hat), 7);
  emlrtSetFieldR2017b(y, 0, "x", c_emlrt_marshallOut(u->x), 8);
  emlrtSetFieldR2017b(y, 0, "y", c_emlrt_marshallOut(u->y), 9);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/*
 * Arguments    : emxArray_real_T *emxArray
 *                int32_T oldNumel
 * Return Type  : void
 */
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : struct0_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct0_T(struct0_T *pStruct)
{
  emxFree_real_T(&pStruct->mum);
  emxFree_real_T(&pStruct->Sm);
  emxFree_real_T(&pStruct->Sigmam);
  emxFree_real_T(&pStruct->Xa);
  emxFree_real_T(&pStruct->Ya);
  emxFree_real_T(&pStruct->Omega_hat);
  emxFree_real_T(&pStruct->x);
  emxFree_real_T(&pStruct->y);
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct0_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->mum, 2, doPush);
  emxInit_real_T(sp, &pStruct->Sm, 2, doPush);
  emxInit_real_T1(sp, &pStruct->Sigmam, 3, doPush);
  emxInit_real_T(sp, &pStruct->Xa, 2, doPush);
  emxInit_real_T(sp, &pStruct->Ya, 2, doPush);
  emxInit_real_T(sp, &pStruct->Omega_hat, 2, doPush);
  emxInit_real_T(sp, &pStruct->x, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 2, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T1(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *plot
 *                const char_T *identifier
 * Return Type  : real_T (*)[2]
 */
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *plot,
  const char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(plot), &thisId);
  emlrtDestroyArray(&plot);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[2]
 */
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv1[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv1);
  ret->size[0] = iv1[0];
  ret->size[1] = iv1[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, -1 };

  const boolean_T bv1[3] = { true, true, true };

  int32_T iv2[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv1[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->size[2] = iv2[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[2]
 */
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[1] = { 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const mxArray * const prhs[8]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
  void Mixture_Normal_api(const mxArray * const prhs[8], int32_T nlhs, const
  mxArray *plhs[1])
{
  emxArray_real_T *Y;
  emxArray_real_T *bm_;
  emxArray_real_T *varm_;
  emxArray_real_T *Omegam;
  struct0_T Output;
  const mxArray *prhs_copy_idx_4;
  real_T M;
  real_T n0;
  real_T n1;
  real_T (*plot)[2];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_real_T(&st, &bm_, 2, true);
  emxInit_real_T(&st, &varm_, 2, true);
  emxInit_real_T1(&st, &Omegam, 3, true);
  emxInitStruct_struct0_T(&st, &Output, true);
  prhs_copy_idx_4 = emlrtProtectR2012b(prhs[4], 4, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  M = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "M");
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bm_", bm_);
  emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "varm_", varm_);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_4), "Omegam", Omegam);
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "n1");
  plot = g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "plot");

  /* Invoke the target function */
  Mixture_Normal(Y, M, bm_, varm_, Omegam, n0, n1, *plot, &Output);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, &Output);
  emxFreeStruct_struct0_T(&Output);
  Omegam->canFreeData = false;
  emxFree_real_T(&Omegam);
  varm_->canFreeData = false;
  emxFree_real_T(&varm_);
  bm_->canFreeData = false;
  emxFree_real_T(&bm_);
  Y->canFreeData = false;
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Mixture_Normal_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  Mixture_Normal_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Mixture_Normal_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Mixture_Normal_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_Mixture_Normal_api.c
 *
 * [EOF]
 */

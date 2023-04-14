/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Unit_Root_api.c
 *
 * Code generation for function '_coder_Unit_Root_api'
 *
 */

/* Include files */
#include "_coder_Unit_Root_api.h"
#include "Auto_Unit.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "Unit_Root_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo nn_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_Unit_Root_api",              /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Data, const
  char_T *identifier, emxArray_real_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PHI0, const
  char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static const mxArray *m_emlrt_marshallOut(const struct0_T u);

/* Function Definitions */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Data, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(Data), &thisId, y);
  emlrtDestroyArray(&Data);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PHI0, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(PHI0), &thisId, y);
  emlrtDestroyArray(&PHI0);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv[1] = { true };

  int32_T iv[1];
  int32_T i;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv[0],
    iv);
  ret->allocatedSize = iv[0];
  i = ret->size[0];
  ret->size[0] = iv[0];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv[2] = { true, true };

  int32_T iv[2];
  int32_T i;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static const mxArray *m_emlrt_marshallOut(const struct0_T u)
{
  const mxArray *y;
  static const char * sv[5] = { "betam", "cm", "phim", "sigma2m", "logpostm" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, sv));
  emlrtSetFieldR2017b(y, 0, "betam", b_emlrt_marshallOut(u.betam), 0);
  emlrtSetFieldR2017b(y, 0, "cm", emlrt_marshallOut(u.cm), 1);
  emlrtSetFieldR2017b(y, 0, "phim", emlrt_marshallOut(u.phim), 2);
  emlrtSetFieldR2017b(y, 0, "sigma2m", b_emlrt_marshallOut(u.sigma2m), 3);
  emlrtSetFieldR2017b(y, 0, "logpostm", b_emlrt_marshallOut(u.logpostm), 4);
  return y;
}

void Unit_Root_api(const mxArray * const prhs[15], int32_T nlhs, const mxArray
                   *plhs[3])
{
  emxArray_real_T *Data;
  emxArray_real_T *phi0;
  emxArray_real_T *PHI0;
  emxArray_real_T *c0;
  emxArray_real_T *C0;
  struct0_T Output;
  real_T kk;
  real_T vv;
  real_T a0;
  real_T d0;
  real_T n0;
  real_T n1;
  real_T mode;
  real_T q;
  real_T a;
  real_T b;
  const mxArray *ML_Un;
  const mxArray *ML_Re;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Data, 1, &nn_emlrtRTEI, true);
  emxInit_real_T(&st, &phi0, 1, &nn_emlrtRTEI, true);
  emxInit_real_T(&st, &PHI0, 2, &nn_emlrtRTEI, true);
  emxInit_real_T(&st, &c0, 1, &nn_emlrtRTEI, true);
  emxInit_real_T(&st, &C0, 2, &nn_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &Output, &nn_emlrtRTEI, true);

  /* Marshall function inputs */
  Data->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Data", Data);
  kk = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "kk");
  vv = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "vv");
  a0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "a0");
  d0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "d0");
  phi0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "phi0", phi0);
  PHI0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "PHI0", PHI0);
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "n1");
  mode = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "mode");
  q = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "q");
  a = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "a");
  b = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "b");
  c0->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "c0", c0);
  C0->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "C0", C0);

  /* Invoke the target function */
  Unit_Root(&st, Data, kk, vv, a0, d0, phi0, PHI0, n0, n1, mode, q, a, b, c0, C0,
            &Output, &ML_Un, &ML_Re);

  /* Marshall function outputs */
  plhs[0] = m_emlrt_marshallOut(Output);
  emxFreeStruct_struct0_T(&Output);
  emxFree_real_T(&C0);
  emxFree_real_T(&c0);
  emxFree_real_T(&PHI0);
  emxFree_real_T(&phi0);
  emxFree_real_T(&Data);
  if (nlhs > 1) {
    plhs[1] = ML_Un;
  }

  if (nlhs > 2) {
    plhs[2] = ML_Re;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Unit_Root_api.c) */

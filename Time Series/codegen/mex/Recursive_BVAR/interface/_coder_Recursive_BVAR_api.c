/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Recursive_BVAR_api.c
 *
 * Code generation for function '_coder_Recursive_BVAR_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "_coder_Recursive_BVAR_api.h"
#include "Recursive_BVAR_emxutil.h"
#include "Recursive_BVAR_mexutil.h"
#include "Recursive_BVAR_data.h"

/* Variable Definitions */
static emlrtRTEInfo kj_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_Recursive_BVAR_api",         /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y, const
  char_T *identifier, emxArray_real_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_, const
  char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ML, const
  char_T *identifier);
static char_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static char_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  static const char * sv0[6] = { "Bm", "consm", "Gammam", "sigmam",
    "ImpulseRespm", "lnML" };

  int32_T i42;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m9;
  real_T *pData;
  int32_T i;
  int32_T b_i;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T2(sp, &b_u, 3, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 6, sv0));
  emlrtSetFieldR2017b(y, 0, "Bm", emlrt_marshallOut(u.Bm), 0);
  emlrtSetFieldR2017b(y, 0, "consm", emlrt_marshallOut(u.consm), 1);
  emlrtSetFieldR2017b(y, 0, "Gammam", emlrt_marshallOut(u.Gammam), 2);
  emlrtSetFieldR2017b(y, 0, "sigmam", emlrt_marshallOut(u.sigmam), 3);
  i42 = b_u->size[0] * b_u->size[1] * b_u->size[2];
  b_u->size[0] = u.ImpulseRespm->size[0];
  b_u->size[1] = u.ImpulseRespm->size[1];
  b_u->size[2] = u.ImpulseRespm->size[2];
  emxEnsureCapacity_real_T1(sp, b_u, i42, (emlrtRTEInfo *)NULL);
  loop_ub = u.ImpulseRespm->size[0] * u.ImpulseRespm->size[1] *
    u.ImpulseRespm->size[2];
  for (i42 = 0; i42 < loop_ub; i42++) {
    b_u->data[i42] = u.ImpulseRespm->data[i42];
  }

  b_y = NULL;
  m9 = emlrtCreateNumericArray(3, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m9);
  i42 = 0;
  loop_ub = 0;
  emxFree_real_T(&b_u);
  while (loop_ub < u.ImpulseRespm->size[2]) {
    for (i = 0; i < u.ImpulseRespm->size[1]; i++) {
      for (b_i = 0; b_i < u.ImpulseRespm->size[0]; b_i++) {
        pData[i42] = u.ImpulseRespm->data[(b_i + u.ImpulseRespm->size[0] * i) +
          u.ImpulseRespm->size[0] * u.ImpulseRespm->size[1] * loop_ub];
        i42++;
      }
    }

    loop_ub++;
  }

  emlrtAssign(&b_y, m9);
  emlrtSetFieldR2017b(y, 0, "ImpulseRespm", b_y, 4);
  b_y = NULL;
  m9 = emlrtCreateDoubleScalar(u.lnML);
  emlrtAssign(&b_y, m9);
  emlrtSetFieldR2017b(y, 0, "lnML", b_y, 5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(Y), &thisId, y);
  emlrtDestroyArray(&Y);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b_), &thisId, y);
  emlrtDestroyArray(&b_);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ML, const
  char_T *identifier)
{
  char_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(ML), &thisId);
  emlrtDestroyArray(&ML);
  return y;
}

static char_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv38[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv38);
  ret->size[0] = iv38[0];
  ret->size[1] = iv38[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv1[1] = { true };

  int32_T iv39[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv1[0],
    iv39);
  ret->size[0] = iv39[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static char_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  char_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 0U, &dims);
  emlrtImportCharR2015b(sp, src, &ret);
  emlrtDestroyArray(&src);
  return ret;
}

void Recursive_BVAR_api(const mxArray * const prhs[10], int32_T nlhs, const
  mxArray *plhs[1])
{
  emxArray_real_T *Y;
  emxArray_real_T *R0;
  emxArray_real_T *b_;
  emxArray_real_T *var_;
  struct0_T Output;
  real_T p;
  real_T n0;
  real_T n1;
  real_T mlag;
  real_T nu;
  char_T ML;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, &kj_emlrtRTEI, true);
  emxInit_real_T(&st, &R0, 2, &kj_emlrtRTEI, true);
  emxInit_real_T1(&st, &b_, 1, &kj_emlrtRTEI, true);
  emxInit_real_T(&st, &var_, 2, &kj_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &Output, &kj_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  p = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "p");
  n0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "n0");
  n1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "n1");
  mlag = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "mlag");
  nu = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nu");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "R0", R0);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "b_", b_);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "var_", var_);
  ML = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "ML");

  /* Invoke the target function */
  Recursive_BVAR(&st, Y, p, n0, n1, mlag, nu, R0, b_, var_, ML, &Output);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, Output);
  emxFreeStruct_struct0_T(&Output);
  var_->canFreeData = false;
  emxFree_real_T(&var_);
  b_->canFreeData = false;
  emxFree_real_T(&b_);
  R0->canFreeData = false;
  emxFree_real_T(&R0);
  Y->canFreeData = false;
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Recursive_BVAR_api.c) */

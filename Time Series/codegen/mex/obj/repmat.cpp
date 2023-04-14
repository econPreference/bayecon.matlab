/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.cpp
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "obj.h"
#include "repmat.h"
#include "assertValidSizeArg.h"
#include "obj_emxutil.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 46,    /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 52,/* lineNo */
  9,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRSInfo qc_emlrtRSI = { 46, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

/* Function Declarations */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void repmat(const emlrtStack *sp, ptrdiff_t a, int32_T varargin_1,
            emxArray_ptrdiff_t *b)
{
  int32_T i3;
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  assertValidSizeArg();
  if (static_cast<uint16_T>(varargin_1) != varargin_1) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m1, (char_T *)&u[0]);
    emlrtAssign(&y, m1);
    st.site = &qc_emlrtRSI;
    error(&st, y, &emlrtMCI);
  }

  i3 = b->size[0];
  b->size[0] = static_cast<uint16_T>(varargin_1);
  emxEnsureCapacity_ptrdiff_t(sp, b, i3, &m_emlrtRTEI);
  loop_ub = static_cast<uint16_T>(varargin_1);
  for (i3 = 0; i3 < loop_ub; i3++) {
    b->data[i3] = a;
  }
}

/* End of code generation (repmat.cpp) */

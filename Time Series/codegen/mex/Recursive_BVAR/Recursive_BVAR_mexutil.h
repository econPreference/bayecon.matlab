/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Recursive_BVAR_mexutil.h
 *
 * Code generation for function 'Recursive_BVAR_mexutil'
 *
 */

#ifndef RECURSIVE_BVAR_MEXUTIL_H
#define RECURSIVE_BVAR_MEXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Recursive_BVAR_types.h"

/* Function Declarations */
extern real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *e_feval,
  const char_T *identifier);
extern real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
extern void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
extern real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

#endif

/* End of code generation (Recursive_BVAR_mexutil.h) */

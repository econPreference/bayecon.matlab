/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ARMA_X_mexutil.h
 *
 * Code generation for function 'ARMA_X_mexutil'
 *
 */

#ifndef ARMA_X_MEXUTIL_H
#define ARMA_X_MEXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ARMA_X_types.h"

/* Function Declarations */
extern real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
extern void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *e_feval,
  const char_T *identifier);
extern real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
extern void m_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

#endif

/* End of code generation (ARMA_X_mexutil.h) */

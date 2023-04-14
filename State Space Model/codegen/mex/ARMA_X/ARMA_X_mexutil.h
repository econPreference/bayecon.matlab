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

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo *location);

void c_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[14]);

void c_error(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14]);

void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

real_T emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier);

const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, const mxArray *m4,
                     emlrtMCInfo *location);

real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* End of code generation (ARMA_X_mexutil.h) */

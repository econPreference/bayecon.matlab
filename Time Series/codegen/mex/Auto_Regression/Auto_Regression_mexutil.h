/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Auto_Regression_mexutil.h
 *
 * Code generation for function 'Auto_Regression_mexutil'
 *
 */

#pragma once

/* Include files */
#include "Auto_Regression_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14]);

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo *location);

real_T c_emlrt_marshallIn(const emlrtStack *sp,
                          const mxArray *a__output_of_feval_,
                          const char_T *identifier);

real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

void emlrt_marshallIn(const emlrtStack *sp,
                      const mxArray *a__output_of_sprintf_,
                      const char_T *identifier, char_T y[14]);

const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, const mxArray *m4,
                     emlrtMCInfo *location);

const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);

void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

/* End of code generation (Auto_Regression_mexutil.h) */

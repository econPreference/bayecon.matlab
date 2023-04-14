/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Mixture_Normal_mexutil.h
 *
 * Code generation for function 'Mixture_Normal_mexutil'
 *
 */

#pragma once

/* Include files */
#include "Mixture_Normal_types.h"
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

const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo *location);

void c_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[14]);

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14]);

real_T emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier);

const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, const mxArray *m4,
                     emlrtMCInfo *location);

real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* End of code generation (Mixture_Normal_mexutil.h) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unit_Root_mexutil.h
 *
 * Code generation for function 'Unit_Root_mexutil'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Unit_Root_types.h"

/* Function Declarations */
void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, emlrtMCInfo *location);
real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_feval_, const char_T *identifier);
const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[23]);
void clc(const emlrtStack *sp, emlrtMCInfo *location);
real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  const mxArray *d, const mxArray *e, emlrtMCInfo *location);
void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
                      denominator);
const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[6]);
void emlrt_marshallIn(const emlrtStack *sp, const mxArray *a__output_of_sprintf_,
                      const char_T *identifier, char_T y[14]);
const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u[37]);
void format(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u[8]);
const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u[5]);
void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
const mxArray *i_emlrt_marshallOut(const emxArray_real_T *u);
real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u[10]);
const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u[17]);
const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u[38]);

/* End of code generation (Unit_Root_mexutil.h) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unobserved_Component_Model_mexutil.h
 *
 * Code generation for function 'Unobserved_Component_Model_mexutil'
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
real_T c_emlrt_marshallIn(const emlrtStack *sp,
                          const mxArray *a__output_of_feval_,
                          const char_T *identifier);

real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

/* End of code generation (Unobserved_Component_Model_mexutil.h) */

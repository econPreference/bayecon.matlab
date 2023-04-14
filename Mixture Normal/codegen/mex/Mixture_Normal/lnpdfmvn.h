/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfmvn.h
 *
 * Code generation for function 'lnpdfmvn'
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
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                        const emxArray_real_T *r1, const emxArray_real_T *psum);

void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *psum,
                        const emxArray_real_T *psuml,
                        const emxArray_real_T *betam, int32_T m);

void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *A,
                        const emxArray_real_T *psuml,
                        const emxArray_real_T *betam, int32_T m);

/* End of code generation (lnpdfmvn.h) */

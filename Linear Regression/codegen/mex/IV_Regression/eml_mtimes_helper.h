/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.h
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

#pragma once

/* Include files */
#include "IV_Regression_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB);

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB);

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                         const emxArray_real_T *b, int32_T innerDimA,
                         int32_T innerDimB);

void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r3,
                        const emxArray_real_T *Y, int32_T i, real_T y,
                        const emxArray_real_T *Xs, const emxArray_real_T *r4,
                        real_T b_y, const emxArray_real_T *r5);

void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *d_sum);

/* End of code generation (eml_mtimes_helper.h) */

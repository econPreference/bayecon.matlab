/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * demeanc.h
 *
 * Code generation for function 'demeanc'
 *
 */

#pragma once

/* Include files */
#include "Structure_BVAR_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *Y0,
                        const emxArray_real_T *Y, int32_T i2, int32_T i3);

void minus(const emlrtStack *sp, emxArray_real_T *YL, const emxArray_real_T *A);

/* End of code generation (demeanc.h) */

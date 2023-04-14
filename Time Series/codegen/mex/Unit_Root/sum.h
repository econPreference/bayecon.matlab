/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.h
 *
 * Code generation for function 'sum'
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
real_T b_sum(const emlrtStack *sp, const emxArray_real_T *x);
void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y);

/* End of code generation (sum.h) */

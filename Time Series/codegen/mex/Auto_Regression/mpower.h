/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mpower.h
 *
 * Code generation for function 'mpower'
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
real_T b_mpower(const emlrtStack *sp, real_T a, real_T b);

void mpower(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *c);

/* End of code generation (mpower.h) */

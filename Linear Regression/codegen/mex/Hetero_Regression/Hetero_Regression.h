/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hetero_Regression.h
 *
 * Code generation for function 'Hetero_Regression'
 *
 */

#pragma once

/* Include files */
#include "Hetero_Regression_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Hetero_Regression(const emlrtStack *sp, const emxArray_real_T *Y,
                       const emxArray_real_T *X, const emxArray_real_T *b0,
                       const emxArray_real_T *B0, real_T a0, real_T d0,
                       real_T v, real_T n0, real_T n1, char_T forecast,
                       const emxArray_real_T *x_f, char_T ML,
                       struct0_T *Output);

/* End of code generation (Hetero_Regression.h) */

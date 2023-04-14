/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Ordinary_Regression.h
 *
 * Code generation for function 'Ordinary_Regression'
 *
 */

#pragma once

/* Include files */
#include "Ordinary_Regression_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Ordinary_Regression(const emlrtStack *sp, const emxArray_real_T *Y,
                         const emxArray_real_T *X, const emxArray_real_T *b_0,
                         const emxArray_real_T *B_0, real_T a_0, real_T d_0,
                         real_T n0, real_T n1, char_T forecast,
                         const emxArray_real_T *x_f, char_T ML,
                         struct0_T *Output);

/* End of code generation (Ordinary_Regression.h) */

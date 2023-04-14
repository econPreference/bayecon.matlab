/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Auto_Regression.h
 *
 * Code generation for function 'Auto_Regression'
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
void Auto_Regression(const emlrtStack *sp, const emxArray_real_T *data,
                     const emxArray_real_T *xind, const emxArray_real_T *yind,
                     const emxArray_real_T *b0, const emxArray_real_T *B0,
                     real_T a0, real_T d0, const emxArray_real_T *phi0,
                     const emxArray_real_T *PHI0, real_T n0, real_T n1,
                     char_T forecast, const emxArray_real_T *x_f, char_T ML,
                     struct0_T *Output);

/* End of code generation (Auto_Regression.h) */

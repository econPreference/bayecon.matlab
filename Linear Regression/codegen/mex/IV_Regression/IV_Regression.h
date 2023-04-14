/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IV_Regression.h
 *
 * Code generation for function 'IV_Regression'
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
void IV_Regression(const emlrtStack *sp, const emxArray_real_T *data,
                   const emxArray_real_T *b0, const emxArray_real_T *B0,
                   real_T v0, const emxArray_real_T *R0,
                   const emxArray_real_T *gamma0, const emxArray_real_T *G0,
                   real_T n0, real_T n1, real_T yind,
                   const emxArray_real_T *exoind,
                   const emxArray_real_T *endoind, const emxArray_real_T *zind,
                   char_T forecast, const emxArray_real_T *x_f, char_T ML,
                   struct0_T *Output);

/* End of code generation (IV_Regression.h) */

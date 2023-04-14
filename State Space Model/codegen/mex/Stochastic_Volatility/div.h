/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * div.h
 *
 * Code generation for function 'div'
 *
 */

#pragma once

/* Include files */
#include "Stochastic_Volatility_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void rdivide(const emlrtStack *sp, emxArray_real_T *Y,
             const emxArray_real_T *vol);

/* End of code generation (div.h) */

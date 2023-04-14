/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Stochastic_Volatility.h
 *
 * Code generation for function 'Stochastic_Volatility'
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
void Stochastic_Volatility(const emlrtStack *sp, const emxArray_real_T *ym,
                           const emxArray_real_T *X, real_T n0, real_T n1,
                           const emxArray_real_T *beta0,
                           const emxArray_real_T *B0,
                           const emxArray_real_T *gamma0,
                           const emxArray_real_T *Gamma0, real_T v0, real_T d0,
                           char_T forecast, const emxArray_real_T *x_f,
                           char_T ML, real_T d, struct0_T *Output);

/* End of code generation (Stochastic_Volatility.h) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfmvn.h
 *
 * Code generation for function 'lnpdfmvn'
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
real_T b_lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x,
                  const emxArray_real_T *m, const emxArray_real_T *C);

real_T lnpdfmvn(real_T x, real_T m, real_T C);

/* End of code generation (lnpdfmvn.h) */

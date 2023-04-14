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
#include "IV_Regression_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x,
                const emxArray_real_T *m, const emxArray_real_T *C);

/* End of code generation (lnpdfmvn.h) */

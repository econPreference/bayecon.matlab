/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.h
 *
 * Code generation for function 'det'
 *
 */

#pragma once

/* Include files */
#include "Reduced_BVAR_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T det(const emlrtStack *sp, const emxArray_real_T *x);

/* End of code generation (det.h) */

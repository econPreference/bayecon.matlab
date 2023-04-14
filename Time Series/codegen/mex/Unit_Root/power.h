/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.h
 *
 * Code generation for function 'power'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Unit_Root_types.h"

/* Function Declarations */
void b_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y);
void power(const emlrtStack *sp, const emxArray_real_T *a, real_T b,
           emxArray_real_T *y);

/* End of code generation (power.h) */

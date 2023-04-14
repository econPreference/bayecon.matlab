/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * kron.h
 *
 * Code generation for function 'kron'
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
void kron(const emlrtStack *sp, const emxArray_real_T *A, const emxArray_real_T *
          B, emxArray_real_T *K);

/* End of code generation (kron.h) */

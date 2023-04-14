/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#pragma once

/* Include files */
#include "Common_Factor_Model_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_mldivide(const emlrtStack *sp, const creal_T A[4],
                const emxArray_creal_T *B, emxArray_creal_T *Y);

void mldivide(const emlrtStack *sp, const creal_T A[4], const creal_T B[2],
              creal_T Y[2]);

/* End of code generation (mldivide.h) */

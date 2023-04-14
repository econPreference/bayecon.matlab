/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgetrf.h
 *
 * Code generation for function 'xgetrf'
 *
 */

#pragma once

/* Include files */
#include "Structure_BVAR_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
              int32_T lda, emxArray_int32_T *ipiv, int32_T *info);

void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T *A,
            int32_T lda, emxArray_int32_T *ipiv);

/* End of code generation (xgetrf.h) */

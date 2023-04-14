/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * invpd.h
 *
 * Code generation for function 'invpd'
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
void invpd(const emlrtStack *sp, const emxArray_real_T *A,
           emxArray_real_T *Ainv);

/* End of code generation (invpd.h) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * logDirichlet.h
 *
 * Code generation for function 'logDirichlet'
 *
 */

#pragma once

/* Include files */
#include "Markov_Switching_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_logDirichlet(const emlrtStack *sp, emxArray_real_T *X,
                    emxArray_real_T *a, emxArray_real_T *y);

real_T logDirichlet(const emlrtStack *sp, real_T X[2], const real_T a[2]);

/* End of code generation (logDirichlet.h) */

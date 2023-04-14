/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isnan.h
 *
 * Code generation for function 'isnan'
 *
 */

#ifndef ISNAN_H
#define ISNAN_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ARMA_X_types.h"

/* Function Declarations */
extern void b_isnan(const emlrtStack *sp, const emxArray_creal_T *x,
                    emxArray_boolean_T *b);

#endif

/* End of code generation (isnan.h) */

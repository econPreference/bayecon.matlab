/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cov.h
 *
 * Code generation for function 'cov'
 *
 */

#ifndef COV_H
#define COV_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Stochastic_Volatility_types.h"

/* Function Declarations */
extern void cov(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *
                xy);

#endif

/* End of code generation (cov.h) */

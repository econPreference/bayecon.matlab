/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randwishart.h
 *
 * Code generation for function 'randwishart'
 *
 */

#ifndef RANDWISHART_H
#define RANDWISHART_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Recursive_BVAR_types.h"

/* Function Declarations */
extern void randwishart(const emlrtStack *sp, const emxArray_real_T *Omega,
  real_T nu, emxArray_real_T *V);

#endif

/* End of code generation (randwishart.h) */

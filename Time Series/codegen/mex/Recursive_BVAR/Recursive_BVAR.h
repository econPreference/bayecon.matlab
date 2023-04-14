/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Recursive_BVAR.h
 *
 * Code generation for function 'Recursive_BVAR'
 *
 */

#ifndef RECURSIVE_BVAR_H
#define RECURSIVE_BVAR_H

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
extern void Recursive_BVAR(const emlrtStack *sp, const emxArray_real_T *Y,
  real_T p, real_T n0, real_T n1, real_T mlag, real_T nu, const emxArray_real_T *
  R0, const emxArray_real_T *b_, const emxArray_real_T *var_, char_T ML,
  struct0_T *Output);

#endif

/* End of code generation (Recursive_BVAR.h) */

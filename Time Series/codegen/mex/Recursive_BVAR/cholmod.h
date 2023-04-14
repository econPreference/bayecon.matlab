/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cholmod.h
 *
 * Code generation for function 'cholmod'
 *
 */

#ifndef CHOLMOD_H
#define CHOLMOD_H

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
extern void b_cholmod(const emlrtStack *sp, const emxArray_real_T *A,
                      emxArray_real_T *R);
extern void cholmod(const emlrtStack *sp, const emxArray_real_T *A,
                    emxArray_real_T *R, real_T *err);

#endif

/* End of code generation (cholmod.h) */

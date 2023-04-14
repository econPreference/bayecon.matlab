/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * meanc.h
 *
 * Code generation for function 'meanc'
 *
 */

#ifndef MEANC_H
#define MEANC_H

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
extern void meanc(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *retf);

#endif

/* End of code generation (meanc.h) */

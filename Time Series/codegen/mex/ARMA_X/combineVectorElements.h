/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.h
 *
 * Code generation for function 'combineVectorElements'
 *
 */

#ifndef COMBINEVECTORELEMENTS_H
#define COMBINEVECTORELEMENTS_H

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
extern real_T b_colMajorFlatIter(const emlrtStack *sp, const emxArray_real_T *x,
  int32_T vlen);
extern real_T colMajorFlatIter(const emlrtStack *sp, const emxArray_real_T *x,
  int32_T vlen);
extern void combineVectorElements(const emlrtStack *sp, const emxArray_real_T *x,
  emxArray_real_T *y);

#endif

/* End of code generation (combineVectorElements.h) */

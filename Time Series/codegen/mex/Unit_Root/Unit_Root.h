/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unit_Root.h
 *
 * Code generation for function 'Unit_Root'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Unit_Root_types.h"

/* Function Declarations */
void Unit_Root(const emlrtStack *sp, const emxArray_real_T *Data, real_T kk,
               real_T vv, real_T a0, real_T d0, const emxArray_real_T *phi0,
               const emxArray_real_T *PHI0, real_T n0, real_T n1, real_T mode,
               real_T q, real_T a, real_T b, const emxArray_real_T *c0, const
               emxArray_real_T *C0, struct0_T *Output, const mxArray **ML_Un,
               const mxArray **ML_Re);

/* End of code generation (Unit_Root.h) */

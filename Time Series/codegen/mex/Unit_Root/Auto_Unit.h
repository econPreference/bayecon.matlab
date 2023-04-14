/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Auto_Unit.h
 *
 * Code generation for function 'Auto_Unit'
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
void Auto_Unit(const emlrtStack *sp, const emxArray_real_T *data, real_T kk,
               real_T vv, real_T a0, real_T d0, const emxArray_real_T *phi0,
               const emxArray_real_T *PHI0, real_T n0, real_T n1, real_T mode,
               real_T aa, real_T bb, const emxArray_real_T *c0, const
               emxArray_real_T *C0, struct0_T *Output);
void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB);
void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB);
void d_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB);
void e_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB);

/* End of code generation (Auto_Unit.h) */

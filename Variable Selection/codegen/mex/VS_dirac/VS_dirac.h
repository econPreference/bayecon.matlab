/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * VS_dirac.h
 *
 * Code generation for function 'VS_dirac'
 *
 */

#pragma once

/* Include files */
#include "VS_dirac_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void VS_dirac(const emlrtStack *sp, const emxArray_real_T *y,
              const emxArray_real_T *X, real_T aw, real_T bw,
              real_T cons_option, real_T n0, real_T n1, struct0_T *Output);

/* End of code generation (VS_dirac.h) */

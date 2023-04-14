/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gen_beta.h
 *
 * Code generation for function 'Gen_beta'
 *
 */

#pragma once

/* Include files */
#include "Mixture_Normal_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Gen_beta(const emlrtStack *sp, const emxArray_real_T *Y,
              const emxArray_real_T *Omega, const emxArray_real_T *b_,
              const emxArray_real_T *var_, emxArray_real_T *beta);

/* End of code generation (Gen_beta.h) */

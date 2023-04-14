/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gen_S.h
 *
 * Code generation for function 'Gen_S'
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
void Gen_S(const emlrtStack *sp, const emxArray_real_T *Y,
           const emxArray_real_T *betam, const emxArray_real_T *Omegam,
           emxArray_real_T *S);

/* End of code generation (Gen_S.h) */

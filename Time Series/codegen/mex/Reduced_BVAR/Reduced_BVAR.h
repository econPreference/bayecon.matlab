/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Reduced_BVAR.h
 *
 * Code generation for function 'Reduced_BVAR'
 *
 */

#pragma once

/* Include files */
#include "Reduced_BVAR_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Reduced_BVAR(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                  real_T n0, real_T n1, real_T nu, const emxArray_real_T *R0,
                  const emxArray_real_T *b_, const emxArray_real_T *var_,
                  char_T ML, struct0_T *Output);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

/* End of code generation (Reduced_BVAR.h) */

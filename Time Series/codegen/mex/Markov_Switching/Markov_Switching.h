/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Markov_Switching.h
 *
 * Code generation for function 'Markov_Switching'
 *
 */

#pragma once

/* Include files */
#include "Markov_Switching_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Markov_Switching(const emlrtStack *sp, const emxArray_real_T *X,
                      const emxArray_real_T *Y, real_T s, real_T n0, real_T n1,
                      const emxArray_real_T *beta0, const emxArray_real_T *B0,
                      const emxArray_real_T *alpha0,
                      const emxArray_real_T *delta0, real_T a0, real_T a1,
                      real_T switchingind, real_T idenind,
                      const emxArray_real_T *betaiden, real_T lowerbound,
                      char_T forecast, const emxArray_real_T *x_f, char_T ML,
                      struct0_T *Output);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

/* End of code generation (Markov_Switching.h) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ARMA_X.h
 *
 * Code generation for function 'ARMA_X'
 *
 */

#ifndef ARMA_X_H
#define ARMA_X_H

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
extern void ARMA_X(const emlrtStack *sp, const emxArray_real_T *data, const
                   emxArray_real_T *xind, const emxArray_real_T *yind, const
                   emxArray_real_T *b0, const emxArray_real_T *B0, real_T a0,
                   real_T d0, const emxArray_real_T *phi0, const emxArray_real_T
                   *PHI0, const emxArray_real_T *theta0, const emxArray_real_T
                   *THETA0, real_T n0, real_T n1, char_T forecast, const
                   emxArray_real_T *x_f, char_T ML, struct0_T *Output);

#endif

/* End of code generation (ARMA_X.h) */

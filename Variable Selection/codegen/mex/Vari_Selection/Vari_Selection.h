/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Vari_Selection.h
 *
 * Code generation for function 'Vari_Selection'
 *
 */

#pragma once

/* Include files */
#include "Vari_Selection_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Vari_Selection(const emlrtStack *sp, const emxArray_real_T *Y,
                    const emxArray_real_T *X, real_T n0, real_T n1,
                    real_T alpha0, real_T delta0, const real_T IG0[2],
                    const real_T IG1[2], char_T forecast,
                    const emxArray_real_T *x_f, struct0_T *Output);

/* End of code generation (Vari_Selection.h) */

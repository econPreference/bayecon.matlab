/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * kron.h
 *
 * Code generation for function 'kron'
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
void b_kron(const emlrtStack *sp, const emxArray_real_T *A,
            const emxArray_real_T *B, emxArray_real_T *K);

void kron(const emlrtStack *sp, const emxArray_real_T *A,
          const emxArray_real_T *B, emxArray_real_T *K);

/* End of code generation (kron.h) */

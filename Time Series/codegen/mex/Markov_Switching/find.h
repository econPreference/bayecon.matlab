/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.h
 *
 * Code generation for function 'find'
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
void b_binary_expand_op(const emlrtStack *sp, emxArray_int32_T *ii,
                        emlrtRSInfo an_emlrtRSI,
                        const emxArray_real_T *candidate_S, int32_T i1,
                        int32_T i2, int32_T i3);

void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
              emxArray_int32_T *i);

/* End of code generation (find.h) */

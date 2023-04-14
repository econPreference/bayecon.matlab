/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * invpd.h
 *
 * Code generation for function 'invpd'
 *
 */

#pragma once

/* Include files */
#include "Time_Varying_Parameter_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_invpd(const emlrtStack *sp, const emxArray_real_T *A,
             emxArray_real_T *Ainv);

void invpd(const emlrtStack *sp, real_T A, real_T Ainv_data[],
           int32_T Ainv_size[2]);

/* End of code generation (invpd.h) */

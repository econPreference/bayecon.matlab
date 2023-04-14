/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Common_Factor_Model.h
 *
 * Code generation for function 'Common_Factor_Model'
 *
 */

#pragma once

/* Include files */
#include "Common_Factor_Model_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Common_Factor_Model(const emlrtStack *sp, const emxArray_real_T *y,
                         const emxArray_real_T *h0, const emxArray_real_T *H0,
                         const real_T g0[2], const real_T G0[4],
                         const emxArray_real_T *a0, const emxArray_real_T *d0,
                         real_T scale, real_T n0, real_T n1, struct0_T *Output);

/* End of code generation (Common_Factor_Model.h) */

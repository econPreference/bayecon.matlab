/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cholmod.h
 *
 * Code generation for function 'cholmod'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void cholmod(const emlrtStack *sp, const real_T A_data[],
             const int32_T A_size[2], real_T R_data[], int32_T R_size[2]);

void e_binary_expand_op(real_T varargin_1_data[], int32_T varargin_1_size[2],
                        emlrtRSInfo rl_emlrtRSI, const real_T A_data[],
                        const real_T _data[], const int32_T _size[2]);

/* End of code generation (cholmod.h) */

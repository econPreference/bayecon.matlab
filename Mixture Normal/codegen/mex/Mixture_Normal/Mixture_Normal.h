/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Mixture_Normal.h
 *
 * Code generation for function 'Mixture_Normal'
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
void Mixture_Normal(const emlrtStack *sp, const emxArray_real_T *Y, real_T M,
                    const emxArray_real_T *bm_, const emxArray_real_T *varm_,
                    emxArray_real_T *Omegam, real_T n0, real_T n1,
                    struct0_T *Output);

/* End of code generation (Mixture_Normal.h) */

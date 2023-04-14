/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Time_Varying_Parameter.h
 *
 * Code generation for function 'Time_Varying_Parameter'
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
void Time_Varying_Parameter(const emlrtStack *sp, const emxArray_real_T *Y,
                            emxArray_real_T *Z, const emxArray_real_T *H,
                            const emxArray_real_T *b_,
                            const emxArray_real_T *var_, real_T nu,
                            const emxArray_real_T *R0, real_T a0, real_T d0,
                            real_T n0, real_T n1, char_T forecast,
                            const emxArray_real_T *x0_f,
                            const emxArray_real_T *x1_f, char_T ML,
                            char_T restriction, const emxArray_real_T *res_x,
                            real_T d, struct0_T *Output);

void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *GPG_Qinv);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

/* End of code generation (Time_Varying_Parameter.h) */

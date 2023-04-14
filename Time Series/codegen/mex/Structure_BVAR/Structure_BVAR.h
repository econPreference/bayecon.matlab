/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Structure_BVAR.h
 *
 * Code generation for function 'Structure_BVAR'
 *
 */

#pragma once

/* Include files */
#include "Structure_BVAR_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Structure_BVAR(const emlrtStack *sp, const emxArray_real_T *Y, real_T p,
                    real_T n0, real_T n1, real_T mlag, real_T nu,
                    const emxArray_real_T *R0, const emxArray_real_T *b_,
                    const emxArray_real_T *var_, char_T ML, real_T restriction,
                    const emxArray_real_T *resindex,
                    const emxArray_real_T *ind_chol, struct0_T *Output);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

/* End of code generation (Structure_BVAR.h) */

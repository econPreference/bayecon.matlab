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

#ifndef INVPD_H
#define INVPD_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Recursive_BVAR_types.h"

/* Function Declarations */
extern void invpd(const emlrtStack *sp, const emxArray_real_T *A,
                  emxArray_real_T *Ainv);

#endif

/* End of code generation (invpd.h) */

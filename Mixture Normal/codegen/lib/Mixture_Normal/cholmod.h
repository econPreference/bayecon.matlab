/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cholmod.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

#ifndef CHOLMOD_H
#define CHOLMOD_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Mixture_Normal_types.h"

/* Function Declarations */
extern void b_cholmod(const emxArray_real_T *A, emxArray_real_T *R);
extern void c_cholmod(const double A[4], double R[4], double *err);
extern void cholmod(const emxArray_real_T *A, emxArray_real_T *R, double *err);

#endif

/*
 * File trailer for cholmod.h
 *
 * [EOF]
 */

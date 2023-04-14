/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: diag.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

#ifndef DIAG_H
#define DIAG_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Mixture_Normal_types.h"

/* Function Declarations */
extern void b_diag(const emxArray_real_T *v, emxArray_real_T *d);
extern void c_diag(const double v[4], double d[2]);
extern void d_diag(const double v[2], double d[4]);
extern void diag(const emxArray_real_T *v, emxArray_real_T *d);

#endif

/*
 * File trailer for diag.h
 *
 * [EOF]
 */

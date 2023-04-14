/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: lnpdfmvn.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

#ifndef LNPDFMVN_H
#define LNPDFMVN_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Mixture_Normal_types.h"

/* Function Declarations */
extern double b_lnpdfmvn(const emxArray_real_T *x, const double m[2], const
  double C[4]);
extern double lnpdfmvn(const emxArray_real_T *x, const emxArray_real_T *m, const
  emxArray_real_T *C);

#endif

/*
 * File trailer for lnpdfmvn.h
 *
 * [EOF]
 */

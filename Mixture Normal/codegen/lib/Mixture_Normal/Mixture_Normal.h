/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Mixture_Normal.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

#ifndef MIXTURE_NORMAL_H
#define MIXTURE_NORMAL_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Mixture_Normal_types.h"

/* Function Declarations */
extern void Mixture_Normal(const emxArray_real_T *Y, double M, const
  emxArray_real_T *bm_, const emxArray_real_T *varm_, emxArray_real_T *Omegam,
  double n0, double n1, const double plot[2], struct0_T *Output);

#endif

/*
 * File trailer for Mixture_Normal.h
 *
 * [EOF]
 */

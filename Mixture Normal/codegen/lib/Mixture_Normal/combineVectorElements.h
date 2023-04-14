/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: combineVectorElements.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

#ifndef COMBINEVECTORELEMENTS_H
#define COMBINEVECTORELEMENTS_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Mixture_Normal_types.h"

/* Function Declarations */
extern double b_combineVectorElements(const emxArray_real_T *x);
extern double c_combineVectorElements(const emxArray_real_T *x, int vlen);
extern void combineVectorElements(const emxArray_real_T *x, emxArray_real_T *y);

#endif

/*
 * File trailer for combineVectorElements.h
 *
 * [EOF]
 */

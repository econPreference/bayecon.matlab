/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sqrt.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "sqrt.h"

/* Function Definitions */

/*
 * Arguments    : double *x
 * Return Type  : void
 */
void b_sqrt(double *x)
{
  *x = sqrt(*x);
}

/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void c_sqrt(emxArray_real_T *x)
{
  int nx;
  int k;
  nx = x->size[0];
  for (k = 0; k < nx; k++) {
    x->data[k] = sqrt(x->data[k]);
  }
}

/*
 * File trailer for sqrt.c
 *
 * [EOF]
 */

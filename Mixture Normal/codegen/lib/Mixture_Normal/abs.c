/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: abs.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "abs.h"
#include "Mixture_Normal_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void b_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  int nx;
  int k;
  unsigned int uv0[2];
  nx = x->size[0] * x->size[1];
  for (k = 0; k < 2; k++) {
    uv0[k] = (unsigned int)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = (int)uv0[0];
  y->size[1] = (int)uv0[1];
  emxEnsureCapacity_real_T(y, k);
  for (k = 0; k < nx; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void c_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int x_idx_0;
  int k;
  x_idx_0 = (unsigned int)x->size[0];
  k = y->size[0];
  y->size[0] = (int)x_idx_0;
  emxEnsureCapacity_real_T2(y, k);
  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

/*
 * Arguments    : const double x[4]
 *                double y[4]
 * Return Type  : void
 */
void d_abs(const double x[4], double y[4])
{
  int k;
  for (k = 0; k < 4; k++) {
    y[k] = fabs(x[k]);
  }
}

/*
 * Arguments    : const double x[2]
 *                double y[2]
 * Return Type  : void
 */
void e_abs(const double x[2], double y[2])
{
  int k;
  for (k = 0; k < 2; k++) {
    y[k] = fabs(x[k]);
  }
}

/*
 * File trailer for abs.c
 *
 * [EOF]
 */

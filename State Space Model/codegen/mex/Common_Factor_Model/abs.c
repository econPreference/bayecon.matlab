/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "abs.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_abs(const real_T x_data[], int32_T x_size, real_T y_data[],
           int32_T *y_size)
{
  int32_T k;
  *y_size = x_size;
  for (k = 0; k < x_size; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
}

void c_abs(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
           int32_T y_size[2])
{
  int32_T k;
  int32_T nx;
  nx = x_size[0] * x_size[1];
  y_size[0] = (int8_T)x_size[0];
  y_size[1] = (int8_T)x_size[1];
  for (k = 0; k < nx; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
}

/* End of code generation (abs.c) */

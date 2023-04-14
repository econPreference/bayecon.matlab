/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rand.c
 *
 * Code generation for function 'rand'
 *
 */

/* Include files */
#include "rand.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T b_rand(void)
{
  real_T r;
  emlrtRandu(&r, 1);
  return r;
}

void c_rand(real_T r[2])
{
  emlrtRandu(&r[0], 2);
}

void d_rand(real_T r_data[], int32_T *r_size)
{
  *r_size = 1;
  emlrtRandu(&r_data[0], 1);
}

/* End of code generation (rand.c) */

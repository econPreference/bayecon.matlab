/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randn.c
 *
 * Code generation for function 'randn'
 *
 */

/* Include files */
#include "randn.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_randn(real_T r[2])
{
  emlrtRandn(&r[0], 2);
}

real_T randn(void)
{
  real_T r;
  emlrtRandn(&r, 1);
  return r;
}

/* End of code generation (randn.c) */

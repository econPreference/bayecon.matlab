/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * minresid.c
 *
 * Code generation for function 'minresid'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Unit_Root.h"
#include "minresid.h"
#include "lapacke.h"

/* Function Definitions */
void minresid(real_T y, real_T *x, real_T *resid)
{
  /*  y = x*b + resid */
  /*  x and b are both integer, and resid is positive */
  /*  몫 x와 나머지 resid를 산출 */
  *x = muDoubleScalarFloor(y / 1000.0);
  *resid = y - *x * 1000.0;

  /*      if resid == 0 */
  /*         resid = b; */
  /*         x = x - 1; */
  /*      end */
}

/* End of code generation (minresid.c) */

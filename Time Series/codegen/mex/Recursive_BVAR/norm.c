/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "norm.h"

/* Function Definitions */
real_T norm(const emxArray_real_T *x)
{
  real_T y;
  int32_T j;
  boolean_T exitg1;
  int32_T i;
  real_T s;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 0.0;
  } else if ((x->size[0] == 1) || (x->size[1] == 1)) {
    y = 0.0;
    j = x->size[0] * x->size[1];
    for (i = 0; i < j; i++) {
      y += muDoubleScalarAbs(x->data[i]);
    }
  } else {
    y = 0.0;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j <= x->size[1] - 1)) {
      s = 0.0;
      for (i = 0; i < x->size[0]; i++) {
        s += muDoubleScalarAbs(x->data[i + x->size[0] * j]);
      }

      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }

        j++;
      }
    }
  }

  return y;
}

/* End of code generation (norm.c) */

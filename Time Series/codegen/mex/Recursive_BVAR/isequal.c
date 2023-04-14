/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isequal.c
 *
 * Code generation for function 'isequal'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "isequal.h"

/* Function Definitions */
boolean_T isequal(const emxArray_real_T *varargin_1)
{
  boolean_T p;
  p = false;
  if ((varargin_1->size[0] != 0) || (varargin_1->size[1] != 0)) {
  } else {
    p = true;
  }

  return p;
}

/* End of code generation (isequal.c) */

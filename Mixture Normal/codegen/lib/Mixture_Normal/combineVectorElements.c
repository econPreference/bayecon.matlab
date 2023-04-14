/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: combineVectorElements.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "combineVectorElements.h"
#include "Mixture_Normal_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 * Return Type  : double
 */
double b_combineVectorElements(const emxArray_real_T *x)
{
  double y;
  int k;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= x->size[1]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

/*
 * Arguments    : const emxArray_real_T *x
 *                int vlen
 * Return Type  : double
 */
double c_combineVectorElements(const emxArray_real_T *x, int vlen)
{
  double y;
  int k;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= vlen; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void combineVectorElements(const emxArray_real_T *x, emxArray_real_T *y)
{
  int i;
  unsigned int sz[2];
  int xpageoffset;
  int k;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    for (i = 0; i < 2; i++) {
      sz[i] = (unsigned int)x->size[i];
    }

    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int)sz[1];
    emxEnsureCapacity_real_T(y, i);
    xpageoffset = (int)sz[1];
    for (i = 0; i < xpageoffset; i++) {
      y->data[i] = 0.0;
    }
  } else {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    for (i = 0; i < x->size[1]; i++) {
      xpageoffset = i * x->size[0];
      y->data[i] = x->data[xpageoffset];
      for (k = 2; k <= x->size[0]; k++) {
        y->data[i] += x->data[(xpageoffset + k) - 1];
      }
    }
  }
}

/*
 * File trailer for combineVectorElements.c
 *
 * [EOF]
 */

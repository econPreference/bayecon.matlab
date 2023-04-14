/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: minc.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "minc.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 * Return Type  : double
 */
double minc(const emxArray_real_T *x)
{
  double mn;
  int idx;
  int k;
  boolean_T exitg1;

  /*  gauss function */
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      mn = x->data[0];
    } else if ((x->data[0] > x->data[1]) || (rtIsNaN(x->data[0]) && (!rtIsNaN
                 (x->data[1])))) {
      mn = x->data[1];
    } else {
      mn = x->data[0];
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= x->size[0])) {
        if (!rtIsNaN(x->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      mn = x->data[0];
    } else {
      mn = x->data[idx - 1];
      while (idx + 1 <= x->size[0]) {
        if (mn > x->data[idx]) {
          mn = x->data[idx];
        }

        idx++;
      }
    }
  }

  return mn;
}

/*
 * File trailer for minc.c
 *
 * [EOF]
 */

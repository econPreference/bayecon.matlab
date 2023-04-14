/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: maxc.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "maxc.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 * Return Type  : double
 */
double maxc(const emxArray_real_T *x)
{
  double mx;
  int idx;
  int k;
  boolean_T exitg1;

  /*  function [mx,ind] = maxc(x) */
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      mx = x->data[0];
    } else if ((x->data[0] < x->data[1]) || (rtIsNaN(x->data[0]) && (!rtIsNaN
                 (x->data[1])))) {
      mx = x->data[1];
    } else {
      mx = x->data[0];
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
      mx = x->data[0];
    } else {
      mx = x->data[idx - 1];
      while (idx + 1 <= x->size[0]) {
        if (mx < x->data[idx]) {
          mx = x->data[idx];
        }

        idx++;
      }
    }
  }

  return mx;
}

/*
 * File trailer for maxc.c
 *
 * [EOF]
 */

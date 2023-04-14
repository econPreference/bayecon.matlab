/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: var.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "var.h"
#include "combineVectorElements.h"
#include "Mixture_Normal_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void var(const emxArray_real_T *x, emxArray_real_T *y)
{
  int tunableEnvironment_idx_0;
  int i17;
  unsigned int szy[2];
  int loop_ub;
  int nx;
  int p;
  emxArray_real_T *xv;
  int outsize_idx_0;
  int b_tunableEnvironment_idx_0;
  double yv;
  double xbar;
  double t;
  tunableEnvironment_idx_0 = x->size[0];
  for (i17 = 0; i17 < 2; i17++) {
    szy[i17] = (unsigned int)x->size[i17];
  }

  i17 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int)szy[1];
  emxEnsureCapacity_real_T(y, i17);
  loop_ub = (int)szy[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    y->data[i17] = 0.0;
  }

  nx = x->size[0];
  p = 0;
  emxInit_real_T1(&xv, 1);
  if (1 <= x->size[1]) {
    outsize_idx_0 = nx;
  }

  while (p + 1 <= x->size[1]) {
    b_tunableEnvironment_idx_0 = p * nx + 1;
    i17 = xv->size[0];
    xv->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T2(xv, i17);
    for (i17 = 0; i17 < outsize_idx_0; i17++) {
      xv->data[i17] = 0.0;
    }

    for (loop_ub = -1; loop_ub + 2 <= nx; loop_ub++) {
      xv->data[loop_ub + 1] = x->data[b_tunableEnvironment_idx_0 + loop_ub];
    }

    if (tunableEnvironment_idx_0 == 0) {
      yv = rtNaN;
    } else if (tunableEnvironment_idx_0 == 1) {
      if ((!rtIsInf(xv->data[0])) && (!rtIsNaN(xv->data[0]))) {
        yv = 0.0;
      } else {
        yv = rtNaN;
      }
    } else {
      xbar = c_combineVectorElements(xv, tunableEnvironment_idx_0) / (double)
        tunableEnvironment_idx_0;
      yv = 0.0;
      for (loop_ub = 1; loop_ub <= tunableEnvironment_idx_0; loop_ub++) {
        t = xv->data[loop_ub - 1] - xbar;
        yv += t * t;
      }

      yv /= (double)tunableEnvironment_idx_0 - 1.0;
    }

    y->data[p] = yv;
    p++;
  }

  emxFree_real_T(&xv);
}

/*
 * File trailer for var.c
 *
 * [EOF]
 */

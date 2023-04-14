/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: meanc.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "meanc.h"
#include "Mixture_Normal_emxutil.h"
#include "combineVectorElements.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *retf
 * Return Type  : void
 */
void meanc(const emxArray_real_T *x, emxArray_real_T *retf)
{
  emxArray_real_T *r9;
  int b_x;
  int i15;
  int loop_ub;
  emxInit_real_T(&r9, 2);
  combineVectorElements(x, r9);
  b_x = x->size[0];
  i15 = retf->size[0];
  retf->size[0] = r9->size[1];
  emxEnsureCapacity_real_T2(retf, i15);
  loop_ub = r9->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    retf->data[i15] = r9->data[r9->size[0] * i15] / (double)b_x;
  }

  emxFree_real_T(&r9);
}

/*
 * File trailer for meanc.c
 *
 * [EOF]
 */

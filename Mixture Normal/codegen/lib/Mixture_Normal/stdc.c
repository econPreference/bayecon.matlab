/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: stdc.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "stdc.h"
#include "Mixture_Normal_emxutil.h"
#include "combineVectorElements.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *retf
 * Return Type  : void
 */
void stdc(const emxArray_real_T *x, emxArray_real_T *retf)
{
  int tunableEnvironment_idx_0;
  int i16;
  emxArray_real_T *b_retf;
  unsigned int szy[2];
  int loop_ub;
  int nx;
  int p;
  emxArray_real_T *xv;
  emxArray_real_T *absdiff;
  int outsize_idx_0;
  int b_tunableEnvironment_idx_0;
  double xbar;
  double scale;
  double absxk;
  double t;

  /*  gauss function */
  tunableEnvironment_idx_0 = x->size[0];
  for (i16 = 0; i16 < 2; i16++) {
    szy[i16] = (unsigned int)x->size[i16];
  }

  emxInit_real_T(&b_retf, 2);
  i16 = b_retf->size[0] * b_retf->size[1];
  b_retf->size[0] = 1;
  b_retf->size[1] = (int)szy[1];
  emxEnsureCapacity_real_T(b_retf, i16);
  loop_ub = (int)szy[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    b_retf->data[i16] = 0.0;
  }

  nx = x->size[0];
  p = 0;
  emxInit_real_T1(&xv, 1);
  emxInit_real_T1(&absdiff, 1);
  if (1 <= x->size[1]) {
    outsize_idx_0 = nx;
  }

  while (p + 1 <= x->size[1]) {
    b_tunableEnvironment_idx_0 = p * nx + 1;
    i16 = xv->size[0];
    xv->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T2(xv, i16);
    for (i16 = 0; i16 < outsize_idx_0; i16++) {
      xv->data[i16] = 0.0;
    }

    for (loop_ub = -1; loop_ub + 2 <= nx; loop_ub++) {
      xv->data[loop_ub + 1] = x->data[b_tunableEnvironment_idx_0 + loop_ub];
    }

    if (tunableEnvironment_idx_0 == 0) {
      xbar = rtNaN;
    } else if (tunableEnvironment_idx_0 == 1) {
      if ((!rtIsInf(xv->data[0])) && (!rtIsNaN(xv->data[0]))) {
        xbar = 0.0;
      } else {
        xbar = rtNaN;
      }
    } else {
      xbar = c_combineVectorElements(xv, tunableEnvironment_idx_0) / (double)
        tunableEnvironment_idx_0;
      i16 = absdiff->size[0];
      absdiff->size[0] = xv->size[0];
      emxEnsureCapacity_real_T2(absdiff, i16);
      for (loop_ub = 0; loop_ub < tunableEnvironment_idx_0; loop_ub++) {
        absdiff->data[loop_ub] = fabs(xv->data[loop_ub] - xbar);
      }

      xbar = 0.0;
      scale = 3.3121686421112381E-170;
      for (loop_ub = 1; loop_ub <= tunableEnvironment_idx_0; loop_ub++) {
        absxk = absdiff->data[loop_ub - 1];
        if (absxk > scale) {
          t = scale / absxk;
          xbar = 1.0 + xbar * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          xbar += t * t;
        }
      }

      xbar = scale * sqrt(xbar);
      xbar /= sqrt((double)tunableEnvironment_idx_0 - 1.0);
    }

    b_retf->data[p] = xbar;
    p++;
  }

  emxFree_real_T(&absdiff);
  emxFree_real_T(&xv);
  i16 = retf->size[0];
  retf->size[0] = b_retf->size[1];
  emxEnsureCapacity_real_T2(retf, i16);
  loop_ub = b_retf->size[1];
  for (i16 = 0; i16 < loop_ub; i16++) {
    retf->data[i16] = b_retf->data[b_retf->size[0] * i16];
  }

  emxFree_real_T(&b_retf);
}

/*
 * File trailer for stdc.c
 *
 * [EOF]
 */

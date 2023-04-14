/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: inv.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "inv.h"
#include "Mixture_Normal_emxutil.h"
#include "xgetrf.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void inv(const emxArray_real_T *x, emxArray_real_T *y)
{
  int n;
  int c;
  int yk;
  emxArray_real_T *b_x;
  emxArray_int32_T *p;
  emxArray_int32_T *ipiv;
  int b_n;
  int k;
  int j;
  int i;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    c = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, c);
    yk = x->size[0] * x->size[1];
    for (c = 0; c < yk; c++) {
      y->data[c] = x->data[c];
    }
  } else {
    n = x->size[0];
    c = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, c);
    yk = x->size[0] * x->size[1];
    for (c = 0; c < yk; c++) {
      y->data[c] = 0.0;
    }

    emxInit_real_T(&b_x, 2);
    c = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(b_x, c);
    yk = x->size[0] * x->size[1];
    for (c = 0; c < yk; c++) {
      b_x->data[c] = x->data[c];
    }

    emxInit_int32_T1(&p, 2);
    emxInit_int32_T1(&ipiv, 2);
    xgetrf(x->size[0], x->size[0], b_x, x->size[0], ipiv);
    b_n = x->size[0];
    c = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = b_n;
    emxEnsureCapacity_int32_T1(p, c);
    p->data[0] = 1;
    yk = 1;
    for (k = 2; k <= b_n; k++) {
      yk++;
      p->data[k - 1] = yk;
    }

    for (k = 0; k < ipiv->size[1]; k++) {
      if (ipiv->data[k] > 1 + k) {
        yk = p->data[ipiv->data[k] - 1];
        p->data[ipiv->data[k] - 1] = p->data[k];
        p->data[k] = yk;
      }
    }

    emxFree_int32_T(&ipiv);
    for (k = 0; k < n; k++) {
      c = p->data[k] - 1;
      y->data[k + y->size[0] * (p->data[k] - 1)] = 1.0;
      for (j = k; j < n; j++) {
        if (y->data[j + y->size[0] * c] != 0.0) {
          for (i = j + 1; i < n; i++) {
            y->data[i + y->size[0] * c] -= y->data[j + y->size[0] * c] *
              b_x->data[i + b_x->size[0] * j];
          }
        }
      }
    }

    emxFree_int32_T(&p);
    for (j = 1; j <= n; j++) {
      yk = n * (j - 1);
      for (k = n - 1; k + 1 > 0; k--) {
        b_n = n * k;
        if (y->data[k + yk] != 0.0) {
          y->data[k + yk] /= b_x->data[k + b_n];
          for (i = 0; i < k; i++) {
            y->data[i + yk] -= y->data[k + yk] * b_x->data[i + b_n];
          }
        }
      }
    }

    emxFree_real_T(&b_x);
  }
}

/*
 * File trailer for inv.c
 *
 * [EOF]
 */

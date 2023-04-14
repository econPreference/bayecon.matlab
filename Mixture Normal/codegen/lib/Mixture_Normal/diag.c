/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: diag.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "diag.h"
#include "Mixture_Normal_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *v
 *                emxArray_real_T *d
 * Return Type  : void
 */
void b_diag(const emxArray_real_T *v, emxArray_real_T *d)
{
  int unnamed_idx_0;
  int unnamed_idx_1;
  int i8;
  unnamed_idx_0 = v->size[0];
  unnamed_idx_1 = v->size[0];
  i8 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T(d, i8);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i8 = 0; i8 < unnamed_idx_0; i8++) {
    d->data[i8] = 0.0;
  }

  for (unnamed_idx_0 = 0; unnamed_idx_0 < v->size[0]; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * unnamed_idx_0] = v->data[unnamed_idx_0];
  }
}

/*
 * Arguments    : const double v[4]
 *                double d[2]
 * Return Type  : void
 */
void c_diag(const double v[4], double d[2])
{
  int k;
  for (k = 0; k < 2; k++) {
    d[k] = v[k + (k << 1)];
  }
}

/*
 * Arguments    : const double v[2]
 *                double d[4]
 * Return Type  : void
 */
void d_diag(const double v[2], double d[4])
{
  int j;
  for (j = 0; j < 4; j++) {
    d[j] = 0.0;
  }

  for (j = 0; j < 2; j++) {
    d[j + (j << 1)] = v[j];
  }
}

/*
 * Arguments    : const emxArray_real_T *v
 *                emxArray_real_T *d
 * Return Type  : void
 */
void diag(const emxArray_real_T *v, emxArray_real_T *d)
{
  int u0;
  int u1;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    u0 = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T2(d, u0);
    d->data[0] = v->data[0];
  } else {
    u0 = v->size[0];
    u1 = v->size[1];
    if (u0 < u1) {
      u1 = u0;
    }

    if (0 < v->size[1]) {
    } else {
      u1 = 0;
    }

    u0 = d->size[0];
    d->size[0] = u1;
    emxEnsureCapacity_real_T2(d, u0);
    for (u0 = 0; u0 < u1; u0++) {
      d->data[u0] = v->data[u0 + v->size[0] * u0];
    }
  }
}

/*
 * File trailer for diag.c
 *
 * [EOF]
 */

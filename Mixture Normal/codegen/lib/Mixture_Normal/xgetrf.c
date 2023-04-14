/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: xgetrf.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "xgetrf.h"
#include "Mixture_Normal_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : int m
 *                int n
 *                emxArray_real_T *A
 *                int lda
 *                emxArray_int32_T *ipiv
 * Return Type  : void
 */
void xgetrf(int m, int n, emxArray_real_T *A, int lda, emxArray_int32_T *ipiv)
{
  int yk;
  int b_n;
  int i20;
  int u0;
  int jy;
  int j;
  int mmj;
  int c;
  int ix;
  double smax;
  int b_j;
  double s;
  int ijA;
  if (m < n) {
    yk = m;
  } else {
    yk = n;
  }

  if (yk < 1) {
    b_n = 0;
  } else {
    b_n = yk;
  }

  i20 = ipiv->size[0] * ipiv->size[1];
  ipiv->size[0] = 1;
  ipiv->size[1] = b_n;
  emxEnsureCapacity_int32_T1(ipiv, i20);
  if (b_n > 0) {
    ipiv->data[0] = 1;
    yk = 1;
    for (jy = 2; jy <= b_n; jy++) {
      yk++;
      ipiv->data[jy - 1] = yk;
    }
  }

  if ((m < 1) || (n < 1)) {
  } else {
    u0 = m - 1;
    if (!(u0 < n)) {
      u0 = n;
    }

    for (j = 0; j < u0; j++) {
      mmj = m - j;
      c = j * (lda + 1);
      if (mmj < 1) {
        yk = -1;
      } else {
        yk = 0;
        if (mmj > 1) {
          ix = c;
          smax = fabs(A->data[c]);
          for (jy = 1; jy < mmj; jy++) {
            ix++;
            s = fabs(A->data[ix]);
            if (s > smax) {
              yk = jy;
              smax = s;
            }
          }
        }
      }

      if (A->data[c + yk] != 0.0) {
        if (yk != 0) {
          ipiv->data[j] = (j + yk) + 1;
          ix = j;
          yk += j;
          for (jy = 1; jy <= n; jy++) {
            smax = A->data[ix];
            A->data[ix] = A->data[yk];
            A->data[yk] = smax;
            ix += lda;
            yk += lda;
          }
        }

        i20 = c + mmj;
        for (yk = c + 1; yk < i20; yk++) {
          A->data[yk] /= A->data[c];
        }
      }

      yk = (n - j) - 1;
      b_n = c + lda;
      jy = c + lda;
      for (b_j = 1; b_j <= yk; b_j++) {
        smax = A->data[jy];
        if (A->data[jy] != 0.0) {
          ix = c + 1;
          i20 = mmj + b_n;
          for (ijA = 1 + b_n; ijA < i20; ijA++) {
            A->data[ijA] += A->data[ix] * -smax;
            ix++;
          }
        }

        jy += lda;
        b_n += lda;
      }
    }
  }
}

/*
 * File trailer for xgetrf.c
 *
 * [EOF]
 */

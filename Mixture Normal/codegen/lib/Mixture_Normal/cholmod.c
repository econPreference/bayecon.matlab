/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cholmod.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "cholmod.h"
#include "Mixture_Normal_emxutil.h"
#include "abs.h"
#include "diag.h"
#include "sqrt.h"

/* Function Definitions */

/*
 * CHOLMOD Modified Cholesky factorization
 *   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL)
 *   if A is (sufficiently) positive definite, and otherwise returns a
 *   modified factor R with diagonal enries >= sqrt(delta) and
 *   offdiagonal entries <= beta in absolute value,
 *   where delta and beta are defined in terms of size of diagonal and
 *   offdiagonal entries of A and the machine precision; see below.
 *   The idea is to ensure that E = A - R'*R is reasonably small if A is
 *   not too far from being indefinite.  If A is sparse, so is R.
 *   The output parameter indef is set to 0 if A is sufficiently positive
 *   definite and to 1 if the factorization is modified.
 *
 *   The point of modified Cholesky is to avoid computing eigenvalues,
 *   but for dense matrices, MODCHOL takes longer than calling the built-in
 *   EIG, because of the cost of interpreting the code, even though it
 *   only has one loop and uses vector operations.
 * Arguments    : const emxArray_real_T *A
 *                emxArray_real_T *R
 * Return Type  : void
 */
void b_cholmod(const emxArray_real_T *A, emxArray_real_T *R)
{
  int idx;
  int u1;
  emxArray_real_T *diagA;
  emxArray_real_T *varargin_1;
  double b_gamma;
  int k;
  boolean_T exitg1;
  emxArray_real_T *b_varargin_1;
  emxArray_real_T *b_A;
  int i11;
  int loop_ub;
  emxArray_real_T *I;
  unsigned int unnamed_idx_1;
  int j;
  double xi;
  double varargin_1_idx_0;
  boolean_T p;
  double delta;
  double c_varargin_1[3];
  emxArray_real_T *d;
  double beta;
  emxArray_real_T *L;
  emxArray_real_T *K;
  emxArray_real_T *Ccol;
  emxArray_int32_T *r4;
  emxArray_real_T *b_L;
  int aoffset;
  int I_idx_0;
  int exitg2;

  /*  function [R, indef, E, err] = cholmod(A) */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    u1 = 0;
  } else {
    idx = A->size[0];
    u1 = A->size[1];
    if (idx > u1) {
      u1 = idx;
    }
  }

  emxInit_real_T1(&diagA, 1);
  emxInit_real_T1(&varargin_1, 1);
  diag(A, diagA);
  c_abs(diagA, varargin_1);
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      b_gamma = varargin_1->data[0];
    } else if ((varargin_1->data[0] < varargin_1->data[1]) || (rtIsNaN
                (varargin_1->data[0]) && (!rtIsNaN(varargin_1->data[1])))) {
      b_gamma = varargin_1->data[1];
    } else {
      b_gamma = varargin_1->data[0];
    }
  } else {
    if (!rtIsNaN(varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= varargin_1->size[0])) {
        if (!rtIsNaN(varargin_1->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      b_gamma = varargin_1->data[0];
    } else {
      b_gamma = varargin_1->data[idx - 1];
      while (idx + 1 <= varargin_1->size[0]) {
        if (b_gamma < varargin_1->data[idx]) {
          b_gamma = varargin_1->data[idx];
        }

        idx++;
      }
    }
  }

  emxInit_real_T(&b_varargin_1, 2);
  emxInit_real_T(&b_A, 2);

  /*  max diagonal entry */
  b_diag(diagA, b_varargin_1);
  i11 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i11);
  loop_ub = A->size[0] * A->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    b_A->data[i11] = A->data[i11] - b_varargin_1->data[i11];
  }

  emxInit_real_T(&I, 2);
  b_abs(b_A, b_varargin_1);
  unnamed_idx_1 = (unsigned int)b_varargin_1->size[1];
  i11 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int)unnamed_idx_1;
  emxEnsureCapacity_real_T(I, i11);
  emxFree_real_T(&b_A);
  if (b_varargin_1->size[1] >= 1) {
    for (j = 0; j < b_varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = b_varargin_1->data[b_varargin_1->size[0] * j];
      for (idx = 1; idx < b_varargin_1->size[0]; idx++) {
        p = ((!rtIsNaN(b_varargin_1->data[idx + b_varargin_1->size[0] * j])) &&
             (rtIsNaN(I->data[I->size[0] * j]) || (I->data[I->size[0] * j] <
               b_varargin_1->data[idx + b_varargin_1->size[0] * j])));
        if (p) {
          I->data[I->size[0] * j] = b_varargin_1->data[idx + b_varargin_1->size
            [0] * j];
        }
      }
    }
  }

  if (I->size[1] <= 2) {
    if (I->size[1] == 1) {
      xi = I->data[0];
    } else if ((I->data[0] < I->data[1]) || (rtIsNaN(I->data[0]) && (!rtIsNaN
                 (I->data[1])))) {
      xi = I->data[1];
    } else {
      xi = I->data[0];
    }
  } else {
    if (!rtIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= I->size[1])) {
        if (!rtIsNaN(I->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      xi = I->data[0];
    } else {
      xi = I->data[idx - 1];
      while (idx + 1 <= I->size[1]) {
        if (xi < I->data[idx]) {
          xi = I->data[idx];
        }

        idx++;
      }
    }
  }

  /*  max off-diagonal entry */
  varargin_1_idx_0 = b_gamma + xi;
  if ((varargin_1_idx_0 < 1.0) || rtIsNaN(varargin_1_idx_0)) {
    varargin_1_idx_0 = 1.0;
  }

  delta = 2.2204460492503131E-16 * varargin_1_idx_0;
  c_varargin_1[0] = b_gamma;
  c_varargin_1[1] = xi / (double)u1;
  c_varargin_1[2] = 2.2204460492503131E-16;
  if (!rtIsNaN(b_gamma)) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(c_varargin_1[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx != 0) {
    b_gamma = c_varargin_1[idx - 1];
    while (idx + 1 < 4) {
      if (b_gamma < c_varargin_1[idx]) {
        b_gamma = c_varargin_1[idx];
      }

      idx++;
    }
  }

  emxInit_real_T1(&d, 1);
  beta = sqrt(b_gamma);

  /*  initialize d and L */
  i11 = d->size[0];
  d->size[0] = u1;
  emxEnsureCapacity_real_T2(d, i11);
  for (i11 = 0; i11 < u1; i11++) {
    d->data[i11] = 0.0;
  }

  emxInit_real_T(&L, 2);
  i11 = L->size[0] * L->size[1];
  L->size[0] = u1;
  L->size[1] = u1;
  emxEnsureCapacity_real_T(L, i11);
  loop_ub = u1 * u1;
  for (i11 = 0; i11 < loop_ub; i11++) {
    L->data[i11] = 0.0;
  }

  if (u1 > 0) {
    for (k = 0; k < u1; k++) {
      L->data[k + L->size[0] * k] = 1.0;
    }
  }

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_real_T(&K, 2);
  emxInit_real_T1(&Ccol, 1);
  emxInit_int32_T(&r4, 1);
  emxInit_real_T1(&b_L, 1);
  while (j <= u1 - 1) {
    if (j < 1) {
      i11 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_real_T(K, i11);
    } else {
      i11 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T(K, i11);
      loop_ub = j - 1;
      for (i11 = 0; i11 <= loop_ub; i11++) {
        K->data[K->size[0] * i11] = 1.0 + (double)i11;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    i11 = varargin_1->size[0];
    varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(varargin_1, i11);
    loop_ub = K->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      varargin_1->data[i11] = d->data[(int)K->data[K->size[0] * i11] - 1];
    }

    i11 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(diagA, i11);
    loop_ub = K->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      diagA->data[i11] = L->data[j + L->size[0] * ((int)K->data[K->size[0] * i11]
        - 1)];
    }

    i11 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T(I, i11);
    loop_ub = K->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      I->data[I->size[0] * i11] = L->data[j + L->size[0] * ((int)K->data[K->
        size[0] * i11] - 1)];
    }

    i11 = varargin_1->size[0];
    emxEnsureCapacity_real_T2(varargin_1, i11);
    loop_ub = varargin_1->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      varargin_1->data[i11] *= diagA->data[i11];
    }

    i11 = b_L->size[0];
    b_L->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(b_L, i11);
    loop_ub = K->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      b_L->data[i11] = K->data[K->size[0] * i11];
    }

    if ((b_L->size[0] == 1) || (varargin_1->size[0] == 1)) {
      b_gamma = 0.0;
      for (i11 = 0; i11 < I->size[1]; i11++) {
        b_gamma += I->data[I->size[0] * i11] * varargin_1->data[i11];
      }
    } else {
      b_gamma = 0.0;
      for (i11 = 0; i11 < I->size[1]; i11++) {
        b_gamma += I->data[I->size[0] * i11] * varargin_1->data[i11];
      }
    }

    xi = A->data[j + A->size[0] * j] - b_gamma;

    /*  C(j,j) in book */
    if (1 + j < u1) {
      if (u1 < j + 2) {
        i11 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T(I, i11);
      } else {
        i11 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (u1 - j) - 1;
        emxEnsureCapacity_real_T(I, i11);
        loop_ub = (u1 - j) - 2;
        for (i11 = 0; i11 <= loop_ub; i11++) {
          I->data[I->size[0] * i11] = ((unsigned int)j + i11) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      i11 = varargin_1->size[0];
      varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(varargin_1, i11);
      loop_ub = K->size[1];
      for (i11 = 0; i11 < loop_ub; i11++) {
        varargin_1->data[i11] = d->data[(int)K->data[K->size[0] * i11] - 1];
      }

      i11 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(diagA, i11);
      loop_ub = K->size[1];
      for (i11 = 0; i11 < loop_ub; i11++) {
        diagA->data[i11] = L->data[j + L->size[0] * ((int)K->data[K->size[0] *
          i11] - 1)];
      }

      i11 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T2(Ccol, i11);
      loop_ub = I->size[1];
      for (i11 = 0; i11 < loop_ub; i11++) {
        Ccol->data[i11] = A->data[((int)I->data[I->size[0] * i11] + A->size[0] *
          j) - 1];
      }

      i11 = b_varargin_1->size[0] * b_varargin_1->size[1];
      b_varargin_1->size[0] = I->size[1];
      b_varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T(b_varargin_1, i11);
      loop_ub = K->size[1];
      for (i11 = 0; i11 < loop_ub; i11++) {
        idx = I->size[1];
        for (aoffset = 0; aoffset < idx; aoffset++) {
          b_varargin_1->data[aoffset + b_varargin_1->size[0] * i11] = L->data
            [((int)I->data[I->size[0] * aoffset] + L->size[0] * ((int)K->data
               [K->size[0] * i11] - 1)) - 1];
        }
      }

      i11 = varargin_1->size[0];
      emxEnsureCapacity_real_T2(varargin_1, i11);
      loop_ub = varargin_1->size[0];
      for (i11 = 0; i11 < loop_ub; i11++) {
        varargin_1->data[i11] *= diagA->data[i11];
      }

      i11 = b_L->size[0];
      b_L->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(b_L, i11);
      loop_ub = K->size[1];
      for (i11 = 0; i11 < loop_ub; i11++) {
        b_L->data[i11] = K->data[K->size[0] * i11];
      }

      idx = b_L->size[0];
      if ((idx == 1) || (varargin_1->size[0] == 1)) {
        i11 = diagA->size[0];
        diagA->size[0] = b_varargin_1->size[0];
        emxEnsureCapacity_real_T2(diagA, i11);
        loop_ub = b_varargin_1->size[0];
        for (i11 = 0; i11 < loop_ub; i11++) {
          diagA->data[i11] = 0.0;
          idx = b_varargin_1->size[1];
          for (aoffset = 0; aoffset < idx; aoffset++) {
            diagA->data[i11] += b_varargin_1->data[i11 + b_varargin_1->size[0] *
              aoffset] * varargin_1->data[aoffset];
          }
        }
      } else {
        i11 = b_L->size[0];
        b_L->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(b_L, i11);
        loop_ub = I->size[1];
        for (i11 = 0; i11 < loop_ub; i11++) {
          b_L->data[i11] = I->data[I->size[0] * i11];
        }

        I_idx_0 = b_L->size[0];
        i11 = b_L->size[0];
        b_L->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(b_L, i11);
        loop_ub = I->size[1];
        for (i11 = 0; i11 < loop_ub; i11++) {
          b_L->data[i11] = I->data[I->size[0] * i11];
        }

        idx = b_L->size[0];
        i11 = diagA->size[0];
        diagA->size[0] = idx;
        emxEnsureCapacity_real_T2(diagA, i11);
        for (idx = 1; idx <= I_idx_0; idx++) {
          diagA->data[idx - 1] = 0.0;
        }

        k = 0;
        do {
          exitg2 = 0;
          i11 = b_L->size[0];
          b_L->size[0] = K->size[1];
          emxEnsureCapacity_real_T2(b_L, i11);
          loop_ub = K->size[1];
          for (i11 = 0; i11 < loop_ub; i11++) {
            b_L->data[i11] = K->data[K->size[0] * i11];
          }

          idx = b_L->size[0];
          if (k + 1 <= idx) {
            if (varargin_1->data[k] != 0.0) {
              aoffset = k * I_idx_0;
              for (idx = 0; idx < I_idx_0; idx++) {
                diagA->data[idx] += varargin_1->data[k] * b_varargin_1->
                  data[aoffset + idx];
              }
            }

            k++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }

      i11 = Ccol->size[0];
      emxEnsureCapacity_real_T2(Ccol, i11);
      loop_ub = Ccol->size[0];
      for (i11 = 0; i11 < loop_ub; i11++) {
        Ccol->data[i11] -= diagA->data[i11];
      }

      /*  C(I,j) in book */
      c_abs(Ccol, varargin_1);
      if (varargin_1->size[0] <= 2) {
        if (varargin_1->size[0] == 1) {
          b_gamma = varargin_1->data[0];
        } else if ((varargin_1->data[0] < varargin_1->data[1]) || (rtIsNaN
                    (varargin_1->data[0]) && (!rtIsNaN(varargin_1->data[1])))) {
          b_gamma = varargin_1->data[1];
        } else {
          b_gamma = varargin_1->data[0];
        }
      } else {
        if (!rtIsNaN(varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= varargin_1->size[0])) {
            if (!rtIsNaN(varargin_1->data[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          b_gamma = varargin_1->data[0];
        } else {
          b_gamma = varargin_1->data[idx - 1];
          while (idx + 1 <= varargin_1->size[0]) {
            if (b_gamma < varargin_1->data[idx]) {
              b_gamma = varargin_1->data[idx];
            }

            idx++;
          }
        }
      }

      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      b_gamma /= beta;
      c_varargin_1[0] = fabs(xi);
      c_varargin_1[1] = b_gamma * b_gamma;
      c_varargin_1[2] = delta;
      if (!rtIsNaN(c_varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k < 4)) {
          if (!rtIsNaN(c_varargin_1[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        b_gamma = c_varargin_1[0];
      } else {
        b_gamma = c_varargin_1[idx - 1];
        while (idx + 1 < 4) {
          if (b_gamma < c_varargin_1[idx]) {
            b_gamma = c_varargin_1[idx];
          }

          idx++;
        }
      }

      d->data[j] = b_gamma;
      i11 = r4->size[0];
      r4->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(r4, i11);
      loop_ub = I->size[1];
      for (i11 = 0; i11 < loop_ub; i11++) {
        r4->data[i11] = (int)I->data[I->size[0] * i11] - 1;
      }

      b_gamma = d->data[j];
      loop_ub = Ccol->size[0];
      for (i11 = 0; i11 < loop_ub; i11++) {
        L->data[r4->data[i11] + L->size[0] * j] = Ccol->data[i11] / b_gamma;
      }
    } else {
      varargin_1_idx_0 = fabs(xi);
      if ((varargin_1_idx_0 < delta) || (rtIsNaN(varargin_1_idx_0) && (!rtIsNaN
            (delta)))) {
        varargin_1_idx_0 = delta;
      }

      d->data[j] = varargin_1_idx_0;
    }

    j++;
  }

  emxFree_real_T(&b_varargin_1);
  emxFree_real_T(&varargin_1);
  emxFree_int32_T(&r4);
  emxFree_real_T(&Ccol);
  emxFree_real_T(&I);
  emxFree_real_T(&K);
  emxFree_real_T(&diagA);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  for (j = 0; j < u1; j++) {
    b_gamma = sqrt(d->data[j]);
    idx = L->size[0];
    i11 = b_L->size[0];
    b_L->size[0] = idx;
    emxEnsureCapacity_real_T2(b_L, i11);
    for (i11 = 0; i11 < idx; i11++) {
      b_L->data[i11] = L->data[i11 + L->size[0] * j] * b_gamma;
    }

    loop_ub = b_L->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      L->data[i11 + L->size[0] * j] = b_L->data[i11];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
  }

  emxFree_real_T(&b_L);
  emxFree_real_T(&d);
  i11 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(R, i11);
  loop_ub = L->size[0];
  for (i11 = 0; i11 < loop_ub; i11++) {
    idx = L->size[1];
    for (aoffset = 0; aoffset < idx; aoffset++) {
      R->data[aoffset + R->size[0] * i11] = L->data[i11 + L->size[0] * aoffset];
    }
  }

  emxFree_real_T(&L);
}

/*
 * CHOLMOD Modified Cholesky factorization
 *   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL)
 *   if A is (sufficiently) positive definite, and otherwise returns a
 *   modified factor R with diagonal enries >= sqrt(delta) and
 *   offdiagonal entries <= beta in absolute value,
 *   where delta and beta are defined in terms of size of diagonal and
 *   offdiagonal entries of A and the machine precision; see below.
 *   The idea is to ensure that E = A - R'*R is reasonably small if A is
 *   not too far from being indefinite.  If A is sparse, so is R.
 *   The output parameter indef is set to 0 if A is sufficiently positive
 *   definite and to 1 if the factorization is modified.
 *
 *   The point of modified Cholesky is to avoid computing eigenvalues,
 *   but for dense matrices, MODCHOL takes longer than calling the built-in
 *   EIG, because of the cost of interpreting the code, even though it
 *   only has one loop and uses vector operations.
 * Arguments    : const double A[4]
 *                double R[4]
 *                double *err
 * Return Type  : void
 */
void c_cholmod(const double A[4], double R[4], double *err)
{
  double diagA[2];
  double varargin_1[2];
  double b_gamma;
  double L[4];
  int idx;
  double b_A[4];
  int j;
  double xi;
  double maxval;
  double delta;
  double b_varargin_1[3];
  int k;
  boolean_T exitg1;
  double beta;
  emxArray_real_T *y;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *b_a;
  int Ccol_size[1];
  int i19;
  double Ccol_data[1];
  int exitg2;
  int loop_ub;
  emxArray_real_T b_Ccol_data;

  /*  function [R, indef, E, err] = cholmod(A) */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  *err = 0.0;

  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  c_diag(A, diagA);
  e_abs(diagA, varargin_1);
  if ((varargin_1[0] < varargin_1[1]) || (rtIsNaN(varargin_1[0]) && (!rtIsNaN
        (varargin_1[1])))) {
    b_gamma = varargin_1[1];
  } else {
    b_gamma = varargin_1[0];
  }

  /*  max diagonal entry */
  d_diag(diagA, L);
  for (idx = 0; idx < 4; idx++) {
    b_A[idx] = A[idx] - L[idx];
  }

  d_abs(b_A, L);
  for (j = 0; j < 2; j++) {
    xi = L[j << 1];
    if ((!rtIsNaN(L[1 + (j << 1)])) && (rtIsNaN(L[j << 1]) || (L[j << 1] < L[1 +
          (j << 1)]))) {
      xi = L[1 + (j << 1)];
    }

    diagA[j] = xi;
  }

  if ((diagA[0] < diagA[1]) || (rtIsNaN(diagA[0]) && (!rtIsNaN(diagA[1])))) {
    xi = diagA[1];
  } else {
    xi = diagA[0];
  }

  /*  max off-diagonal entry */
  varargin_1[0] = b_gamma + xi;
  if ((varargin_1[0] < 1.0) || rtIsNaN(varargin_1[0])) {
    maxval = 1.0;
  } else {
    maxval = varargin_1[0];
  }

  delta = 2.2204460492503131E-16 * maxval;
  b_varargin_1[0] = b_gamma;
  b_varargin_1[1] = xi / 2.0;
  b_varargin_1[2] = 2.2204460492503131E-16;
  if (!rtIsNaN(b_gamma)) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(b_varargin_1[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx != 0) {
    b_gamma = b_varargin_1[idx - 1];
    while (idx + 1 < 4) {
      if (b_gamma < b_varargin_1[idx]) {
        b_gamma = b_varargin_1[idx];
      }

      idx++;
    }
  }

  beta = sqrt(b_gamma);

  /*  initialize d and L */
  for (idx = 0; idx < 2; idx++) {
    diagA[idx] = 0.0;
  }

  for (idx = 0; idx < 4; idx++) {
    L[idx] = 0.0;
  }

  for (k = 0; k < 2; k++) {
    L[k + (k << 1)] = 1.0;
  }

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  emxInit_real_T(&y, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T1(&b, 1);
  emxInit_real_T1(&b_y, 1);
  emxInit_real_T(&b_a, 2);
  for (j = 0; j < 2; j++) {
    if (j < 1) {
      idx = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 0;
      emxEnsureCapacity_real_T(y, idx);
    } else {
      idx = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(y, idx);
      for (idx = 0; idx < 1; idx++) {
        y->data[0] = 1.0;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    Ccol_size[0] = y->size[1];
    k = y->size[1];
    for (idx = 0; idx < k; idx++) {
      Ccol_data[idx] = diagA[(int)y->data[y->size[0] * idx] - 1];
    }

    idx = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = y->size[1];
    emxEnsureCapacity_real_T(a, idx);
    k = y->size[1];
    for (idx = 0; idx < k; idx++) {
      a->data[a->size[0] * idx] = L[j + (((int)y->data[y->size[0] * idx] - 1) <<
        1)];
    }

    idx = b->size[0];
    b->size[0] = Ccol_size[0];
    emxEnsureCapacity_real_T2(b, idx);
    k = Ccol_size[0];
    for (idx = 0; idx < k; idx++) {
      b->data[idx] = Ccol_data[idx] * L[j + (((int)y->data[y->size[0] * idx] - 1)
        << 1)];
    }

    idx = y->size[1];
    if ((idx == 1) || (b->size[0] == 1)) {
      xi = 0.0;
      for (idx = 0; idx < a->size[1]; idx++) {
        xi += a->data[a->size[0] * idx] * b->data[idx];
      }
    } else {
      xi = 0.0;
      for (idx = 0; idx < a->size[1]; idx++) {
        xi += a->data[a->size[0] * idx] * b->data[idx];
      }
    }

    b_gamma = A[j + (j << 1)] - xi;

    /*  C(j,j) in book */
    if (1 + j < 2) {
      /*  row index: all rows below diagonal */
      Ccol_size[0] = 1;
      for (idx = 0; idx < 1; idx++) {
        Ccol_data[0] = A[1];
      }

      idx = b_a->size[0] * b_a->size[1];
      b_a->size[0] = 1;
      b_a->size[1] = y->size[1];
      emxEnsureCapacity_real_T(b_a, idx);
      k = y->size[1];
      for (idx = 0; idx < k; idx++) {
        for (i19 = 0; i19 < 1; i19++) {
          b_a->data[b_a->size[0] * idx] = L[1 + (((int)y->data[y->size[0] * idx]
            - 1) << 1)];
        }
      }

      idx = b->size[0];
      b->size[0] = y->size[1];
      emxEnsureCapacity_real_T2(b, idx);
      k = y->size[1];
      for (idx = 0; idx < k; idx++) {
        b->data[idx] = diagA[(int)y->data[y->size[0] * idx] - 1] * L[((int)
          y->data[y->size[0] * idx] - 1) << 1];
      }

      idx = y->size[1];
      if ((idx == 1) || (b->size[0] == 1)) {
        idx = b_y->size[0];
        b_y->size[0] = b_a->size[0];
        emxEnsureCapacity_real_T2(b_y, idx);
        k = b_a->size[0];
        for (idx = 0; idx < k; idx++) {
          b_y->data[idx] = 0.0;
          loop_ub = b_a->size[1];
          for (i19 = 0; i19 < loop_ub; i19++) {
            b_y->data[idx] += b_a->data[idx + b_a->size[0] * i19] * b->data[i19];
          }
        }
      } else {
        idx = b_y->size[0];
        b_y->size[0] = 1;
        emxEnsureCapacity_real_T2(b_y, idx);
        b_y->data[0] = 0.0;
        k = 1;
        do {
          exitg2 = 0;
          idx = y->size[1];
          if (k <= idx) {
            if (b->data[0] != 0.0) {
              b_y->data[0] = b->data[0] * b_a->data[0];
            }

            k = 2;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }

      k = Ccol_size[0];
      for (idx = 0; idx < k; idx++) {
        Ccol_data[idx] -= b_y->data[idx];
      }

      /*  C(I,j) in book */
      b_Ccol_data.data = (double *)&Ccol_data;
      b_Ccol_data.size = (int *)&Ccol_size;
      b_Ccol_data.allocatedSize = 1;
      b_Ccol_data.numDimensions = 1;
      b_Ccol_data.canFreeData = false;
      c_abs(&b_Ccol_data, b);
      if (b->size[0] <= 2) {
        if (b->size[0] == 1) {
          xi = b->data[0];
        } else if ((b->data[0] < b->data[1]) || (rtIsNaN(b->data[0]) &&
                    (!rtIsNaN(b->data[1])))) {
          xi = b->data[1];
        } else {
          xi = b->data[0];
        }
      } else {
        if (!rtIsNaN(b->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= b->size[0])) {
            if (!rtIsNaN(b->data[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          xi = b->data[0];
        } else {
          xi = b->data[idx - 1];
          while (idx + 1 <= b->size[0]) {
            if (xi < b->data[idx]) {
              xi = b->data[idx];
            }

            idx++;
          }
        }
      }

      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      xi /= beta;
      b_varargin_1[0] = fabs(b_gamma);
      b_varargin_1[1] = xi * xi;
      b_varargin_1[2] = delta;
      if (!rtIsNaN(b_varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k < 4)) {
          if (!rtIsNaN(b_varargin_1[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        xi = b_varargin_1[0];
      } else {
        xi = b_varargin_1[idx - 1];
        while (idx + 1 < 4) {
          if (xi < b_varargin_1[idx]) {
            xi = b_varargin_1[idx];
          }

          idx++;
        }
      }

      diagA[0] = xi;
      k = Ccol_size[0];
      for (idx = 0; idx < k; idx++) {
        L[1] = Ccol_data[idx] / xi;
      }
    } else {
      varargin_1[0] = fabs(b_gamma);
      if ((varargin_1[0] < delta) || (rtIsNaN(varargin_1[0]) && (!rtIsNaN(delta))))
      {
        maxval = delta;
      } else {
        maxval = varargin_1[0];
      }

      diagA[1] = maxval;
    }
  }

  emxFree_real_T(&b_a);
  emxFree_real_T(&b_y);
  emxFree_real_T(&b);
  emxFree_real_T(&a);
  emxFree_real_T(&y);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  for (j = 0; j < 2; j++) {
    xi = sqrt(diagA[j]);
    for (idx = 0; idx < 2; idx++) {
      L[idx + (j << 1)] *= xi;
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
  }

  for (idx = 0; idx < 2; idx++) {
    for (i19 = 0; i19 < 2; i19++) {
      R[i19 + (idx << 1)] = L[idx + (i19 << 1)];
    }
  }
}

/*
 * CHOLMOD Modified Cholesky factorization
 *   R = cholmod(A) returns the upper Cholesky factor of A (same as CHOL)
 *   if A is (sufficiently) positive definite, and otherwise returns a
 *   modified factor R with diagonal enries >= sqrt(delta) and
 *   offdiagonal entries <= beta in absolute value,
 *   where delta and beta are defined in terms of size of diagonal and
 *   offdiagonal entries of A and the machine precision; see below.
 *   The idea is to ensure that E = A - R'*R is reasonably small if A is
 *   not too far from being indefinite.  If A is sparse, so is R.
 *   The output parameter indef is set to 0 if A is sufficiently positive
 *   definite and to 1 if the factorization is modified.
 *
 *   The point of modified Cholesky is to avoid computing eigenvalues,
 *   but for dense matrices, MODCHOL takes longer than calling the built-in
 *   EIG, because of the cost of interpreting the code, even though it
 *   only has one loop and uses vector operations.
 * Arguments    : const emxArray_real_T *A
 *                emxArray_real_T *R
 *                double *err
 * Return Type  : void
 */
void cholmod(const emxArray_real_T *A, emxArray_real_T *R, double *err)
{
  int idx;
  int u1;
  emxArray_real_T *diagA;
  emxArray_real_T *varargin_1;
  double b_gamma;
  int k;
  boolean_T exitg1;
  emxArray_real_T *b_varargin_1;
  emxArray_real_T *b_A;
  int i7;
  int loop_ub;
  emxArray_real_T *I;
  unsigned int unnamed_idx_1;
  int j;
  double xi;
  double djtemp;
  boolean_T p;
  double delta;
  double c_varargin_1[3];
  emxArray_real_T *d;
  emxArray_real_T *L;
  emxArray_real_T *K;
  emxArray_real_T *Ccol;
  emxArray_int32_T *r2;
  emxArray_real_T *b_L;
  int aoffset;
  int I_idx_0;
  int exitg2;

  /*  function [R, indef, E, err] = cholmod(A) */
  /*   reference: Nocedal and Wright, Algorithm 3.4 and subsequent discussion */
  /*   (not Algorithm 3.5, which is more complicated) */
  /*   original algorithm is due to Gill and Murray, 1974 */
  /*   written by M. Overton, overton@cs.nyu.edu, last modified Feb 2005 */
  /*   convenient to work with A = LDL' where D is diagonal, L is unit */
  /*   lower triangular, and so R = (LD^(1/2))' */
  /*  */
  /*  set parameters governing bounds on L and D (eps is machine epsilon) */
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    u1 = 0;
  } else {
    idx = A->size[0];
    u1 = A->size[1];
    if (idx > u1) {
      u1 = idx;
    }
  }

  emxInit_real_T1(&diagA, 1);
  emxInit_real_T1(&varargin_1, 1);
  diag(A, diagA);
  c_abs(diagA, varargin_1);
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      b_gamma = varargin_1->data[0];
    } else if ((varargin_1->data[0] < varargin_1->data[1]) || (rtIsNaN
                (varargin_1->data[0]) && (!rtIsNaN(varargin_1->data[1])))) {
      b_gamma = varargin_1->data[1];
    } else {
      b_gamma = varargin_1->data[0];
    }
  } else {
    if (!rtIsNaN(varargin_1->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= varargin_1->size[0])) {
        if (!rtIsNaN(varargin_1->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      b_gamma = varargin_1->data[0];
    } else {
      b_gamma = varargin_1->data[idx - 1];
      while (idx + 1 <= varargin_1->size[0]) {
        if (b_gamma < varargin_1->data[idx]) {
          b_gamma = varargin_1->data[idx];
        }

        idx++;
      }
    }
  }

  emxInit_real_T(&b_varargin_1, 2);
  emxInit_real_T(&b_A, 2);

  /*  max diagonal entry */
  b_diag(diagA, b_varargin_1);
  i7 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i7);
  loop_ub = A->size[0] * A->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    b_A->data[i7] = A->data[i7] - b_varargin_1->data[i7];
  }

  emxInit_real_T(&I, 2);
  b_abs(b_A, b_varargin_1);
  unnamed_idx_1 = (unsigned int)b_varargin_1->size[1];
  i7 = I->size[0] * I->size[1];
  I->size[0] = 1;
  I->size[1] = (int)unnamed_idx_1;
  emxEnsureCapacity_real_T(I, i7);
  emxFree_real_T(&b_A);
  if (b_varargin_1->size[1] >= 1) {
    for (j = 0; j < b_varargin_1->size[1]; j++) {
      I->data[I->size[0] * j] = b_varargin_1->data[b_varargin_1->size[0] * j];
      for (idx = 1; idx < b_varargin_1->size[0]; idx++) {
        p = ((!rtIsNaN(b_varargin_1->data[idx + b_varargin_1->size[0] * j])) &&
             (rtIsNaN(I->data[I->size[0] * j]) || (I->data[I->size[0] * j] <
               b_varargin_1->data[idx + b_varargin_1->size[0] * j])));
        if (p) {
          I->data[I->size[0] * j] = b_varargin_1->data[idx + b_varargin_1->size
            [0] * j];
        }
      }
    }
  }

  if (I->size[1] <= 2) {
    if (I->size[1] == 1) {
      xi = I->data[0];
    } else if ((I->data[0] < I->data[1]) || (rtIsNaN(I->data[0]) && (!rtIsNaN
                 (I->data[1])))) {
      xi = I->data[1];
    } else {
      xi = I->data[0];
    }
  } else {
    if (!rtIsNaN(I->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= I->size[1])) {
        if (!rtIsNaN(I->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      xi = I->data[0];
    } else {
      xi = I->data[idx - 1];
      while (idx + 1 <= I->size[1]) {
        if (xi < I->data[idx]) {
          xi = I->data[idx];
        }

        idx++;
      }
    }
  }

  /*  max off-diagonal entry */
  djtemp = b_gamma + xi;
  if ((djtemp < 1.0) || rtIsNaN(djtemp)) {
    djtemp = 1.0;
  }

  delta = 2.2204460492503131E-16 * djtemp;
  c_varargin_1[0] = b_gamma;
  c_varargin_1[1] = xi / (double)u1;
  c_varargin_1[2] = 2.2204460492503131E-16;
  if (!rtIsNaN(b_gamma)) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(c_varargin_1[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx != 0) {
    b_gamma = c_varargin_1[idx - 1];
    while (idx + 1 < 4) {
      if (b_gamma < c_varargin_1[idx]) {
        b_gamma = c_varargin_1[idx];
      }

      idx++;
    }
  }

  emxInit_real_T1(&d, 1);
  b_sqrt(&b_gamma);

  /*  initialize d and L */
  i7 = d->size[0];
  d->size[0] = u1;
  emxEnsureCapacity_real_T2(d, i7);
  for (i7 = 0; i7 < u1; i7++) {
    d->data[i7] = 0.0;
  }

  emxInit_real_T(&L, 2);
  i7 = L->size[0] * L->size[1];
  L->size[0] = u1;
  L->size[1] = u1;
  emxEnsureCapacity_real_T(L, i7);
  loop_ub = u1 * u1;
  for (i7 = 0; i7 < loop_ub; i7++) {
    L->data[i7] = 0.0;
  }

  if (u1 > 0) {
    for (k = 0; k < u1; k++) {
      L->data[k + L->size[0] * k] = 1.0;
    }
  }

  /*  there are no inner for loops, everything implemented with */
  /*  vector operations for a reasonable level of efficiency */
  j = 0;
  emxInit_real_T(&K, 2);
  emxInit_real_T1(&Ccol, 1);
  emxInit_int32_T(&r2, 1);
  emxInit_real_T1(&b_L, 1);
  while (j <= u1 - 1) {
    if (j < 1) {
      i7 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = 0;
      emxEnsureCapacity_real_T(K, i7);
    } else {
      i7 = K->size[0] * K->size[1];
      K->size[0] = 1;
      K->size[1] = j;
      emxEnsureCapacity_real_T(K, i7);
      loop_ub = j - 1;
      for (i7 = 0; i7 <= loop_ub; i7++) {
        K->data[K->size[0] * i7] = 1.0 + (double)i7;
      }
    }

    /*  column index: all columns to left of diagonal */
    /*  d(K) doesn't work in case K is empty */
    i7 = varargin_1->size[0];
    varargin_1->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(varargin_1, i7);
    loop_ub = K->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      varargin_1->data[i7] = d->data[(int)K->data[K->size[0] * i7] - 1];
    }

    i7 = diagA->size[0];
    diagA->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(diagA, i7);
    loop_ub = K->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      diagA->data[i7] = L->data[j + L->size[0] * ((int)K->data[K->size[0] * i7]
        - 1)];
    }

    i7 = I->size[0] * I->size[1];
    I->size[0] = 1;
    I->size[1] = K->size[1];
    emxEnsureCapacity_real_T(I, i7);
    loop_ub = K->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      I->data[I->size[0] * i7] = L->data[j + L->size[0] * ((int)K->data[K->size
        [0] * i7] - 1)];
    }

    i7 = varargin_1->size[0];
    emxEnsureCapacity_real_T2(varargin_1, i7);
    loop_ub = varargin_1->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      varargin_1->data[i7] *= diagA->data[i7];
    }

    i7 = b_L->size[0];
    b_L->size[0] = K->size[1];
    emxEnsureCapacity_real_T2(b_L, i7);
    loop_ub = K->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      b_L->data[i7] = K->data[K->size[0] * i7];
    }

    if ((b_L->size[0] == 1) || (varargin_1->size[0] == 1)) {
      xi = 0.0;
      for (i7 = 0; i7 < I->size[1]; i7++) {
        xi += I->data[I->size[0] * i7] * varargin_1->data[i7];
      }
    } else {
      xi = 0.0;
      for (i7 = 0; i7 < I->size[1]; i7++) {
        xi += I->data[I->size[0] * i7] * varargin_1->data[i7];
      }
    }

    djtemp = A->data[j + A->size[0] * j] - xi;

    /*  C(j,j) in book */
    if (1 + j < u1) {
      if (u1 < j + 2) {
        i7 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = 0;
        emxEnsureCapacity_real_T(I, i7);
      } else {
        i7 = I->size[0] * I->size[1];
        I->size[0] = 1;
        I->size[1] = (u1 - j) - 1;
        emxEnsureCapacity_real_T(I, i7);
        loop_ub = (u1 - j) - 2;
        for (i7 = 0; i7 <= loop_ub; i7++) {
          I->data[I->size[0] * i7] = ((unsigned int)j + i7) + 2U;
        }
      }

      /*  row index: all rows below diagonal */
      i7 = varargin_1->size[0];
      varargin_1->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(varargin_1, i7);
      loop_ub = K->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        varargin_1->data[i7] = d->data[(int)K->data[K->size[0] * i7] - 1];
      }

      i7 = diagA->size[0];
      diagA->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(diagA, i7);
      loop_ub = K->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        diagA->data[i7] = L->data[j + L->size[0] * ((int)K->data[K->size[0] * i7]
          - 1)];
      }

      i7 = Ccol->size[0];
      Ccol->size[0] = I->size[1];
      emxEnsureCapacity_real_T2(Ccol, i7);
      loop_ub = I->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        Ccol->data[i7] = A->data[((int)I->data[I->size[0] * i7] + A->size[0] * j)
          - 1];
      }

      i7 = b_varargin_1->size[0] * b_varargin_1->size[1];
      b_varargin_1->size[0] = I->size[1];
      b_varargin_1->size[1] = K->size[1];
      emxEnsureCapacity_real_T(b_varargin_1, i7);
      loop_ub = K->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        idx = I->size[1];
        for (aoffset = 0; aoffset < idx; aoffset++) {
          b_varargin_1->data[aoffset + b_varargin_1->size[0] * i7] = L->data
            [((int)I->data[I->size[0] * aoffset] + L->size[0] * ((int)K->data
               [K->size[0] * i7] - 1)) - 1];
        }
      }

      i7 = varargin_1->size[0];
      emxEnsureCapacity_real_T2(varargin_1, i7);
      loop_ub = varargin_1->size[0];
      for (i7 = 0; i7 < loop_ub; i7++) {
        varargin_1->data[i7] *= diagA->data[i7];
      }

      i7 = b_L->size[0];
      b_L->size[0] = K->size[1];
      emxEnsureCapacity_real_T2(b_L, i7);
      loop_ub = K->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        b_L->data[i7] = K->data[K->size[0] * i7];
      }

      idx = b_L->size[0];
      if ((idx == 1) || (varargin_1->size[0] == 1)) {
        i7 = diagA->size[0];
        diagA->size[0] = b_varargin_1->size[0];
        emxEnsureCapacity_real_T2(diagA, i7);
        loop_ub = b_varargin_1->size[0];
        for (i7 = 0; i7 < loop_ub; i7++) {
          diagA->data[i7] = 0.0;
          idx = b_varargin_1->size[1];
          for (aoffset = 0; aoffset < idx; aoffset++) {
            diagA->data[i7] += b_varargin_1->data[i7 + b_varargin_1->size[0] *
              aoffset] * varargin_1->data[aoffset];
          }
        }
      } else {
        i7 = b_L->size[0];
        b_L->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(b_L, i7);
        loop_ub = I->size[1];
        for (i7 = 0; i7 < loop_ub; i7++) {
          b_L->data[i7] = I->data[I->size[0] * i7];
        }

        I_idx_0 = b_L->size[0];
        i7 = b_L->size[0];
        b_L->size[0] = I->size[1];
        emxEnsureCapacity_real_T2(b_L, i7);
        loop_ub = I->size[1];
        for (i7 = 0; i7 < loop_ub; i7++) {
          b_L->data[i7] = I->data[I->size[0] * i7];
        }

        idx = b_L->size[0];
        i7 = diagA->size[0];
        diagA->size[0] = idx;
        emxEnsureCapacity_real_T2(diagA, i7);
        for (idx = 1; idx <= I_idx_0; idx++) {
          diagA->data[idx - 1] = 0.0;
        }

        k = 0;
        do {
          exitg2 = 0;
          i7 = b_L->size[0];
          b_L->size[0] = K->size[1];
          emxEnsureCapacity_real_T2(b_L, i7);
          loop_ub = K->size[1];
          for (i7 = 0; i7 < loop_ub; i7++) {
            b_L->data[i7] = K->data[K->size[0] * i7];
          }

          idx = b_L->size[0];
          if (k + 1 <= idx) {
            if (varargin_1->data[k] != 0.0) {
              aoffset = k * I_idx_0;
              for (idx = 0; idx < I_idx_0; idx++) {
                diagA->data[idx] += varargin_1->data[k] * b_varargin_1->
                  data[aoffset + idx];
              }
            }

            k++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }

      i7 = Ccol->size[0];
      emxEnsureCapacity_real_T2(Ccol, i7);
      loop_ub = Ccol->size[0];
      for (i7 = 0; i7 < loop_ub; i7++) {
        Ccol->data[i7] -= diagA->data[i7];
      }

      /*  C(I,j) in book */
      c_abs(Ccol, varargin_1);
      if (varargin_1->size[0] <= 2) {
        if (varargin_1->size[0] == 1) {
          xi = varargin_1->data[0];
        } else if ((varargin_1->data[0] < varargin_1->data[1]) || (rtIsNaN
                    (varargin_1->data[0]) && (!rtIsNaN(varargin_1->data[1])))) {
          xi = varargin_1->data[1];
        } else {
          xi = varargin_1->data[0];
        }
      } else {
        if (!rtIsNaN(varargin_1->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= varargin_1->size[0])) {
            if (!rtIsNaN(varargin_1->data[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          xi = varargin_1->data[0];
        } else {
          xi = varargin_1->data[idx - 1];
          while (idx + 1 <= varargin_1->size[0]) {
            if (xi < varargin_1->data[idx]) {
              xi = varargin_1->data[idx];
            }

            idx++;
          }
        }
      }

      /*  guarantees d(j) not too small and L(I,j) not too big */
      /*  in sufficiently positive definite case, d(j) = djtemp */
      xi /= b_gamma;
      c_varargin_1[0] = fabs(djtemp);
      c_varargin_1[1] = xi * xi;
      c_varargin_1[2] = delta;
      if (!rtIsNaN(c_varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k < 4)) {
          if (!rtIsNaN(c_varargin_1[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        xi = c_varargin_1[0];
      } else {
        xi = c_varargin_1[idx - 1];
        while (idx + 1 < 4) {
          if (xi < c_varargin_1[idx]) {
            xi = c_varargin_1[idx];
          }

          idx++;
        }
      }

      d->data[j] = xi;
      i7 = r2->size[0];
      r2->size[0] = I->size[1];
      emxEnsureCapacity_int32_T(r2, i7);
      loop_ub = I->size[1];
      for (i7 = 0; i7 < loop_ub; i7++) {
        r2->data[i7] = (int)I->data[I->size[0] * i7] - 1;
      }

      xi = d->data[j];
      loop_ub = Ccol->size[0];
      for (i7 = 0; i7 < loop_ub; i7++) {
        L->data[r2->data[i7] + L->size[0] * j] = Ccol->data[i7] / xi;
      }
    } else {
      djtemp = fabs(djtemp);
      if ((djtemp < delta) || (rtIsNaN(djtemp) && (!rtIsNaN(delta)))) {
        djtemp = delta;
      }

      d->data[j] = djtemp;
    }

    j++;
  }

  emxFree_real_T(&b_varargin_1);
  emxFree_real_T(&varargin_1);
  emxFree_int32_T(&r2);
  emxFree_real_T(&Ccol);
  emxFree_real_T(&I);
  emxFree_real_T(&K);
  emxFree_real_T(&diagA);

  /*  convert to usual output format: replace L by L*sqrt(D) and transpose */
  for (j = 0; j < u1; j++) {
    xi = sqrt(d->data[j]);
    idx = L->size[0];
    i7 = b_L->size[0];
    b_L->size[0] = idx;
    emxEnsureCapacity_real_T2(b_L, i7);
    for (i7 = 0; i7 < idx; i7++) {
      b_L->data[i7] = L->data[i7 + L->size[0] * j] * xi;
    }

    loop_ub = b_L->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      L->data[i7 + L->size[0] * j] = b_L->data[i7];
    }

    /*  L = L*diag(sqrt(d)) bad in sparse case */
  }

  emxFree_real_T(&b_L);
  emxFree_real_T(&d);
  i7 = R->size[0] * R->size[1];
  R->size[0] = L->size[1];
  R->size[1] = L->size[0];
  emxEnsureCapacity_real_T(R, i7);
  loop_ub = L->size[0];
  for (i7 = 0; i7 < loop_ub; i7++) {
    idx = L->size[1];
    for (aoffset = 0; aoffset < idx; aoffset++) {
      R->data[aoffset + R->size[0] * i7] = L->data[i7 + L->size[0] * aoffset];
    }
  }

  emxFree_real_T(&L);
  *err = 0.0;
}

/*
 * File trailer for cholmod.c
 *
 * [EOF]
 */

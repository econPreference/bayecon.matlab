/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: lnpdfmvn.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "lnpdfmvn.h"
#include "Mixture_Normal_emxutil.h"
#include "combineVectorElements.h"
#include "cholmod.h"
#include "xgetrf.h"
#include "Mixture_Normal_rtwutil.h"

/* Function Definitions */

/*
 * GAUSSIAN_PROB Evaluate a multivariate Gaussian density.
 *  x =  d by 1 vector
 * Arguments    : const emxArray_real_T *x
 *                const double m[2]
 *                const double C[4]
 * Return Type  : double
 */
double b_lnpdfmvn(const emxArray_real_T *x, const double m[2], const double C[4])
{
  int ix;
  int n;
  int i18;
  double Hinv[4];
  signed char ipiv[2];
  double y;
  int iy;
  boolean_T isodd;
  int k;
  double temp;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  double c_y[4];
  double b_Hinv[4];
  double Ainv_data[4];
  double b_a[2];
  double tmp_data[2];
  ix = x->size[1];
  if (2 > ix) {
    ix = 2;
  }

  if (x->size[1] == 0) {
    n = 0;
  } else {
    n = ix;
  }

  for (i18 = 0; i18 < 4; i18++) {
    Hinv[i18] = C[i18];
  }

  for (i18 = 0; i18 < 2; i18++) {
    ipiv[i18] = (signed char)(1 + i18);
  }

  ix = 0;
  if (fabs(C[1]) > fabs(C[0])) {
    ix = 1;
  }

  if (C[ix] != 0.0) {
    if (ix != 0) {
      ipiv[0] = 2;
      ix = 0;
      iy = 1;
      for (k = 0; k < 2; k++) {
        temp = Hinv[ix];
        Hinv[ix] = Hinv[iy];
        Hinv[iy] = temp;
        ix += 2;
        iy += 2;
      }
    }

    Hinv[1] /= Hinv[0];
  }

  if (Hinv[2] != 0.0) {
    Hinv[3] += Hinv[1] * -Hinv[2];
  }

  y = Hinv[0] * Hinv[3];
  isodd = false;
  if (ipiv[0] > 1) {
    isodd = true;
  }

  if (isodd) {
    y = -y;
  }

  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error) */
  /* 대칭, 양정부호 행렬의 역행렬을 LU분해보다 빠르고 정확하게 계산해 줍니다. */
  c_cholmod(C, Hinv, &temp);

  /* INVUPTR Inverse of an upper triangular matrix  */
  /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
  /* matrix T.  The output matrix T contains the inverse of T.  */
  /* This program implements Algorithm 4.2.2 of the book. */
  /* Input  : Matrix T  */
  /* output : Matrix T */
  k = 0;
  emxInit_real_T(&a, 2);
  emxInit_real_T1(&b, 1);
  while ((k < 2) && (!(Hinv[(((1 - k) << 1) - k) + 1] == 0.0))) {
    Hinv[(((1 - k) << 1) - k) + 1] = 1.0 / Hinv[(((1 - k) << 1) - k) + 1];
    i18 = (int)((1.0 + (-1.0 - ((2.0 + -(double)k) - 1.0))) / -1.0);
    ix = 0;
    while (ix <= i18 - 1) {
      iy = a->size[0] * a->size[1];
      a->size[0] = 1;
      a->size[1] = 1;
      emxEnsureCapacity_real_T(a, iy);
      for (iy = 0; iy < 1; iy++) {
        a->data[a->size[0] * iy] = Hinv[((iy - k) + 1) << 1];
      }

      iy = b->size[0];
      b->size[0] = 1;
      emxEnsureCapacity_real_T2(b, iy);
      for (iy = 0; iy < 1; iy++) {
        b->data[iy] = Hinv[((iy - k) + ((1 - k) << 1)) + 1];
      }

      temp = 0.0;
      for (iy = 0; iy < a->size[1]; iy++) {
        temp += a->data[a->size[0] * iy] * b->data[iy];
      }

      Hinv[(1 - k) << 1] = -temp / Hinv[0];
      ix = 1;
    }

    k++;
  }

  emxFree_real_T(&b);
  emxFree_real_T(&a);
  for (i18 = 0; i18 < 2; i18++) {
    for (iy = 0; iy < 2; iy++) {
      c_y[i18 + (iy << 1)] = 0.0;
      b_Hinv[i18 + (iy << 1)] = 0.0;
      for (ix = 0; ix < 2; ix++) {
        c_y[i18 + (iy << 1)] += Hinv[i18 + (ix << 1)] * Hinv[iy + (ix << 1)];
        b_Hinv[i18 + (iy << 1)] += Hinv[i18 + (ix << 1)] * Hinv[iy + (ix << 1)];
      }
    }
  }

  for (i18 = 0; i18 < 2; i18++) {
    for (iy = 0; iy < 2; iy++) {
      Ainv_data[iy + (i18 << 1)] = b_Hinv[iy + (i18 << 1)];
    }
  }

  emxInit_real_T(&b_y, 2);
  i18 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 2;
  b_y->size[1] = 2;
  emxEnsureCapacity_real_T(b_y, i18);
  for (i18 = 0; i18 < 2; i18++) {
    for (iy = 0; iy < 2; iy++) {
      b_y->data[iy + b_y->size[0] * i18] = (Ainv_data[iy + (i18 << 1)] +
        Ainv_data[i18 + (iy << 1)]) / 2.0;
    }
  }

  for (i18 = 0; i18 < 2; i18++) {
    for (iy = 0; iy < 2; iy++) {
      Ainv_data[iy + (i18 << 1)] = (c_y[iy + (i18 << 1)] + c_y[i18 + (iy << 1)])
        / 2.0;
    }

    b_a[i18] = x->data[i18] - m[i18];
  }

  for (ix = 0; ix < 2; ix++) {
    iy = ix << 1;
    tmp_data[ix] = 0.0;
    for (k = 0; k < 2; k++) {
      temp = tmp_data[ix];
      if (b_y->data[iy + k] != 0.0) {
        temp = tmp_data[ix] + Ainv_data[iy + k] * b_a[k];
      }

      tmp_data[ix] = temp;
    }
  }

  emxFree_real_T(&b_y);
  for (i18 = 0; i18 < 2; i18++) {
    b_a[i18] = tmp_data[i18] * (x->data[i18] - m[i18]);
  }

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  return -0.5 * (b_a[0] + b_a[1]) - log(rt_powd_snf(6.2831853071795862, (double)
    n / 2.0) * sqrt(fabs(y)));
}

/*
 * GAUSSIAN_PROB Evaluate a multivariate Gaussian density.
 *  x =  d by 1 vector
 * Arguments    : const emxArray_real_T *x
 *                const emxArray_real_T *m
 *                const emxArray_real_T *C
 * Return Type  : double
 */
double lnpdfmvn(const emxArray_real_T *x, const emxArray_real_T *m, const
                emxArray_real_T *C)
{
  double p;
  emxArray_real_T *Hinv;
  int i3;
  double y;
  int loop_ub;
  emxArray_int32_T *ipiv;
  emxArray_real_T *Ainv;
  int k;
  emxArray_real_T *a;
  double err;
  boolean_T isodd;
  int n;
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  boolean_T exitg1;
  emxArray_real_T *r1;
  int coffset;
  int inner;
  int i4;
  int b_m;
  int i;
  int boffset;
  int i5;
  int aoffset;
  int i6;
  emxInit_real_T(&Hinv, 2);
  if ((C->size[0] == 0) || (C->size[1] == 0)) {
    y = 1.0;
  } else {
    i3 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = C->size[0];
    Hinv->size[1] = C->size[1];
    emxEnsureCapacity_real_T(Hinv, i3);
    loop_ub = C->size[0] * C->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      Hinv->data[i3] = C->data[i3];
    }

    emxInit_int32_T1(&ipiv, 2);
    xgetrf(C->size[0], C->size[1], Hinv, C->size[0], ipiv);
    y = Hinv->data[0];
    for (k = 1; k - 1 < (int)((double)Hinv->size[0] + -1.0); k++) {
      y *= Hinv->data[k + Hinv->size[0] * k];
    }

    isodd = false;
    for (k = 0; k <= ipiv->size[1] - 2; k++) {
      if (ipiv->data[k] > 1 + k) {
        isodd = !isodd;
      }
    }

    emxFree_int32_T(&ipiv);
    if (isodd) {
      y = -y;
    }
  }

  /* 'invpd' Inverse of a symmetric positive definite matrix using Cholesky factorization  */
  /* Ainv = invpd(A) computes the inverse of a symmetric positive  */
  /* definite matrix A using its Cholesky factor H. */
  /* inv(A) = inv(H)inv(H)'.  */
  /* input  : Matrix A */
  /* output : Ainv, err (=1 if error, and 0 if no error) */
  /* 대칭, 양정부호 행렬의 역행렬을 LU분해보다 빠르고 정확하게 계산해 줍니다. */
  emxInit_real_T(&Ainv, 2);
  emxInit_real_T(&a, 2);
  if (C->size[0] != C->size[1]) {
    i3 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = 0;
    Ainv->size[1] = 0;
    emxEnsureCapacity_real_T(Ainv, i3);
  } else {
    cholmod(C, Hinv, &err);

    /* INVUPTR Inverse of an upper triangular matrix  */
    /* T = invuptr(T) computes the inverse of a nonsingular upper triangular */
    /* matrix T.  The output matrix T contains the inverse of T.  */
    /* This program implements Algorithm 4.2.2 of the book. */
    /* Input  : Matrix T  */
    /* output : Matrix T */
    n = Hinv->size[1] - 1;
    if (Hinv->size[0] == Hinv->size[1]) {
      i3 = (int)((1.0 + (-1.0 - (double)Hinv->size[1])) / -1.0);
      k = 0;
      emxInit_real_T1(&b_b, 1);
      exitg1 = false;
      while ((!exitg1) && (k <= i3 - 1)) {
        coffset = n - k;
        if (Hinv->data[coffset + Hinv->size[0] * coffset] == 0.0) {
          exitg1 = true;
        } else {
          Hinv->data[coffset + Hinv->size[0] * coffset] = 1.0 / Hinv->
            data[coffset + Hinv->size[0] * coffset];
          i4 = (int)((1.0 + (-1.0 - ((double)(coffset + 1) - 1.0))) / -1.0);
          for (i = 0; i < i4; i++) {
            boffset = (coffset - i) - 1;
            if (boffset + 2 > coffset + 1) {
              i5 = 1;
              aoffset = 1;
              b_m = 1;
              inner = 1;
            } else {
              i5 = boffset + 2;
              aoffset = coffset + 2;
              b_m = boffset + 2;
              inner = coffset + 2;
            }

            i6 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = aoffset - i5;
            emxEnsureCapacity_real_T(a, i6);
            loop_ub = aoffset - i5;
            for (i6 = 0; i6 < loop_ub; i6++) {
              a->data[a->size[0] * i6] = Hinv->data[boffset + Hinv->size[0] *
                ((i5 + i6) - 1)];
            }

            i6 = b_b->size[0];
            b_b->size[0] = inner - b_m;
            emxEnsureCapacity_real_T2(b_b, i6);
            loop_ub = inner - b_m;
            for (i6 = 0; i6 < loop_ub; i6++) {
              b_b->data[i6] = Hinv->data[((b_m + i6) + Hinv->size[0] * coffset)
                - 1];
            }

            if ((aoffset - i5 == 1) || (inner - b_m == 1)) {
              err = 0.0;
              for (i5 = 0; i5 < a->size[1]; i5++) {
                err += a->data[a->size[0] * i5] * b_b->data[i5];
              }
            } else {
              err = 0.0;
              for (i5 = 0; i5 < a->size[1]; i5++) {
                err += a->data[a->size[0] * i5] * b_b->data[i5];
              }
            }

            Hinv->data[boffset + Hinv->size[0] * coffset] = -err / Hinv->
              data[boffset + Hinv->size[0] * boffset];
          }

          k++;
        }
      }

      emxFree_real_T(&b_b);
    }

    emxInit_real_T(&b, 2);
    i3 = b->size[0] * b->size[1];
    b->size[0] = Hinv->size[1];
    b->size[1] = Hinv->size[0];
    emxEnsureCapacity_real_T(b, i3);
    loop_ub = Hinv->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      n = Hinv->size[1];
      for (i4 = 0; i4 < n; i4++) {
        b->data[i4 + b->size[0] * i3] = Hinv->data[i3 + Hinv->size[0] * i4];
      }
    }

    if ((Hinv->size[1] == 1) || (b->size[0] == 1)) {
      i3 = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = b->size[1];
      emxEnsureCapacity_real_T(Ainv, i3);
      loop_ub = Hinv->size[0];
      for (i3 = 0; i3 < loop_ub; i3++) {
        n = b->size[1];
        for (i4 = 0; i4 < n; i4++) {
          Ainv->data[i3 + Ainv->size[0] * i4] = 0.0;
          coffset = Hinv->size[1];
          for (i5 = 0; i5 < coffset; i5++) {
            Ainv->data[i3 + Ainv->size[0] * i4] += Hinv->data[i3 + Hinv->size[0]
              * i5] * b->data[i5 + b->size[0] * i4];
          }
        }
      }
    } else {
      b_m = Hinv->size[0];
      inner = Hinv->size[1];
      i3 = Ainv->size[0] * Ainv->size[1];
      Ainv->size[0] = Hinv->size[0];
      Ainv->size[1] = b->size[1];
      emxEnsureCapacity_real_T(Ainv, i3);
      for (n = 0; n < b->size[1]; n++) {
        coffset = n * b_m - 1;
        boffset = n * inner - 1;
        for (i = 1; i <= b_m; i++) {
          Ainv->data[coffset + i] = 0.0;
        }

        for (k = 1; k <= inner; k++) {
          if (b->data[boffset + k] != 0.0) {
            aoffset = (k - 1) * b_m;
            for (i = 1; i <= b_m; i++) {
              Ainv->data[coffset + i] += b->data[boffset + k] * Hinv->data
                [(aoffset + i) - 1];
            }
          }
        }
      }
    }

    emxFree_real_T(&b);
    i3 = Hinv->size[0] * Hinv->size[1];
    Hinv->size[0] = Ainv->size[0];
    Hinv->size[1] = Ainv->size[1];
    emxEnsureCapacity_real_T(Hinv, i3);
    loop_ub = Ainv->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      n = Ainv->size[0];
      for (i4 = 0; i4 < n; i4++) {
        Hinv->data[i4 + Hinv->size[0] * i3] = (Ainv->data[i4 + Ainv->size[0] *
          i3] + Ainv->data[i3 + Ainv->size[0] * i4]) / 2.0;
      }
    }

    i3 = Ainv->size[0] * Ainv->size[1];
    Ainv->size[0] = Hinv->size[0];
    Ainv->size[1] = Hinv->size[1];
    emxEnsureCapacity_real_T(Ainv, i3);
    loop_ub = Hinv->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      n = Hinv->size[0];
      for (i4 = 0; i4 < n; i4++) {
        Ainv->data[i4 + Ainv->size[0] * i3] = Hinv->data[i4 + Hinv->size[0] * i3];
      }
    }
  }

  emxFree_real_T(&Hinv);
  i3 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity_real_T(a, i3);
  loop_ub = x->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    a->data[a->size[0] * i3] = x->data[i3] - m->data[i3];
  }

  emxInit_real_T(&r1, 2);
  if ((a->size[1] == 1) || (Ainv->size[0] == 1)) {
    i3 = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = Ainv->size[1];
    emxEnsureCapacity_real_T(r1, i3);
    loop_ub = Ainv->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      r1->data[r1->size[0] * i3] = 0.0;
      n = a->size[1];
      for (i4 = 0; i4 < n; i4++) {
        r1->data[r1->size[0] * i3] += a->data[a->size[0] * i4] * Ainv->data[i4 +
          Ainv->size[0] * i3];
      }
    }
  } else {
    inner = a->size[1];
    i3 = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = Ainv->size[1];
    emxEnsureCapacity_real_T(r1, i3);
    for (n = 0; n < Ainv->size[1]; n++) {
      boffset = n * inner - 1;
      r1->data[n] = 0.0;
      for (k = 1; k <= inner; k++) {
        if (Ainv->data[boffset + k] != 0.0) {
          r1->data[n] += Ainv->data[boffset + k] * a->data[k - 1];
        }
      }
    }
  }

  emxFree_real_T(&Ainv);

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  i3 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(a, i3);
  loop_ub = r1->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    a->data[a->size[0] * i3] = r1->data[r1->size[0] * i3] * (x->data[i3] -
      m->data[i3]);
  }

  emxFree_real_T(&r1);
  p = -0.5 * b_combineVectorElements(a) - log(rt_powd_snf(6.2831853071795862,
    (double)x->size[0] / 2.0) * sqrt(fabs(y)));
  emxFree_real_T(&a);
  return p;
}

/*
 * File trailer for lnpdfmvn.c
 *
 * [EOF]
 */

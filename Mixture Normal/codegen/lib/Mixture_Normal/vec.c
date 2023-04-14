/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: vec.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "vec.h"
#include "Mixture_Normal_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T *X
 * Return Type  : void
 */
void vec(emxArray_real_T *X)
{
  double rc;
  int i21;

  /* Macro to compute unconditional variance of the factors */
  /* Çà·Ä X¸¦ º¤ÅÍ·Î ¸¸µé¾îÁÜ */
  rc = (double)X->size[0] * (double)X->size[1];
  if (rc > 1.0) {
    i21 = X->size[0] * X->size[1];
    X->size[0] = (int)rc;
    X->size[1] = 1;
    emxEnsureCapacity_real_T(X, i21);
  }
}

/*
 * File trailer for vec.c
 *
 * [EOF]
 */

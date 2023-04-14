/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Gen_S.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "Gen_S.h"
#include "lnpdfmvn.h"
#include "Mixture_Normal_emxutil.h"
#include "rand.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *Y
 *                const emxArray_real_T *betam
 *                const emxArray_real_T *Omegam
 *                emxArray_real_T *S
 * Return Type  : void
 */
void Gen_S(const emxArray_real_T *Y, const emxArray_real_T *betam, const
           emxArray_real_T *Omegam, emxArray_real_T *S)
{
  int nc;
  int nx;
  int i;
  emxArray_real_T *pdfym;
  emxArray_real_T *retf;
  emxArray_real_T *psum;
  emxArray_boolean_T *iseql;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_betam;
  emxArray_real_T *b_Omegam;
  int m;
  int loop_ub;
  double b_retf;
  int b_loop_ub;
  int i2;
  boolean_T ex;

  /*  number of columns */
  nc = betam->size[1] - 1;
  nx = S->size[0];
  S->size[0] = Y->size[0];
  emxEnsureCapacity_real_T2(S, nx);
  i = 0;
  emxInit_real_T1(&pdfym, 1);
  emxInit_real_T(&retf, 2);
  emxInit_real_T1(&psum, 1);
  emxInit_boolean_T(&iseql, 1);
  emxInit_real_T1(&b_Y, 1);
  emxInit_real_T1(&b_betam, 1);
  emxInit_real_T(&b_Omegam, 2);
  while (i <= Y->size[0] - 1) {
    nx = pdfym->size[0];
    pdfym->size[0] = nc + 1;
    emxEnsureCapacity_real_T2(pdfym, nx);
    for (nx = 0; nx <= nc; nx++) {
      pdfym->data[nx] = 0.0;
    }

    for (m = 0; m <= nc; m++) {
      loop_ub = Y->size[1];
      nx = b_Y->size[0];
      b_Y->size[0] = loop_ub;
      emxEnsureCapacity_real_T2(b_Y, nx);
      for (nx = 0; nx < loop_ub; nx++) {
        b_Y->data[nx] = Y->data[i + Y->size[0] * nx];
      }

      loop_ub = betam->size[0];
      nx = b_betam->size[0];
      b_betam->size[0] = loop_ub;
      emxEnsureCapacity_real_T2(b_betam, nx);
      for (nx = 0; nx < loop_ub; nx++) {
        b_betam->data[nx] = betam->data[nx + betam->size[0] * m];
      }

      loop_ub = Omegam->size[0];
      b_loop_ub = Omegam->size[1];
      nx = b_Omegam->size[0] * b_Omegam->size[1];
      b_Omegam->size[0] = loop_ub;
      b_Omegam->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(b_Omegam, nx);
      for (nx = 0; nx < b_loop_ub; nx++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Omegam->data[i2 + b_Omegam->size[0] * nx] = Omegam->data[(i2 +
            Omegam->size[0] * nx) + Omegam->size[0] * Omegam->size[1] * m];
        }
      }

      pdfym->data[m] = lnpdfmvn(b_Y, b_betam, b_Omegam);
    }

    nx = pdfym->size[0];
    for (m = 0; m < nx; m++) {
      pdfym->data[m] = exp(pdfym->data[m]);
    }

    /*  gauss function */
    if (pdfym->size[0] > 1) {
      b_retf = pdfym->data[0];
      for (m = 2; m <= pdfym->size[0]; m++) {
        b_retf += pdfym->data[m - 1];
      }

      nx = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = 1;
      emxEnsureCapacity_real_T(retf, nx);
      retf->data[0] = b_retf;
    } else {
      nx = retf->size[0] * retf->size[1];
      retf->size[0] = 1;
      retf->size[1] = pdfym->size[0];
      emxEnsureCapacity_real_T(retf, nx);
      loop_ub = pdfym->size[0];
      for (nx = 0; nx < loop_ub; nx++) {
        retf->data[retf->size[0] * nx] = pdfym->data[nx];
      }
    }

    if (pdfym->size[0] == 0) {
      nx = pdfym->size[0];
      pdfym->size[0] = 0;
      emxEnsureCapacity_real_T2(pdfym, nx);
    } else {
      nx = pdfym->size[0];
      b_retf = 1.0 / retf->data[0];
      for (m = 0; m < nx; m++) {
        pdfym->data[m] *= b_retf;
      }
    }

    nx = psum->size[0];
    psum->size[0] = pdfym->size[0];
    emxEnsureCapacity_real_T2(psum, nx);
    loop_ub = pdfym->size[0];
    for (nx = 0; nx < loop_ub; nx++) {
      psum->data[nx] = pdfym->data[nx];
    }

    nx = 2;
    if (pdfym->size[0] != 1) {
      nx = 1;
    }

    if ((1 == nx) && (pdfym->size[0] != 0) && (pdfym->size[0] != 1)) {
      for (m = 1; m < pdfym->size[0]; m++) {
        psum->data[m] += psum->data[m - 1];
      }
    }

    /* cum = cum'; */
    /*  p에 대한 누적합 */
    if (1 > pdfym->size[0] - 1) {
      nx = 0;
    } else {
      nx = pdfym->size[0] - 1;
    }

    loop_ub = nx - 1;
    i2 = pdfym->size[0];
    pdfym->size[0] = nx + 1;
    emxEnsureCapacity_real_T2(pdfym, i2);
    pdfym->data[0] = 0.0;
    for (nx = 0; nx <= loop_ub; nx++) {
      pdfym->data[nx + 1] = psum->data[nx];
    }

    b_retf = b_rand();
    nx = iseql->size[0];
    iseql->size[0] = pdfym->size[0];
    emxEnsureCapacity_boolean_T(iseql, nx);
    loop_ub = pdfym->size[0];
    for (nx = 0; nx < loop_ub; nx++) {
      iseql->data[nx] = ((b_retf > pdfym->data[nx]) == (b_retf <= psum->data[nx]));
    }

    /*  psum=[.1 ; .2; .6; .8; 1] 이고 u=0.68이면 */
    /*  .6 ~ .8 사이에 위치하므로 4번째 원소자리에 1의 값을 부여하고 나머지는 0 */
    nx = 0;
    ex = iseql->data[0];
    for (m = 1; m < iseql->size[0]; m++) {
      if ((int)ex < (int)iseql->data[m]) {
        ex = iseql->data[m];
        nx = m;
      }
    }

    /*  그 1의 값의 위치     */
    S->data[i] = nx + 1;
    i++;
  }

  emxFree_real_T(&b_Omegam);
  emxFree_real_T(&b_betam);
  emxFree_real_T(&b_Y);
  emxFree_boolean_T(&iseql);
  emxFree_real_T(&psum);
  emxFree_real_T(&retf);
  emxFree_real_T(&pdfym);
}

/*
 * File trailer for Gen_S.c
 *
 * [EOF]
 */

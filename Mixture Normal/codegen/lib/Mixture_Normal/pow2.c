/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: pow2.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "pow2.h"
#include "lnpdfmvn.h"
#include "Mixture_Normal_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : double a
 * Return Type  : double
 */
double pow2(double a)
{
  return rt_powd_snf(2.0, a);
}

/*
 * File trailer for pow2.c
 *
 * [EOF]
 */

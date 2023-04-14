/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: rand.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "rand.h"
#include "randn.h"
#include "Mixture_Normal_data.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : double
 */
double b_rand(void)
{
  return genrandu(state);
}

/*
 * File trailer for rand.c
 *
 * [EOF]
 */

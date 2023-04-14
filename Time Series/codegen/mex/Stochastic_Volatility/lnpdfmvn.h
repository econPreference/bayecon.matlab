/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfmvn.h
 *
 * Code generation for function 'lnpdfmvn'
 *
 */

#ifndef LNPDFMVN_H
#define LNPDFMVN_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Stochastic_Volatility_types.h"

/* Function Declarations */
extern real_T b_lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x, const
  emxArray_real_T *m, const emxArray_real_T *C);
extern void lnpdfmvn(const emlrtStack *sp, real_T x, real_T m, real_T C, real_T
                     p_data[], int32_T p_size[1]);

#endif

/* End of code generation (lnpdfmvn.h) */

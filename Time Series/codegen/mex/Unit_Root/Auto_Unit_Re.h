/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Auto_Unit_Re.h
 *
 * Code generation for function 'Auto_Unit_Re'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Unit_Root_types.h"

/* Function Declarations */
void Auto_Unit_Re(const emlrtStack *sp, const emxArray_real_T *data, real_T a0,
                  real_T d0, const emxArray_real_T *phi0, const emxArray_real_T *
                  PHI0, real_T n0, real_T n1, const emxArray_real_T *c0, const
                  emxArray_real_T *C0, emxArray_real_T *Output_cm,
                  emxArray_real_T *Output_phim, emxArray_real_T *Output_sigma2m,
                  emxArray_real_T *Output_logpostm);
void Gen_G(const emlrtStack *sp, const emxArray_real_T *Y, const emxArray_real_T
           *X, const emxArray_real_T *Y_p, const emxArray_real_T *X_p, const
           emxArray_real_T *Sigma0, const emxArray_real_T *inv_Sigma0, const
           emxArray_real_T *beta, real_T sig2_inv, const emxArray_real_T *G0,
           const emxArray_real_T *phi0, const emxArray_real_T *precphi0, const
           emxArray_real_T *PHI0, emxArray_real_T *G);
void Gen_c(const emlrtStack *sp, const emxArray_real_T *X_p, const
           emxArray_real_T *Y_p, const emxArray_real_T *X_hat, const
           emxArray_real_T *Y_hat, const emxArray_real_T *inv_Sigma, const
           emxArray_real_T *b0, const emxArray_real_T *precb0, real_T sig2_inv,
           real_T p, real_T T, emxArray_real_T *beta);
real_T Gen_sig2(const emlrtStack *sp, const emxArray_real_T *Y_p, const
                emxArray_real_T *X_p, const emxArray_real_T *X_hat, const
                emxArray_real_T *Y_hat, const emxArray_real_T *inv_Sigma, const
                emxArray_real_T *beta, real_T a0, real_T d0);
void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB);

/* End of code generation (Auto_Unit_Re.h) */

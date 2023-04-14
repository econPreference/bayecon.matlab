/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unobserved_Component_Model.h
 *
 * Code generation for function 'Unobserved_Component_Model'
 *
 */

#pragma once

/* Include files */
#include "Unobserved_Component_Model_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Unobserved_Component_Model(const emlrtStack *sp,
                                const emxArray_real_T *data,
                                const emxArray_real_T *phi0,
                                const emxArray_real_T *PHI0, real_T w01,
                                real_T w02, real_T e01, real_T e02, real_T z01,
                                real_T z02, real_T n0, real_T n1, real_T d,
                                struct0_T *Output);

void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *vec_P_tt);

/* End of code generation (Unobserved_Component_Model.h) */

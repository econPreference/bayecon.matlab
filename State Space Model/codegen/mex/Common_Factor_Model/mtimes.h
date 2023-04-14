/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.h
 *
 * Code generation for function 'mtimes'
 *
 */

#pragma once

/* Include files */
#include "Common_Factor_Model_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_mtimes(const emlrtStack *sp, const emxArray_creal_T *A,
              const emxArray_creal_T *B, emxArray_creal_T *C);

void c_mtimes(const emlrtStack *sp, const emxArray_creal_T *A,
              const emxArray_creal_T *B, emxArray_creal_T *C);

creal_T d_mtimes(const emlrtStack *sp, const emxArray_creal_T *A,
                 const emxArray_creal_T *B);

void e_mtimes(const emxArray_creal_T *A, const emxArray_creal_T *B,
              creal_T C[2]);

real_T f_mtimes(const emxArray_real_T *A, const emxArray_real_T *B);

void g_mtimes(const real_T A_data[], const int32_T A_size[2],
              const real_T B_data[], int32_T B_size, real_T C_data[],
              int32_T *C_size);

void h_mtimes(const real_T A_data[], const real_T B[2], real_T C_data[],
              int32_T *C_size);

void i_mtimes(const real_T A_data[], const real_T B[2], real_T C_data[],
              int32_T *C_size);

void j_mtimes(const real_T A_data[], const real_T B_data[], real_T C_data[],
              int32_T C_size[2]);

void k_mtimes(const real_T A_data[], const real_T B_data[], real_T C_data[],
              int32_T C_size[2]);

void mtimes(const emxArray_creal_T *A, const emxArray_creal_T *B, creal_T C[4]);

/* End of code generation (mtimes.h) */

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
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Unit_Root_types.h"

/* Function Declarations */
void b_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
void c_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
real_T d_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
                emxArray_real_T *B);
void e_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
void f_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
void g_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
real_T h_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
                emxArray_real_T *B);
void i_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
real_T mtimes(const emxArray_real_T *A, const emxArray_real_T *B);

/* End of code generation (mtimes.h) */

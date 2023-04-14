/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PCA.h
 *
 * Code generation for function 'PCA'
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
void PCA(const emlrtStack *sp, const emxArray_real_T *rawY,
         emxArray_creal_T *Output_Principal_Component,
         emxArray_creal_T *Output_Eigenvalues,
         emxArray_creal_T *Output_Eigenvectors);

/* End of code generation (PCA.h) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_Mixture_Normal_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

#ifndef _CODER_MIXTURE_NORMAL_API_H
#define _CODER_MIXTURE_NORMAL_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_Mixture_Normal_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  emxArray_real_T *mum;
  emxArray_real_T *Sm;
  emxArray_real_T *Sigmam;
  emxArray_real_T *Xa;
  emxArray_real_T *Ya;
  real_T Z;
  real_T plot[2];
  emxArray_real_T *Omega_hat;
  emxArray_real_T *x;
  emxArray_real_T *y;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void Mixture_Normal(emxArray_real_T *Y, real_T M, emxArray_real_T *bm_,
  emxArray_real_T *varm_, emxArray_real_T *Omegam, real_T n0, real_T n1, real_T
  plot[2], struct0_T *Output);
extern void Mixture_Normal_api(const mxArray * const prhs[8], int32_T nlhs,
  const mxArray *plhs[1]);
extern void Mixture_Normal_atexit(void);
extern void Mixture_Normal_initialize(void);
extern void Mixture_Normal_terminate(void);
extern void Mixture_Normal_xil_terminate(void);

#endif

/*
 * File trailer for _coder_Mixture_Normal_api.h
 *
 * [EOF]
 */

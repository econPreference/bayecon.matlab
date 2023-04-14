/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unobserved_Component_Model_types.h
 *
 * Code generation for function 'Unobserved_Component_Model'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include <stddef.h>

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  emxArray_real_T *phim;
  emxArray_real_T *sig2_wm;
  emxArray_real_T *sig2_em;
  emxArray_real_T *sig2_zm;
  emxArray_real_T *yp;
  emxArray_real_T *yc;
  emxArray_real_T *x;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef struct_emxArray_ptrdiff_t
#define struct_emxArray_ptrdiff_t
struct emxArray_ptrdiff_t {
  ptrdiff_t *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_ptrdiff_t */
#ifndef typedef_emxArray_ptrdiff_t
#define typedef_emxArray_ptrdiff_t
typedef struct emxArray_ptrdiff_t emxArray_ptrdiff_t;
#endif /* typedef_emxArray_ptrdiff_t */

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T
struct emxArray_int8_T {
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int8_T */
#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T
typedef struct emxArray_int8_T emxArray_int8_T;
#endif /* typedef_emxArray_int8_T */

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct {
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_creal_T;
#endif /* typedef_emxArray_creal_T */

/* End of code generation (Unobserved_Component_Model_types.h) */

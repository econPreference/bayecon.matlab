//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// obj.h
//
// Code generation for function 'obj'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
real_T obj(const emlrtStack *sp, const coder::array<real_T, 1U> &vec_Binv,
           const coder::array<real_T, 2U> &data);

// End of code generation (obj.h)

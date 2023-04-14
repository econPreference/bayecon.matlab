/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo yg_emlrtRSI = {
    33,                /* lineNo */
    "indexShapeCheck", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" /* pathName */
};

static emlrtRSInfo ah_emlrtRSI = {
    42,                /* lineNo */
    "indexShapeCheck", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" /* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    122,           /* lineNo */
    5,             /* colNo */
    "errOrWarnIf", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" /* pName */
};

/* Function Definitions */
void b_indexShapeCheck(const emlrtStack *sp, int32_T matrixSize,
                       const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = sp;
  st.tls = sp->tls;
  if (matrixSize == 1) {
    nonSingletonDimFound = (indexSize[0] != 1);
    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }
    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }
  st.site = &ah_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "Coder:FE:PotentialVectorVector",
                                  "Coder:FE:PotentialVectorVector", 0);
  }
}

void indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
                     const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = sp;
  st.tls = sp->tls;
  nonSingletonDimFound = (matrixSize[0] != 1);
  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound) {
    nonSingletonDimFound = (indexSize[0] != 1);
    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }
    if (nonSingletonDimFound &&
        ((matrixSize[0] != 1) ||
         ((matrixSize[1] == 1) != (indexSize[1] == 1)))) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }
  st.site = &yg_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "Coder:FE:PotentialMatrixMatrix_MV",
                                  "Coder:FE:PotentialMatrixMatrix_MV", 0);
  }
}

/* End of code generation (indexShapeCheck.c) */

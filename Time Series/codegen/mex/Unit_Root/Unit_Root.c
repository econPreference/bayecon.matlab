/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unit_Root.c
 *
 * Code generation for function 'Unit_Root'
 *
 */

/* Include files */
#include "Unit_Root.h"
#include "Auto_Unit.h"
#include "Auto_Unit_Re.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "Unit_Root_mexutil.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9,     /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 10,  /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 12,  /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 17,  /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 20,  /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 26,  /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 22,  /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 18,    /* lineNo */
  9,                                   /* colNo */
  "Unit_Root",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 27,  /* lineNo */
  9,                                   /* colNo */
  "Unit_Root",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  13,                                  /* colNo */
  "X",                                 /* aName */
  "X_lag",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\X_lag.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  7,                                   /* colNo */
  "X",                                 /* aName */
  "X_lag",                             /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\M_library\\X_lag.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo qb_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "Unit_Root",                         /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pName */
};

static emlrtRSInfo yn_emlrtRSI = { 27, /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

static emlrtRSInfo ao_emlrtRSI = { 18, /* lineNo */
  "Unit_Root",                         /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\Time Series\\Unit_Root.m"/* pathName */
};

/* Function Declarations */
static const mxArray *SWZ(const emlrtStack *sp, const mxArray *b, const mxArray *
  c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *SWZ(const emlrtStack *sp, const mxArray *b, const mxArray *
  c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "SWZ", true, location);
}

void Unit_Root(const emlrtStack *sp, const emxArray_real_T *Data, real_T kk,
               real_T vv, real_T a0, real_T d0, const emxArray_real_T *phi0,
               const emxArray_real_T *PHI0, real_T n0, real_T n1, real_T mode,
               real_T q, real_T a, real_T b, const emxArray_real_T *c0, const
               emxArray_real_T *C0, struct0_T *Output, const mxArray **ML_Un,
               const mxArray **ML_Re)
{
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_real_T *b_Data;
  emxArray_real_T *subOutput_cm;
  emxArray_real_T *subOutput_phim;
  emxArray_real_T *subOutput_sigma2m;
  emxArray_real_T *subOutput_logpostm;
  int32_T result;
  boolean_T empty_non_axis_sizes;
  int32_T input_sizes_idx_1;
  int32_T b_input_sizes_idx_1;
  int8_T sizes_idx_1;
  emxArray_real_T *b_subOutput_cm;
  const mxArray *y;
  const mxArray *m;
  int32_T i2;
  int32_T c_loop_ub;
  int8_T c_input_sizes_idx_1;
  const mxArray *m1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  *ML_Re = NULL;
  *ML_Un = NULL;

  /*  Estimating y(t) = phi*y(t-1) + error, error~I(0) */
  st.site = &emlrtRSI;

  /*  Y = AR(X,t,p) */
  /*  t: lag, p: total lag */
  /*  t=0 : It correspond to generating the dependent variable */
  if (2 > Data->size[0]) {
    i = -1;
    i1 = -1;
  } else {
    i = 0;
    if (Data->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(Data->size[0], 1, Data->size[0], &emlrtBCI,
        &st);
    }

    i1 = Data->size[0] - 1;
  }

  st.site = &b_emlrtRSI;

  /*  Y = AR(X,t,p) */
  /*  t: lag, p: total lag */
  /*  t=0 : It correspond to generating the dependent variable */
  if (1 > Data->size[0] - 1) {
    loop_ub = 0;
  } else {
    if (1 > Data->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Data->size[0], &b_emlrtBCI, &st);
    }

    loop_ub = Data->size[0] - 1;
    if ((loop_ub < 1) || (loop_ub > Data->size[0])) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, Data->size[0], &emlrtBCI, &st);
    }
  }

  st.site = &c_emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  b_loop_ub = i1 - i;
  if (loop_ub != b_loop_ub) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &b_Data, 2, &pb_emlrtRTEI, true);
  i1 = b_Data->size[0] * b_Data->size[1];
  b_Data->size[0] = b_loop_ub;
  b_Data->size[1] = 2;
  emxEnsureCapacity_real_T(sp, b_Data, i1, &pb_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_Data->data[i1] = Data->data[(i + i1) + 1];
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    b_Data->data[i1 + b_Data->size[0]] = Data->data[i1];
  }

  emxInit_real_T(sp, &subOutput_cm, 2, &qb_emlrtRTEI, true);
  emxInit_real_T(sp, &subOutput_phim, 2, &qb_emlrtRTEI, true);
  emxInit_real_T(sp, &subOutput_sigma2m, 1, &qb_emlrtRTEI, true);
  emxInit_real_T(sp, &subOutput_logpostm, 1, &qb_emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  Auto_Unit_Re(&st, b_Data, a0, d0, phi0, PHI0, n0, n1, c0, C0, subOutput_cm,
               subOutput_phim, subOutput_sigma2m, subOutput_logpostm);
  st.site = &d_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  if ((subOutput_cm->size[0] != 0) && (subOutput_cm->size[1] != 0)) {
    result = subOutput_cm->size[0];
  } else if ((subOutput_phim->size[0] != 0) && (subOutput_phim->size[1] != 0)) {
    result = subOutput_phim->size[0];
  } else if (subOutput_sigma2m->size[0] != 0) {
    result = subOutput_sigma2m->size[0];
  } else {
    result = muIntScalarMax_sint32(subOutput_cm->size[0], 0);
    if (subOutput_phim->size[0] > result) {
      result = subOutput_phim->size[0];
    }
  }

  c_st.site = &h_emlrtRSI;
  if ((subOutput_cm->size[0] != result) && ((subOutput_cm->size[0] != 0) &&
       (subOutput_cm->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((subOutput_phim->size[0] != result) && ((subOutput_phim->size[0] != 0) &&
       (subOutput_phim->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((subOutput_sigma2m->size[0] != result) && (subOutput_sigma2m->size[0] != 0))
  {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || ((subOutput_cm->size[0] != 0) &&
       (subOutput_cm->size[1] != 0))) {
    input_sizes_idx_1 = subOutput_cm->size[1];
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || ((subOutput_phim->size[0] != 0) &&
       (subOutput_phim->size[1] != 0))) {
    b_input_sizes_idx_1 = subOutput_phim->size[1];
  } else {
    b_input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (subOutput_sigma2m->size[0] != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  emxInit_real_T(&b_st, &b_subOutput_cm, 2, &pb_emlrtRTEI, true);
  y = NULL;
  m = emlrtCreateDoubleScalar(q);
  emlrtAssign(&y, m);
  i1 = b_subOutput_cm->size[0] * b_subOutput_cm->size[1];
  b_subOutput_cm->size[0] = result;
  b_subOutput_cm->size[1] = (input_sizes_idx_1 + b_input_sizes_idx_1) +
    sizes_idx_1;
  emxEnsureCapacity_real_T(sp, b_subOutput_cm, i1, &pb_emlrtRTEI);
  for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
    for (i2 = 0; i2 < result; i2++) {
      b_subOutput_cm->data[i2 + b_subOutput_cm->size[0] * i1] =
        subOutput_cm->data[i2 + result * i1];
    }
  }

  for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
    for (i2 = 0; i2 < result; i2++) {
      b_subOutput_cm->data[i2 + b_subOutput_cm->size[0] * (i1 +
        input_sizes_idx_1)] = subOutput_phim->data[i2 + result * i1];
    }
  }

  emxFree_real_T(&subOutput_phim);
  c_loop_ub = sizes_idx_1;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    for (i2 = 0; i2 < result; i2++) {
      b_subOutput_cm->data[i2 + b_subOutput_cm->size[0] * (input_sizes_idx_1 +
        b_input_sizes_idx_1)] = subOutput_sigma2m->data[i2];
    }
  }

  emxFree_real_T(&subOutput_sigma2m);
  st.site = &ao_emlrtRSI;
  emlrtAssign(ML_Re, SWZ(&st, emlrt_marshallOut(b_subOutput_cm),
    b_emlrt_marshallOut(subOutput_logpostm), y, &emlrtMCI));
  st.site = &e_emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  emxFree_real_T(&subOutput_logpostm);
  if (loop_ub != b_loop_ub) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i1 = b_Data->size[0] * b_Data->size[1];
  b_Data->size[0] = b_loop_ub;
  b_Data->size[1] = 2;
  emxEnsureCapacity_real_T(sp, b_Data, i1, &pb_emlrtRTEI);
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_Data->data[i1] = Data->data[(i + i1) + 1];
  }

  for (i = 0; i < loop_ub; i++) {
    b_Data->data[i + b_Data->size[0]] = Data->data[i];
  }

  st.site = &e_emlrtRSI;
  Auto_Unit(&st, b_Data, kk, vv, a0, d0, phi0, PHI0, n0, n1, mode, a, b, c0, C0,
            Output);
  st.site = &f_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  emxFree_real_T(&b_Data);
  if ((subOutput_cm->size[0] != 0) && (subOutput_cm->size[1] != 0)) {
    result = subOutput_cm->size[0];
  } else if (Output->betam->size[0] != 0) {
    result = Output->betam->size[0];
  } else if ((Output->phim->size[0] != 0) && (Output->phim->size[1] != 0)) {
    result = Output->phim->size[0];
  } else if (Output->sigma2m->size[0] != 0) {
    result = Output->sigma2m->size[0];
  } else {
    result = muIntScalarMax_sint32(subOutput_cm->size[0], 0);
    if (Output->betam->size[0] > result) {
      result = Output->betam->size[0];
    }

    if (Output->phim->size[0] > result) {
      result = Output->phim->size[0];
    }

    if (Output->sigma2m->size[0] > result) {
      result = Output->sigma2m->size[0];
    }
  }

  c_st.site = &h_emlrtRSI;
  if ((subOutput_cm->size[0] != result) && ((subOutput_cm->size[0] != 0) &&
       (subOutput_cm->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((Output->betam->size[0] != result) && (Output->betam->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((Output->phim->size[0] != result) && ((Output->phim->size[0] != 0) &&
       (Output->phim->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((Output->sigma2m->size[0] != result) && (Output->sigma2m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || ((subOutput_cm->size[0] != 0) &&
       (subOutput_cm->size[1] != 0))) {
    input_sizes_idx_1 = subOutput_cm->size[1];
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (Output->betam->size[0] != 0)) {
    c_input_sizes_idx_1 = 1;
  } else {
    c_input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || ((Output->phim->size[0] != 0) && (Output->
        phim->size[1] != 0))) {
    b_input_sizes_idx_1 = Output->phim->size[1];
  } else {
    b_input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (Output->sigma2m->size[0] != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  y = NULL;
  m1 = emlrtCreateDoubleScalar(q);
  emlrtAssign(&y, m1);
  i = b_subOutput_cm->size[0] * b_subOutput_cm->size[1];
  b_subOutput_cm->size[0] = result;
  i1 = (input_sizes_idx_1 + c_input_sizes_idx_1) + b_input_sizes_idx_1;
  b_subOutput_cm->size[1] = i1 + sizes_idx_1;
  emxEnsureCapacity_real_T(sp, b_subOutput_cm, i, &pb_emlrtRTEI);
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (i2 = 0; i2 < result; i2++) {
      b_subOutput_cm->data[i2 + b_subOutput_cm->size[0] * i] =
        subOutput_cm->data[i2 + result * i];
    }
  }

  emxFree_real_T(&subOutput_cm);
  loop_ub = c_input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i2 = 0; i2 < result; i2++) {
      b_subOutput_cm->data[i2 + b_subOutput_cm->size[0] * input_sizes_idx_1] =
        Output->betam->data[i2];
    }
  }

  for (i = 0; i < b_input_sizes_idx_1; i++) {
    for (i2 = 0; i2 < result; i2++) {
      b_subOutput_cm->data[i2 + b_subOutput_cm->size[0] * ((i +
        input_sizes_idx_1) + c_input_sizes_idx_1)] = Output->phim->data[i2 +
        result * i];
    }
  }

  loop_ub = sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i2 = 0; i2 < result; i2++) {
      b_subOutput_cm->data[i2 + b_subOutput_cm->size[0] * i1] = Output->
        sigma2m->data[i2];
    }
  }

  st.site = &yn_emlrtRSI;
  emlrtAssign(ML_Un, SWZ(&st, emlrt_marshallOut(b_subOutput_cm),
    b_emlrt_marshallOut(Output->logpostm), y, &b_emlrtMCI));
  emxFree_real_T(&b_subOutput_cm);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Unit_Root.c) */

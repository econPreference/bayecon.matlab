/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortLE.h"

/* Variable Definitions */
static emlrtRSInfo oe_emlrtRSI =
    {
        76,     /* lineNo */
        "sort", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI =
    {
        79,     /* lineNo */
        "sort", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI =
    {
        81,     /* lineNo */
        "sort", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI =
    {
        84,     /* lineNo */
        "sort", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI =
    {
        87,     /* lineNo */
        "sort", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI =
    {
        90,     /* lineNo */
        "sort", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    50,         /* lineNo */
    "prodsize", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/shared/coder/coder/+coder/"
    "+internal/prodsize.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI =
    {
        125,       /* lineNo */
        "sortIdx", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    57,          /* lineNo */
    "mergesort", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    113,         /* lineNo */
    "mergesort", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    123,         /* lineNo */
    "mergesort", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    126,         /* lineNo */
    "mergesort", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pathName */
};

static emlrtRTEInfo lh_emlrtRTEI =
    {
        56,     /* lineNo */
        24,     /* colNo */
        "sort", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pName */
};

static emlrtRTEInfo mh_emlrtRTEI =
    {
        75,     /* lineNo */
        26,     /* colNo */
        "sort", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pName */
};

static emlrtRTEInfo nh_emlrtRTEI =
    {
        61,        /* lineNo */
        5,         /* colNo */
        "sortIdx", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" /* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = {
    52,          /* lineNo */
    9,           /* colNo */
    "mergesort", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = {
    122,         /* lineNo */
    13,          /* colNo */
    "mergesort", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = {
    227,                   /* lineNo */
    44,                    /* colNo */
    "Common_Factor_Model", /* fName */
    "/Users/preference/Dropbox/code/MATLAB/Bayecon/State Space "
    "Model/Common_Factor_Model.m" /* pName */
};

static emlrtRTEInfo rh_emlrtRTEI =
    {
        1,      /* lineNo */
        20,     /* colNo */
        "sort", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" /* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = {
    52,          /* lineNo */
    1,           /* colNo */
    "mergesort", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pName */
};

static emlrtRTEInfo th_emlrtRTEI = {
    122,         /* lineNo */
    5,           /* colNo */
    "mergesort", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pName */
};

/* Function Definitions */
void sort(const emlrtStack *sp, emxArray_creal_T *x, emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_creal_T *vwork;
  emxArray_creal_T *xwork;
  emxArray_int32_T *iidx;
  emxArray_int32_T *iwork;
  creal_T *vwork_data;
  creal_T *x_data;
  creal_T *xwork_data;
  int32_T b_i2;
  int32_T b_j;
  int32_T dim;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T n;
  int32_T p;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  int32_T vlen;
  int32_T vstride;
  int32_T *idx_data;
  int32_T *iidx_data;
  int32_T *iwork_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_creal_T(sp, &vwork, 1, &qh_emlrtRTEI);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  i1 = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_creal_T(sp, vwork, i1, &lh_emlrtRTEI);
  vwork_data = vwork->data;
  i1 = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(sp, idx, i1, &mh_emlrtRTEI);
  idx_data = idx->data;
  st.site = &oe_emlrtRSI;
  vstride = 1;
  b_st.site = &ue_emlrtRSI;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  st.site = &pe_emlrtRSI;
  st.site = &qe_emlrtRSI;
  if ((1 <= vstride) && (vstride > 2147483646)) {
    b_st.site = &kb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &iidx, 1, &rh_emlrtRTEI);
  emxInit_int32_T(sp, &iwork, 1, &sh_emlrtRTEI);
  emxInit_creal_T(sp, &xwork, 1, &th_emlrtRTEI);
  for (j = 0; j < vstride; j++) {
    st.site = &re_emlrtRSI;
    if ((1 <= i) && (i > 2147483646)) {
      b_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k <= vlen; k++) {
      vwork_data[k] = x_data[j + k * vstride];
    }
    st.site = &se_emlrtRSI;
    i1 = vwork->size[0];
    n = vwork->size[0] + 1;
    i2 = iidx->size[0];
    iidx->size[0] = vwork->size[0];
    emxEnsureCapacity_int32_T(&st, iidx, i2, &nh_emlrtRTEI);
    iidx_data = iidx->data;
    dim = vwork->size[0];
    for (i2 = 0; i2 < dim; i2++) {
      iidx_data[i2] = 0;
    }
    if (vwork->size[0] != 0) {
      b_st.site = &ve_emlrtRSI;
      i2 = iwork->size[0];
      iwork->size[0] = vwork->size[0];
      emxEnsureCapacity_int32_T(&b_st, iwork, i2, &oh_emlrtRTEI);
      iwork_data = iwork->data;
      dim = vwork->size[0] - 1;
      c_st.site = &we_emlrtRSI;
      if ((1 <= vwork->size[0] - 1) && (vwork->size[0] - 1 > 2147483645)) {
        d_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (k = 1; k <= dim; k += 2) {
        if (sortLE(vwork, k, k + 1)) {
          iidx_data[k - 1] = k;
          iidx_data[k] = k + 1;
        } else {
          iidx_data[k - 1] = k + 1;
          iidx_data[k] = k;
        }
      }
      if ((vwork->size[0] & 1) != 0) {
        iidx_data[vwork->size[0] - 1] = vwork->size[0];
      }
      dim = 2;
      while (dim < i1) {
        b_i2 = dim << 1;
        b_j = 1;
        for (pEnd = dim + 1; pEnd < i1 + 1; pEnd = qEnd + dim) {
          p = b_j;
          q = pEnd;
          qEnd = b_j + b_i2;
          if (qEnd > i1 + 1) {
            qEnd = i1 + 1;
          }
          k = 0;
          kEnd = qEnd - b_j;
          while (k + 1 <= kEnd) {
            i2 = iidx_data[q - 1];
            i3 = iidx_data[p - 1];
            if (sortLE(vwork, i3, i2)) {
              iwork_data[k] = i3;
              p++;
              if (p == pEnd) {
                while (q < qEnd) {
                  k++;
                  iwork_data[k] = iidx_data[q - 1];
                  q++;
                }
              }
            } else {
              iwork_data[k] = i2;
              q++;
              if (q == qEnd) {
                while (p < pEnd) {
                  k++;
                  iwork_data[k] = iidx_data[p - 1];
                  p++;
                }
              }
            }
            k++;
          }
          c_st.site = &xe_emlrtRSI;
          for (k = 0; k < kEnd; k++) {
            iidx_data[(b_j + k) - 1] = iwork_data[k];
          }
          b_j = qEnd;
        }
        dim = b_i2;
      }
      i1 = xwork->size[0];
      xwork->size[0] = vwork->size[0];
      emxEnsureCapacity_creal_T(&b_st, xwork, i1, &ph_emlrtRTEI);
      xwork_data = xwork->data;
      c_st.site = &ye_emlrtRSI;
      if (vwork->size[0] > 2147483646) {
        d_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (k = 0; k <= n - 2; k++) {
        xwork_data[k] = vwork_data[k];
      }
      c_st.site = &af_emlrtRSI;
      for (k = 0; k <= n - 2; k++) {
        vwork_data[k] = xwork_data[iidx_data[k] - 1];
      }
    }
    st.site = &te_emlrtRSI;
    for (k = 0; k <= vlen; k++) {
      i1 = j + k * vstride;
      x_data[i1] = vwork_data[k];
      idx_data[i1] = iidx_data[k];
    }
  }
  emxFree_creal_T(sp, &xwork);
  emxFree_int32_T(sp, &iwork);
  emxFree_int32_T(sp, &iidx);
  emxFree_creal_T(sp, &vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (sort.c) */

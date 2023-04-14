/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantile.c
 *
 * Code generation for function 'quantile'
 *
 */

/* Include files */
#include "quantile.h"
#include "Markov_Switching_data.h"
#include "Markov_Switching_emxutil.h"
#include "Markov_Switching_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = {
    20,                                                            /* lineNo */
    "quantile",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/quantile.m" /* pathName
                                                                    */
};

static emlrtRSInfo gc_emlrtRSI = {
    21,                                                           /* lineNo */
    "prctile",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    54,                                                           /* lineNo */
    "prctile",                                                    /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    136,                                                          /* lineNo */
    "percentile_vector",                                          /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    134,                                                          /* lineNo */
    "percentile_vector",                                          /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI =
    {
        145,       /* lineNo */
        "sortIdx", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    57,          /* lineNo */
    "mergesort", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    113,         /* lineNo */
    "mergesort", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pathName */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    166,                                                           /* lineNo */
    17,                                                            /* colNo */
    "",                                                            /* aName */
    "lastnonnan",                                                  /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = {
    21,                                                           /* lineNo */
    23,                                                           /* colNo */
    "prctile",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    16,                                                            /* lineNo */
    27,                                                            /* colNo */
    "quantile",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/quantile.m" /* pName */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    67,                                                            /* lineNo */
    16,                                                            /* colNo */
    "",                                                            /* aName */
    "isvalid_percents_vector",                                     /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    67,                                                            /* lineNo */
    29,                                                            /* colNo */
    "",                                                            /* aName */
    "isvalid_percents_vector",                                     /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    166,                                                           /* lineNo */
    21,                                                            /* colNo */
    "",                                                            /* aName */
    "lastnonnan",                                                  /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    143,                                                           /* lineNo */
    20,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    146,                                                           /* lineNo */
    28,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    146,                                                           /* lineNo */
    21,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    140,                                                           /* lineNo */
    9,                                                             /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    148,                                                           /* lineNo */
    28,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    148,                                                           /* lineNo */
    32,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    148,                                                           /* lineNo */
    21,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    38,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    42,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    60,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    64,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    21,                                                            /* colNo */
    "",                                                            /* aName */
    "percentile_vector",                                           /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m", /* pName */
    0 /* checkKind */
};

static emlrtRTEInfo eg_emlrtRTEI =
    {
        49,         /* lineNo */
        20,         /* colNo */
        "linspace", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/"
        "linspace.m" /* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = {
    17,                                                            /* lineNo */
    5,                                                             /* colNo */
    "quantile",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/quantile.m" /* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    130,                                                          /* lineNo */
    22,                                                           /* colNo */
    "prctile",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = {
    134,                                                          /* lineNo */
    5,                                                            /* colNo */
    "prctile",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/prctile.m" /* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = {
    20,                                                            /* lineNo */
    5,                                                             /* colNo */
    "quantile",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/quantile.m" /* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = {
    52,          /* lineNo */
    9,           /* colNo */
    "mergesort", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = {
    14,                                                            /* lineNo */
    5,                                                             /* colNo */
    "quantile",                                                    /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/stats/eml/quantile.m" /* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = {
    52,          /* lineNo */
    1,           /* colNo */
    "mergesort", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "mergesort.m" /* pName */
};

/* Function Definitions */
void quantile(const emlrtStack *sp, const emxArray_real_T *x, real_T p,
              emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *p100;
  const real_T *x_data;
  real_T delta;
  real_T delta1;
  real_T *p100_data;
  real_T *y_data;
  int32_T b_i;
  int32_T b_p;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T n;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  int32_T *idx_data;
  int32_T *iwork_data;
  boolean_T b_y;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  delta1 = muDoubleScalarFloor(p);
  emxInit_real_T(sp, &p100, 2, &kg_emlrtRTEI);
  if ((p == delta1) && (p > 1.0)) {
    delta = 100.0 / (p + 1.0);
    i = p100->size[0] * p100->size[1];
    p100->size[0] = 1;
    p100->size[1] = (int32_T)delta1;
    emxEnsureCapacity_real_T(sp, p100, i, &eg_emlrtRTEI);
    p100_data = p100->data;
    p100_data[(int32_T)delta1 - 1] = 100.0 - delta;
    p100_data[0] = delta;
    if (p100->size[1] >= 3) {
      delta1 = ((100.0 - delta) - delta) / ((real_T)p100->size[1] - 1.0);
      i = p100->size[1];
      for (k = 0; k <= i - 3; k++) {
        p100_data[k + 1] = delta + ((real_T)k + 1.0) * delta1;
      }
    }
  } else {
    b_y = true;
    if ((p < 0.0) || (p > 1.0)) {
      b_y = false;
    }
    if (!b_y) {
      emlrtErrorWithMessageIdR2018a(sp, &t_emlrtRTEI, "stats:quantile:BadProbs",
                                    "stats:quantile:BadProbs", 0);
    }
    i = p100->size[0] * p100->size[1];
    p100->size[0] = 1;
    p100->size[1] = 1;
    emxEnsureCapacity_real_T(sp, p100, i, &fg_emlrtRTEI);
    p100_data = p100->data;
    p100_data[0] = 100.0 * p;
  }
  st.site = &fc_emlrtRSI;
  b_st.site = &gc_emlrtRSI;
  b_y = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k - 1 <= p100->size[1] - 1)) {
    if ((k < 1) || (k > p100->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, p100->size[1], &dd_emlrtBCI, &b_st);
    }
    delta1 = p100_data[k - 1];
    if (delta1 >= 0.0) {
      if (k > p100->size[1]) {
        emlrtDynamicBoundsCheckR2012b(k, 1, p100->size[1], &ed_emlrtBCI, &b_st);
      }
      if (delta1 <= 100.0) {
        k++;
      } else {
        b_y = false;
        exitg1 = true;
      }
    } else {
      b_y = false;
      exitg1 = true;
    }
  }
  if (!b_y) {
    emlrtErrorWithMessageIdR2018a(&st, &s_emlrtRTEI,
                                  "stats:prctile:BadPercents",
                                  "stats:prctile:BadPercents", 0);
  }
  b_st.site = &hc_emlrtRSI;
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = p100->size[1];
  emxEnsureCapacity_real_T(&b_st, y, i, &gg_emlrtRTEI);
  y_data = y->data;
  if (x->size[0] == 0) {
    b_i = p100->size[1];
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = p100->size[1];
    emxEnsureCapacity_real_T(&b_st, y, i, &ig_emlrtRTEI);
    y_data = y->data;
    for (i = 0; i < b_i; i++) {
      y_data[i] = rtNaN;
    }
  } else {
    emxInit_int32_T(&b_st, &idx, 1, &hg_emlrtRTEI);
    c_st.site = &jc_emlrtRSI;
    n = x->size[0] + 1;
    i = idx->size[0];
    idx->size[0] = x->size[0];
    emxEnsureCapacity_int32_T(&c_st, idx, i, &hg_emlrtRTEI);
    idx_data = idx->data;
    b_i = x->size[0];
    for (i = 0; i < b_i; i++) {
      idx_data[i] = 0;
    }
    emxInit_int32_T(&c_st, &iwork, 1, &lg_emlrtRTEI);
    d_st.site = &kc_emlrtRSI;
    i = iwork->size[0];
    iwork->size[0] = x->size[0];
    emxEnsureCapacity_int32_T(&d_st, iwork, i, &jg_emlrtRTEI);
    iwork_data = iwork->data;
    b_i = x->size[0] - 1;
    e_st.site = &lc_emlrtRSI;
    if ((1 <= x->size[0] - 1) && (x->size[0] - 1 > 2147483645)) {
      f_st.site = &ub_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (k = 1; k <= b_i; k += 2) {
      if ((x_data[k - 1] <= x_data[k]) || muDoubleScalarIsNaN(x_data[k])) {
        idx_data[k - 1] = k;
        idx_data[k] = k + 1;
      } else {
        idx_data[k - 1] = k + 1;
        idx_data[k] = k;
      }
    }
    if ((x->size[0] & 1) != 0) {
      idx_data[x->size[0] - 1] = x->size[0];
    }
    b_i = 2;
    while (b_i < n - 1) {
      i2 = b_i << 1;
      j = 1;
      for (pEnd = b_i + 1; pEnd < n; pEnd = qEnd + b_i) {
        b_p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          delta1 = x_data[idx_data[q] - 1];
          i = idx_data[b_p - 1];
          if ((x_data[i - 1] <= delta1) || muDoubleScalarIsNaN(delta1)) {
            iwork_data[k] = i;
            b_p++;
            if (b_p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork_data[k] = idx_data[q];
                q++;
              }
            }
          } else {
            iwork_data[k] = idx_data[q];
            q++;
            if (q + 1 == qEnd) {
              while (b_p < pEnd) {
                k++;
                iwork_data[k] = idx_data[b_p - 1];
                b_p++;
              }
            }
          }
          k++;
        }
        e_st.site = &mc_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx_data[(j + k) - 1] = iwork_data[k];
        }
        j = qEnd;
      }
      b_i = i2;
    }
    emxFree_int32_T(&d_st, &iwork);
    c_st.site = &ic_emlrtRSI;
    b_i = x->size[0];
    exitg1 = false;
    while ((!exitg1) && (b_i > 0)) {
      if (b_i > idx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, idx->size[0], &fd_emlrtBCI,
                                      &c_st);
      }
      i = idx_data[b_i - 1];
      if ((i < 1) || (i > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &cd_emlrtBCI, &c_st);
      }
      if (!muDoubleScalarIsNaN(x_data[i - 1])) {
        exitg1 = true;
      } else {
        b_i--;
      }
    }
    if (b_i < 1) {
      b_i = p100->size[1];
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = p100->size[1];
      emxEnsureCapacity_real_T(&b_st, y, i, &ig_emlrtRTEI);
      y_data = y->data;
      for (i = 0; i < b_i; i++) {
        y_data[i] = rtNaN;
      }
    } else if (b_i == 1) {
      b_i = p100->size[1];
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = p100->size[1];
      emxEnsureCapacity_real_T(&b_st, y, i, &ig_emlrtRTEI);
      y_data = y->data;
      for (i = 0; i < b_i; i++) {
        if ((idx_data[0] < 1) || (idx_data[0] > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(idx_data[0], 1, x->size[0],
                                        &jd_emlrtBCI, &b_st);
        }
        y_data[i] = x_data[idx_data[0] - 1];
      }
    } else {
      i = p100->size[1];
      for (k = 0; k < i; k++) {
        if (k + 1 > p100->size[1]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, p100->size[1], &gd_emlrtBCI,
                                        &b_st);
        }
        delta1 = p100_data[k] / 100.0 * (real_T)b_i;
        delta = muDoubleScalarRound(delta1);
        if (delta < 1.0) {
          if ((idx_data[0] < 1) || (idx_data[0] > x->size[0])) {
            emlrtDynamicBoundsCheckR2012b(idx_data[0], 1, x->size[0],
                                          &hd_emlrtBCI, &b_st);
          }
          if (k + 1 > y->size[1]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &id_emlrtBCI,
                                          &b_st);
          }
          y_data[k] = x_data[idx_data[0] - 1];
        } else if (delta >= b_i) {
          if (b_i > idx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i, 1, idx->size[0], &ld_emlrtBCI,
                                          &b_st);
          }
          i2 = idx_data[b_i - 1];
          if ((i2 < 1) || (i2 > x->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, x->size[0], &kd_emlrtBCI,
                                          &b_st);
          }
          if (k + 1 > y->size[1]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &md_emlrtBCI,
                                          &b_st);
          }
          y_data[k] = x_data[i2 - 1];
        } else {
          delta1 -= delta;
          if ((int32_T)delta > idx->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)delta, 1, idx->size[0],
                                          &od_emlrtBCI, &b_st);
          }
          i2 = idx_data[(int32_T)delta - 1];
          if ((i2 < 1) || (i2 > x->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, x->size[0], &nd_emlrtBCI,
                                          &b_st);
          }
          if ((int32_T)(delta + 1.0) > idx->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(delta + 1.0), 1,
                                          idx->size[0], &qd_emlrtBCI, &b_st);
          }
          j = idx_data[(int32_T)(delta + 1.0) - 1];
          if ((j < 1) || (j > x->size[0])) {
            emlrtDynamicBoundsCheckR2012b(j, 1, x->size[0], &pd_emlrtBCI,
                                          &b_st);
          }
          if (k + 1 > y->size[1]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &rd_emlrtBCI,
                                          &b_st);
          }
          y_data[k] =
              (0.5 - delta1) * x_data[i2 - 1] + (delta1 + 0.5) * x_data[j - 1];
        }
      }
    }
    emxFree_int32_T(&b_st, &idx);
  }
  emxFree_real_T(&b_st, &p100);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (quantile.c) */

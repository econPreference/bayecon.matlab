/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfmvn.c
 *
 * Code generation for function 'lnpdfmvn'
 *
 */

/* Include files */
#include "lnpdfmvn.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "blas.h"
#include "combineVectorElements.h"
#include "det.h"
#include "invpd.h"
#include "mpower.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo hj_emlrtRSI = { 8,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 9,  /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 14, /* lineNo */
  "lnpdfmvn",                          /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pathName */
};

static emlrtECInfo rb_emlrtECI = { 2,  /* nDims */
  9,                                   /* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  33,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  9,                                   /* lineNo */
  15,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 9,/* lineNo */
  15,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 9,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 9,/* lineNo */
  32,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 9,/* lineNo */
  13,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 9,/* lineNo */
  21,                                  /* colNo */
  "lnpdfmvn",                          /* fName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfmvn.m"/* pName */
};

/* Function Definitions */
real_T lnpdfmvn(const emlrtStack *sp, const emxArray_real_T *x, const
                emxArray_real_T *m, const emxArray_real_T *C)
{
  real_T p;
  real_T b_x;
  emxArray_real_T *a;
  int32_T i;
  int32_T loop_ub;
  emxArray_real_T *b;
  emxArray_real_T *r;
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  int32_T b_loop_ub;
  real_T beta1;
  int32_T i1;
  ptrdiff_t m_t;
  emxArray_real_T *r1;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emxArray_real_T *r2;
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

  /*  GAUSSIAN_PROB Evaluate a multivariate Gaussian density. */
  /*  x =  d by 1 vector */
  st.site = &hj_emlrtRSI;
  b_x = det(&st, C);
  st.site = &hj_emlrtRSI;
  st.site = &hj_emlrtRSI;
  b_x = mpower(&st, 6.2831853071795862, (real_T)x->size[0] / 2.0) *
    muDoubleScalarSqrt(muDoubleScalarAbs(b_x));
  if (x->size[0] != m->size[0]) {
    emlrtSizeEqCheck1DR2012b(x->size[0], m->size[0], &tb_emlrtECI, sp);
  }

  emxInit_real_T(sp, &a, 1, &ak_emlrtRTEI, true);
  i = a->size[0];
  a->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, a, i, &ak_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = x->data[i] - m->data[i];
  }

  if (x->size[0] != m->size[0]) {
    emlrtSizeEqCheck1DR2012b(x->size[0], m->size[0], &sb_emlrtECI, sp);
  }

  emxInit_real_T(sp, &b, 2, &fk_emlrtRTEI, true);
  st.site = &ij_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  invpd(&b_st, C, b);
  b_st.site = &nd_emlrtRSI;
  if (a->size[0] != b->size[0]) {
    if ((a->size[0] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&st, &r, 2, &ek_emlrtRTEI, true);
  if ((a->size[0] == 1) || (b->size[0] == 1)) {
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, r, i, &bk_emlrtRTEI);
    loop_ub = b->size[1];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = 0.0;
      b_loop_ub = a->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        r->data[i] += a->data[i1] * b->data[i1 + b->size[0] * i];
      }
    }
  } else {
    b_st.site = &md_emlrtRSI;
    if ((a->size[0] == 0) || (b->size[0] == 0) || (b->size[1] == 0)) {
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&b_st, r, i, &bk_emlrtRTEI);
      loop_ub = b->size[1];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = 0.0;
      }
    } else {
      c_st.site = &sd_emlrtRSI;
      TRANSB1 = 'N';
      TRANSA1 = 'T';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)a->size[0];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)b->size[0];
      ldc_t = (ptrdiff_t)1;
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, r, i, &le_emlrtRTEI);
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &r->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b);
  emxFree_real_T(&a);
  emxInit_real_T(&st, &r1, 2, &ek_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = x->size[0];
  emxEnsureCapacity_real_T(sp, r1, i, &ck_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = x->data[i] - m->data[i];
  }

  emxInit_real_T(sp, &r2, 2, &dk_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r->size, *(int32_T (*)[2])r1->size,
    &rb_emlrtECI, sp);
  st.site = &ij_emlrtRSI;
  b_st.site = &oc_emlrtRSI;
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = r->size[1];
  emxEnsureCapacity_real_T(&b_st, r2, i, &dk_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = r->data[i] * r1->data[i];
  }

  emxFree_real_T(&r1);
  emxFree_real_T(&r);
  c_st.site = &pc_emlrtRSI;
  alpha1 = combineVectorElements(&c_st, r2);

  /*  Chris Bregler's trick */
  /*      if any(mahal<0) */
  /*          %warning('mahal < 0 => C is not psd')   % revised Jul. 25, 2015 */
  /*      end */
  st.site = &jj_emlrtRSI;
  emxFree_real_T(&r2);
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  b_x = muDoubleScalarLog(b_x);
  p = -0.5 * alpha1 - b_x;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return p;
}

/* End of code generation (lnpdfmvn.c) */

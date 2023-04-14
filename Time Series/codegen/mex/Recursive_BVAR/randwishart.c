/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randwishart.c
 *
 * Code generation for function 'randwishart'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "randwishart.h"
#include "Recursive_BVAR_emxutil.h"
#include "cholmod.h"
#include "Recursive_BVAR_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo mi_emlrtRSI = { 6,  /* lineNo */
  "randwishart",                       /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 7,  /* lineNo */
  "randwishart",                       /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 8,  /* lineNo */
  "randwishart",                       /* fcnName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pathName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 6,/* lineNo */
  1,                                   /* colNo */
  "randwishart",                       /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 7,/* lineNo */
  14,                                  /* colNo */
  "randwishart",                       /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 7,/* lineNo */
  1,                                   /* colNo */
  "randwishart",                       /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 8,/* lineNo */
  5,                                   /* colNo */
  "randwishart",                       /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 8,/* lineNo */
  7,                                   /* colNo */
  "randwishart",                       /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 8,/* lineNo */
  1,                                   /* colNo */
  "randwishart",                       /* fName */
  "C:\\Users\\smith\\Documents\\MATLAB\\Bayecon\\randwishart.m"/* pName */
};

/* Function Definitions */
void randwishart(const emlrtStack *sp, const emxArray_real_T *Omega, real_T nu,
                 emxArray_real_T *V)
{
  emxArray_real_T *Chol_omg;
  emxArray_real_T *a;
  int32_T i32;
  int32_T loop_ub;
  emxArray_real_T *b;
  int32_T b_loop_ub;
  int32_T i33;
  char_T TRANSA;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T c_loop_ub;
  ptrdiff_t k_t;
  int32_T i34;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
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
  emxInit_real_T(sp, &Chol_omg, 2, &ji_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &mi_emlrtRTEI, true);

  /*  sampling Wishart dist */
  /*  E(V) = Omega*nu */
  st.site = &mi_emlrtRSI;
  b_cholmod(&st, Omega, a);
  i32 = Chol_omg->size[0] * Chol_omg->size[1];
  Chol_omg->size[0] = a->size[1];
  Chol_omg->size[1] = a->size[0];
  emxEnsureCapacity_real_T(sp, Chol_omg, i32, &ji_emlrtRTEI);
  loop_ub = a->size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    b_loop_ub = a->size[1];
    for (i33 = 0; i33 < b_loop_ub; i33++) {
      Chol_omg->data[i33 + Chol_omg->size[0] * i32] = a->data[i32 + a->size[0] *
        i33];
    }
  }

  emxInit_real_T(sp, &b, 2, &ki_emlrtRTEI, true);
  st.site = &ni_emlrtRSI;
  i32 = b->size[0] * b->size[1];
  b->size[0] = Omega->size[0];
  if (!(nu >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nu, &tc_emlrtDCI, &st);
  }

  b->size[1] = (int32_T)nu;
  emxEnsureCapacity_real_T(&st, b, i32, &ki_emlrtRTEI);
  if (!((b->size[0] == 0) || (b->size[1] == 0))) {
    emlrtRandn(&b->data[0], b->size[0] * b->size[1]);
  }

  st.site = &ni_emlrtRSI;
  b_st.site = &le_emlrtRSI;
  if (!(Chol_omg->size[1] == b->size[0])) {
    if (((Chol_omg->size[0] == 1) && (Chol_omg->size[1] == 1)) || ((b->size[0] ==
          1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((Chol_omg->size[1] == 1) || (b->size[0] == 1)) {
    i32 = V->size[0] * V->size[1];
    V->size[0] = Chol_omg->size[0];
    V->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, V, i32, &li_emlrtRTEI);
    loop_ub = Chol_omg->size[0];
    for (i32 = 0; i32 < loop_ub; i32++) {
      b_loop_ub = b->size[1];
      for (i33 = 0; i33 < b_loop_ub; i33++) {
        V->data[i32 + V->size[0] * i33] = 0.0;
        c_loop_ub = Chol_omg->size[1];
        for (i34 = 0; i34 < c_loop_ub; i34++) {
          V->data[i32 + V->size[0] * i33] += Chol_omg->data[i32 + Chol_omg->
            size[0] * i34] * b->data[i34 + b->size[0] * i33];
        }
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((Chol_omg->size[0] == 0) || (Chol_omg->size[1] == 0) || (b->size[0] == 0)
        || (b->size[1] == 0)) {
      i32 = V->size[0] * V->size[1];
      V->size[0] = Chol_omg->size[0];
      V->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&b_st, V, i32, &li_emlrtRTEI);
      loop_ub = Chol_omg->size[0] * b->size[1];
      for (i32 = 0; i32 < loop_ub; i32++) {
        V->data[i32] = 0.0;
      }
    } else {
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)Chol_omg->size[0];
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)Chol_omg->size[1];
      lda_t = (ptrdiff_t)Chol_omg->size[0];
      ldb_t = (ptrdiff_t)Chol_omg->size[1];
      ldc_t = (ptrdiff_t)Chol_omg->size[0];
      i32 = V->size[0] * V->size[1];
      V->size[0] = Chol_omg->size[0];
      V->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, V, i32, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Chol_omg->data[0],
            &lda_t, &b->data[0], &ldb_t, &beta1, &V->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&Chol_omg);

  /*  k by nu */
  st.site = &oi_emlrtRSI;
  i32 = a->size[0] * a->size[1];
  a->size[0] = V->size[0];
  a->size[1] = V->size[1];
  emxEnsureCapacity_real_T(&st, a, i32, &mi_emlrtRTEI);
  loop_ub = V->size[0] * V->size[1];
  for (i32 = 0; i32 < loop_ub; i32++) {
    a->data[i32] = V->data[i32];
  }

  i32 = b->size[0] * b->size[1];
  b->size[0] = V->size[1];
  b->size[1] = V->size[0];
  emxEnsureCapacity_real_T(&st, b, i32, &ni_emlrtRTEI);
  loop_ub = V->size[0];
  for (i32 = 0; i32 < loop_ub; i32++) {
    b_loop_ub = V->size[1];
    for (i33 = 0; i33 < b_loop_ub; i33++) {
      b->data[i33 + b->size[0] * i32] = V->data[i32 + V->size[0] * i33];
    }
  }

  b_st.site = &le_emlrtRSI;
  if (!(V->size[1] == b->size[0])) {
    if (((V->size[0] == 1) && (V->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &hk_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &gk_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((V->size[1] == 1) || (b->size[0] == 1)) {
    i32 = a->size[0] * a->size[1];
    a->size[0] = V->size[0];
    a->size[1] = b->size[1];
    emxEnsureCapacity_real_T(&st, a, i32, &c_emlrtRTEI);
    loop_ub = V->size[0];
    for (i32 = 0; i32 < loop_ub; i32++) {
      b_loop_ub = b->size[1];
      for (i33 = 0; i33 < b_loop_ub; i33++) {
        a->data[i32 + a->size[0] * i33] = 0.0;
        c_loop_ub = V->size[1];
        for (i34 = 0; i34 < c_loop_ub; i34++) {
          a->data[i32 + a->size[0] * i33] += V->data[i32 + V->size[0] * i34] *
            b->data[i34 + b->size[0] * i33];
        }
      }
    }

    i32 = V->size[0] * V->size[1];
    V->size[0] = a->size[0];
    V->size[1] = a->size[1];
    emxEnsureCapacity_real_T(&st, V, i32, &oi_emlrtRTEI);
    loop_ub = a->size[1];
    for (i32 = 0; i32 < loop_ub; i32++) {
      b_loop_ub = a->size[0];
      for (i33 = 0; i33 < b_loop_ub; i33++) {
        V->data[i33 + V->size[0] * i32] = a->data[i33 + a->size[0] * i32];
      }
    }
  } else {
    b_st.site = &ke_emlrtRSI;
    if ((V->size[0] == 0) || (V->size[1] == 0) || (b->size[0] == 0) || (b->size
         [1] == 0)) {
      loop_ub = V->size[0];
      b_loop_ub = b->size[1];
      i32 = V->size[0] * V->size[1];
      V->size[0] = loop_ub;
      V->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(&b_st, V, i32, &oi_emlrtRTEI);
      for (i32 = 0; i32 < b_loop_ub; i32++) {
        for (i33 = 0; i33 < loop_ub; i33++) {
          V->data[i33 + V->size[0] * i32] = 0.0;
        }
      }
    } else {
      c_st.site = &qe_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)V->size[0];
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)V->size[1];
      lda_t = (ptrdiff_t)V->size[0];
      ldb_t = (ptrdiff_t)V->size[1];
      ldc_t = (ptrdiff_t)V->size[0];
      loop_ub = V->size[0];
      i32 = V->size[0] * V->size[1];
      V->size[0] = loop_ub;
      V->size[1] = b->size[1];
      emxEnsureCapacity_real_T(&c_st, V, i32, &mb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &V->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&a);
  emxFree_real_T(&b);

  /*  k by k */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (randwishart.c) */

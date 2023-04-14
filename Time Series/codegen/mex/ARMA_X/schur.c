/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * schur.c
 *
 * Code generation for function 'schur'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "schur.h"
#include "ARMA_X_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "xdlanv2.h"
#include "warning.h"
#include "error1.h"
#include "xgehrd.h"
#include "anyNonFinite.h"
#include "ARMA_X_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo ei_emlrtRSI = { 35, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 39, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 52, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 56, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 57, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 83, /* lineNo */
  "schur",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 47, /* lineNo */
  "triu",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 48, /* lineNo */
  "triu",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 28, /* lineNo */
  "xhseqr",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 69, /* lineNo */
  "xhseqr",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 70, /* lineNo */
  "xhseqr",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 90, /* lineNo */
  "xhseqr",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 112,/* lineNo */
  "xhseqr",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 127,/* lineNo */
  "xhseqr",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 37, /* lineNo */
  "eml_rsf2csf",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_rsf2csf.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 47, /* lineNo */
  "eml_rsf2csf",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_rsf2csf.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 55, /* lineNo */
  "eml_rsf2csf",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_rsf2csf.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 15, /* lineNo */
  "xdlanv2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\xdlanv2.m"/* pathName */
};

static emlrtRTEInfo bl_emlrtRTEI = { 1,/* lineNo */
  30,                                  /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = { 38,/* lineNo */
  9,                                   /* colNo */
  "schur",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo el_emlrtRTEI = { 57,/* lineNo */
  13,                                  /* colNo */
  "schur",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pName */
};

static emlrtRTEInfo fl_emlrtRTEI = { 128,/* lineNo */
  9,                                   /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo gl_emlrtRTEI = { 28,/* lineNo */
  33,                                  /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo hl_emlrtRTEI = { 110,/* lineNo */
  9,                                   /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo il_emlrtRTEI = { 111,/* lineNo */
  9,                                   /* colNo */
  "xhseqr",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xhseqr.m"/* pName */
};

static emlrtRTEInfo yo_emlrtRTEI = { 18,/* lineNo */
  15,                                  /* colNo */
  "schur",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m"/* pName */
};

/* Function Definitions */
void schur(const emlrtStack *sp, emxArray_real_T *A, emxArray_creal_T *V)
{
  emxArray_real_T *Vr;
  int32_T j;
  uint32_T uv1[2];
  int32_T n;
  int32_T m;
  real_T z;
  int32_T nTr;
  ptrdiff_t n_t;
  int32_T i;
  int32_T info;
  emxArray_real_T *wr;
  emxArray_real_T *wi;
  ptrdiff_t info_t;
  real_T b;
  real_T s;
  real_T t1_re;
  boolean_T p;
  real_T t1_im;
  real_T rt1i;
  real_T rt2r;
  real_T rt2i;
  real_T mu1_im;
  real_T mu1_re;
  boolean_T b_p;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &yo_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  st.site = &ei_emlrtRSI;
  if (anyNonFinite(&st, A)) {
    for (j = 0; j < 2; j++) {
      uv1[j] = (uint32_T)A->size[j];
    }

    j = V->size[0] * V->size[1];
    V->size[0] = (int32_T)uv1[0];
    V->size[1] = (int32_T)uv1[1];
    emxEnsureCapacity_creal_T1(sp, V, j, &cl_emlrtRTEI);
    n = (int32_T)uv1[0] * (int32_T)uv1[1];
    for (j = 0; j < n; j++) {
      V->data[j].re = rtNaN;
      V->data[j].im = 0.0;
    }

    st.site = &fi_emlrtRSI;
    m = V->size[0];
    if ((V->size[0] == 0) || (V->size[1] == 0) || (2 >= V->size[0])) {
    } else {
      n = 3;
      if (V->size[0] - 3 < V->size[1] - 1) {
        nTr = V->size[0] - 2;
      } else {
        nTr = V->size[1];
      }

      b_st.site = &ki_emlrtRSI;
      if (nTr > 2147483646) {
        c_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (j = 1; j <= nTr; j++) {
        b_st.site = &li_emlrtRSI;
        if ((!(n > m)) && (m > 2147483646)) {
          c_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = n; i <= m; i++) {
          V->data[(i + V->size[0] * (j - 1)) - 1].re = 0.0;
          V->data[(i + V->size[0] * (j - 1)) - 1].im = 0.0;
        }

        n++;
      }
    }
  } else {
    emxInit_real_T(sp, &Vr, 2, &gl_emlrtRTEI, true);
    st.site = &gi_emlrtRSI;
    xgehrd(&st, A);
    st.site = &hi_emlrtRSI;
    j = Vr->size[0] * Vr->size[1];
    Vr->size[0] = A->size[0];
    Vr->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, Vr, j, &bl_emlrtRTEI);
    n = A->size[0] * A->size[1];
    for (j = 0; j < n; j++) {
      Vr->data[j] = A->data[j];
    }

    b_st.site = &si_emlrtRSI;
    z = 0.0;
    n = Vr->size[0];
    c_st.site = &ti_emlrtRSI;
    c_st.site = &ui_emlrtRSI;
    c_st.site = &vi_emlrtRSI;
    n_t = (ptrdiff_t)Vr->size[0];
    if (!((Vr->size[0] == 0) || (Vr->size[1] == 0))) {
      emxInit_real_T(&b_st, &wr, 2, &hl_emlrtRTEI, true);
      emxInit_real_T(&b_st, &wi, 2, &il_emlrtRTEI, true);
      j = wr->size[0] * wr->size[1];
      wr->size[0] = 1;
      wr->size[1] = Vr->size[0];
      emxEnsureCapacity_real_T(&b_st, wr, j, &dl_emlrtRTEI);
      j = wi->size[0] * wi->size[1];
      wi->size[0] = 1;
      wi->size[1] = Vr->size[0];
      emxEnsureCapacity_real_T(&b_st, wi, j, &dl_emlrtRTEI);
      c_st.site = &wi_emlrtRSI;
      info_t = LAPACKE_dhseqr(102, 'S', 'N', n_t, (ptrdiff_t)1, (ptrdiff_t)
        Vr->size[0], &Vr->data[0], n_t, &wr->data[0], &wi->data[0], &z,
        (ptrdiff_t)muIntScalarMax_sint32(1, n));
      info = (int32_T)info_t;
      c_st.site = &xi_emlrtRSI;
      emxFree_real_T(&wi);
      emxFree_real_T(&wr);
      if (info < 0) {
        p = true;
        b_p = false;
        if (info == -7) {
          b_p = true;
        } else {
          if (info == -11) {
            b_p = true;
          }
        }

        if (!b_p) {
          if (info == -1010) {
            d_st.site = &tf_emlrtRSI;
            d_error(&d_st);
          } else {
            d_st.site = &uf_emlrtRSI;
            i_error(&d_st, info);
          }
        }
      } else {
        p = false;
      }

      if (p) {
        j = Vr->size[0] * Vr->size[1];
        emxEnsureCapacity_real_T(&b_st, Vr, j, &fl_emlrtRTEI);
        n = Vr->size[1];
        for (j = 0; j < n; j++) {
          nTr = Vr->size[0];
          for (m = 0; m < nTr; m++) {
            Vr->data[m + Vr->size[0] * j] = rtNaN;
          }
        }
      }
    } else {
      info = 0;
    }

    st.site = &ii_emlrtRSI;
    j = V->size[0] * V->size[1];
    V->size[0] = Vr->size[0];
    V->size[1] = Vr->size[1];
    emxEnsureCapacity_creal_T1(&st, V, j, &el_emlrtRTEI);
    n = Vr->size[0] * Vr->size[1];
    for (j = 0; j < n; j++) {
      V->data[j].re = Vr->data[j];
      V->data[j].im = 0.0;
    }

    n = Vr->size[0];
    nTr = Vr->size[1];
    n = muIntScalarMin_sint32(n, nTr);
    if (n != 0) {
      for (m = n - 1; m + 1 >= 2; m--) {
        if (Vr->data[m + Vr->size[0] * (m - 1)] != 0.0) {
          b_st.site = &fj_emlrtRSI;
          z = Vr->data[(m + Vr->size[0] * (m - 1)) - 1];
          b = Vr->data[(m + Vr->size[0] * m) - 1];
          s = Vr->data[m + Vr->size[0] * (m - 1)];
          t1_re = Vr->data[m + Vr->size[0] * m];
          c_st.site = &ij_emlrtRSI;
          xdlanv2(&c_st, &z, &b, &s, &t1_re, &t1_im, &rt1i, &rt2r, &rt2i,
                  &mu1_im, &mu1_re);
          mu1_re = t1_im - Vr->data[m + Vr->size[0] * m];
          z = muDoubleScalarHypot(muDoubleScalarHypot(mu1_re, rt1i), Vr->data[m
            + Vr->size[0] * (m - 1)]);
          if (rt1i == 0.0) {
            mu1_re /= z;
            mu1_im = 0.0;
          } else if (mu1_re == 0.0) {
            mu1_re = 0.0;
            mu1_im = rt1i / z;
          } else {
            mu1_re /= z;
            mu1_im = rt1i / z;
          }

          s = Vr->data[m + Vr->size[0] * (m - 1)] / z;
          b_st.site = &gj_emlrtRSI;
          if ((!(m > n)) && (n > 2147483646)) {
            c_st.site = &cb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (j = m - 1; j < n; j++) {
            t1_re = V->data[(m + V->size[0] * j) - 1].re;
            t1_im = V->data[(m + V->size[0] * j) - 1].im;
            rt2r = V->data[(m + V->size[0] * j) - 1].re;
            rt2i = V->data[(m + V->size[0] * j) - 1].im;
            z = V->data[(m + V->size[0] * j) - 1].im;
            b = V->data[(m + V->size[0] * j) - 1].re;
            V->data[(m + V->size[0] * j) - 1].re = (mu1_re * rt2r + mu1_im *
              rt2i) + s * V->data[m + V->size[0] * j].re;
            V->data[(m + V->size[0] * j) - 1].im = (mu1_re * z - mu1_im * b) + s
              * V->data[m + V->size[0] * j].im;
            z = mu1_re * V->data[m + V->size[0] * j].re - mu1_im * V->data[m +
              V->size[0] * j].im;
            b = mu1_re * V->data[m + V->size[0] * j].im + mu1_im * V->data[m +
              V->size[0] * j].re;
            V->data[m + V->size[0] * j].re = z - s * t1_re;
            V->data[m + V->size[0] * j].im = b - s * t1_im;
          }

          b_st.site = &hj_emlrtRSI;
          if (m + 1 > 2147483646) {
            c_st.site = &cb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (i = 0; i < m + 1; i++) {
            t1_re = V->data[i + V->size[0] * (m - 1)].re;
            t1_im = V->data[i + V->size[0] * (m - 1)].im;
            z = mu1_re * V->data[i + V->size[0] * (m - 1)].re - mu1_im * V->
              data[i + V->size[0] * (m - 1)].im;
            b = mu1_re * V->data[i + V->size[0] * (m - 1)].im + mu1_im * V->
              data[i + V->size[0] * (m - 1)].re;
            rt2r = V->data[i + V->size[0] * m].re;
            rt2i = V->data[i + V->size[0] * m].im;
            V->data[i + V->size[0] * (m - 1)].re = z + s * rt2r;
            V->data[i + V->size[0] * (m - 1)].im = b + s * rt2i;
            rt2r = V->data[i + V->size[0] * m].re;
            rt2i = V->data[i + V->size[0] * m].im;
            z = V->data[i + V->size[0] * m].im;
            b = V->data[i + V->size[0] * m].re;
            V->data[i + V->size[0] * m].re = (mu1_re * rt2r + mu1_im * rt2i) - s
              * t1_re;
            V->data[i + V->size[0] * m].im = (mu1_re * z - mu1_im * b) - s *
              t1_im;
          }

          V->data[m + V->size[0] * (m - 1)].re = 0.0;
          V->data[m + V->size[0] * (m - 1)].im = 0.0;
        }
      }
    }

    emxFree_real_T(&Vr);
    if (info != 0) {
      st.site = &ji_emlrtRSI;
      c_warning(&st);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (schur.c) */

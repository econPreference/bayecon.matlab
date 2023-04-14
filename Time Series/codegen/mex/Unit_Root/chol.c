/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chol.c
 *
 * Code generation for function 'chol'
 *
 */

/* Include files */
#include "chol.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "lapacke.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo yf_emlrtRSI = { 74, /* lineNo */
  "cholesky",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 91, /* lineNo */
  "cholesky",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 92, /* lineNo */
  "cholesky",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 77, /* lineNo */
  "ceval_xpotrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 13, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 54,/* lineNo */
  15,                                  /* colNo */
  "cholesky",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 80,/* lineNo */
  23,                                  /* colNo */
  "cholesky",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

/* Function Definitions */
void cholesky(const emlrtStack *sp, emxArray_real_T *A)
{
  int32_T n;
  ptrdiff_t info_t;
  int32_T info;
  static const char_T fname[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'p', 'o', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  int32_T jmax;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  n = A->size[1];
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &mb_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if (A->size[1] != 0) {
    st.site = &yf_emlrtRSI;
    b_st.site = &hg_emlrtRSI;
    info_t = LAPACKE_dpotrf_work(102, 'U', (ptrdiff_t)A->size[1], &A->data[0],
      (ptrdiff_t)A->size[1]);
    info = (int32_T)info_t;
    c_st.site = &cg_emlrtRSI;
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &db_emlrtRTEI, "MATLAB:nomem",
          "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
          "Coder:toolbox:LAPACKCallErrorInfo",
          "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, fname, 12, info);
      }
    }

    if (info == 0) {
      jmax = n;
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &nb_emlrtRTEI, "Coder:MATLAB:posdef",
        "Coder:MATLAB:posdef", 0);
    }

    st.site = &ag_emlrtRSI;
    if ((1 <= jmax) && (jmax > 2147483646)) {
      b_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (n = 0; n < jmax; n++) {
      info = n + 2;
      st.site = &bg_emlrtRSI;
      for (i = info; i <= jmax; i++) {
        A->data[(i + A->size[0] * n) - 1] = 0.0;
      }
    }
  }
}

/* End of code generation (chol.c) */

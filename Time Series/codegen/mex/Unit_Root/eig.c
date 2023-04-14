/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "Unit_Root_emxutil.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "lapacke.h"
#include "rt_nonfinite.h"
#include "schur.h"
#include "warning.h"

/* Type Definitions */
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo th_emlrtRSI = { 186,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 149,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 131,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 130,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 76, /* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 291,/* lineNo */
  "mainDiagZeroImag",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 33, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 101,/* lineNo */
  "ceval_xgeev",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 57,/* lineNo */
  27,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 69,/* lineNo */
  9,                                   /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 114,/* lineNo */
  9,                                   /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 95,/* lineNo */
  9,                                   /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 79,/* lineNo */
  13,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 80,/* lineNo */
  13,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 130,/* lineNo */
  13,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "xgeev",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 131,/* lineNo */
  17,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 131,/* lineNo */
  13,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "xgeev",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const emxArray_real_T *A, emxArray_creal_T *V)
{
  int32_T info;
  int32_T i;
  boolean_T p;
  int32_T j;
  boolean_T exitg2;
  emxArray_creal_T *b_A;
  emxArray_real_T *T;
  int32_T exitg1;
  emxArray_real_T *d;
  int32_T n;
  ptrdiff_t info_t;
  creal_T vl;
  creal_T vr;
  static const char_T fname[13] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'z',
    'g', 'e', 'e', 'v' };

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
  if (A->size[0] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &eb_emlrtRTEI,
      "MATLAB:eig:inputMustBeSquareStandard",
      "MATLAB:eig:inputMustBeSquareStandard", 0);
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = V->size[0];
    V->size[0] = A->size[0];
    emxEnsureCapacity_creal_T(sp, V, i, &mj_emlrtRTEI);
    j = A->size[0];
    for (i = 0; i < j; i++) {
      V->data[i].re = 0.0;
      V->data[i].im = 0.0;
    }
  } else {
    info = 0;
    st.site = &xh_emlrtRSI;
    if (anyNonFinite(&st, A)) {
      if ((A->size[0] == 1) && (A->size[1] == 1)) {
        i = V->size[0];
        V->size[0] = 1;
        emxEnsureCapacity_creal_T(sp, V, i, &pj_emlrtRTEI);
        V->data[0].re = A->data[0];
        V->data[0].im = 0.0;
        i = V->size[0];
        V->size[0] = 1;
        emxEnsureCapacity_creal_T(sp, V, i, &qj_emlrtRTEI);
        for (i = 0; i < 1; i++) {
          V->data[0].re = rtNaN;
          V->data[0].im = 0.0;
        }
      } else {
        i = V->size[0];
        V->size[0] = A->size[0];
        emxEnsureCapacity_creal_T(sp, V, i, &oj_emlrtRTEI);
        j = A->size[0];
        for (i = 0; i < j; i++) {
          V->data[i].re = rtNaN;
          V->data[i].im = 0.0;
        }
      }
    } else {
      if ((A->size[0] == 1) && (A->size[1] == 1)) {
        i = V->size[0];
        V->size[0] = 1;
        emxEnsureCapacity_creal_T(sp, V, i, &nj_emlrtRTEI);
        V->data[0].re = A->data[0];
        V->data[0].im = 0.0;
      } else {
        p = (A->size[0] == A->size[1]);
        if (p) {
          j = 0;
          exitg2 = false;
          while ((!exitg2) && (j <= A->size[1] - 1)) {
            i = 0;
            do {
              exitg1 = 0;
              if (i <= j) {
                if (!(A->data[i + A->size[0] * j] == A->data[j + A->size[0] * i]))
                {
                  p = false;
                  exitg1 = 1;
                } else {
                  i++;
                }
              } else {
                j++;
                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        }

        if (p) {
          emxInit_real_T(sp, &T, 2, &rj_emlrtRTEI, true);
          i = T->size[0] * T->size[1];
          T->size[0] = A->size[0];
          T->size[1] = A->size[1];
          emxEnsureCapacity_real_T(sp, T, i, &rj_emlrtRTEI);
          j = A->size[0] * A->size[1];
          for (i = 0; i < j; i++) {
            T->data[i] = A->data[i];
          }

          emxInit_real_T(sp, &d, 1, &tj_emlrtRTEI, true);
          st.site = &wh_emlrtRSI;
          schur(&st, T);
          st.site = &vh_emlrtRSI;
          n = T->size[0];
          i = d->size[0];
          d->size[0] = T->size[0];
          emxEnsureCapacity_real_T(&st, d, i, &tj_emlrtRTEI);
          b_st.site = &ti_emlrtRSI;
          if ((1 <= T->size[0]) && (T->size[0] > 2147483646)) {
            c_st.site = &pb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (j = 0; j < n; j++) {
            d->data[j] = T->data[j + T->size[0] * j];
          }

          emxFree_real_T(&T);
          i = V->size[0];
          V->size[0] = d->size[0];
          emxEnsureCapacity_creal_T(sp, V, i, &uj_emlrtRTEI);
          j = d->size[0];
          for (i = 0; i < j; i++) {
            V->data[i].re = d->data[i];
            V->data[i].im = 0.0;
          }

          emxFree_real_T(&d);
        } else {
          emxInit_creal_T(sp, &b_A, 2, &sj_emlrtRTEI, true);
          st.site = &uh_emlrtRSI;
          b_st.site = &ui_emlrtRSI;
          i = b_A->size[0] * b_A->size[1];
          b_A->size[0] = A->size[0];
          b_A->size[1] = A->size[1];
          emxEnsureCapacity_creal_T(&b_st, b_A, i, &sj_emlrtRTEI);
          j = A->size[0] * A->size[1];
          for (i = 0; i < j; i++) {
            b_A->data[i].re = A->data[i];
            b_A->data[i].im = 0.0;
          }

          i = V->size[0];
          V->size[0] = A->size[1];
          emxEnsureCapacity_creal_T(&b_st, V, i, &vj_emlrtRTEI);
          info_t = LAPACKE_zgeev(102, 'N', 'N', (ptrdiff_t)A->size[1],
            (lapack_complex_double *)&b_A->data[0], (ptrdiff_t)A->size[0],
            (lapack_complex_double *)&V->data[0], (lapack_complex_double *)&vl,
            (ptrdiff_t)1, (lapack_complex_double *)&vr, (ptrdiff_t)1);
          info = (int32_T)info_t;
          c_st.site = &vi_emlrtRSI;
          emxFree_creal_T(&b_A);
          if (info < 0) {
            if (info == -1010) {
              emlrtErrorWithMessageIdR2018a(&c_st, &db_emlrtRTEI, "MATLAB:nomem",
                "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
                "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 13, fname, 12, info);
            }
          }
        }
      }

      if (info != 0) {
        st.site = &th_emlrtRSI;
        e_warning(&st);
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eig.c) */

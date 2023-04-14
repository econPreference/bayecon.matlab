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
#include "rt_nonfinite.h"
#include "Recursive_BVAR.h"
#include "eig.h"
#include "Recursive_BVAR_emxutil.h"
#include "warning.h"
#include "eml_int_forloop_overflow_check.h"
#include "schur.h"
#include "error.h"
#include "anyNonFinite.h"
#include "Recursive_BVAR_data.h"
#include "lapacke.h"

/* Type Definitions */

/* Variable Definitions */
static emlrtRSInfo bg_emlrtRSI = { 76, /* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 125,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 126,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 144,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 181,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 286,/* lineNo */
  "eig",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 33, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 101,/* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 91, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 84, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 81, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 72, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 50, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 43, /* lineNo */
  "xgeev",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pathName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 69,/* lineNo */
  9,                                   /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 114,/* lineNo */
  9,                                   /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 95,/* lineNo */
  9,                                   /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 79,/* lineNo */
  13,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 80,/* lineNo */
  13,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 125,/* lineNo */
  23,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "xgeev",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 126,/* lineNo */
  17,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "xgeev",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeev.m"/* pName */
};

static emlrtRTEInfo al_emlrtRTEI = { 57,/* lineNo */
  27,                                  /* colNo */
  "eig",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"/* pName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const emxArray_real_T *A, emxArray_creal_T *V)
{
  boolean_T overflow;
  int32_T info;
  int32_T j;
  int32_T i;
  emxArray_creal_T *b_A;
  boolean_T exitg2;
  emxArray_real_T *c_A;
  int32_T exitg1;
  ptrdiff_t info_t;
  creal_T vl;
  creal_T vr;
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
  overflow = (A->size[0] == A->size[1]);
  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(sp, &al_emlrtRTEI,
      "MATLAB:eig:inputMustBeSquareStandard",
      "MATLAB:eig:inputMustBeSquareStandard", 0);
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    j = V->size[0];
    V->size[0] = A->size[0];
    emxEnsureCapacity_creal_T(sp, V, j, &dh_emlrtRTEI);
    i = A->size[0];
    for (j = 0; j < i; j++) {
      V->data[j].re = 0.0;
      V->data[j].im = 0.0;
    }
  } else {
    info = 0;
    st.site = &bg_emlrtRSI;
    if (anyNonFinite(&st, A)) {
      if ((A->size[0] == 1) && (A->size[1] == 1)) {
        j = V->size[0];
        V->size[0] = 1;
        emxEnsureCapacity_creal_T(sp, V, j, &gh_emlrtRTEI);
        V->data[0].re = A->data[0];
        V->data[0].im = 0.0;
        i = V->size[0];
        j = V->size[0];
        V->size[0] = i;
        emxEnsureCapacity_creal_T(sp, V, j, &hh_emlrtRTEI);
        for (j = 0; j < i; j++) {
          V->data[j].re = rtNaN;
          V->data[j].im = 0.0;
        }
      } else {
        j = V->size[0];
        V->size[0] = A->size[0];
        emxEnsureCapacity_creal_T(sp, V, j, &fh_emlrtRTEI);
        i = A->size[0];
        for (j = 0; j < i; j++) {
          V->data[j].re = rtNaN;
          V->data[j].im = 0.0;
        }
      }
    } else {
      if ((A->size[0] == 1) && (A->size[1] == 1)) {
        j = V->size[0];
        V->size[0] = 1;
        emxEnsureCapacity_creal_T(sp, V, j, &eh_emlrtRTEI);
        V->data[0].re = A->data[0];
        V->data[0].im = 0.0;
      } else {
        overflow = (A->size[0] == A->size[1]);
        if (overflow) {
          j = 0;
          exitg2 = false;
          while ((!exitg2) && (j <= A->size[1] - 1)) {
            i = 0;
            do {
              exitg1 = 0;
              if (i <= j) {
                if (!(A->data[i + A->size[0] * j] == A->data[j + A->size[0] * i]))
                {
                  overflow = false;
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

        emxInit_creal_T1(sp, &b_A, 2, &jh_emlrtRTEI, true);
        if (overflow) {
          emxInit_real_T(sp, &c_A, 2, &ih_emlrtRTEI, true);
          j = c_A->size[0] * c_A->size[1];
          c_A->size[0] = A->size[0];
          c_A->size[1] = A->size[1];
          emxEnsureCapacity_real_T(sp, c_A, j, &ih_emlrtRTEI);
          i = A->size[0] * A->size[1];
          for (j = 0; j < i; j++) {
            c_A->data[j] = A->data[j];
          }

          st.site = &cg_emlrtRSI;
          schur(&st, c_A, b_A);
          st.site = &dg_emlrtRSI;
          j = V->size[0];
          V->size[0] = b_A->size[0];
          emxEnsureCapacity_creal_T(&st, V, j, &kh_emlrtRTEI);
          b_st.site = &oh_emlrtRSI;
          emxFree_real_T(&c_A);
          overflow = ((!(1 > b_A->size[0])) && (b_A->size[0] > 2147483646));
          if (overflow) {
            c_st.site = &dc_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (j = 0; j < b_A->size[0]; j++) {
            V->data[j] = b_A->data[j + b_A->size[0] * j];
          }
        } else {
          st.site = &eg_emlrtRSI;
          b_st.site = &ph_emlrtRSI;
          c_st.site = &wh_emlrtRSI;
          j = b_A->size[0] * b_A->size[1];
          b_A->size[0] = A->size[0];
          b_A->size[1] = A->size[1];
          emxEnsureCapacity_creal_T1(&b_st, b_A, j, &jh_emlrtRTEI);
          i = A->size[0] * A->size[1];
          for (j = 0; j < i; j++) {
            b_A->data[j].re = A->data[j];
            b_A->data[j].im = 0.0;
          }

          c_st.site = &vh_emlrtRSI;
          c_st.site = &uh_emlrtRSI;
          c_st.site = &th_emlrtRSI;
          c_st.site = &sh_emlrtRSI;
          j = V->size[0];
          V->size[0] = A->size[1];
          emxEnsureCapacity_creal_T(&b_st, V, j, &lh_emlrtRTEI);
          c_st.site = &rh_emlrtRSI;
          info_t = LAPACKE_zgeev(102, 'N', 'N', (ptrdiff_t)A->size[1],
            (lapack_complex_double *)&b_A->data[0], (ptrdiff_t)A->size[0],
            (lapack_complex_double *)&V->data[0], (lapack_complex_double *)&vl,
            (ptrdiff_t)1, (lapack_complex_double *)&vr, (ptrdiff_t)1);
          info = (int32_T)info_t;
          c_st.site = &qh_emlrtRSI;
          if (info < 0) {
            if (info == -1010) {
              d_st.site = &bc_emlrtRSI;
              error(&d_st);
            } else {
              d_st.site = &cc_emlrtRSI;
              i_error(&d_st, info);
            }
          }
        }

        emxFree_creal_T(&b_A);
      }

      if (info != 0) {
        st.site = &fg_emlrtRSI;
        d_warning(&st);
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eig.c) */

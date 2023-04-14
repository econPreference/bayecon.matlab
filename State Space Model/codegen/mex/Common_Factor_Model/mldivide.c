/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "mldivide.h"
#include "Common_Factor_Model_data.h"
#include "Common_Factor_Model_emxutil.h"
#include "Common_Factor_Model_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    uf_emlrtRSI =
        {
            20,         /* lineNo */
            "mldivide", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
            "mldivide.m" /* pathName */
};

static emlrtRSInfo
    vf_emlrtRSI =
        {
            42,      /* lineNo */
            "mldiv", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
            "mldivide.m" /* pathName */
};

static emlrtRSInfo wf_emlrtRSI =
    {
        225,          /* lineNo */
        "lusolve2x2", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pathName */
};

static emlrtRTEInfo jf_emlrtRTEI =
    {
        224,       /* lineNo */
        24,        /* colNo */
        "lusolve", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" /* pName */
};

/* Function Definitions */
void b_mldivide(const emlrtStack *sp, const creal_T A[4],
                const emxArray_creal_T *B, emxArray_creal_T *Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const creal_T *B_data;
  creal_T *Y_data;
  real_T B_re_tmp;
  real_T a21_im;
  real_T a21_re;
  real_T a21_re_tmp;
  real_T a22_im;
  real_T a22_re;
  real_T ai;
  real_T ar;
  real_T b_B_re_tmp;
  real_T b_a21_re_tmp;
  real_T bi_tmp;
  real_T bim;
  real_T br_tmp;
  real_T brm;
  real_T d;
  real_T re;
  int32_T B_re_tmp_tmp;
  int32_T k;
  int32_T nb;
  int32_T r1;
  int32_T r2;
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
  B_data = B->data;
  st.site = &uf_emlrtRSI;
  if (B->size[1] == 0) {
    Y->size[0] = 2;
    Y->size[1] = 0;
  } else {
    b_st.site = &vf_emlrtRSI;
    c_st.site = &mf_emlrtRSI;
    if (muDoubleScalarAbs(A[1].re) + muDoubleScalarAbs(A[1].im) >
        muDoubleScalarAbs(A[0].re) + muDoubleScalarAbs(A[0].im)) {
      r1 = 1;
      r2 = 0;
    } else {
      r1 = 0;
      r2 = 1;
    }
    ar = A[r2].re;
    ai = A[r2].im;
    br_tmp = A[r1].re;
    bi_tmp = A[r1].im;
    if (bi_tmp == 0.0) {
      if (ai == 0.0) {
        a21_re = ar / br_tmp;
        a21_im = 0.0;
      } else if (ar == 0.0) {
        a21_re = 0.0;
        a21_im = ai / br_tmp;
      } else {
        a21_re = ar / br_tmp;
        a21_im = ai / br_tmp;
      }
    } else if (br_tmp == 0.0) {
      if (ar == 0.0) {
        a21_re = ai / bi_tmp;
        a21_im = 0.0;
      } else if (ai == 0.0) {
        a21_re = 0.0;
        a21_im = -(ar / bi_tmp);
      } else {
        a21_re = ai / bi_tmp;
        a21_im = -(ar / bi_tmp);
      }
    } else {
      brm = muDoubleScalarAbs(br_tmp);
      bim = muDoubleScalarAbs(bi_tmp);
      if (brm > bim) {
        bim = bi_tmp / br_tmp;
        d = br_tmp + bim * bi_tmp;
        a21_re = (ar + bim * ai) / d;
        a21_im = (ai - bim * ar) / d;
      } else if (bim == brm) {
        if (br_tmp > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        if (bi_tmp > 0.0) {
          d = 0.5;
        } else {
          d = -0.5;
        }
        a21_re = (ar * bim + ai * d) / brm;
        a21_im = (ai * bim - ar * d) / brm;
      } else {
        bim = br_tmp / bi_tmp;
        d = bi_tmp + bim * br_tmp;
        a21_re = (bim * ar + ai) / d;
        a21_im = (bim * ai - ar) / d;
      }
    }
    a21_re_tmp = A[r1 + 2].im;
    b_a21_re_tmp = A[r1 + 2].re;
    a22_re = A[r2 + 2].re - (a21_re * b_a21_re_tmp - a21_im * a21_re_tmp);
    a22_im = A[r2 + 2].im - (a21_re * a21_re_tmp + a21_im * b_a21_re_tmp);
    if (((a22_re == 0.0) && (a22_im == 0.0)) ||
        ((br_tmp == 0.0) && (bi_tmp == 0.0))) {
      d_st.site = &nf_emlrtRSI;
      e_st.site = &pf_emlrtRSI;
      c_warning(&e_st);
    }
    nb = B->size[1];
    B_re_tmp_tmp = Y->size[0] * Y->size[1];
    Y->size[0] = 2;
    Y->size[1] = B->size[1];
    emxEnsureCapacity_creal_T(&c_st, Y, B_re_tmp_tmp, &jf_emlrtRTEI);
    Y_data = Y->data;
    d_st.site = &wf_emlrtRSI;
    if (B->size[1] > 2147483646) {
      e_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (k = 0; k < nb; k++) {
      B_re_tmp_tmp = r1 + 2 * k;
      B_re_tmp = B_data[B_re_tmp_tmp].re;
      b_B_re_tmp = B_data[B_re_tmp_tmp].im;
      B_re_tmp_tmp = r2 + 2 * k;
      ar = B_data[B_re_tmp_tmp].re - (B_re_tmp * a21_re - b_B_re_tmp * a21_im);
      ai = B_data[B_re_tmp_tmp].im - (B_re_tmp * a21_im + b_B_re_tmp * a21_re);
      if (a22_im == 0.0) {
        if (ai == 0.0) {
          re = ar / a22_re;
          bim = 0.0;
        } else if (ar == 0.0) {
          re = 0.0;
          bim = ai / a22_re;
        } else {
          re = ar / a22_re;
          bim = ai / a22_re;
        }
      } else if (a22_re == 0.0) {
        if (ar == 0.0) {
          re = ai / a22_im;
          bim = 0.0;
        } else if (ai == 0.0) {
          re = 0.0;
          bim = -(ar / a22_im);
        } else {
          re = ai / a22_im;
          bim = -(ar / a22_im);
        }
      } else {
        brm = muDoubleScalarAbs(a22_re);
        bim = muDoubleScalarAbs(a22_im);
        if (brm > bim) {
          bim = a22_im / a22_re;
          d = a22_re + bim * a22_im;
          re = (ar + bim * ai) / d;
          bim = (ai - bim * ar) / d;
        } else if (bim == brm) {
          if (a22_re > 0.0) {
            bim = 0.5;
          } else {
            bim = -0.5;
          }
          if (a22_im > 0.0) {
            d = 0.5;
          } else {
            d = -0.5;
          }
          re = (ar * bim + ai * d) / brm;
          bim = (ai * bim - ar * d) / brm;
        } else {
          bim = a22_re / a22_im;
          d = a22_im + bim * a22_re;
          re = (bim * ar + ai) / d;
          bim = (bim * ai - ar) / d;
        }
      }
      B_re_tmp_tmp = 2 * k + 1;
      Y_data[B_re_tmp_tmp].re = re;
      Y_data[B_re_tmp_tmp].im = bim;
      ar = B_re_tmp - (re * b_a21_re_tmp - bim * a21_re_tmp);
      ai = b_B_re_tmp - (re * a21_re_tmp + bim * b_a21_re_tmp);
      if (bi_tmp == 0.0) {
        if (ai == 0.0) {
          Y_data[2 * k].re = ar / br_tmp;
          Y_data[2 * k].im = 0.0;
        } else if (ar == 0.0) {
          Y_data[2 * k].re = 0.0;
          Y_data[2 * k].im = ai / br_tmp;
        } else {
          Y_data[2 * k].re = ar / br_tmp;
          Y_data[2 * k].im = ai / br_tmp;
        }
      } else if (br_tmp == 0.0) {
        if (ar == 0.0) {
          Y_data[2 * k].re = ai / bi_tmp;
          Y_data[2 * k].im = 0.0;
        } else if (ai == 0.0) {
          Y_data[2 * k].re = 0.0;
          Y_data[2 * k].im = -(ar / bi_tmp);
        } else {
          Y_data[2 * k].re = ai / bi_tmp;
          Y_data[2 * k].im = -(ar / bi_tmp);
        }
      } else {
        brm = muDoubleScalarAbs(br_tmp);
        bim = muDoubleScalarAbs(bi_tmp);
        if (brm > bim) {
          bim = bi_tmp / br_tmp;
          d = br_tmp + bim * bi_tmp;
          Y_data[2 * k].re = (ar + bim * ai) / d;
          Y_data[2 * k].im = (ai - bim * ar) / d;
        } else if (bim == brm) {
          if (br_tmp > 0.0) {
            bim = 0.5;
          } else {
            bim = -0.5;
          }
          if (bi_tmp > 0.0) {
            d = 0.5;
          } else {
            d = -0.5;
          }
          Y_data[2 * k].re = (ar * bim + ai * d) / brm;
          Y_data[2 * k].im = (ai * bim - ar * d) / brm;
        } else {
          bim = br_tmp / bi_tmp;
          d = bi_tmp + bim * br_tmp;
          Y_data[2 * k].re = (bim * ar + ai) / d;
          Y_data[2 * k].im = (bim * ai - ar) / d;
        }
      }
    }
  }
}

void mldivide(const emlrtStack *sp, const creal_T A[4], const creal_T B[2],
              creal_T Y[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T B_re_tmp;
  real_T a21_im;
  real_T a21_re;
  real_T a21_re_tmp;
  real_T a22_im;
  real_T a22_re;
  real_T ai;
  real_T ar;
  real_T b_B_re_tmp;
  real_T b_a21_re_tmp;
  real_T bi_tmp;
  real_T br_tmp;
  real_T brm;
  real_T s;
  int32_T r1;
  int32_T r2;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &vf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if (muDoubleScalarAbs(A[1].re) + muDoubleScalarAbs(A[1].im) >
      muDoubleScalarAbs(A[0].re) + muDoubleScalarAbs(A[0].im)) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }
  ar = A[r2].re;
  ai = A[r2].im;
  br_tmp = A[r1].re;
  bi_tmp = A[r1].im;
  if (bi_tmp == 0.0) {
    if (ai == 0.0) {
      a21_re = ar / br_tmp;
      a21_im = 0.0;
    } else if (ar == 0.0) {
      a21_re = 0.0;
      a21_im = ai / br_tmp;
    } else {
      a21_re = ar / br_tmp;
      a21_im = ai / br_tmp;
    }
  } else if (br_tmp == 0.0) {
    if (ar == 0.0) {
      a21_re = ai / bi_tmp;
      a21_im = 0.0;
    } else if (ai == 0.0) {
      a21_re = 0.0;
      a21_im = -(ar / bi_tmp);
    } else {
      a21_re = ai / bi_tmp;
      a21_im = -(ar / bi_tmp);
    }
  } else {
    brm = muDoubleScalarAbs(br_tmp);
    a21_im = muDoubleScalarAbs(bi_tmp);
    if (brm > a21_im) {
      s = bi_tmp / br_tmp;
      a21_im = br_tmp + s * bi_tmp;
      a21_re = (ar + s * ai) / a21_im;
      a21_im = (ai - s * ar) / a21_im;
    } else if (a21_im == brm) {
      if (br_tmp > 0.0) {
        s = 0.5;
      } else {
        s = -0.5;
      }
      if (bi_tmp > 0.0) {
        a21_im = 0.5;
      } else {
        a21_im = -0.5;
      }
      a21_re = (ar * s + ai * a21_im) / brm;
      a21_im = (ai * s - ar * a21_im) / brm;
    } else {
      s = br_tmp / bi_tmp;
      a21_im = bi_tmp + s * br_tmp;
      a21_re = (s * ar + ai) / a21_im;
      a21_im = (s * ai - ar) / a21_im;
    }
  }
  a21_re_tmp = A[r1 + 2].im;
  b_a21_re_tmp = A[r1 + 2].re;
  a22_re = A[r2 + 2].re - (a21_re * b_a21_re_tmp - a21_im * a21_re_tmp);
  a22_im = A[r2 + 2].im - (a21_re * a21_re_tmp + a21_im * b_a21_re_tmp);
  if (((a22_re == 0.0) && (a22_im == 0.0)) ||
      ((br_tmp == 0.0) && (bi_tmp == 0.0))) {
    d_st.site = &nf_emlrtRSI;
    e_st.site = &pf_emlrtRSI;
    c_warning(&e_st);
  }
  B_re_tmp = B[r1].re;
  b_B_re_tmp = B[r1].im;
  ar = B[r2].re - (B_re_tmp * a21_re - b_B_re_tmp * a21_im);
  ai = B[r2].im - (B_re_tmp * a21_im + b_B_re_tmp * a21_re);
  if (a22_im == 0.0) {
    if (ai == 0.0) {
      Y[1].re = ar / a22_re;
      Y[1].im = 0.0;
    } else if (ar == 0.0) {
      Y[1].re = 0.0;
      Y[1].im = ai / a22_re;
    } else {
      Y[1].re = ar / a22_re;
      Y[1].im = ai / a22_re;
    }
  } else if (a22_re == 0.0) {
    if (ar == 0.0) {
      Y[1].re = ai / a22_im;
      Y[1].im = 0.0;
    } else if (ai == 0.0) {
      Y[1].re = 0.0;
      Y[1].im = -(ar / a22_im);
    } else {
      Y[1].re = ai / a22_im;
      Y[1].im = -(ar / a22_im);
    }
  } else {
    brm = muDoubleScalarAbs(a22_re);
    a21_im = muDoubleScalarAbs(a22_im);
    if (brm > a21_im) {
      s = a22_im / a22_re;
      a21_im = a22_re + s * a22_im;
      Y[1].re = (ar + s * ai) / a21_im;
      Y[1].im = (ai - s * ar) / a21_im;
    } else if (a21_im == brm) {
      if (a22_re > 0.0) {
        s = 0.5;
      } else {
        s = -0.5;
      }
      if (a22_im > 0.0) {
        a21_im = 0.5;
      } else {
        a21_im = -0.5;
      }
      Y[1].re = (ar * s + ai * a21_im) / brm;
      Y[1].im = (ai * s - ar * a21_im) / brm;
    } else {
      s = a22_re / a22_im;
      a21_im = a22_im + s * a22_re;
      Y[1].re = (s * ar + ai) / a21_im;
      Y[1].im = (s * ai - ar) / a21_im;
    }
  }
  ar = B_re_tmp - (Y[1].re * b_a21_re_tmp - Y[1].im * a21_re_tmp);
  ai = b_B_re_tmp - (Y[1].re * a21_re_tmp + Y[1].im * b_a21_re_tmp);
  if (bi_tmp == 0.0) {
    if (ai == 0.0) {
      Y[0].re = ar / br_tmp;
      Y[0].im = 0.0;
    } else if (ar == 0.0) {
      Y[0].re = 0.0;
      Y[0].im = ai / br_tmp;
    } else {
      Y[0].re = ar / br_tmp;
      Y[0].im = ai / br_tmp;
    }
  } else if (br_tmp == 0.0) {
    if (ar == 0.0) {
      Y[0].re = ai / bi_tmp;
      Y[0].im = 0.0;
    } else if (ai == 0.0) {
      Y[0].re = 0.0;
      Y[0].im = -(ar / bi_tmp);
    } else {
      Y[0].re = ai / bi_tmp;
      Y[0].im = -(ar / bi_tmp);
    }
  } else {
    brm = muDoubleScalarAbs(br_tmp);
    a21_im = muDoubleScalarAbs(bi_tmp);
    if (brm > a21_im) {
      s = bi_tmp / br_tmp;
      a21_im = br_tmp + s * bi_tmp;
      Y[0].re = (ar + s * ai) / a21_im;
      Y[0].im = (ai - s * ar) / a21_im;
    } else if (a21_im == brm) {
      if (br_tmp > 0.0) {
        s = 0.5;
      } else {
        s = -0.5;
      }
      if (bi_tmp > 0.0) {
        a21_im = 0.5;
      } else {
        a21_im = -0.5;
      }
      Y[0].re = (ar * s + ai * a21_im) / brm;
      Y[0].im = (ai * s - ar * a21_im) / brm;
    } else {
      s = br_tmp / bi_tmp;
      a21_im = bi_tmp + s * br_tmp;
      Y[0].re = (s * ar + ai) / a21_im;
      Y[0].im = (s * ai - ar) / a21_im;
    }
  }
}

/* End of code generation (mldivide.c) */

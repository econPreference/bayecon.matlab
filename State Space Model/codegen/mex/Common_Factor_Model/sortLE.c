/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortLE.c
 *
 * Code generation for function 'sortLE'
 *
 */

/* Include files */
#include "sortLE.h"
#include "Common_Factor_Model_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
boolean_T sortLE(const emxArray_creal_T *v, int32_T idx1, int32_T idx2)
{
  const creal_T *v_data;
  real_T ai;
  real_T ar;
  real_T bi;
  real_T br;
  real_T x;
  boolean_T SCALEA;
  boolean_T SCALEB;
  boolean_T p;
  v_data = v->data;
  if (muDoubleScalarIsNaN(v_data[idx2 - 1].re) ||
      muDoubleScalarIsNaN(v_data[idx2 - 1].im)) {
    p = true;
  } else if (muDoubleScalarIsNaN(v_data[idx1 - 1].re) ||
             muDoubleScalarIsNaN(v_data[idx1 - 1].im)) {
    p = false;
  } else {
    if ((muDoubleScalarAbs(v_data[idx1 - 1].re) > 8.9884656743115785E+307) ||
        (muDoubleScalarAbs(v_data[idx1 - 1].im) > 8.9884656743115785E+307)) {
      SCALEA = true;
    } else {
      SCALEA = false;
    }
    if ((muDoubleScalarAbs(v_data[idx2 - 1].re) > 8.9884656743115785E+307) ||
        (muDoubleScalarAbs(v_data[idx2 - 1].im) > 8.9884656743115785E+307)) {
      SCALEB = true;
    } else {
      SCALEB = false;
    }
    if (SCALEA || SCALEB) {
      x = muDoubleScalarHypot(v_data[idx1 - 1].re / 2.0,
                              v_data[idx1 - 1].im / 2.0);
      bi = muDoubleScalarHypot(v_data[idx2 - 1].re / 2.0,
                               v_data[idx2 - 1].im / 2.0);
    } else {
      x = muDoubleScalarHypot(v_data[idx1 - 1].re, v_data[idx1 - 1].im);
      bi = muDoubleScalarHypot(v_data[idx2 - 1].re, v_data[idx2 - 1].im);
    }
    if (x == bi) {
      x = muDoubleScalarAtan2(v_data[idx1 - 1].im, v_data[idx1 - 1].re);
      bi = muDoubleScalarAtan2(v_data[idx2 - 1].im, v_data[idx2 - 1].re);
      if (x == bi) {
        ar = v_data[idx1 - 1].re;
        ai = v_data[idx1 - 1].im;
        br = v_data[idx2 - 1].re;
        bi = v_data[idx2 - 1].im;
        if (ar != br) {
          if (x >= 0.0) {
            x = br;
            bi = ar;
          } else {
            x = ar;
            bi = br;
          }
        } else if (ar < 0.0) {
          x = bi;
          bi = ai;
        } else {
          x = ai;
        }
        if (x == bi) {
          x = 0.0;
          bi = 0.0;
        }
      }
    }
    p = (x <= bi);
  }
  return p;
}

/* End of code generation (sortLE.c) */

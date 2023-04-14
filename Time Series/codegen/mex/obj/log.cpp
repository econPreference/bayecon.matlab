/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * log.cpp
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "obj.h"
#include "log.h"

/* Function Definitions */
void b_log(creal_T *x)
{
  real_T x_im;
  real_T x_re;
  if (x->im == 0.0) {
    if (x->re < 0.0) {
      x->re = muDoubleScalarLog(muDoubleScalarAbs(x->re));
      x->im = 3.1415926535897931;
    } else {
      x->re = muDoubleScalarLog(muDoubleScalarAbs(x->re));
      x->im = 0.0;
    }
  } else if ((muDoubleScalarAbs(x->re) > 8.9884656743115785E+307) ||
             (muDoubleScalarAbs(x->im) > 8.9884656743115785E+307)) {
    x_im = x->im;
    x_re = x->re;
    x->re = muDoubleScalarLog(muDoubleScalarHypot(x->re / 2.0, x->im / 2.0)) +
      0.69314718055994529;
    x->im = muDoubleScalarAtan2(x_im, x_re);
  } else {
    x_im = x->im;
    x_re = x->re;
    x->re = muDoubleScalarLog(muDoubleScalarHypot(x->re, x->im));
    x->im = muDoubleScalarAtan2(x_im, x_re);
  }
}

/* End of code generation (log.cpp) */

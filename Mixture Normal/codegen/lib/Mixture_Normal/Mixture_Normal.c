/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Mixture_Normal.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "Mixture_Normal_emxutil.h"
#include "vec.h"
#include "Gen_Omega.h"
#include "Gen_beta.h"
#include "Gen_S.h"
#include "meanc.h"
#include "lnpdfmvn.h"
#include "maxc.h"
#include "minc.h"
#include "MHout.h"
#include <stdio.h>

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *Y
 *                double M
 *                const emxArray_real_T *bm_
 *                const emxArray_real_T *varm_
 *                emxArray_real_T *Omegam
 *                double n0
 *                double n1
 *                const double plot[2]
 *                struct0_T *Output
 * Return Type  : void
 */
void Mixture_Normal(const emxArray_real_T *Y, double M, const emxArray_real_T
                    *bm_, const emxArray_real_T *varm_, emxArray_real_T *Omegam,
                    double n0, double n1, const double plot[2], struct0_T
                    *Output)
{
  emxArray_real_T *betam;
  double n;
  int i0;
  int loop_ub;
  emxArray_real_T *Post_betam;
  emxArray_real_T *Post_Omegam;
  double ndbl;
  emxArray_real_T *Sm;
  int iter;
  emxArray_real_T *beta;
  emxArray_real_T *S;
  emxArray_real_T *Omega;
  emxArray_real_T *vec_betam;
  emxArray_real_T *Omega_hat;
  emxArray_int32_T *r0;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_varm_;
  int i1;
  int nm1d2;
  int m;
  int b_loop_ub;
  int b_Post_Omegam;
  emxArray_real_T *c_Post_Omegam;
  emxArray_real_T *Post_beta;
  emxArray_real_T *mu;
  double a;
  emxArray_real_T *x;
  double apnd;
  double cdiff;
  double absa;
  double absb;
  emxArray_real_T *y;
  emxArray_real_T *b_vec_betam;
  double b_mu[2];
  double b_Omega_hat[4];
  emxInit_real_T(&betam, 2);

  /*  number of columns */
  n = n0 + n1;
  i0 = betam->size[0] * betam->size[1];
  betam->size[0] = bm_->size[0];
  betam->size[1] = bm_->size[1];
  emxEnsureCapacity_real_T(betam, i0);
  loop_ub = bm_->size[0] * bm_->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    betam->data[i0] = bm_->data[i0];
  }

  emxInit_real_T(&Post_betam, 2);
  i0 = Post_betam->size[0] * Post_betam->size[1];
  Post_betam->size[0] = (int)n;
  Post_betam->size[1] = (int)(M * (double)Y->size[1]);
  emxEnsureCapacity_real_T(Post_betam, i0);
  loop_ub = (int)n * (int)(M * (double)Y->size[1]);
  for (i0 = 0; i0 < loop_ub; i0++) {
    Post_betam->data[i0] = 0.0;
  }

  emxInit_real_T2(&Post_Omegam, 3);
  ndbl = (double)Y->size[1] * (double)Y->size[1];
  i0 = Post_Omegam->size[0] * Post_Omegam->size[1] * Post_Omegam->size[2];
  Post_Omegam->size[0] = (int)n;
  Post_Omegam->size[1] = (int)ndbl;
  Post_Omegam->size[2] = (int)M;
  emxEnsureCapacity_real_T1(Post_Omegam, i0);
  loop_ub = (int)n * (int)ndbl * (int)M;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Post_Omegam->data[i0] = 0.0;
  }

  emxInit_real_T(&Sm, 2);
  i0 = Sm->size[0] * Sm->size[1];
  Sm->size[0] = (int)n;
  Sm->size[1] = Y->size[0];
  emxEnsureCapacity_real_T(Sm, i0);
  loop_ub = (int)n * Y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Sm->data[i0] = 0.0;
  }

  iter = 0;
  emxInit_real_T1(&beta, 1);
  emxInit_real_T1(&S, 1);
  emxInit_real_T(&Omega, 2);
  emxInit_real_T(&vec_betam, 2);
  emxInit_real_T(&Omega_hat, 2);
  emxInit_int32_T(&r0, 1);
  emxInit_real_T1(&b_Y, 1);
  emxInit_real_T1(&b_varm_, 1);
  while (iter <= (int)n - 1) {
    /*  y = x*b + resid */
    /*  x and b are both integer, and resid is positive */
    /*  ¸ò x¿Í ³ª¸ÓÁö resid¸¦ »êÃâ */
    /*      if resid == 0 */
    /*         resid = b; */
    /*         x = x - 1; */
    /*      end */
    if ((1.0 + (double)iter) - floor((1.0 + (double)iter) / 100.0) * 100.0 ==
        0.0) {
      printf("Current iteration: %G\n", 1.0 + (double)iter);
      fflush(stdout);
      for (b_loop_ub = 0; b_loop_ub < (int)M; b_loop_ub++) {
        printf("[Gruop %G\n]", 1.0 + (double)b_loop_ub);
        fflush(stdout);
      }
    }

    /*     %% s »ùÇÃ¸µ */
    Gen_S(Y, betam, Omegam, S);
    loop_ub = S->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Sm->data[iter + Sm->size[0] * i0] = S->data[i0];
    }

    for (m = 0; m < (int)M; m++) {
      b_Post_Omegam = S->size[0] - 1;
      nm1d2 = 0;
      for (b_loop_ub = 0; b_loop_ub <= b_Post_Omegam; b_loop_ub++) {
        if (S->data[b_loop_ub] == 1.0 + (double)m) {
          nm1d2++;
        }
      }

      i0 = r0->size[0];
      r0->size[0] = nm1d2;
      emxEnsureCapacity_int32_T(r0, i0);
      nm1d2 = 0;
      for (b_loop_ub = 0; b_loop_ub <= b_Post_Omegam; b_loop_ub++) {
        if (S->data[b_loop_ub] == 1.0 + (double)m) {
          r0->data[nm1d2] = b_loop_ub + 1;
          nm1d2++;
        }
      }

      loop_ub = Y->size[1];
      i0 = Omega_hat->size[0] * Omega_hat->size[1];
      Omega_hat->size[0] = r0->size[0];
      Omega_hat->size[1] = loop_ub;
      emxEnsureCapacity_real_T(Omega_hat, i0);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = r0->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Omega_hat->data[i1 + Omega_hat->size[0] * i0] = Y->data[(r0->data[i1]
            + Y->size[0] * i0) - 1];
        }
      }

      /*         %% m »ùÇÃ¸µ */
      loop_ub = Omegam->size[0];
      b_loop_ub = Omegam->size[1];
      i0 = Omega->size[0] * Omega->size[1];
      Omega->size[0] = loop_ub;
      Omega->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(Omega, i0);
      for (i0 = 0; i0 < b_loop_ub; i0++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Omega->data[i1 + Omega->size[0] * i0] = Omegam->data[(i1 +
            Omegam->size[0] * i0) + Omegam->size[0] * Omegam->size[1] * m];
        }
      }

      loop_ub = bm_->size[0];
      i0 = b_Y->size[0];
      b_Y->size[0] = loop_ub;
      emxEnsureCapacity_real_T2(b_Y, i0);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_Y->data[i0] = bm_->data[i0 + bm_->size[0] * m];
      }

      loop_ub = varm_->size[0];
      i0 = b_varm_->size[0];
      b_varm_->size[0] = loop_ub;
      emxEnsureCapacity_real_T2(b_varm_, i0);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_varm_->data[i0] = varm_->data[i0 + varm_->size[0] * m];
      }

      Gen_beta(Omega_hat, Omega, b_Y, b_varm_, beta);
      loop_ub = beta->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        betam->data[i0 + betam->size[0] * m] = beta->data[i0];
      }

      /*         %% Omega »ùÇÃ¸µ */
      loop_ub = betam->size[0];
      i0 = b_Y->size[0];
      b_Y->size[0] = loop_ub;
      emxEnsureCapacity_real_T2(b_Y, i0);
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_Y->data[i0] = betam->data[i0 + betam->size[0] * m];
      }

      Gen_Omega(Omega_hat, b_Y, Omega);
      loop_ub = Omega->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = Omega->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Omegam->data[(i1 + Omegam->size[0] * i0) + Omegam->size[0] *
            Omegam->size[1] * m] = Omega->data[i1 + Omega->size[0] * i0];
        }
      }

      vec(Omega);
      i0 = Omega_hat->size[0] * Omega_hat->size[1];
      Omega_hat->size[0] = Omega->size[1];
      Omega_hat->size[1] = Omega->size[0];
      emxEnsureCapacity_real_T(Omega_hat, i0);
      loop_ub = Omega->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_loop_ub = Omega->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Omega_hat->data[i1 + Omega_hat->size[0] * i0] = Omega->data[i0 +
            Omega->size[0] * i1];
        }
      }

      loop_ub = Omega_hat->size[1] - 1;
      for (i0 = 0; i0 <= loop_ub; i0++) {
        Post_Omegam->data[(iter + Post_Omegam->size[0] * i0) + Post_Omegam->
          size[0] * Post_Omegam->size[1] * m] = Omega_hat->data[Omega_hat->size
          [0] * i0];
      }
    }

    i0 = Omega_hat->size[0] * Omega_hat->size[1];
    Omega_hat->size[0] = betam->size[0];
    Omega_hat->size[1] = betam->size[1];
    emxEnsureCapacity_real_T(Omega_hat, i0);
    loop_ub = betam->size[0] * betam->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Omega_hat->data[i0] = betam->data[i0];
    }

    vec(Omega_hat);
    i0 = vec_betam->size[0] * vec_betam->size[1];
    vec_betam->size[0] = Omega_hat->size[1];
    vec_betam->size[1] = Omega_hat->size[0];
    emxEnsureCapacity_real_T(vec_betam, i0);
    loop_ub = Omega_hat->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = Omega_hat->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        vec_betam->data[i1 + vec_betam->size[0] * i0] = Omega_hat->data[i0 +
          Omega_hat->size[0] * i1];
      }
    }

    loop_ub = vec_betam->size[1] - 1;
    for (i0 = 0; i0 <= loop_ub; i0++) {
      Post_betam->data[iter + Post_betam->size[0] * i0] = vec_betam->
        data[vec_betam->size[0] * i0];
    }

    iter++;
  }

  emxFree_real_T(&b_varm_);
  emxFree_int32_T(&r0);
  emxFree_real_T(&S);
  emxFree_real_T(&beta);
  emxFree_real_T(&betam);
  if (n0 + 1.0 > n) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)(n0 + 1.0) - 1;
    i1 = (int)n;
  }

  nm1d2 = Post_betam->size[1];
  m = Omega->size[0] * Omega->size[1];
  Omega->size[0] = i1 - i0;
  Omega->size[1] = nm1d2;
  emxEnsureCapacity_real_T(Omega, m);
  for (m = 0; m < nm1d2; m++) {
    loop_ub = i1 - i0;
    for (iter = 0; iter < loop_ub; iter++) {
      Omega->data[iter + Omega->size[0] * m] = Post_betam->data[(i0 + iter) +
        Post_betam->size[0] * m];
    }
  }

  i0 = Post_betam->size[0] * Post_betam->size[1];
  Post_betam->size[0] = Omega->size[0];
  Post_betam->size[1] = Omega->size[1];
  emxEnsureCapacity_real_T(Post_betam, i0);
  loop_ub = Omega->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = Omega->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Post_betam->data[i1 + Post_betam->size[0] * i0] = Omega->data[i1 +
        Omega->size[0] * i0];
    }
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)(n0 + 1.0) - 1;
    i1 = (int)n;
  }

  nm1d2 = Sm->size[1];
  m = Omega->size[0] * Omega->size[1];
  Omega->size[0] = i1 - i0;
  Omega->size[1] = nm1d2;
  emxEnsureCapacity_real_T(Omega, m);
  for (m = 0; m < nm1d2; m++) {
    loop_ub = i1 - i0;
    for (iter = 0; iter < loop_ub; iter++) {
      Omega->data[iter + Omega->size[0] * m] = Sm->data[(i0 + iter) + Sm->size[0]
        * m];
    }
  }

  i0 = Sm->size[0] * Sm->size[1];
  Sm->size[0] = Omega->size[0];
  Sm->size[1] = Omega->size[1];
  emxEnsureCapacity_real_T(Sm, i0);
  loop_ub = Omega->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = Omega->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Sm->data[i1 + Sm->size[0] * i0] = Omega->data[i1 + Omega->size[0] * i0];
    }
  }

  if (n0 + 1.0 > n) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)(n0 + 1.0) - 1;
    i1 = (int)n;
  }

  emxInit_real_T2(&c_Post_Omegam, 3);
  nm1d2 = Post_Omegam->size[1];
  b_Post_Omegam = Post_Omegam->size[2];
  m = c_Post_Omegam->size[0] * c_Post_Omegam->size[1] * c_Post_Omegam->size[2];
  c_Post_Omegam->size[0] = i1 - i0;
  c_Post_Omegam->size[1] = nm1d2;
  c_Post_Omegam->size[2] = b_Post_Omegam;
  emxEnsureCapacity_real_T1(c_Post_Omegam, m);
  for (m = 0; m < b_Post_Omegam; m++) {
    for (iter = 0; iter < nm1d2; iter++) {
      loop_ub = i1 - i0;
      for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
        c_Post_Omegam->data[(b_loop_ub + c_Post_Omegam->size[0] * iter) +
          c_Post_Omegam->size[0] * c_Post_Omegam->size[1] * m] =
          Post_Omegam->data[((i0 + b_loop_ub) + Post_Omegam->size[0] * iter) +
          Post_Omegam->size[0] * Post_Omegam->size[1] * m];
      }
    }
  }

  i0 = Post_Omegam->size[0] * Post_Omegam->size[1] * Post_Omegam->size[2];
  Post_Omegam->size[0] = c_Post_Omegam->size[0];
  Post_Omegam->size[1] = c_Post_Omegam->size[1];
  Post_Omegam->size[2] = c_Post_Omegam->size[2];
  emxEnsureCapacity_real_T1(Post_Omegam, i0);
  loop_ub = c_Post_Omegam->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = c_Post_Omegam->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      nm1d2 = c_Post_Omegam->size[0];
      for (m = 0; m < nm1d2; m++) {
        Post_Omegam->data[(m + Post_Omegam->size[0] * i1) + Post_Omegam->size[0]
          * Post_Omegam->size[1] * i0] = c_Post_Omegam->data[(m +
          c_Post_Omegam->size[0] * i1) + c_Post_Omegam->size[0] *
          c_Post_Omegam->size[1] * i0];
      }
    }
  }

  emxFree_real_T(&c_Post_Omegam);
  emxInit_real_T(&Post_beta, 2);
  MHout(Post_betam, Post_beta);
  ndbl = (double)Y->size[1] * (double)Y->size[1];
  i0 = Omega_hat->size[0] * Omega_hat->size[1];
  Omega_hat->size[0] = (int)ndbl;
  Omega_hat->size[1] = (int)M;
  emxEnsureCapacity_real_T(Omega_hat, i0);
  loop_ub = (int)ndbl * (int)M;
  for (i0 = 0; i0 < loop_ub; i0++) {
    Omega_hat->data[i0] = 0.0;
  }

  for (m = 0; m < (int)M; m++) {
    loop_ub = Post_Omegam->size[0];
    b_loop_ub = Post_Omegam->size[1];
    i0 = Omega->size[0] * Omega->size[1];
    Omega->size[0] = loop_ub;
    Omega->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(Omega, i0);
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Omega->data[i1 + Omega->size[0] * i0] = Post_Omegam->data[(i1 +
          Post_Omegam->size[0] * i0) + Post_Omegam->size[0] * Post_Omegam->size
          [1] * m];
      }
    }

    meanc(Omega, b_Y);
    loop_ub = b_Y->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Omega_hat->data[i0 + Omega_hat->size[0] * m] = b_Y->data[i0];
    }
  }

  if (1 > Y->size[1]) {
    loop_ub = 0;
  } else {
    loop_ub = Y->size[1];
  }

  emxInit_real_T(&mu, 2);
  i0 = mu->size[0] * mu->size[1];
  mu->size[0] = 1;
  mu->size[1] = loop_ub;
  emxEnsureCapacity_real_T(mu, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    mu->data[mu->size[0] * i0] = Post_beta->data[i0 + Post_beta->size[0]];
  }

  emxFree_real_T(&Post_beta);

  /* // data */
  /* // data */
  loop_ub = Y->size[0];
  i0 = b_Y->size[0];
  b_Y->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(b_Y, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Y->data[i0] = Y->data[i0 + Y->size[0] * ((int)(unsigned int)plot[0] - 1)];
  }

  a = minc(b_Y);
  loop_ub = Y->size[0];
  i0 = b_Y->size[0];
  b_Y->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(b_Y, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Y->data[i0] = Y->data[i0 + Y->size[0] * ((int)(unsigned int)plot[0] - 1)];
  }

  n = maxc(b_Y);
  emxInit_real_T(&x, 2);
  if (rtIsNaN(a) || rtIsNaN(n)) {
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = 1;
    emxEnsureCapacity_real_T(x, i0);
    x->data[0] = rtNaN;
  } else if (n < a) {
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = 0;
    emxEnsureCapacity_real_T(x, i0);
  } else if ((rtIsInf(a) || rtIsInf(n)) && (a == n)) {
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = 1;
    emxEnsureCapacity_real_T(x, i0);
    x->data[0] = rtNaN;
  } else {
    ndbl = floor((n - a) / 0.001 + 0.5);
    apnd = a + ndbl * 0.001;
    cdiff = apnd - n;
    absa = fabs(a);
    absb = fabs(n);
    if ((absa > absb) || rtIsNaN(absb)) {
      absb = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * absb) {
      ndbl++;
      apnd = n;
    } else if (cdiff > 0.0) {
      apnd = a + (ndbl - 1.0) * 0.001;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      b_Post_Omegam = (int)ndbl;
    } else {
      b_Post_Omegam = 0;
    }

    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = b_Post_Omegam;
    emxEnsureCapacity_real_T(x, i0);
    if (b_Post_Omegam > 0) {
      x->data[0] = a;
      if (b_Post_Omegam > 1) {
        x->data[b_Post_Omegam - 1] = apnd;
        nm1d2 = (b_Post_Omegam - 1) / 2;
        for (b_loop_ub = 1; b_loop_ub < nm1d2; b_loop_ub++) {
          n = (double)b_loop_ub * 0.001;
          x->data[b_loop_ub] = a + n;
          x->data[(b_Post_Omegam - b_loop_ub) - 1] = apnd - n;
        }

        if (nm1d2 << 1 == b_Post_Omegam - 1) {
          x->data[nm1d2] = (a + apnd) / 2.0;
        } else {
          n = (double)nm1d2 * 0.001;
          x->data[nm1d2] = a + n;
          x->data[nm1d2 + 1] = apnd - n;
        }
      }
    }
  }

  /* // x axis */
  loop_ub = Y->size[0];
  i0 = b_Y->size[0];
  b_Y->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(b_Y, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Y->data[i0] = Y->data[i0 + Y->size[0] * ((int)(unsigned int)plot[1] - 1)];
  }

  a = minc(b_Y);
  loop_ub = Y->size[0];
  i0 = b_Y->size[0];
  b_Y->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(b_Y, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Y->data[i0] = Y->data[i0 + Y->size[0] * ((int)(unsigned int)plot[1] - 1)];
  }

  n = maxc(b_Y);
  emxInit_real_T(&y, 2);
  if (rtIsNaN(a) || rtIsNaN(n)) {
    i0 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i0);
    y->data[0] = rtNaN;
  } else if (n < a) {
    i0 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 0;
    emxEnsureCapacity_real_T(y, i0);
  } else if ((rtIsInf(a) || rtIsInf(n)) && (a == n)) {
    i0 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i0);
    y->data[0] = rtNaN;
  } else {
    ndbl = floor((n - a) / 0.001 + 0.5);
    apnd = a + ndbl * 0.001;
    cdiff = apnd - n;
    absa = fabs(a);
    absb = fabs(n);
    if ((absa > absb) || rtIsNaN(absb)) {
      absb = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * absb) {
      ndbl++;
      apnd = n;
    } else if (cdiff > 0.0) {
      apnd = a + (ndbl - 1.0) * 0.001;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      b_Post_Omegam = (int)ndbl;
    } else {
      b_Post_Omegam = 0;
    }

    i0 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = b_Post_Omegam;
    emxEnsureCapacity_real_T(y, i0);
    if (b_Post_Omegam > 0) {
      y->data[0] = a;
      if (b_Post_Omegam > 1) {
        y->data[b_Post_Omegam - 1] = apnd;
        nm1d2 = (b_Post_Omegam - 1) / 2;
        for (b_loop_ub = 1; b_loop_ub < nm1d2; b_loop_ub++) {
          n = (double)b_loop_ub * 0.001;
          y->data[b_loop_ub] = a + n;
          y->data[(b_Post_Omegam - b_loop_ub) - 1] = apnd - n;
        }

        if (nm1d2 << 1 == b_Post_Omegam - 1) {
          y->data[nm1d2] = (a + apnd) / 2.0;
        } else {
          n = (double)nm1d2 * 0.001;
          y->data[nm1d2] = a + n;
          y->data[nm1d2 + 1] = apnd - n;
        }
      }
    }
  }

  /* // y axis */
  nm1d2 = y->size[1];
  b_loop_ub = x->size[1];
  i0 = vec_betam->size[0] * vec_betam->size[1];
  vec_betam->size[0] = nm1d2;
  vec_betam->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(vec_betam, i0);
  nm1d2 = y->size[1];
  b_loop_ub = x->size[1];
  i0 = Omega->size[0] * Omega->size[1];
  Omega->size[0] = nm1d2;
  Omega->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(Omega, i0);
  if ((x->size[1] == 0) || (y->size[1] == 0)) {
  } else {
    for (nm1d2 = 0; nm1d2 < x->size[1]; nm1d2++) {
      for (b_loop_ub = 0; b_loop_ub < y->size[1]; b_loop_ub++) {
        vec_betam->data[b_loop_ub + vec_betam->size[0] * nm1d2] = x->data[nm1d2];
        Omega->data[b_loop_ub + Omega->size[0] * nm1d2] = y->data[b_loop_ub];
      }
    }
  }

  emxInit_real_T(&b_vec_betam, 2);

  /* // all combinations of x, y */
  nm1d2 = vec_betam->size[0] * vec_betam->size[1];
  b_loop_ub = Omega->size[0] * Omega->size[1];
  i0 = b_vec_betam->size[0] * b_vec_betam->size[1];
  b_vec_betam->size[0] = 2;
  b_vec_betam->size[1] = nm1d2;
  emxEnsureCapacity_real_T(b_vec_betam, i0);
  for (i0 = 0; i0 < nm1d2; i0++) {
    b_vec_betam->data[b_vec_betam->size[0] * i0] = vec_betam->data[i0];
  }

  for (i0 = 0; i0 < b_loop_ub; i0++) {
    b_vec_betam->data[1 + b_vec_betam->size[0] * i0] = Omega->data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_mu[i0] = mu->data[mu->size[0] * ((int)plot[i0] - 1)];
  }

  emxFree_real_T(&mu);
  loop_ub = Omega_hat->size[0];
  i0 = b_Y->size[0];
  b_Y->size[0] = loop_ub;
  emxEnsureCapacity_real_T2(b_Y, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Y->data[i0] = Omega_hat->data[i0];
  }

  nm1d2 = Y->size[1];
  for (i0 = 0; i0 < 2; i0++) {
    for (i1 = 0; i1 < 2; i1++) {
      b_Omega_hat[i1 + (i0 << 1)] = b_Y->data[((int)plot[i0] + nm1d2 * ((int)
        plot[i1] - 1)) - 1];
    }
  }

  emxFree_real_T(&b_Y);
  n = b_lnpdfmvn(b_vec_betam, b_mu, b_Omega_hat);

  /* // compute Gaussian pdf */
  /* // put into same size as X, Y */
  i0 = Output->mum->size[0] * Output->mum->size[1];
  Output->mum->size[0] = Post_betam->size[0];
  Output->mum->size[1] = Post_betam->size[1];
  emxEnsureCapacity_real_T(Output->mum, i0);
  loop_ub = Post_betam->size[0] * Post_betam->size[1];
  emxFree_real_T(&b_vec_betam);
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->mum->data[i0] = Post_betam->data[i0];
  }

  emxFree_real_T(&Post_betam);
  i0 = Output->Sm->size[0] * Output->Sm->size[1];
  Output->Sm->size[0] = Sm->size[0];
  Output->Sm->size[1] = Sm->size[1];
  emxEnsureCapacity_real_T(Output->Sm, i0);
  loop_ub = Sm->size[0] * Sm->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Sm->data[i0] = Sm->data[i0];
  }

  emxFree_real_T(&Sm);
  i0 = Output->Sigmam->size[0] * Output->Sigmam->size[1] * Output->Sigmam->size
    [2];
  Output->Sigmam->size[0] = Post_Omegam->size[0];
  Output->Sigmam->size[1] = Post_Omegam->size[1];
  Output->Sigmam->size[2] = Post_Omegam->size[2];
  emxEnsureCapacity_real_T1(Output->Sigmam, i0);
  loop_ub = Post_Omegam->size[0] * Post_Omegam->size[1] * Post_Omegam->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Sigmam->data[i0] = Post_Omegam->data[i0];
  }

  emxFree_real_T(&Post_Omegam);
  i0 = Output->Xa->size[0] * Output->Xa->size[1];
  Output->Xa->size[0] = vec_betam->size[0];
  Output->Xa->size[1] = vec_betam->size[1];
  emxEnsureCapacity_real_T(Output->Xa, i0);
  loop_ub = vec_betam->size[0] * vec_betam->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Xa->data[i0] = vec_betam->data[i0];
  }

  emxFree_real_T(&vec_betam);
  i0 = Output->Ya->size[0] * Output->Ya->size[1];
  Output->Ya->size[0] = Omega->size[0];
  Output->Ya->size[1] = Omega->size[1];
  emxEnsureCapacity_real_T(Output->Ya, i0);
  loop_ub = Omega->size[0] * Omega->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Ya->data[i0] = Omega->data[i0];
  }

  emxFree_real_T(&Omega);
  Output->Z = exp(n);
  for (b_loop_ub = 0; b_loop_ub < 2; b_loop_ub++) {
    Output->plot[b_loop_ub] = plot[b_loop_ub];
  }

  i0 = Output->Omega_hat->size[0] * Output->Omega_hat->size[1];
  Output->Omega_hat->size[0] = Omega_hat->size[0];
  Output->Omega_hat->size[1] = Omega_hat->size[1];
  emxEnsureCapacity_real_T(Output->Omega_hat, i0);
  loop_ub = Omega_hat->size[0] * Omega_hat->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->Omega_hat->data[i0] = Omega_hat->data[i0];
  }

  emxFree_real_T(&Omega_hat);
  i0 = Output->x->size[0] * Output->x->size[1];
  Output->x->size[0] = 1;
  Output->x->size[1] = x->size[1];
  emxEnsureCapacity_real_T(Output->x, i0);
  loop_ub = x->size[0] * x->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->x->data[i0] = x->data[i0];
  }

  emxFree_real_T(&x);
  i0 = Output->y->size[0] * Output->y->size[1];
  Output->y->size[0] = 1;
  Output->y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(Output->y, i0);
  loop_ub = y->size[0] * y->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Output->y->data[i0] = y->data[i0];
  }

  emxFree_real_T(&y);
}

/*
 * File trailer for Mixture_Normal.c
 *
 * [EOF]
 */

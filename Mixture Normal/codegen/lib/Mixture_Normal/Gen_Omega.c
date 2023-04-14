/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Gen_Omega.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "Gen_Omega.h"
#include "Mixture_Normal_emxutil.h"
#include "inv.h"
#include "randn.h"
#include "cholmod.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *Y
 *                const emxArray_real_T *beta
 *                emxArray_real_T *Omega
 * Return Type  : void
 */
void Gen_Omega(const emxArray_real_T *Y, const emxArray_real_T *beta,
               emxArray_real_T *Omega)
{
  emxArray_real_T *B;
  int aoffset;
  int boffset;
  emxArray_real_T *Y_;
  int kidx;
  int coffset;
  emxArray_real_T *Omega1;
  emxArray_real_T *ehat2;
  int m;
  int inner;
  int i;
  int k;
  emxArray_real_T *Omega_inv;
  emxInit_real_T(&B, 2);
  aoffset = B->size[0] * B->size[1];
  B->size[0] = 1;
  B->size[1] = beta->size[0];
  emxEnsureCapacity_real_T(B, aoffset);
  boffset = beta->size[0];
  for (aoffset = 0; aoffset < boffset; aoffset++) {
    B->data[B->size[0] * aoffset] = beta->data[aoffset];
  }

  emxInit_real_T(&Y_, 2);
  kidx = Y->size[0];
  boffset = B->size[1];
  aoffset = Y_->size[0] * Y_->size[1];
  Y_->size[0] = kidx;
  Y_->size[1] = boffset;
  emxEnsureCapacity_real_T(Y_, aoffset);
  kidx = -1;
  for (boffset = 1; boffset <= B->size[1]; boffset++) {
    for (coffset = 1; coffset <= Y->size[0]; coffset++) {
      kidx++;
      Y_->data[kidx] = B->data[B->size[0] * (boffset - 1)];
    }
  }

  emxFree_real_T(&B);
  boffset = Y->size[0] * Y->size[1] - 1;
  aoffset = Y_->size[0] * Y_->size[1];
  Y_->size[0] = Y->size[0];
  Y_->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(Y_, aoffset);
  for (aoffset = 0; aoffset <= boffset; aoffset++) {
    Y_->data[aoffset] = Y->data[aoffset] - Y_->data[aoffset];
  }

  emxInit_real_T(&Omega1, 2);
  aoffset = Omega1->size[0] * Omega1->size[1];
  Omega1->size[0] = Y_->size[1];
  Omega1->size[1] = Y_->size[0];
  emxEnsureCapacity_real_T(Omega1, aoffset);
  boffset = Y_->size[0];
  for (aoffset = 0; aoffset < boffset; aoffset++) {
    kidx = Y_->size[1];
    for (coffset = 0; coffset < kidx; coffset++) {
      Omega1->data[coffset + Omega1->size[0] * aoffset] = Y_->data[aoffset +
        Y_->size[0] * coffset];
    }
  }

  emxInit_real_T(&ehat2, 2);
  if ((Omega1->size[1] == 1) || (Y_->size[0] == 1)) {
    aoffset = ehat2->size[0] * ehat2->size[1];
    ehat2->size[0] = Omega1->size[0];
    ehat2->size[1] = Y_->size[1];
    emxEnsureCapacity_real_T(ehat2, aoffset);
    boffset = Omega1->size[0];
    for (aoffset = 0; aoffset < boffset; aoffset++) {
      kidx = Y_->size[1];
      for (coffset = 0; coffset < kidx; coffset++) {
        ehat2->data[aoffset + ehat2->size[0] * coffset] = 0.0;
        i = Omega1->size[1];
        for (k = 0; k < i; k++) {
          ehat2->data[aoffset + ehat2->size[0] * coffset] += Omega1->
            data[aoffset + Omega1->size[0] * k] * Y_->data[k + Y_->size[0] *
            coffset];
        }
      }
    }
  } else {
    m = Omega1->size[0];
    inner = Omega1->size[1];
    aoffset = ehat2->size[0] * ehat2->size[1];
    ehat2->size[0] = Omega1->size[0];
    ehat2->size[1] = Y_->size[1];
    emxEnsureCapacity_real_T(ehat2, aoffset);
    for (kidx = 0; kidx < Y_->size[1]; kidx++) {
      coffset = kidx * m - 1;
      boffset = kidx * inner - 1;
      for (i = 1; i <= m; i++) {
        ehat2->data[coffset + i] = 0.0;
      }

      for (k = 1; k <= inner; k++) {
        if (Y_->data[boffset + k] != 0.0) {
          aoffset = (k - 1) * m;
          for (i = 1; i <= m; i++) {
            ehat2->data[coffset + i] += Y_->data[boffset + k] * Omega1->data
              [(aoffset + i) - 1];
          }
        }
      }
    }
  }

  inv(ehat2, Omega1);

  /*  sampling Wishart dist */
  /*  E(V) = Omega*nu */
  b_cholmod(Omega1, Y_);
  aoffset = ehat2->size[0] * ehat2->size[1];
  ehat2->size[0] = Y_->size[1];
  ehat2->size[1] = Y_->size[0];
  emxEnsureCapacity_real_T(ehat2, aoffset);
  boffset = Y_->size[0];
  for (aoffset = 0; aoffset < boffset; aoffset++) {
    kidx = Y_->size[1];
    for (coffset = 0; coffset < kidx; coffset++) {
      ehat2->data[coffset + ehat2->size[0] * aoffset] = Y_->data[aoffset +
        Y_->size[0] * coffset];
    }
  }

  b_randn(Omega1->size[0], Y->size[0], Y_);
  emxInit_real_T(&Omega_inv, 2);
  if ((ehat2->size[1] == 1) || (Y_->size[0] == 1)) {
    aoffset = Omega_inv->size[0] * Omega_inv->size[1];
    Omega_inv->size[0] = ehat2->size[0];
    Omega_inv->size[1] = Y_->size[1];
    emxEnsureCapacity_real_T(Omega_inv, aoffset);
    boffset = ehat2->size[0];
    for (aoffset = 0; aoffset < boffset; aoffset++) {
      kidx = Y_->size[1];
      for (coffset = 0; coffset < kidx; coffset++) {
        Omega_inv->data[aoffset + Omega_inv->size[0] * coffset] = 0.0;
        i = ehat2->size[1];
        for (k = 0; k < i; k++) {
          Omega_inv->data[aoffset + Omega_inv->size[0] * coffset] += ehat2->
            data[aoffset + ehat2->size[0] * k] * Y_->data[k + Y_->size[0] *
            coffset];
        }
      }
    }
  } else {
    m = ehat2->size[0];
    inner = ehat2->size[1];
    aoffset = Omega_inv->size[0] * Omega_inv->size[1];
    Omega_inv->size[0] = ehat2->size[0];
    Omega_inv->size[1] = Y_->size[1];
    emxEnsureCapacity_real_T(Omega_inv, aoffset);
    for (kidx = 0; kidx < Y_->size[1]; kidx++) {
      coffset = kidx * m - 1;
      boffset = kidx * inner - 1;
      for (i = 1; i <= m; i++) {
        Omega_inv->data[coffset + i] = 0.0;
      }

      for (k = 1; k <= inner; k++) {
        if (Y_->data[boffset + k] != 0.0) {
          aoffset = (k - 1) * m;
          for (i = 1; i <= m; i++) {
            Omega_inv->data[coffset + i] += Y_->data[boffset + k] * ehat2->data
              [(aoffset + i) - 1];
          }
        }
      }
    }
  }

  emxFree_real_T(&ehat2);

  /*  k by nu */
  aoffset = Omega1->size[0] * Omega1->size[1];
  Omega1->size[0] = Omega_inv->size[0];
  Omega1->size[1] = Omega_inv->size[1];
  emxEnsureCapacity_real_T(Omega1, aoffset);
  boffset = Omega_inv->size[0] * Omega_inv->size[1];
  for (aoffset = 0; aoffset < boffset; aoffset++) {
    Omega1->data[aoffset] = Omega_inv->data[aoffset];
  }

  aoffset = Y_->size[0] * Y_->size[1];
  Y_->size[0] = Omega_inv->size[1];
  Y_->size[1] = Omega_inv->size[0];
  emxEnsureCapacity_real_T(Y_, aoffset);
  boffset = Omega_inv->size[0];
  for (aoffset = 0; aoffset < boffset; aoffset++) {
    kidx = Omega_inv->size[1];
    for (coffset = 0; coffset < kidx; coffset++) {
      Y_->data[coffset + Y_->size[0] * aoffset] = Omega_inv->data[aoffset +
        Omega_inv->size[0] * coffset];
    }
  }

  if ((Omega_inv->size[1] == 1) || (Y_->size[0] == 1)) {
    aoffset = Omega1->size[0] * Omega1->size[1];
    Omega1->size[0] = Omega_inv->size[0];
    Omega1->size[1] = Y_->size[1];
    emxEnsureCapacity_real_T(Omega1, aoffset);
    boffset = Omega_inv->size[0];
    for (aoffset = 0; aoffset < boffset; aoffset++) {
      kidx = Y_->size[1];
      for (coffset = 0; coffset < kidx; coffset++) {
        Omega1->data[aoffset + Omega1->size[0] * coffset] = 0.0;
        i = Omega_inv->size[1];
        for (k = 0; k < i; k++) {
          Omega1->data[aoffset + Omega1->size[0] * coffset] += Omega_inv->
            data[aoffset + Omega_inv->size[0] * k] * Y_->data[k + Y_->size[0] *
            coffset];
        }
      }
    }

    aoffset = Omega_inv->size[0] * Omega_inv->size[1];
    Omega_inv->size[0] = Omega1->size[0];
    Omega_inv->size[1] = Omega1->size[1];
    emxEnsureCapacity_real_T(Omega_inv, aoffset);
    boffset = Omega1->size[1];
    for (aoffset = 0; aoffset < boffset; aoffset++) {
      kidx = Omega1->size[0];
      for (coffset = 0; coffset < kidx; coffset++) {
        Omega_inv->data[coffset + Omega_inv->size[0] * aoffset] = Omega1->
          data[coffset + Omega1->size[0] * aoffset];
      }
    }
  } else {
    m = Omega_inv->size[0];
    inner = Omega_inv->size[1];
    boffset = Omega_inv->size[0];
    aoffset = Omega_inv->size[0] * Omega_inv->size[1];
    Omega_inv->size[0] = boffset;
    Omega_inv->size[1] = Y_->size[1];
    emxEnsureCapacity_real_T(Omega_inv, aoffset);
    for (kidx = 0; kidx < Y_->size[1]; kidx++) {
      coffset = kidx * m - 1;
      boffset = kidx * inner - 1;
      for (i = 1; i <= m; i++) {
        Omega_inv->data[coffset + i] = 0.0;
      }

      for (k = 1; k <= inner; k++) {
        if (Y_->data[boffset + k] != 0.0) {
          aoffset = (k - 1) * m;
          for (i = 1; i <= m; i++) {
            Omega_inv->data[coffset + i] += Y_->data[boffset + k] * Omega1->
              data[(aoffset + i) - 1];
          }
        }
      }
    }
  }

  emxFree_real_T(&Omega1);
  emxFree_real_T(&Y_);

  /*  k by k */
  inv(Omega_inv, Omega);
  emxFree_real_T(&Omega_inv);
}

/*
 * File trailer for Gen_Omega.c
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Gen_beta.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "Gen_beta.h"
#include "Mixture_Normal_emxutil.h"
#include "randn.h"
#include "inv.h"
#include "eye.h"
#include "diag.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *Y
 *                const emxArray_real_T *Omega
 *                const emxArray_real_T *b_
 *                const emxArray_real_T *var_
 *                emxArray_real_T *beta
 * Return Type  : void
 */
void Gen_beta(const emxArray_real_T *Y, const emxArray_real_T *Omega, const
              emxArray_real_T *b_, const emxArray_real_T *var_, emxArray_real_T *
              beta)
{
  emxArray_real_T *Omega_inv;
  emxArray_real_T *precb_;
  emxArray_real_T *Xt;
  emxArray_real_T *XX;
  emxArray_real_T *Chol_B1;
  int i9;
  int aoffset;
  emxArray_real_T *XY;
  int n;
  emxArray_real_T *r3;
  emxArray_real_T *b;
  emxArray_real_T *y;
  int coljp1;
  int m;
  int k;
  int b_n;
  int j;
  int boffset;
  int nmj;
  int info;
  int colj;
  boolean_T exitg1;
  double ajj;
  int ix;
  int iy;
  double c;
  emxInit_real_T(&Omega_inv, 2);
  emxInit_real_T(&precb_, 2);
  emxInit_real_T(&Xt, 2);
  emxInit_real_T(&XX, 2);
  emxInit_real_T(&Chol_B1, 2);
  inv(Omega, Omega_inv);
  b_diag(var_, Chol_B1);
  inv(Chol_B1, precb_);

  /*  number of columns */
  eye(Y->size[1], Xt);

  /*  number of columns */
  i9 = XX->size[0] * XX->size[1];
  XX->size[0] = precb_->size[0];
  XX->size[1] = precb_->size[1];
  emxEnsureCapacity_real_T(XX, i9);
  aoffset = precb_->size[0] * precb_->size[1];
  for (i9 = 0; i9 < aoffset; i9++) {
    XX->data[i9] = 0.0;
  }

  emxInit_real_T1(&XY, 1);
  i9 = XY->size[0];
  XY->size[0] = precb_->size[0];
  emxEnsureCapacity_real_T2(XY, i9);
  aoffset = precb_->size[0];
  for (i9 = 0; i9 < aoffset; i9++) {
    XY->data[i9] = 0.0;
  }

  n = 0;
  emxInit_real_T1(&r3, 1);
  emxInit_real_T1(&b, 1);
  emxInit_real_T(&y, 2);
  while (n <= Y->size[0] - 1) {
    i9 = Chol_B1->size[0] * Chol_B1->size[1];
    Chol_B1->size[0] = Xt->size[1];
    Chol_B1->size[1] = Xt->size[0];
    emxEnsureCapacity_real_T(Chol_B1, i9);
    aoffset = Xt->size[0];
    for (i9 = 0; i9 < aoffset; i9++) {
      coljp1 = Xt->size[1];
      for (k = 0; k < coljp1; k++) {
        Chol_B1->data[k + Chol_B1->size[0] * i9] = Xt->data[i9 + Xt->size[0] * k];
      }
    }

    if ((Chol_B1->size[1] == 1) || (Omega_inv->size[0] == 1)) {
      i9 = y->size[0] * y->size[1];
      y->size[0] = Chol_B1->size[0];
      y->size[1] = Omega_inv->size[1];
      emxEnsureCapacity_real_T(y, i9);
      aoffset = Chol_B1->size[0];
      for (i9 = 0; i9 < aoffset; i9++) {
        coljp1 = Omega_inv->size[1];
        for (k = 0; k < coljp1; k++) {
          y->data[i9 + y->size[0] * k] = 0.0;
          boffset = Chol_B1->size[1];
          for (m = 0; m < boffset; m++) {
            y->data[i9 + y->size[0] * k] += Chol_B1->data[i9 + Chol_B1->size[0] *
              m] * Omega_inv->data[m + Omega_inv->size[0] * k];
          }
        }
      }
    } else {
      m = Chol_B1->size[0];
      b_n = Chol_B1->size[1];
      i9 = y->size[0] * y->size[1];
      y->size[0] = Chol_B1->size[0];
      y->size[1] = Omega_inv->size[1];
      emxEnsureCapacity_real_T(y, i9);
      for (j = 0; j < Omega_inv->size[1]; j++) {
        coljp1 = j * m - 1;
        boffset = j * b_n - 1;
        for (nmj = 1; nmj <= m; nmj++) {
          y->data[coljp1 + nmj] = 0.0;
        }

        for (k = 1; k <= b_n; k++) {
          if (Omega_inv->data[boffset + k] != 0.0) {
            aoffset = (k - 1) * m;
            for (nmj = 1; nmj <= m; nmj++) {
              y->data[coljp1 + nmj] += Omega_inv->data[boffset + k] *
                Chol_B1->data[(aoffset + nmj) - 1];
            }
          }
        }
      }
    }

    if ((y->size[1] == 1) || (Xt->size[0] == 1)) {
      i9 = Chol_B1->size[0] * Chol_B1->size[1];
      Chol_B1->size[0] = y->size[0];
      Chol_B1->size[1] = Xt->size[1];
      emxEnsureCapacity_real_T(Chol_B1, i9);
      aoffset = y->size[0];
      for (i9 = 0; i9 < aoffset; i9++) {
        coljp1 = Xt->size[1];
        for (k = 0; k < coljp1; k++) {
          Chol_B1->data[i9 + Chol_B1->size[0] * k] = 0.0;
          boffset = y->size[1];
          for (m = 0; m < boffset; m++) {
            Chol_B1->data[i9 + Chol_B1->size[0] * k] += y->data[i9 + y->size[0] *
              m] * Xt->data[m + Xt->size[0] * k];
          }
        }
      }
    } else {
      m = y->size[0];
      b_n = y->size[1];
      i9 = Chol_B1->size[0] * Chol_B1->size[1];
      Chol_B1->size[0] = y->size[0];
      Chol_B1->size[1] = Xt->size[1];
      emxEnsureCapacity_real_T(Chol_B1, i9);
      for (j = 0; j < Xt->size[1]; j++) {
        coljp1 = j * m - 1;
        boffset = j * b_n - 1;
        for (nmj = 1; nmj <= m; nmj++) {
          Chol_B1->data[coljp1 + nmj] = 0.0;
        }

        for (k = 1; k <= b_n; k++) {
          if (Xt->data[boffset + k] != 0.0) {
            aoffset = (k - 1) * m;
            for (nmj = 1; nmj <= m; nmj++) {
              Chol_B1->data[coljp1 + nmj] += Xt->data[boffset + k] * y->data
                [(aoffset + nmj) - 1];
            }
          }
        }
      }
    }

    aoffset = XX->size[0] * XX->size[1] - 1;
    i9 = XX->size[0] * XX->size[1];
    emxEnsureCapacity_real_T(XX, i9);
    for (i9 = 0; i9 <= aoffset; i9++) {
      XX->data[i9] += Chol_B1->data[i9];
    }

    i9 = Chol_B1->size[0] * Chol_B1->size[1];
    Chol_B1->size[0] = Xt->size[1];
    Chol_B1->size[1] = Xt->size[0];
    emxEnsureCapacity_real_T(Chol_B1, i9);
    aoffset = Xt->size[0];
    for (i9 = 0; i9 < aoffset; i9++) {
      coljp1 = Xt->size[1];
      for (k = 0; k < coljp1; k++) {
        Chol_B1->data[k + Chol_B1->size[0] * i9] = Xt->data[i9 + Xt->size[0] * k];
      }
    }

    if ((Chol_B1->size[1] == 1) || (Omega_inv->size[0] == 1)) {
      i9 = y->size[0] * y->size[1];
      y->size[0] = Chol_B1->size[0];
      y->size[1] = Omega_inv->size[1];
      emxEnsureCapacity_real_T(y, i9);
      aoffset = Chol_B1->size[0];
      for (i9 = 0; i9 < aoffset; i9++) {
        coljp1 = Omega_inv->size[1];
        for (k = 0; k < coljp1; k++) {
          y->data[i9 + y->size[0] * k] = 0.0;
          boffset = Chol_B1->size[1];
          for (m = 0; m < boffset; m++) {
            y->data[i9 + y->size[0] * k] += Chol_B1->data[i9 + Chol_B1->size[0] *
              m] * Omega_inv->data[m + Omega_inv->size[0] * k];
          }
        }
      }
    } else {
      m = Chol_B1->size[0];
      b_n = Chol_B1->size[1];
      i9 = y->size[0] * y->size[1];
      y->size[0] = Chol_B1->size[0];
      y->size[1] = Omega_inv->size[1];
      emxEnsureCapacity_real_T(y, i9);
      for (j = 0; j < Omega_inv->size[1]; j++) {
        coljp1 = j * m - 1;
        boffset = j * b_n - 1;
        for (nmj = 1; nmj <= m; nmj++) {
          y->data[coljp1 + nmj] = 0.0;
        }

        for (k = 1; k <= b_n; k++) {
          if (Omega_inv->data[boffset + k] != 0.0) {
            aoffset = (k - 1) * m;
            for (nmj = 1; nmj <= m; nmj++) {
              y->data[coljp1 + nmj] += Omega_inv->data[boffset + k] *
                Chol_B1->data[(aoffset + nmj) - 1];
            }
          }
        }
      }
    }

    aoffset = Y->size[1];
    i9 = b->size[0];
    b->size[0] = aoffset;
    emxEnsureCapacity_real_T2(b, i9);
    for (i9 = 0; i9 < aoffset; i9++) {
      b->data[i9] = Y->data[n + Y->size[0] * i9];
    }

    if ((y->size[1] == 1) || (b->size[0] == 1)) {
      i9 = r3->size[0];
      r3->size[0] = y->size[0];
      emxEnsureCapacity_real_T2(r3, i9);
      aoffset = y->size[0];
      for (i9 = 0; i9 < aoffset; i9++) {
        r3->data[i9] = 0.0;
        coljp1 = y->size[1];
        for (k = 0; k < coljp1; k++) {
          r3->data[i9] += y->data[i9 + y->size[0] * k] * b->data[k];
        }
      }
    } else {
      m = y->size[0];
      i9 = r3->size[0];
      r3->size[0] = y->size[0];
      emxEnsureCapacity_real_T2(r3, i9);
      for (nmj = 1; nmj <= m; nmj++) {
        r3->data[nmj - 1] = 0.0;
      }

      for (k = 0; k < y->size[1]; k++) {
        if (b->data[k] != 0.0) {
          aoffset = k * m;
          for (nmj = 0; nmj < m; nmj++) {
            r3->data[nmj] += b->data[k] * y->data[aoffset + nmj];
          }
        }
      }
    }

    i9 = XY->size[0];
    emxEnsureCapacity_real_T2(XY, i9);
    aoffset = XY->size[0];
    for (i9 = 0; i9 < aoffset; i9++) {
      XY->data[i9] += r3->data[i9];
    }

    n++;
  }

  emxFree_real_T(&y);
  aoffset = precb_->size[0] * precb_->size[1] - 1;
  i9 = XX->size[0] * XX->size[1];
  XX->size[0] = precb_->size[0];
  XX->size[1] = precb_->size[1];
  emxEnsureCapacity_real_T(XX, i9);
  for (i9 = 0; i9 <= aoffset; i9++) {
    XX->data[i9] += precb_->data[i9];
  }

  i9 = Xt->size[0] * Xt->size[1];
  Xt->size[0] = XX->size[0];
  Xt->size[1] = XX->size[1];
  emxEnsureCapacity_real_T(Xt, i9);
  aoffset = XX->size[1];
  for (i9 = 0; i9 < aoffset; i9++) {
    coljp1 = XX->size[0];
    for (k = 0; k < coljp1; k++) {
      Xt->data[k + Xt->size[0] * i9] = 0.5 * (XX->data[k + XX->size[0] * i9] +
        XX->data[i9 + XX->size[0] * k]);
    }
  }

  emxFree_real_T(&XX);
  inv(Xt, Omega_inv);
  i9 = Xt->size[0] * Xt->size[1];
  Xt->size[0] = Omega_inv->size[0];
  Xt->size[1] = Omega_inv->size[1];
  emxEnsureCapacity_real_T(Xt, i9);
  aoffset = Omega_inv->size[1];
  for (i9 = 0; i9 < aoffset; i9++) {
    coljp1 = Omega_inv->size[0];
    for (k = 0; k < coljp1; k++) {
      Xt->data[k + Xt->size[0] * i9] = 0.5 * (Omega_inv->data[k +
        Omega_inv->size[0] * i9] + Omega_inv->data[i9 + Omega_inv->size[0] * k]);
    }
  }

  i9 = Omega_inv->size[0] * Omega_inv->size[1];
  Omega_inv->size[0] = Xt->size[0];
  Omega_inv->size[1] = Xt->size[1];
  emxEnsureCapacity_real_T(Omega_inv, i9);
  aoffset = Xt->size[1];
  for (i9 = 0; i9 < aoffset; i9++) {
    coljp1 = Xt->size[0];
    for (k = 0; k < coljp1; k++) {
      Omega_inv->data[k + Omega_inv->size[0] * i9] = Xt->data[k + Xt->size[0] *
        i9];
    }
  }

  emxFree_real_T(&Xt);
  if ((precb_->size[1] == 1) || (b_->size[0] == 1)) {
    i9 = r3->size[0];
    r3->size[0] = precb_->size[0];
    emxEnsureCapacity_real_T2(r3, i9);
    aoffset = precb_->size[0];
    for (i9 = 0; i9 < aoffset; i9++) {
      r3->data[i9] = 0.0;
      coljp1 = precb_->size[1];
      for (k = 0; k < coljp1; k++) {
        r3->data[i9] += precb_->data[i9 + precb_->size[0] * k] * b_->data[k];
      }
    }
  } else {
    m = precb_->size[0];
    i9 = r3->size[0];
    r3->size[0] = precb_->size[0];
    emxEnsureCapacity_real_T2(r3, i9);
    for (nmj = 1; nmj <= m; nmj++) {
      r3->data[nmj - 1] = 0.0;
    }

    for (k = 0; k < precb_->size[1]; k++) {
      if (b_->data[k] != 0.0) {
        aoffset = k * m;
        for (nmj = 0; nmj < m; nmj++) {
          r3->data[nmj] += b_->data[k] * precb_->data[aoffset + nmj];
        }
      }
    }
  }

  emxFree_real_T(&precb_);
  i9 = XY->size[0];
  emxEnsureCapacity_real_T2(XY, i9);
  aoffset = XY->size[0];
  for (i9 = 0; i9 < aoffset; i9++) {
    XY->data[i9] += r3->data[i9];
  }

  /*  b_ = B0 */
  if ((Omega_inv->size[1] == 1) || (XY->size[0] == 1)) {
    i9 = beta->size[0];
    beta->size[0] = Omega_inv->size[0];
    emxEnsureCapacity_real_T2(beta, i9);
    aoffset = Omega_inv->size[0];
    for (i9 = 0; i9 < aoffset; i9++) {
      beta->data[i9] = 0.0;
      coljp1 = Omega_inv->size[1];
      for (k = 0; k < coljp1; k++) {
        beta->data[i9] += Omega_inv->data[i9 + Omega_inv->size[0] * k] *
          XY->data[k];
      }
    }
  } else {
    m = Omega_inv->size[0];
    i9 = beta->size[0];
    beta->size[0] = Omega_inv->size[0];
    emxEnsureCapacity_real_T2(beta, i9);
    for (nmj = 1; nmj <= m; nmj++) {
      beta->data[nmj - 1] = 0.0;
    }

    for (k = 0; k < Omega_inv->size[1]; k++) {
      if (XY->data[k] != 0.0) {
        aoffset = k * m;
        for (nmj = 0; nmj < m; nmj++) {
          beta->data[nmj] += XY->data[k] * Omega_inv->data[aoffset + nmj];
        }
      }
    }
  }

  emxFree_real_T(&XY);

  /*  full conditional mean   */
  b_n = Omega_inv->size[1];
  if (Omega_inv->size[1] != 0) {
    n = Omega_inv->size[0];
    info = 0;
    if (Omega_inv->size[0] != 0) {
      colj = 0;
      j = 0;
      exitg1 = false;
      while ((!exitg1) && (j + 1 <= n)) {
        aoffset = colj + j;
        ajj = 0.0;
        if (!(j < 1)) {
          ix = colj;
          iy = colj;
          for (k = 1; k <= j; k++) {
            ajj += Omega_inv->data[ix] * Omega_inv->data[iy];
            ix++;
            iy++;
          }
        }

        ajj = Omega_inv->data[aoffset] - ajj;
        if (ajj > 0.0) {
          ajj = sqrt(ajj);
          Omega_inv->data[aoffset] = ajj;
          if (j + 1 < n) {
            nmj = (n - j) - 2;
            aoffset += n;
            coljp1 = (colj + n) + 1;
            if ((j == 0) || (nmj + 1 == 0)) {
            } else {
              iy = aoffset;
              i9 = coljp1 + b_n * nmj;
              for (boffset = coljp1; boffset <= i9; boffset += b_n) {
                ix = colj;
                c = 0.0;
                k = (boffset + j) - 1;
                for (m = boffset; m <= k; m++) {
                  c += Omega_inv->data[m - 1] * Omega_inv->data[ix];
                  ix++;
                }

                Omega_inv->data[iy] += -c;
                iy += b_n;
              }
            }

            ajj = 1.0 / ajj;
            i9 = (aoffset + n * nmj) + 1;
            while (aoffset + 1 <= i9) {
              Omega_inv->data[aoffset] *= ajj;
              aoffset += n;
            }

            colj = coljp1 - 1;
          }

          j++;
        } else {
          Omega_inv->data[aoffset] = ajj;
          info = j + 1;
          exitg1 = true;
        }
      }
    }

    if (info == 0) {
      aoffset = b_n;
    } else {
      aoffset = info - 1;
    }

    for (j = 0; j < aoffset; j++) {
      for (nmj = j + 1; nmj < aoffset; nmj++) {
        Omega_inv->data[nmj + Omega_inv->size[0] * j] = 0.0;
      }
    }
  }

  i9 = Chol_B1->size[0] * Chol_B1->size[1];
  Chol_B1->size[0] = Omega_inv->size[1];
  Chol_B1->size[1] = Omega_inv->size[0];
  emxEnsureCapacity_real_T(Chol_B1, i9);
  aoffset = Omega_inv->size[0];
  for (i9 = 0; i9 < aoffset; i9++) {
    coljp1 = Omega_inv->size[1];
    for (k = 0; k < coljp1; k++) {
      Chol_B1->data[k + Chol_B1->size[0] * i9] = Omega_inv->data[i9 +
        Omega_inv->size[0] * k];
    }
  }

  emxFree_real_T(&Omega_inv);
  randn(Y->size[1], b);
  if ((Chol_B1->size[1] == 1) || (b->size[0] == 1)) {
    i9 = r3->size[0];
    r3->size[0] = Chol_B1->size[0];
    emxEnsureCapacity_real_T2(r3, i9);
    aoffset = Chol_B1->size[0];
    for (i9 = 0; i9 < aoffset; i9++) {
      r3->data[i9] = 0.0;
      coljp1 = Chol_B1->size[1];
      for (k = 0; k < coljp1; k++) {
        r3->data[i9] += Chol_B1->data[i9 + Chol_B1->size[0] * k] * b->data[k];
      }
    }
  } else {
    m = Chol_B1->size[0];
    i9 = r3->size[0];
    r3->size[0] = Chol_B1->size[0];
    emxEnsureCapacity_real_T2(r3, i9);
    for (nmj = 1; nmj <= m; nmj++) {
      r3->data[nmj - 1] = 0.0;
    }

    for (k = 0; k < Chol_B1->size[1]; k++) {
      if (b->data[k] != 0.0) {
        aoffset = k * m;
        for (nmj = 0; nmj < m; nmj++) {
          r3->data[nmj] += b->data[k] * Chol_B1->data[aoffset + nmj];
        }
      }
    }
  }

  emxFree_real_T(&b);
  emxFree_real_T(&Chol_B1);
  i9 = beta->size[0];
  emxEnsureCapacity_real_T2(beta, i9);
  aoffset = beta->size[0];
  for (i9 = 0; i9 < aoffset; i9++) {
    beta->data[i9] += r3->data[i9];
  }

  emxFree_real_T(&r3);

  /*  beta sampling го╠Б */
}

/*
 * File trailer for Gen_beta.c
 *
 * [EOF]
 */

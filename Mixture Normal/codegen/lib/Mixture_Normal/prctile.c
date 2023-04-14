/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: prctile.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "prctile.h"
#include "Mixture_Normal_emxutil.h"
#include "MHout.h"
#include "Mixture_Normal_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *pct
 * Return Type  : void
 */
void percentile_array(const emxArray_real_T *x, emxArray_real_T *pct)
{
  int j;
  emxArray_real_T *wk;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  int ix;
  int pEnd;
  int iy;
  int xi;
  int ixstart;
  int iystart;
  int k;
  int n;
  unsigned int unnamed_idx_0;
  int i;
  int p;
  double pctv[3];
  int q;
  double r;
  int qEnd;
  int kEnd;
  j = pct->size[0] * pct->size[1];
  pct->size[0] = 3;
  pct->size[1] = x->size[1];
  emxEnsureCapacity_real_T(pct, j);
  emxInit_real_T1(&wk, 1);
  emxInit_int32_T(&idx, 1);
  emxInit_int32_T(&iwork, 1);
  if ((x->size[0] == 0) || (x->size[1] == 0) || (pct->size[1] == 0)) {
    j = pct->size[0] * pct->size[1];
    pct->size[0] = 3;
    emxEnsureCapacity_real_T(pct, j);
    pEnd = pct->size[1];
    for (j = 0; j < pEnd; j++) {
      for (ixstart = 0; ixstart < 3; ixstart++) {
        pct->data[ixstart + pct->size[0] * j] = rtNaN;
      }
    }
  } else {
    j = wk->size[0];
    wk->size[0] = x->size[0];
    emxEnsureCapacity_real_T2(wk, j);
    ix = -1;
    iy = -1;
    for (xi = 1; xi <= x->size[1]; xi++) {
      ixstart = ix + 1;
      iystart = iy + 1;
      ix++;
      wk->data[0] = x->data[ixstart];
      for (k = 2; k <= x->size[0]; k++) {
        ix++;
        wk->data[k - 1] = x->data[ix];
      }

      iy++;
      n = wk->size[0] + 1;
      unnamed_idx_0 = (unsigned int)wk->size[0];
      j = idx->size[0];
      idx->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity_int32_T(idx, j);
      pEnd = (int)unnamed_idx_0;
      for (j = 0; j < pEnd; j++) {
        idx->data[j] = 0;
      }

      j = iwork->size[0];
      iwork->size[0] = (int)unnamed_idx_0;
      emxEnsureCapacity_int32_T(iwork, j);
      for (k = 1; k <= n - 2; k += 2) {
        if ((wk->data[k - 1] <= wk->data[k]) || rtIsNaN(wk->data[k])) {
          idx->data[k - 1] = k;
          idx->data[k] = k + 1;
        } else {
          idx->data[k - 1] = k + 1;
          idx->data[k] = k;
        }
      }

      if ((wk->size[0] & 1) != 0) {
        idx->data[wk->size[0] - 1] = wk->size[0];
      }

      i = 2;
      while (i < n - 1) {
        ixstart = i << 1;
        j = 1;
        for (pEnd = 1 + i; pEnd < n; pEnd = qEnd + i) {
          p = j;
          q = pEnd - 1;
          qEnd = j + ixstart;
          if (qEnd > n) {
            qEnd = n;
          }

          k = 0;
          kEnd = qEnd - j;
          while (k + 1 <= kEnd) {
            if ((wk->data[idx->data[p - 1] - 1] <= wk->data[idx->data[q] - 1]) ||
                rtIsNaN(wk->data[idx->data[q] - 1])) {
              iwork->data[k] = idx->data[p - 1];
              p++;
              if (p == pEnd) {
                while (q + 1 < qEnd) {
                  k++;
                  iwork->data[k] = idx->data[q];
                  q++;
                }
              }
            } else {
              iwork->data[k] = idx->data[q];
              q++;
              if (q + 1 == qEnd) {
                while (p < pEnd) {
                  k++;
                  iwork->data[k] = idx->data[p - 1];
                  p++;
                }
              }
            }

            k++;
          }

          for (k = 0; k < kEnd; k++) {
            idx->data[(j + k) - 1] = iwork->data[k];
          }

          j = qEnd;
        }

        i = ixstart;
      }

      ixstart = wk->size[0];
      while ((ixstart > 0) && rtIsNaN(wk->data[idx->data[ixstart - 1] - 1])) {
        ixstart--;
      }

      if (ixstart < 1) {
        for (i = 0; i < 3; i++) {
          pctv[i] = rtNaN;
        }
      } else if (ixstart == 1) {
        for (j = 0; j < 3; j++) {
          pctv[j] = wk->data[idx->data[0] - 1];
        }
      } else {
        for (k = 0; k < 3; k++) {
          r = (5.0 + 45.0 * (double)k) / 100.0 * (double)ixstart;
          i = (int)rt_roundd_snf(r);
          if (i < 1) {
            pctv[k] = wk->data[idx->data[0] - 1];
          } else if (i >= ixstart) {
            pctv[k] = wk->data[idx->data[ixstart - 1] - 1];
          } else {
            r -= (double)i;
            pctv[k] = (0.5 - r) * wk->data[idx->data[i - 1] - 1] + (0.5 + r) *
              wk->data[idx->data[i] - 1];
          }
        }
      }

      pct->data[iystart] = pctv[0];
      for (k = 0; k < 2; k++) {
        iy++;
        pct->data[iy] = pctv[k + 1];
      }
    }
  }

  emxFree_int32_T(&iwork);
  emxFree_int32_T(&idx);
  emxFree_real_T(&wk);
}

/*
 * File trailer for prctile.c
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: MHout.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "MHout.h"
#include "pow2.h"
#include "Mixture_Normal_emxutil.h"
#include "abs.h"
#include "sqrt.h"
#include "var.h"
#include "meanc.h"
#include "stdc.h"
#include "quantile.h"
#include "Mixture_Normal_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *Mhm
 *                emxArray_real_T *postmom
 * Return Type  : void
 */
void MHout(const emxArray_real_T *Mhm, emxArray_real_T *postmom)
{
  emxArray_real_T *credb;
  emxArray_real_T *r5;
  int i13;
  int loop_ub;
  emxArray_real_T *postm;
  int i14;
  emxArray_real_T *sd;
  emxArray_real_T *b_index;
  int n1;
  int n2;
  emxArray_real_T *M1;
  int b_loop_ub;
  emxArray_real_T *M2;
  emxArray_real_T *p_val;
  emxArray_real_T *prmtr;
  emxArray_real_T *r6;
  emxArray_real_T *r7;
  emxArray_real_T *r8;
  emxArray_real_T *b_prmtr;
  unsigned int prmtr_idx_0;
  unsigned int b_prmtr_idx_0;
  double y;
  double absx;
  double s;
  boolean_T empty_non_axis_sizes;
  double S;
  double R;
  int result;
  int b_result;
  emxInit_real_T(&credb, 2);
  emxInit_real_T(&r5, 2);

  /*   This proc summarizes posterior distribution  */
  /*   It gives posterior mean, SD, alpha, 0.5 and (1-alpha) quantiles, */
  /*     and inefficiency factor      */
  /*   level  */
  quantile(Mhm, r5);
  i13 = credb->size[0] * credb->size[1];
  credb->size[0] = r5->size[1];
  credb->size[1] = 3;
  emxEnsureCapacity_real_T(credb, i13);
  for (i13 = 0; i13 < 3; i13++) {
    loop_ub = r5->size[1];
    for (i14 = 0; i14 < loop_ub; i14++) {
      credb->data[i14 + credb->size[0] * i13] = r5->data[i13 + r5->size[0] * i14];
    }
  }

  emxFree_real_T(&r5);
  emxInit_real_T1(&postm, 1);
  emxInit_real_T1(&sd, 1);

  /*   alpha, 0.5 and (1-alpha) credibility interval  */
  meanc(Mhm, postm);

  /*   posterior mean  */
  stdc(Mhm, sd);

  /*   standard deviation  */
  /*  number of columns */
  emxInit_real_T(&b_index, 2);
  if (Mhm->size[1] < 1) {
    i13 = b_index->size[0] * b_index->size[1];
    b_index->size[0] = 1;
    b_index->size[1] = 0;
    emxEnsureCapacity_real_T(b_index, i13);
  } else {
    i13 = Mhm->size[1];
    i14 = b_index->size[0] * b_index->size[1];
    b_index->size[0] = 1;
    b_index->size[1] = (int)((double)i13 - 1.0) + 1;
    emxEnsureCapacity_real_T(b_index, i14);
    loop_ub = (int)((double)i13 - 1.0);
    for (i13 = 0; i13 <= loop_ub; i13++) {
      b_index->data[b_index->size[0] * i13] = 1.0 + (double)i13;
    }
  }

  n1 = (int)rt_roundd_snf(0.4 * (double)Mhm->size[0]);
  n2 = (int)floor(0.4 * (double)Mhm->size[0]);
  if (1 > n1) {
    loop_ub = 0;
  } else {
    loop_ub = n1;
  }

  emxInit_real_T(&M1, 2);
  b_loop_ub = Mhm->size[1];
  i13 = M1->size[0] * M1->size[1];
  M1->size[0] = loop_ub;
  M1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(M1, i13);
  for (i13 = 0; i13 < b_loop_ub; i13++) {
    for (i14 = 0; i14 < loop_ub; i14++) {
      M1->data[i14 + M1->size[0] * i13] = Mhm->data[i14 + Mhm->size[0] * i13];
    }
  }

  if (n2 > Mhm->size[0]) {
    i13 = 0;
    i14 = 0;
  } else {
    i13 = n2 - 1;
    i14 = Mhm->size[0];
  }

  emxInit_real_T(&M2, 2);
  loop_ub = Mhm->size[1];
  n1 = M2->size[0] * M2->size[1];
  M2->size[0] = i14 - i13;
  M2->size[1] = loop_ub;
  emxEnsureCapacity_real_T(M2, n1);
  for (n1 = 0; n1 < loop_ub; n1++) {
    b_loop_ub = i14 - i13;
    for (n2 = 0; n2 < b_loop_ub; n2++) {
      M2->data[n2 + M2->size[0] * n1] = Mhm->data[(i13 + n2) + Mhm->size[0] * n1];
    }
  }

  emxInit_real_T1(&p_val, 1);
  emxInit_real_T1(&prmtr, 1);
  emxInit_real_T(&r6, 2);
  emxInit_real_T(&r7, 2);
  emxInit_real_T1(&r8, 1);
  meanc(M1, prmtr);
  meanc(M2, p_val);
  var(M1, r6);
  var(M2, r7);
  i13 = r8->size[0];
  r8->size[0] = r6->size[1];
  emxEnsureCapacity_real_T2(r8, i13);
  loop_ub = r6->size[1];
  emxFree_real_T(&M2);
  emxFree_real_T(&M1);
  for (i13 = 0; i13 < loop_ub; i13++) {
    r8->data[i13] = r6->data[r6->size[0] * i13] - r7->data[r7->size[0] * i13];
  }

  emxFree_real_T(&r7);
  emxFree_real_T(&r6);
  emxInit_real_T1(&b_prmtr, 1);
  c_sqrt(r8);
  i13 = b_prmtr->size[0];
  b_prmtr->size[0] = prmtr->size[0];
  emxEnsureCapacity_real_T2(b_prmtr, i13);
  loop_ub = prmtr->size[0];
  for (i13 = 0; i13 < loop_ub; i13++) {
    b_prmtr->data[i13] = (prmtr->data[i13] - p_val->data[i13]) / r8->data[i13];
  }

  emxFree_real_T(&r8);
  c_abs(b_prmtr, prmtr);

  /*  cumulative density of standard normal distribution */
  prmtr_idx_0 = (unsigned int)prmtr->size[0];
  b_prmtr_idx_0 = (unsigned int)prmtr->size[0];
  i13 = p_val->size[0];
  p_val->size[0] = (int)b_prmtr_idx_0;
  emxEnsureCapacity_real_T2(p_val, i13);
  n1 = 0;
  emxFree_real_T(&b_prmtr);
  while (n1 <= (int)prmtr_idx_0 - 1) {
    y = -prmtr->data[n1] / 1.4142135623730951;

    /* ========================== COPYRIGHT NOTICE ============================ */
    /*  The algorithms for calculating ERF(X) and ERFC(X) are derived           */
    /*  from FDLIBM, which has the following notice:                            */
    /*                                                                          */
    /*  Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.       */
    /*                                                                          */
    /*  Developed at SunSoft, a Sun Microsystems, Inc. business.                */
    /*  Permission to use, copy, modify, and distribute this                    */
    /*  software is freely granted, provided that this notice                   */
    /*  is preserved.                                                           */
    /* =============================    END    ================================ */
    absx = fabs(y);
    if (rtIsNaN(y)) {
      s = y;
    } else if (rtIsInf(y)) {
      if (y < 0.0) {
        s = 2.0;
      } else {
        s = 0.0;
      }
    } else if (absx < 0.84375) {
      if (absx < 1.3877787807814457E-17) {
        s = 1.0 - y;
      } else {
        s = y * y;
        if (y < 0.25) {
          s = 1.0 - (y + y * ((0.12837916709551256 + s * (-0.3250421072470015 +
            s * (-0.02848174957559851 + s * (-0.0057702702964894416 + s *
            -2.3763016656650163E-5)))) / (1.0 + s * (0.39791722395915535 + s *
            (0.0650222499887673 + s * (0.0050813062818757656 + s *
            (0.00013249473800432164 + s * -3.9602282787753681E-6)))))));
        } else {
          s = rtNaN;
        }
      }
    } else if (absx < 1.25) {
      S = -0.0023621185607526594 + (absx - 1.0) * (0.41485611868374833 + (absx -
        1.0) * (-0.37220787603570132 + (absx - 1.0) * (0.31834661990116175 +
        (absx - 1.0) * (-0.11089469428239668 + (absx - 1.0) *
                        (0.035478304325618236 + (absx - 1.0) *
                         -0.0021663755948687908)))));
      s = 1.0 + (absx - 1.0) * (0.10642088040084423 + (absx - 1.0) *
        (0.540397917702171 + (absx - 1.0) * (0.071828654414196266 + (absx - 1.0)
        * (0.12617121980876164 + (absx - 1.0) * (0.013637083912029051 + (absx -
        1.0) * 0.011984499846799107)))));
      if (y >= 0.0) {
        s = 0.15493708848953247 - S / s;
      } else {
        s = 1.0 + (0.84506291151046753 + S / s);
      }
    } else if (y < -6.0) {
      s = 2.0;
    } else {
      s = 1.0 / (absx * absx);
      if (absx < 2.8571414947509766) {
        R = -0.0098649440348471482 + s * (-0.69385857270718176 + s *
          (-10.558626225323291 + s * (-62.375332450326006 + s *
          (-162.39666946257347 + s * (-184.60509290671104 + s *
          (-81.2874355063066 + s * -9.8143293441691455))))));
        S = 1.0 + s * (19.651271667439257 + s * (137.65775414351904 + s *
          (434.56587747522923 + s * (645.38727173326788 + s *
          (429.00814002756783 + s * (108.63500554177944 + s *
          (6.5702497703192817 + s * -0.0604244152148581)))))));
      } else {
        R = -0.0098649429247001 + s * (-0.799283237680523 + s *
          (-17.757954917754752 + s * (-160.63638485582192 + s *
          (-637.56644336838963 + s * (-1025.0951316110772 + s *
          -483.5191916086514)))));
        S = 1.0 + s * (30.338060743482458 + s * (325.79251299657392 + s *
          (1536.729586084437 + s * (3199.8582195085955 + s * (2553.0504064331644
          + s * (474.52854120695537 + s * -22.440952446585818))))));
      }

      if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
        s = frexp(absx, &result);
        n2 = result;
      } else {
        s = absx;
        n2 = 0;
      }

      s = floor(s * 2.097152E+6) / 2.097152E+6 * pow2(n2);
      s = exp(-s * s - 0.5625) * exp((s - absx) * (s + absx) + R / S) / absx;
      if (y < 0.0) {
        s = 2.0 - s;
      }
    }

    p_val->data[n1] = 0.5 * s;
    n1++;
  }

  i13 = p_val->size[0];
  emxEnsureCapacity_real_T2(p_val, i13);
  loop_ub = p_val->size[0];
  for (i13 = 0; i13 < loop_ub; i13++) {
    p_val->data[i13] = 2.0 * (1.0 - p_val->data[i13]);
  }

  /*  k by 1, p value */
  i13 = prmtr->size[0];
  prmtr->size[0] = b_index->size[1];
  emxEnsureCapacity_real_T2(prmtr, i13);
  loop_ub = b_index->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    prmtr->data[i13] = b_index->data[b_index->size[0] * i13];
  }

  emxFree_real_T(&b_index);
  if (!(prmtr->size[0] == 0)) {
    n1 = prmtr->size[0];
  } else if (!(postm->size[0] == 0)) {
    n1 = postm->size[0];
  } else if (!(sd->size[0] == 0)) {
    n1 = sd->size[0];
  } else if (!(credb->size[0] == 0)) {
    n1 = credb->size[0];
  } else if (!(p_val->size[0] == 0)) {
    n1 = p_val->size[0];
  } else {
    n1 = 0;
  }

  empty_non_axis_sizes = (n1 == 0);
  if (empty_non_axis_sizes || (!(prmtr->size[0] == 0))) {
    n2 = 1;
  } else {
    n2 = 0;
  }

  if (empty_non_axis_sizes || (!(postm->size[0] == 0))) {
    loop_ub = 1;
  } else {
    loop_ub = 0;
  }

  if (empty_non_axis_sizes || (!(sd->size[0] == 0))) {
    b_loop_ub = 1;
  } else {
    b_loop_ub = 0;
  }

  if (empty_non_axis_sizes || (!(credb->size[0] == 0))) {
    result = 3;
  } else {
    result = 0;
  }

  if (empty_non_axis_sizes || (!(p_val->size[0] == 0))) {
    b_result = 1;
  } else {
    b_result = 0;
  }

  i13 = postmom->size[0] * postmom->size[1];
  postmom->size[0] = n1;
  postmom->size[1] = (((n2 + loop_ub) + b_loop_ub) + result) + b_result;
  emxEnsureCapacity_real_T(postmom, i13);
  for (i13 = 0; i13 < n2; i13++) {
    for (i14 = 0; i14 < n1; i14++) {
      postmom->data[i14 + postmom->size[0] * i13] = prmtr->data[i14 + n1 * i13];
    }
  }

  emxFree_real_T(&prmtr);
  for (i13 = 0; i13 < loop_ub; i13++) {
    for (i14 = 0; i14 < n1; i14++) {
      postmom->data[i14 + postmom->size[0] * (i13 + n2)] = postm->data[i14 + n1 *
        i13];
    }
  }

  emxFree_real_T(&postm);
  for (i13 = 0; i13 < b_loop_ub; i13++) {
    for (i14 = 0; i14 < n1; i14++) {
      postmom->data[i14 + postmom->size[0] * ((i13 + n2) + loop_ub)] = sd->
        data[i14 + n1 * i13];
    }
  }

  emxFree_real_T(&sd);
  for (i13 = 0; i13 < result; i13++) {
    for (i14 = 0; i14 < n1; i14++) {
      postmom->data[i14 + postmom->size[0] * (((i13 + n2) + loop_ub) + b_loop_ub)]
        = credb->data[i14 + n1 * i13];
    }
  }

  emxFree_real_T(&credb);
  for (i13 = 0; i13 < b_result; i13++) {
    for (i14 = 0; i14 < n1; i14++) {
      postmom->data[i14 + postmom->size[0] * ((((i13 + n2) + loop_ub) +
        b_loop_ub) + result)] = p_val->data[i14 + n1 * i13];
    }
  }

  emxFree_real_T(&p_val);
}

/*
 * File trailer for MHout.c
 *
 * [EOF]
 */

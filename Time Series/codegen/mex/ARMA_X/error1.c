/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error1.c
 *
 * Code generation for function 'error1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ARMA_X.h"
#include "error1.h"

/* Variable Definitions */
static emlrtRTEInfo oo_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  static const char_T varargin_1[4] = { 's', 'q', 'r', 't' };

  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4, 4,
    varargin_1);
}

void c_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:power_domainError", "Coder:toolbox:power_domainError", 0);
}

void d_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI, "MATLAB:nomem",
    "MATLAB:nomem", 0);
}

void e_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'g', 'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 19, varargin_1, 12, varargin_2);
}

void f_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit",
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void g_error(const emlrtStack *sp)
{
  static const char_T varargin_1[3] = { 'l', 'o', 'g' };

  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4, 3,
    varargin_1);
}

void h_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'g', 'e', 'h', 'r', 'd' };

  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 14, varargin_1, 12, varargin_2);
}

void i_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'h', 's', 'e', 'q', 'r' };

  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 14, varargin_1, 12, varargin_2);
}

void j_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[13] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'z', 'g', 'e', 'e', 'v' };

  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 13, varargin_1, 12, varargin_2);
}

void k_error(const emlrtStack *sp, int32_T varargin_2)
{
  static const char_T varargin_1[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'p', 'o', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", "Coder:toolbox:LAPACKCallErrorInfo", 5,
    4, 19, varargin_1, 12, varargin_2);
}

void l_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &oo_emlrtRTEI, "MATLAB:gammaln:negativeVal",
    "MATLAB:gammaln:negativeVal", 0);
}

/* End of code generation (error1.c) */

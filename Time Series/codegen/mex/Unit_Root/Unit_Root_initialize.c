/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Unit_Root_initialize.c
 *
 * Code generation for function 'Unit_Root_initialize'
 *
 */

/* Include files */
#include "Unit_Root_initialize.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "_coder_Unit_Root_mex.h"
#include "eml_randn.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void Unit_Root_once(void);

/* Function Definitions */
static void Unit_Root_once(void)
{
  mex_InitInfAndNan();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
  eml_randn_init();
}

void Unit_Root_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Statistics_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    Unit_Root_once();
  }
}

/* End of code generation (Unit_Root_initialize.c) */

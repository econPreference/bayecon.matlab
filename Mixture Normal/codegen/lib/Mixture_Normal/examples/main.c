/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 07-Jun-2018 21:55:32
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "Mixture_Normal.h"
#include "main.h"
#include "Mixture_Normal_terminate.h"
#include "Mixture_Normal_emxAPI.h"
#include "Mixture_Normal_initialize.h"

/* Function Declarations */
static void argInit_2x1_real_T(double result[2]);
static double argInit_real_T(void);
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);
static emxArray_real_T *c_argInit_UnboundedxUnboundedxU(void);
static void main_Mixture_Normal(void);

/* Function Definitions */

/*
 * Arguments    : double result[2]
 * Return Type  : void
 */
static void argInit_2x1_real_T(double result[2])
{
  int idx0;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 2; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void)
{
  emxArray_real_T *result;
  static int iv0[2] = { 2, 2 };

  int idx0;
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreateND_real_T(2, iv0);

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result->data[idx0 + result->size[0] * idx1] = argInit_real_T();
    }
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *c_argInit_UnboundedxUnboundedxU(void)
{
  emxArray_real_T *result;
  static int iv1[3] = { 2, 2, 2 };

  int idx0;
  int idx1;
  int idx2;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreateND_real_T(3, iv1);

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      for (idx2 = 0; idx2 < result->size[2U]; idx2++) {
        /* Set the value of the array element.
           Change this value to the value that the application requires. */
        result->data[(idx0 + result->size[0] * idx1) + result->size[0] *
          result->size[1] * idx2] = argInit_real_T();
      }
    }
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_Mixture_Normal(void)
{
  struct0_T Output;
  emxArray_real_T *Y;
  double M;
  emxArray_real_T *bm_;
  emxArray_real_T *varm_;
  emxArray_real_T *Omegam;
  double dv0[2];
  emxInit_struct0_T(&Output);

  /* Initialize function 'Mixture_Normal' input arguments. */
  /* Initialize function input argument 'Y'. */
  Y = c_argInit_UnboundedxUnbounded_r();
  M = argInit_real_T();

  /* Initialize function input argument 'bm_'. */
  bm_ = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'varm_'. */
  varm_ = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'Omegam'. */
  Omegam = c_argInit_UnboundedxUnboundedxU();

  /* Initialize function input argument 'plot'. */
  /* Call the entry-point 'Mixture_Normal'. */
  argInit_2x1_real_T(dv0);
  Mixture_Normal(Y, M, bm_, varm_, Omegam, argInit_real_T(), argInit_real_T(),
                 dv0, &Output);
  emxDestroy_struct0_T(Output);
  emxDestroyArray_real_T(Omegam);
  emxDestroyArray_real_T(varm_);
  emxDestroyArray_real_T(bm_);
  emxDestroyArray_real_T(Y);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  Mixture_Normal_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_Mixture_Normal();

  /* Terminate the application.
     You do not need to do this more than one time. */
  Mixture_Normal_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */

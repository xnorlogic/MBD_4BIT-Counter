/*
 * File: PIC16F73_4_BIT_CNT.c
 *
 * Code generated for Simulink model 'PIC16F73_4_BIT_CNT'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 8.1 (R2011b) 08-Jul-2011
 * TLC version                    : 8.1 (Jul  9 2011)
 * C/C++ source code generated on : Wed Jan 28 11:05:22 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->8-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PIC16F73_4_BIT_CNT.h"
#include "PIC16F73_4_BIT_CNT_private.h"

/* Block signals (auto storage) */
BlockIO_PIC16F73_4_BIT_CNT PIC16F73_4_BIT_CNT_B;

/* Block states (auto storage) */
D_Work_PIC16F73_4_BIT_CNT PIC16F73_4_BIT_CNT_DWork;

/* External inputs (root inport signals with auto storage) */
ExternalInputs_PIC16F73_4_BIT_C PIC16F73_4_BIT_CNT_U;

/* External outputs (root outports fed by signals with auto storage) */
ExternalOutputs_PIC16F73_4_BIT_ PIC16F73_4_BIT_CNT_Y;

/* Real-time model */
RT_MODEL_PIC16F73_4_BIT_CNT PIC16F73_4_BIT_CNT_M_;
RT_MODEL_PIC16F73_4_BIT_CNT *const PIC16F73_4_BIT_CNT_M = &PIC16F73_4_BIT_CNT_M_;

/* Forward declaration for local functions */
static uint8_T PIC16F73_4_BIT_CNT_MODULUS(uint8_T Divisor, uint8_T Dividend);

/* Function for Chart: '<Root>/PIC16F73_APP_Template' */
static uint8_T PIC16F73_4_BIT_CNT_MODULUS(uint8_T Divisor, uint8_T Dividend)
{
  uint8_T Residue;

  /* MATLAB Function 'MODULUS': '<S1>:73' */
  /* '<S1>:73:2' */
  if (Dividend == 0) {
    Residue = Divisor;
  } else {
    Residue = (uint8_T)((uint16_T)Divisor - (uint16_T)(uint8_T)((uint16_T)
      Divisor / (uint16_T)Dividend * (uint16_T)Dividend));
  }

  return Residue;
}

/* Model step function */
void PIC16F73_4_BIT_CNT_step(void)
{
  uint8_T buffer;
  int16_T tmp;

  /* Chart: '<Root>/PIC16F73_APP_Template' incorporates:
   *  Inport: '<Root>/RB1_I'
   */
  /* Gateway: PIC16F73_APP_Template */
  /* During: PIC16F73_APP_Template */
  /* Transition: '<S1>:53' */
  if (PIC16F73_4_BIT_CNT_U.RB1_I == 1) {
    /* Transition: '<S1>:54' */
    /* Transition: '<S1>:58' */
    if (PIC16F73_4_BIT_CNT_DWork.LOCAL_COUNTER < 16) {
      /* Transition: '<S1>:101' */
      /* Transition: '<S1>:104' */
      tmp = PIC16F73_4_BIT_CNT_DWork.LOCAL_COUNTER + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      PIC16F73_4_BIT_CNT_DWork.LOCAL_COUNTER = (uint8_T)tmp;
      PIC16F73_4_BIT_CNT_B.RB2_O = PIC16F73_4_BIT_CNT_MODULUS
        (PIC16F73_4_BIT_CNT_DWork.LOCAL_COUNTER, 2U);
      buffer = (uint8_T)(((uint16_T)PIC16F73_4_BIT_CNT_DWork.LOCAL_COUNTER << 8)
                         >> 9);
      PIC16F73_4_BIT_CNT_B.RB3_O = PIC16F73_4_BIT_CNT_MODULUS(buffer, 2U);
      buffer = (uint8_T)(((uint16_T)buffer << 8) >> 9);
      PIC16F73_4_BIT_CNT_B.RB4_O = PIC16F73_4_BIT_CNT_MODULUS(buffer, 2U);
      PIC16F73_4_BIT_CNT_B.RB5_O = PIC16F73_4_BIT_CNT_MODULUS((uint8_T)
        (((uint16_T)buffer << 8) >> 9), 2U);

      /* Transition: '<S1>:123' */
    } else {
      /* Transition: '<S1>:102' */
      /* Transition: '<S1>:109' */
      PIC16F73_4_BIT_CNT_DWork.LOCAL_COUNTER = 0U;
    }

    /* Transition: '<S1>:121' */
    /* Transition: '<S1>:125' */
  }

  /* End of Chart: '<Root>/PIC16F73_APP_Template' */

  /* Outport: '<Root>/RA0_O' */
  PIC16F73_4_BIT_CNT_Y.RA0_O = PIC16F73_4_BIT_CNT_B.RA0_O;

  /* Outport: '<Root>/RA1_O' */
  PIC16F73_4_BIT_CNT_Y.RA1_O = PIC16F73_4_BIT_CNT_B.RA1_O;

  /* Outport: '<Root>/RA2_O' */
  PIC16F73_4_BIT_CNT_Y.RA2_O = PIC16F73_4_BIT_CNT_B.RA2_O;

  /* Outport: '<Root>/RA3_O' */
  PIC16F73_4_BIT_CNT_Y.RA3_O = PIC16F73_4_BIT_CNT_B.RA3_O;

  /* Outport: '<Root>/RA4_O' */
  PIC16F73_4_BIT_CNT_Y.RA4_O = PIC16F73_4_BIT_CNT_B.RA4_O;

  /* Outport: '<Root>/RA5_O' */
  PIC16F73_4_BIT_CNT_Y.RA5_O = PIC16F73_4_BIT_CNT_B.RA5_O;

  /* Outport: '<Root>/RB0_O' */
  PIC16F73_4_BIT_CNT_Y.RB0_O = PIC16F73_4_BIT_CNT_B.RB0_O;

  /* Outport: '<Root>/RB1_O' */
  PIC16F73_4_BIT_CNT_Y.RB1_O = PIC16F73_4_BIT_CNT_B.RB1_O;

  /* Outport: '<Root>/RB2_O' */
  PIC16F73_4_BIT_CNT_Y.RB2_O = PIC16F73_4_BIT_CNT_B.RB2_O;

  /* Outport: '<Root>/RB3_O' */
  PIC16F73_4_BIT_CNT_Y.RB3_O = PIC16F73_4_BIT_CNT_B.RB3_O;

  /* Outport: '<Root>/RB4_O' */
  PIC16F73_4_BIT_CNT_Y.RB4_O = PIC16F73_4_BIT_CNT_B.RB4_O;

  /* Outport: '<Root>/RB5_O' */
  PIC16F73_4_BIT_CNT_Y.RB5_O = PIC16F73_4_BIT_CNT_B.RB5_O;

  /* Outport: '<Root>/RB6_O' */
  PIC16F73_4_BIT_CNT_Y.RB6_O = PIC16F73_4_BIT_CNT_B.RB6_O;

  /* Outport: '<Root>/RB7_O' */
  PIC16F73_4_BIT_CNT_Y.RB7_O = PIC16F73_4_BIT_CNT_B.RB7_O;

  /* Outport: '<Root>/RC0_O' */
  PIC16F73_4_BIT_CNT_Y.RC0_O = PIC16F73_4_BIT_CNT_B.RC0_O;

  /* Outport: '<Root>/RC1_O' */
  PIC16F73_4_BIT_CNT_Y.RC1_O = PIC16F73_4_BIT_CNT_B.RC1_O;

  /* Outport: '<Root>/RC2_O' */
  PIC16F73_4_BIT_CNT_Y.RC2_O = PIC16F73_4_BIT_CNT_B.RC2_O;

  /* Outport: '<Root>/RC3_O' */
  PIC16F73_4_BIT_CNT_Y.RC3_O = PIC16F73_4_BIT_CNT_B.RC3_O;

  /* Outport: '<Root>/RC4_O' */
  PIC16F73_4_BIT_CNT_Y.RC4_O = PIC16F73_4_BIT_CNT_B.RC4_O;

  /* Outport: '<Root>/RC5_O' */
  PIC16F73_4_BIT_CNT_Y.RC5_O = PIC16F73_4_BIT_CNT_B.RC5_O;

  /* Outport: '<Root>/RC6_O' */
  PIC16F73_4_BIT_CNT_Y.RC6_O = PIC16F73_4_BIT_CNT_B.RC6_O;

  /* Outport: '<Root>/RC7_O' */
  PIC16F73_4_BIT_CNT_Y.RC7_O = PIC16F73_4_BIT_CNT_B.RC7_O;
}

/* Model initialize function */
void PIC16F73_4_BIT_CNT_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(PIC16F73_4_BIT_CNT_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &PIC16F73_4_BIT_CNT_B), 0,
                sizeof(BlockIO_PIC16F73_4_BIT_CNT));

  /* states (dwork) */
  (void) memset((void *)&PIC16F73_4_BIT_CNT_DWork, 0,
                sizeof(D_Work_PIC16F73_4_BIT_CNT));

  /* external inputs */
  (void) memset((void *)&PIC16F73_4_BIT_CNT_U, 0,
                sizeof(ExternalInputs_PIC16F73_4_BIT_C));

  /* external outputs */
  (void) memset((void *)&PIC16F73_4_BIT_CNT_Y, 0,
                sizeof(ExternalOutputs_PIC16F73_4_BIT_));

  /* InitializeConditions for Chart: '<Root>/PIC16F73_APP_Template' */
  PIC16F73_4_BIT_CNT_DWork.LOCAL_COUNTER = 0U;
  PIC16F73_4_BIT_CNT_B.RA0_O = 0U;
  PIC16F73_4_BIT_CNT_B.RA1_O = 0U;
  PIC16F73_4_BIT_CNT_B.RA2_O = 0U;
  PIC16F73_4_BIT_CNT_B.RA3_O = 0U;
  PIC16F73_4_BIT_CNT_B.RA4_O = 0U;
  PIC16F73_4_BIT_CNT_B.RA5_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB0_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB1_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB2_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB3_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB4_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB5_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB6_O = 0U;
  PIC16F73_4_BIT_CNT_B.RB7_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC0_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC1_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC2_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC3_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC4_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC5_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC6_O = 0U;
  PIC16F73_4_BIT_CNT_B.RC7_O = 0U;
}

/* Model terminate function */
void PIC16F73_4_BIT_CNT_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

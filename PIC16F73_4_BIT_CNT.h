/*
 * File: PIC16F73_4_BIT_CNT.h
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

#ifndef RTW_HEADER_PIC16F73_4_BIT_CNT_h_
#define RTW_HEADER_PIC16F73_4_BIT_CNT_h_
#ifndef PIC16F73_4_BIT_CNT_COMMON_INCLUDES_
# define PIC16F73_4_BIT_CNT_COMMON_INCLUDES_
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#endif                                 /* PIC16F73_4_BIT_CNT_COMMON_INCLUDES_ */

#include "PIC16F73_4_BIT_CNT_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  uint8_T RA0_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RA1_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RA2_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RA3_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RA4_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RA5_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB0_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB1_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB2_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB3_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB4_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB5_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB6_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RB7_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC0_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC1_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC2_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC3_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC4_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC5_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC6_O;                       /* '<Root>/PIC16F73_APP_Template' */
  uint8_T RC7_O;                       /* '<Root>/PIC16F73_APP_Template' */
} BlockIO_PIC16F73_4_BIT_CNT;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T LOCAL_COUNTER;               /* '<Root>/PIC16F73_APP_Template' */
} D_Work_PIC16F73_4_BIT_CNT;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint8_T RA0_I;                       /* '<Root>/RA0_I' */
  uint8_T RA1_I;                       /* '<Root>/RA1_I' */
  uint8_T RA2_I;                       /* '<Root>/RA2_I' */
  uint8_T RA3_I;                       /* '<Root>/RA3_I' */
  uint8_T RA4_I;                       /* '<Root>/RA4_I' */
  uint8_T RA5_I;                       /* '<Root>/RA5_I' */
  uint8_T RB0_I;                       /* '<Root>/RB0_I' */
  uint8_T RB1_I;                       /* '<Root>/RB1_I' */
  uint8_T RB2_I;                       /* '<Root>/RB2_I' */
  uint8_T RB3_I;                       /* '<Root>/RB3_I' */
  uint8_T RB4_I;                       /* '<Root>/RB4_I' */
  uint8_T RB5_I;                       /* '<Root>/RB5_I' */
  uint8_T RB6_I;                       /* '<Root>/RB6_I' */
  uint8_T RB7_I;                       /* '<Root>/RB7_I' */
  uint8_T RC0_I;                       /* '<Root>/RC0_I' */
  uint8_T RC1_I;                       /* '<Root>/RC1_I' */
  uint8_T RC2_I;                       /* '<Root>/RC2_I' */
  uint8_T RC3_I;                       /* '<Root>/RC3_I' */
  uint8_T RC4_I;                       /* '<Root>/RC4_I' */
  uint8_T RC5_I;                       /* '<Root>/RC5_I' */
  uint8_T RC6_I;                       /* '<Root>/RC6_I' */
  uint8_T RC7_I;                       /* '<Root>/RC7_I' */
} ExternalInputs_PIC16F73_4_BIT_C;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T RA0_O;                       /* '<Root>/RA0_O' */
  uint8_T RA1_O;                       /* '<Root>/RA1_O' */
  uint8_T RA2_O;                       /* '<Root>/RA2_O' */
  uint8_T RA3_O;                       /* '<Root>/RA3_O' */
  uint8_T RA4_O;                       /* '<Root>/RA4_O' */
  uint8_T RA5_O;                       /* '<Root>/RA5_O' */
  uint8_T RB0_O;                       /* '<Root>/RB0_O' */
  uint8_T RB1_O;                       /* '<Root>/RB1_O' */
  uint8_T RB2_O;                       /* '<Root>/RB2_O' */
  uint8_T RB3_O;                       /* '<Root>/RB3_O' */
  uint8_T RB4_O;                       /* '<Root>/RB4_O' */
  uint8_T RB5_O;                       /* '<Root>/RB5_O' */
  uint8_T RB6_O;                       /* '<Root>/RB6_O' */
  uint8_T RB7_O;                       /* '<Root>/RB7_O' */
  uint8_T RC0_O;                       /* '<Root>/RC0_O' */
  uint8_T RC1_O;                       /* '<Root>/RC1_O' */
  uint8_T RC2_O;                       /* '<Root>/RC2_O' */
  uint8_T RC3_O;                       /* '<Root>/RC3_O' */
  uint8_T RC4_O;                       /* '<Root>/RC4_O' */
  uint8_T RC5_O;                       /* '<Root>/RC5_O' */
  uint8_T RC6_O;                       /* '<Root>/RC6_O' */
  uint8_T RC7_O;                       /* '<Root>/RC7_O' */
} ExternalOutputs_PIC16F73_4_BIT_;

/* Real-time Model Data Structure */
struct RT_MODEL_PIC16F73_4_BIT_CNT {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern BlockIO_PIC16F73_4_BIT_CNT PIC16F73_4_BIT_CNT_B;

/* Block states (auto storage) */
extern D_Work_PIC16F73_4_BIT_CNT PIC16F73_4_BIT_CNT_DWork;

/* External inputs (root inport signals with auto storage) */
extern ExternalInputs_PIC16F73_4_BIT_C PIC16F73_4_BIT_CNT_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExternalOutputs_PIC16F73_4_BIT_ PIC16F73_4_BIT_CNT_Y;

/* Model entry point functions */
extern void PIC16F73_4_BIT_CNT_initialize(void);
extern void PIC16F73_4_BIT_CNT_step(void);
extern void PIC16F73_4_BIT_CNT_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_PIC16F73_4_BIT_CNT *const PIC16F73_4_BIT_CNT_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PIC16F73_4_BIT_CNT'
 * '<S1>'   : 'PIC16F73_4_BIT_CNT/PIC16F73_APP_Template'
 */
#endif                                 /* RTW_HEADER_PIC16F73_4_BIT_CNT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

#pragma once
/*****************************************************/
/* File   : SwcServiceOs_Os.h                        */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_Os.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_SwcServiceOs_Os{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, OS_CODE) StartupHook  (void);
      FUNC(void, OS_CODE) ShutdownHook (void);
      FUNC(void, OS_CODE) TASK_Idle    (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern interface_SwcServiceOs_Os *Os_Client_ptr_SwcServiceOs_Os;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

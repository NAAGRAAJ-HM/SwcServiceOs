#pragma once
/******************************************************************************/
/* File   : SwcServiceOs.hpp                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstSwcServiceOs.hpp"
#include "CfgSwcServiceOs.hpp"
#include "SwcServiceOs_core.hpp"
#include "infSwcServiceOs_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_SwcServiceOs:
      INTERFACES_EXPORTED_SWCSERVICEOS
   ,  public abstract_module
   ,  public class_SwcServiceOs_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstSwcServiceOs_Type* lptrConst = (ConstSwcServiceOs_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SWCSERVICEOS_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SWCSERVICEOS_CONST,       SWCSERVICEOS_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SWCSERVICEOS_CONFIG_DATA, SWCSERVICEOS_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SWCSERVICEOS_CODE) DeInitFunction (void);
      FUNC(void, SWCSERVICEOS_CODE) MainFunction   (void);
      SWCSERVICEOS_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_SwcServiceOs, SWCSERVICEOS_VAR) SwcServiceOs;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


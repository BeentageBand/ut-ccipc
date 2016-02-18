/*======================================================================================*/ 
/*
 * pid_ctl_frs.cpp
 *
 * Created: 10/11/2015 11:47:20 p.m.
 *  Author: ASUS
 */ 
/*======================================================================================*/
#include "dread_apm_ext.h"
#include "dread_apm_definition.h"
#include "dread.h"
/*======================================================================================*
 * Project Headers
 *======================================================================================*/

/*======================================================================================*
 * Standard Headers
 *======================================================================================*/

/*======================================================================================*
 * Define Constants
 *======================================================================================*/

/*======================================================================================*
 * Type Definitions
 *======================================================================================*/

/*======================================================================================*
 * Function Prototypes
 *======================================================================================*/
/*======================================================================================*
 * Object Definitions
 *======================================================================================*/
#undef APM_THREAD
#define APM_THREAD(thread, thread_o, dep1, dep2, dep3, dep4, dep5) \
   { thread, dep1, dep2, dep3, dep4, dep5},

const apm::Thread_Def_T apm::Thread_Def_Table[]=
{
      APM_THREAD_DEFINTINION_TB
};
/*======================================================================================*
 * Function Definitions
 *======================================================================================*/
// Apm extern definitions
#undef APM_THREAD
#define APM_THREAD(thread, thread_o, dep1, dep2, dep3, dep4, dep5) \
case thread: { return new thread_o(); }

dread::Thread * apm::Create_Thread(const int thread_id)
{
   switch(thread_id)
   {
   case DREAD_NULL_THREAD:{ return new dread::Thread(DREAD_NULL_THREAD);}
   //APM_THREAD_DEFINTINION_TB
   default: return nullptr;
   }
}
/*======================================================================================*
 * Method Definitions
 *======================================================================================*/

/*======================================================================================*
 * pid_ctl_frs.cpp
 *======================================================================================*/

/*======================================================================================*/
/*
 * Logs
 */
/*======================================================================================*/

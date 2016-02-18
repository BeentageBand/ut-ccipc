/*=====================================================================================*/
/**
 * api_set.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef DREAD_THREADS_H_
#define DREAD_THREADS_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/
#define DREAD_REGISTERED_THREADS \
   DREAD_THREAD_ID(APM_THREAD_ID,   "Application Manager") \
   DREAD_THREAD_ID(TEST_THREAD_ID,  "Test Module"        ) \
/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/

#undef DREAD_THREAD_ID
#define DREAD_THREAD_ID(thread, desc) thread,

typedef enum
{
   DREAD_NULL_THREAD = 0,
   DREAD_REGISTERED_THREADS
   DREAD_TOTAL_THREADS
}DREAD_THREAD_ID_T;
/*=====================================================================================* 
 * api_set.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*DREAD_THREADS_H_*/

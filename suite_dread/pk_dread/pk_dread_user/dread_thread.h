/*=====================================================================================*/
/**
 * dread_thread.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef DREAD_THREAD_H_
#define DREAD_THREAD_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/
#include <stdint.h>
#include <string>
#include <memory>
/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/

namespace dread
{
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
class Thread
{
private:
   const uint32_t thread_id;
   const std::string thread_name;

protected:
   std::unique_ptr<Thread> thread_impl;

public:
   Thread(uint32_t const thread_id, std::string const & thread_name);
   virtual ~Thread(void);

   inline std::string const & Thread::get_name(void) {return this->thread_id;}
   inline uint32_t const Thread::get_id(void) {return this->thread_name;}
   virtual void run(void) = 0;
protected:
   virtual void launch(void);
};
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/
extern void * Thread_Launcher_Main(void * args);
/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
} /* namespace dread */
/*=====================================================================================* 
 * dread_thread.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*DREAD_THREAD_H_*/

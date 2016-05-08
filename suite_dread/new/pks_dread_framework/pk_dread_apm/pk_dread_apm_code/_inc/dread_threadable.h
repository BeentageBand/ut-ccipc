/*=====================================================================================*/
/**
 * api_ext.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef DREAD_THREADABLE_H_
#define DREAD_THREADABLE_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/
#include <pthread.h>

namespace dread{
/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
class Thread
{
public:
   const int dread_id;
protected:
   bool is_alive;
private:
   pthread_t thread_id;
   pthread_attr_t attributes;
public:
   explicit Thread(const int thread_id = 0);
   virtual ~Thread(void){}
private:
   Thread(Thread const & o) : dread_id(), is_alive(false), thread_id(), attributes() {}
   Thread & operator=(Thread const & o){return *this;};

public:
   virtual void initialize(void);
   virtual void shutdown(void);
   void run(void);
   int join(void);
private:
   static void * thread_func(void * argv);
   int run_thread(void);
   virtual int on_thread(void){return -1;};
};
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * api_ext.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
} /*namespace dread*/
#endif /*DREAD_THREADABLE_H_*/
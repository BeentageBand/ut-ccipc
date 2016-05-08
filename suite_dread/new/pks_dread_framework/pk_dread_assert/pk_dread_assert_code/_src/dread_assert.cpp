/*=====================================================================================*/
/**
 * api.cpp
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/

/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "dread_assert.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/
using namespace assert;
/*=====================================================================================* 
 * Local X-Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Define Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Type Definitions
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Object Definitions
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Object Definitions
 *=====================================================================================*/
AssertTrace assert::Notify(std::cout,"NOTIFY");
AssertTrace assert::Warn(std::cerr,  "WARN");
AssertTrace assert::Fault(std::cerr, "FAULT");
AssertTrace assert::Ensure(std::cerr,"ENSURE");
/*=====================================================================================* 
 * Local Function Prototypes
 *=====================================================================================*/
AssertTrace::AssertTrace(std::ostream & ios, std::string const & type)
: ios(&ios), trace_type(type), msg()
{}

void AssertTrace::print_trace(const char * file, const int line)
{
   if(nullptr != this->ios)
   {
      *this->ios << this->trace_type << " = " << file << ":" << line << ":   \'" <<
            this->msg << "\'"<< std::endl;
   }
}

void AssertTrace::ensure(int expr,const char * file, const int line)
{
   this->expect(expr, file, line);
}

void AssertTrace::expect(int expr,const char * file, const int line)
{
   if(!static_cast<bool>(expr))
   {
      this->print_trace(file, line);
   }
}
/*=====================================================================================* 
 * Local Inline-Function Like Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Function Definitions
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Definitions
 *=====================================================================================*/

/*=====================================================================================* 
 * api.cpp
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/


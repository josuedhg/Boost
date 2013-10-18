#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <iostream>

/*! \brief this is a function dummy that will be called 
 * 		   by boost's bind method
 * 
 */
int boost_function_test (int x, int y)
{
	return x * y;
}

int main ()
{
	boost::function< int(void) > f=boost::bind< int >(boost_function_test, 4, 2);
	std::cout<<f()<<std::endl;
	return 0;
}

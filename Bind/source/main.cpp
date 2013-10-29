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

struct structure_test{
	int operator()(int x, int y){ return x - y; } 
};

class class_test{
public:
	bool operator()(int x, int y){ return x == y; } 
};

int main ()
{
	//! Bind with a funtion
	boost::function< int(void) > f=boost::bind< int >(boost_function_test, 4, 2);
	std::cout<<"Boost Bind with funtions f() = "<<f()<<std::endl;
	
	//! Bind with a funtion
	boost::function< int(void) > structures=boost::bind< int >(structure_test(), 4, 2);
	std::cout<<"Boost Bind with structures structures() = "<<structures()<<std::endl;
	
	//! Bind with a funtion
	boost::function< bool(void) > classes=boost::bind< bool >(class_test(), 4, 4);
	std::cout<<"Boost Bind with classes classes() = "<<classes()<<std::endl;
	
	return 0;
}

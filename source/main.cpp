#include <iostream>
#include <boost/smart_ptr/shared_ptr.hpp>

class A{};

int main()
{
	boost::shared_ptr<A> number(new A);
	std::cout << "Hello World" << std::endl;
	std::cout << number.get() << std::endl;
}

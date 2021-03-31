#include <iomanip>
#include "whatever.hpp"


int main() {
/*	{
		int a = 5;
		int b = 10;

		std::cout << "int a = " << a << std::endl;
		std::cout << "int b = " << b << std::endl;
		std::cout << "max is " << max(a, b) << std::endl;
		std::cout << "min is " << min(a, b) << std::endl;
		swap(a, b);
		std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	}
	{
		std::cout << "============" << std::endl;
		double a = 5;
		double b = 10;

		std::cout << "double a = " << std::fixed << std::setprecision(1) << a << std::endl;
		std::cout << "double b = " << b << std::endl;
		std::cout << "max is " << max(a, b) << std::endl;
		std::cout << "min is " << min(a, b) << std::endl;
		swap(a, b);
		std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	}
	{
		std::cout << "============" << std::endl;

		float a = 5;
		float b = 10;

		std::cout << "float a = " << a << std::endl;
		std::cout << "float b = " << b << std::endl;
		std::cout << "max is " << max(a, b) << std::endl;
		std::cout << "min is " << min(a, b) << std::endl;
		swap(a, b);
		std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	}*/

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
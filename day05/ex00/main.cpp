#include "Bureaucrat.hpp"

int main(){
	Bureaucrat a("Mike1", 5);
	std::cout << a << std::endl;

	std::cout << "====1===To high" << std::endl;
	try {
		Bureaucrat b("Mike2", -5);
		std::cout << b << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
		std::cout << "========" << std::endl << std::endl;
	}
	Bureaucrat c("Mike3", 100);
	std::cout << c << std::endl;


	std::cout << "====2=== to low" << std::endl;
	try{
		Bureaucrat d("Mike4", 200);
		std::cout << d << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e){
		std::cout << e.what() << std::endl << "=========" << std::endl << std::endl;
	}
	std::cout << "====3=== to low" << std::endl;
	try {
		Bureaucrat e("Mike5", 1000);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl << "=========" << std::endl;
	}
}


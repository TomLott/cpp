#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "first - should fail" << std::endl;
	Bureaucrat a("Mike", 100);
	std::cout << a << std::endl;

	Form bill1("bill_1", 100, 50);
	std::cout << bill1 << std::endl;

	std::cout << "should fail again" << std::endl;
	try {
		bill1.beSigned(a);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << bill1 << std::endl;

	std::cout << "============" << std::endl;

	std::cout << "second should be success" << std::endl;
	Form bill2("bill_2", 99, 100);
	std::cout << bill2 << std::endl;
	try
	{
		a.signForm(bill2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bill2 << std::endl;

	std::cout << "============" << std::endl;

	Form bill3("bill_3", 110, 100);
	std::cout << bill3 << std::endl;
	a.signForm(bill3);
	std::cout << bill3 << std::endl;
	try
	{
		a.signForm(bill3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bill3 << std::endl;

	std::cout << "============" << std::endl;
	std::cout << "=+=+=+=+=+=+=" << std::endl;

	try
	{
		Form formException("Form1", 99, 120);
		std::cout << formException << std::endl;
		formException.beSigned(a);
		std::cout << a << std::endl;
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "============" << std::endl;
	std::cout << "============" << std::endl;

	try
	{
		Form formException("Form2", 1000, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "Form2 exception" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << "============" << std::endl;

	try
	{
		Form formException("Form3", 0, 50);

		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << "Form3 exception" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << "============" << std::endl;
	return (0);
}
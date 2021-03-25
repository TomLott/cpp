#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
void shrub_test();

void robo_test();

void presidential_test();

void file_test();
void intern_test();
int main(void) {
/*
	Bureaucrat a("Mike", 100);
	std::cout << a << std::endl;

	Bureaucrat b = a;

	Form bill1("bill_1", 100, 50);
	std::cout << bill1 << std::endl;

	bill1.beSigned(a);
	std::cout << bill1 << std::endl;

	std::cout << "============" << std::endl;

	Form bill2("bill_2", 99, 50);
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

	Form bill3("bill_3", 101, 50);
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

	try
	{
		Form formException("Form1", 99, 50);
		std::cout << formException << std::endl;
		formException.beSigned(a);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

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
	return (0);*/

		//shrub_test();
		//robo_test();
		//	presidential_test();
		//file_test();
		intern_test();



}
	void presidential_test() {
		PresidentialPardonForm *presidentialPardonForm;
		Bureaucrat *bureaucrat;
		try {
			presidentialPardonForm = new PresidentialPardonForm("pardon_1");
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << *presidentialPardonForm << std::endl;
		try {
			bureaucrat = new Bureaucrat("Buro1", 1);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			bureaucrat->signForm(*presidentialPardonForm);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			bureaucrat->executeForm(*presidentialPardonForm);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << *presidentialPardonForm << std::endl;
	}
	void robo_test() {
		try {
			RobotomyRequestForm robotomyRequestForm("request2");
			try {
				std::cout << robotomyRequestForm << std::endl;
				Bureaucrat bureaucrat("Buro2", 10);
				try {
					bureaucrat.signForm(robotomyRequestForm);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
				try {
					bureaucrat.signForm(robotomyRequestForm);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
				try {
					bureaucrat.executeForm(robotomyRequestForm);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
				try {
					bureaucrat.executeForm(robotomyRequestForm);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		catch (std::exception &e) {
			std::cout<< e.what() << std::endl;
		}
	}
	void shrub_test() {
		try {
			ShrubberyCreationForm shrubberyCreationForm("Shrub3");
			std::cout << shrubberyCreationForm << std::endl;
			try {
				Bureaucrat bureaucrat("Buro3", 130);
				try {
					bureaucrat.signForm(shrubberyCreationForm);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
				try {
					bureaucrat.signForm(shrubberyCreationForm);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
				try {
					bureaucrat.executeForm(shrubberyCreationForm);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

}
	void file_test(){
	ShrubberyCreationForm form2("form2");
	Bureaucrat f("Mike", 1);

	form2.beSigned(f);
	f.executeForm(form2);
	form2.beExecuted();

}
	void intern_test(){
		{
			Intern someRandomIntern;
			Form *rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			std::cout << rrf->getName() << std::endl;

			delete rrf;
			rrf = nullptr;
			try {
				rrf = someRandomIntern.makeForm("hehe", "Bender");
				std::cout << rrf->getName() << std::endl;
			}
			catch (std::exception & e){
				std::cout << e.what() << std::endl;
			}
			delete rrf;
		}

}
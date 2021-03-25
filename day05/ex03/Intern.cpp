#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(const Intern &src) {
	if (this != &src){

	}
}

Intern & Intern::operator=(const Intern &src) {
	if (this != &src){

	}
	return (*this);
}

Form *getPresidential(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *getRobotomy(std::string const & target){
	return new RobotomyRequestForm(target);
}

Form *getSchrubbery(std::string const & target){
	return new ShrubberyCreationForm(target);
}

Form * Intern::makeForm(std::string const &form, std::string const &target) {
	Form *f = nullptr;

	t_forms forms[3];
	forms[0].names = "robotomy request";
	forms[0].formGet = &getRobotomy;
	forms[1].names = "shrubbery request";
	forms[1].formGet = &getSchrubbery;
	forms[2].names = "presidential request";
	forms[2].formGet = &getPresidential;


	for (int i = 0; i < 3; i++){
		if (form == forms[i].names)
			f = forms[i].formGet(target);
	}
	if (!f){
		std::cout << "There is no elements named " << form << std::endl;
		throw noElement();
	}
	std::cout << "Intern creates " << f->getName() << std::endl;
	return (f);
}

const char * Intern::noElement::what() const throw() {
	return ("No element exception");
}
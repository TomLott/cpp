#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(){

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(Bureaucrat const  &src) : _name(src._name) {
	if (this != &src){
		if (src._grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (src._grade > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade = src._grade;
	}
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src) {
	if (this != &src){
		if (src._grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (src._grade > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade = src._grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat(std::string const  &name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}


const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const std::string & Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::decreaseGrade() {
	if (_grade + 1 < 1)
		throw Bureaucrat::GradeTooHighException();
			if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::increaseGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade - 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

std::ostream & operator << (std::ostream &o, Bureaucrat const & src){
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (o);
}

void Bureaucrat::signForm(Form & src) {
	if (!src.getIsSigned() && src.getGradeSign() >= _grade){
		std::cout << _name << " signs " << src.getName() << std::endl;
	}
	else{
		std::cout <<  _name << " cannot sign " << src.getName() << " because "
				  << ((src.getGradeSign() < _grade) ? " grade is too low" : " is already signed.") << std::endl;
		return ;
	}
	src.beSigned(*this);
}


void Bureaucrat::executeForm(Form &src) const {
	if (!src.getIsSigned()){
		std::cout << _name << " can't execute " << src.getTarget() << ". It's unsigned" << std::endl;
	}
	else if (src.getGradeExec() < _grade){
		std::cout << _name << " can't execute " << src.getTarget() << ". Grade is not high enough." << std::endl;
 	}
	else {
		src.makeExecution();
		std::cout << _name << " has executed " << src.getTarget() << std::endl;
	}
}
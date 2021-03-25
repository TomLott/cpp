#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name(), _gradeExec(0), _gradeSign(0) {
	_isSigned = false;
}

Form::~Form() {

}

Form::Form(const std::string &name, const int gradeExec, const int gradeSign) : _name(name), _gradeExec(gradeExec), _gradeSign(gradeExec) {
	_isSigned = false;
	if (_gradeSign < 1 || _gradeExec < 1)
		throw Form::GradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw Form::GradeTooLowException();
}


Form::Form(const Form &src) : _name(src._name), _gradeExec(src._gradeExec), _gradeSign(src._gradeExec) {
	if (_gradeSign < 1 || _gradeExec < 1)
		throw Form::GradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw Form::GradeTooLowException();
	_isSigned = src._isSigned;
}

Form & Form::operator=(const Form &src) {
	if (this != &src) {
		_isSigned = src._isSigned;
		if (_gradeSign < 1 || _gradeExec < 1)
			throw Form::GradeTooHighException();
		if (_gradeSign > 150 || _gradeExec > 150)
			throw Form::GradeTooLowException();
	}
	return (*this);
}

std::string const & Form::getName() const {
	return (_name);
}

int Form::getGradeExec() const {
	return (_gradeExec);
}

int Form::getGradeSign() const {
	return (_gradeSign);
}


bool Form::getIsSigned() const {
	return (_isSigned);
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
};

const char * Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}


std::ostream & operator << (std::ostream & o, Form const & src){
	std::string  isSigned;

	isSigned = (!src.getIsSigned()) ? "not signed" : "signed";

	o << src.getName() << " is " << isSigned << " and have execution grade = " << src.getGradeExec()
	<< " and grade to sign = " << src.getGradeSign() << std::endl;

	return (o);
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() < 1){
		throw Form::GradeTooHighException();
	}
	else if (_isSigned)
		std::cout << "From is already signed." << std::endl;
	_isSigned = true;
}

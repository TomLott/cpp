#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat {
private:
	std::string const	_name;
	int 				_grade;
	Bureaucrat();
public:
	~Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator = (Bureaucrat const & src);

	const std::string & getName() const;
	int 				getGrade() const;
	void 				increaseGrade();
	void 				decreaseGrade();
	void 				signForm(Form & src);

	class GradeTooHighException : public std::exception {

		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

std::ostream & operator << (std::ostream & o, Bureaucrat const & src);
#endif

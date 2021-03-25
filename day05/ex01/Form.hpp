#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;
//#include "Bureaucrat.hpp"

class Form {
private:
	const std::string _name;
	bool 		_isSigned;
	const int 		_gradeSign;
	const int		_gradeExec;
	Form();
public:
				~Form();
				Form(std::string const & name, const int gradeSign, const int gradeExec);
				Form(Form const & src);
				Form & operator = (Form const & src);

				std::string const & getName() const;
				int 				getGradeExec() const;
				int 				getGradeSign() const;
				bool 				getIsSigned() const;
				void 				beSigned(Bureaucrat & src);



				class GradeTooHighException : public std::exception {
				public:
					const char * what() const throw();
				};

				class GradeTooLowException : public std::exception {
				public:
					const char * what() const throw();
				};
};

std::ostream & operator << (std::ostream & o, Form const & src);


#endif

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
				std::string _name;
				RobotomyRequestForm();

public:
				RobotomyRequestForm(std::string const & target);
				virtual ~RobotomyRequestForm();
				RobotomyRequestForm(RobotomyRequestForm const & src);

				RobotomyRequestForm & operator = (RobotomyRequestForm const & src);

				void beExecuted() const;


};


#endif

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
				std::string _name;
				PresidentialPardonForm();
public:
				~PresidentialPardonForm();
				PresidentialPardonForm(std::string const & target);
				PresidentialPardonForm(PresidentialPardonForm const & src);
				PresidentialPardonForm & operator = (PresidentialPardonForm const & src);
				void beExecuted() const;
};


#endif
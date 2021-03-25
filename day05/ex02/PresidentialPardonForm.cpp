#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 0, 0){}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardon", 25, 5) {
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &src) : Form(src) {
	setTarget(const_cast<std::string &>(src.getTarget()));
}

PresidentialPardonForm & PresidentialPardonForm::operator=(
		const PresidentialPardonForm &src) {
	if (this != &src){
		Form::operator=(src);
		setTarget(const_cast<std::string &>(src.getTarget()));
	}
	return (*this);
}

void PresidentialPardonForm::beExecuted() const {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 0, 0) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {
	setTarget(const_cast<std::string &>(src.getTarget()));
	srand(time(NULL));
}

RobotomyRequestForm & RobotomyRequestForm::operator=(
		const RobotomyRequestForm &src) {
	if (this != &src) {
		Form::operator=(src);
		setTarget(const_cast<std::string &>(src.getTarget()));
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequest", 72, 45) {
	srand(time(NULL));
	setTarget(target);
}

void RobotomyRequestForm::makeExecution() const {
	std::cout << "vzh vzh vzh kh kh" << std::endl;
	if (rand() % 2 == 1)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Nuh, next time maybe" << std::endl;
}



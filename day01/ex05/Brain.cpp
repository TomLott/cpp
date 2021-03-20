#include <sstream>
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Contructor brain" << this << std::endl;
}

Brain::~Brain() {
	std::cout << "Destructor brain" << this << std::endl;
}

std::string Brain::identify() const {
	std::stringstream address;
	address << this;
	return (address.str());
}

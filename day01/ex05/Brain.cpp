#include <sstream>
#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

std::string Brain::identify() const {
	std::stringstream address;
	address << this;
	return (address.str());
}

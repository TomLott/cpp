#include "Peon.hpp"

Peon::Peon() {
	std::cout << "Zog Zog" << std::endl;
}
Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name)  {
	std::cout << "Zog Zog" << std::endl;
}
Peon::Peon(const Peon &src) : Victim(src){
}

Peon & Peon::operator=(const Peon &src) {
	if (this != &src){
		return (*this);
	}
	Victim::operator=(src);
	return (*this);
}

void Peon::getPolymorphed() const {
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}
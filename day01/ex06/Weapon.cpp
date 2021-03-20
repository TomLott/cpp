#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon constructor" << std::endl;
}
Weapon::~Weapon() {
	std::cout << "Weapon destructor" << std::endl;
}

const std::string &Weapon::getType() const {
	return _type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}

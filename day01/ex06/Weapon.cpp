#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() const {
	return _type;
}

void Weapon::setType(std::string &type) {
	this->_type = type;
}

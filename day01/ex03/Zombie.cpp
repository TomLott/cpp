#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie() {}

Zombie::Zombie(){

}

void Zombie::announce() {
	std::cout << _name + " " << _type << " Braiiiinnnnsss" << std::endl;
}

void Zombie::setName(const std::string &name) {
	_name = name;
}

const std::string &Zombie::getName() const {
	return _name;
}

const std::string &Zombie::getType() const {
	return _type;
}

void Zombie::setType(const std::string &type) {
	_type = type;
}

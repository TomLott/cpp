#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie() {}

void Zombie::announce() {
	std::cout << _name + " " << _type << " Braiiiinnnnsss" << std::endl;
}
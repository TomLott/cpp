#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	std::cout << "Constructor has called B " << std::endl;
}
void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

HumanB::~HumanB() {
	std::cout << "Destructor has called B " << std::endl;
}

void HumanB::attack() {
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
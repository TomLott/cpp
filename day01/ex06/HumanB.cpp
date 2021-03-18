#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
}
void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

HumanB::~HumanB() {
}

void HumanB::attack() {
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
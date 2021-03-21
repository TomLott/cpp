#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name){
	std::cout << "*Ninja appears from the shadow.*" << std::endl;
	this->name = name;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "*Ninja disappears in the shadow.*" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &src) {
	std::cout << "*Ninja appears from the shadow. He looks exactly like another one.*" << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->maxHitPoints = src.maxHitPoints;
	this->energyPoints = src.energyPoints;
	this->maxEnergyPoints = src.maxEnergyPoints;
	this->level = src.level;
	this->meleeAttackDamage = src.meleeAttackDamage;
	this->rangedAttackDamage = src.rangedAttackDamage;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap &src) {
	if (this != &src){
		this->hitPoints = src.hitPoints;
		this->maxHitPoints = src.maxHitPoints;
		this->energyPoints = src.energyPoints;
		this->maxEnergyPoints = src.maxEnergyPoints;
		this->level = src.level;
		this->name = src.name;
		this->meleeAttackDamage = src.meleeAttackDamage;
		this->rangedAttackDamage = src.rangedAttackDamage;
		this->armorDamageReduction = src.armorDamageReduction;
	}
	return (*this);
}

void NinjaTrap::ninjaShoebox(FragTrap &frag) {
	std::cout << "Look! It's FragTrap class" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav) {
	std::cout << "Look! It's ScavTrap class" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap) {
	std::cout << "Look! It's ClapTrap class" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninja) {
	std::cout << "Look! It's NinjaTrap class" << std::endl;
}
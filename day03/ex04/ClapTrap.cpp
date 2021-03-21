#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string const & name) {
	std::cout << "*creating sound* Clap-clap Clap-Clap!" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;
	srand(time(NULL));
}

ClapTrap::~ClapTrap() {
	std::cout << "*destroying sound* Clap-Clap Kh-kh" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copying robot Clap-Clap: Bu-pi-pa-pa...Bonjour!" << std::endl;
	this->name = src.name;
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
ClapTrap & ClapTrap::operator=(ClapTrap const & src){
	if (this != &src) {
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



std::string & ClapTrap::getName() {
	return (this->name);
}
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name){
	std::cout << "Creating robot: Bu-pi-pa-pa...Bonjour!" << std::endl;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	srand(time(NULL));
}
FragTrap::~FragTrap() {
	std::cout << "No! Stop! I don't wanna die!!! No-no-n..." << std::endl;
}


FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "Copying robot: Bu-pi-pa-pa...Bonjour!" << std::endl << std::endl;
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
FragTrap & FragTrap::operator=(FragTrap const & src){
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

void attack(){
	std::string attack[5] = {
		"Hocus pocus!",
		"Heyyah!",
		"Take that!",
		"Unts unts unts unts!",
		"AVADA KEDAVRA!"
	};

	int i = std::rand() % 5;
	std::cout << attack[i] << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	if (this->energyPoints < 25){
		std::cout << this->name << ": Bloody'ell , I'm out of energy!" << std::endl;
		return ;
	}
	this->energyPoints -= 25;
	std::cout << this->name << ": ";
	attack();
	std::cout <<  this->name << " attacks " << target << std::endl << std::endl;
}
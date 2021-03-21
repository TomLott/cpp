#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string const &name) {
	std::cout << "Creating robot: Bu-pi-pa-pa...Bonjour!" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
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
	std::cout << "Creating robot: Bu-pi-pa-pa...Bonjour!" << std::endl;
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

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << this->name << " attacks " << target;
	std::cout << "at range, ";
	std::cout << "causing " << this->rangedAttackDamage
	<< "points of damage." << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << this->name << " attacks " << target;
	std::cout << " at melee,";
	std::cout << " causing " << this->rangedAttackDamage
	<< " points of damage." << std::endl << std::endl;
}

bool FragTrap::takeDamage(unsigned int amount) {
	int damage = (int)amount - this->armorDamageReduction;
	this->hitPoints-= damage;
	if (this->hitPoints < 0) {
		damage += this->hitPoints;
		this->hitPoints = 0;
	}
    std::cout << this->name;
	std::cout << " is taking " << damage << " points of damage." << std::endl << std::endl;
	return (this->hitPoints);
}

void FragTrap::beRepaired(unsigned int amount) {
	int heal = this->hitPoints + (int)amount;
	if (heal > this->maxHitPoints)
		heal = this->maxHitPoints - this->hitPoints;
	std::cout << this->name;
	std::cout << " repairs " << heal << " points of health points." << std::endl << std::endl;
	this->hitPoints += heal;
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

std::string & FragTrap::getName() {
	return (this->name);
}
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "*creating sound* Clap-clap Clap-Clap!" << std::endl;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->level = 1;
	this->name = "";
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;
	srand(time(NULL));
}

ClapTrap::~ClapTrap() {
	std::cout << "*destroying sound* Kh-kh" << std::endl;
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

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << this->name << " attacks " << target;
	std::cout << "at range, ";
	std::cout << "causing " << this->rangedAttackDamage
			  << "points of damage." << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << this->name << " attacks " << target;
	std::cout << " at melee,";
	std::cout << " causing " << this->rangedAttackDamage
			  << " points of damage." << std::endl << std::endl;
}

bool ClapTrap::takeDamage(unsigned int amount) {
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

void ClapTrap::beRepaired(unsigned int amount) {
	int heal = this->hitPoints + (int)amount;
	if (heal > this->maxHitPoints)
		heal = this->maxHitPoints - this->hitPoints;
	std::cout << this->name;
	std::cout << " repairs " << heal << " points of health points." << std::endl << std::endl;
	this->hitPoints += heal;
}

std::string & ClapTrap::getName() {
	return (this->name);
}
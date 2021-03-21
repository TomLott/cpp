#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "Here we go. Born to kill. You better run, better run faster than my bullet." << std::endl;
	this->name = name;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	srand(time(NULL));
}

ScavTrap::~ScavTrap() {
	std::cout << "I'll be back, but now I have to leave" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "No, I'm not just a copy. I can feel it." << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->maxHitPoints = src.maxHitPoints;
	this->energyPoints = src.energyPoints;
	this->maxEnergyPoints = src.maxEnergyPoints;
	this->level = src.level;
	this->meleeAttackDamage = src.meleeAttackDamage;
	this->rangedAttackDamage = src.rangedAttackDamage;
	this->armorDamageReduction =src.armorDamageReduction;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "Operator was called" << std::endl;
	if (this != &src){
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->maxHitPoints = src.maxHitPoints;
		this->energyPoints = src.energyPoints;
		this->maxEnergyPoints = src.maxEnergyPoints;
		this->level = src.level;
		this->meleeAttackDamage = src.meleeAttackDamage;
		this->rangedAttackDamage = src.rangedAttackDamage;
		this->armorDamageReduction =src.armorDamageReduction;
	}
	return (*this);
}

void ScavTrap::challengeNewcomer() {
	std::string challenge[5] = {
			"C'mon, try me!",
			"English, ***! Do you speak it?",
			"When you have to shoot, shoot. Don't talk.",
			"You see in this world there's two kinds of people, My Friend - those with loaded guns, and those who dig. You dig.",
			"*silence sound*"
	};
	std::cout << this->name << " challenge the enemy: " << challenge[(rand() % 5)] << std::endl;
}


int & ScavTrap::getMeleeAttackDamage() {
	return (this->meleeAttackDamage);
}
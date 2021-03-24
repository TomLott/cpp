#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const std::string &name) {
	std::cout << "Here we go. Born to kill. You better run, better run faster than my bullet." << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
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

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout << this->name << " attacks " << target;
	std::cout << "at range, ";
	std::cout << "causing " << this->rangedAttackDamage
			  << "points of damage." << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout << this->name << " attacks " << target;
	std::cout << " at melee,";
	std::cout << " causing " << this->rangedAttackDamage
			  << " points of damage." << std::endl << std::endl;
}

bool ScavTrap::takeDamage(unsigned int amount) {
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

void ScavTrap::beRepaired(unsigned int amount) {
	int heal = this->hitPoints + (int)amount;
	if (heal > this->maxHitPoints)
		heal = this->maxHitPoints - this->hitPoints;
	std::cout << this->name;
	std::cout << " repairs " << heal << " points of health points." << std::endl << std::endl;
	this->hitPoints += heal;
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

std::string & ScavTrap::getName() {
	return (this->name);
}

int & ScavTrap::getMeleeAttackDamage() {
	return (this->meleeAttackDamage);
}
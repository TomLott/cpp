#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "*Ninja appears from the shadow.*" << std::endl;
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

NinjaTrap::NinjaTrap(NinjaTrap &src) : ClapTrap(src){
	std::cout << "*Ninja appears from the shadow. He looks exactly like another one.*" << std::endl;
	this->hitPoints = src.hitPoints;
	this->maxHitPoints = src.maxHitPoints;
	this->energyPoints = src.energyPoints;
	this->maxEnergyPoints = src.maxEnergyPoints;
	this->level = src.level;
	this->meleeAttackDamage = src.meleeAttackDamage;
	this->rangedAttackDamage = src.rangedAttackDamage;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const &src) {
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

void NinjaTrap::rangedAttack(const std::string &target) {
	std::cout << this->name << " NinjaTrap attacks " << target;
	std::cout << "at range, ";
	std::cout << "causing " << this->rangedAttackDamage
			  << "points of damage." << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target) {
	std::cout << this->name << " NinjaTrap attacks " << target;
	std::cout << " at melee,";
	std::cout << " causing " << this->meleeAttackDamage
			  << " points of damage." << std::endl << std::endl;
}

bool NinjaTrap::takeDamage(unsigned int amount) {
	int damage = (int)amount - this->armorDamageReduction;
	this->hitPoints-= damage;
	if (this->hitPoints < 0) {
		damage += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << this->name;
	std::cout << " NinjaTrap taking " << damage << " points of damage." << std::endl << std::endl;
	return (this->hitPoints);
}

void NinjaTrap::beRepaired(unsigned int amount) {
	int heal = this->hitPoints + (int)amount;
	if (heal > this->maxHitPoints)
		heal = this->maxHitPoints - this->hitPoints;
	std::cout << this->name;
	std::cout << " NingaTrap repairs " << heal << " points of health points." << std::endl << std::endl;
	this->hitPoints += heal;
}
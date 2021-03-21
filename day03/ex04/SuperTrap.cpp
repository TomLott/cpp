#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {}

SuperTrap::SuperTrap(std::string const & name) :
	ClapTrap(name),
	FragTrap(name),
	NinjaTrap(name) {
	std::cout << "SuperTrap's constructor created Frankenstein's monster" << std::endl;
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap's destructor killed Frankenstein's monster. Finally!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap &src) : ClapTrap(src), NinjaTrap(src), FragTrap(src) {
	std::cout << "SuperTrap copy machine created new monster" << std::endl;
	this->hitPoints = src.hitPoints;
	this->maxHitPoints = src.maxHitPoints;
	this->energyPoints = src.energyPoints;
	this->maxEnergyPoints = src.maxEnergyPoints;
	this->level = 1;
	this->name = src.name;
	this->meleeAttackDamage = src.meleeAttackDamage;
	this->rangedAttackDamage = src.rangedAttackDamage;
	this->armorDamageReduction = src.armorDamageReduction;
}

SuperTrap & SuperTrap::operator=(SuperTrap const &src) {
	std::cout << "SuperTrap operator" << std::endl;
	if (this != &src) {
		this->hitPoints = src.hitPoints;
		this->maxHitPoints = src.maxHitPoints;
		this->energyPoints = src.energyPoints;
		this->maxEnergyPoints = src.maxEnergyPoints;
		this->level = 1;
		this->name = src.name;
		this->meleeAttackDamage = src.meleeAttackDamage;
		this->rangedAttackDamage = src.rangedAttackDamage;
		this->armorDamageReduction = src.armorDamageReduction;
	}
	return (*this);
}

void SuperTrap::rangedAttack(const std::string &target) {
	std::cout << this->name << " SuperTrap attacks " << target;
	std::cout << " at range, ";
	std::cout << " causing " << this->rangedAttackDamage
			  << " points of damage." << std::endl;
}

void SuperTrap::meleeAttack(const std::string &target) {
	std::cout << this->name << " NinjaTrap attacks " << target;
	std::cout << " at melee,";
	std::cout << " causing " << this->meleeAttackDamage
			  << " points of damage." << std::endl << std::endl;
}
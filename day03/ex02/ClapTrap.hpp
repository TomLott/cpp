#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class ClapTrap{
public:
	ClapTrap(std::string & name);
	~ClapTrap();

private:
	int 		hitPoints;
	int 		maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	std::string	name;
	int 		meleeAttackDamage;
	int			rangedAttackDamage;
	int 		armorDamageReduction;

};


#endif

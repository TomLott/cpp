#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
public:
	ClapTrap();
	ClapTrap(std::string const & name);
	~ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & src);


	std::string &getName();

protected:
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

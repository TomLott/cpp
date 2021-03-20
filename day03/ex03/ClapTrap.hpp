#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & src);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

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

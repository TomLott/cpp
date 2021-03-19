#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>


class ScavTrap {
public:
				ScavTrap(std::string const & name);
				~ScavTrap();
				ScavTrap(ScavTrap const & src);
				ScavTrap & operator = (ScavTrap const &src);
				void rangedAttack(const std::string &target);
				void meleeAttack(const std::string &target);
				bool takeDamage(unsigned int amount);
				void beRepaired(unsigned int amount);
				void challengeNewcomer();

				std::string &getName();
				int &getMeleeAttackDamage();
private:
	int 		hitPoints;
	int 		maxHitPoints;
 	int 		energyPoints;
	int 		maxEnergyPoints;
	int 		level;
	std::string	name;
	int			meleeAttackDamage;
	int 		rangedAttackDamage;
	int 		armorDamageReduction;
};


#endif

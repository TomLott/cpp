#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap{
public:
				ScavTrap();
				ScavTrap(std::string const & name);
				~ScavTrap();
				ScavTrap(ScavTrap const & src);
				ScavTrap & operator = (ScavTrap const &src);
				void challengeNewcomer();

				int &getMeleeAttackDamage();

				void rangedAttack(std::string const & target);
				void meleeAttack(std::string const & target);
				bool takeDamage(unsigned int amount);
				void beRepaired(unsigned int amount);
};


#endif

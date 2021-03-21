#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap{
private:
				ScavTrap();
public:
				ScavTrap(std::string const & name);
				~ScavTrap();
				ScavTrap(ScavTrap const & src);
				ScavTrap & operator = (ScavTrap const &src);
				void challengeNewcomer();

				int &getMeleeAttackDamage();
};


#endif

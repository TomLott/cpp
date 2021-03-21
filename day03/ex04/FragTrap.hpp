#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string const &name);
	~FragTrap();

	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & src);
	void vaulthunter_dot_exe(std::string const & target);

	virtual void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif

#ifndef DAY03_FRAGTRAP_HPP
#define DAY03_FRAGTRAP_HPP

#include <string>

class FragTrap{
public:
	FragTrap(std::string const &name);
	~FragTrap();

	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & src);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

	std::string &getName();

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

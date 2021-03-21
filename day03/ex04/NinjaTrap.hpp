#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
		NinjaTrap();
		NinjaTrap(const std::string & name);
		~NinjaTrap();
		NinjaTrap(NinjaTrap & src);
		NinjaTrap & operator=(NinjaTrap const & src);

		void ninjaShoebox(FragTrap & frag);
		void ninjaShoebox(ScavTrap & scav);
		void ninjaShoebox(NinjaTrap & ninja);
		void ninjaShoebox(ClapTrap & clap);

		void rangedAttack(std::string const & target);
		virtual void meleeAttack(std::string const & target);
		bool takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif

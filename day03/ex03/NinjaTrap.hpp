#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
private:
		NinjaTrap();
public:
		NinjaTrap(const std::string & name);
		~NinjaTrap();
		NinjaTrap(NinjaTrap & src);
		NinjaTrap & operator=(NinjaTrap & src);

		void ninjaShoebox(FragTrap & frag);
		void ninjaShoebox(ScavTrap & scav);
		void ninjaShoebox(NinjaTrap & ninja);
		void ninjaShoebox(ClapTrap & clap);
};


#endif

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap{
private:
	SuperTrap();
public:
	SuperTrap(std::string const & name);
	~SuperTrap();
	SuperTrap(SuperTrap & src);
	SuperTrap & operator = (SuperTrap const & src);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};


#endif

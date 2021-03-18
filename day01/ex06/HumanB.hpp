#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB{
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	~HumanB();
	void attack();
private:
	Weapon *_weapon;
	std::string _name;
};

#endif

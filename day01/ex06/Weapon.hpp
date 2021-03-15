#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

class Weapon{
public:
	Weapon();
	~Weapon();

	const std::string &getType() const;
	void setType(std::string & type);
private:
	std::string _type;

};

#endif

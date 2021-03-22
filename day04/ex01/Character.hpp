#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character {
private:
				std::string _name;
				AWeapon *_weapon;
				int 	_ap;
				Character();
public:
				Character(std::string const & name);
				~Character();
				Character(Character const & src);
				Character & operator = (Character const & src);

				void recoverAP();
				void equip(AWeapon *);
				void attack(Enemy *);

				std::string const & getName() const;
				int			getAP() const;
				AWeapon *	getWeapon() const;
				bool		isThereAWeapon() const;

};

std::ostream & operator << (std::ostream & o, Character const & character);




#endif

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
protected:
	AWeapon();
private:
	std::string _name;
	int 		_apcost;
	int 		_damage;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon const & src);
	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

	AWeapon & operator = (AWeapon const & src);
};

#endif

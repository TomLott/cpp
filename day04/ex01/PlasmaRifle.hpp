#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon{
private:

public:
	PlasmaRifle();
	~PlasmaRifle();

	PlasmaRifle(PlasmaRifle & src);
	PlasmaRifle & operator = (PlasmaRifle const & src);
	void attack() const;
};


#endif

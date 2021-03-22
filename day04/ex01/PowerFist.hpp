#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon {
private:

public:
			PowerFist();
			~PowerFist();
			PowerFist(PowerFist const & src);
			PowerFist & operator = (PowerFist const & src);
			void attack() const;
};


#endif

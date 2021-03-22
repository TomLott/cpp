#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	std::cout << AWeapon::getName() << " was created" << std::endl;
}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist &src) : AWeapon(src) {
	std::cout << AWeapon::getName() << " was copied." << std::endl;
}

PowerFist & PowerFist::operator=(const PowerFist &src) {
	if (this != &src){
		AWeapon::operator=(src);
	}
	return (*this);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

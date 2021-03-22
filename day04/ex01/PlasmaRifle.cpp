#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	std::cout << AWeapon::getName() << "was created." << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &src) : AWeapon(src){

}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &src) {
	if (this != &src){
		AWeapon::operator=(src);
	}
	return (*this);
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {}
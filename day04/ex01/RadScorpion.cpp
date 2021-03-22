#include "RadScorpion.hpp"


RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(src) {
}

RadScorpion & RadScorpion::operator=(const RadScorpion &src) {
	if (this != &src){
		Enemy::operator=(src);
	}
	return (*this);
}
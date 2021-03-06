#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}
Ice::~Ice() {

}
Ice::Ice(const Ice &src) : AMateria(src) {
	_xp = src._xp;
}
Ice & Ice::operator=(const Ice &src) {
	if (this != &src){
		AMateria::operator=(src);
	}
	return (*this);
}

AMateria * Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName()
			  << "*" << std::endl;
	AMateria::use(target);
}


#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){

}

Cure::~Cure() {

}

Cure::Cure(const Cure &src) : AMateria(src){
	if (this != &src) {
		_xp = src._xp;
	}
}

Cure & Cure::operator=(const Cure &src) {
	if (this != &src){
		AMateria::operator=(src);
		_xp = src._xp;
	}
	return (*this);
}

AMateria * Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}


#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
	_type = type;
	_xp = 0;
}

AMateria::AMateria() {

}
AMateria::~AMateria() {

}

unsigned int AMateria::getXP() const {
	return (_xp);
}

std::string const & AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter &target) {
	_xp += 10;
	(void)target;
}

AMateria::AMateria(const AMateria &src) {
	if (this != &src) {
		_xp = src._xp;
		_type = src._type;
	}
}

AMateria & AMateria::operator=(const AMateria &src) {
	if (this != &src){
		_xp = src._xp;
		_type = src._type;
	}
	return (*this);
}

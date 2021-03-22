#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string const & name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just append." << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &src) {
	this->_name = src._name;
}

Victim & Victim::operator=(const Victim &src) {
	if (this != &src)
		this->_name = src._name;
	return (*this);
}

std::string Victim::getName() const{
	return (this->_name);
}

void Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator << (std::ostream & o, Victim & src){
	o << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return (o);
}

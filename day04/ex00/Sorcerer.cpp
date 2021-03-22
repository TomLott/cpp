#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string const &name, const std::string &title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src) {
	if (this != &src)
		*this = src;
}

Sorcerer & Sorcerer::operator = (Sorcerer const & src){
	if (this != &src){
		this->_name = src._name;
		this->_title = src._title;
	}
	return (*this);
}

std::string Sorcerer::getName() const {
	return (this->_name);
}

std::string Sorcerer::getTitle() const {
	return (this->_title);
}

void Sorcerer::polymorph(const Victim &src) const {
	src.getPolymorphed();
}

std::ostream & operator << (std::ostream &o, const Sorcerer & src){
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}

#include "AssaultTerminator.hpp"
#include <iostream>


AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout <<  "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src) {
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &src) {
	return (*this);
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::battleCry() const {
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

ISpaceMarine * AssaultTerminator::clone() const {
	return (new AssaultTerminator());
}

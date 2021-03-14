#include "Pony.hpp"

Pony::Pony(std::string s) {
	this->_name = s;
}
Pony::~Pony() = default;

void Pony::fly(){
	std::cout << "Pony " << this->_name << " has flown away." << std::endl;
}

const std::string & Pony::getName() const { return (this->_name);}
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fpv = 0;
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	_fpv = src.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this==&rhs)
		return (*this);
	this->_fpv = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpv;
}

void Fixed::setRawBits(int const raw){
	this->_fpv = raw;
}
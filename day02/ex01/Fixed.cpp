#include "Fixed.h"
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fpv = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int param) {
	std::cout << "Int constructor called" << std::endl;
	std::cout << "int before :" << param << std::endl;
	this->_fpv = (param << _bits);
	std::cout << "int after :" << _fpv << std::endl;
}

Fixed::Fixed(const float param){
	std::cout << "Float constructor called" << std::endl;
	std::cout << "float before :" << param << std::endl;
	this->_fpv =  param * (1 << _bits);
	std::cout << "after :" << _fpv << std::endl;
}

int Fixed::getRawBits() const {
	return (this->_fpv);
}

Fixed & Fixed::operator = (const Fixed &rhs){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_fpv = rhs.getRawBits();
	return (*this);
}


void Fixed::setRawBits(const int raw) {
	_fpv = raw;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	_fpv = src.getRawBits();
}

std::ostream &operator<<(std::ostream &o, const Fixed &rhs) {
	o << rhs.toFloat();
	std::cout << "to float " << rhs.toFloat() << std::endl;
	return (o);
}

int Fixed::toInt() const {
	return (_fpv >> _bits);
}

float Fixed::toFloat() const {
	return ((float)(_fpv) / (float)(1 << _bits));
}

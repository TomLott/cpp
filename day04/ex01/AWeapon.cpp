#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::~AWeapon() {
	std::cout << "Weapon destructor" << std::endl;
}

std::string const & AWeapon::getName() const {
	return (this->_name);
}

int AWeapon::getAPCost() const {
	return (this->_apcost);
}

int AWeapon::getDamage() const {
	return (this->_damage);
}

AWeapon::AWeapon(const AWeapon &src) {
	if (this != &src){
		_name = src._name;
		_apcost = src._apcost;
		_damage = src._damage;
	}
}

AWeapon & AWeapon::operator=(const AWeapon &src) {
	if (this != &src){
		this->_name = src.getName();
		this->_damage = src.getDamage();
		this->_apcost = src.getAPCost();
	}
	return (*this);
}
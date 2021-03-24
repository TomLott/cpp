#include "Character.hpp"

Character::Character() {
	std::cout << "Character created." << std::endl;
	_weapon = nullptr;
}
Character::~Character() {
	delete _weapon;
}

Character::Character(const std::string &name) {
	std::cout << "Character created." << std::endl;
	_name = name;
	_ap = 40;
	_weapon = nullptr;
}

Character::Character(const Character &src) {
	if (this != &src){
		_name = src._name;
		_ap = src._ap;
		_weapon = src._weapon;
	}
}

Character & Character::operator = (const Character &src) {
	if (this != &src){
		_name = src._name;
		_ap = src._ap;
		_weapon = src._weapon;
	}
	return (*this);
}

void Character::recoverAP() {
	if (_ap >= 40) {
		std::cout << "AP is already full" << std::endl;
		return ;
	}
	_ap += 10;
	if (_ap >= 40) {
		std::cout << "AP is full now." << std::endl;
		_ap = 40;
	}
	else {
		std::cout << "AP has recovered. AP: " << _ap;
	}
}

void Character::equip(AWeapon * w) {
	_weapon = w;
	std::cout << w->getName() << " was equipped." << std::endl;
}

void Character::attack(Enemy *&enemy) {
	if (enemy == nullptr)
		return ;
	if (_weapon == nullptr)
		return ;
	if (_ap < _weapon->getAPCost()) {
		std::cout << "Not enough AP." << std::endl;
		return ;
	}
	if (enemy->getHP() <= 0) {
		std::cout << "The enemy is dead. Rest in peace" << std::endl;
		delete enemy;
		enemy = nullptr;
		return;
	}
	if (_weapon){
		_ap -= _weapon->getAPCost();
		std::cout << _name << " attacks " << enemy->getType() <<
		" with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		int hp = enemy->getHP() - _weapon->getDamage();
		if (hp <= 0){
			hp = 0;
		}
		enemy->setHP(hp);
		if (enemy->getHP() == 0){
			delete enemy;
			enemy = nullptr;
		}
	}
}

std::string const & Character::getName() const{
	return (_name);
}

int Character::getAP() const {
	return (_ap);
}

AWeapon * Character::getWeapon() const {
	return (_weapon);
}

bool Character::isThereAWeapon() const {
	if (_weapon != nullptr)
		return (true);
	return (false);
}

std::ostream & operator << (std::ostream & o, Character const & character){
	try{
		if (character.isThereAWeapon()) {
			o << character.getName() << " has " << character.getAP()
			  << "AP and wields a "
			  << character.getWeapon()->getName()
			  << std::endl;
		}
		else {
			o << character.getName() << " has " << character.getAP()
			  << "AP and unarmed" << std::endl;
		}
	}
	catch (const std::exception &e) {
		std::cout << "shit !!!!!!!!!!!!!!!!!!" << std::endl;
	}
	return (o);
}



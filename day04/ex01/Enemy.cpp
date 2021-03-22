#include "Enemy.hpp"

Enemy::Enemy() : _hp(0) {

}

Enemy::Enemy(int hp, const std::string &type) {
	std::cout << "Enemy's constructor." << std::endl;
	_hp = hp;
	_type = type;
}

Enemy::~Enemy() {
	std::cout << "Enemy's destructor." << std::endl;
}

int Enemy::getHP() const {
	return (_hp);
}

std::string Enemy::getType() const {
	return (_type);
}

void Enemy::takeDamage(int n) {
	if (n < 0)
		return ;
	this->_hp -= n;
	if (_hp < 0){
		n += _hp;
		_hp = 0;
	}
	std::cout << "Enemy got " << n << " points of damage." << std::endl;
}

Enemy::Enemy(const Enemy &src) {
	if (this != &src){
		_hp = src.getHP();
		_type = src.getType();
	}
}

Enemy & Enemy::operator=(const Enemy &src) {
	if (this != &src){
		_hp = src.getHP();
		_type = src.getType();
	}
	return (*this);
}

void Enemy::setHP(int n) {
	_hp = n;
}
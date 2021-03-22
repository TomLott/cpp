#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src) {

}

SuperMutant & SuperMutant::operator=(const SuperMutant &src) {
	if (this != &src){
		Enemy::operator=(src);
	}
	return (*this);
}

void SuperMutant::takeDamage(int n) {
	n -= 3;
	int hp = getHP();
	if (n < 0)
		return ;
	hp -= n;
	if (hp < 0){
		n += hp;
		hp = 0;
	}
	setHP(hp);
	std::cout << "Enemy got " << n << " points of damage." << std::endl;
}
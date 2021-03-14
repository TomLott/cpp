#include "ZombieEvent.hpp"


Zombie *ZombieEvent::randomChump() {
	int temp;
	std::string newName[10] = {
		"Jack",
		"Mike",
		"Antony",
		"Tom",
		"Luke",
		"James",
		"Kile",
		"Reggie",
		"Gabe",
		"Abraham"
	};
	srand(time(NULL));
	temp = std::rand() % 10;
	Zombie *zombie = new Zombie(newName[temp], _type);
	zombie->announce();
	return (zombie);
}
ZombieEvent::ZombieEvent() {

}
ZombieEvent::~ZombieEvent() {}

Zombie * ZombieEvent::newZombie(std::string &name) {
	return (new Zombie(this->_type, name));
}
void ZombieEvent::setZombieType(std::string const &type) {
	this->_type = type;
}
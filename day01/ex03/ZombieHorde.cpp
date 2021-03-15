#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {}

ZombieHorde::ZombieHorde(int N) {

	if (N <= 0) {
		std::cout << "N is negative. We set default size = 1." << std::endl;
		this->_n = 1;
	}
	else {
		this->_n = N;
	}

	this->_zombie = new Zombie[_n];

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
	for (int i = 0; i < _n; i++){
		temp = std::rand() % 10;
		_zombie[i].setType("Programmer");
		_zombie[i].setName(newName[temp]);
	}
}

ZombieHorde::~ZombieHorde() { delete [] _zombie; }

void ZombieHorde::announce() {
	for (int i = 0; i < _n; i++) {
		_zombie[i].announce();
	}
}



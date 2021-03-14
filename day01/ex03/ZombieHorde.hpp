#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde{
public:
	ZombieHorde();
	ZombieHorde(int N);
	~ZombieHorde();


private:
	int 	_n;
	Zombie *zombie;
};

#endif

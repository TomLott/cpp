#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde{
public:
	ZombieHorde();
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();


private:
	int 	_n;
	Zombie *_zombie;
};

#endif

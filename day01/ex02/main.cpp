#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(){
	Zombie* zombie3;
	Zombie* zombie4;
	Zombie* zombie1 = new Zombie("Mike", "Black");
	zombie1->announce();
	ZombieEvent zombie2;
	zombie2.setZombieType("Programmer");
	zombie3 = zombie2.randomChump();
	zombie3->announce();
	zombie4 = zombie2.randomChump();
	zombie4->announce();
	delete zombie1;
	delete zombie3;
}


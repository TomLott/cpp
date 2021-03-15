#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(){
	ZombieHorde horde(10);
	horde.announce();

	std::cout << std::endl << "And now we set -10." << std::endl;
	ZombieHorde horde1(-10);
	horde1.announce();
}


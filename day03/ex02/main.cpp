#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main(){
	bool alive;
	FragTrap *a = new FragTrap("Kenny");
	FragTrap b ("Kile");
	FragTrap c ("Mr. President");
	a->vaulthunter_dot_exe(b.getName());
	a->vaulthunter_dot_exe(b.getName());
	a->vaulthunter_dot_exe(b.getName());
	a->takeDamage(20);
	a->beRepaired(20);
	a->meleeAttack(b.getName());
	b.takeDamage(20);

	b.beRepaired(30);

	for (int i = 0; i < 8; i++){
		if (!(alive = a->takeDamage(20))){
			std::cout << "Oh my God! They killed " << a->getName() << "! You bastards!" << std::endl << std::endl;
						delete a;
						a = nullptr;
						break;
		}
	}

	for (int i = 0; i < 8; i++){
		c.vaulthunter_dot_exe(b.getName());
	}
	std::cout << std::endl;

	ScavTrap *d = new ScavTrap("CJ");
	d->challengeNewcomer();
	d->meleeAttack(b.getName());
	b.takeDamage(d->getMeleeAttackDamage());
	d->beRepaired(10);

	for (int i = 0; i < 5; i++){
		d->challengeNewcomer();
	}
	std::cout << std::endl;


	FragTrap e(b);

	delete a;
	delete d;

}
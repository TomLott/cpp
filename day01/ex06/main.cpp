#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"

int main(){
	Weapon *a_weapon = new Weapon();
	a_weapon->setType("crude spiked club");

	Weapon *b_weapon = new Weapon();
	b_weapon->setType("some other type of club");

	HumanA *a = new HumanA("Alex", a_weapon->getType());
	a->attack();
	HumanB *b = new  HumanB("Mike", b_weapon->getType());
	b->attack();
}


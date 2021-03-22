#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"

int  main(){
		Character* me = new Character("me");
		std::cout << *me;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		me->attack(b);
		me->attack(b);
		me->attack(b);
		me->attack(b);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		delete me;


		std::cout << "___________ " << std::endl;


		Character Tom("Tom");

		Enemy 	*Jerry = new Enemy(50, "The Mouse");

		AWeapon *sword = new PlasmaRifle();

		Tom.attack(Jerry);

		Tom.equip(sword);

		Tom.attack(Jerry);

		std::cout << Tom << std::endl;


		return 0;
}


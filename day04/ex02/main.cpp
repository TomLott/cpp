#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "================" << std::endl;

	Squad squad;

	squad.push(new AssaultTerminator());
	squad.push(new TacticalMarine());
	squad.push(new AssaultTerminator());
	squad.push(new TacticalMarine());
	for (int i = 0; i < 4; i++){
		std::cout << "+++++++" << std::endl;
		squad.getUnit(i)->battleCry();
		squad.getUnit(i)->rangedAttack();
		squad.getUnit(i)->meleeAttack();
	}
	return (0);
}
